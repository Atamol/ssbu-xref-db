# stage (funcs=226, hits=991)

Top 50 functions by hit count

## 1. `FUN_7101b2a1f0`  (hits=58)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b2a1f0`  (offset `0x1b2a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b2a1f0(void)`
- **Size / BBs / Incoming:** 30364 bytes / 1105 bb / 1 incoming refs
- **Match values:** STAGE;stage
- **Strings touched:** preview_1_00;preview_2_00;preview_3_00;arrows;header_tips;btn_back;set_parts_txt_head_00;set_txt_mode;set_txt_scene;mnu_header_arrow;header_stage;set_hand_%02d;set_preview_st_0%d;set_txt_num_medal;mel_stage_select_art_n;un_decide;off_atteintion;anim_stage_select;set_parts_btn_stage;view_stage;icon_normal;color_able_shortcut;unable_shortcut;blink_on;set_parts_btn_music;view_music;icon_music;player_color_%dp;view_rep_stage;set_rep_stage;set_parts_n_stage_%03d;view_random;...
- **Callers:** FUN_7101b3b1d0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_7101764000;FUN_7101b260a0;FUN_7101b2a000;FUN_7101b31890;FUN_7101b31a10;FUN_7101b323a0;FUN_7101b32b00;FUN_7101b37740;FUN_7101b38160;FUN_7101b38ac0;...
- **Files:** [cfg](../decompiled/FUN_7101b2a1f0__7101b2a1f0.mmd)


## 2. `FUN_71020fbb90`  (hits=57)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** STAGE;Stage
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

