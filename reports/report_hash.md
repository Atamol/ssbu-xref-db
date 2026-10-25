# hash (funcs=10, hits=73)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=42)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** HASH
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

## 2. `FUN_710225b990`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** HASH
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

## 3. `FUN_7102219310`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102219310`  (offset `0x2219310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102219310(long param_1)`
- **Size / BBs / Incoming:** 10116 bytes / 52 bb / 2 incoming refs
- **Match values:** hash
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

## 4. `FUN_710226e860`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226e860`  (offset `0x226e860`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226e860(long param_1)`
- **Size / BBs / Incoming:** 1152 bytes / 4 bb / 2 incoming refs
- **Match values:** hash
- **Strings touched:** pickelobject;grid_size;grid_position;grid_status;is_grid_blank;regist_block_to_grid;set_assist_team_no;unregist_block_to_grid;get_battle_object_id_from_grid_pos;create_ground_collision;update_collision_work;set_material_visibility_mesh_all_invisible;get_base_material_visibility_mesh_id_hash;get_damaged_material_visibility_mesh_id_hash;get_born_effect_hash;get_damage_sound_hash;get_break_sound_hash;is_landing_fighter_rhombus_touch_ground;is_wall_left_fighter_rhombus_touch_ground;is_wall_right_fighter_rhombus_touch_ground;is_heading_fighter_rhombus_touch_ground;check_range_from_onwer;update_blink;damage_hit_fighter;crack_hp_percent;crack_max_hp_percent;flash_start_frame;auto_damage;crack_level;damage_hit_fighter_stop_frame;fighter_landing_damage_mul;fighter_landing_damage_mul_frame;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710226e860__710226e860.c)  [cfg](../decompiled/FUN_710226e860__710226e860.mmd)
- **Clone hash:** `399f0a1b88164d94`

```c

void FUN_710226e860(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"pickelobject",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_size",(long ****)FUN_710226c300,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_position",(long ****)FUN_710226c340,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"grid_status",(long ****)FUN_710226c5e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_grid_blank",(long ****)FUN_710226c870,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"regist_block_to_grid",(long ****)FUN_710226cb00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unregist_block_to_grid",(long ****)FUN_710226cda0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_battle_object_id_from_grid_pos",(long ****)FUN_710226cff0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"create_ground_collision",(long ****)FUN_710226d270,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_collision_work",(long ****)FUN_710226d360,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_material_visibility_mesh_all_invisible",
                 (long ****)FUN_710226d420,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_base_material_visibility_mesh_id_hash",
                 (long ****)FUN_710226d4e0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_damaged_material_visibility_mesh_id_hash",
                 (long ****)FUN_710226d650,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_born_effect_hash",(long ****)FUN_710226d740,ppppbVar1,in_x4,
// ... (71 more lines)
```

## 5. `FUN_71020ad520`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020ad520`  (offset `0x20ad520`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020ad520(long param_1)`
- **Size / BBs / Incoming:** 504 bytes / 4 bb / 2 incoming refs
- **Match values:** hash
- **Strings touched:** FighterMotionModuleImpl;add_body_type_hash;get_cancel_frame;is_valid_cancel_frame;get_hit_normal_frame;get_hit_xlu_frame;motion_kind_kirby_copy_original;change_motion_kirby_copy;change_motion_inherit_frame_kirby_copy;gauge_parts_on;change_motion_inherit_frame_keep_rate_kirby_copy;change_motion_force_inherit_frame_kirby_copy;end_frame_from_hash_kirby_copy;set_frame_sync_anim_cmd_kirby_copy;get_cancel_frame_kirby_copy;add_motion_partial_kirby_copy;set_blend_waist;start_damage_stop_interpolation;set_pause_motion_interpolation_stop;set_update_finger_and_face_joint
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020ad520__71020ad520.c)  [cfg](../decompiled/FUN_71020ad520__71020ad520.mmd)
- **Clone hash:** `f7d60ffa5d870380`

```c

void FUN_71020ad520(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterMotionModuleImpl",0xfffffffd,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_body_type_hash",(long ****)FUN_71020aa4b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_cancel_frame",(long ****)FUN_71020aa5b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_valid_cancel_frame",(long ****)FUN_71020aa7b0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hit_normal_frame",(long ****)FUN_71020aa9b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hit_xlu_frame",(long ****)FUN_71020aabb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind_kirby_copy_original",(long ****)FUN_71020aadb0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_kirby_copy",(long ****)FUN_71020aaf50,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_kirby_copy",
                 (long ****)FUN_71020ab490,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_keep_rate_kirby_copy",
                 (long ****)FUN_71020ab9a0,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_force_inherit_frame_kirby_copy",
                 (long ****)FUN_71020abd60,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_frame_from_hash_kirby_copy",(long ****)FUN_71020ac140,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_frame_sync_anim_cmd_kirby_copy",(long ****)FUN_71020ac2f0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
// ... (18 more lines)
```

