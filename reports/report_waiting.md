# waiting (funcs=10, hits=18)

Top 50 functions by hit count

## 1. `FUN_7101a27570`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a27570`  (offset `0x1a27570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a27570(long param_1, undefined8 param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11516 bytes / 417 bb / 3 incoming refs
- **Match values:** waiting
- **Strings touched:** training_combo_0;set_txt_count;set_parts_score_0;kumite_on;kumite_1_chara_score;set_parts_score_1;kumite_1_no1_score;set_parts_score_2;kumite_1_all_score;NODE_PRE_REFRACT_BLEND;record_on;kumite_2;standard_on;standard_2;standard_1_chara_score;standard_1_no1_score;standard_1_all_score;set_txt_lv;mel_chara_select_high_score_none;set_txt_standard_sub;set_txt_route;standard_pic_off;match_waiting_on;match_1_chara_score;match_1_no1_score;match_1_all_score;kumite_%d
- **Callers:** FUN_7101a26200;FUN_7101a26b10;FUN_7101a2b570
- **Callees:** FUN_7101798a80;FUN_71017994c0;FUN_71017c0da0;FUN_71017d1480;FUN_7101a0cae0;FUN_7101a0dde0;FUN_7101a0e010;FUN_7101a19420;FUN_7101a19990;FUN_7101a19eb0;FUN_7101a1b4a0;FUN_7101a1ba90;FUN_7101a1bc20;FUN_7101a1be30;FUN_7101a1c070;FUN_7101a1c140;...
- **Files:** [decomp](../decompiled/FUN_7101a27570__7101a27570.c)  [cfg](../decompiled/FUN_7101a27570__7101a27570.mmd)
- **Clone hash:** `9c01e60fc013597d`

```c

void FUN_7101a27570(long param_1,undefined8 param_2,long ***********param_3,long ************param_4
                   ,long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long **********pppppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long *plVar17;
  long **********pppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long lVar23;
  long ********pppppppplVar24;
  char cVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  char cVar33;
  undefined8 *puVar34;
  long ***********ppppppppppplVar35;
// ... (1985 more lines)
```

## 2. `FUN_7101d07270`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d07270`  (offset `0x1d07270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d07270(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1060 bytes / 60 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** waiting_%s
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101d09350;FUN_7101d093b0;FUN_7101d0ee10;FUN_71023976c0;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101d07270__7101d07270.c)  [cfg](../decompiled/FUN_7101d07270__7101d07270.mmd)
- **Clone hash:** `cbe6eeb5e8021e02`

```c

void FUN_7101d07270(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined **ppuVar14;
  long *plVar15;
  ulong uVar16;
  long local_d8 [4];
  long lStack_b8;
  undefined **local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  undefined ***local_90;
  
  if (*(int *)(param_1 + 0x2ac) == 0) {
    if ((*(long *)(param_1 + 0x150) != 0) &&
       (lVar12 = *(long *)(param_1 + 0x88), *(char *)(lVar12 + 0xc2) == '\0')) {
      FUN_71003a4ca0((uint *)&local_b0,"waiting_%s",&DAT_7104421055,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar12 + 0x80) + 0x10),(long)&local_a8);
      *(undefined1 *)(lVar12 + 0xc2) = 1;
    }
    *(undefined1 *)(param_1 + 0x159) = 0;
  }
  plVar1 = (long *)(param_1 + 0x140);
// ... (166 more lines)
```

## 3. `FUN_7101cfbe40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cfbe40`  (offset `0x1cfbe40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cfbe40(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2704 bytes / 103 bb / 3 incoming refs
- **Match values:** waiting
- **Strings touched:** set_parts_winner_team;game_team;set_parts_winner_panel;game_single;set_parts_title;set_txt_tnmt_title;set_txt_rule;mel_tournament_chart_rule;progress_off;waiting_type_alive;waiting_type_lose;set_txt_title_prog;set_band_color_00;set_band_color_01
- **Callers:** FUN_71018b7a20;FUN_71018b9f90;FUN_71018bbed0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710323eba0;FUN_71032cbf30;FUN_7103397500;FUN_7103773200;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103779d90;FUN_710377a280;FUN_71037a2270;FUN_71037ab600;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101cfbe40__7101cfbe40.c)  [cfg](../decompiled/FUN_7101cfbe40__7101cfbe40.mmd)
- **Clone hash:** `b2f63c6a4b3e6a51`

