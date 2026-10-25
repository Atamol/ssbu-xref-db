# ban (funcs=39, hits=177)

Top 50 functions by hit count

## 1. `FUN_7101c108f0`  (hits=30)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** ban
- **Strings touched:** bg_banner_rule_detail;bg_banner_rule_hp;bg_banner_team_com;bg_banner_time_limit;bg_banner_stock_num;bg_banner_hp_mode;bg_banner_victory_cond;bg_banner_spirit_icon;bg_banner_cp_level;bg_banner_handicap_damage;bg_banner_stage_select;bg_banner_item_switch;bg_banner_stage_switch;bg_banner_team_attack;bg_banner_def_reaction;bg_banner_charge_final;bg_banner_handicap_boost;bg_banner_stage_gimmick;bg_banner_stage_number;bg_banner_stage_change;bg_banner_pause;bg_banner_score_disp;bg_banner_battle_max_num;bg_banner_scaledown_stage;bg_banner_recovery_value;bg_banner_damage_disp;bg_banner_allbattle_unreversal;bg_banner_drop_bomb;bg_banner_rule_stock;bg_banner_rule_time
- **Callers:** FUN_7101c0cd40;FUN_7101c0e810;FUN_7101c10630
- **Callees:** FUN_7103776390;FUN_7103778300;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101c108f0__7101c108f0.c)  [cfg](../decompiled/FUN_7101c108f0__7101c108f0.mmd)
- **Clone hash:** `b5c0bc5b38099e58`

```c

void FUN_7101c108f0(long param_1,undefined1 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x6a8) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  switch(param_2) {
  case 2:
    if (*(char *)(param_1 + 0x659) == '\x01') {
      pcVar3 = "bg_banner_rule_stock";
    }
    else if (*(char *)(param_1 + 0x659) == '\x02') {
      pcVar3 = "bg_banner_rule_hp";
    }
    else {
      pcVar3 = "bg_banner_rule_time";
    }
    break;
  case 3:
    pcVar3 = "bg_banner_team_com";
    break;
  case 4:
    pcVar3 = "bg_banner_time_limit";
    break;
  case 5:
    pcVar3 = "bg_banner_stock_num";
    break;
  case 6:
    pcVar3 = "bg_banner_hp_mode";
    break;
  case 7:
    pcVar3 = "bg_banner_victory_cond";
    break;
// ... (87 more lines)
```

## 2. `FUN_71020fbb90`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** BAN
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

## 3. `FUN_7101cf8af0`  (hits=15)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cf8af0`  (offset `0x1cf8af0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cf8af0(undefined1[16] param_1, undefined4 param_2, float param_3, long param_4, int param_5, undefined8 param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 6096 bytes / 222 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** set_txt_rank;set_txt_day;nam_chr2_%02d_%s;fighter_name_l_1;set_txt_fighter_3;fighter_name_l_2;set_txt_fighter_4;set_txt_player_l;set_rep_fighter;set_rep_fighter_1;set_rep_fighter_2;set_rep_shadow;set_rep_shadow2;set_pic_band_champion_00;set_pic_band_champion_03;set_pic_band_champion_05;set_pic_band_champion_06;set_pic_band_champion_08;fighter_name_1;set_txt_fighter_1;fighter_name_2;set_txt_fighter_2;set_txt_player;set_rep_fighter_r;set_rep_fighter_3;set_rep_fighter_4;set_rep_shadow_r;set_rep_shadow2_r;set_pic_band_champion_01;set_pic_band_champion_02;set_pic_band_champion_04;set_pic_band_champion_07;...
- **Callers:** FUN_7101cfa720
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710175dfc0;FUN_7101764000;FUN_7102398db0;FUN_710239d920;FUN_710323f600;FUN_7103262310;FUN_71032631a0;FUN_7103263540;FUN_7103263f80;FUN_71032648e0;FUN_7103266830;FUN_7103741810;FUN_7103776390;FUN_7103776910;...
- **Files:** [decomp](../decompiled/FUN_7101cf8af0__7101cf8af0.c)  [cfg](../decompiled/FUN_7101cf8af0__7101cf8af0.mmd)
- **Clone hash:** `c8feedae23c9a991`

```c

void FUN_7101cf8af0(undefined1 param_1 [16],undefined4 param_2,float param_3,long param_4,
                   int param_5,undefined8 param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  int iVar19;
  uint uVar20;
  ushort *puVar21;
  ulong uVar22;
  long *plVar23;
  ulong uVar24;
  char *pcVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long *********ppppppppplVar28;
  byte ****ppppbVar29;
  long ****pppplVar30;
  undefined8 uVar31;
  long lVar32;
  byte *pbVar33;
  uint uVar34;
// ... (1140 more lines)
```

## 4. `FUN_7101f45620`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** BAN
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

## 5. `FUN_7102ccbec0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ccbec0`  (offset `0x2ccbec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ccbec0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1932 bytes / 82 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** CSP0001;plate_side;CSP0003;CSP0002;CSP0004;GOS0001;stc_DxOnettAshibaTreeB_set;stc_DxOnettAshibaTreeA_set;dyr_DxOnettKanban_set;dyr_dxonettkanban_set_kanban;dyr_dxonettkanban_set_kanban01;dyr_dxonettkanban_set_kanban02;dyr_dxonettkanban_set_kanban03;dyr_Bluecar_set;dyr_Pinkcar_set;dyr_Taxi_set;dyr_Tonzurabus_set
- **Callees:** FUN_71025e9d50;FUN_710262cd30;FUN_7102cc8a90;FUN_7102cc9460;FUN_7102cca840;FUN_7102ccb430;FUN_7102ccb530;FUN_7102ccd2c0;FUN_710313ef20;FUN_7103151710;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7102ccbec0__7102ccbec0.c)  [cfg](../decompiled/FUN_7102ccbec0__7102ccbec0.mmd)
- **Clone hash:** `0121690103006a7d`

```c

void FUN_7102ccbec0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  long ****pppplVar7;
  char *pcVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long ***local_38;
  undefined4 local_24;
  
  uVar1 = FUN_7103151710((byte *)"CSP0001");
  lVar2 = FUN_710262cd30(*(long *)(*(long *)(param_1 + 0x300) + 8),uVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x798);
  uVar10 = *(undefined4 *)(lVar2 + 0x108);
  *(undefined8 *)(param_1 + 0x798) = uVar13;
  *(ulong *)(param_1 + 0x790) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x790) >> 0x20),uVar10);
  uVar12 = CONCAT44(*(undefined4 *)(lVar2 + 0x10c),uVar10);
  *(undefined8 *)(param_1 + 0x798) = uVar13;
  *(undefined8 *)(param_1 + 0x790) = uVar12;
  *(ulong *)(param_1 + 0x798) = (ulong)*(uint *)(lVar2 + 0x110);
  *(undefined8 *)(param_1 + 0x790) = uVar12;
  uVar1 = FUN_7103151710((byte *)"CSP0003");
  lVar2 = FUN_710262cd30(*(long *)(*(long *)(param_1 + 0x300) + 8),uVar1);
  uVar13 = *(undefined8 *)(param_1 + 0x7a8);
  uVar10 = *(undefined4 *)(lVar2 + 0x108);
  *(undefined8 *)(param_1 + 0x7a8) = uVar13;
  *(ulong *)(param_1 + 0x7a0) =
// ... (291 more lines)
```

