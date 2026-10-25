# phase (funcs=357, hits=960)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=49)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** PHASE;MODE
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

## 2. `FUN_7101e28430`  (hits=29)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e28430`  (offset `0x1e28430`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7101e28430(long param_1, uint param_2, uint param_3, uint param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12340 bytes / 748 bb / 2 incoming refs
- **Match values:** mode
- **Strings touched:** set_parts_list_%02d;set_parts_base_%02d;anim_show_add;icon_add_spirit;mode_empty_03;set_parts_spirit;set_rep_spirit;set_txt_level;mnu_spirits_select_lv;set_parts_icon_super;super;possible_super;lv_hide;set_parts_have;set_parts_icon_favorite;set_parts_icon_using;set_parts_icon_condition;set_parts_icon_counter;set_parts_icon_new;set_txt_num_slot;set_txt_num_status;icon_add_base;set_parts_icon_base;spirit_supporter;spirit_attacker_offense;set_parts_atr_icon;set_parts_class_legend;set_parts_class_ace;set_parts_class_hope;set_parts_class_none;cost_00;slot_00;...
- **Callers:** FUN_7101916c60;FUN_7101e1b7f0
- **Callees:** FUN_7101e2b470;FUN_71024076d0;FUN_710259c150;FUN_710323faf0;FUN_71032a9470;FUN_7103313f20;FUN_710339dde0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a280;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memmove;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_7101e28430__7101e28430.c)  [cfg](../decompiled/FUN_7101e28430__7101e28430.mmd)
- **Clone hash:** `98373f18b6cf47ba`

```c

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_7101e28430(long param_1,uint param_2,uint param_3,uint param_4,long ****param_5,
              undefined8 param_6,ulong param_7,undefined8 param_8)

{
  short sVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  size_t sVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  undefined1 uVar12;
  char *pcVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  uint uVar20;
  byte *pbVar21;
  long ***ppplVar22;
  ushort *puVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint *puVar30;
  undefined8 *puVar31;
  uint uVar32;
// ... (2413 more lines)
```

## 3. `FUN_7101b69480`  (hits=29)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** mode
- **Strings touched:** p%d_2;face_bg;set_dmg_p;dig_0_restore_1;dig_0_restore_2;dig_0_restore_3;dig_1_restore_1;dig_1_restore_2;dig_1_restore_3;dig_2_restore_1;dig_2_restore_2;dig_2_restore_3;dig_3_restore_1;dig_3_restore_2;dig_3_restore_3;dig_dec_01_restore_1;dig_dec_01_restore_2;dig_dec_01_restore_3;num_1;num_2;num_3;num_dec_01;stock;spirits_type;face_bg_anim;charge_bar;charge;charge_max_off;charge_max_00;charge_down;charge_lose;limit;...
- **Callers:** FUN_710139b550;FUN_7101b7a8f0;FUN_7101b7c510;FUN_7101b7c5e0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;FUN_7101764000;FUN_71019c1c50;FUN_7101b73260;FUN_7101b781b0;FUN_7101b80180;FUN_7101b86760;FUN_7101b8b370;FUN_7103240d30;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;...
- **Files:** [decomp](../decompiled/FUN_7101b69480__7101b69480.c)  [cfg](../decompiled/FUN_7101b69480__7101b69480.mmd)
- **Clone hash:** `61e8c613c05a7329`

```c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101b69480(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long ***ppplVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *********ppppppppplVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long ***ppplVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  char cVar28;
  uint uVar29;
  long ****pppplVar30;
  long *plVar31;
  long lVar32;
  int iVar33;
// ... (7644 more lines)
```

## 4. `FUN_7101f89310`  (hits=28)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** PHASE;Mode;mode
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

## 5. `FUN_7102053700`  (hits=26)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102053700`  (offset `0x2053700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102053700(long param_1)`
- **Size / BBs / Incoming:** 2976 bytes / 5 bb / 2 incoming refs
- **Match values:** mode
- **Strings touched:** LinkModule;unlink_all;TRANS_A_JUMP_AERIAL;unlink_node;unlink_node_all;unlink;is_link;is_linked;get_parent_id;search_parent;search_parent_attr;search_node;send_event_parents;send_event_parents_struct;send_event_nodes_struct;send_event_nodes;gauge_parts_on;send_event_nodes_throw;get_node_object_id;is_node_damage_reaction;is_node_damage_capture_cut;chk_link_stop;is_valid_link_stop;chk_link_visibility;get_link_scale;is_link_pos;update_link_pos;get_link_speed;get_parent_scale;get_parent_model_joint_global_position;get_parent_model_joint_global_position_with_offset;get_parent_model_joint_global_rotation;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102053700__7102053700.c)  [cfg](../decompiled/FUN_7102053700__7102053700.mmd)
- **Clone hash:** `53dd4240d40ab971`

```c

void FUN_7102053700(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"LinkModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104317776,(long ****)FUN_7102048870,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unlink_all",(long ****)FUN_71020489e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unlink_node",(long ****)FUN_7102048a90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unlink_node_all",(long ****)FUN_7102048bc0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unlink",(long ****)FUN_7102048c70,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_link",(long ****)FUN_7102048da0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_linked",(long ****)FUN_7102048ef0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_parent_id",(long ****)FUN_7102049040,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"search_parent",(long ****)FUN_7102049230,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"search_parent_attr",(long ****)FUN_7102049380,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"search_node",(long ****)FUN_71020494d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"send_event_parents",(long ****)FUN_7102049620,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"send_event_parents_struct",(long ****)FUN_7102049770,ppppbVar1,
// ... (223 more lines)
```

## 6. `FUN_7101f7c910`  (hits=19)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f7c910`  (offset `0x1f7c910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f7c910(long param_1)`
- **Size / BBs / Incoming:** 9552 bytes / 4 bb / 1 incoming refs
- **Match values:** phase;mode
- **Strings touched:** entry_id;target_id;is_valid_target;fighter_kind;copy_fighter_kind;cp_type;cp_flag;cp_slide_type;act_id;prev_act_id;current_attack_start_frame;current_attack_end_frame;current_attack_combo_end_frame;current_attack_cancel_frame;uniq_stat;attack_phase;check_stat_air;gauge_parts_on;check_stat_build_max;check_stat_build_up;check_stat_rush;check_stat_gorogoro;check_stat_attention;check_stat_weapon_op;check_stat_final;check_stat_final_act;check_stat_dead;check_stat_loupe;check_stat_invincible;check_stat_invincible_l;check_stat_attack_catch;check_stat_passfall;...
- **Callers:** FUN_7101f87300
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f7c910__7101f7c910.c)  [cfg](../decompiled/FUN_7101f7c910__7101f7c910.mmd)
- **Clone hash:** `5cbcaf3ca088c644`

```c

void FUN_7101f7c910(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)&DAT_7104292596,0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"entry_id",(long ****)FUN_7101f6f3a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71042f4a4b,(long ****)FUN_7101f6f3e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"target_id",(long ****)FUN_7101f6f420,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_valid_target",(long ****)FUN_7101f6f480,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_kind",(long ****)FUN_7101f6f500,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"copy_fighter_kind",(long ****)FUN_7101f6f530,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_71043cfd26,(long ****)FUN_7101f6f560,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_type",(long ****)FUN_7101f6f590,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_flag",(long ****)FUN_7101f6f5c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_slide_type",(long ****)FUN_7101f6f5f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"act_id",(long ****)FUN_7101f6f620,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"prev_act_id",(long ****)FUN_7101f6f650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (772 more lines)
```

## 7. `FUN_71037f8180`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Mode
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_71037f8180__71037f8180.c)  [cfg](../decompiled/FUN_71037f8180__71037f8180.mmd)
- **Clone hash:** `5e5bcf3c984ab2cc`

```c

void FUN_71037f8180(undefined8 param_1,undefined *param_2)

{
  DAT_71059408e8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71059408f0 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71059408f8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_7105940900 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_7105940908 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_7105940910 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_7105940918 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_7105940920 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_7105940928 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_7105940930 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_7105940938 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_7105940940 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_7105940948 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_7105940950 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_7105940958 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_7105940960 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_7105940968 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_7105940970 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_7105940978 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_7105940980 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_7105940988 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_7105940990 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_7105940998 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71059409a0 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71059409a8 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71059409b0 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71059409b8 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71059409c0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71059409c8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71059409d0 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71059409d8 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71059409e0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71059409e8 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71059409f0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71059409f8 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_7105940a00 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 8. `FUN_7100033a40`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Mode
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_7100033a40__7100033a40.c)  [cfg](../decompiled/FUN_7100033a40__7100033a40.mmd)
- **Clone hash:** `f1d8c7f827926111`

```c

void FUN_7100033a40(undefined8 param_1,undefined *param_2)