```c

void FUN_7101cfbe40(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long ***ppplVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long ****pppplVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  char *pcVar11;
  undefined *puVar12;
  byte *pbVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  uint *puVar22;
  ushort uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined **local_1188;
  undefined8 *local_1180;
  undefined **local_1178;
// ... (423 more lines)
```

## 4. `FUN_71032ebcc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032ebcc0`  (offset `0x32ebcc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032ebcc0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 436 bytes / 13 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** waitingplayer_1;waitingplayer_2
- **Callers:** FUN_7103349a50
- **Callees:** FUN_7103238a70;FUN_710353da30;FUN_7103540b10;FUN_7103778300;FUN_7103778c70;FUN_71037790a0
- **Files:** [decomp](../decompiled/FUN_71032ebcc0__71032ebcc0.c)  [cfg](../decompiled/FUN_71032ebcc0__71032ebcc0.mmd)
- **Clone hash:** `0c9f86253640bf8a`

```c

void FUN_71032ebcc0(long param_1,ulong param_2,long *********param_3,byte ****param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  long lVar9;
  uint local_68 [2];
  uint local_58 [2];
  
  lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x80);
  bVar3 = ((ulong)param_4 & 0xffffffffff) == 0;
  bVar4 = (ulong)param_4 >> 0x38 != 0xc1;
  pcVar1 = "waitingplayer_2";
  if (bVar4 || bVar3) {
    pcVar1 = "waitingplayer_1";
  }
  ppppppppplVar6 = param_3;
  ppppbVar7 = param_4;
  pppplVar8 = (long ****)param_5;
  FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x168),(long)pcVar1);
  FUN_71037790a0(*(long *)(lVar9 + 0x198),1,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                 param_8);
  FUN_71037790a0(*(long *)(lVar9 + 0x1a8),1,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,param_7,
                 param_8);
  if ((param_2 >> 0x38 == 0xc1) && ((param_2 & 0xffffffffff) != 0)) {
    ppppppppplVar6 = (long *********)0x2;
    uVar5 = FUN_7103238a70(param_2,(ulong)param_3 & 0xffffffff,2);
    if ((uVar5 & 0xffffffffff) == 0) {
      local_58[0] = 0xffffff;
      FUN_7103778c70(*(long *)(lVar9 + 0x198),local_58,ppppppppplVar6,ppppbVar7,pppplVar8,param_6,
                     param_7,param_8);
    }
// ... (37 more lines)
```

## 5. `FUN_7101a23a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** title_on;headcount_on;day_off;controller_entry_off;ready_out;controller_out;back_btn_short;back_btn_long;set_btn_01_back;set_btn_02_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_02_title;txt_pos_normal;set_txt_title_00;set_txt_onoff;scene_title_btn;mel_chara_select_melee_normal;mel_chara_select_various_normal;mel_chara_select_suddendeath_normal;scene_title_txt_00;title_off;mel_chara_select_challengeboard;mel_chara_select_campaign;mel_chara_select_setorg;mel_chara_select_standard;training_combo_0;mel_chara_select_training;...
- **Callers:** FUN_7101a20200
- **Callees:** FUN_7103240d30;FUN_71032d6ce0;FUN_71033112b0;FUN_710337df20;FUN_7103764e60;FUN_7103770b30;FUN_71037717d0;FUN_7103771d60;FUN_7103772070;FUN_71037760f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101a23a80__7101a23a80.c)  [cfg](../decompiled/FUN_7101a23a80__7101a23a80.mmd)
- **Clone hash:** `d4786689279755fe`

```c

void FUN_7101a23a80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  int *piVar14;
  undefined8 uVar15;
  byte ****ppppbVar16;
  undefined4 uVar17;
  long lVar18;
  byte *pbVar19;
  code *pcVar20;
  undefined4 uVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  long *plVar29;
  uint uVar30;
  float fVar31;
  undefined8 local_278;
  undefined **local_260;
  ulong local_258;
  undefined **local_250;
// ... (1398 more lines)
```