## 6. `FUN_7100436e50`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100436e50`  (offset `0x436e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100436e50(void)`
- **Size / BBs / Incoming:** 424 bytes / 1 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** bandman_g;bandman_t;bandman_b;pauline;bandman_d;PlayGuitar;WaitGuitar;PlayGuitarAction;PlayBass;WaitBass;PlayBassAction;PlayTrumpetActionA;PlayTrumpet;WaitTrumpet;PlayTrumpetActionB;PlayDrum
- **Callees:** FUN_71000001c0;FUN_71026af880
- **Files:** [decomp](../decompiled/FUN_7100436e50__7100436e50.c)  [cfg](../decompiled/FUN_7100436e50__7100436e50.mmd)
- **Clone hash:** `57988e661f99ac24`

```c

void FUN_7100436e50(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong local_80;
  char *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *local_38;
  
  local_80 = DAT_710511a0b0;
  local_78 = PTR_s_bandman_g_710511a0b8;
  local_60 = DAT_710511a0d0;
  puStack_58 = PTR_s_bandman_t_710511a0d8;
  local_70 = DAT_710511a0c0;
  puStack_68 = PTR_s_bandman_b_710511a0c8;
  local_40 = DAT_710511a0f0;
  local_38 = PTR_s_pauline_710511a0f8;
  local_50 = DAT_710511a0e0;
  puStack_48 = PTR_s_bandman_d_710511a0e8;
  FUN_71026af880(&DAT_710532deb8,&local_80,(long ****)0x5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = DAT_710511a100;
  local_78 = PTR_s_PlayGuitar_710511a108;
  local_60 = DAT_710511a120;
  puStack_58 = PTR_s_WaitGuitar_710511a128;
  local_70 = DAT_710511a110;
  puStack_68 = PTR_s_PlayGuitarAction_710511a118;
  FUN_71026af880(&DAT_710532dee0,&local_80,(long ****)0x3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
// ... (25 more lines)
```

## 7. `FUN_7101cfa720`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cfa720`  (offset `0x1cfa720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cfa720(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 1840 bytes / 92 bb / 2 incoming refs
- **Match values:** ban
- **Strings touched:** trophy_off;set_dummy;melee;set_pic_band_champion_00;set_pic_band_champion_01;set_pic_band_champion_03;set_pic_band_champion_04
- **Callees:** FUN_7101cf8af0;FUN_71033145d0;FUN_7103775fa0;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_71037790a0;FUN_7103779480;FUN_7103779d90;FUN_710379e9c0;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101cfa720__7101cfa720.c)  [cfg](../decompiled/FUN_7101cfa720__7101cfa720.mmd)
- **Clone hash:** `1ce3abf544251530`

```c

void FUN_7101cfa720(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,long *********param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined4 *puVar7;
  uint *puVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
// ... (388 more lines)
```

