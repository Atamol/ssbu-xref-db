# result (funcs=97, hits=265)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=30)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** RESULT;Result
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

## 2. `FUN_7101d124b0`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d124b0`  (offset `0x1d124b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d124b0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2688 bytes / 134 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** set_lct_effect;anime_loop;effect_in;set_panel_%02d;result_rank_%d;result_rank_off;select_item;panel;set_txt_result_title;mnu_spectate_result_normal;panel_result_lose;panel_result_win;mnu_spectate_result_right_01;mnu_spectate_result_right_03;winning_in;mnu_spectate_result_right_02
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_7101d176e0;FUN_7101d1b3f0;FUN_7101d20930;FUN_7101d237d0;FUN_7101d239c0;FUN_7101d23c80;FUN_7101d24df0;FUN_7101d25d90;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101d124b0__7101d124b0.c)  [cfg](../decompiled/FUN_7101d124b0__7101d124b0.mmd)
- **Clone hash:** `ce11b3dc96a84cd6`

```c

void FUN_7101d124b0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  uint uVar18;
  long ****pppplVar19;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  long ***local_c8;
  ulong local_c0 [8];
  undefined **local_80;
  ulong local_78;
  
  if (*(int *)(param_1 + 0xfc) != 0) goto LAB_7101d12dc0;
  uVar13 = FUN_7101d25d90(*(long *)(DAT_7105325d88 + 8));
  if ((uVar13 & 0xff) != 0) {
    iVar2 = FUN_7101d239c0((int)(uVar13 >> 0x20));
    plVar15 = *(long **)(*DAT_7105314510 + 0x68);
// ... (387 more lines)
```

## 3. `FUN_7101d61c00`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d61c00`  (offset `0x1d61c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d61c00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 16924 bytes / 862 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** set_part_result_coin;ptn_02;player_number_%dp;ptn_00;%dp_%02d;score_title_onoff;txt_det_title_04;mel_result_item_%02d;set_rep_char_icn;set_rep_char_icn_sd;set_rep_series00;set_rep_series01;set_txt_p_num;cmn_%dp;rank_num_off;set_txt_rank;mode_empty_03;rank_%d;set_fxui_rankflash;set_txt_p_name;set_txt_p_name_break;set_txt_u_name;set_txt_u_name_fp;mel_result_player_n;mel_result_player_nam;mel_result_fp_nam;parts_fp_lv;set_txt_fp_level;mel_result_item_unit_35_00;set_parts_fp_type;spirit_attacker_%s;mel_result_computer_n;...
- **Callers:** FUN_7101490190
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710062dc20;FUN_7101465a30;FUN_71015435c0;FUN_7101764000;FUN_71017a7d70;FUN_7101d5aa30;FUN_7101d65e20;FUN_71024076d0;FUN_710323f330;FUN_710323f600;FUN_71032631a0;FUN_71032632a0;FUN_7103264990;FUN_7103264ab0;...
- **Files:** [decomp](../decompiled/FUN_7101d61c00__7101d61c00.c)  [cfg](../decompiled/FUN_7101d61c00__7101d61c00.mmd)
- **Clone hash:** `a8088be1cec3a294`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101d61c00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,long *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong *puVar5;
  uint *puVar6;
  int iVar7;
  float *pfVar8;
  long *plVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  byte bVar15;
  undefined **ppuVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined2 *puVar23;
  char *pcVar24;
  ulong uVar25;
  char *pcVar26;
  ulong uVar27;
  long *plVar28;
  ushort *puVar29;
  undefined8 *puVar30;
  undefined2 *puVar31;
  long lVar32;
  short sVar33;
// ... (2557 more lines)
```

## 4. `FUN_7103371290`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** RESULT;result
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

## 5. `FUN_7101d230f0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d230f0`  (offset `0x1d230f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d230f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1172 bytes / 55 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** set_txt_result_title;mnu_spectate_result_right_04;panel_result_bonus;set_txt_result_point;set_txt_result_point_hl;panel_result_lose;panel_result_win
- **Callees:** FUN_7101d20830;FUN_71024076d0;FUN_7103313f20;FUN_7103399f50;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;FUN_710377a310;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d230f0__7101d230f0.c)  [cfg](../decompiled/FUN_7101d230f0__7101d230f0.mmd)
- **Clone hash:** `3badff94d30be18b`

```c

void FUN_7101d230f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  float fVar13;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    plVar7 = (long *)(param_1 + 200);
    FUN_7103776910(&local_50,*plVar7,(long ****)"set_txt_result_title",param_3,param_4,param_5,
// ... (169 more lines)
```

## 6. `FUN_71019b20c0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019b20c0`  (offset `0x19b20c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019b20c0(long * * * * * * * * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8128 bytes / 315 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** %dp_%02d;scr_item;set_parts_csr_t;set_parts_csr_b;ptn_02_for_duckhunt;set_rep_char_icn;set_rep_char_icn_sd;set_rep_series00;set_rep_series01;set_txt_p_num;mode_empty_03;rank_%d;set_txt_rank;set_fxui_rankflash;team_color_2;team_color_2_team;team_color_1;team_color_1_team;player_color_fp_team;my_amiibo_hide;my_amiibo_show;set_txt_atk_num;mnu_amiibo_attack_n;set_txt_def_num;mnu_amiibo_defense_n;set_pic_atk_bar;set_pic_atk_bar_shadow;set_pic_def_bar;set_pic_def_bar_shadow;set_txt_p_name;set_txt_p_name_break;set_txt_u_name;...
- **Callers:** FUN_71017fd8b0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101767150;FUN_71019b1b60;FUN_71019b6ba0;FUN_71019b6cd0;FUN_710323f330;FUN_710323f600;FUN_71032626e0;FUN_71032631a0;FUN_71032632a0;FUN_7103263f80;FUN_7103265040;FUN_710326ad60;FUN_7103280ec0;FUN_71032a2c10;...
- **Files:** [decomp](../decompiled/FUN_71019b20c0__71019b20c0.c)  [cfg](../decompiled/FUN_71019b20c0__71019b20c0.mmd)
- **Clone hash:** `ab9b00ec9eb49610`

```c

void FUN_71019b20c0(long ********param_1,ulong param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long ********pppppppplVar4;
  uint *puVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong *puVar8;
  byte bVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  long ******pppppplVar19;
  long *******ppppppplVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ushort *puVar24;
  undefined8 *puVar25;
  char *pcVar26;
  ulong uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  undefined ***pppuVar31;
  byte ****ppppbVar32;
  long ****pppplVar33;
  byte *pbVar34;
  ushort uVar35;
// ... (1385 more lines)
```

## 7. `FUN_7101d22a90`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d22a90`  (offset `0x1d22a90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d22a90(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1620 bytes / 78 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** set_txt_result_point;set_txt_result_point_hl;panel_result_win;panel_result_lose
- **Callees:** FUN_7101d20830;FUN_7101d23c80;FUN_7101d240d0;FUN_71024076d0;FUN_7103313f20;FUN_7103399f50;FUN_7103776910;FUN_71037780e0;FUN_710377a310;FUN_71037964b0;FUN_710392eb40;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d22a90__7101d22a90.c)  [cfg](../decompiled/FUN_7101d22a90__7101d22a90.mmd)
- **Clone hash:** `8f77013e34e99444`

```c

void FUN_7101d22a90(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long ****pppplVar10;
  int *piVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined4 local_120 [2];
  undefined **local_118;
  long local_110;
  int local_108;
  undefined4 uStack_104;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined **local_98;
// ... (247 more lines)
```