## 3. `FUN_71023b9770`  (hits=35)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023b9770`  (offset `0x23b9770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023b9770(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 18880 bytes / 797 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** %s.bntx;edit_stage_submenu_material_00;edit_stage_submenu_material_01;edit_stage_submenu_material_02;edit_stage_submenu_material_03;edit_stage_submenu_material_04;edit_stage_submenu_material_05;edit_stage_submenu_material_06;edit_stage_submenu_material_07;edit_stage_submenu_material_08;edit_stage_submenu_material_09;edit_stage_submenu_material_10;edit_stage_submenu_material_11;edit_stage_submenu_material_12;edit_stage_submenu_material_13;edit_stage_submenu_material_14;edit_stage_draw_free;mode_empty_03;edit_stage_draw_oval;edit_stage_draw_quadrangle;edit_stage_draw_change;edit_stage_rail_free;gauge_parts_on;edit_stage_rail_oval;edit_stage_rail_quadrangle;edit_stage_accesory_cannon;edit_stage_accesory_spring;edit_stage_accesory_warp;edit_stage_accesory_bumper;edit_stage_accesory_ladder;edit_stage_accesory_ignition;edit_stage_accesory_causingexplosion;...
- **Callees:** FUN_71000001c0;FUN_7100653490;FUN_710066e470;FUN_710138a3a0;FUN_710138b1c0;FUN_710138b2d0;FUN_7101764000;FUN_71017bd310;FUN_71017c81d0;FUN_7101989a30;FUN_7101ea5190;FUN_7101ea5260;FUN_7101ea7720;FUN_7101eaf980;FUN_7101eafcc0;FUN_7101eafd90;...
- **Files:** [decomp](../decompiled/FUN_71023b9770__71023b9770.c)  [cfg](../decompiled/FUN_71023b9770__71023b9770.mmd)
- **Clone hash:** `c774eb0bfcac67b1`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71023b9770(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,long *********param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 uVar10;
  undefined1 uVar11;
  long ********pppppppplVar12;
  bool bVar13;
  int iVar15;
  bool bVar14;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long *plVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
// ... (3586 more lines)
```

## 4. `FUN_71023cbde0`  (hits=35)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023cbde0`  (offset `0x23cbde0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023cbde0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1240 bytes / 47 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** edit_stage_submenu_material_00;edit_stage_submenu_material_01;edit_stage_submenu_material_02;edit_stage_submenu_material_03;edit_stage_submenu_material_04;edit_stage_submenu_material_05;edit_stage_submenu_material_06;edit_stage_submenu_material_07;edit_stage_submenu_material_08;edit_stage_submenu_material_09;edit_stage_submenu_material_10;edit_stage_submenu_material_11;edit_stage_submenu_material_12;edit_stage_submenu_material_13;edit_stage_submenu_material_14;edit_stage_draw_free;mode_empty_03;edit_stage_draw_oval;edit_stage_draw_quadrangle;edit_stage_draw_change;edit_stage_rail_free;gauge_parts_on;edit_stage_rail_oval;edit_stage_rail_quadrangle;edit_stage_accesory_cannon;edit_stage_accesory_spring;edit_stage_accesory_warp;edit_stage_accesory_bumper;edit_stage_accesory_ladder;edit_stage_accesory_ignition;edit_stage_accesory_causingexplosion;edit_stage_accesory_wind;...
- **Callers:** FUN_71023945f0;FUN_71023cfd10
- **Callees:** FUN_71025e9d50;FUN_710323b9e0;FUN_710323eba0;FUN_7103241000;FUN_71032cad20;FUN_710392eb40;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_71023cbde0__71023cbde0.c)  [cfg](../decompiled/FUN_71023cbde0__71023cbde0.mmd)
- **Clone hash:** `d565392713493d19`

```c

void FUN_71023cbde0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar6;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long lVar7;
  long *plVar8;
  
  lVar3 = *(long *)(param_1 + 0x5d0);
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  if (lVar3 != 0) {
    FUN_71032cad20(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x5c8);
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  if (lVar3 != 0) {
    FUN_71032cad20(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5c0) = 0;
  if (lVar3 != 0) {
    FUN_71032cad20(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5b8) = 0;
  if (lVar3 != 0) {
// ... (214 more lines)
```

## 5. `FUN_710196dfc0`  (hits=24)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710196dfc0`  (offset `0x196dfc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710196dfc0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9228 bytes / 317 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** edit_stage_wallpaper_%02d;%s.bntx;set_btn_02;set_txt_bgm_scr_select;set_txt_bgm_scr_off;is_error_input_device_kind;show_com_frame_actor;set_space;set_bg;get_space;get_bg;select_bgm_button;NUM_BG;initialize;set_btn_wallpaper_%02d;selector_0;set_btn_r;set_btn_l;selector_1
- **Callees:** FUN_71003a4ca0;FUN_710196dd10;FUN_710196dde0;FUN_7101eacc60;FUN_7101eb9cd0;FUN_7101ebb640;FUN_7103239920;FUN_7103239d20;FUN_710323b9e0;FUN_710323beb0;FUN_710323c4e0;FUN_710323cb80;FUN_71032410c0;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;...
- **Files:** [decomp](../decompiled/FUN_710196dfc0__710196dfc0.c)  [cfg](../decompiled/FUN_710196dfc0__710196dfc0.mmd)
- **Clone hash:** `0b68aed96893968d`

```c

void FUN_710196dfc0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long ********pppppppplVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *****ppppplVar11;
  long lVar12;
  long *******ppppppplVar13;
  long ***ppplVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
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
// ... (1712 more lines)
```

## 6. `FUN_7101ec80b0`  (hits=17)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ec80b0`  (offset `0x1ec80b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ec80b0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7908 bytes / 470 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** selector_main_tool;edit_stage_submenu_material_00;edit_stage_submenu_material_01;mnu_stgcreate_edit_material_%02d;edit_stage_draw_free;mode_empty_03;edit_stage_draw_oval;edit_stage_draw_quadrangle;edit_stage_draw_change;edit_stage_rail_free;gauge_parts_on;edit_stage_rail_oval;edit_stage_rail_quadrangle;edit_stage_accesory_cannon;edit_stage_accesory_spring;mnu_stgcreate_edit_gmck_%02d
- **Callers:** FUN_7101eafd90
- **Callees:** FUN_71003a4ca0;FUN_71019c1c50;FUN_7101ec36d0;FUN_7101ec4640;FUN_7101ec9fa0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101ec80b0__7101ec80b0.c)  [cfg](../decompiled/FUN_7101ec80b0__7101ec80b0.mmd)
- **Clone hash:** `66e508dbc8df036f`

```c

/* WARNING: Removing unreachable block (ram,0x007101ec8784) */
/* WARNING: Removing unreachable block (ram,0x007101ec855c) */
/* WARNING: Removing unreachable block (ram,0x007101ec8344) */
/* WARNING: Removing unreachable block (ram,0x007101ec844c) */
/* WARNING: Removing unreachable block (ram,0x007101ec866c) */
/* WARNING: Removing unreachable block (ram,0x007101ec88a4) */

void FUN_7101ec80b0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long ****pppplVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  undefined *puVar16;
  ulong uVar17;
  uint *puVar18;
  long *plVar19;
  char cVar20;
  long *plVar21;
  uint uVar22;
// ... (1517 more lines)
```

## 7. `FUN_7101f45620`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** Stage;STAGE;stage
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

## 8. `FUN_710042a680`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710042a680`  (offset `0x42a680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710042a680(void)`
- **Size / BBs / Incoming:** 412 bytes / 1 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** light00;light02;light01;light03;chara_morning;chara_evening;chara_daytime;chara_night;stage_morning;stage_evening;stage_daytime;stage_night;reflection_cubemap_morning;reflection_cubemap_evening;reflection_cubemap_daytime;reflection_cubemap_night
- **Callees:** FUN_71000001c0;FUN_71026af880
- **Files:** [decomp](../decompiled/FUN_710042a680__710042a680.c)  [cfg](../decompiled/FUN_710042a680__710042a680.mmd)
- **Clone hash:** `1f621bf5d7b9acc0`

```c

void FUN_710042a680(void)

{
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  local_80 = DAT_71050cda30;
  puStack_78 = PTR_s_light00_71050cda38;
  local_60 = DAT_71050cda50;
  puStack_58 = PTR_s_light02_71050cda58;
  local_70 = DAT_71050cda40;
  puStack_68 = PTR_s_light01_71050cda48;
  local_40 = DAT_71050cda70;
  puStack_38 = PTR_s_light03_71050cda78;
  local_50 = DAT_71050cda60;
  puStack_48 = PTR_s_light03_71050cda68;
  FUN_71026af880(&DAT_710532aca0,&local_80,(long ****)0x5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71000001c0();
  local_80 = DAT_71050cda80;
  puStack_78 = PTR_s_chara_morning_71050cda88;
  local_60 = DAT_71050cdaa0;
  puStack_58 = PTR_s_chara_evening_71050cdaa8;
  local_70 = DAT_71050cda90;
  puStack_68 = PTR_s_chara_daytime_71050cda98;
  local_40 = DAT_71050cdac0;
  puStack_38 = PTR_s_chara_night_71050cdac8;
// ... (31 more lines)
```

## 9. `FUN_71035e2f00`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035e2f00`  (offset `0x35e2f00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035e2f00(undefined1 * param_1, char * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 11468 bytes / 814 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** shadow;lightset;plate_side;caster;number;action;this_light;color;select_item;radius;offset;local_offset;opaque_sort;order;draw_range;dys_yoga03_l_03_set;drawing_order;compress_type;stage_visible_type;mirror;instancing;aurora_vision;stage_transition_type;stage_transition_visible;bounding_scale;stage_expansion_type;stage_sh_priority;is_multi_sh;poison;stencil_type;stage_ink_type;force_opaque;...
- **Callers:** FUN_71035e0e50;FUN_71035ecf10
- **Callees:** FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::atoi;<EXTERNAL>::atof
- **Files:** [decomp](../decompiled/FUN_71035e2f00__71035e2f00.c)  [cfg](../decompiled/FUN_71035e2f00__71035e2f00.mmd)
- **Clone hash:** `89d6038915fa509b`

```c

void FUN_71035e2f00(undefined1 *param_1,char *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined8 *puVar25;
  ulong uVar26;
  char *pcVar27;
  long ****pppplVar28;
  undefined1 uVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  ulong uVar35;
// ... (2169 more lines)
```

## 10. `FUN_7102219310`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** set_life;set_life_as_default;set_life_with_pocket_count;set_life_type;regist_life_status_ignore_lost;action;request_remove;is_same_create_frame;search_target_returns_work;set_hit_as_sphere;set_hit_as_capsule;set_hit_from_param;reset_hit;set_search;set_area;enable_roll_up_area;create_item;create_item_simple;create_item_with_angle;create_item_with_angle_from_param;create_item_by_lot;warp_to_target;warp_to_target_with_safe_pos;begin_scale_animation_simple;begin_scale_animation;begin_scale_animation_with_param;set_countdown;set_countdown2;set_countdown3;set_bomb_countdown;is_dead_area;enable_area;...
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102219310__7102219310.c)  [cfg](../decompiled/FUN_7102219310__7102219310.mmd)
- **Clone hash:** `93638b8ec7e90b21`

```c

void FUN_7102219310(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)&DAT_71042c3080,0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_38,(uint *)"set_life",(long ****)FUN_71021f5e90,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_life_as_default",(long ****)FUN_71021f5fa0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_life_with_pocket_count",(long ****)FUN_71021f6050,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_life_type",(long ****)FUN_71021f61d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"regist_life_status_ignore_lost",(long ****)FUN_71021f6280,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"action",(long ****)FUN_71021f6330,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"request_remove",(long ****)FUN_71021f64c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"is_same_create_frame",(long ****)FUN_71021f6540,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"search_target_returns_work",(long ****)FUN_71021f6590,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_hit_as_sphere",(long ****)FUN_71021f66a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_hit_as_capsule",(long ****)FUN_71021f6b60,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"set_hit_from_param",(long ****)FUN_71021f7230,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (836 more lines)
```

## 11. `FUN_710226f500`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** backshield;is_enable_backshield;is_visible_backshield;is_force_visible_backshield;set_reflector;beetle;is_enable_capture_beetle;set_grab;boomerang;send_event_catch;set_assist_team_no;is_catch_area_hit_check;bossgalaga;is_enable_capture_bossgalaga;chicken;is_behind_fighter;is_front_fighter;clubshot;check_roll_up_area;curryshot;init_log_attack_info;is_preview_mode;diddypeanuts;DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL;dragoonset;calc_dragoonsight2;get_stage_dragoon_camera_rectangle;dragoonsight;set_dragoonsight_effect;get_rotation_with_calc_camera_direction;calc_dragoonsight;healball;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7102219310;FUN_7102235da0;FUN_7102239aa0;FUN_710223aa90;FUN_710223b0b0;FUN_710223c0c0;FUN_710223c740;FUN_710223d040;FUN_710223d940;FUN_710223ef10;FUN_710223ff20;FUN_7102242610;FUN_7102243740;FUN_71022490e0;FUN_710224bda0;FUN_71022505d0;...
- **Files:** [decomp](../decompiled/FUN_710226f500__710226f500.c)  [cfg](../decompiled/FUN_710226f500__710226f500.mmd)
- **Clone hash:** `355e9f5d7a84e54e`

```c

void FUN_710226f500(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  code *pcVar4;
  byte ****ppppbVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_7102219310(0);
    FUN_7102235da0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
// ... (2227 more lines)
```

## 12. `FUN_710225b990`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** STAGE
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

## 13. `FUN_7101f89310`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** STAGE
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

## 14. `FUN_71026b4fc0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026b4fc0`  (offset `0x26b4fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026b4fc0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2212 bytes / 75 bb / 11 incoming refs
- **Match values:** stage
- **Callers:** FUN_71026b3e10
- **Callees:** FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71026b4fc0__71026b4fc0.c)  [cfg](../decompiled/FUN_71026b4fc0__71026b4fc0.mmd)
- **Clone hash:** `cd3bd92407644317`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026b4fc0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  void *__dest;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long lVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long ***ppplVar15;
  uint *puVar16;
  long lVar17;
  void *__src;
  size_t __n;
  long lVar18;
  long ***ppplStack_60;
  undefined4 uStack_54;
  
  pppplVar9 = &ppplStack_60;
  pppplVar6 = &ppplStack_60;
  pppplVar7 = &ppplStack_60;
  pppplVar8 = &ppplStack_60;
  pppplVar10 = &ppplStack_60;
  pppplVar11 = &ppplStack_60;
  lVar17 = (long)*(char *)(param_1 + 0x30) * 5 + (long)*(char *)(param_1 + 0x31);
  if (-1 < (int)lVar17) {
    lVar12 = *(long *)(param_1 + 0x10);
// ... (460 more lines)
```

## 15. `FUN_71026abc90`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026abc90`  (offset `0x26abc90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026abc90(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, undefined8 param_6, undefined * * param_7, undefined1[16] * param_8, undefined1[16] * param_9, undefined1[16] * param_10, long * * * * * * param_11, long * * * param_12)`
- **Size / BBs / Incoming:** 5440 bytes / 297 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** stc_sky45_set;stc_bg_windowlight03_set;ItemPoint_O_OBJ_O_HIR
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7101764000;FUN_7102405040;FUN_71025d9250;FUN_71025e9d50;FUN_71026aea50;FUN_71026aec40;FUN_71026aef60;FUN_71026afeb0;FUN_71026b0370;FUN_71026b3e10;FUN_71026b5be0;FUN_71026b5d70;FUN_71026b6120;FUN_710313e6a0;...
- **Files:** [decomp](../decompiled/FUN_71026abc90__71026abc90.c)  [cfg](../decompiled/FUN_71026abc90__71026abc90.mmd)
- **Clone hash:** `785ba61a05147a44`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026abc90(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,undefined8 param_6,undefined **param_7,
                   undefined1 (*param_8) [16],undefined1 (*param_9) [16],undefined1 (*param_10) [16]
                   ,long ******param_11,long ***param_12)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
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
// ... (1019 more lines)
```

## 16. `FUN_7101fa11c0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** stage
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

## 17. `FUN_7101b4afe0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b4afe0`  (offset `0x1b4afe0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b4afe0(long param_1, undefined4 param_2)`
- **Size / BBs / Incoming:** 368 bytes / 26 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** mel_info_stage_poke_stadium_defeated
- **Callers:** FUN_7101416170
- **Callees:** FUN_710377a280;FUN_710377aee0
- **Files:** [decomp](../decompiled/FUN_7101b4afe0__7101b4afe0.c)  [cfg](../decompiled/FUN_7101b4afe0__7101b4afe0.mmd)
- **Clone hash:** `00df72006929347b`

```c

void FUN_7101b4afe0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  switch(param_2) {
  case 0:
    lVar1 = param_1 + 0x1d8;
    break;
  case 1:
    lVar1 = param_1 + 0x1e8;
    break;
  case 2:
    lVar1 = param_1 + 0x1f8;
    break;
  case 3:
    lVar1 = param_1 + 0x208;
    break;
  case 4:
    lVar1 = param_1 + 0x218;
    break;
  case 5:
    lVar1 = param_1 + 0x228;
    break;
  case 6:
    lVar1 = param_1 + 0x278;
    break;
  case 7:
    lVar1 = param_1 + 0x238;
    break;
  case 8:
    lVar1 = param_1 + 0x288;
    break;
  case 9:
    lVar1 = param_1 + 0x298;
    break;
  case 10:
    lVar1 = param_1 + 600;
    break;
// ... (28 more lines)
```

## 18. `FUN_710134f5c0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710134f5c0`  (offset `0x134f5c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710134f5c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22424 bytes / 1006 bb / 6 incoming refs
- **Match values:** Stage
- **Strings touched:** ExecutableObjectManager::update_pause_by_category;MeleeManager::process;FighterManager::process_begin;CollisionLogManager::process_begin;CameraManager::update_frame;StageManager::pre_process;StageSwapManager::update;ItemManager::process_begin;EnemyManager::process;BossManager::process;GroundCollision::pre_process;FighterAIManager::process_begin;BattleObjectManager::process_begin;BattleObjectManager::process_ground;dys_yoga03_l_03_set;JostleManager::process_begin;CatchManager::process_begin;FighterCutInManager::process_begin;GroundCollision::process;FighterManager::process_begin_post;OperatorObjectManager::apply_visitor;ShamBattleManager::process;SpiritsBattleManager::process_melee;BattleObjectManager::process_map_collection;StageManager::process_fix_position;AreaManager::process_fix_position;BattleObjectManager::process_fix_position;ItemManager::process_fix_position_after;FighterManager::process_pre_collision;BattleObjectManager::process_pre_collision;CollisionLogManager::collide;BattleObjectManager::process_collision;...
- **Callers:** FUN_71014b3850;FUN_7101524770
- **Callees:** FUN_710137a600;FUN_710392e290;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_710134f5c0__710134f5c0.c)  [cfg](../decompiled/FUN_710134f5c0__710134f5c0.mmd)
- **Clone hash:** `c5d6928382f5097e`

```c

void FUN_710134f5c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long ***local_78;
  long *local_70;
  undefined4 local_64;
  
  plVar1 = DAT_71052c33d8;
  lVar7 = DAT_71052b8800;
  lVar4 = DAT_71052b8620;
  lVar13 = DAT_71052b85f8;
  lVar14 = lib::Singleton<app::BattleObjectManager>::instance_;
  plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000070;
      param_3 = &local_78;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x70,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_710134f66c;
    }
    plVar8 = (long *)0x0;
// ... (4133 more lines)
```

## 19. `FUN_7102ab2890`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ab2890`  (offset `0x2ab2890`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ab2890(ulong param_1, undefined8 param_2, long * * * * param_3, char * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 11428 bytes / 562 bb / 1 incoming refs
- **Match values:** Stage;stage
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

## 20. `FUN_7101740140`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101740140`  (offset `0x1740140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 13708 bytes / 606 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** ev_match_data;match_id_lo;match_id_hi;Ver. %d.%d.%d;rom_version;has_battle_log;is_battle_team;is_suddendeath;rule_spirits;rule_charge_final;rule_team_attach;rule_handi_boost;rule_stage_gimmick;rule_can_pause;rule_visible_score;rule_visible_damage;stage_1_type;stage_1_form;stage_2_type;stage_2_form;event_type;tournament_id;player_%d_;attacker;supporter1;supporter2;supporter3;node_num;ev_match_player;rating;fighter_id;fighter_random;...
- **Callers:** FUN_7101515630;FUN_7101518820
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_710066cd40;FUN_71006dae20;FUN_71015922f0;FUN_71016f6340;FUN_710172a1e0;FUN_71017436d0;FUN_7101743910;FUN_7101743bb0;FUN_7101764000;FUN_710179eec0;FUN_71017ac030;FUN_71017ac100;FUN_71032631a0;...
- **Files:** [decomp](../decompiled/FUN_7101740140__7101740140.c)  [cfg](../decompiled/FUN_7101740140__7101740140.mmd)
- **Clone hash:** `81d2d7b98a09c684`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101740140(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  Any64BitId *pAVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  Any64BitId AVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  Any64BitId *pAVar12;
  long ***ppplVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined **ppuVar25;
  long ****pppplVar26;
  byte ****ppppbVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
// ... (1930 more lines)
```

## 21. `FUN_7101c2abb0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c2abb0`  (offset `0x1c2abb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c2abb0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3268 bytes / 127 bb / 1 incoming refs
- **Match values:** STAGE;stage
- **Strings touched:** set_preview_st_00;view_size_l;view_content_random_stage;plate_side;select;set_part_stage_%03d;set_rep_stage;set_stage_preview_from_panel;get_global_parameter;set_edit_parameter;out_com_frame;is_can_edit;STAGE_PANEL_MAX;STAGE_PANEL_LIST_NUM;STAGE_PANEL_ALL_ON_OFF;create_data
- **Callers:** FUN_710186fcf0
- **Callees:** FUN_71000001c0;FUN_7101684440;FUN_7101764000;FUN_7101c2a4b0;FUN_7103238c50;FUN_7103238d60;FUN_710323c4e0;FUN_710323eba0;FUN_710323f4a0;FUN_71032b1e40;FUN_71032b23e0;FUN_71032b2de0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_7103377130;...
- **Files:** [decomp](../decompiled/FUN_7101c2abb0__7101c2abb0.c)  [cfg](../decompiled/FUN_7101c2abb0__7101c2abb0.mmd)
- **Clone hash:** `62b97b502dc99509`

```c

void FUN_7101c2abb0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long ***ppplVar12;
  long *plVar13;
  undefined **ppuVar14;
  long *********ppppppppplVar15;
  long ****pppplVar16;
  char *pcVar17;
  long ****pppplVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
  byte ****ppppbVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  long **pplVar28;
  long ***local_d0;
  long *****local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long ***local_a0;
  ulong local_98;
// ... (518 more lines)
```

## 22. `FUN_71026b3e10`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026b3e10`  (offset `0x26b3e10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026b3e10(long param_1, char param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 4520 bytes / 196 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** dys_common_set_Totakeke_concert
- **Callers:** FUN_71026abc90
- **Callees:** FUN_7100492c30;FUN_71025ee6c0;FUN_71026b1e50;FUN_71026b2c20;FUN_71026b2db0;FUN_71026b4fc0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_71026b3e10__71026b3e10.c)  [cfg](../decompiled/FUN_71026b3e10__71026b3e10.mmd)
- **Clone hash:** `a8272af14ff557c2`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026b3e10(long param_1,char param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  int *piVar16;
  undefined8 *puVar17;
  uint uVar18;
  void *pvVar19;
  long lVar20;
  long ****pppplVar21;
  long lVar22;
  ulong uVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
// ... (944 more lines)
```

## 23. `FUN_7102d39a30`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102d39a30`  (offset `0x2d39a30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102d39a30(long * param_1, ulong param_2, long * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, uint * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10496 bytes / 713 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** reflection_cubemap_01Plains;reflection_cubemap_02BirchForest;reflection_cubemap_03Savanna;reflection_cubemap_04Taiga;reflection_cubemap_05SnowyTundra;reflection_cubemap_06StoneShore;stage_01Plains;stage_02BirchForest;stage_03Savanna;stage_04Taiga;stage_05SnowyTundra;stage_06StoneShore;chara_01Plains;chara_02BirchForest;chara_03Savanna;chara_04Taiga;plate_side;chara_05SnowyTundra;chara_06StoneShore
- **Callers:** FUN_7102d367b0
- **Callees:** FUN_71025e9d50;FUN_710261f440;FUN_710262b8c0;FUN_7102633800;FUN_7102633a10;FUN_7102633b90;FUN_7102d346a0;FUN_7102d34fa0;FUN_7102d35700;FUN_7102d36180;FUN_7102d36460;FUN_7102d3c330;FUN_7102d41dd0;FUN_7102d42de0;FUN_7102d44300;FUN_710392e290;...
- **Files:** [decomp](../decompiled/FUN_7102d39a30__7102d39a30.c)  [cfg](../decompiled/FUN_7102d39a30__7102d39a30.mmd)
- **Clone hash:** `aaa44461d70d4f76`

```c

void FUN_7102d39a30(long *param_1,ulong param_2,long ****param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],uint *param_7,
                   undefined8 param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long ***ppplVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  uint *__dest;
  long *plVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  void *extraout_x1_10;
  void *extraout_x1_11;
  undefined8 extraout_x1_12;
  void *extraout_x1_13;
  void *extraout_x1_14;
  void *extraout_x1_15;
  void *extraout_x1_16;
  void *extraout_x1_17;
  void *extraout_x1_18;
  void *extraout_x1_19;
  void *extraout_x1_20;
// ... (1754 more lines)
```

## 24. `FUN_7101c108f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c108f0`  (offset `0x1c108f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 652 bytes / 41 bb / 3 incoming refs
- **Match values:** stage
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

## 25. `FUN_7101c62870`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c62870`  (offset `0x1c62870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c62870(undefined8 * param_1, long * * * * * * * * * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 23588 bytes / 1102 bb / 1 incoming refs
- **Match values:** stage
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

## 26. `FUN_7101ba9a40`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ba9a40`  (offset `0x1ba9a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ba9a40(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3252 bytes / 176 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** set_txt_rule_00;set_txt_rule_01;set_txt_rule_02;in_00;in_01;in_02;out_00;out_01;out_02;on_00;on_01;on_02;off_00;off_01;off_02;time_00;time_01;time_02;icon_on_stagegimmic_00;icon_on_stagegimmic_01;icon_on_stagegimmic_02;icon_on_specialrule_00;icon_on_specialrule_01;icon_on_specialrule_02;icon_blink_stagegimmic_00;icon_blink_stagegimmic_01;icon_blink_stagegimmic_02;icon_blink_specialrule_00;icon_blink_specialrule_01;icon_blink_specialrule_02
- **Callers:** FUN_71013dfd20
- **Callees:** FUN_7101414b10;FUN_7101b42450;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101ba9a40__7101ba9a40.c)  [cfg](../decompiled/FUN_7101ba9a40__7101ba9a40.mmd)
- **Clone hash:** `4ba029e5658fe63e`

```c

void FUN_7101ba9a40(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *__s;
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long ***local_70;
  ulong local_68;
  undefined4 local_54;
  
  pppplVar9 = &local_70;
  pppplVar5 = &local_70;
  pppplVar6 = &local_70;
  pppplVar7 = &local_70;
  pppplVar8 = &local_70;
  *param_1 = &PTR_FUN_71050ab8d8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
// ... (632 more lines)
```

## 27. `FUN_71026a9a60`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026a9a60`  (offset `0x26a9a60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026a9a60(long * param_1, undefined8 param_2, undefined * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 3736 bytes / 246 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** floating_plate_set;stc_bg_set;main_ring_set;stc_sky45_set;stc_bg_windowlight03_set;dyr_mainstagelight_set
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_71025e5bd0;FUN_71025e9d50;FUN_7102653da0;FUN_71026aad50;FUN_71026ab040;FUN_71026ab650;FUN_71026aef60;FUN_71026b5be0;FUN_71026b5d70;FUN_71026b6120;FUN_7103540a00;FUN_7103540b10;FUN_710392e290;<EXTERNAL>::__cxa_guard_acquire;...
- **Files:** [decomp](../decompiled/FUN_71026a9a60__71026a9a60.c)  [cfg](../decompiled/FUN_71026a9a60__71026a9a60.mmd)
- **Clone hash:** `7c52a76bacbd4055`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026a9a60(long *param_1,undefined8 param_2,undefined **param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  unkuint9 Var5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long ****pppplVar11;
  long *********ppppppppplVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
// ... (791 more lines)
```

## 28. `FUN_710225b390`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b390`  (offset `0x225b390`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b390(long param_1)`
- **Size / BBs / Incoming:** 600 bytes / 4 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** kiiladarzmanager;entry_summon_fighter;set_assist_team_no;unentry_summon_fighter;load_summon_fighter_light;load_summon_fighter_dark;set_figher_information_parameter;is_loaded_fighter;start_fighter;is_activate_fighter;deactivate_fighter;get_fighter_battle_object_id;set_stage_status_default;set_stage_status_kiila_and_darz;set_stage_status_kiila;set_stage_status_darz;get_light_fighter_kind_num;get_light_fighter_kind;get_dark_fighter_kind_num;get_dark_fighter_kind;set_stage_floating_plates_visibility;stop_stage_sound;stop_ingame_se;set_visible_hud
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710225b390__710225b390.c)  [cfg](../decompiled/FUN_710225b390__710225b390.mmd)
- **Clone hash:** `5ab5f3b412275428`

```c

void FUN_710225b390(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"kiiladarzmanager",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"entry_summon_fighter",(long ****)FUN_7102259e20,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unentry_summon_fighter",(long ****)FUN_7102259ec0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"load_summon_fighter_light",(long ****)FUN_7102259f90,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"load_summon_fighter_dark",(long ****)FUN_710225a090,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_figher_information_parameter",(long ****)FUN_710225a190,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_loaded_fighter",(long ****)FUN_710225a4d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_fighter",(long ****)FUN_710225a5c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_activate_fighter",(long ****)FUN_710225a940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"deactivate_fighter",(long ****)FUN_710225aa20,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_battle_object_id",(long ****)FUN_710225aaf0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage_status_default",(long ****)FUN_710225ac40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage_status_kiila_and_darz",(long ****)FUN_710225ac80,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
// ... (26 more lines)
```

## 29. `FUN_7102838140`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102838140`  (offset `0x2838140`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102838140(long param_1, int param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 324 bytes / 14 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** chara_Median;stage_Median;reflection_cubemap_Median;light_median;chara_Light;stage_Light_loop;chara_Dark;stage_Dark_loop;stage_Light;reflection_cubemap_Light;light_light;stage_Dark;reflection_cubemap_Dark;light_dark
- **Callers:** FUN_7102836930;FUN_71028384f0
- **Callees:** FUN_71025f74f0;FUN_7102633800;FUN_7102633a10;FUN_7102633b90
- **Files:** [decomp](../decompiled/FUN_7102838140__7102838140.c)  [cfg](../decompiled/FUN_7102838140__7102838140.mmd)
- **Clone hash:** `7aeb4790b839637a`

```c

void FUN_7102838140(long param_1,int param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (param_2 == 2) {
    FUN_7102633a10(param_1,(long *********)"chara_Dark",1,param_4,param_5,param_6,param_7,param_8);
    if ((param_3 & 1) == 0) {
      pcVar1 = "stage_Dark";
    }
    else {
      pcVar1 = "stage_Dark_loop";
    }
    uVar2 = 1;
    FUN_7102633b90(param_1,(long *********)pcVar1,1,param_4,param_5,param_6,param_7,param_8);
    FUN_7102633800(param_1,(long *********)"reflection_cubemap_Dark",uVar2,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar1 = "light_dark";
  }
  else if (param_2 == 1) {
    FUN_7102633a10(param_1,(long *********)"chara_Light",1,param_4,param_5,param_6,param_7,param_8);
    if ((param_3 & 1) == 0) {
      pcVar1 = "stage_Light";
    }
    else {
      pcVar1 = "stage_Light_loop";
    }
    uVar2 = 1;
    FUN_7102633b90(param_1,(long *********)pcVar1,1,param_4,param_5,param_6,param_7,param_8);
    FUN_7102633800(param_1,(long *********)"reflection_cubemap_Light",uVar2,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar1 = "light_light";
  }
  else {
    if (param_2 != 0) {
// ... (15 more lines)
```

## 30. `FUN_7101d9d070`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9d070`  (offset `0x1d9d070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9d070(long param_1, long param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 17636 bytes / 890 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** set_parts_bg_00;campaign_boss;campaign_dark;anim_in;anim_loop;set_rep_boss;set_rep_boss_sdw;rule_spirits_campaign_boss;boss_silhouette;rule_spirits_board;set_rep_fighter;set_rep_fighter_sdw;set_rep_fighter_fb;set_rep_fighter_fb_sdw;rule_spirits_campaign_fb_dark;set_rep_fighter_ld;rule_spirits_campaign_sb_dark;boss_art;redeye_%02d;redeye_00;set_parts_aw;set_rep_aura_00;set_rep_spirit_aw;set_parts_base;set_parts_class;off_empty;on_empty;set_txt_series;tit_series_%s;rule_spirits_campaign_sb_light;tit_append_%s;tit_%s;...
- **Callers:** FUN_7101da2510
- **Callees:** FUN_71003a4ca0;FUN_7101696040;FUN_7101da1560;FUN_7102499260;FUN_71024999d0;FUN_7102510850;FUN_710259c150;FUN_71025ad150;FUN_71025b12c0;FUN_71025b1bc0;FUN_71025b39a0;FUN_71025caab0;FUN_71025cad00;FUN_71025cae70;FUN_71025cb340;FUN_71025cb980;...
- **Files:** [decomp](../decompiled/FUN_7101d9d070__7101d9d070.c)  [cfg](../decompiled/FUN_7101d9d070__7101d9d070.mmd)
- **Clone hash:** `6639c5279f8ec4f3`

```c

void FUN_7101d9d070(long param_1,long param_2,ushort param_3,byte ****param_4,long ****param_5,
                   ulong param_6,ulong param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  long ***ppplVar6;
  float fVar7;
  undefined4 uVar8;
  long ********pppppppplVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long *******ppppppplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  long ******pppppplVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  undefined1 uVar25;
  undefined8 extraout_x1;
  char *pcVar26;
  undefined8 extraout_x1_00;
  undefined *puVar27;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
// ... (3048 more lines)
```

## 31. `FUN_7101c09380`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c09380`  (offset `0x1c09380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c09380(long param_1, undefined1 param_2, ulong param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3724 bytes / 173 bb / 7 incoming refs
- **Match values:** stage
- **Strings touched:** mel_rule_team_attack_with;mel_rule_launch_launch_rate_unit;mel_rule_recovery_percent;mode_empty_03;mel_rule_pause_with;mel_rule_damage_with;mel_rule_edit_allbattle_unreversal_with;mel_rule_edit_suddendeath_shrink_with;mel_rule_cond_%d;mel_rule_spirit_with;mel_rule_charge_with;mel_rule_stage_gimmick_with;mel_rule_stage_change_without;mel_rule_score_with;mel_rule_edit_suddendeath_bomb_with;mel_rule_team_attack_without;mel_rule_pause_without;mel_rule_damage_without;mel_rule_edit_allbattle_unreversal_without;mel_rule_edit_suddendeath_shrink_without;mel_rule_spirit_without;mel_rule_charge_without;mel_rule_stage_gimmick_without;mel_rule_score_without;mel_rule_edit_suddendeath_bomb_without;mel_rule_edit_tournament_random;mel_rule_stage_change_any;mel_rule_stage_change_time
- **Callers:** FUN_7101c0cd40;FUN_7101c13400;FUN_7101c16090
- **Callees:** FUN_7101c09200;FUN_710377a120;FUN_710377a280;FUN_71037a2270;FUN_71037ad940
- **Files:** [decomp](../decompiled/FUN_7101c09380__7101c09380.c)  [cfg](../decompiled/FUN_7101c09380__7101c09380.mmd)
- **Clone hash:** `a553415fa347770c`

```c

void FUN_7101c09380(long param_1,undefined1 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  char *pcVar4;
  long *plVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined2 uStack_48;
  undefined1 local_46;
  undefined1 uStack_45;
  int local_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar5 = *(long **)(param_1 + 8);
  uVar2 = (uint)param_3;
  if (((int)uVar2 < 0) || (*plVar5 == 0)) {
switchD_7101c093c0_caseD_c:
    plVar5 = (long *)plVar5[2];
    if (plVar5 == (long *)0x0) {
// ... (698 more lines)
```

## 32. `FUN_7101cd7110`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cd7110`  (offset `0x1cd7110`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cd7110(long param_1, undefined4 param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 968 bytes / 54 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** mnu_share_stage_player_num_kind_02;mnu_share_stage_player_num_kind_01
- **Callers:** FUN_7101cd6190
- **Callees:** FUN_7101cf20d0;FUN_7103778ab0;FUN_710377a120;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101cd7110__7101cd7110.c)  [cfg](../decompiled/FUN_7101cd7110__7101cd7110.mmd)
- **Clone hash:** `ac1c8697b7f69473`

```c

void FUN_7101cd7110(long param_1,undefined4 param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  ulong local_70;
  uint auStack_68 [2];
  char acStack_60 [64];
  
  switch(param_2) {
  case 0:
    FUN_7103778ab0(&local_78,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x208) < 7) {
// ... (169 more lines)
```

## 33. `FUN_71026617f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026617f0`  (offset `0x26617f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026617f0(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long param_5, undefined8 param_6, long * * * * param_7, undefined1[16] * param_8, undefined1[16] * param_9, undefined1[16] * param_10, long * * * param_11, long * * * param_12)`
- **Size / BBs / Incoming:** 544 bytes / 42 bb / 1 incoming refs
- **Match values:** stage
- **Callees:** FUN_71025e7060;FUN_7102633b90;FUN_7102661a20;FUN_71026673b0;FUN_710266d1d0
- **Files:** [decomp](../decompiled/FUN_71026617f0__71026617f0.c)  [cfg](../decompiled/FUN_71026617f0__71026617f0.mmd)
- **Clone hash:** `7e5c881b8f7c8819`

```c

void FUN_71026617f0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long param_5,undefined8 param_6,long ****param_7,
                   undefined1 (*param_8) [16],undefined1 (*param_9) [16],undefined1 (*param_10) [16]
                   ,long ***param_11,long ***param_12)

{
  bool bVar1;
  bool bVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  undefined8 extraout_x1_03;
  undefined4 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  FUN_71025e7060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
  fVar8 = *(float *)(param_5 + 0x8a0) + param_1._0_4_;
  *(float *)(param_5 + 0x8a0) = fVar8;
  uVar3 = extraout_x1;
  if (6000.0 <= fVar8) {
    FUN_7102661a20(param_5);
    fVar8 = *(float *)(param_5 + 0x8a0);
    uVar3 = extraout_x1_00;
  }
  if (2100.0 <= fVar8) {
    if (5700.0 <= fVar8) {
      if (5700.0 < fVar8) goto LAB_7102661848;
    }
    else if (*(int *)(param_5 + 0x878) != 2) {
      uVar4 = 2;
      goto LAB_710266187c;
    }
// ... (85 more lines)
```

## 34. `FUN_7101ca8540`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca8540`  (offset `0x1ca8540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca8540(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2024 bytes / 107 bb / 4 incoming refs
- **Match values:** stage
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

## 35. `FUN_7102749210`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102749210`  (offset `0x2749210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102749210(long * param_1, undefined4 param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 440 bytes / 9 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** light_default;chara_default;stage_default;reflection_cubemap_default;light_kiila;chara_kiila;stage_kiila;reflection_cubemap_kiila;plate_side;light_darz;chara_darz;stage_darz;reflection_cubemap_darz;light_both;chara_both;stage_both;reflection_cubemap_both
- **Callers:** FUN_7102748e50;FUN_71027493d0
- **Callees:** FUN_71025f74f0;FUN_7102633800;FUN_7102633a10;FUN_7102633b90
- **Files:** [decomp](../decompiled/FUN_7102749210__7102749210.c)  [cfg](../decompiled/FUN_7102749210__7102749210.mmd)
- **Clone hash:** `0e555d1e316df418`

```c

void FUN_7102749210(long *param_1,undefined4 param_2,ulong param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = 0.0;
  if ((param_3 & 1) == 0) {
    fVar4 = 30.0;
  }
  switch(param_2) {
  case 0:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_default");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_default",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)"stage_default",1,param_4,param_5,
                   param_6,param_7,param_8);
    lVar3 = *param_1;
    pcVar1 = "reflection_cubemap_default";
    break;
  case 1:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_kiila");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_kiila",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
    FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)"stage_kiila",1,param_4,param_5,
                   param_6,param_7,param_8);
    lVar3 = *param_1;
    pcVar1 = "reflection_cubemap_kiila";
    break;
  case 2:
    FUN_71025f74f0(fVar4,*(long *)(*(long *)(*param_1 + 0x318) + 0x10),(byte *)"light_darz");
    FUN_7102633a10(*(long *)(*param_1 + 0x318),(long *********)"chara_darz",1,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = 1;
// ... (23 more lines)
```

## 36. `FUN_7101ce5ab0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** set_parts_det_panel;set_txt_version;set_parts_tag_disp;tag_on;btl_field_on;set_txt_tag;mnu_replay_detail_battlefield;tag_off;endpoint_on;mnu_replay_detail_end;set_txt_header_rule;set_txt_rule;mnu_replay_detail_rule_time;mel_rule_select_time;mnu_replay_detail_rule_stock;mode_empty_03;mel_rule_select_time_inifinity;mnu_replay_detail_rule_stamina;mel_rule_select_time_inifinity_stock;mnu_replay_detail_homerun_single;mnu_replay_detail_homerun_coop;rule_txt_off;mel_rule_select_time_stock;rule_txt_on;set_txt_mode_00;set_txt_mode_01;mnu_share_detail_data_kind_homerun;mnu_share_data_kind_team;mnu_share_detail_data_kind_sp_suddendeath;mnu_share_detail_data_kind_various;set_txt_time;set_txt_bar_title_%d%d;...
- **Callers:** FUN_7101ce2ec0
- **Callees:** FUN_71003a4ca0;FUN_710062dc20;FUN_7101ce7020;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103263540;FUN_71032648e0;FUN_710326ad60;FUN_7103280ec0;FUN_71032b1a60;FUN_71032b24e0;FUN_7103776390;...
- **Files:** [decomp](../decompiled/FUN_7101ce5ab0__7101ce5ab0.c)  [cfg](../decompiled/FUN_7101ce5ab0__7101ce5ab0.mmd)
- **Clone hash:** `aa7b16582585de65`

```c

void FUN_7101ce5ab0(long param_1,undefined8 *param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  byte ****ppppbVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  int iVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  uint uVar22;
  int *piVar23;
  long ***ppplVar24;
  byte *pbVar25;
  ulong uVar26;
  char cVar27;
  uint uVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  long *plVar31;
  undefined1 *puVar32;
  undefined **__dest;
  long lVar33;
  char *pcVar34;
// ... (958 more lines)
```

## 37. `FUN_7101fc7f30`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** STAGE
- **Strings touched:** sv_animcmd;is_excute;frame;execute;frame_clear;wait_loop;wait_loop_sync_mot;wait_loop_clear;IT_JUST_FRAME;get_value_int;get_value_float;IS_RANDOM;IS_EXIST_ARTICLE;IS_GENERATABLE_ARTICLE;IS_FIGHTER_STATUS_KIND;IS_STATUS_KIND;IS_HAVE_ITEM_KIND;IS_MENU;ATK_POWER;ATK_NO_ATTACKER_LOG;ATTACK;ATTACK_IND;ATTACK_IGNORE_THROW;ATTACK_ABS;ATK_HIT_ABS;ATTACK_LEGACY;ATTACK_ABS_LEGACY;ATTACK_ABS_STRENGTH;ATTACK_FP;ATTACK_FP_REAC;ATTACK_FP_ATKW;ATTACK_FP_STRENGTH;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fc7f30__7101fc7f30.c)  [cfg](../decompiled/FUN_7101fc7f30__7101fc7f30.mmd)
- **Clone hash:** `55798d06d10f6e50`

```c

void FUN_7101fc7f30(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"sv_animcmd",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_excute",(long ****)FUN_7101fa3fc0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104290589,(long ****)FUN_7101fa3ff0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"frame",(long ****)FUN_7101fa4040,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"execute",(long ****)FUN_7101fa4180,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"frame_clear",(long ****)FUN_7101fa42f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104422f3e,(long ****)FUN_7101fa4310,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop",(long ****)app::sv_animcmd::wait_loop,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop_sync_mot",
                 (long ****)app::sv_animcmd::wait_loop_sync_mot,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"wait_loop_clear",(long ****)app::sv_animcmd::wait_loop_clear,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"IT_JUST_FRAME",(long ****)FUN_7101fa4480,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_value_int",(long ****)FUN_7101fa46c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_value_float",(long ****)FUN_7101fa47a0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"IS_RANDOM",(long ****)FUN_7101fa4880,ppppbVar1,in_x4,in_x5,in_x6
// ... (689 more lines)
```

## 38. `FUN_71023899c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023899c0`  (offset `0x23899c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023899c0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1404 bytes / 49 bb / 6 incoming refs
- **Match values:** stage
- **Strings touched:** share;time_seconds;num_test_stageedit;num_save_stageedit;num_like_stageedit;num_share_stageedit;num_test_miifighter;num_save_miifighter;num_like_miifighter;num_share_miifighter;num_watch_replay;num_like_replay;num_share_replay;num_watch_watching;num_like_watching;num_share_watching;num_watch_movie;NODE_PRE_REFRACT_BLEND;num_like_movie;num_share_movie;num_profile;num_follow;num_report
- **Callers:** FUN_71023883a0;FUN_7102390040;FUN_71023902d0;FUN_71023907b0;FUN_71023925c0
- **Callees:** FUN_7101cc4970;FUN_7101cc4b30;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add;<EXTERNAL>::nn::prepo::PlayReport::Save;<EXTERNAL>::nn::oe::GetProgramTotalActiveTime
- **Files:** [decomp](../decompiled/FUN_71023899c0__71023899c0.c)  [cfg](../decompiled/FUN_71023899c0__71023899c0.mmd)
- **Clone hash:** `b37e48db2b824a44`

```c

void FUN_71023899c0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *local_40;
  ulong local_38;
  
  lVar7 = *(long *)(DAT_7105325cc8 + 8);
  if (*(int *)(lVar7 + 0xb8) != 0) {
    lVar4 = nn::oe::GetProgramTotalActiveTime();
    uVar6 = lVar4 - *(long *)(lVar7 + 0x26c8);
    uVar5 = ((long)uVar6 >> 0x20) * 0x26d694b3 + ((uVar6 & 0xffffffff) * 0x26d694b3 >> 0x20);
    *(int *)(lVar7 + 0x2674) =
         (int)(((long)uVar6 >> 0x20) * 0x112e0be8 + ((long)uVar5 >> 0x20) +
               ((uVar6 & 0xffffffff) * 0x112e0be8 + (uVar5 & 0xffffffff) >> 0x20) >> 0x1a) -
         (int)((long)uVar6 >> 0x3f);
    if ((((((*(int *)(lVar7 + 0x2678) != 0) || (*(int *)(lVar7 + 0x267c) != 0)) ||
          (*(int *)(lVar7 + 0x2680) != 0)) ||
         ((*(int *)(lVar7 + 0x2684) != 0 || (*(int *)(lVar7 + 0x2688) != 0)))) ||
        ((((*(int *)(lVar7 + 0x268c) != 0 ||
           ((*(int *)(lVar7 + 0x2690) != 0 || (*(int *)(lVar7 + 0x2694) != 0)))) ||
          (*(int *)(lVar7 + 0x2698) != 0)) ||
         ((((*(int *)(lVar7 + 0x269c) != 0 || (*(int *)(lVar7 + 0x26a0) != 0)) ||
           (*(int *)(lVar7 + 0x26a4) != 0)) ||
          (((*(int *)(lVar7 + 0x26a8) != 0 || (*(int *)(lVar7 + 0x26ac) != 0)) ||
           ((*(int *)(lVar7 + 0x26b0) != 0 ||
            ((*(int *)(lVar7 + 0x26b4) != 0 || (*(int *)(lVar7 + 0x26b8) != 0)))))))))))) ||
       ((*(int *)(lVar7 + 0x26bc) != 0 ||
        ((*(int *)(lVar7 + 0x26c0) != 0 || (*(int *)(lVar7 + 0x26c4) != 0)))))) {
      FUN_710375aa90((long *)&local_40,"share",param_3,param_4,param_5,param_6,param_7,param_8);
      puVar2 = local_40;
      local_38 = (ulong)*(uint *)(lVar7 + 0x2674);
// ... (96 more lines)
```

## 39. `FUN_7101b323a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b323a0`  (offset `0x1b323a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b323a0(long param_1, uint param_2, uint param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1024 bytes / 42 bb / 3 incoming refs
- **Match values:** stage
- **Strings touched:** set_preview_st_0%d;set_parts_btn_stage;set_txt_normal;set_medal_0%d;stage_make
- **Callers:** FUN_7101b2a1f0;FUN_7101b34970
- **Callees:** FUN_71032b23e0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b323a0__7101b323a0.c)  [cfg](../decompiled/FUN_7101b323a0__7101b323a0.mmd)
- **Clone hash:** `fa4f152809ad5fe4`

```c

void FUN_7101b323a0(long param_1,uint param_2,uint param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = *(ulong *)(param_1 + (long)(int)param_2 * 0x28 + 0xf8);
  lVar8 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178) + 8);
  uVar4 = FUN_71032b23e0(lVar8,0x116b904091);
  bVar2 = (uVar10 & 0xffffffffff) != 0;
  bVar3 = (uVar10 & 0xff00000000000000) == 0x6900000000000000;
  if ((bVar3 && bVar2) &&
     ((uVar4 & 0xff00000000000000) == 0x6900000000000000 && (uVar4 & 0xffffffffff) != 0)) {
    if (((uVar4 ^ uVar10) & 0xffffffffff) != 0) {
      uVar4 = FUN_71032b23e0(lVar8,0x166fbc7641);
      uVar7 = uVar4 & 0xffffffffff;
LAB_7101b324c8:
      if (((uVar4 & 0xff00000000000000) != 0x6900000000000000 || uVar7 == 0) ||
          ((uVar4 ^ uVar10) & 0xffffffffff) != 0) {
        uVar4 = FUN_71032b23e0(lVar8,0x1c23e8aab5);
// ... (113 more lines)
```

## 40. `FUN_7101714c00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** lang:%s;DataStorePreparePostParam: (;size=;, name=;, dataType=;, accessPermission=;DataStorePermission: (permission=;, targetIds=(;, updatePermission=;, dataFlag=;, period=;, referDataId=;, persistenceInitParam=;DataStorePersistenceInitParam: (;NODE_PRE_REFRACT_BLEND;persistenceSlotId=;, deleteLastObject=;, ratingInitParams=(;slot=;, ratingInitParam=;DataStoreRatingInitParam: (;flag=;, internalFlag=;, lockType=;, initialValue=;, rangeMin=;, rangeMax=;, periodHour=;, periodDuration=;, tags=(;, metaBinary=;country;...
- **Callers:** FUN_71017320d0;FUN_7101732d10
- **Callees:** FUN_71001aff70;FUN_71001b0ab0;FUN_71001b1820;FUN_71001b1870;FUN_71001b2f70;FUN_71001b3300;FUN_71001b4390;FUN_71001b47e0;FUN_71001b4910;FUN_71001b4b40;FUN_71001b4e80;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;FUN_71001b61d0;FUN_71001b6320;...
- **Files:** [decomp](../decompiled/FUN_7101714c00__7101714c00.c)  [cfg](../decompiled/FUN_7101714c00__7101714c00.mmd)
- **Clone hash:** `b2151cc381e6a915`

```c

void FUN_7101714c00(long param_1,long param_2,undefined2 *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long ****pppplVar9;
  undefined1 *puVar10;
  long lVar11;
  long *****ppppplVar12;
  long ****pppplVar13;
  long lVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte *pbVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  byte *pbVar26;
  int iVar27;
  long *****ppppplVar28;
  long *****ppppplVar29;
  long ****local_1b0;
  long ****local_1a8;
  undefined8 *local_1a0;
  undefined **local_198;
  undefined **local_190;
  undefined **local_188;
// ... (897 more lines)
```

## 41. `FUN_7102123d40`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102123d40`  (offset `0x2123d40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102123d40(void)`
- **Size / BBs / Incoming:** 74688 bytes / 187 bb / 1 incoming refs
- **Match values:** STAGE
- **Strings touched:** FIGHTER_PAD_ATTACK_TRIGGER;FIGHTER_PAD_ATTACK_RELEASE;FIGHTER_PAD_SPECIAL_TRIGGER;FIGHTER_PAD_SPECIAL_RELEASE;FIGHTER_PAD_JUMP_TRIGGER;FIGHTER_PAD_JUMP_RELEASE;FIGHTER_PAD_GUARD_TRIGGER;FIGHTER_PAD_GUARD_RELEASE;FIGHTER_PAD_MAX;FIGHTER_PAD_CMD_CAT1_ATTACK_N;FIGHTER_PAD_CMD_CAT1_ATTACK_S3;FIGHTER_PAD_CMD_CAT1_ATTACK_HI3;FIGHTER_PAD_CMD_CAT1_ATTACK_LW3;FIGHTER_PAD_CMD_CAT1_ATTACK_S4;FIGHTER_PAD_CMD_CAT1_ATTACK_HI4;FIGHTER_PAD_CMD_CAT1_ATTACK_LW4;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_N;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_F;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_B;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_HI;FIGHTER_PAD_CMD_CAT1_ATTACK_AIR_LW;FIGHTER_PAD_CMD_CAT1_SPECIAL_N;FIGHTER_PAD_CMD_CAT1_SPECIAL_S;FIGHTER_PAD_CMD_CAT1_SPECIAL_HI;FIGHTER_PAD_CMD_CAT1_SPECIAL_LW;FIGHTER_PAD_CMD_CAT1_WALK;FIGHTER_PAD_CMD_CAT1_DASH;FIGHTER_PAD_CMD_CAT1_TURN;FIGHTER_PAD_CMD_CAT1_TURN_DASH;FIGHTER_PAD_CMD_CAT1_JUMP;FIGHTER_PAD_CMD_CAT1_JUMP_BUTTON;FIGHTER_PAD_CMD_CAT1_AIR_ESCAPE;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102123d40__7102123d40.c)  [cfg](../decompiled/FUN_7102123d40__7102123d40.mmd)
- **Clone hash:** `7ad94b1c5264513f`

```c

void FUN_7102123d40(void)

{
  byte ****in_x3;
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_80;
  long local_78;
  int local_70;
  
  local_70 = 0xfffffffd;
  local_80 = 0;
  local_78 = 0;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_ATTACK_TRIGGER",(undefined **)0x0,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_ATTACK_RELEASE",(undefined **)0x1,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_SPECIAL_TRIGGER",(undefined **)0x2,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_SPECIAL_RELEASE",(undefined **)0x3,in_x3,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_JUMP_TRIGGER",(undefined **)&DAT_00000004,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_JUMP_RELEASE",(undefined **)0x5,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_GUARD_TRIGGER",(undefined **)0x6,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_GUARD_RELEASE",(undefined **)&DAT_00000007,in_x3,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_MAX",(undefined **)&DAT_00000008,in_x3,in_x4,in_x5,
                 in_x6,in_x7);
  local_80 = 0;
  local_78 = 0;
  local_70 = -3;
  FUN_71037289c0(&local_80,(uint *)"FIGHTER_PAD_CMD_CAT1_ATTACK_N",(undefined **)0x0,in_x3,in_x4,
                 in_x5,in_x6,in_x7);
// ... (7744 more lines)
```

## 42. `FUN_710171ff00`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171ff00`  (offset `0x171ff00`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710171ff00(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8224 bytes / 444 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** operation_id;amiibo;fighter_flags;competition_stage_flags;competition_stage_type;melee_kind;melee_rule;time_sec;stock;spirits;defence_reaction;charge;stage_gimmick;is_suddendeath;scaledown_stage;drop_bomb;speed;camera;body_size;head_option;body_option;state_option;weight;item_appear;item_flags;prize_type;prize_index;prize_value;prize_param0;prize_param1;tournament_entry_max_seconds;competition_aggregate_at;...
- **Callers:** FUN_71016c3e60;FUN_710170bda0
- **Callees:** FUN_71001b0960;FUN_71001b4910;FUN_7101684800;FUN_7101721f20;FUN_7101722330;FUN_71017224b0;FUN_7101722840;FUN_71017251e0;FUN_710172a290;FUN_7101762560;FUN_71032631a0;FUN_71032632a0;FUN_71032b30d0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_710171ff00__710171ff00.c)  [cfg](../decompiled/FUN_710171ff00__710171ff00.mmd)
- **Clone hash:** `d9c66cf0b811c315`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_710171ff00(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte *pbVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint3 uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  long ***ppplVar16;
  long **pplVar17;
  long lVar18;
  long ****pppplVar19;
  size_t sVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long ***ppplVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  int iVar31;
  long lVar32;
// ... (1501 more lines)
```

## 43. `FUN_7101418180`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101418180`  (offset `0x1418180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101418180(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1508 bytes / 61 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** mel_info_stage_punchout_top
- **Callees:** FUN_71000001c0;FUN_7101418c80;FUN_7101764000;FUN_7101b4e8b0;FUN_7101b4eb20;FUN_71032631a0;FUN_7103265040;FUN_71033938b0;FUN_710377a120;FUN_710377a280;FUN_710377aee0;FUN_710377b010;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101418180__7101418180.c)  [cfg](../decompiled/FUN_7101418180__7101418180.mmd)
- **Clone hash:** `66d4a42ba34e9a12`

```c

void FUN_7101418180(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong *puVar11;
  float fVar12;
  long *local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint auStack_88 [18];
  
  if (*(int *)((long)param_1 + 0xec) == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    plVar7 = *(long **)(*param_1 + 0x20);
    lVar10 = *(long *)(DAT_710532f730 + 8);
    uStack_90 = (**(code **)(*plVar7 + 0x28))(plVar7,*param_1,2);
    puStack_b0 = &DAT_71052c5730;
    puStack_a0 = &uStack_90;
    local_98 = DAT_710593b6a0;
    local_b8 = param_1;
    local_a8 = lVar10 + 0x160;
    FUN_7101418c80((long *)&local_b8,0,*(uint *)(param_1 + 0x23));
// ... (200 more lines)
```

## 44. `FUN_71026644d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71026644d0`  (offset `0x26644d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71026644d0(undefined8 param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, long * * * param_8, long * * * param_9)`
- **Size / BBs / Incoming:** 5500 bytes / 296 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** ItemPoint_O_OBJ_O_HIR
- **Callees:** FUN_71000001c0;FUN_71015b0590;FUN_71015db0b0;FUN_7101764000;FUN_710177a6e0;FUN_71025dd540;FUN_71025ee450;FUN_71025efd10;FUN_71026277a0;FUN_7102633b90;FUN_7102665b80;FUN_7102666160;FUN_71026668e0;FUN_7102666c30;FUN_7102666d40;FUN_71026673b0;...
- **Files:** [decomp](../decompiled/FUN_71026644d0__71026644d0.c)  [cfg](../decompiled/FUN_71026644d0__71026644d0.mmd)
- **Clone hash:** `8c15c77175b13581`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026644d0(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   long ***param_8,long ***param_9)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long **pplVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  void *__dest;
  undefined8 *puVar11;
  long *plVar12;
  long ****pppplVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar14;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  char cVar15;
  uint uVar16;
  long lVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [12];
  uint *puVar21;
  long ***ppplVar22;
  long ***ppplVar23;
  long **pplVar24;
// ... (1021 more lines)
```

## 45. `FUN_7100429840`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100429840`  (offset `0x429840`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100429840(void)`
- **Size / BBs / Incoming:** 2424 bytes / 101 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** B_chara_morning;B_chara_daytime;B_chara_evening;B_chara_night;E_chara_morning;E_chara_daytime;E_chara_evening;E_chara_night;stage_morning;stage_daytime;stage_evening;stage_night;reflection_cubemap_morning;reflection_cubemap_daytime;reflection_cubemap_evening;reflection_cubemap_night
- **Callees:** FUN_71000001c0;FUN_7102682d60;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7100429840__7100429840.c)  [cfg](../decompiled/FUN_7100429840__7100429840.mmd)
- **Clone hash:** `14346b3dea16c571`

```c

void FUN_7100429840(void)

{
  char *pcVar1;
  ulong uVar2;
  undefined **ppuVar3;
  long ****pppplVar4;
  byte ****in_x3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int local_118 [2];
  byte local_110;
  undefined4 uStack_10f;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 local_108;
  undefined5 uStack_107;
  undefined1 uStack_102;
  undefined1 uStack_101;
  char *local_100;
  undefined4 local_f8;
  byte local_f0;
  undefined4 uStack_ef;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 local_e8;
  undefined5 uStack_e7;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  char *local_e0;
  undefined4 local_d8;
  byte local_d0;
  undefined4 uStack_cf;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
// ... (506 more lines)
```

## 46. `FUN_71020c9380`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** stage
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

## 47. `FUN_7102dd1720`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102dd1720`  (offset `0x2dd1720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102dd1720(undefined8 param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, long * * * param_8, long * * * param_9)`
- **Size / BBs / Incoming:** 10080 bytes / 526 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** light01;chara_rain;stage_rain;light00;chara_sunny;stage_sunny
- **Callees:** FUN_71000001c0;FUN_71003a9ab0;FUN_71003ac560;FUN_7100525010;FUN_7100532bc0;FUN_7101764000;FUN_71025dd540;FUN_71025e9d50;FUN_71025ee2a0;FUN_71025efaa0;FUN_71025f74f0;FUN_710260fdd0;FUN_710260ffb0;FUN_7102610220;FUN_71026277a0;FUN_7102633a10;...
- **Files:** [decomp](../decompiled/FUN_7102dd1720__7102dd1720.c)  [cfg](../decompiled/FUN_7102dd1720__7102dd1720.mmd)
- **Clone hash:** `d5ba4a274a56907d`

```c

/* WARNING: Removing unreachable block (ram,0x007102dd2c88) */
/* WARNING: Removing unreachable block (ram,0x007102dd28cc) */
/* WARNING: Removing unreachable block (ram,0x007102dd2df0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102dd1720(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   long ***param_8,long ***param_9)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined5 uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  ulong uVar25;
  void *__dest;
  long *plVar26;
  undefined8 extraout_x1;
// ... (1999 more lines)
```

## 48. `FUN_7102ab5540`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ab5540`  (offset `0x2ab5540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ab5540(float param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 10492 bytes / 605 bb / 1 incoming refs
- **Match values:** stage
- **Strings touched:** light;chara;stage;light_wait;chara_wait;stage_wait;light_loop;chara_loop;stage_loop
- **Callees:** FUN_7100532bc0;FUN_710067de90;FUN_7102405040;FUN_71025dd540;FUN_71025e9d50;FUN_71025ed6c0;FUN_71025ee080;FUN_71025efd10;FUN_71025f4d80;FUN_71025f7350;FUN_710260fdd0;FUN_710260ffb0;FUN_71026249a0;FUN_7102633a10;FUN_7102633b90;FUN_7102666c30;...
- **Files:** [decomp](../decompiled/FUN_7102ab5540__7102ab5540.c)  [cfg](../decompiled/FUN_7102ab5540__7102ab5540.mmd)
- **Clone hash:** `8aeb57d71f8daeac`

```c

/* WARNING: Removing unreachable block (ram,0x007102ab7858) */
/* WARNING: Removing unreachable block (ram,0x007102ab7830) */
/* WARNING: Removing unreachable block (ram,0x007102ab786c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ab5540(float param_1,long param_2,undefined8 param_3,long ****param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  long ***ppplVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined2 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
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
// ... (2264 more lines)
```

## 49. `FUN_710182dd10`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710182dd10`  (offset `0x182dd10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710182dd10(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3708 bytes / 105 bb / 1 incoming refs
- **Match values:** STAGE;stage
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

## 50. `FUN_7101b39ec0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b39ec0`  (offset `0x1b39ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b39ec0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 404 bytes / 21 bb / 2 incoming refs
- **Match values:** stage
- **Strings touched:** set_rep_stage;set_rep_stage_battle;set_rep_stage_end;set_rep_st_logo;set_rep_st_mark
- **Callers:** FUN_7101b31a10
- **Callees:** FUN_7103776910;FUN_7103779650;FUN_71037799d0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101b39ec0__7101b39ec0.c)  [cfg](../decompiled/FUN_7101b39ec0__7101b39ec0.mmd)
- **Clone hash:** `e2e0cb95d1533a56`

```c

void FUN_7101b39ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  long *local_58;
  undefined **local_50;
  long *local_48;
  
  FUN_7103776910(&local_50,param_1,(long ****)"set_rep_stage",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar5 = local_48;
  FUN_7103779650((long)local_48);
  lVar6 = *local_48;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  FUN_71037799d0((long)local_48);
  FUN_7103776910(&local_60,param_1,(long ****)"set_rep_stage_battle",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_58;
  FUN_7103779650((long)local_58);
  lVar6 = *local_58;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,param_1,(long ****)"set_rep_stage_end",param_3,param_4,param_5,param_6,
// ... (51 more lines)
```