{
  DAT_71052aa310 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71052aa318 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71052aa320 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_71052aa328 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_71052aa330 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_71052aa338 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_71052aa340 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_71052aa348 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_71052aa350 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_71052aa358 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_71052aa360 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_71052aa368 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_71052aa370 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_71052aa378 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_71052aa380 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_71052aa388 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_71052aa390 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_71052aa398 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_71052aa3a0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_71052aa3a8 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_71052aa3b0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_71052aa3b8 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_71052aa3c0 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71052aa3c8 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71052aa3d0 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71052aa3d8 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71052aa3e0 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71052aa3e8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71052aa3f0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71052aa3f8 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71052aa400 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71052aa408 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71052aa410 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71052aa418 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71052aa420 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_71052aa428 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 9. `FUN_7101ca4730`  (hits=14)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ca4730`  (offset `0x1ca4730`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ca4730(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3856 bytes / 168 bb / 2 incoming refs
- **Match values:** mode
- **Strings touched:** set_itemstat_%02d;set_parts_items_%02d;type_others;type_item;selector_select;set_parts_mode_00;mode_empty_03;set_parts_mode_01;item_off;item_on;selector_edit;set_parts_category_%02d;mode_other;mode_item;set_btn_decide;selector_guide;btn_init
- **Callers:** FUN_71018821d0;FUN_71018861b0
- **Callees:** FUN_710062dc20;FUN_7101989a30;FUN_7101a7ed70;FUN_7101c9f4e0;FUN_7101ca10c0;FUN_7101ca2e30;FUN_7101ca2e40;FUN_710337dab0;FUN_710337dac0;FUN_710376b960;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771d60;FUN_7103776640;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101ca4730__7101ca4730.c)  [cfg](../decompiled/FUN_7101ca4730__7101ca4730.mmd)
- **Clone hash:** `b8c17ff78b24d1a3`

```c

void FUN_7101ca4730(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  byte ***pppbVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  byte ****ppppbVar8;
  long *plVar9;
  byte **ppbVar10;
  code *pcVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  byte ***local_420;
  byte ***local_418;
  undefined8 local_410;
  undefined1 *local_408;
  byte ****local_400;
  long alStack_3f0 [4];
  long *local_3d0;
  long alStack_3c0 [4];
  long *local_3a0;
  long alStack_390 [4];
  long *local_370;
  long alStack_360 [4];
  long *local_340;
  long alStack_330 [4];
  long *local_310;
// ... (628 more lines)
```

## 10. `FUN_7101856ad0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101856ad0`  (offset `0x1856ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101856ad0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10044 bytes / 503 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** selector;selector_01;set_txt_modecategory;mnu_local_new_rm_oth_btn_01;pic_100;mark_100;set_txt_mode;mnu_local_new_rm_mel_btn_02;pic_verious;mark_verious;mnu_local_new_rm_oth_btn_03;pic_nasake;mark_nasake;mnu_local_new_rm_mel_btn_00;pic_melee;mark_melee;mnu_local_new_rm_mel_btn_03;pic_ssdn;mark_ssdn;mnu_local_new_rm_mel_btn_top;mode_melee;mnu_local_new_rm_oth_btn_02;pic_all;mark_all;mode_standard;set_txt_mode_off;set_txt_mode_on;ly01_melee;ly02_standard
- **Callees:** FUN_71000001c0;FUN_7101696040;FUN_7101764000;FUN_71017a3910;FUN_71017ab0c0;FUN_71017dcc40;FUN_7101989a30;FUN_7101a7ed70;FUN_7101bdd9d0;FUN_7101bddb60;FUN_7101bddd60;FUN_7101bddd70;FUN_7101bddf10;FUN_7101bddf20;FUN_7101bde0e0;FUN_7101bde0f0;...
- **Files:** [decomp](../decompiled/FUN_7101856ad0__7101856ad0.c)  [cfg](../decompiled/FUN_7101856ad0__7101856ad0.mmd)
- **Clone hash:** `6b77f552b7a3c4ed`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101856ad0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined6 uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong *puVar30;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
// ... (6550 more lines)
```

## 11. `FUN_7101fa11c0`  (hits=13)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** mode
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

## 12. `FUN_710226f500`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** mode
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

## 13. `FUN_710225b990`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** PHASE;MODE
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

## 14. `FUN_7102192760`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** MODE
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

## 15. `FUN_7101f87300`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f87300`  (offset `0x1f87300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f87300(long param_1)`
- **Size / BBs / Incoming:** 5008 bytes / 47 bb / 2 incoming refs
- **Match values:** phase;mode
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

## 16. `FUN_7101b86760`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b86760`  (offset `0x1b86760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b86760(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10356 bytes / 585 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** material_off;material_pos_2;material_pos_2_3;material_pos_3;last_material_2;last_material_3;craft_anim_on;craft_anim_off;craft_anim_g_on;craft_anim_g_off;mode_empty_03;set_lct_bar_00;line_00_size;line_00_get_size;line_00_color;get_anim;lose_anim;set_lct_bar_01;set_lct_bar_02;set_lct_bar_03;line_on;line_off;set_lct_bar_03_hl;craft_size;black_line
- **Callers:** FUN_7101b69480
- **Callees:** FUN_7101b88fe0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_710377b140;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101b86760__7101b86760.c)  [cfg](../decompiled/FUN_7101b86760__7101b86760.mmd)
- **Clone hash:** `4ace5d3958e623b3`

```c

void FUN_7101b86760(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
// ... (2021 more lines)
```

## 17. `FUN_7103583110`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103583110`  (offset `0x3583110`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103583110(long param_1, undefined8 param_2, undefined8 param_3, char * param_4, byte * * * * param_5, byte * * * * param_6, byte * * * * param_7, long * * * * param_8)`
- **Size / BBs / Incoming:** 7376 bytes / 383 bb / 1 incoming refs
- **Match values:** Mode
- **Strings touched:** MiiModelRenderer::render
- **Callees:** FUN_7103554700;FUN_7103555dc0;FUN_7103578130;FUN_71035b9760;FUN_710363fa50;FUN_710381be50;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::std::mutex::lock;<EXTERNAL>::std::mutex::unlock;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7103583110__7103583110.c)  [cfg](../decompiled/FUN_7103583110__7103583110.mmd)
- **Clone hash:** `2e31524e1b876836`

```c

void FUN_7103583110(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                   byte ****param_5,byte ****param_6,byte ****param_7,long ****param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  long ****pppplVar15;
  char *pcVar16;
  long ****pppplVar17;
  long lVar18;
  ulong uVar19;
  long ***ppplVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  void *pvVar24;
  long *plVar25;
  long ****__n;
// ... (1557 more lines)
```

## 18. `FUN_7101ce2ec0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce2ec0`  (offset `0x1ce2ec0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce2ec0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, byte * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 8832 bytes / 379 bb / 2 incoming refs
- **Match values:** mode
- **Strings touched:** set_txt_header;mode_%02d;set_parts_det_panel;con_off_mode_%02d;set_parts_btn_00;set_parts_btn_01;mode_01;mode_00;set_parts_btn_like;set_txt_subtitle;mnu_share_data_title;set_txt_time;set_txt_mov_ver;mnu_share_detail_movie_kind_edited;set_txt_world_pw_num;mnu_share_detail_spectate_highest_world_pw_n;mnu_share_detail_movie_kind_replay;set_rep_pic_stk;gray_off;mf_clr_in_%02d;mf_typ_icn_in_00;mf_typ_icn_in_02;stg4p_icn_on;stg4p_icn_off;mstg_l;mstg_s;mstg_m;set_txt_stage_00;mnu_share_detail_stage_music;bgm_title_%s;set_parts_text_scroll_00;set_txt_mask;...
- **Callers:** FUN_7101ce1a40
- **Callees:** FUN_71003a4ca0;FUN_71004f5770;FUN_710062dc20;FUN_710143c4d0;FUN_71016bc6e0;FUN_7101cdfdf0;FUN_7101ce1050;FUN_7101ce5290;FUN_7101ce5ab0;FUN_710323f330;FUN_71032570e0;FUN_7103262310;FUN_71032631a0;FUN_71032632a0;FUN_7103264590;FUN_71032648e0;...
- **Files:** [decomp](../decompiled/FUN_7101ce2ec0__7101ce2ec0.c)  [cfg](../decompiled/FUN_7101ce2ec0__7101ce2ec0.mmd)
- **Clone hash:** `1e0769d17abe3306`

```c

void FUN_7101ce2ec0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   byte ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  uint6 uVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  char *pcVar24;
  long ****pppplVar25;
  undefined ***pppuVar26;
  long *********ppppppppplVar27;
  byte ****ppppbVar28;
  byte ****ppppbVar29;
  long *plVar30;
// ... (1796 more lines)
```

## 19. `FUN_71021c4020`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021c4020`  (offset `0x21c4020`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021c4020(void)`
- **Size / BBs / Incoming:** 14396 bytes / 28 bb / 1 incoming refs
- **Match values:** PHASE
- **Strings touched:** FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_START;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MAP_COLL_FRAME_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_MAG;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_MAG_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_SLOW_COUNT_PREV;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_PUNCH_KIND_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_MOTION_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_WAIT_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPECIAL_LW_DISABLE_PASS_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_SPIRAL_OBJECT_ID;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REFLECTOR_ATTACK_HI4_HITSTOP_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REFLECTOR_ATTACK_HI4_HITSTOP_ID;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ARM_L_BIG_FRAME;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_L;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_REINFORCE_L_EFFECT_HANDLE_R;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_CATCH_START_COUNT;FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_LUA_TEMP_MOTION_KIND_HOLD;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021c4020__71021c4020.c)  [cfg](../decompiled/FUN_71021c4020__71021c4020.mmd)
- **Clone hash:** `b74f5de86553eaa1`

