### ![en](https://flagcdn.com/20x15/gb.png) [English Here](README.md)

# ssbu-xref-db

スマブラSPの静的解析データベース．

Ghidraから抽出したxref，関数の情報，デコンパイル結果などを，他のツールやプロジェクトで再利用できるファイルとして保存しています．
`CONSUMER_SOURCES`に追加したプロジェクトがマングル名で使っている関数は，`Function Referenced By`列にそのプロジェクト名が入ります．

対象はVer.13.0.5のmain (NSOとしてGhidraに読み込み，image base 0x7100000000)．

## ディレクトリ構成

```
.
├── INDEX.md                      DB全体の目次と生成元の情報 (自動生成)
├── RUNTIME_FLOW.md               call-snifferを使った実機検証の手順
├── searches/                     ソースデータ
│   ├── memory-search_all.md      検索結果のソース (新しい語を足すときはここ)
│   ├── memory-search_<name>.csv  検索ごとのCSV (split.pyが生成)
│   ├── memory-search_all.csv     全検索を1ファイルに集約
│   ├── known_hash40.txt          DB生成時に足すhash40ラベル (1行に1識別子)
│   └── split.py                  md -> CSV変換
├── scripts/
│   ├── DumpXrefs.java            DBを生成するGhidraスクリプト
│   ├── remap_version.py          ゲームのバージョン間でオフセットを読み替える
│   ├── generate_hooks.py         call-snifferのhookを生成
│   ├── ingest_call_log.py        call-snifferのログをruntime xrefに集計
│   └── build_*_map.py            stage / ruleの対応表を作る
├── xrefs/                        検索ごとのxref一覧
├── funcs/                        関数単位サマリ + 全カテゴリ集計funcs_all.csv
├── reports/                      人間向けレポート
│   ├── report_<name>.md          カテゴリごとの上位関数
│   ├── report_all.md             全カテゴリ横断
│   ├── coverage.md               シンボル / 接続性 / 他のプロジェクトからの参照の状況
│   └── callgraph_<name>.mmd      カテゴリ別callgraph (Mermaid)
├── chains/                       呼出チェーンBFS (上下方向)
├── tables/                       横断テーブル
│   ├── vtables.csv               クラス -> スロット -> 関数
│   ├── typeinfo.csv              RTTI / typeinfo / VTT
│   ├── clones.csv                デコンパイル一致グループ
│   ├── symbols.csv               バイナリ内の全シンボル
│   ├── functions.csv             全関数と本体の範囲 (アドレス -> 関数の厳密な逆引き)
│   ├── call_sites.csv            静的なcallの位置 -> 呼び先の関数
│   ├── strings.csv               バイナリ内の全文字列 (xref数付き)
│   ├── string_xrefs.csv          文字列 -> 参照箇所 -> 参照元の関数
│   ├── constants.csv             定数値の逆引きインデックス
│   ├── namespaces.csv            名前空間ごとの関数数
│   ├── structs.csv               構造体 / 共用体のフィールド一覧
│   ├── enums.csv                 列挙型の値 -> 名前
│   ├── segments.csv              メモリブロック (.text/.rodata/.data等)
│   ├── imports.csv               外部モジュールから取り込んでいるシンボル
│   ├── hash40_loads.csv          MOVZ/MOVKでhash40をロードしている全箇所 (識別子逆引き)
│   ├── hash40_data_refs.csv      dataに置かれたラベル付きhash40と隣のハンドラ
│   ├── meta.csv                  生成に使ったプログラム，バイナリのMD5，Ghidraのバージョンなど
│   ├── runtime_xrefs.csv         call-snifferのログで見えた呼び出し元 -> 呼び先 (ingest_call_log.py)
│   ├── runtime_xref_summary.csv  同じものを呼び先ごとに集約し，呼び出し元を1セルに並べたもの (ingest_call_log.py)
│   ├── curated_names.csv         コードで確かめた関数名 (手で管理，Ghidraにも適用済み)
│   └── version_map_13.0.4_13.0.5.csv  13.0.4 -> 13.0.5のオフセット対応表
├── rust-externs/                 Rust externブロック (<category>.rs，all.rs)，辿った関数のうちdynsymのマングル名を持つものだけ
└── decompiled/                   関数ごとのC擬似コード，Mermaid CFG，アセンブリ
```