## 6. `FUN_7102068680`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102068680`  (offset `0x2068680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102068680(long param_1)`
- **Size / BBs / Incoming:** 2496 bytes / 4 bb / 2 incoming refs
- **Match values:** hash
- **Strings touched:** MotionModule;change_motion;change_motion_inherit_frame;change_motion_inherit_frame_keep_rate;change_motion_force_inherit_frame;change_motion_kind;add_motion_2nd;set_weight;get_weight;set_weight_rate;is_blend;is_changing;motion_kind;set_rate;rate_2nd;set_rate_2nd;frame;prev_frame;plate_side;set_frame;set_frame_sync_anim_cmd;end_frame;end_frame_from_hash;set_frame_2nd;frame_2nd;trans_tra;trans_tra_2nd;joint_local_tra;trans_tra_end_frame;is_end;is_looped;is_loop_flag;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102068680__7102068680.c)  [cfg](../decompiled/FUN_7102068680__7102068680.mmd)
- **Clone hash:** `19235d65e8d9bfe1`

```c

void FUN_7102068680(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"MotionModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion",(long ****)FUN_710205d3b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame",(long ****)FUN_710205d8f0,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_inherit_frame_keep_rate",(long ****)FUN_710205de00
                 ,ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_force_inherit_frame",(long ****)FUN_710205e1c0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_kind",(long ****)FUN_710205e580,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_motion_2nd",(long ****)FUN_710205e6b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_weight",(long ****)FUN_710205eb20,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_weight",(long ****)FUN_710205ed90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_weight_rate",(long ****)FUN_710205ee60,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_blend",(long ****)FUN_710205f030,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_changing",(long ****)FUN_710205f100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind",(long ****)FUN_710205f1d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71043aea1b,(long ****)FUN_710205f2b0,ppppbVar1,in_x4,in_x5,
// ... (183 more lines)
```

## 7. `FUN_71020f6260`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020f6260`  (offset `0x20f6260`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020f6260(long param_1)`
- **Size / BBs / Incoming:** 456 bytes / 4 bb / 2 incoming refs
- **Match values:** hash
- **Strings touched:** start_inhaled;end_hooked;get_battle_object_id;action;TRANS_A_JUMP_AERIAL;item_module_accessor;send_touch_message;common_param_float;common_param_int;property_param_int_as_hash;specialized_param_float;specialized_param_int;owner_id;is_had;is_eatable;throw_attack
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020f6260__71020f6260.c)  [cfg](../decompiled/FUN_71020f6260__71020f6260.mmd)
- **Clone hash:** `54b929a655a074e3`

```c

void FUN_71020f6260(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)&DAT_71044028c7,0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"start_inhaled",(long ****)FUN_71020f4730,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"end_hooked",(long ****)FUN_71020f4800,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_battle_object_id",(long ****)FUN_71020f48d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"action",(long ****)FUN_71020f49c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"item_module_accessor",(long ****)FUN_71020f4b80,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"send_touch_message",(long ****)FUN_71020f4c50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"common_param_float",(long ****)FUN_71020f5110,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"common_param_int",(long ****)FUN_71020f5230,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"property_param_int_as_hash",(long ****)FUN_71020f5350,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"specialized_param_float",(long ****)FUN_71020f5480,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"specialized_param_int",(long ****)FUN_71020f5590,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"owner_id",(long ****)FUN_71020f56c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
// ... (14 more lines)
```

## 8. `FUN_7101f87300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f87300`  (offset `0x1f87300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f87300(long param_1)`
- **Size / BBs / Incoming:** 5008 bytes / 47 bb / 2 incoming refs
- **Match values:** hash
- **Strings touched:** ai_notify_event;status_kind;motion_kind;ai_deprecated;range_in;distance_in;other_in;get_target_vector;get_safe_fall;get_safe_fall_current;find_meteor_target;ai_weapon;have_item_kind;mode_empty_03;most_earliest_weapon;most_earliest_hit_frame;plate_side;constraint_object_id;pos_x;pos_y;speed;speed_x;speed_y;speed_length;ai_camera;dead_top;dead_bottom;dead_left;dead_right;ai_stage;current_id;is_small;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7101f7c910;FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f87300__7101f87300.c)  [cfg](../decompiled/FUN_7101f87300__7101f87300.mmd)
- **Clone hash:** `5fded580af659a60`