```c

void FUN_71021c4020(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_LEG",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_L",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MOTION_KIND_R",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_2ND_PART_SET",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_BOTH_RESTRICT_FRAME",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_STRANS_OFF_FRAME",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_HOLD_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_NEXT_STATUS",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_TANTAN_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME",
// ... (1597 more lines)
```

## 20. `FUN_7101db8810`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101db8810`  (offset `0x1db8810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101db8810(undefined1[16] param_1, long * * * * * * * * param_2, undefined8 * param_3, undefined8 param_4, undefined8 param_5, byte * * * * param_6, long * * * * param_7, undefined8 * param_8, long * * * param_9, long * * * param_10)`
- **Size / BBs / Incoming:** 13408 bytes / 669 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** fighter_cp_boss;fighter_cp_default;fighter_cp_light;fighter_cp_dark;spi_%s;nam_chr1_%02d_%s;set_parts_hbg_00;spirit_null;set_parts_bg_00;set_txt_fighter_00;mode_empty_03;set_parts_spirit_name_00;set_txt_help;attacker;set_parts_hbg_01;set_parts_bg_01;campaign_boss;campaign_light;anim_in;anim_loop;set_txt_fighter_01;cam_info_piece_boss_unknown;set_txt_spirit_01;set_parts_spirit_name_02;supporter;mnu_spirits_challengeboard_detail_target_fighter;set_parts_spirit_name_01;set_parts_spirit_00;set_parts_spirit_01;spirit_cp_show;spirit_cp_hide;set_rep_fighter_00;...
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710175dfc0;FUN_7101764000;FUN_7101dbbf10;FUN_71024076d0;FUN_7102499260;FUN_71024999d0;FUN_7102510850;FUN_71025ae6d0;FUN_71025b12c0;FUN_71025b39a0;FUN_7103238a70;FUN_710323c4e0;FUN_710323f330;FUN_710323faf0;...
- **Files:** [decomp](../decompiled/FUN_7101db8810__7101db8810.c)  [cfg](../decompiled/FUN_7101db8810__7101db8810.mmd)
- **Clone hash:** `eb5aaa5112c257e3`

```c

void FUN_7101db8810(undefined1 param_1 [16],long ********param_2,undefined8 *param_3,
                   undefined8 param_4,undefined8 param_5,byte ****param_6,long ****param_7,
                   undefined8 *param_8,long ***param_9,long ***param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  long ***ppplVar8;
  byte ***pppbVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long ****pppplVar15;
  byte **ppbVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long **pplVar20;
  long lVar21;
  byte ***pppbVar22;
  long ***ppplVar23;
  undefined1 uVar24;
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
// ... (2275 more lines)
```

## 21. `FUN_71035c7aa0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035c7aa0`  (offset `0x35c7aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71035c7aa0(void)`
- **Size / BBs / Incoming:** 37772 bytes / 2031 bb / 2 incoming refs
- **Match values:** MODE;mode
- **Strings touched:** model.numdlb;model.numatb;model.numshexb;model.adjb;NODE_SILHOUETTE_FAR_MASK_MODEL;NODE_MAIN_0;NODE_SILHOUETTE_FAR_DRAW_MODEL;item_silhouette_opaque;NODE_PRE_REFRACT_BLEND;NODE_MIRROR;depth_only_a_sort;NODE_MAIN_0_FORCE_OPAQUE;player_id;SystemConstantNonTexture;Waist;NODE_INVINCIBLE_PARTS_MODEL;SFX_vision;AuroraVision;_USE_OFFSCREEN;_UI_OFFSCREEN;_RES_OFFSCREEN;OffscreenRTV;OffscreenSRV
- **Callees:** nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance;FUN_7102677830;FUN_7103540a00;FUN_7103540b10;FUN_7103541e10;FUN_7103550630;FUN_710356a030;FUN_710356bf30;FUN_710356bff0;FUN_7103593520;FUN_710359b630;FUN_71035a2940;FUN_71035a2ac0;FUN_71035c25f0;FUN_71035d78f0;FUN_71035d7c50;...
- **Files:** [decomp](../decompiled/FUN_71035c7aa0__71035c7aa0.c)  [cfg](../decompiled/FUN_71035c7aa0__71035c7aa0.mmd)
- **Clone hash:** `d0fb3af57b695258`

```c

/* WARNING: Removing unreachable block (ram,0x0071035cc748) */
/* WARNING: Removing unreachable block (ram,0x0071035cc74c) */
/* WARNING: Removing unreachable block (ram,0x0071035cc754) */
/* WARNING: Removing unreachable block (ram,0x0071035cc75c) */
/* WARNING: Removing unreachable block (ram,0x0071035cc760) */
/* WARNING: Removing unreachable block (ram,0x0071035cc29c) */
/* WARNING: Removing unreachable block (ram,0x0071035cc2a0) */
/* WARNING: Removing unreachable block (ram,0x0071035cc2a8) */
/* WARNING: Removing unreachable block (ram,0x0071035cc2b0) */
/* WARNING: Removing unreachable block (ram,0x0071035cc2b4) */
/* WARNING: Removing unreachable block (ram,0x0071035cd390) */
/* WARNING: Removing unreachable block (ram,0x0071035cd394) */
/* WARNING: Removing unreachable block (ram,0x0071035cd39c) */
/* WARNING: Removing unreachable block (ram,0x0071035cd3a4) */
/* WARNING: Removing unreachable block (ram,0x0071035cd3a8) */
/* WARNING: Removing unreachable block (ram,0x0071035cf838) */
/* WARNING: Removing unreachable block (ram,0x0071035cf83c) */
/* WARNING: Removing unreachable block (ram,0x0071035cf844) */
/* WARNING: Removing unreachable block (ram,0x0071035cf84c) */
/* WARNING: Removing unreachable block (ram,0x0071035cf850) */
/* WARNING: Removing unreachable block (ram,0x0071035cf88c) */
/* WARNING: Removing unreachable block (ram,0x0071035cc2f8) */
/* WARNING: Removing unreachable block (ram,0x0071035cc2fc) */
/* WARNING: Removing unreachable block (ram,0x0071035cc300) */
/* WARNING: Removing unreachable block (ram,0x0071035cc30c) */
/* WARNING: Removing unreachable block (ram,0x0071035cc324) */
/* WARNING: Removing unreachable block (ram,0x0071035cc334) */
/* WARNING: Removing unreachable block (ram,0x0071035cc340) */
/* WARNING: Removing unreachable block (ram,0x0071035cc35c) */
/* WARNING: Removing unreachable block (ram,0x0071035cc364) */
/* WARNING: Removing unreachable block (ram,0x0071035cc3a0) */
/* WARNING: Removing unreachable block (ram,0x0071035cc350) */
/* WARNING: Removing unreachable block (ram,0x0071035cc3a4) */
/* WARNING: Removing unreachable block (ram,0x0071035cc3ac) */
/* WARNING: Removing unreachable block (ram,0x0071035cc358) */
/* WARNING: Removing unreachable block (ram,0x0071035cc3c0) */
/* WARNING: Removing unreachable block (ram,0x0071035ccca8) */
/* WARNING: Removing unreachable block (ram,0x0071035cccac) */
/* WARNING: Removing unreachable block (ram,0x0071035cccb4) */
// ... (8516 more lines)
```

## 22. `FUN_7101cf2f80`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cf2f80`  (offset `0x1cf2f80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cf2f80(long * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1764 bytes / 64 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** set_txt_modename;mnu_share_data_kind_team;set_txt_modename_00;mnu_share_data_kind_1on1;mnu_share_data_kind_melee;mnu_share_data_kind_other;set_txt_time;set_rep_stockicon_%02d_;set_rep_stockicon_%02d;stockicon%02d
- **Callers:** FUN_7101cbefe0
- **Callees:** FUN_710062dc20;FUN_7101cf3670;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_710377a310;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error
- **Files:** [decomp](../decompiled/FUN_7101cf2f80__7101cf2f80.c)  [cfg](../decompiled/FUN_7101cf2f80__7101cf2f80.mmd)
- **Clone hash:** `c9421520ffa51851`