## 8. `FUN_710042a820`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710042a820`  (offset `0x42a820`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710042a820(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3708 bytes / 154 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** dys_guest_asami_set;dys_guest_ayasiineko_set;dys_guest_boy01_set;dys_guest_boy02_set;dys_guest_boy03_set;dys_guest_dondonguri_set;dys_guest_fuuko_set;dys_guest_fuuta_set;dys_guest_girl01_set;dys_guest_girl02_set;dys_guest_gureesu_set;dys_guest_hakkemii_set;dys_guest_honmasan_set;dys_guest_kaburiba_set;dys_guest_katoriinu_set;dys_guest_kinuyo_set;dys_guest_maigotyan_set;dys_guest_mametubu_set;dys_guest_masutaa_set;dys_guest_misiranuneko_set;dys_guest_monbana_set;dys_guest_monbanb_set;dys_guest_okaasan_set;dys_guest_periko_set;dys_guest_perimi_set;dys_guest_rakosuke_set;dys_guest_rouran_set;dys_guest_seiiti_set;dys_guest_sontyou_set;dys_guest_tanukitid_set;dys_guest_tanukitik_set;dys_guest_tanukitis_set;...
- **Callees:** FUN_71000001c0;FUN_7102682d60;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710042a820__710042a820.c)  [cfg](../decompiled/FUN_710042a820__710042a820.mmd)
- **Clone hash:** `e2b84bf01adfa6cf`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710042a820(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long ****pppplVar2;
  int local_4f8 [2];
  byte local_4f0;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
  undefined7 uStack_4e7;
  undefined1 local_4e0;
  undefined4 uStack_4df;
  undefined3 uStack_4db;
  undefined4 local_4d8;
  ulong local_4d0;
  undefined8 local_4c8;
  char *local_4c0;
  undefined4 local_4b8;
  byte local_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 local_4a0;
  undefined4 uStack_49f;
  undefined3 uStack_49b;
  undefined4 local_498;
  byte local_490;
  undefined7 uStack_48f;
  undefined1 uStack_488;
  undefined7 uStack_487;
  undefined1 local_480;
  undefined2 uStack_47f;
  undefined1 uStack_47d;
  undefined4 uStack_47c;
  undefined4 local_478;
  byte local_470;
// ... (771 more lines)
```

## 9. `FUN_71023fee20`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023fee20`  (offset `0x23fee20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023fee20(ulong * param_1, long * * * * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10036 bytes / 488 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** sound/bank/fighter/se_%s_c%02d.nus3bank;Pikmin;sound/bank/fighter_voice/vc_%s_result_c%02d.nus3bank;dys_yoga03_l_03_set;sound/bank/fighter/se_%s_c%02d.tonelabel;sound/bank/fighter_voice/vc_%s_result_c%02d.tonelabel;sound/bank/fighter/se_%s_c%02d.nus3audio;sound/bank/fighter_voice/vc_%s_result_c%02d.nus3audio;sound/bank/stage/%s.nus3bank;sound/bank/stage/%s.tonelabel;sound/bank/stage/%s.nus3audio
- **Callers:** FUN_71018e91a0
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_710147f330;FUN_71017df5b0;FUN_71017dfe10;FUN_71017e1080;FUN_71017e1d70;FUN_71023fe4a0;FUN_7102401560;FUN_7102401730;FUN_7102401c40;FUN_71032626e0;FUN_71032631a0;FUN_71032638e0;FUN_71032ba9a0;FUN_71032c1dd0;...
- **Files:** [decomp](../decompiled/FUN_71023fee20__71023fee20.c)  [cfg](../decompiled/FUN_71023fee20__71023fee20.mmd)
- **Clone hash:** `080b6af3cf460eed`

```c

/* WARNING: Removing unreachable block (ram,0x0071023ff8b8) */
/* WARNING: Removing unreachable block (ram,0x0071023ff9b8) */
/* WARNING: Removing unreachable block (ram,0x0071023ff5e4) */
/* WARNING: Removing unreachable block (ram,0x0071023ff7c4) */
/* WARNING: Removing unreachable block (ram,0x0071023ff63c) */
/* WARNING: Removing unreachable block (ram,0x0071023ffab0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_71023fee20(ulong *param_1,long ****param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  uint *puVar16;
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
// ... (1795 more lines)
```

## 10. `FUN_71017e1080`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017e1080`  (offset `0x17e1080`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017e1080(uint * param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3312 bytes / 151 bb / 23 incoming refs
- **Match values:** ban
- **Strings touched:** NODE_PRE_REFRACT_BLEND;%s/%s/model/body;%s/%s/motion/body;effect/%s/%s;sound/bank/%s/se_%s_%s.nus3bank;sound/bank/%s/se_%s_%s.tonelabel;sound/bank/%s/se_%s_%s.nus3audio;sound/sequence/%s/%s.sqb;%s/%s/script/animcmd/body;%s/%s/camera/c00
- **Callers:** FUN_71016052f0;FUN_71017ea2f0;FUN_71023fee20
- **Callees:** FUN_710147f330;FUN_71035404b0;FUN_7103540d50;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock
- **Files:** [decomp](../decompiled/FUN_71017e1080__71017e1080.c)  [cfg](../decompiled/FUN_71017e1080__71017e1080.mmd)
- **Clone hash:** `12633d11dbc7b62d`

```c

void FUN_71017e1080(uint *param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  long *********ppppppppplVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte local_158 [256];
  undefined2 local_58;
  
  switch(param_3) {
  case 0:
    piVar2 = DAT_71052c3960;
    do {
      piVar16 = piVar2;
      if (piVar16 == DAT_71052c3968) goto switchD_71017e10bc_caseD_2;
      piVar2 = piVar16 + 2;
    } while (*piVar16 != param_2);
    break;
  case 1:
    piVar2 = DAT_71052c3978;
    do {
// ... (666 more lines)
```

## 11. `FUN_710225b990`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** BAN
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

## 12. `FUN_71017e1d70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017e1d70`  (offset `0x17e1d70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017e1d70(uint * param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2544 bytes / 100 bb / 11 incoming refs
- **Match values:** ban
- **Strings touched:** enemy/%s/model/body/c00;enemy/%s/motion/body/c00;enemy/%s/motion/body/c00/motion_list.bin;effect/enemy/%s;enemy/%s/script/animcmd/body;sound/bank/enemy/se_enemy_%s.nus3bank;sound/bank/enemy/se_enemy_%s.tonelabel;sound/bank/enemy/se_enemy_%s.nus3audio
- **Callers:** FUN_71017e31f0;FUN_71023fee20
- **Callees:** FUN_710147f330;FUN_71035404b0;FUN_7103540d50;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock
- **Files:** [decomp](../decompiled/FUN_71017e1d70__71017e1d70.c)  [cfg](../decompiled/FUN_71017e1d70__71017e1d70.mmd)
- **Clone hash:** `c508198e3933a00b`

```c

void FUN_71017e1d70(uint *param_1,int param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  byte local_158 [256];
  undefined2 local_58;
  
  if (4 < param_2) {
    *(undefined1 **)param_1 = &SUB_ffffff00ffffff;
    return;
  }
  local_58 = 0;
  local_158[0] = 0;
  switch((ulong)param_3 & 0xffffffff) {
  case 0:
    param_3 = (long *********)(&PTR_s_yellowdevil_710509f9b8)[param_2];
    FUN_710147f330((long)local_158,"enemy/%s/model/body/c00",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar15 = (uint)local_158[0];
    if (local_158[0] == 0) {
      uVar8 = 0;
      uVar12 = 0;
    }
    else {
// ... (510 more lines)
```

## 13. `FUN_7101bf02a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** BAN
- **Strings touched:** SEQUENCE_NONE;SEQUENCE_TITLE;SEQUENCE_TITLE_DEMO;SEQUENCE_MELEE;SEQUENCE_MELEE_NORMAL;SEQUENCE_MELEE_TEAM_COMPE;SEQUENCE_MELEE_SPECIAL;SEQUENCE_MELEE_SPECIAL_VARIOUS;SEQUENCE_MELEE_SPECIAL_SUDDENDEATH;SEQUENCE_MELEE_SPECIAL_ALL_BATTLE;SEQUENCE_MELEE_TOURNAMENT;SEQUENCE_SPIRITS;mode_empty_03;SEQUENCE_SPIRITS_CHALLENGE;SEQUENCE_SPIRITS_CANPAIGN;SEQUENCE_SPIRITS_FORMATION;SEQUENCE_SPIRITS_CHALLENGE_SPECIAL;SEQUENCE_OTHER;SEQUENCE_OTHER_STANDARD;SEQUENCE_OTHER_KUMITE;SEQUENCE_OTHER_KUMITE_100;SEQUENCE_OTHER_KUMITE_ALLSTAR;SEQUENCE_OTHER_KUMITE_CRUEL;SEQUENCE_OTHER_HOMERUN;SEQUENCE_OTHER_HOMERUN_SINGLE;SEQUENCE_OTHER_HOMERUN_COOP;SEQUENCE_OTHER_HOMERUN_EVERYONE;SEQUENCE_OTHER_TRAINING;SEQUENCE_OTHER_CHARA_MAKE;SEQUENCE_OTHER_STAGE_MAKE;SEQUENCE_OTHER_AMIIBO;SEQUENCE_OTHER_CHALLENGER;...
- **Callers:** FUN_710185e890
- **Callees:** FUN_71000001c0;FUN_710075f050;FUN_710172a350;FUN_7101761580;FUN_7101761830;FUN_7101762400;FUN_7101763880;FUN_7101763970;FUN_7101763b40;FUN_7101764000;FUN_7101be16e0;FUN_7101be1cf0;FUN_7101be1ef0;FUN_7101be3dc0;FUN_7101be4200;FUN_71025d2a00;...
- **Files:** [decomp](../decompiled/FUN_7101bf02a0__7101bf02a0.c)  [cfg](../decompiled/FUN_7101bf02a0__7101bf02a0.mmd)
- **Clone hash:** `5467e28c510ce846`

```c

/* WARNING: Removing unreachable block (ram,0x007101bf28e4) */
/* WARNING: Removing unreachable block (ram,0x007101bf28e8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f0) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101bf02a0(undefined8 *param_1,long *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  PosixTime *pPVar12;
  void *__dest;
  PosixTime *pPVar13;
  undefined8 extraout_x1;
  long *plVar14;
  PosixTime **ppPVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  PosixTime *pPVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
// ... (1797 more lines)
```

## 14. `FUN_71018b3d90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b3d90`  (offset `0x18b3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018b3d90(long param_1, long param_2)`
- **Size / BBs / Incoming:** 7432 bytes / 295 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** {:D=-;mel_tournament_title_default;selector;set_btn_melee;set_btn_event;mode_single;mode_double;mode_empty_03;set_txt_period_sta_00;cmn_day_of_week_%d;set_txt_period_end_00;mode_melee;mode_1on1;set_rep_banner;set_pic_banner_bg;set_pic_halo;set_pic_banner_cap;set_txt_title_event_pre;set_txt_period_date;set_txt_title_event;state_open;state_prepare
- **Callees:** FUN_71016c9130;FUN_710176bcc0;FUN_7101989a30;FUN_7101af77d0;FUN_7101af8570;FUN_7101cf7160;FUN_7101cfb0f0;FUN_7101cfb660;FUN_7101cfb730;FUN_7101cfbac0;FUN_7101cfbad0;FUN_7102399340;FUN_710323beb0;FUN_710323cb80;FUN_710323eba0;FUN_71032cad20;...
- **Files:** [decomp](../decompiled/FUN_71018b3d90__71018b3d90.c)  [cfg](../decompiled/FUN_71018b3d90__71018b3d90.mmd)
- **Clone hash:** `69b5dd675af1e57c`

```c

/* WARNING: Removing unreachable block (ram,0x0071018b58a4) */
/* WARNING: Removing unreachable block (ram,0x0071018b59b0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71018b3d90(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  PosixTime PVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  uint *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
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
  long ***************ppppppppppppppplVar16;
  long ****pppplVar17;
// ... (1447 more lines)
```

## 15. `FUN_7101f31930`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f31930`  (offset `0x1f31930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7476 bytes / 419 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** set_bnd_edge_left;set_bnd_edge_right;set_mask_size_map;set_pos_timeline;set_pos_timeline_front;set_pos_timeline_seek;mode_empty_03;set_pos_detail_measure;set_size_movie_length;set_pos_size_map_view;set_pos_map_seek;set_txt_num_clip_movie;set_txt_num_clip_sound;set_txt_num_clip_tellop;set_pos_stretch_left;set_pos_stretch_right;gauge_parts_on;set_offset_stretch;set_offset_pickup_center;set_pos_limit_front;set_pos_limit_band;set_size_limitband_00;set_size_limitband_01;set_pos_map_limit_00;set_pos_map_limit_01;set_txt_map_end;set_txt_key_change;set_txt_limit;set_txt_map_limit;set_txt_map_start;selector;set_parts_btn_next;...
- **Callers:** FUN_7101f09580
- **Callees:** FUN_7101f3c990;FUN_7101f3e4e0;FUN_7101f41680;FUN_71032cbf30;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;FUN_7103771d60;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103777420;FUN_7103778300;FUN_7103778760;...
- **Files:** [decomp](../decompiled/FUN_7101f31930__7101f31930.c)  [cfg](../decompiled/FUN_7101f31930__7101f31930.mmd)
- **Clone hash:** `762c715697862b0f`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f31930(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte ****ppppbVar2;
  byte ****ppppbVar3;
  byte ***pppbVar4;
  long *plVar5;
  byte **ppbVar6;
  byte ***pppbVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long ****pppplVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long ***ppplVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  byte ****ppppbVar28;
  undefined **ppuVar29;
  long *plVar30;
  byte ****ppppbVar31;
  byte ***pppbVar32;
  byte ****ppppbVar33;
// ... (1501 more lines)
```

## 16. `FUN_7101f89310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** BAN
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

## 17. `FUN_7101d5aa30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d5aa30`  (offset `0x1d5aa30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d5aa30(int * param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2900 bytes / 150 bb / 39 incoming refs
- **Match values:** ban
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

## 18. `FUN_71021554f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021554f0`  (offset `0x21554f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021554f0(void)`
- **Size / BBs / Incoming:** 8112 bytes / 4 bb / 1 incoming refs
- **Match values:** BAN
- **Strings touched:** FIGHTER_NESS_INSTANCE_WORK_ID_INT_START;FIGHTER_NESS_INSTANCE_WORK_ID_INT_FINAL_SHOOT_COUNT;FIGHTER_NESS_INSTANCE_WORK_ID_INT_FINAL_SERIAL;FIGHTER_NESS_INSTANCE_WORK_ID_INT_TERM;FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_PHY_MAGNET_LR;FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_ADJUST;FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_MAX;FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_START;FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_FINAL_START;FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_REFLECTOR;FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_NESS_CLIFF_HANG_DATA_DEFAULT;FIGHTER_NESS_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_NESS_CLIFF_HANG_DATA_TERM;FIGHTER_NESS_ARCHIVE_GROUP_BASE;FIGHTER_NESS_ARCHIVE_GROUP_WPN_YOYO;FIGHTER_NESS_ARCHIVE_TERM;FIGHTER_NESS_PK_THUNDER_HIT_STATUS_NONE;FIGHTER_MARIO_STATUS_KIND_SPECIAL_LW_CHARGE;FIGHTER_NESS_PK_THUNDER_HIT_STATUS_HIT;FIGHTER_NESS_PK_THUNDER_HIT_STATUS_NEVERHIT;FIGHTER_NESS_KINETIC_ENERGY_ID_START;FIGHTER_NESS_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_NESS_START;FIGHTER_KINETIC_TYPE_NESS_AIR_STOP_SPECIAL_N;FIGHTER_KINETIC_TYPE_NESS_SPECIAL_AIR_HI_START;FIGHTER_KINETIC_TYPE_NESS_AIR_STOP_X_NORMAL_MAX_SPECIAL_HI;FIGHTER_KINETIC_TYPE_NESS_SPECIAL_HI_ATTACK;FIGHTER_KINETIC_TYPE_NESS_SPECIAL_AIR_HI_ATTACK;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021554f0__71021554f0.c)  [cfg](../decompiled/FUN_71021554f0__71021554f0.mmd)
- **Clone hash:** `eae61ca0ed5d8cb0`

```c

void FUN_71021554f0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_INT_FINAL_SHOOT_COUNT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_INT_FINAL_SERIAL",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_INT_TERM",(undefined **)0x100000bf
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_PHY_MAGNET_LR",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_ADJUST",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_MAX",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4f,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_FINAL_START",
                 (undefined **)0x200000e0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_NESS_INSTANCE_WORK_ID_FLAG_REFLECTOR",
                 (undefined **)0x200000e1,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (885 more lines)
```

## 19. `FUN_7101cfbe40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cfbe40`  (offset `0x1cfbe40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cfbe40(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2704 bytes / 103 bb / 3 incoming refs
- **Match values:** ban
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

## 20. `FUN_7102bb3290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102bb3290`  (offset `0x2bb3290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102bb3290(long param_1, long * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * param_7, long * * * * param_8)`
- **Size / BBs / Incoming:** 44032 bytes / 2720 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** yak_lift_3fC_01_set;odyssey3f_c_floor;bandman_g;STG_ODYSSEY_GET;DemoCeremonyOpeningStartLoop;cityman;ExcitedMaxJump
- **Callees:** FUN_71003ca470;FUN_7100771690;FUN_7102bbde90;FUN_7102bbe0a0;FUN_7102bbe2b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort;<EXTERNAL>::std::string::assign
- **Files:** [decomp](../decompiled/FUN_7102bb3290__7102bb3290.c)  [cfg](../decompiled/FUN_7102bb3290__7102bb3290.mmd)
- **Clone hash:** `f2cd4a43b455b372`

```c

void FUN_7102bb3290(long param_1,long *param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,byte ***param_7,long ****param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  long *plVar9;
  long ****pppplVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  byte *pbVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *pbVar35;
// ... (8566 more lines)
```

## 21. `FUN_71000d53a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d53a0`  (offset `0xd53a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d53a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 17 bb / 2 incoming refs
- **Match values:** Ban
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::WaitBandwidthCheck
- **Callees:** FUN_7100151ef0;FUN_7100151fe0;FUN_7100152020;FUN_7100161fb0;FUN_7100192f60;FUN_7100193560
- **Files:** [decomp](../decompiled/FUN_71000d53a0__71000d53a0.c)  [cfg](../decompiled/FUN_71000d53a0__71000d53a0.mmd)
- **Clone hash:** `929958c318dc8f0d`

```c

undefined8 FUN_71000d53a0(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  int aiStack_60 [4];
  
  lVar4 = FUN_7100192f60(DAT_71052adfc0);
  if (*(char *)(lVar4 + 0x51) != '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 3;
  if (*(ushort *)(param_1 + 0x6c) < 2) {
LAB_71000d54c4:
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::WaitBandwidthCheck";
    *(code **)(param_1 + 0x30) = FUN_71000d5530;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  uVar3 = FUN_7100151fe0(lVar4);
  if ((uVar3 & 1) == 0) {
    FUN_7100152020(lVar4);
    return 5;
  }
  plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
  aiStack_60[0] = 0;
  aiStack_60[1] = 0x800;
  aiStack_60[2] = 0;
  (**(code **)(*plVar5 + 0x68))(plVar5,aiStack_60);
  if (1 < *(ushort *)(param_1 + 0x6c)) {
    uVar7 = 2;
// ... (21 more lines)
```

## 22. `FUN_7102ec4ee0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ec4ee0`  (offset `0x2ec4ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ec4ee0(float param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 3576 bytes / 199 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** effect_pos_fushigibana;Pokemon_Fushigibana
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7101764000;FUN_7102405040;FUN_71025e9d50;FUN_710260fdd0;FUN_7102ecf700;FUN_710313ef20;FUN_7103736cf0;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7102ec4ee0__7102ec4ee0.c)  [cfg](../decompiled/FUN_7102ec4ee0__7102ec4ee0.mmd)
- **Clone hash:** `13e5a9810022240e`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ec4ee0(float param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar12;
  uint uVar11;
  long *plVar13;
  long *plVar14;
  long *plVar15;
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
// ... (653 more lines)
```

## 23. `FUN_7101bcf940`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcf940`  (offset `0x1bcf940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcf940(long * param_1, long param_2, byte * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9548 bytes / 503 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** in_menu;out_menu;selector_option;set_main_00;set_main_01;option_csr_grp;set_parts_csr_l;set_parts_csr_r;btn_menu_cursor;set_parts_btn_edit_%02d;set_txt_timer;set_parts_header;set_txt_rule;set_txt_tnmt_title;set_band_color_00;set_band_color_01;btn_keyhelp_skill;set_txt_icon
- **Callers:** FUN_7101bd2320
- **Callees:** FUN_7101414b10;FUN_7101989a30;FUN_7101b85d60;FUN_7101b8b370;FUN_7101bc9cc0;FUN_7101bca4e0;FUN_7101bca4f0;FUN_7101bca5a0;FUN_7101bca5b0;FUN_7101bcc0a0;FUN_7101bcc690;FUN_7101bcd660;FUN_7101bcdd20;FUN_7101bce9f0;FUN_7101bcec20;FUN_7101bcf520;...
- **Files:** [decomp](../decompiled/FUN_7101bcf940__7101bcf940.c)  [cfg](../decompiled/FUN_7101bcf940__7101bcf940.mmd)
- **Clone hash:** `96e3aa88e644d904`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101bcf940(long *param_1,long param_2,byte ******param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  byte ***pppbVar18;
  byte ********ppppppppbVar19;
  byte ********ppppppppbVar20;
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
// ... (2046 more lines)
```

## 24. `FUN_7102ec49f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ec49f0`  (offset `0x2ec49f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ec49f0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1136 bytes / 57 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** plate_side;pos_poke_Fushigibana_stop;pos_poke_Fushigibana_start
- **Callers:** FUN_7102ec1bf0
- **Callees:** FUN_71025e9d50;FUN_710260fdd0;FUN_71026533a0
- **Files:** [decomp](../decompiled/FUN_7102ec49f0__7102ec49f0.c)  [cfg](../decompiled/FUN_7102ec49f0__7102ec49f0.mmd)
- **Clone hash:** `94526c90906ab484`

```c

void FUN_7102ec49f0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long extraout_x1;
  long extraout_x1_00;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_7105147ec0;
  param_1[1] = param_2;
// ... (264 more lines)
```

## 25. `FUN_71021f03e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021f03e0`  (offset `0x21f03e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021f03e0(void)`
- **Size / BBs / Incoming:** 8144 bytes / 7 bb / 1 incoming refs
- **Match values:** BAN
- **Strings touched:** FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_START;FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_FINAL_SHOOT_COUNT;FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_FINAL_SERIAL;FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_SPECIAL_AIR_END_MOTION;FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_THROW_LW_EFFECT_HANDLE;FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_TERM;WEAPON_GANON_BEAST_INSTANCE_WORK_ID_FLAG_HITSTOP;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_SCALE;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_OFFSET;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_PHY_MAGNET_LR;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_ADJUST;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_MAX;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_THROW_LW_EFFECT_OFFSET_X;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_THROW_LW_EFFECT_OFFSET_Z;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_START;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_FINAL_START;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_REFLECTOR;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_ON;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_OFF;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_UPDATE;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_THROW_LW_EFFECT_Z_ZERO;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_SPECIAL_HI_NO_LAST_ATTACK;FIGHTER_LUCAS_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_LUCAS_CLIFF_HANG_DATA_START;FIGHTER_LUCAS_CLIFF_HANG_DATA_AIR_LASSO;FIGHTER_LUCAS_CLIFF_HANG_DATA_AIR_LASSO_HANG;FIGHTER_LUCAS_CLIFF_HANG_DATA_SPECIAL_HI;FIGHTER_LUCAS_CLIFF_HANG_DATA_TERM;FIGHTER_LUCAS_ARCHIVE_GROUP_BASE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021f03e0__71021f03e0.c)  [cfg](../decompiled/FUN_71021f03e0__71021f03e0.mmd)
- **Clone hash:** `9259f7c504e8fcfc`

```c

void FUN_71021f03e0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_FINAL_SHOOT_COUNT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_FINAL_SERIAL",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_SPECIAL_AIR_END_MOTION",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_THROW_LW_EFFECT_HANDLE",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_SCALE",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_CATCH_TARGET_EFFECT_OFFSET"
                 ,(undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_PHY_MAGNET_LR",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_ADJUST",
                 (undefined **)0x4f,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_LUCAS_INSTANCE_WORK_ID_FLOAT_FINAL_ANGLE_MAX",
                 (undefined **)&DAT_00000050,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (894 more lines)
```

## 26. `FUN_710396f430`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710396f430`  (offset `0x396f430`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710396f430(long param_1, long param_2, uint param_3, char * param_4, undefined4 param_5, byte param_6)`
- **Size / BBs / Incoming:** 948 bytes / 47 bb / 2 incoming refs
- **Match values:** BAN
- **Strings touched:** BANK%03d;TONE%03d
- **Callers:** FUN_7103960420
- **Callees:** FUN_71039873e0;<EXTERNAL>::sprintf;<EXTERNAL>::memset;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock
- **Files:** [decomp](../decompiled/FUN_710396f430__710396f430.c)  [cfg](../decompiled/FUN_710396f430__710396f430.mmd)
- **Clone hash:** `2cfbbaddc41a9460`

```c

undefined8
FUN_710396f430(long param_1,long param_2,uint param_3,char *param_4,undefined4 param_5,byte param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  byte *pbVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar14 = 0x80000015;
  if ((((*(char *)(param_2 + 1) == '\x02') && (*(char *)(param_2 + 2) == '\x01')) &&
      (*(char *)(param_2 + 3) == '\0')) && (*(int *)(param_2 + 4) == 0)) {
    *(long *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 8);
    iVar2 = *(int *)(param_2 + 0xc);
    uVar6 = (ulong)(iVar2 * 4 + 0x1c);
    *(int *)(param_1 + 0x48) = iVar2;
    uVar14 = 0x80000017;
    if ((uVar6 + 8 <= (ulong)param_3) &&
       (uVar6 = (ulong)*(uint *)(param_2 + uVar6), uVar6 + 0xbc <= (ulong)param_3)) {
      uVar14 = 0x80000017;
      if (((*(uint *)(param_2 + 0x10) < 0x10001) || (*(char *)(param_1 + 0x58) == '\0')) &&
         (lVar5 = param_2 + uVar6,
         uVar4 = *(int *)(lVar5 + 0x18) + *(uint *)(param_2 + 0x10) + *(int *)(lVar5 + 0x14),
         uVar4 <= param_3 || *(char *)(param_1 + 0x58) != '\0')) {
        *(uint *)(param_1 + 0x10) = uVar4;
        uVar4 = iVar2 << 4;
// ... (118 more lines)
```

## 27. `FUN_71000d5330`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5330`  (offset `0xd5330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5330(void)`
- **Size / BBs / Incoming:** 100 bytes / 1 bb / 1 incoming refs
- **Match values:** Ban
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::StartBandwidthCheck
- **Callees:** FUN_71001936e0
- **Files:** [decomp](../decompiled/FUN_71000d5330__71000d5330.c)  [cfg](../decompiled/FUN_71000d5330__71000d5330.mmd)
- **Clone hash:** `f91636cd2f884574`

```c

undefined8 FUN_71000d5330(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = FUN_71001936e0(DAT_71052adfc0);
  bVar3 = (bVar4 & 1) == 0;
  pcVar1 = "NexJoinMeshJob::StartBandwidthCheck";
  if (bVar3) {
    pcVar1 = "NexJoinMeshJob::CompleteProcess";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  pcVar2 = FUN_71000d53a0;
  if (bVar3) {
    pcVar2 = FUN_710018cf30;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 28. `FUN_7103979af0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103979af0`  (offset `0x3979af0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103979af0(long param_1, int * param_2, int * param_3, int * param_4)`
- **Size / BBs / Incoming:** 1428 bytes / 70 bb / 2 incoming refs
- **Match values:** Ban
- **Strings touched:** LightReverb;Compressor;Delay;Freeverb;Distortion;NUCompressor;chara/chara_4/chara_4_;Vita_Distortion;dys_yoga03_l_03_set;PitchShift;DownMix;SpeakerEmulator;Radio;Ambisonic;Binaural;EarlyReflection;SingleChannel_Freeverb;EQ_8Band
- **Callers:** FUN_7103979500
- **Callees:** FUN_7103986e80;FUN_71039873e0;<EXTERNAL>::strncmp;<EXTERNAL>::memset;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock
- **Files:** [decomp](../decompiled/FUN_7103979af0__7103979af0.c)  [cfg](../decompiled/FUN_7103979af0__7103979af0.mmd)
- **Clone hash:** `1055e3534512d198`

```c

undefined8 FUN_7103979af0(long param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *__s;
  undefined8 uVar7;
  long lVar8;
  int local_6c;
  int local_68;
  int local_64;
  
  iVar5 = strncmp((char *)param_2,"LightReverb",0x1f);
  if (iVar5 == 0) {
    iVar5 = 0x56524d49;
  }
  else {
    iVar5 = 0x4d4f4342;
    iVar6 = strncmp((char *)param_2,"Compressor",0x1f);
    if (iVar6 != 0) {
      iVar5 = 0x51454245;
      iVar6 = strncmp((char *)param_2,"EQ",0x1f);
      if (iVar6 == 0) {
        iVar5 = 0x5145504e;
      }
      else {
        iVar6 = strncmp((char *)param_2,"Delay",0x1f);
        if (iVar6 == 0) {
          iVar5 = 0x594c444e;
        }
        else {
          iVar6 = strncmp((char *)param_2,"Freeverb",0x1f);
          if (iVar6 == 0) {
            iVar5 = 0x42565246;
          }
// ... (188 more lines)
```

## 29. `FUN_71021e8010`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021e8010`  (offset `0x21e8010`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021e8010(void)`
- **Size / BBs / Incoming:** 10856 bytes / 4 bb / 1 incoming refs
- **Match values:** BAN
- **Strings touched:** FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_START;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_MOT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_AIR_MOT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX;WEAPON_ELIGHT_ESWORD_MOTION_PART_SET_KIND_OPEM_CLOSE;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_LASER_C;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_GUN_ID;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_MOT2ND;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_TERM;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_RIGHT_OFFSET;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_LEFT_OFFSET;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET_TIMER;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_HEAD_OFFSET_TIMER_MAX;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_ABSORBER_POWER;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_ABSORBER_LR;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_FINAL_LASER_ANG;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_START;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MOT_FRAME_INHERIT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_ST_INIT;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_AIR;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_GROUND;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_MOTION_END;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_MTRANS_SMPL_EX1;FIGHTER_MIIGUNNER_INSTANCE_WORK_FLAG_CANNONJUMP_FALL;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_REFLECTOR;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_REFLECTOR_BREAK;FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLAG_GRAVITY_BRAKE_USED;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021e8010__71021e8010.c)  [cfg](../decompiled/FUN_71021e8010__71021e8010.mmd)
- **Clone hash:** `18bab05dbf474b8b`

```c

void FUN_71021e8010(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_MOT",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_AIR_MOT",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_EFH_CHARGE_MAX",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GUNNER_CHARGE_COUNT",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_LASER_C",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_GUN_ID",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_FINAL_MOT2ND",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_GROUND_BOMB_OBJECT_ID",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_MIIGUNNER_INSTANCE_WORK_ID_FLOAT_START",
// ... (1254 more lines)
```

## 30. `FUN_7100156720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100156720`  (offset `0x156720`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_7100156720(undefined8 param_1)`
- **Size / BBs / Incoming:** 392 bytes / 33 bb / 2 incoming refs
- **Match values:** Ban
- **Strings touched:** KeepAlive;chara/chara_4/chara_4_;Station;(KickoutReason_Unknown PROTOCOL NAME);SyncClock;Local;Direct;BandwidthCheck;Unreliable;RoundrobinUnreliable;select_item;Clone;Atomic;Event;Clock;InterpolationClock;NODE_PRE_REFRACT_BLEND;Voice;Reliable;BroadcastReliable;StreamBroadcastReliable;ReliableBroadcast;Session;Lobby;Feedback;RelayService;WanNat
- **Callers:** FUN_7100154a40
- **Files:** [decomp](../decompiled/FUN_7100156720__7100156720.c)  [cfg](../decompiled/FUN_7100156720__7100156720.mmd)
- **Clone hash:** `7d2ee8f7c1fc3923`

```c

char * FUN_7100156720(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_7100156748_caseD_8;
  default:
    pcVar1 = "(KickoutReason_Unknown PROTOCOL NAME)";
switchD_7100156748_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x28:
    return "Direct";
  case 0x2c:
    return "Net";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x54:
    return "BandwidthCheck";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x6c:
    return "RoundrobinUnreliable";
// ... (33 more lines)
```

## 31. `FUN_7101e62bd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e62bd0`  (offset `0x1e62bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e62bd0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 2316 bytes / 81 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** header_band;set_txt_title;cam_searchfield%d_field_name;selector_slot;set_parts_cursor;set_parts_slot_%02d;selector_menu;set_parts_menu_%02d;menu_btn_1;cam_searchfield_go;sp_off;plus_on;set_parts_talk;selector_return;set_btn_return;color_search;selector_keyhelp;btn_keyhelp_remove
- **Callers:** FUN_7101947560
- **Callees:** FUN_71003a4ca0;FUN_7101989a30;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e96fc0;FUN_7101e9aa40;FUN_71032a7800;FUN_71032cbf30;FUN_710337d5b0;FUN_710337d5c0;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103772070;...
- **Files:** [decomp](../decompiled/FUN_7101e62bd0__7101e62bd0.c)  [cfg](../decompiled/FUN_7101e62bd0__7101e62bd0.mmd)
- **Clone hash:** `f0edc3d9b2381195`

```c

void FUN_7101e62bd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte ****ppppbVar13;
  long ****in_x4;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined **local_1c0;
  ulong local_1b8;
  byte ***local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined1 *local_198;
// ... (314 more lines)
```

## 32. `FUN_71032517b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032517b0`  (offset `0x32517b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032517b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12956 bytes / 796 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** data_name%d;stream:/sound/bgm/bgm_%s.nus3bank;stream:/sound/bgm/bgm_%s.nus3audio;start_point%d;info%d
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7103251730;FUN_7103254a50;FUN_7103254c50;FUN_7103254d10;FUN_7103254f10;FUN_7103255110;FUN_7103255260;FUN_7103255500;FUN_71032557a0;FUN_710326a3e0;FUN_710353da30;FUN_7103540a00;FUN_7103540b10;FUN_7103541e10;...
- **Files:** [decomp](../decompiled/FUN_71032517b0__71032517b0.c)  [cfg](../decompiled/FUN_71032517b0__71032517b0.mmd)
- **Clone hash:** `6b42765d7afd2f15`

```c

/* WARNING: Removing unreachable block (ram,0x00710325366c) */
/* WARNING: Removing unreachable block (ram,0x007103253684) */
/* WARNING: Removing unreachable block (ram,0x0071032536a8) */
/* WARNING: Removing unreachable block (ram,0x0071032536b4) */
/* WARNING: Removing unreachable block (ram,0x0071032536c0) */
/* WARNING: Removing unreachable block (ram,0x007103253704) */
/* WARNING: Removing unreachable block (ram,0x00710325370c) */
/* WARNING: Removing unreachable block (ram,0x007103253714) */
/* WARNING: Removing unreachable block (ram,0x0071032537a8) */
/* WARNING: Removing unreachable block (ram,0x0071032537bc) */
/* WARNING: Removing unreachable block (ram,0x0071032537c0) */
/* WARNING: Removing unreachable block (ram,0x0071032537c8) */
/* WARNING: Removing unreachable block (ram,0x0071032537d0) */
/* WARNING: Removing unreachable block (ram,0x0071032537d4) */
/* WARNING: Removing unreachable block (ram,0x0071032537e0) */
/* WARNING: Removing unreachable block (ram,0x0071032537e4) */

void FUN_71032517b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ulong *puVar2;
  int iVar3;
  long **pplVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte bVar7;
  string *psVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  string *this;
  byte *pbVar12;
  size_t sVar13;
  long ****pppplVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
// ... (2764 more lines)
```

## 33. `FUN_71019401b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019401b0`  (offset `0x19401b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019401b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10064 bytes / 382 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** %s_%02d.bntx;chara/chara_4/chara_4_;school;set_txt_schoolstyle;subwindow_narrow;subwindow_wide;item_up_%d;set_txt_up_item_%02d;item_down_%d;set_txt_down_item_%02d;caption_up;caption_largeup;caption_down;caption_largedown;subwindow_unlearn;set_txt_unlearn;cam_school_unlearn;selector_keyhelp;btn_keyhelp_skill;set_txt_icon;cam_school_detail_guide;set_txt_help;cam_school_detail;header_band;selector_slot;set_parts_cursor;set_parts_slot_%02d;set_parts_mastery_%02d;set_fxui_confetti;selector_menu;set_parts_menu_%02d;set_parts_talk;...
- **Callers:** FUN_71019429a0
- **Callees:** FUN_71003a4ca0;FUN_7101af86a0;FUN_7101d88b10;FUN_7101d8f690;FUN_7101deddf0;FUN_7101df3910;FUN_7101df74b0;FUN_7101dfb100;FUN_7101e04640;FUN_7101e5e730;FUN_7101e5e830;FUN_7101e94040;FUN_7101e941f0;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;...
- **Files:** [decomp](../decompiled/FUN_71019401b0__71019401b0.c)  [cfg](../decompiled/FUN_71019401b0__71019401b0.mmd)
- **Clone hash:** `b1aa06e0aa020b5d`

```c

void FUN_71019401b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  long ***ppplVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined *puVar18;
  long ********pppppppplVar19;
  long **pplVar20;
  long *******ppppppplVar21;
  long *plVar22;
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
// ... (1832 more lines)
```

## 34. `FUN_71020c9380`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** ban
- **Strings touched:** FighterUtil;set_damage_fly_angle;get_ground_correct_kind_air_trans;get_stick_x_rate;TRANS_A_JUMP_AERIAL;get_stick_y_rate;is_hammer_status;is_hammer_motion;tread_remove_constraint;get_air_ground_touch_info;set_cloud_through_check;check_cloud_through_out;set_ice_effect;set_ice_exit_effect;set_water_dive_effect;calc_water_surface_pos;get_water_area_info;get_team_color;is_miienemy_fighter_kind;adjust_butterflynet;end_butterflynet;gauge_parts_on;adjust_bitten_wario;get_bezier_pos;get_shield_type_of_guard;init_big_small;exec_big_small;exit_big_small;set_hit_data;reset_hit_data;get_effect_team_color;get_handi;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020c9380__71020c9380.c)  [cfg](../decompiled/FUN_71020c9380__71020c9380.mmd)
- **Clone hash:** `9a52585cec2ad2b0`

```c

void FUN_71020c9380(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterUtil",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_damage_fly_angle",(long ****)FUN_71020bcdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_ground_correct_kind_air_trans",(long ****)FUN_71020bd260,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_x_rate",(long ****)FUN_71020bd400,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_y_rate",(long ****)FUN_71020bd6a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_status",(long ****)FUN_71020bd940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hammer_motion",(long ****)FUN_71020bda00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"tread_remove_constraint",(long ****)FUN_71020bdb00,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_air_ground_touch_info",(long ****)FUN_71020bdca0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_cloud_through_check",(long ****)FUN_71020be0d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"check_cloud_through_out",(long ****)FUN_71020be220,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_effect",(long ****)FUN_71020be310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ice_exit_effect",(long ****)FUN_71020be520,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_water_dive_effect",(long ****)FUN_71020be700,ppppbVar1,in_x4
// ... (185 more lines)
```

## 35. `FUN_7102192760`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** BAN
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

## 36. `FUN_710194b720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710194b720`  (offset `0x194b720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710194b720(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 424 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** %s_%02d.bntx;header_band;set_txt_title;cam_shop%d_shop_name;selector_menu;set_parts_menu_%02d;set_parts_talk;set_parts_sp;selector_return;set_btn_return;color_shop;selector_slot;set_parts_slot_%02d;set_parts_supportitem;set_parts_energy;set_parts_skillpiece;set_parts_excl;set_rep_spirit;set_rep_shadow;set_txt_category;set_txt_price_sp;chara/chara_4/chara_4_;set_parts_discount;set_txt_value;set_parts_new;set_parts_atr_bg;set_parts_class;shop_campaign;card_null;effect_rarity_hide;head_all_hide;mode_empty_03;...
- **Callers:** FUN_710194d810
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_7101989a30;FUN_7101af86a0;FUN_7101e6c410;FUN_7101e6fd70;FUN_7101e941f0;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e99cb0;FUN_7101e9a160;FUN_7103238e70;FUN_7103239920;FUN_7103239d20;...
- **Files:** [decomp](../decompiled/FUN_710194b720__710194b720.c)  [cfg](../decompiled/FUN_710194b720__710194b720.mmd)
- **Clone hash:** `42d093a7ed55fbae`

```c

void FUN_710194b720(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  byte ***pppbVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  byte **ppbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ushort uVar18;
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
// ... (1584 more lines)
```

## 37. `FUN_71017dfe10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017dfe10`  (offset `0x17dfe10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017dfe10(byte * param_1, uint param_2, undefined8 param_3, ulong param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2536 bytes / 150 bb / 9 incoming refs
- **Match values:** ban
- **Strings touched:** vc_mii_m01_boy_low;b_normalfighter_m/c00;b_normalfighter_m;b_normalgunner_m/c00;b_normalswordman_m/c00;b_normalgunner_m;b_normalswordman_m;miihat/%s/model/body/c%02d/model.numdlb;miihat/%s/motion/body/c00/motion_list.bin;fighter/%s/model/%s/model.numdlb;fighter/%s/motion/%s/c00/motion_list.bin;vc_mii_m01_boy_mid;vc_mii_m01_boy_high;vc_mii_m02_young_low;vc_mii_m02_young_mid;vc_mii_m02_young_high;vc_mii_m03_passionate_low;vc_mii_m03_passionate_mid;vc_mii_m03_passionate_high;vc_mii_m04_rough_low;vc_mii_m04_rough_mid;vc_mii_m04_rough_high;vc_mii_m05_cool_low;vc_mii_m05_cool_mid;vc_mii_m05_cool_high;vc_mii_m06_warrior_low;vc_mii_m06_warrior_mid;vc_mii_m06_warrior_high;vc_mii_f01_girl_low;vc_mii_f01_girl_mid;vc_mii_f01_girl_high;vc_mii_f02_young_low;...
- **Callers:** FUN_710060b6b0;FUN_71017e8890;FUN_71017e99c0;FUN_71023fee20;FUN_710344fc70
- **Callees:** FUN_710147f330;FUN_7103282890;FUN_7103282b70;FUN_71032830b0;FUN_71032836d0;FUN_71032870b0;FUN_7103287980
- **Files:** [decomp](../decompiled/FUN_71017dfe10__71017dfe10.c)  [cfg](../decompiled/FUN_71017dfe10__71017dfe10.mmd)
- **Clone hash:** `9fb75ba36a6c57cf`

```c

void FUN_71017dfe10(byte *param_1,uint param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint local_260 [2];
  undefined1 auStack_258 [248];
  undefined2 local_160;
  uint local_158 [2];
  undefined1 auStack_150 [248];
  undefined2 local_58;
  
  iVar8 = (int)param_3;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  *param_1 = 0;
  if (7 < iVar8 - 0x13U) {
    return;
  }
// ... (456 more lines)
```

## 38. `FUN_7101e691f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e691f0`  (offset `0x1e691f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e691f0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 4260 bytes / 185 bb / 1 incoming refs
- **Match values:** ban
- **Strings touched:** header_band;set_txt_title;cam_searchfield%d_field_name;selector_menu;set_parts_menu_%02d;set_parts_talk;selector_return;set_btn_return;color_search;gauge_in;gauge_out;gauge_loop;gauge_progress;set_txt_resttime;mode_empty_03;set_enemy_pos;/dev/urandom;set_parts_slot_%02d;set_rep_spirit;set_rep_spirit_shadow;set_parts_effect;move_%02d;anime_tresure_light;bg_inner_scene_%02d;bg_move;overlay_in_%02d;overlay_out_%02d;overlay_out_complete
- **Callers:** FUN_7101947560
- **Callees:** FUN_71003a4ca0;FUN_7101d71a30;FUN_7101e945c0;FUN_7101e95110;FUN_7101e95dd0;FUN_7101e965f0;FUN_7101e97110;FUN_71032a7800;FUN_71032cbf30;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778430;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101e691f0__7101e691f0.c)  [cfg](../decompiled/FUN_7101e691f0__7101e691f0.mmd)
- **Clone hash:** `6425bfda100cc003`