## 8. `FUN_7102146bf0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102146bf0`  (offset `0x2146bf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102146bf0(void)`
- **Size / BBs / Incoming:** 7328 bytes / 5 bb / 1 incoming refs
- **Match values:** RESULT
- **Strings touched:** FIGHTER_LINK_INSTANCE_WORK_ID_INT_START;FIGHTER_LINK_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_HIT_COUNT;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOOMERANG_ARTICLE_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOW_ARTICLE_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOWARROW_ARTICLE_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND;FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID;FIGHTER_LINK_INSTANCE_WORK_ID_INT_WAIT_OPPONENT_OBJECT_ID;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_LINK_INSTANCE_WORK_ID_INT_TERM;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_BOOMERANG;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_CLEAR;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_SET_ATTACK;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_WAIT_SHIELD;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_SHIELD;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_IS_SHIELD_GUARD_REQUESTED;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_SET_MAP_COLL_OFFSET;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_OFF_MAP_COLL_OFFSET;FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_FINAL_DX;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_FINAL_DY;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_ATTACK_AIR_LW2_BLANK_TIME;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_DAMAGE;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_LR;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_WAIT_SHIELD_HIT_STOP_FRAME;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_LANDING_PREV_MOTION_FRAME;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_HOOKSHOT_MAP_COLL_OFFSET_X;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_HOOKSHOT_MAP_COLL_OFFSET_Y;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_HOOKSHOT_MAP_COLL_OFFSET_Z;FIGHTER_LINK_INSTANCE_WORK_ID_FLOAT_DELAY_MUL;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102146bf0__7102146bf0.c)  [cfg](../decompiled/FUN_7102146bf0__7102146bf0.mmd)
- **Clone hash:** `57900f9040ec14f5`

```c

void FUN_7102146bf0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_HIT_COUNT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOOMERANG_ARTICLE_ID",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOW_ARTICLE_ID",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOWARROW_ARTICLE_ID",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_LANDING_PREV_MOTION_KIND",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_BOMB_OBJECT_ID",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_WAIT_OPPONENT_OBJECT_ID",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000c5
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_BOOMERANG",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LINK_INSTANCE_WORK_ID_FLAG_ATTACK_AIR_LW_BOUND",
// ... (820 more lines)
```

## 9. `FUN_7101d20930`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d20930`  (offset `0x1d20930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d20930(long param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8516 bytes / 480 bb / 2 incoming refs
- **Match values:** result
- **Strings touched:** set_panel_%02d;result_rank_off;effect_in;boost_size;panel_%d;panel_team;set_panel_00;panel_team_l;set_panel_01;panel_team_r;set_panel_02;set_panel_03;cmn_%dp;set_txt_player;player_color_%dp;set_txt_name;mnu_spectate_nam;set_txt_pw;chara_size;set_rep_mark_m;set_rep_chara;set_rep_chara_sd;set_txt_chara_name;nam_chr1_%02d_%s;set_txt_win;mode_empty_03;arrow_color_%d;set_txt_arrow;mnu_spectate_vector_%d
- **Callers:** FUN_7101d124b0;FUN_7101d17b30
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_71017005f0;FUN_7101d11b60;FUN_7101d1b3f0;FUN_7103238a70;FUN_7103238d60;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_7103263540;FUN_7103263f80;FUN_7103264590;FUN_71032648e0;FUN_710353da30;...
- **Files:** [decomp](../decompiled/FUN_7101d20930__7101d20930.c)  [cfg](../decompiled/FUN_7101d20930__7101d20930.mmd)
- **Clone hash:** `78f5e73c0333b1fd`

```c

void FUN_7101d20930(long param_1,byte param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  byte bVar3;
  ulong uVar4;
  long ********pppppppplVar5;
  bool bVar6;
  ulong uVar7;
  long *******ppppppplVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  byte *pbVar22;
  int iVar23;
  ulong uVar24;
  byte *pbVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  long *********ppppppppplVar29;
// ... (1493 more lines)
```

## 10. `FUN_7101ca8540`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca8540`  (offset `0x1ca8540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca8540(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2024 bytes / 107 bb / 4 incoming refs
- **Match values:** result
- **Strings touched:** tab_01;set_txt_id;set_parts_requirement_00;tab_02;set_parts_requirement;tab_04;set_parts_scr_txt_word;set_txt_mask;set_txt_main;tab_03;mnu_share_search_result_message_03;mnu_share_stage_player_num_kind_02;mnu_share_stage_player_num_kind_01;mnu_share_search_result_message_04;mnu_share_search_result_message_02;mnu_share_search_result_message_01
- **Callers:** FUN_71018a02d0;FUN_71018a1d60;FUN_71018a49e0;FUN_71018a5000
- **Callees:** FUN_7101cf20d0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778950;FUN_710377a280;FUN_71037a2270;FUN_71037a28a0;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101ca8540__7101ca8540.c)  [cfg](../decompiled/FUN_7101ca8540__7101ca8540.mmd)
- **Clone hash:** `5d9c18e4473a45d4`

```c

void FUN_7101ca8540(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if ((*(int *)(*(long *)(param_1 + 0x218) + 0x160) < 1) && (*(int *)(param_1 + 0x138) != 10)) {
    if (0x12 < *(uint *)(param_1 + 0x134)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4 + 0xe8) = 10;
  }
  FUN_7103776390(&local_40,(undefined8 *)(**(long **)(param_1 + 0x150) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(int *)(param_1 + 0x220) != 1) {
    if (*(int *)(param_1 + 0x220) == 2) {
      FUN_7103778300(0x3f800000,local_38,0x710443327f);
      FUN_7103776910(&local_a8,(long)&local_40,(long ****)"set_txt_id",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar4 = local_a0;
      if (*(long **)(local_a0 + 0x10) != (long *)0x0) {
        FUN_71037a28a0(*(long **)(local_a0 + 0x10),(byte *)(param_1 + 0x29c));
      }
      local_a8 = &PTR_FUN_710523d9a8;
// ... (176 more lines)
```

## 11. `FUN_7101d9aeb0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9aeb0`  (offset `0x1d9aeb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9aeb0(short * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2332 bytes / 84 bb / 2 incoming refs
- **Match values:** result
- **Strings touched:** player;player_sp_exp_p%d;set_parts_sp_00_p%d;set_txt_sp_level;mel_result_item_unit_35_00;level_line_anim;set_parts_sp_01_p%d;up_anim;parts_key;set_txt_icon;mel_info_next
- **Callers:** FUN_7101483f50;FUN_7101486510
- **Callees:** FUN_71003a4ca0;FUN_71032cbf30;FUN_710339ae90;FUN_710339b5e0;FUN_710339b6b0;FUN_710339ba00;FUN_710339bba0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778630;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101d9aeb0__7101d9aeb0.c)  [cfg](../decompiled/FUN_7101d9aeb0__7101d9aeb0.mmd)
- **Clone hash:** `79d9d6a005f465d9`

```c

void FUN_7101d9aeb0(short *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short *psVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
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
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  byte ****ppppbVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
// ... (381 more lines)
```

## 12. `FUN_71021ec200`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021ec200`  (offset `0x21ec200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021ec200(void)`
- **Size / BBs / Incoming:** 11060 bytes / 10 bb / 1 incoming refs
- **Match values:** RESULT
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

## 13. `FUN_7101efe2e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101efe2e0`  (offset `0x1efe2e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101efe2e0(uint * param_1)`
- **Size / BBs / Incoming:** 3860 bytes / 175 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** set_part_entry_%s%d_%02d;txt_btn_0;txt_btn_1;set_part_%s%d_%02d;txt_press_btn;set_part_%s%d_entry_%02d;set_part_result_help_l;set_txt_icon;set_part_result_help_c;set_part_result_help_r
- **Callees:** FUN_71000001c0;FUN_7101696040;FUN_71016b6a10;FUN_7101764000;FUN_71017abd00;FUN_7101ef8550;FUN_7103776640;FUN_7103776910;FUN_71037a2270;FUN_71037a4450;FUN_71037ae170;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;...
- **Files:** [decomp](../decompiled/FUN_7101efe2e0__7101efe2e0.c)  [cfg](../decompiled/FUN_7101efe2e0__7101efe2e0.mmd)
- **Clone hash:** `286c699f469184dd`