```c

void FUN_7101cf2f80(long *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  long ****pppplVar12;
  long *********ppppppppplVar13;
  ulong uVar14;
  byte ****ppppbVar15;
  int *piVar16;
  long ***ppplVar17;
  long lVar18;
  ulong uVar19;
  char cVar20;
  long lVar21;
  undefined1 *puVar22;
  int *__dest;
  long lVar23;
  long ****pppplVar24;
  long ****pppplVar25;
  long lVar26;
  long ***local_108;
  ulong local_100 [8];
  undefined **local_c0;
  ulong local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  undefined **local_98;
// ... (297 more lines)
```

## 23. `FUN_71018d5f60`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018d5f60`  (offset `0x18d5f60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018d5f60(long param_1)`
- **Size / BBs / Incoming:** 9468 bytes / 431 bb / 1 incoming refs
- **Match values:** MODE;mode
- **Strings touched:** SCENE_EXIT_CODE_ORE_SOUND;SCENE_EXIT_CODE_TEST;BUTTON_ID_MODE;BUTTON_ID_PLAY_ALL;BUTTON_ID_SOUND_TYPE;BUTTON_ID_BGM;BUTTON_ID_SE;BUTTON_ID_VOICE;BUTTON_ID_EXIT_MENU;BUTTON_ID_OK;MODE_TELEVISION;MODE_PORTABLE;MODE_HEADPHONE;MODE_NUM;SOUND_TYPE_LOW;SOUND_TYPE_NORMAL;SOUND_TYPE_HIGH;SOUND_TYPE_NUM;SOUND_TYPE_DEFAULT;VOLUME_MIN;VOLUME_MAX;VOLUME_DEFAULT;EXIT_MENU_ORE_SOUND;EXIT_MENU_TEST;EXIT_MENU_SAVE;set_edited_setting_data;update_edited_sound_type;update_edited_bgm_volume;mode_empty_03;update_edited_se_volume;update_edited_voice_volume;is_not_change;...
- **Callers:** FUN_71018d8700
- **Callees:** FUN_7101d533a0;FUN_710323beb0;FUN_710323cb80;FUN_71032cad20;FUN_71032caea0;FUN_71032cb040;FUN_7103375650;FUN_7103376af0;FUN_7103377130;FUN_7103778630;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_71018d5f60__71018d5f60.c)  [cfg](../decompiled/FUN_71018d5f60__71018d5f60.mmd)
- **Clone hash:** `68f47fc0c6870ce0`

```c

void FUN_71018d5f60(long param_1)

{
  int *piVar1;
  long *******ppppppplVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long ***ppplVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar13;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar14;
  undefined **ppuVar15;
  char *pcVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar19;
  ulong uVar20;
  long ********pppppppplVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long ****pppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ****pppplVar27;
  long *plVar28;
  long *******ppppppplVar29;
  undefined8 local_d8;
// ... (1936 more lines)
```

## 24. `FUN_7101bbcca0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bbcca0`  (offset `0x1bbcca0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101bbcca0(void)`
- **Size / BBs / Incoming:** 1520 bytes / 67 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** mode_empty_03;type_master;extra_off;replace;set_rep_00;set_rep_01
- **Callees:** FUN_7101bbd2b0;FUN_710323f8d0;FUN_710327fb30;FUN_7103776910;FUN_7103778300;FUN_7103778b80;FUN_7103796f20;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101bbcca0__7101bbcca0.c)  [cfg](../decompiled/FUN_7101bbcca0__7101bbcca0.mmd)
- **Clone hash:** `0f7014ffbb53fb45`

```c

void FUN_7101bbcca0(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long *********ppppppppplVar5;
  long ****pppplVar6;
  long lVar7;
  long lVar8;
  long ****pppplVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  ulong uVar13;
  long ***ppplStack_68;
  ulong uStack_60;
  undefined4 uStack_54;
  
  uVar1 = *(uint *)(param_1 + 0xb74);
  switch(uVar1) {
  case 0:
    plVar2 = (long *)(param_1 + 0xa58);
    pcVar10 = "type_off";
    break;
  case 1:
    plVar2 = (long *)(param_1 + 0xa70);
    pcVar10 = "type_monster";
    break;
  case 2:
    plVar2 = (long *)(param_1 + 0xa88);
    pcVar10 = "type_assist";
    break;
  case 3:
    plVar2 = (long *)(param_1 + 0xaa0);
    pcVar10 = "type_master";
    break;
// ... (186 more lines)
```

## 25. `FUN_71018b3d90`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018b3d90`  (offset `0x18b3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018b3d90(long param_1, long param_2)`
- **Size / BBs / Incoming:** 7432 bytes / 295 bb / 1 incoming refs
- **Match values:** mode
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

## 26. `FUN_7101b8eb50`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b8eb50`  (offset `0x1b8eb50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b8eb50(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 21428 bytes / 1014 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** view_pause_camera;view_pause_replay;view_pause_record_edit;view_play;view_off;mode_empty_03;view_pause_camera_get;mode_gc;mode_joycon_single;view_pause_record;view_play_edit;view_pause_camera_vr;mode_other;camera_disable;mode_other_vr;frame_disable;capture_disable;set_btn1_00;set_txt_name;set_btn1_01;set_txt_num;set_btn1_02;set_btn1_04;txt_btn_end_bg;txt_btn_end;txt_btn_capture;txt_btn_scale;txt_btn_scale_gc;txt_btn_turn;txt_btn_turn_gc;txt_btn_shift;txt_btn_shift_gc;...
- **Callers:** FUN_7101b95680
- **Callees:** FUN_7101414b10;FUN_7101b93f10;FUN_71032cbf30;FUN_7103773200;FUN_71037760f0;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_7103776ad0;FUN_71037780e0;FUN_710377a750;FUN_710377b140;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;...
- **Files:** [decomp](../decompiled/FUN_7101b8eb50__7101b8eb50.c)  [cfg](../decompiled/FUN_7101b8eb50__7101b8eb50.mmd)
- **Clone hash:** `51fdbad6380f2cf4`

```c

void FUN_7101b8eb50(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
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
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
// ... (4271 more lines)
```

## 27. `FUN_71018a82a0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018a82a0`  (offset `0x18a82a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018a82a0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 32452 bytes / 1538 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** selector_00;set_parts_search;selector_01;set_parts_l_btn;set_parts_r_btn;selector_03;set_parts_btn_tab_0_%02d;mode_%02d;txtlight_on;txtlight_off;selector_02;scr_sort;shift_01_to_00;indent_off;set_parts_btn_search_00;set_parts_btn_search_01;set_parts_btn_search_02;mnu_share_detail_owner_unfollow;mnu_share_detail_owner_profile;out_r;turn_on;turn_off;set_parts_load;blinder;guide_origin;guide_width;guide_height;scr_item_00;set_parts_scr_0_%02d;size_m;size_l;scr_knob_00;...
- **Callers:** FUN_71018b0880
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_710062dc20;FUN_7101989a30;FUN_71019c1c50;FUN_7101a7ed70;FUN_7101ca5760;FUN_7101ca72f0;FUN_7101ca82b0;FUN_7101cabde0;FUN_7101cc1340;FUN_7101cd5940;FUN_7101cd74e0;FUN_7101cdf490;FUN_7101cef780;FUN_7101cef850;...
- **Files:** [decomp](../decompiled/FUN_71018a82a0__71018a82a0.c)  [cfg](../decompiled/FUN_71018a82a0__71018a82a0.mmd)
- **Clone hash:** `87ba63e6b2da7fa3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018a82a0(long param_1,long param_2)

{
  long **pplVar1;
  long *******ppppppplVar2;
  byte **ppbVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  long ***ppplVar11;
  long ********pppppppplVar12;
  byte ***pppbVar13;
  bool bVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  byte **ppbVar19;
  void *__dest;
  byte ***pppbVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long *plVar23;
  long *******ppppppplVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
// ... (5839 more lines)
```

