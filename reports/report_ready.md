# ready (funcs=70, hits=229)

Top 50 functions by hit count

## 1. `FUN_7101f89310`  (hits=22)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_AI_PLAYER_MAX;FIGHTER_AI_FIGHTER_MAX;FIGHTER_AI_ENEMY_INDEX;FIGHTER_AI_OBJECT_MAX;FIGHTER_AI_INPUT_BUFFER_MAX;FIGHTER_AI_MARK_WEAPON_MAX;FIGHTER_AI_ENEMY_MAX;FIGHTER_AI_CP_RANK_MAX;FIGHTER_AI_CP_LEVEL_9;FIGHTER_AI_CP_LEVEL_8;FIGHTER_AI_CP_LEVEL_7;FIGHTER_AI_CP_LEVEL_6;FIGHTER_AI_CP_LEVEL_5;FIGHTER_AI_CP_LEVEL_4;FIGHTER_AI_CP_LEVEL_3;FIGHTER_AI_CP_LEVEL_2;FIGHTER_AI_CP_LEVEL_1;FIGHTER_AI_MELEE_CP_LEVEL_9;FIGHTER_AI_MELEE_CP_LEVEL_8;FIGHTER_AI_MELEE_CP_LEVEL_7;FIGHTER_AI_MELEE_CP_LEVEL_6;FIGHTER_AI_MELEE_CP_LEVEL_5;FIGHTER_AI_MELEE_CP_LEVEL_4;FIGHTER_AI_MELEE_CP_LEVEL_3;gauge_parts_on;FIGHTER_AI_MELEE_CP_LEVEL_2;FIGHTER_AI_MELEE_CP_LEVEL_1;FIGHTER_AI_ITEM_PRIORITY_MAX;FIGHTER_AI_ITEM_PRIORITY_HIGH;FighterAICPType;CPU_NORMAL;CPU_STAY;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f89310__7101f89310.c)  [cfg](../decompiled/FUN_7101f89310__7101f89310.mmd)
- **Clone hash:** `f6405f789c3fe6a5`

```c

void FUN_7101f89310(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_68;
  long local_60;
  int local_58;
  
  local_60 = 0;
  local_58 = -3;
  local_68 = param_1;
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_PLAYER_MAX",(undefined **)&DAT_00000008,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_FIGHTER_MAX",(undefined **)&DAT_00000010,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_ENEMY_INDEX",(undefined **)&DAT_00000010,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_OBJECT_MAX",(undefined **)&DAT_00000011,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_INPUT_BUFFER_MAX",(undefined **)&DAT_00000010,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_MARK_WEAPON_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_ENEMY_MAX",(undefined **)0xa,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_RANK_MAX",(undefined **)&DAT_00000064,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_9",(undefined **)&DAT_00000064,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_8",(undefined **)0x4b,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_7",(undefined **)&DAT_0000003c,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_6",(undefined **)&DAT_00000030,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_5",(undefined **)&DAT_0000002a,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_68,(uint *)"FIGHTER_AI_CP_LEVEL_4",(undefined **)0x1f,param_4,param_5,
// ... (2673 more lines)
```

## 2. `FUN_7101d5c8e0`  (hits=20)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d5c8e0`  (offset `0x1d5c8e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d5c8e0(int * param_1, byte param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1388 bytes / 47 bb / 15 incoming refs
- **Match values:** ready
- **Strings touched:** fxui_ready_light_%d_%cp;set_fxui_like_00
- **Callers:** FUN_7101d5d640
- **Callees:** FUN_7103776910;FUN_710377abf0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d5c8e0__7101d5c8e0.c)  [cfg](../decompiled/FUN_7101d5c8e0__7101d5c8e0.mmd)
- **Clone hash:** `a3adc2ec80ca95ee`

```c

void FUN_7101d5c8e0(int *param_1,byte param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **local_50;
  long *local_48;
  
  if (*param_1 != -1) {
    piVar1 = param_1 + 4;
    FUN_7103776910(&local_50,(long)piVar1,(long ****)"fxui_ready_light_%d_%cp",0,0x31,param_5,
                   param_6,param_7,param_8);
    FUN_710377abf0((long *)*local_48,param_2 & 1);
    plVar2 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (undefined8 *)0x0;
    if (plVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
    FUN_7103776910(&local_50,(long)piVar1,(long ****)"fxui_ready_light_%d_%cp",1,0x31,param_5,
                   param_6,param_7,param_8);
    FUN_710377abf0((long *)*local_48,param_2 & 1);
    plVar2 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (undefined8 *)0x0;
    if (plVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
    FUN_7103776910(&local_50,(long)piVar1,(long ****)"fxui_ready_light_%d_%cp",0,0x32,param_5,
                   param_6,param_7,param_8);
    FUN_710377abf0((long *)*local_48,param_2 & 1);
    plVar2 = local_48;
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (undefined8 *)0x0;
    if (plVar2 != (undefined8 *)0x0) {
// ... (175 more lines)
```

## 3. `FUN_710183be60`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710183be60`  (offset `0x183be60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710183be60(void)`
- **Size / BBs / Incoming:** 41020 bytes / 1781 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** mode_empty_03;count_5vs5;controller_out;set_btn_01_back;set_txt_back_01;set_txt_back_00;mel_return_02;mel_over_return_02;mel_return_00;mel_over_return_00;set_btn_ready;set_parts_balloon_rule;selector_0;set_btn_03_rule;controller_in;bg_anime;chara_bg_color_01;chara_bg_color_00;selector;set_part_vs_3;set_part_vs_5;selector_1;set_btn_back;set_cursor_area;set_medal_area;back_btn_long;set_btn_02_title;txt_pos_normal;set_txt_title_00;title_on;headcount_off;day_off;...
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101686610;FUN_710168eb40;FUN_71016ea290;FUN_71016f6340;FUN_7101764000;FUN_7101797560;FUN_710179a080;FUN_710179ed00;FUN_7101838d70;FUN_710183bb20;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8720;FUN_71019e90c0;...
- **Files:** [cfg](../decompiled/FUN_710183be60__710183be60.mmd)


## 4. `FUN_710225b990`  (hits=16)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_WIIFIT_STATUS_KIND_PREV;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS;FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE;FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD;FIGHTER_WIIFIT_STATUS_KIND_FINAL_END;FIGHTER_WIIFIT_STATUS_KIND_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_THROW;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLAG_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_CHARGE_FRAME;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TARGET_NUM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_MAX_HOLD_COUNT;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_NEXT_STATUS;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_INT_TERM;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_START;FIGHTER_PACMAN_STATUS_SPECIAL_N_WORK_FLOAT_TERM;PACMAN_SPECIAL_N_ITEM_KIND_NUM;PACMAN_SPECIAL_N_ITEM_MAX_NUM;PACMAN_SPECIAL_N_RANK_MIN;PACMAN_SPECIAL_N_RANK_MAX;PACMAN_SPECIAL_N_RANK_NUM;...
- **Callers:** FUN_710226f500
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710225b990__710225b990.c)  [cfg](../decompiled/FUN_710225b990__710225b990.mmd)
- **Clone hash:** `32c74e885489c363`

```c

void FUN_710225b990(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_PREV",(undefined **)&DAT_000001e0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_HOLD",(undefined **)0x1e1,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_SHOOT",
                 (undefined **)&DAT_000001e2,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_CANCEL",(undefined **)0x1e3
                 ,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_JUMP_CANCEL",
                 (undefined **)0x1e4,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_N_END",(undefined **)0x1e5,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_JUMP",(undefined **)0x1e6,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_S_HEADING",
                 (undefined **)0x1e7,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_JUMP",
                 (undefined **)&DAT_000001e8,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_HI_END",(undefined **)0x1e9,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_BREATH",
                 (undefined **)0x1ea,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_SUCCESS",
                 (undefined **)0x1eb,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_SPECIAL_LW_FAILURE",
                 (undefined **)0x1ec,param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_WIIFIT_STATUS_KIND_FINAL_HOLD",
                 (undefined **)&DAT_000001ed,param_4,param_5,param_6,param_7,param_8);
// ... (7200 more lines)
```

## 5. `FUN_7101a23a80`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a23a80`  (offset `0x1a23a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a23a80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8756 bytes / 346 bb / 1 incoming refs
- **Match values:** ready
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

## 6. `FUN_71032d0460`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032d0460`  (offset `0x32d0460`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032d0460(long param_1)`
- **Size / BBs / Incoming:** 976 bytes / 51 bb / 5 incoming refs
- **Match values:** ready
- **Strings touched:** chara/chara_4/chara_4_;ready_in
- **Callers:** FUN_7101a12850;FUN_7101a2b570;FUN_7101a32080;FUN_7101a3c230;FUN_7101a564e0
- **Callees:** FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_71032d0460__71032d0460.c)  [cfg](../decompiled/FUN_71032d0460__71032d0460.mmd)
- **Clone hash:** `78cfeccb197eb6a3`

```c

void FUN_71032d0460(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71043ef055);
  *(undefined1 *)(param_1 + 0x126) = 1;
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x11f) == '\0') {
    if ((*(int *)(param_1 + 0x10) == 1) && (*(char *)(param_1 + 0x11e) != '\0')) {
      fVar1 = 0.96;
    }
    else {
      fVar1 = 0.8;
    }
  }
  *(float *)(param_1 + 0x104) = fVar1;
  *(float *)(param_1 + 0x10c) = fVar1 * *(float *)(param_1 + 0x100);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x158),0x71043ef055);
  *(undefined1 *)(param_1 + 0x256) = 1;
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x24f) == '\0') {
    if ((*(int *)(param_1 + 0x140) == 1) && (*(char *)(param_1 + 0x24e) != '\0')) {
      fVar1 = 0.96;
    }
    else {
      fVar1 = 0.8;
    }
  }
  *(float *)(param_1 + 0x234) = fVar1;
  *(float *)(param_1 + 0x23c) = fVar1 * *(float *)(param_1 + 0x230);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x288),0x71043ef055);
  *(undefined1 *)(param_1 + 0x386) = 1;
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x37f) == '\0') {
    if ((*(int *)(param_1 + 0x270) == 1) && (*(char *)(param_1 + 0x37e) != '\0')) {
      fVar1 = 0.96;
// ... (100 more lines)
```