```c

void FUN_7101efe2e0(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ushort *puVar8;
  ulong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined4 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined4 *local_1320;
  undefined4 local_130c;
  undefined **local_12f0;
  ulong local_12e8;
  undefined **local_12e0;
  ulong local_12d8;
  undefined **local_12d0;
  ulong local_12c8;
  undefined **local_12c0;
  ulong local_12b8;
  undefined **local_12b0;
// ... (623 more lines)
```

## 14. `FUN_71019d0fb0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019d0fb0`  (offset `0x19d0fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019d0fb0(long * * param_1, long * param_2)`
- **Size / BBs / Incoming:** 11700 bytes / 516 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** scroll;scr_sort;plate_side;set_parts_submenu;submenu_item_01;set_det_column_0%d;category_0%d;value_txt;value_color;color_00;btn_keyhelp_00;set_txt_icon;mii_select_scroller;sub_menu;sort_window;sort_window_facade;set_detail;is_max_num;is_full;is_favorite_fighter;switch_favorite_fighter;post_fighter;is_finished_post;is_succeeded_post;delete_fighter;get_no_delete_popup_id;is_parallel_matching;reload_fighter;sort_data_id_list;backup_list_selected_id;gauge_parts_on;select_list_from_backup_id;...
- **Callers:** FUN_710180f330
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101764000;FUN_71017bd310;FUN_71017bd3e0;FUN_71019c1c50;FUN_71019d6770;FUN_71019d6830;FUN_71019dc4e0;FUN_71019dc640;FUN_71019dc780;FUN_71019dc900;FUN_71019e0910;FUN_7101ccce30;FUN_71032cb040;FUN_71032ccb70;...
- **Files:** [decomp](../decompiled/FUN_71019d0fb0__71019d0fb0.c)  [cfg](../decompiled/FUN_71019d0fb0__71019d0fb0.mmd)
- **Clone hash:** `fb467ceec23953e7`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71019d0fb0(long **param_1,long *param_2)