## 28. `FUN_7101d8d450`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d8d450`  (offset `0x1d8d450`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d8d450(long param_1, undefined8 param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2100 bytes / 106 bb / 5 incoming refs
- **Match values:** mode
- **Strings touched:** set_parts_param_03;nextlevel;mnu_spirits_raise_next_lv;set_bar_exp;set_txt_next_lv_exp;mode_empty_03;set_txt_lv_add;set_bar_exp_add;mnu_spirits_raise_lv;mnu_spirits_raise_exp_add_n;set_txt_exp_add;mnu_spirits_raise_exp_next_n
- **Callers:** FUN_7101908f00;FUN_7101909ab0;FUN_7101d89d00;FUN_7101d8fed0;FUN_7101d91820
- **Callees:** FUN_71025c9ac0;FUN_71025c9e50;FUN_710373b540;FUN_7103776640;FUN_7103776910;FUN_710377a120;FUN_710377a280;FUN_710392eb40;FUN_71039602c0
- **Files:** [decomp](../decompiled/FUN_7101d8d450__7101d8d450.c)  [cfg](../decompiled/FUN_7101d8d450__7101d8d450.mmd)
- **Clone hash:** `af3de1e30170f27c`

```c

void FUN_7101d8d450(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined2 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined **local_b0;
  long *local_a8;
  undefined **local_a0;
  long *local_98;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  ulong local_78;
  
// ... (352 more lines)
```

## 29. `FUN_7102182bb0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102182bb0`  (offset `0x2182bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102182bb0(void)`
- **Size / BBs / Incoming:** 12184 bytes / 19 bb / 1 incoming refs
- **Match values:** PHASE;MODE
- **Strings touched:** FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_EXTEND_BUFFER;FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TWINKLE_AIR_EFFECT_HANDLE;FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TERM;WEAPON_DIDDY_EXPLOSION_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_MOTION_RATE;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_AIR_SPECIAL_LW;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_REBIRTH_XLU;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_ENTRY;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_GENERATE_TICO_ON_START;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_COMBINE_JOSTLE;FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_ROSETTA_LINK_NO_START;FIGHTER_ROSETTA_LINK_NO_TICO;FIGHTER_ROSETTA_LINK_NO_TERM;FIGHTER_ROSETTA_CLIFF_HANG_DATA_DEFAULT;FIGHTER_ROSETTA_CLIFF_HANG_DATA_SPECIAL_HI_JUMP;FIGHTER_ROSETTA_CLIFF_HANG_DATA_SPECIAL_HI_END;FIGHTER_ROSETTA_CLIFF_HANG_DATA_TERM;FIGHTER_ROSETTA_AREA_KIND_START;FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_SEARCH;FIGHTER_ROSETTA_AREA_KIND_SPECIAL_LW_ITEM_PICKUP;FIGHTER_ROSETTA_AREA_KIND_TERM;FIGHTER_ROSETTA_AREA_KIND_NUM;FIGHTER_ROSETTA_KINETIC_ENERGY_ID_START;FIGHTER_ROSETTA_KINETIC_ENERGY_ID_TERM;FIGHTER_KINETIC_TYPE_ROSETTA_START;FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_N;FIGHTER_KINETIC_TYPE_ROSETTA_SPECIAL_AIR_N;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102182bb0__7102182bb0.c)  [cfg](../decompiled/FUN_7102182bb0__7102182bb0.mmd)
- **Clone hash:** `bfd7b1f8583a126f`

```c

void FUN_7102182bb0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_EXTEND_BUFFER",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TWINKLE_AIR_EFFECT_HANDLE",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_68 = 0xfffffffd;
  local_78 = 0;
  local_70 = 0;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_START",(undefined **)0x4b
                 ,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_SPECIAL_N_CHARGE_MOTION_RATE",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLOAT_TERM",(undefined **)0x4d,
                 in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_START",
                 (undefined **)0x200000df,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_ROSETTA_INSTANCE_WORK_ID_FLAG_AIR_SPECIAL_LW",
// ... (1350 more lines)
```

## 30. `FUN_7101ac4ba0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac4ba0`  (offset `0x1ac4ba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac4ba0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6728 bytes / 295 bb / 4 incoming refs
- **Match values:** mode
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

## 31. `FUN_7102164700`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102164700`  (offset `0x2164700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102164700(void)`
- **Size / BBs / Incoming:** 10172 bytes / 7 bb / 1 incoming refs
- **Match values:** MODE
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

## 32. `FUN_7101ce5ab0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ce5ab0`  (offset `0x1ce5ab0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ce5ab0(long param_1, undefined8 * param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5476 bytes / 241 bb / 2 incoming refs
- **Match values:** mode
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

## 33. `FUN_7101de7f20`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101de7f20`  (offset `0x1de7f20`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7101de7f20(long param_1, long * param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * * param_7, ulong param_8)`
- **Size / BBs / Incoming:** 12192 bytes / 614 bb / 5 incoming refs
- **Match values:** mode
- **Strings touched:** set_parts_sl0_btn_00;set_txt_00;pop_btn_back;pop_btn_no;set_parts_sl0_btn_01;pop_btn_yes;set_parts_icon_base_%02d;set_txt_%02d;mnu_spirits_return_confirm_n_%02d;set_parts_sp_icon_txt;set_txt_help;mnu_spirits_return_confirm_sp;view_num_%02d;set_parts_%02d;mode_empty_03;set_parts_spirit;view_sort_level;set_parts_atr_icon;set_txt_level;mnu_spirits_select_lv;set_txt_level_max;set_parts_icon_super;super;possible_super;lv_hide;lv_max;pre_super;lv_normal;set_rep_spirit;set_parts_class_legend;class_legend;set_parts_class_ace;...
- **Callers:** FUN_7101956360;FUN_71019567d0;FUN_710195cc40;FUN_710195cdf0;FUN_7101deba90
- **Callees:** FUN_71003a4ca0;FUN_7101958040;FUN_7101dfe6f0;FUN_7101e02dc0;FUN_710251a7e0;FUN_710259c150;FUN_71025b12c0;FUN_71025ca5d0;FUN_710323faf0;FUN_71032a0fd0;FUN_71032a9470;FUN_710337e790;FUN_710339dde0;FUN_7103772070;FUN_7103776640;FUN_7103776910;...
- **Files:** [decomp](../decompiled/FUN_7101de7f20__7101de7f20.c)  [cfg](../decompiled/FUN_7101de7f20__7101de7f20.mmd)
- **Clone hash:** `b8e086f425e71c49`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_7101de7f20(long param_1,long *param_2,ulong param_3,byte ****param_4,long ****param_5,
              ulong param_6,long ****param_7,ulong param_8)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  long ****pppplVar4;
  undefined2 *puVar5;
  long lVar6;
  char cVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined6 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 uVar21;
  bool bVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  char *pcVar28;
  undefined *puVar29;
  undefined *puVar30;
  ulong uVar31;
