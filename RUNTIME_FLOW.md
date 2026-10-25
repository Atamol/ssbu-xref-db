# 実機検証フロー (call-sniffer + xref-db)

フックを仕掛けて実機で挙動を観測し，結果をxref-dbのruntime xrefに集計する手順です (Japanese only)．

## サイクル

```
フック編集 → build/deploy → enable → プレイ → fetch → decode → ingest → 解析
```

## コマンド

`ssbu-call-sniffer`で以下を実行します (ingestだけはxref-dbで実行)．

```powershell
.\deploy.ps1                                                # build，Switchへの転送，古いlogとtriggerの削除
.\enable.ps1                                                # triggerを置いてhookのinstallを開始 (ゲーム起動後)
# → 実機操作
# → 試合終了後
.\fetch.ps1                                                 # Switchからcall_sniffer_*.logを回収
py scripts/decode_log.py call_sniffer_*.log > decoded.csv   # func_id → 名前解決 + hash40ラベル

cd ../ssbu-xref-db
py scripts/ingest_call_log.py                               # runtime xref化
cd ../ssbu-call-sniffer
```

## スクリプトの機能

| script | 動作 |
|---|---|
| `deploy.ps1` | cargo skyline build → .nroをFTP転送 → 古いlogとtriggerを削除 (`-Keep`で残す) |
| `enable.ps1` | trigger (`call_sniffer.enable`) を置き，hookのinstallを開始 |
| `disable.ps1` | triggerを削除 (次回起動時はhookを入れない) |
| `fetch.ps1` | Switchからlogを回収し，回収できた分をSwitchから削除 (`-Keep`で残す) |
| `clean.ps1` | Switch上のlogを削除 (triggerは残す) |

## 出力

| ファイル | 内容 |
|---|---|
| `ssbu-call-sniffer/call_sniffer_000.log` | raw (ts，tid，func_id，lr，kind，args，FP chain) |
| `ssbu-call-sniffer/decoded.csv` | 名前解決済みのlog |
| `tables/runtime_xrefs.csv` | caller-callee edgeの集計 |
| `tables/runtime_xref_summary.csv` | calleeごとのcaller一覧 |

## hookの切り替え

`ssbu-call-sniffer/src/hooks/mod.rs`で`mod XXX;`と`XXX::install();`を編集します．hookはxref-dbで`py scripts/generate_hooks.py <category>`を実行すると`ssbu-call-sniffer/src/hooks/<category>.rs`に生成され，手で編集したファイル (先頭が`// Auto-generated`でないもの) は上書きされません．

## 解析・検索の例

```bash
# 発火回数
awk -F, '{print $3}' call_sniffer_000.log | sort | uniq -c | sort -rn

# 特定のオフセットの発火とFP chain
awk -F, '$3=="0x104554"' call_sniffer_000.log

# 時間窓
awk -F, '$1>=開始ts && $1<=終了ts' call_sniffer_000.log
```

## 注意

- `enable.ps1`はゲームを起動してプラグインのロードが終わったあとに実行します．
- 高頻度のフック (scheduler等) は，リングバッファから溢れた分のエントリが記録されず目的の時刻を取り逃すことがあるので，必要に応じてサンプリングします．
- socket-snifferを同時に動かすときは，masqueradeをoffにすると本来の処理をフックで観測できます．
- オフセットは.textの先頭が基準で，`getRegionAddress(Region::Text) + offset`が実行時のアドレスになります．Ghidra (NSOロード) のアドレスから0x7100000000を引いた値やDBの`Function Offset`と同じで，NSOファイル上のオフセット (+0x100) ではありません．
- オフセットはゲームのバージョンごとに変わるので，別バージョンで取ったlogは混ぜずにingestします．