```c

void FUN_7101e691f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  long ***ppplVar6;
  byte ***pppbVar7;
  undefined **ppuVar8;
  uint uVar9;
  byte **ppbVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long **pplVar13;
  ushort uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined *puVar15;
  char *pcVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  char *pcVar19;
  long ****in_x4;
  long ****pppplVar20;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar21;
  ulong uVar22;
  undefined ***pppuVar23;
  undefined8 *puVar24;
  long ****pppplVar25;
// ... (817 more lines)
```

## 39. `FUN_71026b2db0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026b2db0`  (offset `0x26b2db0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71026b2db0(ulong param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1220 bytes / 72 bb / 3 incoming refs
- **Match values:** ban
- **Strings touched:** dys_common_set_tstance;dys_common_set;_wait;_hear;_clap;_komari;_musu;_niko;_walk;_sleep;_pose_wait;_Monban_wait
- **Callers:** FUN_71026b04a0;FUN_71026b3e10
- **Callees:** FUN_71025eae10;FUN_71025ee6c0;FUN_71026533a0;<EXTERNAL>::snprintf
- **Files:** [decomp](../decompiled/FUN_71026b2db0__71026b2db0.c)  [cfg](../decompiled/FUN_71026b2db0__71026b2db0.mmd)
- **Clone hash:** `2479d9eb078d7a08`