{
  int *piVar1;
  long **pplVar2;
  undefined4 *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long *****ppppplVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  long *****ppppplVar13;
  long **pplVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long ***ppplVar19;
  byte ***pppbVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar21;
  undefined **ppuVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  long ****pppplVar26;
// ... (2174 more lines)
```

## 15. `FUN_7102ef6140`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ef6140`  (offset `0x2ef6140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ef6140(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 776 bytes / 47 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** resultstage_set_win%d
- **Callees:** FUN_71003a4ca0;FUN_71025d9250;FUN_71025e9d50;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7102ef6140__7102ef6140.c)  [cfg](../decompiled/FUN_7102ef6140__7102ef6140.mmd)
- **Clone hash:** `951229738d8be2fb`

```c

void FUN_7102ef6140(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  uint uVar1;
  long *plVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar3;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  uint auStack_68 [2];
  byte local_60;
  byte abStack_5f [63];
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71003a4ca0(auStack_68,"resultstage_set_win%d",1,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar6 = (uint)local_60;
  if (local_60 != 0) {
    plVar4 = *(long **)(param_1[0x62] + 0xd0);
    plVar2 = *(long **)(param_1[0x62] + 0xd8);
    if (plVar4 != plVar2) {
      uVar5 = 0;
      uVar7 = 0xffffffff;
      pbVar8 = abStack_5f;
      do {
        uVar1 = uVar6 + 0x20;
        if (0x19 < uVar6 - 0x41) {
// ... (141 more lines)
```

## 16. `FUN_710391b840`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391b840`  (offset `0x391b840`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710391b840(long * param_1, uint param_2, long * param_3, uint * param_4, uint * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 256 bytes / 13 bb / 3 incoming refs
- **Match values:** result
- **Strings touched:** too many results;invalid next option for option 'X';format asks for alignment not power of 2
- **Callers:** FUN_710391a370;FUN_710391afd0;FUN_710391b170
- **Callees:** FUN_71038f6d60;FUN_710391ba90
- **Files:** [decomp](../decompiled/FUN_710391b840__710391b840.c)  [cfg](../decompiled/FUN_710391b840__710391b840.mmd)
- **Clone hash:** `23fe5cab2c5ab311`

```c

int FUN_710391b840(long *param_1,uint param_2,long *param_3,uint *param_4,uint *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_44;
  
  puVar3 = param_4;
  puVar4 = param_5;
  iVar1 = FUN_710391ba90(param_1,param_3,param_4,param_4,param_5,param_6,param_7,param_8);
  local_44 = *param_4;
  uVar6 = local_44;
  if (iVar1 == 7) {
    if (*(char *)*param_3 != '\0') {
      iVar2 = FUN_710391ba90(param_1,param_3,&local_44,puVar3,puVar4,param_6,param_7,param_8);
      if ((iVar2 != 3) && (uVar6 = local_44, local_44 != 0)) goto LAB_710391b8cc;
    }
    uVar6 = local_44;
    FUN_71038f6d60(*param_1,1,"invalid next option for option \'X\'",puVar3,puVar4,param_6,param_7,
                   param_8);
  }
LAB_710391b8cc:
  uVar5 = 0;
  if ((iVar1 != 3) && (1 < (int)uVar6)) {
    uVar5 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
      local_44 = uVar5;
    }
    uVar5 = uVar6 - 1;
    if ((uVar5 & uVar6) != 0) {
      FUN_71038f6d60(*param_1,1,"format asks for alignment not power of 2",puVar3,puVar4,param_6,
                     param_7,param_8);
    }
// ... (6 more lines)
```

## 17. `FUN_7101f018b0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f018b0`  (offset `0x1f018b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f018b0(undefined1[16] param_1, undefined4 param_2, float param_3, uint * param_4, long * param_5, int param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 6472 bytes / 292 bb / 2 incoming refs
- **Match values:** result
- **Strings touched:** set_part_%dp_subwindow;subwindow_b_sorting;subwindow_r;set_lct_controller_entry;set_lct_controller;btn_anim;controller_joy_dual;set_txt_btn;mel_chara_select_help_press_any_btn;cmn_%dp;set_txt_player;set_part_entry_%s%d_%02d;entry_up;entry_left;txt_btn_0;txt_btn_1;set_part_%s%d_%02d;txt_press_btn;set_part_%s%d_entry_%02d;set_part_result_help_l;set_txt_icon;set_part_result_help_c;set_part_result_help_r;set_%s%d_status_txt_%d;color_p;set_part_%s_help;set_5;set_3;help_00;set_txt_hp;mel_chara_select_hp;mel_chara_select_hc_percent;...
- **Callers:** FUN_710197b740
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101764000;FUN_7101ef8550;FUN_7101ef97d0;FUN_7101ef9b40;FUN_7101ef9f70;FUN_7101f00780;FUN_7101f00930;FUN_71033114a0;FUN_71033115f0;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101f018b0__7101f018b0.c)  [cfg](../decompiled/FUN_7101f018b0__7101f018b0.mmd)
- **Clone hash:** `94ecce5c922de32c`

```c

void FUN_7101f018b0(undefined1 param_1 [16],undefined4 param_2,float param_3,uint *param_4,
                   long *param_5,int param_6,byte ****param_7,long ****param_8,undefined8 param_9,
                   undefined8 param_10,undefined8 param_11)

{
  long ***ppplVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
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
  undefined8 uVar18;
  undefined8 extraout_x1_09;
  byte *pbVar19;
  char *pcVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  ulong uVar23;
// ... (1097 more lines)
```

## 18. `FUN_71004206a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71004206a0`  (offset `0x4206a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71004206a0(void)`
- **Size / BBs / Incoming:** 1328 bytes / 52 bb / 1 incoming refs
- **Match values:** Result
- **Strings touched:** AmiiboReadFigureScene;AmiiboSelectColorScene;AmiiboEditScene;AmiiboWriteFigureScene;AmiiboTransitionEditScene;CharaMakeSequenceScene;IngameCallSequenceScene;SpiritsForceReturnScene;AmiiboStartJourneyScene;AmiiboPseudoSleepScene;set_assist_team_no;AmiiboReturnJourneyScene;AmiiboResultListScene;AmiiboResultDetailScene;AmiiboJourneyReplayScene;MeleeReplaySequenceScene;PrizeListScene;LoginScene
- **Callees:** <EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71004206a0__71004206a0.c)  [cfg](../decompiled/FUN_71004206a0__71004206a0.mmd)
- **Clone hash:** `767ea7d4ffe1a8d0`

```c

void FUN_71004206a0(void)

{
  int iVar1;
  
  DAT_7105328188 = 0;
  DAT_7105328190 = "AmiiboReadFigureScene";
  if (((DAT_71053282b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b0);
  }
  DAT_7105328198 = &PTR_PTR_71050b63b8;
  DAT_71053281a0 = "AmiiboSelectColorScene";
  if (((DAT_71053282b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282b8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282b8);
  }
  DAT_71053281a8 = &PTR_PTR_71050b63c0;
  DAT_71053281b0 = "AmiiboEditScene";
  if (((DAT_71053282c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c0);
  }
  DAT_71053281b8 = &PTR_PTR_71050b63c8;
  DAT_71053281c0 = "AmiiboWriteFigureScene";
  if (((DAT_71053282c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282c8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282c8);
  }
  DAT_71053281c8 = &PTR_PTR_71050b63d0;
  DAT_71053281d0 = "AmiiboTransitionEditScene";
  if (((DAT_71053282d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71053282d0), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71053282d0);
  }
  DAT_71053281d8 = &PTR_PTR_71050b63d8;
  DAT_71053281e0 = "CharaMakeSequenceScene";
  if (((DAT_7105328078 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328078), iVar1 != 0)) {
    __cxa_guard_release(&DAT_7105328078);
  }
  DAT_71053281e8 = &PTR_PTR_71050b59a8;
  DAT_71053281f0 = "IngameCallSequenceScene";
  if (((DAT_71052b9330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052b9330), iVar1 != 0)) {
    __cxa_guard_release(&DAT_71052b9330);
// ... (57 more lines)
```

## 19. `FUN_7101808940`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101808940`  (offset `0x1808940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101808940(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5344 bytes / 214 bb / 1 incoming refs
- **Match values:** RESULT
- **Strings touched:** set_btn_keyhelp_00;set_parts_stick;set_random;switch_favorite;is_empty_name;EXIT_VALUE_CANCEL;EXIT_VALUE_DECIDE;INPUT_COMMON_BUTTON;INPUT_FAVORITE;IS_NEED_SAVE;FROM_AMIIBO;IS_NEW_CREATE_AMIIBO;AMIIBO_CONFIRM_RESULT_DECIDE;AMIIBO_CONFIRM_RESULT_CANCEL;IS_READ_ONLY;IS_SKILL_EDITABLE;set_txt_unedit;mnu_mmiif_setup_miifighter_no_edit;mnu_mmiif_setup_miifighter_limit_edit;EDIT_MII_TYPE;initialize
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71017979d0;FUN_7101797ac0;FUN_71019c7830;FUN_71019c9340;FUN_71019cacd0;FUN_71019cb2e0;FUN_71019ceb30;FUN_71019ddb30;FUN_71019e0910;FUN_71019e0b00;FUN_71019e1d60;FUN_71019e27c0;FUN_71019e33e0;FUN_710323cb80;...
- **Files:** [decomp](../decompiled/FUN_7101808940__7101808940.c)  [cfg](../decompiled/FUN_7101808940__7101808940.mmd)
- **Clone hash:** `3e50ceac906402b1`

```c

void FUN_7101808940(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  char cVar4;
  long *********ppppppppplVar5;
  long ********pppppppplVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long ********pppppppplVar11;
  long *******ppppppplVar12;
  long *********ppppppppplVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  long **pplVar17;
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
  long **********pppppppppplVar18;
  undefined **ppuVar19;
  char *pcVar20;
  CharInfo *pCVar21;
  byte ****ppppbVar22;
// ... (965 more lines)
```

## 20. `FUN_71002add70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002add70`  (offset `0x2add70`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71002add70(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 1212 bytes / 68 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** status;result;token
- **Callers:** FUN_71002a40c0
- **Callees:** FUN_71001b1870;FUN_71001b3cb0;FUN_71001ba380;FUN_71002ac940;operator.delete;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_71002add70__71002add70.c)  [cfg](../decompiled/FUN_71002add70__71002add70.mmd)
- **Clone hash:** `f1d97a24bab5effa`

```c

/* WARNING: Type propagation algorithm not settling */

uint FUN_71002add70(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *******pppppppuVar2;
  uint *******__s2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *******pppppppuVar14;
  undefined8 local_508;
  uint *******local_500;
  undefined8 uStack_4f8;
  undefined8 **local_4f0;
  long *local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  long local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  int local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 uStack_488;
  long local_480;
  undefined8 uStack_478;
// ... (234 more lines)
```

## 21. `FUN_7101ef5ca0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef5ca0`  (offset `0x1ef5ca0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef5ca0(undefined8 * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 884 bytes / 45 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** help_result_in;set_part_result_help_l
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71024076d0;FUN_7103313f20;FUN_71037760f0;FUN_7103776910;FUN_7103778300;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101ef5ca0__7101ef5ca0.c)  [cfg](../decompiled/FUN_7101ef5ca0__7101ef5ca0.mmd)
- **Clone hash:** `b3836516f10c49b6`

```c

void FUN_7101ef5ca0(undefined8 *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  undefined4 local_b0 [4];
  long local_a0;
  int local_98;
  undefined4 local_70 [4];
  long local_60;
  int local_58;
  undefined **local_30;
  long *local_28;
  
  bVar2 = *(byte *)(*DAT_7105328e18 + 0x3a7);
  if (*(int *)((long)param_1 + 0x24c) == 0) {
    if (3 < *(int *)(param_1 + 0x4a) - 0x17U) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052cc5f0 == '\0') {
        FUN_71037760f0(**(long **)*param_1,1);
        FUN_7103778300(0x3f800000,param_1[0x4c],0x71042f8bfa);
      }
      else {
        FUN_71037760f0(**(long **)*param_1,0);
// ... (86 more lines)
```

## 22. `FUN_7102ef5890`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ef5890`  (offset `0x2ef5890`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7102ef5890(undefined8 param_1, undefined8 param_2, uint * param_3)`
- **Size / BBs / Incoming:** 96 bytes / 6 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** resultstage_set_walk_%02d;resultstage_set_car_%02d
- **Callees:** FUN_710062dc20
- **Files:** [decomp](../decompiled/FUN_7102ef5890__7102ef5890.c)  [cfg](../decompiled/FUN_7102ef5890__7102ef5890.mmd)
- **Clone hash:** `7d2165404e4c1408`

```c

undefined8 FUN_7102ef5890(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  char *pcVar1;
  
  if (DAT_71052c35c8 != 0) {
    if ((**(uint **)(DAT_71052c35c8 + 8) | 2) == 2) {
      pcVar1 = "resultstage_set_walk_%02d";
    }
    else {
      pcVar1 = "resultstage_set_car_%02d";
    }
    FUN_710062dc20(param_3,pcVar1);
    return 1;
  }
  return 0;
}


```

## 23. `FUN_7101b52a70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b52a70`  (offset `0x1b52a70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b52a70(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11628 bytes / 591 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** distance_in;distance_out;ff_off;ff_on;ff_on_stop;gsp_onoff;gsp_icon_onoff;player_onoff;player_in;player_out;player_loop;result_off;result_in;gsp_type;line_anim_1p;line_anim_2p;line_anim_3p;line_anim_4p;set_parts_gsp;set_txt_num;set_txt_distance_00;set_txt_distance_01;set_rep_chara_2;set_gsp;set_txt_gsp;set_txt_gsp_count;set_gsp_icon;bg_icon;set_parts_reticle_%02d;set_parts_line_num_%02d;set_keyhelp;set_txt_icon;...
- **Callers:** FUN_71013a83a0
- **Callees:** FUN_7101414b10;FUN_7101b525b0;FUN_71032cbf30;FUN_7103773200;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377a120;FUN_710377b140;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101b52a70__7101b52a70.c)  [cfg](../decompiled/FUN_7101b52a70__7101b52a70.mmd)
- **Clone hash:** `ee903cec363ed3f8`

```c

void FUN_7101b52a70(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  long ***local_70;
  ulong local_68;
  
  *param_1 = &PTR_FUN_71050ab128;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
// ... (2311 more lines)
```

## 24. `FUN_7101f45620`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** RESULT;result
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

## 25. `FUN_7101ac4ba0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** result
- **Strings touched:** set_txt_time;mnu_replay_detail_time_movie;set_txt_mode_00;mnu_replay_detail_melee_allbattle;mnu_replay_detail_melee_normal;mnu_replay_detail_online_tournament;mnu_replay_refinement_mode_homerun;mnu_replay_detail_melee_tournament;mnu_replay_detail_melee_team;mnu_replay_detail_anyone;mnu_replay_detail_room;mnu_replay_detail_anyone_vip;mel_chara_select_melee_team;mel_chara_select_suddendeath_team;mel_chara_select_various_team;set_txt_mode_01;set_parts_text_scroll;set_txt_main;mnu_replay_data_title_default;set_txt_mask;mode_empty_03;set_txt_date_num;mnu_replay_detail_creation_date;set_rep_bgshot;mstg_in_on;m_stg_txt_off;set_rep_movie_pic;mstg_in_off;turn_in_off;mstg_icn_in_on;m_stg_txt_on;turn_in_loop;...
- **Callers:** FUN_7101abdf80;FUN_7101ac0780;FUN_7101ac0850;FUN_7101acbbd0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_710149ebc0;FUN_7101ac6fd0;FUN_7101ac71e0;FUN_7101ac7410;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;...
- **Files:** [decomp](../decompiled/FUN_7101ac4ba0__7101ac4ba0.c)  [cfg](../decompiled/FUN_7101ac4ba0__7101ac4ba0.mmd)
- **Clone hash:** `bd88850886388e66`

```c

void FUN_7101ac4ba0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  long ********pppppppplVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  byte ****ppppbVar12;
  long *plVar13;
  long *******ppppppplVar14;
  undefined8 uVar15;
  long *********ppppppppplVar16;
  long ****pppplVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  byte ****ppppbVar20;
  long *********ppppppppplVar21;
  long *********ppppppppplVar22;
  byte bVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  int *piVar27;
  long ********pppppppplVar28;
  long lVar29;
  byte *pbVar30;
  char cVar31;
  char *pcVar32;
  long *plVar33;
  char cVar34;
  ulong uVar35;
// ... (1178 more lines)
```

## 26. `FUN_7101b5b3f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b5b3f0`  (offset `0x1b5b3f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b5b3f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5036 bytes / 287 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** in_player_03;in_player_02;in_player_01;next_in;view_num_player_03;view_num_player_02;view_num_player_01;anime_to_numplay_03;anime_to_numplay_02;anime_to_numplay_01;result_all_in;result_all_off;set_p_%02d;view_p_00;view_p_01;view_p_02;view_p_03;anime_to_numplay;turn_lamp_00;turn_lamp_01;turn_lamp_02;turn_lamp_03;turn_lamp_04;pic_chara;pic_mii;lamp_anim;set_txt_player_num;set_txt_player_name;set_rep_chara1;set_rep_chara1_sdw;set_rep_chara1_mii;set_rep_chara1_mii_sdw;...
- **Callers:** FUN_71013a4f90
- **Callees:** FUN_7101b56170;FUN_71032cbf30;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377aa20;FUN_710377aae0;FUN_710377abf0;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101b5b3f0__7101b5b3f0.c)  [cfg](../decompiled/FUN_7101b5b3f0__7101b5b3f0.mmd)
- **Clone hash:** `86ae476951d677a9`

```c

void FUN_7101b5b3f0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 auStack_9b8 [16];
  undefined1 auStack_9a8 [16];
  undefined1 auStack_998 [16];
  undefined1 auStack_988 [16];
  undefined1 auStack_978 [16];
  undefined1 auStack_968 [304];
  undefined1 auStack_838 [16];
  undefined1 auStack_828 [16];
  undefined1 auStack_818 [16];
  undefined1 auStack_808 [16];
  undefined1 auStack_7f8 [16];
  undefined1 auStack_7e8 [656];
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [112];
  undefined1 auStack_4d8 [16];
  undefined1 auStack_4c8 [16];
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [640];
  undefined1 auStack_228 [16];
// ... (1037 more lines)
```

## 27. `FUN_7103653cd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103653cd0`  (offset `0x3653cd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103653cd0(long param_1, undefined8 param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4220 bytes / 236 bb / 1 incoming refs
- **Match values:** RESULT;Result
- **Strings touched:** select_item;MELEE_RESULT_RANK;MeleeResultRank;_Viewport;dys_yoga03_l_03_set;DiffuseClear;NODE_MAIN_
- **Callees:** FUN_7103550630;FUN_7103558bd0;FUN_710355b6b0;FUN_7103652f40;FUN_7103856830;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::memcmp;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;<EXTERNAL>::std::to_string;<EXTERNAL>::std::string::append;FUN_71039c6e60;...
- **Files:** [decomp](../decompiled/FUN_7103653cd0__7103653cd0.c)  [cfg](../decompiled/FUN_7103653cd0__7103653cd0.mmd)
- **Clone hash:** `6da365a0060a21f9`

```c

void FUN_7103653cd0(long param_1,undefined8 param_2,ulong *param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  ulong *puVar12;
  ulong *__n;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  size_t *psVar23;
  void *pvVar24;
  long *plVar25;
  long ****pppplVar26;
  long lVar27;
  char *pcVar28;
  long local_188;
  ulong local_170;
  ulong local_138;
  ulong local_130;
  ulong *local_128;
  char *local_120;
// ... (753 more lines)
```

## 28. `FUN_71002acf90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002acf90`  (offset `0x2acf90`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71002acf90(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 1028 bytes / 52 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** status;result;interval
- **Callers:** FUN_71002a7ee0
- **Callees:** FUN_71001b1870;FUN_71001b47e0;FUN_71001b4910;FUN_71001ba380;FUN_71002ac940;FUN_71002accf0;operator.delete;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_71002acf90__71002acf90.c)  [cfg](../decompiled/FUN_71002acf90__71002acf90.mmd)
- **Clone hash:** `4aa929c8af9586f6`

```c

/* WARNING: Type propagation algorithm not settling */

uint FUN_71002acf90(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *******pppppppuVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  ulong uVar10;
  uint *******pppppppuVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  uint *******pppppppuVar15;
  uint *******local_518;
  uint *******local_510;
  undefined8 local_508;
  uint *******local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  uint *******local_4e8;
  undefined8 uStack_4e0;
  undefined8 **local_4d8;
  long *local_4d0;
  undefined8 local_4c8;
  long local_4c0;
  long local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  int local_498;
  undefined8 local_490;
  undefined8 *local_488;
// ... (189 more lines)
```

## 29. `FUN_7101468af0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101468af0`  (offset `0x1468af0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101468af0(void)`
- **Size / BBs / Incoming:** 656 bytes / 26 bb / 1 incoming refs
- **Match values:** RESULT
- **Strings touched:** RBKIND_RESULT_CUTIN_%02d
- **Callees:** FUN_710062dc20;FUN_7101465a30;FUN_710175dfc0;FUN_71024076d0
- **Files:** [decomp](../decompiled/FUN_7101468af0__7101468af0.c)  [cfg](../decompiled/FUN_7101468af0__7101468af0.mmd)
- **Clone hash:** `6abe3df9ac3cc85f`

```c

void FUN_7101468af0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  ulong uVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined4 auStack_f8 [2];
  undefined **local_f0;
  long local_e8;
  int local_e0;
  undefined1 local_d8;
  uint local_b8 [2];
  byte local_b0 [64];
  
  FUN_71024076d0(auStack_f8,0x130f21e8ef);
  local_f0 = &PTR_FUN_7104f73d50;
  if (((local_e8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_e0 == DAT_7106dd53ac)) {
    piVar7 = (int *)(local_e8 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = *piVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e8 = 0;
// ... (71 more lines)
```

## 30. `FUN_710225b990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** RESULT
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

## 31. `FUN_71014aa930`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014aa930`  (offset `0x14aa930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 70 bb / 2 incoming refs
- **Match values:** Result
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

## 32. `FUN_71002ac4c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002ac4c0`  (offset `0x2ac4c0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71002ac4c0(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 1140 bytes / 56 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** status;result;interval;roomId
- **Callers:** FUN_71002a5950
- **Callees:** FUN_71001b1870;FUN_71001b47e0;FUN_71001b4910;FUN_71001ba380;FUN_71002ac940;FUN_71002accf0;FUN_71002ace40;operator.delete;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_71002ac4c0__71002ac4c0.c)  [cfg](../decompiled/FUN_71002ac4c0__71002ac4c0.mmd)
- **Clone hash:** `0efd91bb47e2ee41`

```c

uint FUN_71002ac4c0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **local_520;
  undefined **local_518;
  undefined8 local_510;
  undefined ***local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 uStack_4e8;
  undefined8 **local_4e0;
  long *local_4d8;
  undefined8 local_4d0;
  long local_4c8;
  long local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  int local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined8 *local_480;
// ... (203 more lines)
```

## 33. `FUN_71001d1f60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1f60`  (offset `0x1d1f60`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d1f60(ulong param_1, undefined4 param_2, byte param_3, undefined * param_4, undefined8 param_5, byte * param_6)`
- **Size / BBs / Incoming:** 432 bytes / 17 bb / 2 incoming refs
- **Match values:** Result
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;(vResult = cbCallback(object, 0)) == bErrorValue;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d1e40;FUN_71001d6330
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d7a70;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d1f60__71001d1f60.c)  [cfg](../decompiled/FUN_71001d1f60__71001d1f60.mmd)
- **Clone hash:** `dbb1750fd549f81d`

```c

undefined8
FUN_71001d1f60(ulong param_1,undefined4 param_2,byte param_3,undefined *param_4,undefined8 param_5,
              byte *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 auStack_88 [7];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
      FUN_71001b46a0(auStack_88,10,param_2);
      FUN_71001b2e80((long)auStack_88);
      do {
        bVar1 = (*(code *)param_4)(param_5,0);
        if (((bVar1 ^ param_3) & 1) != 0) goto LAB_71001d20c8;
// ... (20 more lines)
```

## 34. `FUN_710151e4b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710151e4b0`  (offset `0x151e4b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710151e4b0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1784 bytes / 60 bb / 2 incoming refs
- **Match values:** Result
- **Strings touched:** StateLoadAsyncForStaffRoll;StateWaitForSyncWhenBeginning;StateAppearanceProduction;StateMeleeForStaffRoll;StateEndProduction;StatePause;StateOperatorHUDDone;StateDisconnectSyncCommunication;StateResult;StateApplyParameters;StateFadeOutWhenEndingForStaffRoll;StateWaitForSyncWhenEnding
- **Callers:** FUN_7101853990
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710151e4b0__710151e4b0.c)  [cfg](../decompiled/FUN_710151e4b0__710151e4b0.mmd)
- **Clone hash:** `a57b0e3dbbb87bdf`