// ... (2126 more lines)
```

## 34. `FUN_71018c4f50`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018c4f50`  (offset `0x18c4f50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018c4f50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 13668 bytes / 562 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** set_btn_m_decide;bg_out;btn_00;scroll;ENABLE_PALLET;MENU_VIBRATION;ITEM_INDEX_INIT;FOCUS_INIT;IS_BACK;layout_root;mode_empty_03;CONTROLLER_FULL_KEY;CONTROLLER_JOY_CON;CONTROLLER_GC_CON;MSG_LABEL_FULL_KEY;pop_opt_btn_ctrl_fullcon;MSG_LABEL_JOY_CON;pop_opt_btn_ctrl_joycon;MSG_LABEL_GC_CON;pop_opt_btn_ctrl_gccon;BUTTON_ID_FK_TRIGGER_L;BUTTON_ID_FK_TRIGGER_R;BUTTON_ID_FK_TRIGGER_ZL;BUTTON_ID_FK_TRIGGER_ZR;BUTTON_ID_FK_UP;BUTTON_ID_FK_SIDE;BUTTON_ID_FK_DOWN;BUTTON_ID_FK_BUTTON_A;BUTTON_ID_FK_BUTTON_B;BUTTON_ID_FK_STICK_R;BUTTON_ID_FK_BUTTON_X;BUTTON_ID_FK_BUTTON_Y;...
- **Callers:** FUN_71018c3d20
- **Callees:** FUN_71000001c0;FUN_71003a9ab0;FUN_71004f2980;FUN_7100519ee0;FUN_7100653490;FUN_71015db0b0;FUN_7101764000;FUN_71018c84c0;FUN_71018c89b0;FUN_71018c8e40;FUN_71018c8fa0;FUN_7101af2070;FUN_7101af86a0;FUN_7101d2f860;FUN_7101d361f0;FUN_7101d37fd0;...
- **Files:** [decomp](../decompiled/FUN_71018c4f50__71018c4f50.c)  [cfg](../decompiled/FUN_71018c4f50__71018c4f50.mmd)
- **Clone hash:** `d171c16c4b71a52e`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018c4f50(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 uVar7;
  short sVar8;
  undefined2 uVar9;
  ushort uVar10;
  char cVar11;
  byte ***pppbVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  bool bVar15;
  int iVar16;
  undefined4 *puVar17;
  long ***ppplVar18;
  long *plVar19;
  ulong uVar20;
  float *pfVar21;
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
// ... (2657 more lines)
```

## 35. `FUN_7101cceed0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101cceed0`  (offset `0x1cceed0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101cceed0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5616 bytes / 330 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** set_txt_idnum;mode_03;mstg_off;set_rep_mfshot;mf_clr_%02d;mode_04;mode_01;mode_02;mode_00;mstg_on;set_rep_bgshot_l
- **Callees:** FUN_71004f5770;FUN_710143c4d0;FUN_7101ccdac0;FUN_7101cedc80;FUN_710323b9e0;FUN_710334c7d0;FUN_710334e6a0;FUN_710334e9e0;FUN_710334ec20;FUN_710334f120;FUN_710334f710;FUN_710334fdc0;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_710377a310;...
- **Files:** [decomp](../decompiled/FUN_7101cceed0__7101cceed0.c)  [cfg](../decompiled/FUN_7101cceed0__7101cceed0.mmd)
- **Clone hash:** `80b7fc238ffa048e`

```c

void FUN_7101cceed0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  uint6 uVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong extraout_x1;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  long lVar10;
  ushort uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long local_b38 [2];
  undefined2 local_b28;
  undefined4 local_b24;
  undefined2 local_b20;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined5 uStack_ad0;
  undefined3 local_acb;
  undefined4 uStack_ac8;
  byte bStack_ac4;
  byte local_ac3 [11];
  long ********local_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
// ... (1196 more lines)
```

## 36. `FUN_7101ab9340`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ab9340`  (offset `0x1ab9340`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ab9340(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * * * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5072 bytes / 230 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** set_rep_bgshot;mnu_replay_detail_melee_normal;mnu_replay_refinement_mode_homerun;mnu_replay_detail_online_tournament;mnu_replay_detail_anyone_vip;mnu_replay_detail_room;mnu_replay_detail_anyone;mnu_replay_detail_melee_tournament;mnu_replay_detail_melee_team;mnu_replay_detail_melee_suddendeath;mnu_replay_detail_melee_various;mstg_on;set_rep_pic_stage;mstg_off;turn_on;turn_off;turn_loop;set_rep_stockicon_%02d;set_rep_stockicon_%02d_;stockicon_5vs5;stockicon%02d;stockicon_3vs3;set_parts_text_scroll;set_txt_mask;mnu_replay_data_title_default;set_txt_main;set_txt_modename;set_txt_modename_00;set_txt_time;mnu_replay_detail_time_movie;mstg_icn_on
- **Callees:** FUN_71003a4ca0;FUN_7101aba710;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_710323f330;FUN_71032631a0;FUN_71032632a0;FUN_71032648e0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_7103778760;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_7101ab9340__7101ab9340.c)  [cfg](../decompiled/FUN_7101ab9340__7101ab9340.mmd)
- **Clone hash:** `6920c7a990859cc7`

```c

void FUN_7101ab9340(long param_1,int param_2,long *********param_3,byte ****param_4,
                   long *********param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ushort *puVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  byte ****ppppbVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  long *********ppppppppplVar18;
  ulong uVar19;
  long lVar20;
  undefined4 *puVar21;
  long ********pppppppplVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined **ppuVar27;
  ulong uVar28;
  long *plVar29;
  undefined **__dest;
  long lVar30;
  long *********ppppppppplVar31;
  uint *puVar32;
  undefined1 *puVar33;
  long *********ppppppppplVar34;
// ... (892 more lines)
```

## 37. `FUN_7101ac65f0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ac65f0`  (offset `0x1ac65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ac65f0(long param_1, uint * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2524 bytes / 133 bb / 3 incoming refs
- **Match values:** mode
- **Strings touched:** set_txt_time_00;mnu_replay_detail_time_movie;set_txt_mode_02;mnu_replay_detail_melee_allbattle;mnu_replay_detail_melee_normal;mnu_replay_detail_online_tournament;mnu_replay_refinement_mode_homerun;mnu_replay_detail_melee_tournament;mnu_replay_detail_anyone;mnu_replay_detail_melee_team;mnu_replay_detail_anyone_vip;mnu_replay_detail_room;mel_chara_select_melee_team;mel_chara_select_suddendeath_team;mel_chara_select_various_team;set_txt_mode_03;set_txt_header_rule_00;set_txt_rule_00;set_parts_tag_disp_00;set_parts_detail_pane_00;set_parts_text_scroll;set_txt_main;set_txt_mask;mode_empty_03;set_txt_date_num;mnu_replay_detail_creation_date;set_rep_bgshot_00;mstg_out_on;turn_out_loop;turn_out_on;set_rep_movie_pic_00;mstg_out_off;...
- **Callers:** FUN_7101abdf80;FUN_7101ac0780;FUN_7101ac0850
- **Callees:** FUN_7101ac6fd0;FUN_7101ac71e0;FUN_7101ad1f10;FUN_7101ad2060;FUN_7101af0cc0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778760;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_71037a2270;FUN_710392e290;FUN_710392eb40;...
- **Files:** [decomp](../decompiled/FUN_7101ac65f0__7101ac65f0.c)  [cfg](../decompiled/FUN_7101ac65f0__7101ac65f0.mmd)
- **Clone hash:** `0ecec1565a60a2d0`

```c

void FUN_7101ac65f0(long param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  byte bVar15;
  char *pcVar16;
  long lVar17;
  long ***ppplVar18;
  char *pcVar19;
  long *plVar20;
  long *plVar21;
  char cVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined **local_f0;
  ulong local_e8;
  undefined **local_e0;
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
// ... (478 more lines)
```

## 38. `FUN_7101acce30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101acce30`  (offset `0x1acce30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101acce30(long param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1008 bytes / 50 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** in_r_00;header_txt_in;mnu_replay_refinement_mode;out_r_00;in_l_00;header_txt_out;mnu_replay_refinement_mode_help_all
- **Callees:** FUN_710323f760;FUN_71032821b0;FUN_7103771a80;FUN_7103778300;FUN_7103778b80;FUN_710377a120;FUN_71037964b0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::abort;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101acce30__7101acce30.c)  [cfg](../decompiled/FUN_7101acce30__7101acce30.mmd)
- **Clone hash:** `c51ce6225031a4f8`

```c

void FUN_7101acce30(long param_1,long param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  char *pcVar11;
  long *********ppppppppplVar12;
  undefined **local_50;
  undefined8 *local_48;
  long ********local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x70))(*(long **)(param_1 + 0x138),1);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710437c100);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x710425ee3e);
    iVar3 = **(int **)(param_1 + 0x110);
    if (2 < iVar3 - 1U) {
      iVar3 = 0;
    }
    ppppppppplVar12 = (long *********)0x1;
    FUN_7103771a80((long *)(param_1 + 0x138),iVar3,1);
    FUN_710377a120(param_1 + 600,"mnu_replay_refinement_mode",ppppppppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x13834df56d);
    plVar9 = FUN_710323f760(*(long **)(param_1 + 0x108),uVar10,(long ****)ppppppppplVar12,param_4,
                            param_5,param_6,param_7,param_8);
    local_50 = &PTR_FUN_710523da08;
    local_48 = (undefined8 *)
               FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar12,param_4,param_5,param_6,param_7,
// ... (155 more lines)
```

## 39. `FUN_7101f89130`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89130`  (offset `0x1f89130`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89130(long param_1)`
- **Size / BBs / Incoming:** 480 bytes / 4 bb / 2 incoming refs
- **Match values:** phase;mode
- **Strings touched:** FighterAIDebugText;act_id;uniq_stat;common_stat;item_stat;weaken_stat;fighter_kind;fighter_status_kind;fighter_motion_kind;ai_status;attack_phase;cp_type;floor_collision_flag;chase_phase;hammer_phase;fireflower_phase;flag_goto_check
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f89130__7101f89130.c)  [cfg](../decompiled/FUN_7101f89130__7101f89130.mmd)
- **Clone hash:** `619cb1f1556e830c`

```c

void FUN_7101f89130(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"FighterAIDebugText",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104292688,(long ****)FUN_7101f88690,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"act_id",(long ****)FUN_7101f88730,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"uniq_stat",(long ****)FUN_7101f887d0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"common_stat",(long ****)FUN_7101f88870,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"item_stat",(long ****)FUN_7101f88910,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"weaken_stat",(long ****)FUN_7101f889b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_kind",(long ****)FUN_7101f88a50,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_status_kind",(long ****)FUN_7101f88af0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"fighter_motion_kind",(long ****)FUN_7101f88b90,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"ai_status",(long ****)FUN_7101f88c30,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"attack_phase",(long ****)FUN_7101f88cd0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"cp_type",(long ****)FUN_7101f88d70,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
// ... (16 more lines)
```