```c

void FUN_7101f87300(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  FUN_7101f7c910(param_1);
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"ai_notify_event",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"status_kind",(long ****)FUN_7101f7ee60,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"motion_kind",(long ****)FUN_7101f7eec0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"ai_deprecated",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_38,(uint *)"range_in",(long ****)FUN_7101f7ef20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"distance_in",(long ****)FUN_7101f7f150,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"other_in",(long ****)FUN_7101f7f380,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_target_vector",(long ****)FUN_7101f7f5b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_safe_fall",(long ****)FUN_7101f7f740,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_safe_fall_current",(long ****)FUN_7101f7f7c0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"find_meteor_target",(long ****)FUN_7101f7f840,ppppbVar1,in_x4,
// ... (410 more lines)
```

## 9. `FUN_71020271a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020271a0`  (offset `0x20271a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020271a0(long param_1)`
- **Size / BBs / Incoming:** 2280 bytes / 4 bb / 2 incoming refs
- **Match values:** hash
- **Strings touched:** EffectModule;req_2d;gauge_parts_on;req_on_joint;req_attach_ground;req_follow;req_continual;remove_continual;remove_all_continual;req_time;req_time_follow;remove_time;remove_all_time;req_emit;remove;remove_all;kill_kind;kill_joint_id;kill_all;detach_all;detach_kind;detach;end_kind;req_after_image;req_after_image_no_parent;clear_all_after_image;remove_after_image;remove_all_after_image;get_local_matrix;set_pos;set_rot;set_scale;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020271a0__71020271a0.c)  [cfg](../decompiled/FUN_71020271a0__71020271a0.mmd)
- **Clone hash:** `a87e10ccfe004d51`

```c

void FUN_71020271a0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"EffectModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71042d72e7,(long ****)FUN_7102017f00,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_2d",(long ****)FUN_71020185f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_on_joint",(long ****)FUN_7102018b10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_attach_ground",(long ****)FUN_71020191e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_follow",(long ****)FUN_7102019980,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_continual",(long ****)FUN_710201a1a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_continual",(long ****)FUN_710201a410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all_continual",(long ****)FUN_710201a540,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time",(long ****)FUN_710201a5f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_time_follow",(long ****)FUN_710201abd0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_time",(long ****)FUN_710201b140,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"remove_all_time",(long ****)FUN_710201b270,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"req_emit",(long ****)FUN_710201b320,ppppbVar1,in_x4,in_x5,in_x6,
// ... (165 more lines)
```

## 10. `FUN_7102ff13c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102ff13c0`  (offset `0x2ff13c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102ff13c0(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 464 bytes / 23 bb / 1 incoming refs
- **Match values:** hash
- **Strings touched:** dys_drumkan_break_set;dys_hashigo_break_set
- **Callers:** FUN_7102fe2c70
- **Callees:** FUN_7102ff1590;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7102ff13c0__7102ff13c0.c)  [cfg](../decompiled/FUN_7102ff13c0__7102ff13c0.mmd)
- **Clone hash:** `d472772c7d1a1705`

```c

void FUN_7102ff13c0(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  ulong uVar2;
  long ****pppplVar3;
  char *pcVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar3 = &local_50;
  pppplVar5 = &local_50;
  *param_1 = param_3;
  param_1[2] = 0;
  puVar9 = param_1 + 1;
  *puVar9 = 0;
  plVar1 = (long *)FUN_710392e290(0x10,0x30,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000030;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0x30,pppplVar3,param_4,param_5,param_6,param_7,
                                          param_8), plVar1 != (long *)0x0)) goto LAB_7102ff1450;
    }
    plVar1 = (long *)0x0;
  }
LAB_7102ff1450:
  ppppbVar6 = (byte ****)(ulong)*(uint *)(param_3 + 0x3c);
  pcVar4 = "dys_drumkan_break_set";
  FUN_7102ff1590(plVar1,param_2,(long *********)"dys_drumkan_break_set",ppppbVar6,param_5,param_6,
                 param_7,param_8);
// ... (56 more lines)
```