```c

void FUN_710151e4b0(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
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
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForStaffRoll",(long ****)FUN_710151ebb0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForSyncWhenBeginning",(long ****)FUN_710151ec40,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateAppearanceProduction",(long ****)FUN_710151ecd0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateMeleeForStaffRoll",(long ****)FUN_710151ed50,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndProduction",(long ****)FUN_710151edd0,param_4,
// ... (302 more lines)
```

## 35. `FUN_710182c570`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710182c570`  (offset `0x182c570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710182c570(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 828 bytes / 56 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** exit_code;result
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_710372d940;FUN_71037aea50;FUN_71038f4d40;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710182c570__710182c570.c)  [cfg](../decompiled/FUN_710182c570__710182c570.mmd)
- **Clone hash:** `87281efccc11978c`

```c

void FUN_710182c570(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong local_48;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar9 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_3 = (char *)ppuVar9;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x100) + 0x80);
  plVar12 = *(long **)(lVar14 + 0x40);
  if (*plVar12 == 0) {
    return;
  }
  local_48 = 0;
  FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar12 = (long *)*plVar12;
  lVar5 = *plVar12;
  lVar10 = 0;
  if (lVar5 != 0) {
// ... (129 more lines)
```

## 36. `FUN_7101747230`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101747230`  (offset `0x1747230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101747230(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 604 bytes / 14 bb / 2 incoming refs
- **Match values:** result
- **Strings touched:** tournament_entry;Ver. %d.%d.%d;app_version;tournament_id;evend_id;rating;match_result;wait_interval
- **Callers:** FUN_71016c3c00;FUN_71016c5000
- **Callees:** FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save
- **Files:** [decomp](../decompiled/FUN_7101747230__7101747230.c)  [cfg](../decompiled/FUN_7101747230__7101747230.mmd)
- **Clone hash:** `aa0ca30678e8a079`