```c

ulong FUN_71026b2db0(ulong param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  byte local_50 [32];
  
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = param_1;
  if ((lVar6 != 0) && ((*(long *)(lVar6 + 0xd8) == 0 || (*(long *)(lVar6 + 0x68) != 0x15e6230a1c))))
  {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x310);
    plVar2 = *(long **)(lVar5 + 0x100);
    plVar4 = *(long **)(lVar5 + 0x108);
    if (plVar2 != plVar4) {
      do {
        if (((int)plVar2[1] == 0) && (lVar5 = *plVar2, *(long *)(lVar5 + 8) == 0xe8c278baf)) {
          if (lVar5 != 0) {
            if (*(int *)(param_1 + 0xe8) - 6U < 2) {
              if (*(byte *)(param_1 + 0x179) < 2) goto LAB_71026b2e94;
LAB_71026b2ef0:
              uVar3 = FUN_71025eae10(lVar6 + 0x60,lVar5,(long ****)"dys_common_set_tstance",param_4,
                                     param_5,param_6,param_7,param_8);
LAB_71026b2f04:
              lVar6 = *(long *)(param_1 + 0x10);
            }
            else {
              if (1 < *(int *)(param_1 + 0xe8) - 0x16U) goto LAB_71026b2ef0;
LAB_71026b2e94:
              plVar2 = *(long **)(lVar6 + 0xd8);
              *(undefined8 *)(lVar6 + 0xd0) = 0;
              *(undefined8 *)(lVar6 + 0xd8) = 0;
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 8))();
// ... (494 more lines)
```