## 40. `FUN_71033093b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71033093b0`  (offset `0x33093b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71033093b0(long param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1996 bytes / 71 bb / 4 incoming refs
- **Match values:** mode
- **Strings touched:** selector_00;set_btn_back;set_btn_fighter_select;mode_option_button_controller;color_option;mode_make_mii_edit;color_other;color_online;mode_spirits_board_set;color_spirits
- **Callers:** FUN_7101808940;FUN_71018a02d0;FUN_71018c4f50;FUN_7101967340
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_7101764000;FUN_710323eba0;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_710376b960;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103773200;FUN_71037760f0;FUN_7103776640;FUN_7103778300;FUN_7103778630;...
- **Files:** [decomp](../decompiled/FUN_71033093b0__71033093b0.c)  [cfg](../decompiled/FUN_71033093b0__71033093b0.mmd)
- **Clone hash:** `4fdb62916518f7cb`

```c

void FUN_71033093b0(long param_1,long *param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  char *pcVar11;
  byte ****ppppbVar12;
  byte ****ppppbVar13;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  byte ****ppppbVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined1 auVar22 [16];
  byte ***local_1a0;
  ushort local_198 [7];
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
// ... (340 more lines)
```

## 41. `FUN_7101dacc40`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101dacc40`  (offset `0x1dacc40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101dacc40(undefined8 * param_1, long * * * * * * * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9564 bytes / 455 bb / 2 incoming refs
- **Match values:** mode
- **Strings touched:** selector_0;set_parts_btn_fighter;set_parts_btn_spirit;set_parts_btn_attacker;set_parts_btn_s_item;selector_1;set_parts_btn_load_set;set_parts_btn_save_set;set_parts_slot;set_parts_btn_spter_00;set_parts_btn_spter_01;set_parts_btn_spter_02;selector_2;set_parts_btn_rule;select_fighter;anim_set_select_fighter;position_edit;set_parts_border_00;anim_loop;set_parts_border_01;single;multi;mode_empty_03;num_player_%02d;set_rep_fighter_sdw;set_rep_fighter;set_rep_p_01;bg_fighter_name_00;set_rep_series_sdw;set_rep_series;set_txt_fighter_name_sdw;set_txt_fighter_name;...
- **Callers:** FUN_71018f7620;FUN_71024f52a0
- **Callees:** FUN_71003a4ca0;FUN_71003cb050;FUN_7101696040;FUN_7101da6780;FUN_7101da73b0;FUN_7101da8880;FUN_7101da9e30;FUN_7101dac850;FUN_7101daf1a0;FUN_7102497520;FUN_71024976d0;FUN_7102499b60;FUN_71025298e0;FUN_710259f250;FUN_710259f260;FUN_71025cae70;...
- **Files:** [decomp](../decompiled/FUN_7101dacc40__7101dacc40.c)  [cfg](../decompiled/FUN_7101dacc40__7101dacc40.mmd)
- **Clone hash:** `73bf7e4fa1e4283b`

```c

void FUN_7101dacc40(undefined8 *param_1,long *********param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  undefined4 uVar14;
  char *pcVar15;
  undefined8 extraout_x1;
  long ***ppplVar16;
  char *pcVar17;
  long *********ppppppppplVar18;
  long ****pppplVar19;
  long *****ppppplVar20;
  ulong uVar21;
  long *********ppppppppplVar22;
  byte ****ppppbVar23;
  long ********pppppppplVar24;
  code *pcVar25;
  long lVar26;
  byte bVar27;
  undefined8 uVar28;
  long ********pppppppplVar29;
  long ********pppppppplVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long lVar34;
// ... (1746 more lines)
```