```c

void FUN_7101747230(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *local_58;
  
  if (DAT_71074470e0 != 0) {
    FUN_710375aa90((long *)&local_58,"tournament_entry",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    puVar1 = local_58;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71052b92e0), iVar2 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),"app_version");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"tournament_id");
    nn::prepo::PlayReport::Add((char *)(*puVar1 + 0x4020),(Any64BitId *)"evend_id");
    puVar1 = local_58;
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),(Any64BitId *)"rating");
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),(Any64BitId *)"match_result");
    lVar3 = nn::os::GetSystemTick();
    nn::os::ConvertToTimeSpan(lVar3 - DAT_71074470e8);
    nn::prepo::PlayReport::Add((char *)(*local_58 + 0x4020),0x7104400b13);
    DAT_71074470e0 = 0;
    iVar2 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar2 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar2)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*local_58 + 0x4020));
    local_58 = (ulong *)0x0;
    if (puVar1 != (ulong *)0x0) {
      uVar4 = *puVar1;
      *puVar1 = 0;
      if (uVar4 != 0) {
// ... (8 more lines)
```

## 37. `FUN_7101848a60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101848a60`  (offset `0x1848a60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101848a60(long param_1, long param_2, long * * * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3440 bytes / 178 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** mnu_reward_title_result
- **Callees:** FUN_7101783330;FUN_7101783dc0;FUN_7101b0ebf0;FUN_710323b9e0;FUN_710323cb80;FUN_71032a7800;FUN_71032cad20;FUN_71033861b0;FUN_7103386910;FUN_7103386c90;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::SleepThread;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101848a60__7101848a60.c)  [cfg](../decompiled/FUN_7101848a60__7101848a60.mmd)
- **Clone hash:** `d44c2508edc4b470`

```c

void FUN_7101848a60(long param_1,long param_2,long ************param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  int *piVar2;
  ulong *puVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined2 *puVar16;
  undefined2 *extraout_x1;
  undefined2 *extraout_x1_00;
  undefined2 *extraout_x1_01;
  undefined2 *extraout_x1_02;
  undefined2 *extraout_x1_03;
  undefined2 *extraout_x1_04;
  undefined2 *extraout_x1_05;
  undefined2 *extraout_x1_06;
  undefined2 *puVar17;
  undefined2 *extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 uVar18;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined2 *extraout_x1_15;
// ... (734 more lines)
```