## 7. `FUN_71032d0240`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032d0240`  (offset `0x32d0240`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032d0240(long param_1)`
- **Size / BBs / Incoming:** 536 bytes / 1 bb / 5 incoming refs
- **Match values:** ready
- **Strings touched:** ready_out
- **Callers:** FUN_7101a18830;FUN_7101a2b570;FUN_7101a32080;FUN_7101a3c230;FUN_7101a564e0
- **Callees:** FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_71032d0240__71032d0240.c)  [cfg](../decompiled/FUN_71032d0240__71032d0240.mmd)
- **Clone hash:** `38edbd060b624154`

```c

void FUN_71032d0240(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71042d4aad);
  fVar2 = 0.8;
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x11f) != '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x104) = fVar1;
  *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x100) * fVar1;
  *(undefined1 *)(param_1 + 0x126) = 0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x158),0x71042d4aad);
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x24f) != '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x234) = fVar1;
  *(undefined1 *)(param_1 + 0x256) = 0;
  *(float *)(param_1 + 0x23c) = *(float *)(param_1 + 0x230) * fVar1;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x288),0x71042d4aad);
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x37f) != '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x364) = fVar1;
  *(float *)(param_1 + 0x36c) = *(float *)(param_1 + 0x360) * fVar1;
  *(undefined1 *)(param_1 + 0x386) = 0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x3b8),0x71042d4aad);
  fVar1 = fVar2;
  if (*(char *)(param_1 + 0x4af) != '\0') {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x494) = fVar1;
  *(undefined1 *)(param_1 + 0x4b6) = 0;
  *(float *)(param_1 + 0x49c) = *(float *)(param_1 + 0x490) * fVar1;
// ... (50 more lines)
```

## 8. `FUN_7101f45620`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** ItemManager;get_num_of_ownered_item;get_num_of_active_item_all;get_active_item;find_active_item_from_id;find_active_item_from_area_id;remove_item_from_id;is_change_fighter_restart_position;ItemParamAccessor;boss_common_param_int;is_valid_self_param;get_self_param_float;get_self_param_int;GimmickEventPresenter;dispatch_event_from_fighter;StageManager;stage_all_stop;is_discretion_final_enabled;BossManager;is_stoppable_se;notify_on_boss_defeat;notify_on_boss_keyoff_bgm;notify_on_boss_dead;sv_set_status_func;sv_set_status_func_str;Weapon;get_founder_id;get_pocket_founder_id;WeaponKineticEnergyGravity;set_accel;set_speed;get_limit_speed;...
- **Callers:** FUN_71022b7100
- **Callees:** FUN_71000001c0;FUN_7101f87300;FUN_7101f89130;FUN_7101f89310;FUN_7101f94540;FUN_7101f95230;FUN_7102123d40;FUN_71021368b0;FUN_7102137e70;FUN_71021408e0;FUN_7102144140;FUN_7102146bf0;FUN_710214a020;FUN_710214fdf0;FUN_7102151c30;FUN_71021539b0;...
- **Files:** [decomp](../decompiled/FUN_7101f45620__7101f45620.c)  [cfg](../decompiled/FUN_7101f45620__7101f45620.mmd)
- **Clone hash:** `47a872489deece59`

```c

void FUN_7101f45620(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar6;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  code *pcVar7;
  byte ****ppppbVar8;
  long lVar9;
  long **pplVar10;
  long ***ppplVar11;
  long lVar12;
  long lVar13;
  long ***ppplVar14;
  uint *__s;
  undefined1 auVar15 [16];
  undefined4 local_84;
  long ***local_80;
  undefined8 local_78;
  int local_70;
  
  if (lib::Singleton<lib::LuaManager>::instance_ != (long *)0x0) goto LAB_7101f456b4;
  plVar2 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = extraout_x1;
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_84 = 0;
// ... (19486 more lines)
```

## 9. `FUN_7102164700`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102164700`  (offset `0x2164700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102164700(void)`
- **Size / BBs / Incoming:** 10172 bytes / 7 bb / 1 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_START;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_GRENADE_GLOW_ATTACK;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_RENDER_PRIORITY;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_PRE_DAMAGE_STATUS_KIND;FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SNAKE_INSTANCE_WORK_FLAG_CYPHER_FALL;FIGHTER_SNAKE_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SNAKE_FINAL_LOCK_ON_MAX;FIGHTER_SNAKE_STATUS_WORK_INT_START;FIGHTER_SNAKE_STATUS_WORK_INT_MOT_KIND;FIGHTER_SNAKE_STATUS_WORK_INT_MOT_AIR_KIND;FIGHTER_SNAKE_STATUS_WORK_INT_END;FIGHTER_SNAKE_STATUS_WORK_FLOAT_START;FIGHTER_SNAKE_STATUS_WORK_FLOAT_END;FIGHTER_SNAKE_STATUS_WORK_FLAG_START;FIGHTER_SNAKE_STATUS_WORK_FLAG_END;FIGHTER_SNAKE_STATUS_TRANS_ID_START;FIGHTER_SNAKE_STATUS_TRANS_ID_END;FIGHTER_SNAKE_STATUS_APPEAL_FLAG_START;FIGHTER_SNAKE_STATUS_APPEAL_FLAG_EXIT;FIGHTER_SNAKE_STATUS_APPEAL_WORK_INT_START;FIGHTER_SNAKE_STATUS_APPEAL_WORK_INT_WAIT_COUNTER;FIGHTER_SNAKE_STATUS_SMASH_APPEAL_WORK_INT_START;FIGHTER_SNAKE_STATUS_SMASH_APPEAL_WORK_INT_ADVANCE_COUNT;FIGHTER_SNAKE_STATUS_ENTRY_FLAG_START;FIGHTER_SNAKE_STATUS_ENTRY_FLAG_SPYCLOAK;FIGHTER_SNAKE_STATUS_ENTRY_FLAG_ENABLED_SPYCLOAK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102164700__7102164700.c)  [cfg](../decompiled/FUN_7102164700__7102164700.mmd)
- **Clone hash:** `58e0509edc77702f`

```c

void FUN_7102164700(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_GRENADE_GLOW_ATTACK",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_RENDER_PRIORITY",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_PRE_DAMAGE_STATUS_KIND",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SNAKE_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
// ... (1217 more lines)
```

## 10. `FUN_7101c62870`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** area_medal;set_cursor_area;set_medal_balloon_pos_r;set_medal_balloon_pos_l;set_medal_%02d;set_medal_over_%02d;chara/chara_4/chara_4_;catch;anim_appear_in;anim_appear_other_in;anim_appear_stay;change_blink_on;anim_on;loop_off;balloon_off;medal_fp_off;next_off;state_catch_ok;change_blink_off;selector_0;sel_off;set_txt_back_00;mel_over_return_02;set_txt_back_01;mel_return_02;pic_stage;set_rep_stg;stage_other;stage_random;pic_fighter;set_rep_fig;fighter_other;...
- **Callers:** FUN_7101896640
- **Callees:** FUN_71003a4ca0;FUN_71016e3710;FUN_7101898fc0;FUN_7101899100;FUN_7101899240;FUN_7101899380;FUN_71018994c0;FUN_7101899600;FUN_7101989a30;FUN_7101a7ed70;FUN_7101c61990;FUN_7101c684a0;FUN_7101c68640;FUN_7101c689c0;FUN_7101c69330;FUN_7101c69720;...
- **Files:** [decomp](../decompiled/FUN_7101c62870__7101c62870.c)  [cfg](../decompiled/FUN_7101c62870__7101c62870.mmd)
- **Clone hash:** `e4dd96ce2a92ce22`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c62870(undefined8 *param_1,long *********param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte ***pppbVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  long *********ppppppppplVar14;
  long lVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte **ppbVar23;
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
// ... (4548 more lines)
```

## 11. `FUN_7101a564e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a564e0`  (offset `0x1a564e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a564e0(long param_1, ulong param_2)`
- **Size / BBs / Incoming:** 1012 bytes / 44 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a55310
- **Callees:** FUN_71017abd00;FUN_71032d0240;FUN_71032d0460;FUN_7103778300;FUN_710377aee0;FUN_710377b010;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101a564e0__7101a564e0.c)  [cfg](../decompiled/FUN_7101a564e0__7101a564e0.mmd)
- **Clone hash:** `5499388e5fab950c`

```c

void FUN_7101a564e0(long param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined *puVar12;
  
  lVar6 = *(long *)(param_1 + 0x218);
  lVar7 = *(long *)(param_1 + 0x220);
  if ((param_2 & 1) == 0) {
    if (lVar6 != lVar7) {
      uVar8 = (lVar7 + -0x10) - lVar6;
      uVar1 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar10 = -((ulong)uVar1 & 3);
        do {
          plVar11 = (long *)(lVar6 + 8);
          lVar6 = lVar6 + 0x10;
          lVar10 = lVar10 + 1;
          *(undefined1 *)(*(long *)(*plVar11 + 0x20) + 0x161) = 0;
        } while (lVar10 != 0);
      }
      if (0x2f < uVar8) {
        do {
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 8) + 0x20) + 0x161) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x20) + 0x161) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar6 + 0x28) + 0x20) + 0x161) = 0;
          plVar11 = (long *)(lVar6 + 0x38);
          lVar6 = lVar6 + 0x40;