## 42. `FUN_7101ee9990`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ee9990`  (offset `0x1ee9990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ee9990(long * param_1)`
- **Size / BBs / Incoming:** 12376 bytes / 586 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** anime_seq_01_00;set_fxui_smash;player_number_%dp;team_color_%d;set_panel_bg_%02d;side_right;side_left;set_panel_fighter_%02d;fighter_seq_02_03_f%02d;team_fp_on;team_fp_off;set_txt_player_name;mode_empty_03;player_name_all_off;player_name_all_on;icon_off_%dp;icon_on_%dp;set_rep_icon;set_bg_icon;player_color_%dp;mel_player_n;set_txt_level_n;cmn_%dp;set_txt_player_number;set_rep_series;set_rep_fighter;set_rep_fighter_shadow;gauge_parts_on;figter_name_1;set_txt_fighter_1;nam_chr2_%02d_%s;figter_name_2;...
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710062dc20;FUN_710175dfc0;FUN_7101764000;FUN_71017a7d70;FUN_7101b09e60;FUN_7101c09200;FUN_7101eedbe0;FUN_71024076d0;FUN_710323f330;FUN_710323f600;FUN_710323faf0;FUN_7103240430;FUN_71032575c0;FUN_7103262310;...
- **Files:** [decomp](../decompiled/FUN_7101ee9990__7101ee9990.c)  [cfg](../decompiled/FUN_7101ee9990__7101ee9990.mmd)
- **Clone hash:** `d25ae304d71940fd`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101ee9990(long *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ushort *puVar17;
  long lVar18;
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
// ... (2704 more lines)
```

## 43. `FUN_71020c9380`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** mode
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

## 44. `FUN_7101f23030`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f23030`  (offset `0x1f23030`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f23030(long * * * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1100 bytes / 46 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** mode_picture;mode_movie
- **Callees:** FUN_7101f2b8e0;FUN_71024076d0;FUN_71032fffb0;FUN_7103313f20;FUN_7103778300;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101f23030__7101f23030.c)  [cfg](../decompiled/FUN_7101f23030__7101f23030.mmd)
- **Clone hash:** `590dbc1543386b2c`

```c

void FUN_7101f23030(long ****param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long ****pppplVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  int *piVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 local_70 [2];
  undefined **local_68;
  long local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(int *)((long)param_1 + 0xc4) == 0) {
    (*(code *)(*param_1[0x1c])[0xe])(param_1[0x1c],1);
    (*(code *)(*param_1[0x1d])[0xc])(param_1[0x1d],1);
    (*(code *)(*param_1[0x1e])[0xe])(param_1[0x1e],0);
  }
  if (*(int *)((long)param_1[0x1d] + 0x25c) == 0) {
    if (*(int *)(param_1 + 0x1b) != 1) {
      lVar12 = 0x17160;
      do {
        puVar3 = (undefined4 *)((long)param_1 + lVar12);
        lVar12 = lVar12 + 0xb80;
        *puVar3 = 0;
        *(undefined1 *)(puVar3 + 0x2d) = 1;
        puVar3[0xb8] = 0;
// ... (131 more lines)
```

## 45. `FUN_71017e0800`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017e0800`  (offset `0x17e0800`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71017e0800(uint * param_1, int param_2, undefined8 param_3, ulong param_4, ulong param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2172 bytes / 140 bb / 7 incoming refs
- **Match values:** mode
- **Strings touched:** fighter/simon/model/whip/c%02d/model.numdlb;fighter/simon/motion/whip/c%02d;fighter/kirby/motion/windummy/c%02d;fighter/jack/motion/windummy/c%02d;NODE_PRE_REFRACT_BLEND;fighter/samusd/model/body/c%02d/model.numdlb;fighter/littlemac/motion/body/c%02d;fighter/samusd/motion/bunshin/c00;fighter/kirby/motion/rosettaticomissile/c00;fighter/richter/motion/whip/c%02d;fighter/elight/model/body/c%02d/model.numdlb;fighter/littlemac/model/body/c%02d/model.numdlb;fighter/metaknight/model/body/c%02d/model.numdlb;fighter/richter/model/whip/c%02d/model.numdlb;%s/%s/motion/%s/c%02d;fighter/koopag/model/body/c00/model.numdlb;fighter/rosetta/model/tico/c00/model.numdlb;fighter/kirby/model/body/c%02d/model.numdlb;fighter/pikachu/model/body/c%02d/model.numdlb;fighter/mewtwo/model/body/c%02d/model.numdlb;fighter/samus/model/body/c00/model.numdlb;fighter/pichu/model/body/c%02d/model.numdlb;boss/ganonboss/model/body/c00/model.numdlb;%s/%s/model/%s/c%02d/model.numdlb;fighter/pzenigame/model/body/c%02d/model.numdlb;fighter/pfushigisou/model/body/c%02d/model.numdlb;fighter/plizardon/model/body/c%02d/model.numdlb;fighter/jack/model/body/c%02d/model.numdlb;fighter/elight/model/esword/c%02d/model.numdlb;fighter/eflame/model/body/c%02d/model.numdlb;fighter/eflame/model/esword/c%02d/model.numdlb
- **Callers:** FUN_71017ee960;FUN_71017eeaa0;FUN_71017eeee0;FUN_71033a0490;FUN_71033aa350;FUN_710347fa10;FUN_71034914d0
- **Callees:** FUN_710147f330;FUN_710353e8e0;FUN_710392eb40;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::std::string::append
- **Files:** [decomp](../decompiled/FUN_71017e0800__71017e0800.c)  [cfg](../decompiled/FUN_71017e0800__71017e0800.mmd)
- **Clone hash:** `8fe013a01afc7c4e`

```c

void FUN_71017e0800(uint *param_1,int param_2,undefined8 param_3,ulong param_4,ulong param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  uint uVar13;
  char *pcVar14;
  char local_498 [256];
  ushort local_398;
  char local_390 [256];
  ushort local_290;
  ulong local_288;
  undefined8 local_280;
  char *local_278;
  char local_270 [256];
  ushort local_170;
  char local_168 [256];
  ushort local_68;
  
  uVar11 = param_5 & 0xffffffff;
  uVar2 = (uint)param_3;
  uVar9 = param_4;
  uVar5 = param_6;
  if (((DAT_710532f938 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710532f938), iVar3 != 0)) {
    __cxa_guard_release(&DAT_710532f938);
  }
  puVar12 = (&PTR_DAT_7105186bd0)[param_2];
  uVar13 = (uint)param_4;
// ... (441 more lines)
```

## 46. `FUN_7101c3aed0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3aed0`  (offset `0x1c3aed0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3aed0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7708 bytes / 262 bb / 2 incoming refs
- **Match values:** mode
- **Strings touched:** set_rep_logo;spirits_campaign_top_maintitle;mel_tournament_title_default;set_parts_title;set_txt_tnmt_title;mode_empty_03;mel_tournament_confirm_title;set_parts_header;set_txt_title;set_txt_rule;mel_tournament_confirm_rule;set_panel_%02d;set_icon_%02d;gauge_parts_on;set_pos;set_rep_00;set_panel_00;set_size_00;set_size_01;set_pic_final_base;selector_0;set_parts_btn_00;set_parts_btn_01;set_parts_btn_02;set_parts_btn_decide;set_parts_btn_start
- **Callers:** FUN_710187d820
- **Callees:** FUN_7101af86a0;FUN_7101c2e760;FUN_7101c2e980;FUN_7101c321b0;FUN_7101c32670;FUN_7101c33d10;FUN_7101c34000;FUN_710323eba0;FUN_7103240d30;FUN_71032cbf30;FUN_710337df20;FUN_7103391610;FUN_7103391970;FUN_7103391a80;FUN_7103391f40;FUN_7103770b30;...
- **Files:** [decomp](../decompiled/FUN_7101c3aed0__7101c3aed0.c)  [cfg](../decompiled/FUN_7101c3aed0__7101c3aed0.mmd)
- **Clone hash:** `9654ee144f238591`

```c

void FUN_7101c3aed0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
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
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
// ... (1307 more lines)
```

## 47. `FUN_7101d727a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d727a0`  (offset `0x1d727a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d727a0(long param_1, undefined4 param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4880 bytes / 221 bb / 3 incoming refs
- **Match values:** mode
- **Strings touched:** selector_00;set_ctl_btn_00;set_ctl_btn_01;set_ctl_btn_02;set_ctl_btn_03;set_dummy;mark_backtrack;mark_play;mark_nexttrack;mode_empty_03;mark_fullplay;set_parts_bg_wave_ser;mark_shuffle;set_parts_bg_wave_voi;chara/chara_4/chara_4_;plylst;set_parts_bg_wave_plylst;other_01;btn_off;keyhelp_minus_off;keyhelp_minus_on;set_parts_scr_s_name_00;set_txt_scr_sound_source;set_txt_arranger_01;set_timebar_ser;set_parts_scr_voi_nam;set_parts_scr_s_name_01;set_txt_scr_sound_sou_01;set_txt_arranger_00;set_timebar_list;set_txt_time;arrange_off;...
- **Callers:** FUN_710184b4c0;FUN_71018dd020;FUN_7101f431c0
- **Callees:** FUN_71000001c0;FUN_7101764000;FUN_7101796d70;FUN_710184cdd0;FUN_7101989a30;FUN_7101d6e660;FUN_7101d70b60;FUN_7101d71ea0;FUN_7101d72060;FUN_7101d721f0;FUN_71033152c0;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771a80;...
- **Files:** [decomp](../decompiled/FUN_7101d727a0__7101d727a0.c)  [cfg](../decompiled/FUN_7101d727a0__7101d727a0.mmd)
- **Clone hash:** `2ad7cd7576c55e79`

```c

/* WARNING: Removing unreachable block (ram,0x007101d729bc) */
/* WARNING: Removing unreachable block (ram,0x007101d729c0) */

void FUN_7101d727a0(long param_1,undefined4 param_2,long *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long ***ppplVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long **pplVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  undefined8 extraout_x1;
  undefined **ppuVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  undefined4 uVar13;
  code *pcVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  byte ***local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  ulong local_1c0;
  undefined1 local_1b8;
// ... (828 more lines)
```

## 48. `FUN_7101c30b10`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c30b10`  (offset `0x1c30b10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c30b10(long param_1, undefined8 param_2, char * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1452 bytes / 56 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** mel_tournament_title_default;set_parts_title;set_txt_tnmt_title;mode_empty_03;mel_tournament_confirm_title;set_parts_header;set_txt_title
- **Callees:** FUN_7101c32670;FUN_7103392360;FUN_7103776640;FUN_7103776910;FUN_710377a280;FUN_71037ab600;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::nn::swkbd::SetInitialText
- **Files:** [decomp](../decompiled/FUN_7101c30b10__7101c30b10.c)  [cfg](../decompiled/FUN_7101c30b10__7101c30b10.mmd)
- **Clone hash:** `19858e6fcbc30925`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c30b10(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined **local_14d0;
  undefined8 local_14c8;
  uint local_1470 [2];
  ushort local_1468 [512];
  undefined **local_1068;
  ulong local_1060 [512];
  
  if (*(int *)(param_1 + 0x21b4) == 0) {
    if (*(short *)(*(long *)(DAT_7105329060 + 8) + 0x1b8) != 0) {
      nn::swkbd::SetInitialText
                ((ShowKeyboardArg *)**(undefined8 **)(param_1 + 0x2030),
                 (wchar16 *)(*(long *)(DAT_7105329060 + 8) + 0x1b8));
    }
    lVar14 = *(long *)(DAT_710532f850 + 8);
// ... (229 more lines)
```

## 49. `FUN_7101d9d070`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d9d070`  (offset `0x1d9d070`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d9d070(long param_1, long param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 17636 bytes / 890 bb / 1 incoming refs
- **Match values:** mode
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

## 50. `FUN_7101d4b6b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d4b6b0`  (offset `0x1d4b6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d4b6b0(long * * * * param_1)`
- **Size / BBs / Incoming:** 15404 bytes / 897 bb / 1 incoming refs
- **Match values:** mode
- **Strings touched:** scroll;selector_00;set_parts_btn_08_header;set_parts_sub_btns;selector;set_parts_radiobtn_00;set_parts_radiobtn_01;selector_01;set_parts_btn_00_lt;set_parts_btn_01_ll;set_parts_btn_02_lr;set_parts_btn_03_lb;mode_empty_03;line_l;selector_04;set_parts_btn_04_rt;set_parts_btn_05_rl;set_parts_btn_06_rr;set_parts_btn_07_rb;line_r;set_scr_sort;on_plt_menu_lyt_00;off_plt_menu_lyt_00;offset_lr;plt_menu_lyt_00;blinder;plate_side;set_txt_list
- **Callers:** FUN_71018cede0
- **Callees:** FUN_7101989a30;FUN_7101989b70;FUN_71019c1c50;FUN_7101a7ed70;FUN_7101d49460;FUN_7101d49940;FUN_7101d4f2e0;FUN_7101d4f880;FUN_7101d4fed0;FUN_7101d4fee0;FUN_7101d500c0;FUN_7101d500d0;FUN_7101d50270;FUN_7101d50280;FUN_7101d50440;FUN_7101d50450;...
- **Files:** [decomp](../decompiled/FUN_7101d4b6b0__7101d4b6b0.c)  [cfg](../decompiled/FUN_7101d4b6b0__7101d4b6b0.mmd)
- **Clone hash:** `c173c0de45ff576c`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101d4b6b0(long ****param_1)

{
  uint *puVar1;
  long ****pppplVar2;
  long ****pppplVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  byte ***pppbVar7;
  undefined **ppuVar8;
  byte ***pppbVar9;
  bool bVar10;
  long ***ppplVar11;
  ulong uVar12;
  long **pplVar13;
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
// ... (3006 more lines)
```