## 6. `FUN_71032ec140`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032ec140`  (offset `0x32ec140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032ec140(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4336 bytes / 191 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** hit_area;set_parts_03;unread_off;selector_0;set_parts_00;set_parts_01;set_parts_02;set_parts_04;set_parts_05;plt_off;set_txt_key;type_00;set_parts_waiting_info;set_rep_icn_1;set_rep_icn_2;set_gauge_waiting;set_parts_key_00;all_off
- **Callers:** FUN_7101977420
- **Callees:** FUN_7101989a30;FUN_7101afdf90;FUN_7101afe2e0;FUN_7101afe2f0;FUN_7101afe3e0;FUN_710323b9e0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_7103770b30;FUN_71037717d0;FUN_7103771a80;FUN_7103772070;FUN_7103773200;FUN_71037760f0;...
- **Files:** [decomp](../decompiled/FUN_71032ec140__71032ec140.c)  [cfg](../decompiled/FUN_71032ec140__71032ec140.mmd)
- **Clone hash:** `6bde9277e2add933`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71032ec140(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long *********ppppppppplVar13;
  long *********ppppppppplVar14;
  long *********ppppppppplVar15;
  long *********ppppppppplVar16;
  long *********ppppppppplVar17;
  long *********ppppppppplVar18;
  long *********ppppppppplVar19;
  long *********ppppppppplVar20;
  long *********ppppppppplVar21;
// ... (862 more lines)
```

## 7. `FUN_7101f94540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** waiting
- **Strings touched:** LuaAutomaticTest;print;set_fighter_num;gauge_parts_on;set_fighter_kind;get_fighter_kind;set_fighter_color;set_fighter_cp_flag;change_fighter;is_reloaded_fighter;is_fighter_status_wait;set_all_fighter_visibility;mode_empty_03;get_fighter_animcmd;set_stage;set_stage_visibility;set_waiting_frames;get_waiting_frames;begin_melee;is_melee_started;start_melee;end_melee;start_measuring_load;end_measuring_load;set_melee_pause;random;set_all_info_visibility;set_bool_of_debug_resident_menu;get_bool_of_debug_resident_menu;set_int_of_debug_resident_menu;get_int_of_debug_resident_menu;set_float_of_debug_resident_menu;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f94540__7101f94540.c)  [cfg](../decompiled/FUN_7101f94540__7101f94540.mmd)
- **Clone hash:** `75eef1448bd6895c`

```c

void FUN_7101f94540(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_28;
  long local_20;
  int local_18;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_28,param_1,(undefined **)"LuaAutomaticTest",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"print",(long ****)FUN_7101f8fa20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_num",(long ****)FUN_7101f8fb10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_kind",(long ****)FUN_7101f8fbb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_kind",(long ****)FUN_7101f8fcf0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_color",(long ****)FUN_7101f8fdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_cp_flag",(long ****)FUN_7101f8fe80,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_fighter",(long ****)FUN_7101f8ffc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reloaded_fighter",(long ****)FUN_7101f900f0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_fighter_status_wait",(long ****)FUN_7101f901d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_all_fighter_visibility",(long ****)FUN_7101f90320,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_animcmd",(long ****)FUN_7101f90500,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage",(long ****)FUN_7101f905a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (122 more lines)
```

## 8. `FUN_7100017ae0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100017ae0`  (offset `0x17ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100017ae0(size_t * * * * * * * param_1, long param_2, char * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, uint * param_6, undefined8 param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 3632 bytes / 232 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** select/poll returned error;We are completely uploaded and fine
;NODE_PRE_REFRACT_BLEND;Ignoring the response-body
;Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)
;Leftovers after chunking: %zu bytes
;dys_yoga03_l_03_set;Rewinding %zu bytes
;Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld
;The requested document is not new enough
;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Done waiting for 100-continue
;Rewinding stream by : %zd bytes on url %s (zero-length body)
;plate_side;Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)
;we are done reading and this is set to close, stop send
;transfer closed with outstanding read data remaining;Operation timed out after %ld milliseconds with %ld bytes received;Failed writing data;select_item;%s in chunked-encoding;transfer closed with %ld bytes remaining to read;Failed to alloc scratch buffer!;Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.;The entire document is already downloaded;HTTP server doesn't seem to support byte ranges. Cannot resume.;The requested document is not old enough
;Simulate a HTTP 304 response!

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100002af0;FUN_7100004200;FUN_71000086c0;FUN_71000093f0;FUN_710000bba0;FUN_710000fb30;FUN_7100012930;FUN_7100012dc0;FUN_7100012df0;FUN_71000130b0;FUN_7100014700;FUN_7100015020;FUN_71000151d0;FUN_7100015270;FUN_7100015800;FUN_7100015de0;...
- **Files:** [decomp](../decompiled/FUN_7100017ae0__7100017ae0.c)  [cfg](../decompiled/FUN_7100017ae0__7100017ae0.mmd)
- **Clone hash:** `05edffe8f78d3329`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100017ae0(size_t *******param_1,long param_2,char *param_3,size_t *******param_4,
                    size_t *******param_5,uint *param_6,undefined8 param_7,size_t *******param_8)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar10;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  undefined8 extraout_x1_09;
  long extraout_x1_10;
  long extraout_x1_11;
  long extraout_x1_12;
  long extraout_x1_13;
  long extraout_x1_14;
  char *pcVar15;
  long extraout_x1_15;
  size_t ************ppppppppppppsVar16;