// ... (125 more lines)
```

## 12. `FUN_7101bcdd20`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcdd20`  (offset `0x1bcdd20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcdd20(undefined4 * param_1, undefined8 * param_2, long * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2800 bytes / 152 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** progress_gauge;linear;color_default;color_battlestart;loop_light;in_allready;mode_empty_03;loop_allready;set_txt_status;set_txt_status_next;stat_change
- **Callers:** FUN_7101bc3210;FUN_7101bcf940
- **Callees:** FUN_7101bc9fe0;FUN_7103776390;FUN_7103776640;FUN_71037780e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101bcdd20__7101bcdd20.c)  [cfg](../decompiled/FUN_7101bcdd20__7101bcdd20.mmd)
- **Clone hash:** `60015a3e7f10c68c`

```c

void FUN_7101bcdd20(undefined4 *param_1,undefined8 *param_2,long *****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  long ****pppplVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long ***ppplVar13;
  long ******pppppplVar14;
  long *****ppppplVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  undefined **local_160;
  ulong local_158;
  long *****local_150;
  long ****local_148;
  long ****local_140;
  char *local_138;
  undefined4 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
// ... (522 more lines)
```

## 13. `FUN_7101a2b570`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a2b570`  (offset `0x1a2b570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a2b570(undefined * * param_1, undefined8 param_2, undefined * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22080 bytes / 1202 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** disconnect_off;indicator_%d;disconnect_on;mel_chara_select_lv_n;cp_level_%d;hand_catch;set_lct_controller_entry;btn_anim;set_txt_btn;set_parts_lct;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;controller_max;controller_fp;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a31860
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710137bc30;FUN_71016ea290;FUN_71016ea960;FUN_71016f6340;FUN_710175dfc0;FUN_7101764000;FUN_71019eb330;FUN_71019f08a0;FUN_71019f1410;FUN_7101a000c0;FUN_7101a029b0;FUN_7101a04c80;FUN_7101a06920;FUN_7101a06ef0;...
- **Files:** [decomp](../decompiled/FUN_7101a2b570__7101a2b570.c)  [cfg](../decompiled/FUN_7101a2b570__7101a2b570.mmd)
- **Clone hash:** `9f20780a0c7432be`

```c

/* WARNING: Removing unreachable block (ram,0x007101a2fb0c) */
/* WARNING: Removing unreachable block (ram,0x007101a2d6d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a2b570(undefined **param_1,undefined8 param_2,undefined **param_3,
                   long ************param_4,long ****param_5,ulong param_6,undefined8 param_7,
                   undefined8 param_8)

{
  undefined **ppuVar1;
  float *pfVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  long ***********ppppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  void *__dest;
  undefined1 *puVar21;
  long *********ppppppppplVar22;
  long **********pppppppppplVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
// ... (4049 more lines)
```

## 14. `FUN_71021ec200`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES;FIGHTER_MIIFIGHTER_STATUS_FINAL_WORK_FLOAT_MOVE_SPD_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_HOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_GUNMAN_OK;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_CLAY;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_RELEASE_GUNMAN;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_REQUEST_SPECIAL_HI_CANCEL;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_ENABLE_SPECIAL_HI_CANCEL;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_CANCELED;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_SPECIAL_S_CLAY_HIT;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_THROW_N_OFFSET_Z;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SMASH_S_CHARGE_FRAME;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_X;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_SHOOT_POS_Y;FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_DUCKHUNT_TURN_NEUTRAL;FIGHTER_DUCKHUNT_TURN_FRONT;FIGHTER_DUCKHUNT_TURN_BACK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021ec200__71021ec200.c)  [cfg](../decompiled/FUN_71021ec200__71021ec200.mmd)
- **Clone hash:** `e53f121443819b63`

```c

void FUN_71021ec200(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_CHARGE",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_REMOVE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_N_FRAMES_AFTER_LAST3PS",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_LW_RANDOM_TABLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_SHOOT_TIMER",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_SHOOT_CAN_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_3SHOTS_INVALID_FRAMES",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TRIGGER_TIMER",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_DUCKHUNT_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
// ... (1269 more lines)
```

## 15. `FUN_71021eaa80`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eaa80`  (offset `0x21eaa80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eaa80(void)`
- **Size / BBs / Incoming:** 6012 bytes / 4 bb / 1 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_GUN_ID;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND;FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_TERM;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_CATCH_JOINT_LENGTH;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_BOMBJUMP_ANG;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_X;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_Y;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_GBEAM_MAP_COLL_OFFSET_Z;WEAPON_MIIGUNNER_FULLTHROTTLE_STATUS_KIND_SHOOT;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_START;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_FINAL_EXEC;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ST_INIT;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_IS_CHANGE_STATUS_BOMBJUMP;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_SET_MAP_COLL_OFFSET;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_OFF_MAP_COLL_OFFSET;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_ARTICLE_MOTION_RATE_SYNC;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_WIN_VISOR_MOTION;FIGHTER_SAMUS_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_SAMUS_CLIFF_HANG_DATA_START;FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO;FIGHTER_SAMUS_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_SAMUS_CLIFF_HANG_DATA_TERM;FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_NONE;FIGHTER_SAMUS_SPECIAL_N_CANCEL_TYPE_GROUND_ESCAPE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021eaa80__71021eaa80.c)  [cfg](../decompiled/FUN_71021eaa80__71021eaa80.mmd)
- **Clone hash:** `e7586ba83e86bbcb`

```c

void FUN_71021eaa80(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_N_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_SPECIAL_LW_BODY",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_LASER_C",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_GUN_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_FINAL_MOT2ND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_CATCH_JOINT_LENGTH",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_SAMUS_INSTANCE_WORK_ID_FLOAT_BOMBJUMP_ANG",
// ... (689 more lines)
```

## 16. `FUN_71013930c0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013930c0`  (offset `0x13930c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013930c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4464 bytes / 208 bb / 1 incoming refs
- **Match values:** Ready;ready
- **Strings touched:** count_05;count_03;timeup;suddendeath;gameset;complete;success;failure;ready;txt_sudden;SUDDEN
DEATH;txt_complete_00;COMPLETE!;txt_success_00;SUCCESS!;txt_failure_00;FAILURE!;txt_ready_00;Ready!;set_txt_center;common;victory
- **Callees:** FUN_7101414d00;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_71037a28a0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71013930c0__71013930c0.c)  [cfg](../decompiled/FUN_71013930c0__71013930c0.mmd)
- **Clone hash:** `4561aa1f02384c56`

```c

void FUN_71013930c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  long ***local_78;
  undefined8 *local_70;
  undefined4 local_64;
  
  lVar13 = *(long *)(param_1 + 0x50);
  plVar9 = (long *)(lVar13 + 0x10);
  puVar4 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000088;
// ... (819 more lines)
```

## 17. `FUN_71014aa930`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014aa930`  (offset `0x14aa930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 70 bb / 2 incoming refs
- **Match values:** Ready
- **Strings touched:** StateLoadAsyncForHomeRunContest;StateSetupBatterOrder;StateShowPlayerInformation;StateShowBatterOrder;NODE_PRE_REFRACT_BLEND;StateShowRemainingTimes;StateStartPauseUntilReady;StateEndPauseUntilReady;chara/chara_4/chara_4_;StateResetBatterFighter;StateFadeOut;StateShowReady;StateMeleeForHomeRunContest;StatePause;StateOperatorHUDDone;StateRetryPreparations;StateEndProduction;StateResult;StateResultNoContest;StateApplyParameters
- **Callers:** FUN_7101850830
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71014aa930__71014aa930.c)  [cfg](../decompiled/FUN_71014aa930__71014aa930.mmd)
- **Clone hash:** `b011ce5fe471cc6f`

```c

void FUN_71014aa930(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
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
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForHomeRunContest",(long ****)FUN_71014ab2d0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupBatterOrder",(long ****)FUN_71014ab360,param_4,
// ... (423 more lines)
```

## 18. `FUN_7101a18830`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a18830`  (offset `0x1a18830`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a18830(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 904 bytes / 46 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** ready_out;lizhi_on
- **Callees:** FUN_71024076d0;FUN_71032d0240;FUN_7103313f20;FUN_7103778300;FUN_710377aee0;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101a18830__7101a18830.c)  [cfg](../decompiled/FUN_7101a18830__7101a18830.mmd)
- **Clone hash:** `72bc7392baf577d6`

```c

void FUN_7101a18830(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  byte bVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined4 local_b0 [2];
  undefined **local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    if (0 < *(int *)(param_1 + 0x160)) {
      uVar8 = 0;
      do {
        if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x250) + uVar8 * 0x10 + 8) + 0x5e8);
        if ((**(long **)(lVar10 + 0x1a8) != 0) && ((*(long **)(lVar10 + 0x1a8))[1] != 0)) {
          FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0x10),0x710438c2ef);
          FUN_710377aee0(0x3f800000,lVar10 + 0x1a0);
          if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar4 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19fe2658c2,
                                     (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
// ... (103 more lines)
```

## 19. `FUN_7101a12850`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a12850`  (offset `0x1a12850`)
- **Namespace:** `Global`
- **Signature:** `long * __cdecl FUN_7101a12850(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1800 bytes / 103 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** chara/chara_4/chara_4_;ready_in
- **Callees:** FUN_710175dfc0;FUN_71019f1550;FUN_7101a11b40;FUN_7101a1c9f0;FUN_7103291150;FUN_71032d0460;FUN_71032e5a30;FUN_71032edf70;FUN_71032f1bb0;FUN_710373b540;FUN_7103775dc0;FUN_7103778300;FUN_710377b010;FUN_71039602c0;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101a12850__7101a12850.c)  [cfg](../decompiled/FUN_7101a12850__7101a12850.mmd)
- **Clone hash:** `3862035cd8ee959f`

```c

long * FUN_7101a12850(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                     long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar4 = *(long **)(DAT_710532f7c8 + 8);
  if (*(int *)(param_1 + 0x13c) == 0) {
    FUN_71032e5a30((long)plVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x16c) == 0x12) {
      FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x1a0),9,(long ****)0x50000a,param_4,
                     param_5,param_6,param_7,param_8);
      plVar4 = (long *)**(undefined8 **)(param_1 + 0x198);
      pppplVar8 = (long ****)0x50000c;
      iVar5 = 9;
// ... (265 more lines)
```

## 20. `FUN_71000a5250`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000a5250`  (offset `0xa5250`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000a5250(long param_1, int param_2)`
- **Size / BBs / Incoming:** 344 bytes / 23 bb / 64 incoming refs
- **Match values:** ready
- **Strings touched:** EmitterSet has been already deleted.

- **Callers:** FUN_71000a53b0
- **Callees:** FUN_7100093660;<EXTERNAL>::nn::os::LockMutex;<EXTERNAL>::nn::os::UnlockMutex
- **Files:** [decomp](../decompiled/FUN_71000a5250__71000a5250.c)  [cfg](../decompiled/FUN_71000a5250__71000a5250.mmd)
- **Clone hash:** `18ef3283c23d647b`

```c

void FUN_71000a5250(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + (long)param_2 * 8 + 0xb0);
  if (lVar4 != 0) {
    do {
      while (lVar3 = *(long *)(lVar4 + 0x1d0), *(char *)(lVar4 + 0xc) != '\0') {
        nn::os::LockMutex((MutexType *)(param_1 + 0x16c0));
        iVar1 = *(int *)(param_1 + 0x8b8);
        if (0 < iVar1) {
          lVar2 = 0;
          do {
            if (*(long *)(*(long *)(param_1 + 0x8b0) + lVar2 * 8) == lVar4) goto LAB_71000a52d8;
            lVar2 = lVar2 + 1;
          } while (lVar2 < iVar1);
        }
        *(long *)(*(long *)(param_1 + 0x8b0) + (long)iVar1 * 8) = lVar4;
        *(int *)(param_1 + 0x8b8) = *(int *)(param_1 + 0x8b8) + 1;
LAB_71000a52d8:
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x16c0));
        lVar4 = lVar3;
        if (lVar3 == 0) goto LAB_71000a52fc;
      }
      FUN_7100093660();
      lVar4 = lVar3;
    } while (lVar3 != 0);
  }
LAB_71000a52fc:
  lVar4 = *(long *)(param_1 + (long)param_2 * 8 + 0x4b0);
  if (lVar4 != 0) {
    do {
      while (lVar3 = *(long *)(lVar4 + 0x1d0), *(char *)(lVar4 + 0xc) == '\0') {
        FUN_7100093660();
        *(undefined1 *)(lVar4 + 0xf) = 0;
// ... (25 more lines)
```

## 21. `FUN_7102ab2890`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ab2890`  (offset `0x2ab2890`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ab2890(ulong param_1, undefined8 param_2, long * * * * param_3, char * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 11428 bytes / 562 bb / 1 incoming refs
- **Match values:** Ready
- **Strings touched:** 00_Platform01L;00_Platform01R;chikeiHal_O_OBJ_O_HIR;dyr_Halberd_set;DomePosition_O_OBJ_O_HIR;EnkeiPosition_O_OBJ_O_HIR;HL2renPosition_O_OBJ_O_HIR;HALBERD_DUMMY1_O_OBJ_O_HIR;plate_side;HL_Gate_Col_O_OBJ_O_HIR;dyr_Halberd_loop;dys_HL_MainWing_set;dys_HL_MainWing_Loop;dyr_jet_halbard_set;dyr_jet_halbard_Loop;dyr_BattleStage_set;dyr_Background_set;dyr_Background_Loop;StgHalberd2ren_O_OBJ_O_HIR;dyr_Hero2Hou_set;dyr_Hero2Hou_Wait;dyr_Hero2Hou_Vibration;dyr_Hero2Hou_Ready;dyr_Hero2Hou_Shot;dyr_Hero2Dan_set;STG_HALBERD_HEROHERO;stc_ArmBone_set;stc_ArmJoint_set;dyr_ArmHand_set;dyr_ArmHand_Attack;dyr_ArmHand_Rolling;dyr_ArmHand_Wait;...
- **Callees:** FUN_7100492c30;FUN_7100532bc0;FUN_7102405040;FUN_71025ee6c0;FUN_71025f4d80;FUN_710260fdd0;FUN_7102626be0;FUN_7102ab7e50;FUN_7102abb730;FUN_7102abb920;FUN_7102abe900;FUN_7102abef70;FUN_710313e6a0;FUN_710313ef20;FUN_710314fa90;FUN_710314fd10;...
- **Files:** [decomp](../decompiled/FUN_7102ab2890__7102ab2890.c)  [cfg](../decompiled/FUN_7102ab2890__7102ab2890.mmd)
- **Clone hash:** `510d33e13ab6d9e2`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ab2890(ulong param_1,undefined8 param_2,long ****param_3,char *param_4,long ****param_5
                   ,undefined8 param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  byte ****ppppbVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  byte *pbVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long ********pppppppplVar24;
  undefined8 *puVar25;
  int *piVar26;
  long *******ppppppplVar27;
  long lVar28;
  long ****pppplVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
// ... (2148 more lines)
```

## 22. `FUN_71032cdd90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032cdd90`  (offset `0x32cdd90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032cdd90(long param_1)`
- **Size / BBs / Incoming:** 1176 bytes / 75 bb / 11 incoming refs
- **Match values:** ready
- **Strings touched:** ready_out;anim_on;loop_on;chara/chara_4/chara_4_;ready_in;loop_off
- **Callers:** FUN_7101a31020;FUN_71032cf7e0
- **Callees:** FUN_7100058250;FUN_7100058290;FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_71032cdd90__71032cdd90.c)  [cfg](../decompiled/FUN_71032cdd90__71032cdd90.mmd)
- **Clone hash:** `64d27bce1d7e1e9d`

```c

void FUN_71032cdd90(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  bool bVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  
  fVar13 = *(float *)(param_1 + 0x10c);
  *(undefined1 *)(param_1 + 0x124) = 0;
  if (*(float *)(param_1 + 0x108) != fVar13) {
    *(float *)(param_1 + 0x108) = fVar13;
    lVar8 = **(long **)(*(long *)(param_1 + 0x28) + 0x18);
    if (lVar8 != 0) {
      *(float *)(lVar8 + 0x48) = fVar13;
      *(float *)(lVar8 + 0x4c) = fVar13;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
    }
// ... (217 more lines)
```

## 23. `FUN_7101ef8f40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef8f40`  (offset `0x1ef8f40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef8f40(long param_1)`
- **Size / BBs / Incoming:** 120 bytes / 8 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** panel_battle_02_ready_off
- **Callees:** FUN_7103778300;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101ef8f40__7101ef8f40.c)  [cfg](../decompiled/FUN_7101ef8f40__7101ef8f40.mmd)
- **Clone hash:** `3f6db596d46be8ca`

```c

void FUN_7101ef8f40(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x204) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x228) + 8);
    if ((((lVar1 == 0) ||
         (plVar2 = (long *)FUN_71037964b0(lVar1,0x710434abb9), plVar2 == (long *)0x0)) ||
        (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) &&
       (0 < *(int *)(param_1 + 0x1fc))) {
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
    }
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x228),0x710434abb9);
  return;
}


```

## 24. `FUN_7101839390`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101839390`  (offset `0x1839390`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101839390(long param_1, byte param_2)`
- **Size / BBs / Incoming:** 9004 bytes / 476 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** chara_select_btn3_05_ready_00
- **Callers:** FUN_7101846880
- **Callees:** FUN_71000001c0;FUN_71003cb050;FUN_7101684280;FUN_710172acb0;FUN_7101764000;FUN_7101797560;FUN_71017aacc0;FUN_71017c0f50;FUN_71017c6500;FUN_710183b6c0;FUN_710183b900;FUN_710183bb20;FUN_7101a0a3e0;FUN_7101a0ffd0;FUN_7101a11d30;FUN_710259f250;...
- **Files:** [decomp](../decompiled/FUN_7101839390__7101839390.c)  [cfg](../decompiled/FUN_7101839390__7101839390.mmd)
- **Clone hash:** `95098ab448477e92`

```c

/* WARNING: Removing unreachable block (ram,0x007101839ec8) */
/* WARNING: Removing unreachable block (ram,0x007101839e00) */
/* WARNING: Removing unreachable block (ram,0x007101839e64) */
/* WARNING: Removing unreachable block (ram,0x007101839f28) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101839390(long param_1,byte param_2)

{
  long ****pppplVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long **********__dest;
  long ****pppplVar14;
  long **********pppppppppplVar15;
  long **********pppppppppplVar16;
  long ***ppplVar17;
  void *__dest_00;
  ulong uVar18;
  int *piVar19;
  long ****pppplVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 extraout_x1;
// ... (1559 more lines)
```

## 25. `FUN_7103371290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** ready
- **Strings touched:** key_context;MetatableLayoutRoot;__index;MetatableLayoutView;MetatableLayoutPane;MetatableLayoutButton;plate_side;MetatableLayoutView_Animation;MetatableLayoutButtonSelector;MetatableLayoutButtonSelectorGlobal;LayoutButtonSelector;MetatableLayoutListScroller;MetatableLayoutRangeSlider;MetatableLayoutRangeSliderGlobal;LayoutRangeSlider;MetatableLayoutListWindow;deactivate;activate;close;is_busy;update;get_result;MetatableLayoutSubMenu;clear_result;MetatableLayoutButtonSelectorConfig;LayoutButtonSelectorConfig;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_DIRECTIONAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_SEQUENTIAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_GRID;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_POINTER;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_AABB;MetatableLayoutRangeSliderConfig;...
- **Callers:** FUN_7101af2070;FUN_71022f2b20;FUN_71032cb040
- **Callees:** FUN_7103375650;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038f5390;FUN_71038f5c00;FUN_71038f7260;FUN_71038f9510;FUN_71038fec40;FUN_710391e050;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7103371290__7103371290.c)  [cfg](../decompiled/FUN_7103371290__7103371290.mmd)
- **Clone hash:** `acf8abf14fe11fb8`

```c

void FUN_7103371290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    puVar8 = (undefined8 *)*plVar5;
  }
  else if (uVar2 == 7) {
    puVar8 = (undefined8 *)(*plVar5 + 0x28);
  }
// ... (1658 more lines)
```

## 26. `FUN_7101831c30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101831c30`  (offset `0x1831c30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101831c30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5040 bytes / 211 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** chara/chara_4/chara_4_;ready_in;ready_out
- **Callees:** FUN_71000001c0;FUN_7101696040;FUN_71016b6a10;FUN_7101764000;FUN_710179e640;FUN_71017abd00;FUN_71019e6bb0;FUN_7102355b10;FUN_7103778300;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101831c30__7101831c30.c)  [cfg](../decompiled/FUN_7101831c30__7101831c30.mmd)
- **Clone hash:** `8f0c192125d0ba55`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101831c30(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  ushort *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined1 local_880 [4];
  undefined8 local_87c;
  ushort local_874 [4];
  short local_86c;
  short local_86a;
// ... (781 more lines)
```

## 27. `FUN_7101845ea0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101845ea0`  (offset `0x1845ea0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101845ea0(long * param_1)`
- **Size / BBs / Incoming:** 1608 bytes / 75 bb / 27 incoming refs
- **Match values:** ready
- **Strings touched:** chara_select_btn3_05_ready_00
- **Callers:** FUN_7101922970;FUN_71022f7670;FUN_71023014c0;FUN_7102304a90;FUN_7102328bb0;FUN_7102331130;FUN_71023341a0;FUN_710233c2c0;FUN_710233cea0;FUN_710233d0e0;FUN_710233d420;FUN_710233fb80;FUN_7102342310;FUN_71023444c0;FUN_7102364560;FUN_710236beb0;...
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101a0ffd0;FUN_7101a11d30;FUN_7103238a70;FUN_7103238d60;FUN_710323af70;FUN_710323beb0;FUN_710323c4e0;FUN_710326f6a0;FUN_710327b090;FUN_71032d1fd0;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7101845ea0__7101845ea0.c)  [cfg](../decompiled/FUN_7101845ea0__7101845ea0.mmd)
- **Clone hash:** `29f289e8098aeb9c`

```c

void FUN_7101845ea0(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong *puVar6;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 in_x7;
  ulong *puVar13;
  ulong *local_88;
  ulong *local_80;
  ulong *local_70;
  ulong *local_68;
  ulong *local_58;
  ulong *local_50;
  ulong local_38;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar4 = FUN_7101a0ffd0();
  uVar11 = 1;
  uVar12 = 0;
  FUN_710326f6a0(&local_88,0,(long ****)0x1,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,0,in_x7);
  if (iVar4 == 2) {
// ... (252 more lines)
```

## 28. `FUN_7101ee42f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee42f0`  (offset `0x1ee42f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee42f0(long param_1, undefined8 param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1248 bytes / 53 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** controller_btn_on;player_color_%dp;bg_on;controller_btn_off;gauge_parts_on;player_color_off;gray_on;mode_empty_03;player_color_cp;player_color_fp;controller_on;indicator_%d;ready_on;bg_off;gray_off;controller_off;ready_off;blinkon;blinkoff
- **Callers:** FUN_7101ee1200;FUN_7101ee27b0
- **Callees:** FUN_71003a4ca0;FUN_710339d9f0;FUN_7103778300;FUN_7103778430
- **Files:** [decomp](../decompiled/FUN_7101ee42f0__7101ee42f0.c)  [cfg](../decompiled/FUN_7101ee42f0__7101ee42f0.mmd)
- **Clone hash:** `3f01aff1794fb360`

```c

void FUN_7101ee42f0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  undefined4 uVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_b8;
  byte local_b0 [64];
  
  plVar15 = (long *)(param_1 + 0x480);
  do {
    if ((int *)*plVar15 == (int *)0x0) {
LAB_7101ee43c4:
      FUN_7103778300(0x3f800000,plVar15[2],0x71043bedd6);
      FUN_7103778300(0x3f800000,plVar15[2],0x7104413119);
      FUN_7103778300(0x3f800000,plVar15[2],0x7104443ed4);
      lVar7 = plVar15[2];
      pcVar9 = "gray_on";
LAB_7101ee44a0:
      FUN_7103778300(0x3f800000,lVar7,(long)pcVar9);
      if ((char)plVar15[0x19] == '\0') goto LAB_7101ee46b0;
LAB_7101ee44b0:
      if (*(int *)(*plVar15 + 0x68) == -1) goto LAB_7101ee46b0;
      FUN_7103778300(0x3f800000,plVar15[4],0x71042924b5);
      uVar13 = *(uint *)(*plVar15 + 0x68);
      if (uVar13 == 0xffffffff) {
// ... (146 more lines)
```

## 29. `FUN_7101ef8ec0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef8ec0`  (offset `0x1ef8ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef8ec0(long param_1)`
- **Size / BBs / Incoming:** 120 bytes / 8 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** panel_battle_02_ready
- **Callees:** FUN_7103778300;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101ef8ec0__7101ef8ec0.c)  [cfg](../decompiled/FUN_7101ef8ec0__7101ef8ec0.mmd)
- **Clone hash:** `3f6db596d46be8ca`

```c

void FUN_7101ef8ec0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x204) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x228) + 8);
    if ((((lVar1 == 0) ||
         (plVar2 = (long *)FUN_71037964b0(lVar1,0x71042707fe), plVar2 == (long *)0x0)) ||
        (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) &&
       (0 < *(int *)(param_1 + 0x1fc))) {
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
    }
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x228),0x71042707fe);
  return;
}


```

## 30. `FUN_71021860a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021860a0`  (offset `0x21860a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021860a0(void)`
- **Size / BBs / Incoming:** 15404 bytes / 25 bb / 1 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TURNIP_NUM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_CATCH_SIZE;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_INVINCIBLE_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIDE_HELMET_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_TIME_LIMIT;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY_PREV;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_KIND;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_NUM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_ID;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_ID_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_S_DISABLE_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TARGET_OBJECT_ID;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_ASYNC_TASK_ID;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_ASYNC_TASK_ID_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;WEAPON_DIDDY_EXPLOSION_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_FRAME;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_SPECIAL_HI_DAMAGE;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_WATER;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CATCHING;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CATCHING_COMP;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_MELEE_NO_RANDOM;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_CANCEL_ATTACK_1;FIGHTER_MURABITO_INSTANCE_WORK_ID_FLAG_SPECIAL_N_ASYNC_TASK_PROCESS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021860a0__71021860a0.c)  [cfg](../decompiled/FUN_71021860a0__71021860a0.mmd)
- **Clone hash:** `a01e40fb606eece4`

```c

void FUN_71021860a0(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = -3;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_TURNIP_NUM",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_CATCH_SIZE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_BALLOON_NUM",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_INVINCIBLE_FRAME",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_HI_HIDE_HELMET_FRAME",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_TIME_LIMIT",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY"
                 ,(undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_CATEGORY_PREV",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_KIND",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MURABITO_INSTANCE_WORK_ID_INT_SPECIAL_N_OBJECT_NUM",
// ... (1793 more lines)
```

## 31. `FUN_7101a3c230`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a3c230`  (offset `0x1a3c230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a3c230(undefined1[16] param_1, float param_2, long * * param_3, float param_4, long * param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, ulong param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 16508 bytes / 942 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** set_txt_btn;indicator_%d;hand_catch;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a41cc0
- **Callees:** FUN_71003a4ca0;FUN_710175dfc0;FUN_71019e6420;FUN_71019e66d0;FUN_71019e69d0;FUN_71019e7c00;FUN_71019e8ff0;FUN_71019eace0;FUN_71019f1410;FUN_71019f9b50;FUN_7101a0f290;FUN_7101a35230;FUN_7101a35900;FUN_7101a385b0;FUN_7101a386c0;FUN_7101a38fd0;...
- **Files:** [decomp](../decompiled/FUN_7101a3c230__7101a3c230.c)  [cfg](../decompiled/FUN_7101a3c230__7101a3c230.mmd)
- **Clone hash:** `0b6346c1cbcfac5f`

```c

/* WARNING: Removing unreachable block (ram,0x007101a3fdb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a3c230(undefined1 param_1 [16],float param_2,long **param_3,float param_4,long *param_5
                   ,undefined8 param_6,long ****param_7,byte ****param_8,long ****param_9,
                   ulong param_10,undefined8 param_11,undefined8 param_12)

{
  float *pfVar1;
  uint *puVar2;
  byte ****ppppbVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  long ***ppplVar16;
  ulong uVar17;
  long *plVar18;
  long **pplVar19;
  long *plVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
// ... (2991 more lines)
```

## 32. `FUN_7101bcb6b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcb6b0`  (offset `0x1bcb6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcb6b0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1420 bytes / 35 bb / 8 incoming refs
- **Match values:** ready
- **Strings touched:** mode_empty_03;size_p4;size_p8;profile_show;in_wanted;in_progress;popin_newentry;popout_newentry;trans_readyok;in_statustxt;trans_bye;player_1p;player_3p;player_4p;player_6p;player_7p;player_cp;player_fp;frame_delete_p4;profile_hidden;frame_set_p8;in_readyok;trans_progress;out_statustxt;player_2p;player_5p;player_8p;frame_set_p4;in_closed;out_closed;game_start_stop;frame_delete_p8;...
- **Callers:** FUN_7101bcc690
- **Callees:** FUN_7101b80180;FUN_7101b85d60;FUN_7101b88fe0;FUN_7101b8b370;FUN_7103776390;FUN_7103776640;FUN_71037780e0;FUN_710377b010;FUN_710392eb40;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101bcb6b0__7101bcb6b0.c)  [cfg](../decompiled/FUN_7101bcb6b0__7101bcb6b0.mmd)
- **Clone hash:** `8104e09438cd5cfd`

```c

void FUN_7101bcb6b0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char *pcVar2;
  long ***ppplVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  long ****pppplVar7;
  long lVar8;
  undefined **local_2a0;
  ulong local_298;
  undefined **local_290;
  ulong local_288;
  undefined **local_280;
  ulong local_278;
  undefined8 local_270;
  long ***local_268;
  undefined4 local_260;
  char *local_258;
  undefined4 local_250;
  char *local_248;
  undefined4 local_240;
  char *local_238;
  undefined4 local_230;
  char *local_228;
  undefined4 local_220;
  char *local_218;
  undefined4 local_210;
  char *local_208;
  undefined4 local_200;
  char *local_1f8;
  undefined4 local_1f0;
  char *local_1e8;
  undefined4 local_1e0;
  char *local_1d8;
// ... (264 more lines)
```

## 33. `FUN_7101fa11c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** sv_system;battle_object;battle_object_module_accessor;gauge_parts_on;battle_object_category;TRANS_A_JUMP_AERIAL;battle_object_kind;owner_id;get_status_func;entry_child_thread_table;get_global_table;get_global_fighter_table;get_line_state_table;get_child_thread_table;mode_empty_03;get_child_thread_env_table;sv_module_access;motion;kinetic;slope;ground;camera;control;effect;sound;article;cancel;damage;combo;model;attack;search;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fa11c0__7101fa11c0.c)  [cfg](../decompiled/FUN_7101fa11c0__7101fa11c0.mmd)
- **Clone hash:** `a31b4b26022e17c7`

```c

void FUN_7101fa11c0(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"sv_system",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object",(long ****)FUN_7101f95350,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_module_accessor",(long ****)FUN_7101f95380,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_category",(long ****)FUN_7101f953b0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_kind",(long ****)FUN_7101f953e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"owner_id",(long ****)FUN_7101f95410,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_status_func",(long ****)FUN_7101f95440,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"entry_child_thread_table",(long ****)FUN_7101f95510,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_table",(long ****)FUN_7101f956d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_fighter_table",(long ****)FUN_7101f95710,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_line_state_table",(long ****)FUN_7101f95750,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_table",(long ****)FUN_7101f95790,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_env_table",(long ****)FUN_7101f95840,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
// ... (457 more lines)
```

## 34. `FUN_7101a20200`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a20200`  (offset `0x1a20200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a20200(long param_1, undefined4 * param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 14464 bytes / 684 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** bg_anime;ready_out;black_base_all_battle;black_base_vip;black_base_def;set_txt_all_gamenum_00;set_txt_all_gamenum_01;set_parts_btn;view_other;view_jp;img_2;img_1;img_0;set_txt_n_title_othe;set_txt_n_title;set_txt_n_title_sdw_othe;set_txt_period;set_txt_period_sdw;set_txt_other_period;set_parts_lct;count_on;set_txt_score;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;player_number_2p;record_off;day_off;set_cursor_area;set_medal_area;set_panel_%dp_disconnect;set_lct_controller;...
- **Callers:** FUN_710183be60
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101764000;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8560;FUN_71019e8720;FUN_71019eb330;FUN_71019eb840;FUN_71019f57d0;FUN_71019fbf50;FUN_7101a032e0;FUN_7101a04050;FUN_7101a06380;FUN_7101a0e450;FUN_7101a12080;...
- **Files:** [decomp](../decompiled/FUN_7101a20200__7101a20200.c)  [cfg](../decompiled/FUN_7101a20200__7101a20200.mmd)
- **Clone hash:** `3793474728589d81`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a20200(long param_1,undefined4 *param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint7 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long *******ppppppplVar18;
  long ***ppplVar19;
  byte ****ppppbVar20;
  byte **ppbVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 extraout_x1;
  char *pcVar24;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
// ... (2769 more lines)
```

## 35. `FUN_7100000a90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100000a90`  (offset `0xa90`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100000a90(long * param_1, undefined8 param_2, undefined1 * param_3, undefined1 * param_4, char * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 472 bytes / 25 bb / 6 incoming refs
- **Match values:** ready
- **Strings touched:** easy handle already used in multi handle
- **Callers:** FUN_7100220ba0;FUN_71002246b0
- **Callees:** FUN_71000082f0;FUN_7100008440;FUN_71000088e0;FUN_7100009580;FUN_7100009aa0;FUN_710000b340;FUN_710000b4b0;FUN_710000b5e0;FUN_7100015730;FUN_7100016040;FUN_7100017740;FUN_7100017750
- **Files:** [decomp](../decompiled/FUN_7100000a90__7100000a90.c)  [cfg](../decompiled/FUN_7100000a90__7100000a90.mmd)
- **Clone hash:** `d25664f67c670e5c`

```c

undefined4
FUN_7100000a90(long *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
              char *param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  size_t *******pppppppsVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 auVar15 [16];
  undefined8 local_68;
  
  uVar9 = 0x2b;
  if (param_1 != (long *)0x0) {
    if (param_1[0x15] == 0) {
      plVar11 = (long *)param_1[0x16];
      if (plVar11 == (long *)0x0) {
        plVar11 = FUN_71000082f0(1,3,param_3,param_4,param_5,(undefined1 *)param_6,(char *)param_7,
                                 (long)param_8);
        if (plVar11 == (long *)0x0) {
          return 0x1b;
        }
        param_1[0x16] = (long)plVar11;
      }
      lVar5 = param_1[299];
      FUN_710000b5e0(plVar11,6,lVar5,param_4,param_5,param_6,param_7,param_8);
      uVar4 = FUN_7100008440(plVar11,param_1,lVar5,param_4,param_5,param_6,param_7,param_8);
      if ((int)uVar4 == 0) {
// ... (74 more lines)
```

## 36. `FUN_7101d5aa30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d5aa30`  (offset `0x1d5aa30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d5aa30(int * param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2900 bytes / 150 bb / 39 incoming refs
- **Match values:** ready
- **Strings touched:** ptn_01_back;ptn_01_back_for_duckhunt;ptn_%02d;ptn_%02d_for_duckhunt;ptn_01_back_for_banjokazooie;panel_move_00;ptn_%02d_for_banjokazooie;ready_eff;panel_move_01;set_parts_tag;set_fxui_card;set_parts_lct_competitio;set_txt_scr_%02d;set_txt_scr_02;gsp_type;type_%dp;gsp_up;gsp_down;scr_up;color_up;mode_empty_03;gsp_arrow;scr_down;color_down;select_item;color_none;set_fxui_rankflash
- **Callers:** FUN_7101d59540;FUN_7101d5b6c0;FUN_7101d5d640;FUN_7101d61c00
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101465a30;FUN_7101764000;FUN_71017a6d60;FUN_71017d1480;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778630;FUN_71037a2270;FUN_71037ad940;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;...
- **Files:** [decomp](../decompiled/FUN_7101d5aa30__7101d5aa30.c)  [cfg](../decompiled/FUN_7101d5aa30__7101d5aa30.mmd)
- **Clone hash:** `0ef069b453be3480`

```c

void FUN_7101d5aa30(int *param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int *piVar2;
  undefined ***pppuVar3;
  int iVar4;
  char cVar5;
  long ***ppplVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined2 *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  int iVar17;
  long **pplVar18;
  char *pcVar19;
  byte *pbVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined **local_168;
  ulong local_160;
  undefined **local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
// ... (507 more lines)
```

## 37. `FUN_7102144140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** FighterManager;entry_count;total_fighter_num;get_entry_id;get_entry_no;get_fighter_entry;get_fighter_information;is_melee_mode_homerun;is_homerun_versus;is_melee_mode_online_tournament;one_on_one_ratio;is_discretion_final_enabled;get_top_rank_player_num;get_top_rank_player;is_ready_go;set_cursor_whole;get_fighter_pos;is_available_discretion_final;get_final_actor_entry_id;is_final;set_final;get_no_discretion_final_beat_count;get_beat_point_diff_from_top;set_final_fear_face;start_finalbg;exit_finalbg;show_finalbg;hide_finalbg;pause_finalbg;resume_finalbg;set_visible_finalbg;notify_log_event_collision_hit;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102144140__7102144140.c)  [cfg](../decompiled/FUN_7102144140__7102144140.mmd)
- **Clone hash:** `a3b0414249fe2eb2`

```c

void FUN_7102144140(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterManager",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_28,(uint *)"entry_count",(long ****)FUN_7102141940,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"total_fighter_num",(long ****)FUN_7102141980,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_id",(long ****)FUN_7102141a40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_entry_no",(long ****)FUN_7102141bd0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_entry",(long ****)FUN_7102141d50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_information",(long ****)FUN_7102141e40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_homerun",(long ****)FUN_7102141f30,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_homerun_versus",(long ****)FUN_7102141f70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_melee_mode_online_tournament",(long ****)FUN_7102142050,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"one_on_one_ratio",(long ****)FUN_7102142090,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_discretion_final_enabled",(long ****)FUN_71021420d0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_top_rank_player_num",(long ****)FUN_7102142110,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
// ... (80 more lines)
```

## 38. `FUN_71000a0af0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000a0af0`  (offset `0xa0af0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000a0af0(long * param_1, undefined8 param_2, undefined4 param_3, int param_4)`
- **Size / BBs / Incoming:** 356 bytes / 5 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** SuperStripeSystem is already initialized.
;[SuperStripe] Memory Allocate Error!! : %d

- **Callers:** FUN_71000a3e80
- **Callees:** FUN_7100093530;FUN_7100093660;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_71000a0af0__71000a0af0.c)  [cfg](../decompiled/FUN_71000a0af0__71000a0af0.mmd)
- **Clone hash:** `834143d3c9df018e`

```c

void FUN_71000a0af0(long *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  
  if (DAT_71052ab978 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(int *)((long)puVar1 + 0x1c) = param_4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_7104f4a100;
    puVar1[1] = param_2;
    puVar1[4] = (long)param_4 * 0xa0;
    __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0xa0,0x80);
    puVar1[6] = __s;
    memset(__s,0,(long)*(int *)((long)puVar1 + 0x1c) * 0xa0);
    lVar2 = puVar1[1];
    *(undefined8 *)(lVar2 + 0xf68) = 0;
    *(code **)(lVar2 + 0xf70) = FUN_71000a0400;
    *(code **)(lVar2 + 0xf78) = FUN_71000a0890;
    *(code **)(lVar2 + 0xf88) = FUN_71000a08e0;
    *(code **)(lVar2 + 0xf90) = FUN_71000a0910;
    *(code **)(lVar2 + 0xf98) = FUN_71000a0960;
    *(code **)(lVar2 + 4000) = FUN_71000a0670;
    *(code **)(lVar2 + 0xfa8) = FUN_71000a0710;
    *(code **)(lVar2 + 0xfb0) = FUN_71000a0820;
    *(undefined8 *)(lVar2 + 0xf80) = 0;
    *(code **)(lVar2 + 0xfb8) = FUN_710009d750;
    DAT_71052ab978 = puVar1;
    return;
  }
  FUN_7100093660();
// ... (3 more lines)
```

## 39. `FUN_710182dd10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710182dd10`  (offset `0x182dd10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710182dd10(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3708 bytes / 105 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** layout_root;BUTTON_ID_FIGHTER;BUTTON_ID_TECHNIQUE;BUTTON_ID_SPIRIT;BUTTON_ID_ITEM;BUTTON_ID_STAGE;BUTTON_ID_OTHER;HELP_MSG_FIGHTER;mnu_smaknowledge_category_help_fighter_each;HELP_MSG_TECHNIQUE;mnu_smaknowledge_category_help_fighter_common;HELP_MSG_SPIRIT;mnu_smaknowledge_category_help_spirit;HELP_MSG_ITEM;mnu_smaknowledge_category_help_item;HELP_MSG_STAGE;mnu_smaknowledge_category_help_stage;HELP_MSG_OTHER;mnu_smaknowledge_category_help_etc;ITEM_INDEX_NONE;BUTTON_EX_LEFT;BUTTON_EX_RIGHT;scroller;is_font_cache_ready;update_tips_list
- **Callees:** FUN_7101adc840;FUN_710323b9e0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_71032cbf30;FUN_71033112b0;FUN_71033743c0;FUN_71033744b0;FUN_7103375650;FUN_7103376af0;FUN_7103773200;FUN_7103773770;FUN_7103775dc0;...
- **Files:** [decomp](../decompiled/FUN_710182dd10__710182dd10.c)  [cfg](../decompiled/FUN_710182dd10__710182dd10.mmd)
- **Clone hash:** `4b91c461a4266cf3`

```c

void FUN_710182dd10(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long ********pppppppplVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *****ppppplVar13;
  long ***ppplVar14;
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
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
// ... (704 more lines)
```

## 40. `FUN_7101efd900`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101efd900`  (offset `0x1efd900`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101efd900(uint * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 556 bytes / 26 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** panel_battle_02_ready_off
- **Callees:** FUN_71024076d0;FUN_7103313f20;FUN_7103778760;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101efd900__7101efd900.c)  [cfg](../decompiled/FUN_7101efd900__7101efd900.mmd)
- **Clone hash:** `7168339463710bf5`

```c

void FUN_7101efd900(uint *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_80 [4];
  long local_70;
  int local_68;
  
  uVar5 = (ulong)*param_1;
  if (1 < *param_1) {
LAB_7101efdb20:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *DAT_7105328e18;
  uVar2 = *(uint *)(lVar7 + uVar5 * 0x1b8 + 0x28);
  uVar9 = (ulong)(int)uVar2;
  if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar9) {
LAB_7101efdb24:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar8 = **(long **)(*(long *)(param_1 + 0x8c) + uVar9 * 0x10);
  if (param_1[0x7f] == 0) {
    if (*(char *)(lVar8 + 0x275) != '\0') {
      *(undefined1 *)(lVar8 + 0x275) = 0;
      FUN_7103778760(*(long *)(lVar8 + 0x228),0x710434abb9);
      uVar5 = (ulong)*param_1;
      if (1 < *param_1) goto LAB_7101efdb20;
      lVar7 = *DAT_7105328e18;
// ... (50 more lines)
```

## 41. `FUN_7101831900`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101831900`  (offset `0x1831900`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101831900(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 808 bytes / 42 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** ready_out
- **Callees:** FUN_71016b4f70;FUN_71016b50a0;FUN_7101837cd0;FUN_7101837ce0;FUN_7101838c20;FUN_7101838c30;FUN_7101b1aeb0;FUN_71023edc60;FUN_71023eea60;FUN_71032eb270;FUN_7103313c50;FUN_71033145d0;FUN_7103778760;<EXTERNAL>::abort;<EXTERNAL>::nn::oe::SetCpuBoostMode
- **Files:** [decomp](../decompiled/FUN_7101831900__7101831900.c)  [cfg](../decompiled/FUN_7101831900__7101831900.mmd)
- **Clone hash:** `bab793ec913660a6`

```c

void FUN_7101831900(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  undefined8 extraout_x1;
  ulong uVar3;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined **local_90;
  long lStack_88;
  long *local_70;
  undefined *local_60;
  long lStack_58;
  undefined **local_40;
  
  lVar7 = *(long *)(DAT_71052c4c58 + 8);
  local_60 = &DAT_71050a2800;
  lStack_58 = param_1;
  local_40 = &local_60;
  FUN_71016b4f70(*(long *)(lVar7 + 0x88),(long *)&local_60);
  if (&local_60 == local_40) {
    pcVar5 = *(code **)(*local_40 + 0x20);
LAB_7101831968:
    (*pcVar5)();
  }
  else if (local_40 != (undefined **)0x0) {
    pcVar5 = *(code **)(*local_40 + 0x28);
    goto LAB_7101831968;
  }
  local_90 = &PTR_FUN_71050a2848;
// ... (118 more lines)
```

## 42. `FUN_710000c9d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** User-Agent:;Referer:;Cookie:;Referer: %s
;select_item;Accept-Encoding:;Accept-Encoding: %s
;Connection:;%s, TE
TE: gzip
;Connection: TE
TE: gzip
;Transfer-Encoding:;chunked;Transfer-Encoding: chunked
;Host:;dys_yoga03_l_03_set;Host: %s%s%s
;Host: %s%s%s:%hu
;Content-Type:;Accept:;Accept: */*
;plate_side;File already completely uploaded;ftp://;;type=;Range:;Chunky upload is not supported by HTTP 1.0;Range: bytes=%s
;ftp://%s:%s@%s;Content-Range:;Content-Range: bytes %s%ld/%ld
;Content-Range: bytes 0-%ld/%ld
;Content-Range: bytes %s/%ld
;...
- **Callees:** FUN_7100002080;FUN_7100002540;FUN_7100007ef0;FUN_7100007fd0;FUN_710000bba0;FUN_710000e840;FUN_710000ec90;FUN_710000f280;FUN_710000f530;FUN_710000f600;FUN_710000f6f0;FUN_710000f7f0;FUN_710000fa20;FUN_7100011ba0;FUN_7100011c00;FUN_7100012300;...
- **Files:** [decomp](../decompiled/FUN_710000c9d0__710000c9d0.c)  [cfg](../decompiled/FUN_710000c9d0__710000c9d0.mmd)
- **Clone hash:** `30388a151ac3798e`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000c9d0(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  size_t __n;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  long *plVar14;
  void *pvVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  FILE *pFVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
// ... (1114 more lines)
```

## 43. `FUN_7101afe7c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101afe7c0`  (offset `0x1afe7c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101afe7c0(long param_1, undefined4 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1340 bytes / 56 bb / 3 incoming refs
- **Match values:** ready
- **Strings touched:** battlewait;all_on;battlewait_cancel;all_off;battlewait_ready;battlewait_pause
- **Callers:** FUN_71032ebe80;FUN_7103347d90;FUN_7103349170
- **Callees:** FUN_71024076d0;FUN_7103313f20;FUN_71037760f0;FUN_71037780e0;FUN_7103778300;FUN_710377aee0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101afe7c0__7101afe7c0.c)  [cfg](../decompiled/FUN_7101afe7c0__7101afe7c0.mmd)
- **Clone hash:** `5e9b584e3b52313d`

```c

void FUN_7101afe7c0(long param_1,undefined4 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  ulong local_88;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
// ... (179 more lines)
```

## 44. `FUN_71020cb970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020cb970`  (offset `0x20cb970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020cb970(long param_1)`
- **Size / BBs / Incoming:** 720 bytes / 4 bb / 2 incoming refs
- **Match values:** ready
- **Strings touched:** FighterInformation;hit_point;hit_point_max;fighter_color;is_rabbit_cap;is_reflector;is_superleaf;is_rocketbelt;is_screw;is_backshield;is_operation_cpu;get_no_change_hp;TRANS_A_JUMP_AERIAL;dead_count;stock_count;suicide_count;gauge_parts_on;total_beat_count;is_last_dead_suicide;set_add_rebirth_wait_frame;is_on_rebirth;fighter_category;gravity;summon_boss_id;summon_bomb_ready_frame;summon_pre_bomb_effect_frame;summon_suicide_bomb_attack_mul;summon_suicide_bomb_reaction_mul;is_battle_event_stick_reverse;get_log_int
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020cb970__71020cb970.c)  [cfg](../decompiled/FUN_71020cb970__71020cb970.mmd)
- **Clone hash:** `b5802f748562e477`

```c

void FUN_71020cb970(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterInformation",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_point",(long ****)FUN_71020c9fd0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_point_max",(long ****)FUN_71020ca0e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_color",(long ****)FUN_71020ca250,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_rabbit_cap",(long ****)FUN_71020ca320,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reflector",(long ****)FUN_71020ca3f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_superleaf",(long ****)FUN_71020ca4c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_rocketbelt",(long ****)FUN_71020ca590,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_screw",(long ****)FUN_71020ca660,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_backshield",(long ****)FUN_71020ca730,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_operation_cpu",(long ****)FUN_71020ca800,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_change_hp",(long ****)FUN_71020ca8d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"dead_count",(long ****)FUN_71020ca9a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (36 more lines)
```

## 45. `FUN_7100017ae0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100017ae0`  (offset `0x17ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100017ae0(size_t * * * * * * * param_1, long param_2, char * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, uint * param_6, undefined8 param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 3632 bytes / 232 bb / 1 incoming refs
- **Match values:** ready
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

## 46. `FUN_7102192760`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** READY
- **Strings touched:** FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_LEAFSHIELD;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_ENABLE_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_FALL;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP_ACCEPT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_LOOP;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_L_SHOULDER_FIX;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_GENERATE_TOP_N_OFFSET;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_SHOOT_END;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ROCKBUSTER_PREV_ESCAPE;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_ATTACK_HI3_LANDING;FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROCKMAN_MOTION_PART_SET_UDE;FIGHTER_ROCKMAN_MOTION_PART_SET_HAVE_FLIP;FIGHTER_ROCKMAN_MOTION_PART_SET_KIND_TERM;FIGHTER_ROCKMAN_ARM_LEFT;FIGHTER_ROCKMAN_ARM_RIGHT;FIGHTER_ROCKMAN_ARM_MAX;FIGHTER_ROCKMAN_ARMFORM_INVALID;FIGHTER_ROCKMAN_ARMFORM_HAND;FIGHTER_ROCKMAN_ARMFORM_ROCKBUSTER;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102192760__7102192760.c)  [cfg](../decompiled/FUN_7102192760__7102192760.mmd)
- **Clone hash:** `464ecc22f982b06b`

```c

void FUN_7102192760(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_78;
  long local_70;
  int local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_STEP_PREVIOUS",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ROCKBUSTER_COUNT_MINI_JUMP_ATTACK",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_ARM_MANAGER_POINTER",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_RUSHCOIL_WAIT_FRAME",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_HOLD_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_X",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROCKMAN_INSTANCE_WORK_ID_FLOAT_CATCH_OFFSET_Y",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (1050 more lines)
```

## 47. `FUN_71020fbb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** READY
- **Strings touched:** GF_SCENE_ROOT_LAYER_GROUND;GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA;TRANS_A_JUMP_AERIAL;GF_SCENE_ROOT_LAYER_CHARA;GF_SCENE_ROOT_LAYER_ALL;GF_SCENE_ROOT_LAYER_FIGHTER;GF_SCENE_ROOT_LAYER_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_GROUND2;GF_SCENE_ROOT_LAYER_EFFECT;GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER;GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT;GF_SCENE_ROOT_LAYER_EFFECT2D;GF_SCENE_ROOT_LAYER_INFO;GF_SCENE_ROOT_LAYER_MAX;EF_FLIP_NONE;EF_FLIP_AXIS_YZ;EF_FLIP_AXIS_ZX;EF_FLIP_AXIS_XY;EF_FLIP_1;EF_FLIP_2;EF_FLIP_TRANS_X;EF_FLIP_TRANS_Y;EF_FLIP_TRANS_Z;EF_FLIP_ROT_X;EF_FLIP_ROT_Y;EF_FLIP_ROT_Z;EF_FLIP_SCALE_X;EF_FLIP_SCALE_Y;EF_FLIP_SCALE_Z;EF_FLIP_PTCL_X;EF_FLIP_PTCL_Y;EF_FLIP_BITCTRL;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020fbb90__71020fbb90.c)  [cfg](../decompiled/FUN_71020fbb90__71020fbb90.mmd)
- **Clone hash:** `884095f7b78c7d69`

```c

void FUN_71020fbb90(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  long local_78;
  long local_70;
  int local_68;
  
  local_70 = 0;
  local_68 = 0xfffffffd;
  local_78 = param_1;
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND",(undefined **)0x0,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND_AND_CHARA",(undefined **)0x1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_CHARA",(undefined **)0x2,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_ALL",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_FIGHTER",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_STAGE_OBJECT",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_GROUND2",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT_FIGHTER",(undefined **)0x3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_SPECIAL_STAGE_OBJECT",(undefined **)0x3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_EFFECT2D",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_INFO",(undefined **)0x3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_71037289c0(&local_78,(uint *)"GF_SCENE_ROOT_LAYER_MAX",(undefined **)&DAT_00000004,param_4,
                 param_5,param_6,param_7,param_8);
  local_70 = 0;
// ... (15385 more lines)
```

## 48. `FUN_7101896640`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101896640`  (offset `0x1896640`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101896640(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10616 bytes / 510 bb / 1 incoming refs
- **Match values:** ready
- **Strings touched:** chara_select_btn3_05_ready_00;set_txt_02;mnu_online_room_inside_ko_total_n;set_txt_03;mnu_online_room_inside_account_nam;set_rep_icn_fighter_00;set_icn_profile;set_icn_profile_bg;set_txt_00;mnu_online_room_inside_host_nam;set_rep_icn_fighter
- **Callers:** FUN_710189c530
- **Callees:** FUN_71000001c0;FUN_7101686610;FUN_710168eb40;FUN_71016b6a10;FUN_71016b7a00;FUN_71016e3710;FUN_71016ea290;FUN_71016eade0;FUN_71016f6340;FUN_7101764000;FUN_7101797cc0;FUN_71017abd00;FUN_71017c0f50;FUN_71017c6500;FUN_71018918d0;FUN_7101892ba0;...
- **Files:** [decomp](../decompiled/FUN_7101896640__7101896640.c)  [cfg](../decompiled/FUN_7101896640__7101896640.mmd)
- **Clone hash:** `aaac48bef96a5efb`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101896640(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  undefined4 uVar6;
  ushort uVar7;
  long ********pppppppplVar8;
  undefined8 *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
// ... (1748 more lines)
```

## 49. `FUN_7101dd8f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dd8f40`  (offset `0x1dd8f40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dd8f40(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1468 bytes / 82 bb / 0 incoming refs
- **Match values:** ready
- **Strings touched:** set_fxui_smn_shine;set_part_aw_01;set_rep_aura_00;init_anim_in;layout_root;spirit_count;is_aw_ready;mode_empty_03;init_param
- **Callees:** FUN_71024076d0;FUN_710259d3a0;FUN_71025ae6d0;FUN_71025af7f0;FUN_7103313da0;FUN_7103313f20;FUN_71033743c0;FUN_7103375650;FUN_7103376860;FUN_7103376980;FUN_7103377130;FUN_710373b540;FUN_7103775fa0;FUN_7103776640;FUN_7103776910;FUN_71037790a0;...
- **Files:** [decomp](../decompiled/FUN_7101dd8f40__7101dd8f40.c)  [cfg](../decompiled/FUN_7101dd8f40__7101dd8f40.mmd)
- **Clone hash:** `7bc4ae7a93320ee5`

```c

void FUN_7101dd8f40(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar6;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined4 local_90 [4];
  long local_80;
  int local_78;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  undefined8 *local_38;
  
  iVar7 = *(int *)(param_1 + 0x80);
  if (iVar7 == 2) {
    FUN_7103376860(**(long **)(param_1 + 0x40),param_2,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    if ((**(long **)(param_1 + 0x40) == 0) || (*(long *)(**(long **)(param_1 + 0x40) + 8) == 0)) {
      *(undefined4 *)(param_1 + 0x80) = 3;
    }
// ... (194 more lines)
```

## 50. `FUN_7101ef03b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef03b0`  (offset `0x1ef03b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef03b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 724 bytes / 25 bb / 3 incoming refs
- **Match values:** ready
- **Strings touched:** set_part_bg;bg_anim;color_select_menu;bg_loop;in_vs;chara_out_r;chara_out_b;match_up_black_out;vs_black_out;ready_out
- **Callers:** FUN_710197d5f0;FUN_7102337bb0;FUN_710233f310
- **Callees:** FUN_71000001c0;FUN_710330a8f0;FUN_7103563a20;FUN_7103775dc0;FUN_71037760f0;FUN_7103776640;FUN_7103778300;FUN_7103778630;FUN_7103778760;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7101ef03b0__7101ef03b0.c)  [cfg](../decompiled/FUN_7101ef03b0__7101ef03b0.mmd)
- **Clone hash:** `31aece19390aa53f`

```c

void FUN_7101ef03b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *********ppppppppplVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **local_50;
  ulong local_48;
  
  lVar11 = DAT_710532f8b8;
  puVar10 = *(undefined8 **)(param_1 + 0x80);
  if (*(char *)(puVar10 + 1) != '\0') goto LAB_7101ef0490;
  lVar8 = **(long **)(param_1 + 0x78);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f4d8), iVar3 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar7 = *(long *)(lVar8 + 0x28);
    if (lVar7 == 0) goto LAB_7101ef0440;
LAB_7101ef03fc:
    lVar6 = lVar8 + 0x28;
    do {
      bVar2 = (*(ulong *)(lVar7 + 0x20) & 0xffffffffff) < 0x1145a829f5;
      if (!bVar2) {
        lVar6 = lVar7;
      }
      lVar7 = *(long *)(lVar7 + (ulong)bVar2 * 8);
    } while (lVar7 != 0);
    if ((lVar6 == lVar8 + 0x28) || (0x1145a829f5 < (*(ulong *)(lVar6 + 0x20) & 0xfffffffffe)))
    goto LAB_7101ef0440;
// ... (63 more lines)
```