## 38. `FUN_71022f1a80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71022f1a80`  (offset `0x22f1a80`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71022f1a80(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Result
- **Strings touched:** AmiiboResultDetailSceneParameter
- **Files:** [decomp](../decompiled/FUN_71022f1a80__71022f1a80.c)  [cfg](../decompiled/FUN_71022f1a80__71022f1a80.mmd)
- **Clone hash:** `69fd5c780d6adcc8`

```c

char * FUN_71022f1a80(void)

{
  return "AmiiboResultDetailSceneParameter";
}


```

## 39. `FUN_7101ff91a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ff91a0`  (offset `0x1ff91a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ff91a0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 296 bytes / 1 bb / 69 incoming refs
- **Match values:** result
- **Strings touched:** new_instance_lua;link_event_kind_;sender_id_;result_
- **Callers:** FUN_7101ff8de0;FUN_7101ffd170;FUN_71020542d0;FUN_71020547b0;FUN_7102054a40;FUN_7102055a60;FUN_7102055c80;FUN_71020b1a20;FUN_71020b38d0;FUN_71020b3b10;FUN_71020b4ae0;FUN_71020b6200;FUN_71020f2f80;FUN_7102122480;FUN_7102148b00;FUN_7102148cd0;...
- **Callees:** FUN_71038f5390
- **Files:** [decomp](../decompiled/FUN_7101ff91a0__7101ff91a0.c)  [cfg](../decompiled/FUN_7101ff91a0__7101ff91a0.mmd)
- **Clone hash:** `01aa9b935133ec24`

```c

void FUN_7101ff91a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  uint *puVar6;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101ff93a0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  uVar3 = *(ulong *)(param_1 + 0x10);
  puVar4 = *(ulong **)(param_2 + 0x10);
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = uVar3 & 0xffffffffff;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"link_event_kind_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x20);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"sender_id_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x24);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"no_");
  puVar6 = *(uint **)(param_2 + 0x10);
  *puVar6 = (uint)*(byte *)(param_1 + 0x28);
  puVar6[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
// ... (5 more lines)
```

## 40. `FUN_71021d0650`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d0650`  (offset `0x21d0650`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71021d0650(long param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 1040 bytes / 65 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** from_;generation_;result_
- **Callees:** FUN_7101ff9450;FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_71021d0650__71021d0650.c)  [cfg](../decompiled/FUN_71021d0650__71021d0650.mmd)
- **Clone hash:** `a3e1ca738a0e3220`

```c

uint FUN_71021d0650(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  float local_50 [4];
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar7 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar7 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar9 = *plVar6, plVar7 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar7 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar7 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar7) {
// ... (162 more lines)
```

## 41. `FUN_710391eb80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391eb80`  (offset `0x391eb80`)
- **Namespace:** `Global`
- **Signature:** `float __cdecl FUN_710391eb80(long param_1, undefined8 param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 788 bytes / 43 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** number has no integer representation;number;too many results to unpack
- **Callees:** FUN_71038f45b0;FUN_71038f5170;FUN_71038f6c50;FUN_71038f6d60;FUN_71038f74d0;FUN_71038f8ab0;FUN_71038fb4b0;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_710391eb80__710391eb80.c)  [cfg](../decompiled/FUN_710391eb80__710391eb80.mmd)
- **Clone hash:** `0de63b84b6865cd9`

```c