// ... (707 more lines)
```

## 9. `FUN_71018b68a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b68a0`  (offset `0x18b68a0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71018b68a0(undefined1[16] param_1, float param_2, float param_3, float param_4, undefined8 * param_5, undefined8 param_6, long * * * * * * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 1184 bytes / 67 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** waiting;replay_%s
- **Callees:** FUN_71003a4ca0;FUN_7101cfe670;FUN_7101cfff90;FUN_7101d02530;FUN_7101d029a0;FUN_7101d0a1c0;FUN_7101d0ba20;FUN_7101d0fc10;FUN_710239acc0;FUN_710239df10;FUN_710323cb80;FUN_71037760f0;FUN_7103776910;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;...
- **Files:** [decomp](../decompiled/FUN_71018b68a0__71018b68a0.c)  [cfg](../decompiled/FUN_71018b68a0__71018b68a0.mmd)
- **Clone hash:** `c2022bda129ff281`

```c

ulong FUN_71018b68a0(undefined1 param_1 [16],float param_2,float param_3,float param_4,
                    undefined8 *param_5,undefined8 param_6,long *********param_7,byte ****param_8,
                    long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  long *********ppppppppplVar11;
  uint uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar20 [16];
  undefined **local_78;
  long *local_70 [8];
  
  puVar8 = param_5;
  if (*(int *)((long)param_5 + 0x11c) == 0) {
    if ((*(uint *)(param_5 + 0x24) & 0xfffffffe) == 8) {
      lVar18 = param_5[0x2c];
      param_7 = (long *********)0x1;
      FUN_7101d029a0(lVar18,*(int *)(lVar18 + 0x1b0),1,param_8,param_9,param_10,param_11,param_12);
      lVar7 = *(long *)**(undefined8 **)(lVar18 + 0x188);
    }
// ... (211 more lines)
```

## 10. `FUN_71018b6ed0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b6ed0`  (offset `0x18b6ed0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018b6ed0(undefined1[16] param_1, float param_2, float param_3, float param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 1168 bytes / 54 bb / 1 incoming refs
- **Match values:** waiting
- **Strings touched:** set_txt_tnmt_progress;mel_tournament_chart_final_result;waiting;replay_%s
- **Callees:** FUN_71003a4ca0;FUN_7101cfff90;FUN_7101d02530;FUN_7101d029a0;FUN_7101d0a1c0;FUN_7101d0ba20;FUN_7101d0fd10;FUN_7103775dc0;FUN_7103775fa0;FUN_71037760f0;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_71018b6ed0__71018b6ed0.c)  [cfg](../decompiled/FUN_71018b6ed0__71018b6ed0.mmd)
- **Clone hash:** `c29e4e852e542892`

```c

void FUN_71018b6ed0(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                   undefined8 param_6,long ****param_7,byte ****param_8,long ****param_9,
                   undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  long *plVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar8;
  int iVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  ulong *puVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined **local_88;
  long *local_80 [8];
  
  if (*(int *)(param_5 + 0x11c) == 0) {
    if ((*(uint *)(param_5 + 0x120) & 0xfffffffe) == 8) {
      lVar12 = *(long *)(param_5 + 0x160);
      FUN_7101d029a0(lVar12,*(int *)(lVar12 + 0x1b0),1,param_8,param_9,param_10,param_11,param_12);
      FUN_71037760f0(*(long *)**(undefined8 **)(lVar12 + 0x188),1);
      if (0x12 < *(uint *)(lVar12 + 0x2a4)) goto LAB_71018b7354;
// ... (182 more lines)
```