関連リポジトリ:

- [ssbu-socket-sniffer](https://github.com/Atamol/ssbu-socket-sniffer): ソケット監視 / 対チートmod
- [ssbu-call-sniffer](https://github.com/Atamol/ssbu-call-sniffer): 動的解析用のmodで，`scripts/generate_hooks.py`を使って本DBからhookを生成し，そのログを`scripts/ingest_call_log.py`で`tables/runtime_xrefs.csv`に集計すると，静的解析で見えなかった間接呼び出しが分かります．
- [ssbu-decomp](https://github.com/sbergeron42/ssbu-decomp)，[SSBU-Dump-Scripts](https://github.com/rubendal/SSBU-Dump-Scripts): 関数名とhash40ラベルの参照元

## アドレスの規約

- `searches/`のLocationは13.0.5の絶対アドレス (`71xxxxxxxx`) なので，GhidraのMemory Searchの表をそのまま貼れます．
- `Function Offset`などの`*_offset`列はimage offset (アドレス - 0x7100000000) で，`skyline::hook(offset = ...)`にそのまま使えます．
- NSOファイル上のオフセットはimage offset + 0x100です．Binary Loaderで生読み込みした13.0.4以前のDBと，socket-snifferの`OFF_*`定数のうち`- 0x100`して使う.text側はこのオフセットを使い，BSS側の`OFF_*`と`OFF_UPDATE_TAG`はimage offsetです．
- 13.0.4のオフセットは`py scripts/remap_version.py map <off>`で13.0.5に読み替えます (逆は`unmap`)．

## 使い方

### 検索結果を更新

1. Ghidraでmemory searchを実行します．
2. 結果を`searches/memory-search_all.md`に追記します (`- <name>:`のあとにコードブロック)．
3. 新しい語を`split.py`の`CATEGORY_ORDER`に足してから (足さないと`Other`に入ります)，`py searches/split.py`でCSVを再生成します．

### Ghidraで解析

1. Ghidraで`main_decompressed_v13.0.5`を開きます．
2. Script ManagerのManage Script Directoriesから`scripts/`を追加します．
3. `SSBU`カテゴリの`DumpXrefs.java`を実行します．

実行が終わるとINDEX.mdが更新され，テーブル，レポート，デコンパイル結果が書き出されます．引数 (`key=value`) はすべて省略できます．

- `root=<dir>`: 入出力の基準 (既定は`scripts/`の1つ上，つまりこのリポジトリ)
- `deps=<dir>`: 依存先の相対パスの基準 (既定は`root`)
- `only=<a,b>`: 処理する検索
- `tables=<a,b|all|none>`: 書き出すテーブル
- `decomp=false`: デコンパイルを省略
- `clean=false`: 生成済みファイルを消さずに上書き
- `game_version=<str>`: meta.csvとINDEX.mdに記録するバージョン

`clean=true` (既定) では今回書き直す生成物だけを事前に消し，`only=`に含まれないカテゴリ，`tables=`に含まれないテーブル，`INCLUDE_*`で無効にした処理の出力と手で管理しているファイルは残します．

`only=`を付けても`funcs/funcs_all.csv`，`reports/report_all.md`，`reports/coverage.md`，`rust-externs/all.rs`，INDEX.mdは選んだカテゴリだけから書き直され，`clones`，`constants`，`hash40_loads`のテーブルも`tables=`から外さない限り同じように書き直されるので，コミット前には全体を実行します．

### 出力の使い分け

- DB全体: `INDEX.md`
- フックすべき関数: `reports/report_all.md`
- 未参照のフック候補: `funcs/funcs_all.csv`を`Function Referenced By`列が空のものでフィルタ
- コピペ用のフックの骨格: `rust-externs/<category>.rs` (辿った関数にマングル名があるときだけ出力され，今のDBには該当なし)
- マングル名: `funcs/funcs_all.csv`の`Function Symbol`列
- 関数の中身: `decompiled/<name>__<addr>.c`
- 制御フロー: `decompiled/<name>__<addr>.mmd` (GitHubで直接描画)
- 複数カテゴリにまたがる関数: `funcs/funcs_all.csv`の`Categories`列
- クラス階層: `tables/typeinfo.csv` + `tables/vtables.csv`
- 構造体のレイアウト (`*(uint*)(this+0x28)`の正体など): `tables/structs.csv`
- enum値の逆引き: `tables/enums.csv`
- 定数値の使用箇所: `tables/constants.csv` (例: PRUDP packet ID，NEX error code)
- ある文字列が参照されているか: `tables/strings.csv`または`tables/string_xrefs.csv`
- 特定の文字列を参照する全関数: `tables/string_xrefs.csv`を`String Value`列でフィルタ
- hash40識別子の実装関数: `tables/hash40_loads.csv`をラベル名 (例: `sleep_parallel_matching`) でフィルタします．関数に属していないコードからのロードは関数の列が空になります．
- メモリブロック・セクションの配置: `tables/segments.csv`
- 外部モジュールから取り込んでいるシンボル: `tables/imports.csv`
- 名前空間ごとの規模: `tables/namespaces.csv`
- シンボル全件をgrep: `tables/symbols.csv`
- アドレスがどの関数に属するか: `tables/functions.csv`で，`Ranges`列はGhidra上の本体をimage offsetの`lo-hi` (hiを含む，複数の範囲は`;`区切り) で持つので，どの範囲にも入らないアドレスはGhidraに関数が無いコードです．`Name`列は`Callers`列と同じ形式です．`generate_hooks.py`とcall-snifferの`decode_log.py`はこの表があれば使い，`ingest_call_log.py`は`tables/call_sites.csv`もある場合だけ使います．
- Ghidraがそのcallを把握しているか: `tables/call_sites.csv`で，命令 (`Site`) から関数の入口 (`Target`) へのcall参照を1行ずつ持ち，`Thunked`はthunkが最終的に行き着く関数です．thunk経由のcallは`Target`がthunkになるので，`Target`か`Thunked`で絞ると関数に届くcall元をすべて引けます．`ingest_call_log.py`はログの戻り先の直前の命令をこの表で引き，Ghidraが持っているcall (`direct`) と見落としたcallを分けます．
- 重複実装の検出: `tables/clones.csv`の`Clone Hash`列
- 呼出経路: `chains/chains_<name>.csv`
- カテゴリ全体の関数関係: `reports/callgraph_<name>.mmd`
- 解析の進み具合: `reports/coverage.md`
- バージョン更新時のsig-scan用バイト列: `Function Fingerprint`列 (先頭32バイト)
- エラーコードやmagic number: `Constants`列
- 関数が触っているグローバル変数: `Globals Accessed`列
- 既存のGhidra注釈 (Pre/Post/EOL/Plate/Repeatable): `Comments`列
- デコンパイル失敗時のフォールバック: `decompiled/<name>__<addr>.asm`
- 未命名の`FUN_xxx`の名前候補: `Suggested Name`列と`External Names`列 (curated，ssbu-decompの順)
- 関数の重要度の判定: `Function Size`，`Function Basic Blocks`，`Function Incoming Refs`の組み合わせ
- DBの生成元のプログラムとバイナリ: `tables/meta.csv`

### プロジェクト連携

`scripts/DumpXrefs.java`の`CONSUMER_SOURCES`に他のプロジェクトのソースパスを追加すると，そこで使われているマングル名 (`_Z...`) を検出して`Function Referenced By`列にそのプロジェクト名が入ります．importのthunkは元のマングル名で照合します．

```java
static final List<String> CONSUMER_SOURCES = List.of(
    "../../system/ssbu-socket-sniffer/src",
    "../some-other-mod/src");
```

### ゲームの更新に追従する

1. 新旧のmainを命令単位で突き合わせて`tables/version_map_<old>_<new>.csv`を作ります (列: `old_start,old_end,delta,confidence,region`)．この手順のツールはリポジトリにありません．
2. `DumpXrefs.java`の`VERSION_MAP_CSV`を13.0.4から新しいバージョンへの対応表に差し替えます．ssbu-decompの関数名は13.0.4のオフセットに対応しているので，旧バージョンが13.0.4でなければ既存の表と合成します．
3. `searches/`のLocationと`tables/`の手で管理している表のオフセットを読み替え，新しいバージョンで一致しない行を落とします．`scripts/remap_version.py --map tables/version_map_<old>_<new>.csv map <off>...` (またはその`VersionMap`クラス) は渡したオフセットを変換するだけでファイルは書き換えないので，Locationは変換後のオフセットに0x7100000000を足して`searches/memory-search_all.md`に書き戻し，`split.py`を再実行します (`memory-search_*.csv`はmdから作り直されます)．
4. Ghidraで新しいバージョンに対して`DumpXrefs.java`を`game_version=<new>`付きで実行します．

## 主な設定

`scripts/DumpXrefs.java`の冒頭の定数で挙動を変えます．

- `MAX_DEPTH`: xrefを辿る段数
- `INCLUDE_DECOMP` / `DECOMP_TIMEOUT`: デコンパイルの有無とタイムアウト (秒)
- `INCLUDE_CHAINS` / `CHAIN_DEPTH` / `CHAIN_FANOUT`
- `INCLUDE_CFG` / `INCLUDE_STRUCT_ACCESS` / `INCLUDE_CLONES` / `INCLUDE_VTABLES`
- `INCLUDE_FINGERPRINT` / `INCLUDE_CONSTANTS` / `INCLUDE_TYPEINFO`
- `INCLUDE_RUST_EXTERNS` / `RUST_EXTERNS_TOP_N`
- `INCLUDE_CALLGRAPH` / `CALLGRAPH_TOP_N`
- `INCLUDE_SYMBOL_CATALOG` / `INCLUDE_FUNCTION_CATALOG` / `INCLUDE_CALL_SITES` / `INCLUDE_STRING_CATALOG`
- `INCLUDE_CONSTANTS_INDEX` / `CONSTANTS_INDEX_MIN_USERS`
- `INCLUDE_NAMESPACE_TREE` / `INCLUDE_INDEX_MD` / `INCLUDE_META`
- `INCLUDE_STRUCTS_CATALOG` / `INCLUDE_ENUMS_CATALOG`
- `INCLUDE_STRING_XREFS` / `INCLUDE_SEGMENTS` / `INCLUDE_IMPORTS`
- `INCLUDE_DISASM` / `INCLUDE_COMMENTS` / `INCLUDE_GLOBALS_ACCESS`
- `INCLUDE_NAME_HINTS`
- `INCLUDE_BRUTE_REFS`: Ghidraが見落としたポインタをdataブロックでスキャン
- `INCLUDE_STRING_TABLES`: 文字列ポインタの表を検出
- `INCLUDE_HASH40` / `INCLUDE_HASH40_FULL_SCAN`: MOVZ/MOVKパターンのhash40ロードを検出 (FULL_SCANは関数外のコードも含めて全命令を走査)
- `HASH40_LOADS_PER_FUNC`: `Hash40 Loads`列に載せる数の上限 (`tables/hash40_loads.csv`には全件を出力)
- `HASH40_LABELS_CSV`: ParamLabels.csvのパス (既定は`../SSBU-Dump-Scripts/ParamLabels.csv`)
- `VERSION_MAP_CSV`: ssbu-decompの関数名を読み替える対応表
- `EXTERNAL_NAME_SOURCES`: 関数名の外部DB (優先順に`tables/curated_names.csv`，[sbergeron42/ssbu-decomp](https://github.com/sbergeron42/ssbu-decomp))
- `INCLUDE_EXTERNAL_FUZZY` / `EXTERNAL_FUZZY_TOLERANCE`: サイズ一致のファジーマッチ (既定はオフ)
- `CONSUMER_SOURCES`: スキャン対象にする他のプロジェクトのソースパス
- `NRO_BASE_OVERRIDE`: モジュールベース (nullならGhidraのimage base)