float FUN_710391eb80(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  long lVar13;
  float local_50 [4];
  int local_34;
  
  pfVar6 = local_50;
  lVar7 = **(long **)(param_1 + 0x20);
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  if (((undefined8 *)(lVar7 + 0x20) < puVar9 && (undefined8 *)(lVar7 + 0x20) != &DAT_7104862960) &&
     ((*(byte *)(lVar7 + 0x28) & 0xf) != 0)) {
    param_3 = (char *)&local_34;
    lVar4 = FUN_71038f45b0(param_1,2,(undefined4 *)param_3);
    if (local_34 == 0) {
      plVar1 = (long *)(**(long **)(param_1 + 0x20) + 0x20);
      if (*(long **)(param_1 + 0x10) <= plVar1) {
        plVar1 = &DAT_7104862960;
      }
      uVar2 = *(uint *)(plVar1 + 1);
      if ((uVar2 == 3) || (uVar2 == 0x13)) {
LAB_710391ec14:
        param_3 = "number has no integer representation";
        FUN_71038f6d60(param_1,2,"number has no integer representation",param_4,param_5,param_6,
                       param_7,param_8);
      }
// ... (101 more lines)
```

## 42. `FUN_7102144140`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102144140`  (offset `0x2144140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102144140(long param_1)`
- **Size / BBs / Incoming:** 1248 bytes / 4 bb / 2 incoming refs
- **Match values:** result
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

## 43. `FUN_71036d3eb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036d3eb0`  (offset `0x36d3eb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71036d3eb0(long param_1)`
- **Size / BBs / Incoming:** 1068 bytes / 57 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** dys_yoga03_l_03_set;blend_result
- **Callees:** FUN_7103682860;FUN_71038cf200;FUN_71038d8140;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_71036d3eb0__71036d3eb0.c)  [cfg](../decompiled/FUN_71036d3eb0__71036d3eb0.mmd)
- **Clone hash:** `f7d485ac3bdbbfc1`

```c

void FUN_71036d3eb0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  void *__dest;
  void *__src;
  long *plVar11;
  byte local_80 [9];
  undefined4 uStack_77;
  undefined1 uStack_73;
  undefined2 uStack_72;
  long *local_70;
  long local_68;
  
  plVar10 = (long *)**(undefined8 **)(param_1 + 8);
  lVar3 = (**(code **)(*plVar10 + 0x38))(plVar10);
  local_80[0] = 0xc;
  local_80[8] = 0;
  uStack_77 = 0;
  uStack_73 = 0;
  uStack_72 = 0;
  local_70 = (long *)0x0;
  uVar6 = 0;
  local_80[5] = 0x72;
  local_80[6] = 99;
  local_80[1] = 0x74;
  local_80[2] = 0x72;
  local_80[3] = 0x5f;
  local_80[4] = 0x73;
  uVar9 = 0x74;
// ... (151 more lines)
```

## 44. `FUN_7101ef9f70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef9f70`  (offset `0x1ef9f70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef9f70(undefined1[16] param_1, undefined4 param_2, float param_3, uint * param_4, long * param_5, undefined8 param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 3208 bytes / 117 bb / 4 incoming refs
- **Match values:** result
- **Strings touched:** set_rep_chara;set_rep_chara_sd;set_rep_chara_lose;set_rep_mark;set_txt_chara_name;set_txt_00;set_part_cp_level;set_txt_fp_level;set_part_spirits;gauge_parts_on;set_part_spirits_mark;player_color_1p;mode_empty_03;player_color_cp;cp_level_%d;set_txt_level;player_color_fp;spirits_mark_on;player_color_1p_name;mel_player_n;nam_chr1_%02d_%s;spirits_on;set_txt_sp_level;mel_result_item_unit_35_00;level_line_anim;level_on;spirits_off;level_off
- **Callers:** FUN_7101f018b0;FUN_7101f03200;FUN_7101f049c0;FUN_7101f05110
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101764000;FUN_7101f09020;FUN_710323f600;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_71032638e0;FUN_7103263f80;FUN_710339ae90;FUN_710339b5e0;FUN_710339b6b0;FUN_710339ba00;FUN_710339bba0;...
- **Files:** [decomp](../decompiled/FUN_7101ef9f70__7101ef9f70.c)  [cfg](../decompiled/FUN_7101ef9f70__7101ef9f70.mmd)
- **Clone hash:** `724b30f52fad2048`

```c

void FUN_7101ef9f70(undefined1 param_1 [16],undefined4 param_2,float param_3,uint *param_4,
                   long *param_5,undefined8 param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 *puVar10;
  long ********pppppppplVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ushort *puVar17;
  undefined8 uVar18;
  long *********ppppppppplVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  undefined8 uVar24;
  byte *pbVar25;
  char *pcVar26;
  uint uVar27;
  long lVar28;
  undefined1 *puVar29;
  ulong uVar30;
  long lVar31;
  undefined4 extraout_s0;
// ... (524 more lines)
```

## 45. `FUN_7101ff9450`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ff9450`  (offset `0x1ff9450`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7101ff9450(long param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 1372 bytes / 86 bb / 229 incoming refs
- **Match values:** result
- **Strings touched:** link_event_kind_;sender_id_;result_
- **Callers:** FUN_7101ff9e80;FUN_7101ffd3e0;FUN_7102054be0;FUN_7102055d50;FUN_71020b1dc0;FUN_71020b3c10;FUN_71020b4d30;FUN_71020b6680;FUN_71020f3240;FUN_71021227b0;FUN_7102148d70;FUN_710216b570;FUN_710216c0e0;FUN_710216d160;FUN_710216dce0;FUN_710216e9b0;...
- **Callees:** FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_7101ff9450__7101ff9450.c)  [cfg](../decompiled/FUN_7101ff9450__7101ff9450.mmd)
- **Clone hash:** `70f692ecafed4cd7`

```c

uint FUN_7101ff9450(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  float local_50 [4];
  
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar8 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar8 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar7 = *plVar6, plVar8 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar8 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar8 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar8) {
      plVar8 = &DAT_7104862960;
// ... (221 more lines)
```

## 46. `FUN_71015637a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71015637a0`  (offset `0x15637a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71015637a0(long param_1, ulong param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3612 bytes / 174 bb / 6 incoming refs
- **Match values:** result
- **Strings touched:** mel_mockbattle_name_unknown;mel_result_convention_score_n
- **Callers:** FUN_7101563650;FUN_7101564a30;FUN_7101565b00;FUN_7101566650;FUN_7101566f30;FUN_7101567020
- **Callees:** FUN_71000001c0;FUN_710138b6c0;FUN_710138bad0;FUN_710138bb90;FUN_710138bc50;FUN_710138bd30;FUN_710138bf30;FUN_710138c080;FUN_710138c160;FUN_71013cee40;FUN_71015547e0;FUN_71015678e0;FUN_7101686610;FUN_710168eb40;FUN_71016b6a10;FUN_71016b7b20;...
- **Files:** [decomp](../decompiled/FUN_71015637a0__71015637a0.c)  [cfg](../decompiled/FUN_71015637a0__71015637a0.mmd)
- **Clone hash:** `625d2704119a3451`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_71015637a0(long param_1,ulong param_2,undefined **param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  long ***ppplVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  long lVar18;
  ulong uVar19;
  long ***ppplVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined4 extraout_var;
  uint local_278;
  uint local_274;
  long ***local_268;
// ... (452 more lines)
```

## 47. `FUN_7101eddd30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eddd30`  (offset `0x1eddd30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eddd30(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1372 bytes / 41 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** actor;__index;TYPE_WIN;TYPE_LOSE;TYPE_ABORT;standard_result;set_parts_icon_%02d;set_rep_icon
- **Callers:** FUN_710148f930
- **Callees:** FUN_7101edd860;FUN_71023d4940;FUN_710323f330;FUN_710326ad60;FUN_7103280ec0;FUN_71032cb040;FUN_71032cbb00;FUN_7103375650;FUN_7103776640;FUN_7103776910;FUN_7103778b80;FUN_7103779770;FUN_71038f4d40;FUN_71038f5390;FUN_71038f5c00;FUN_71038f6930;...
- **Files:** [decomp](../decompiled/FUN_7101eddd30__7101eddd30.c)  [cfg](../decompiled/FUN_7101eddd30__7101eddd30.mmd)
- **Clone hash:** `aabf970ba46fce80`

```c

void FUN_7101eddd30(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long *********ppppppppplVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined **local_b0;
  undefined8 *local_a8;
  undefined **local_a0;
  ulong local_98;
  long ***local_90;
  undefined8 uStack_88;
  undefined4 local_74;
// ... (198 more lines)
```

## 48. `FUN_710375abe0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710375abe0`  (offset `0x375abe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710375abe0(undefined8 param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10964 bytes / 390 bb / 1 incoming refs
- **Match values:** RESULT
- **Strings touched:** LayoutManager (Normal);FB_MELEE_RESULT_RANK
- **Callers:** FUN_7103741f40
- **Callees:** FUN_7100000220;FUN_7100031330;FUN_710003a0e0;FUN_710003a240;FUN_7100045270;FUN_71000463a0;FUN_7100046970;FUN_7100047d00;FUN_7100048d60;FUN_710007d880;FUN_7103590cf0;FUN_7103593520;FUN_710359b630;FUN_71035b9920;FUN_710363f2d0;FUN_7103720840;...
- **Files:** [decomp](../decompiled/FUN_710375abe0__710375abe0.c)  [cfg](../decompiled/FUN_710375abe0__710375abe0.mmd)
- **Clone hash:** `5fe48a43099bdf73`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710375abe0(undefined8 param_1,undefined8 param_2,char *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long ***ppplVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  char *pcVar23;
  code *pcVar24;
  undefined *puVar25;
  long lVar26;
  byte *pbVar27;
  ulong uVar28;
  byte *pbVar29;
  uint uVar30;
  void *pvVar31;
// ... (3771 more lines)
```

## 49. `FUN_7101ef3d40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef3d40`  (offset `0x1ef3d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef3d40(undefined1[16] param_1, undefined4 param_2, float param_3, long param_4, undefined8 param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 1584 bytes / 62 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** match_up_next_in;game_count_in;game_count_txt_1;set_txt_l;mel_team_competition_progress_result;help_vs_in;match_up_black_out;chara_out_b;chara_out_r;chara_out_%s;fxui_thunder_off
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101ef0c30;FUN_7101ef1110;FUN_7101ef6750;FUN_7101ef68a0;FUN_7101f05110;FUN_7101f06b90;FUN_71023489d0;FUN_71024076d0;FUN_71033112b0;FUN_7103313f20;FUN_710373b540;FUN_7103776910;FUN_7103778300;FUN_7103778430;...
- **Files:** [decomp](../decompiled/FUN_7101ef3d40__7101ef3d40.c)  [cfg](../decompiled/FUN_7101ef3d40__7101ef3d40.mmd)
- **Clone hash:** `fd7a99096e28faa6`

```c

void FUN_7101ef3d40(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,
                   undefined8 param_5,undefined **param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  long ****pppplVar14;
  long *plVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined8 extraout_var_06;
// ... (201 more lines)
```

## 50. `FUN_7101ef56e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ef56e0`  (offset `0x1ef56e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ef56e0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1472 bytes / 76 bb / 1 incoming refs
- **Match values:** result
- **Strings touched:** count_up_%s_hl;set_part_win_%s;set_part_result_coin;in_anim
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71023489d0;FUN_71024076d0;FUN_7103313f20;FUN_7103392c70;FUN_71033934a0;FUN_7103399c10;FUN_710373b540;FUN_7103776390;FUN_7103776640;FUN_7103778430;FUN_7103778760;FUN_71037964b0;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101ef56e0__7101ef56e0.c)  [cfg](../decompiled/FUN_7101ef56e0__7101ef56e0.mmd)
- **Clone hash:** `d1867487382cf7a2`

```c

void FUN_7101ef56e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  long ****pppplVar12;
  int *piVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined4 local_b8 [2];
  undefined **local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined **local_78;
  ulong local_70;
  undefined **local_68;
  ulong local_60;
  long ***local_58;
  ulong local_50;
  undefined4 local_44;
  
  if (*(int *)((long)param_1 + 0x24c) == 0) {
// ... (229 more lines)
```

