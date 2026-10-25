# gauge (funcs=114, hits=357)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=42)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** gauge
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

## 2. `FUN_7101e40880`  (hits=42)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e40880`  (offset `0x1e40880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101e40880(void)`
- **Size / BBs / Incoming:** 9700 bytes / 425 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** header_on;header_off;btn_type_search;bg_search_%02d;gauge_on;btn_type_school;bg_school_%02d;gauge_off;set_parts_spirit_%02d;type_school;btn_type_gym;bg_gym_%02d;type_gym;type_search;finish_off;finish_on;set_txt_place;set_rep_master;set_rep_master_sdw;gauge_progress;set_txt_rest;cam_searchfield_time
- **Callees:** FUN_7101e42f50;FUN_7101e43170;FUN_7102512c50;FUN_7102512d40;FUN_7102512ec0;FUN_710251abf0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778430;FUN_7103778630;FUN_7103778b80;FUN_710377a120;FUN_710377a280;FUN_71037964b0;FUN_7103796f20;...
- **Files:** [decomp](../decompiled/FUN_7101e40880__7101e40880.c)  [cfg](../decompiled/FUN_7101e40880__7101e40880.mmd)
- **Clone hash:** `e1507133aa6324d5`

```c

/* WARNING: Removing unreachable block (ram,0x007101e42ca0) */
/* WARNING: Removing unreachable block (ram,0x007101e429e8) */
/* WARNING: Removing unreachable block (ram,0x007101e42b44) */
/* WARNING: Removing unreachable block (ram,0x007101e42dfc) */

void FUN_7101e40880(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  ulong uVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long ********pppppppplVar8;
  ushort uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  ulong uVar12;
  long *******ppppppplVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  short *psVar16;
  undefined2 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  byte *pbVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  long ********pppppppplStack_c8;
// ... (1292 more lines)
```

## 3. `FUN_7101f89310`  (hits=26)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** GAUGE;gauge
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

## 4. `FUN_7101e50b10`  (hits=18)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e50b10`  (offset `0x1e50b10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e50b10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4752 bytes / 224 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** set_parts_spirit_%02d;gauge_on;gauge_off;set_txt_rest;cam_searchfield_time
- **Callers:** FUN_7101e4e150;FUN_7101e52840
- **Callees:** FUN_7101e51da0;FUN_7102512c50;FUN_7102518f30;FUN_710251abf0;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_710377a280;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101e50b10__7101e50b10.c)  [cfg](../decompiled/FUN_7101e50b10__7101e50b10.mmd)
- **Clone hash:** `b5c5d6a0973e6968`

```c

/* WARNING: Removing unreachable block (ram,0x007101e518d8) */
/* WARNING: Removing unreachable block (ram,0x007101e51490) */
/* WARNING: Removing unreachable block (ram,0x007101e516b8) */
/* WARNING: Removing unreachable block (ram,0x007101e51af8) */

void FUN_7101e50b10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  ushort *puVar14;
  short *psVar15;
  undefined2 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  long ***local_60;
  ulong local_58;
  undefined4 local_44;
  
  pppplVar12 = &local_60;
  pppplVar10 = &local_60;
// ... (637 more lines)
```

## 5. `FUN_7101f7c910`  (hits=12)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f7c910`  (offset `0x1f7c910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f7c910(long param_1)`
- **Size / BBs / Incoming:** 9552 bytes / 4 bb / 1 incoming refs
- **Match values:** gauge
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

## 6. `FUN_7101fc7f30`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
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

## 7. `FUN_7101fa11c0`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** gauge
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

## 8. `FUN_7101f87300`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f87300`  (offset `0x1f87300`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f87300(long param_1)`
- **Size / BBs / Incoming:** 5008 bytes / 47 bb / 2 incoming refs
- **Match values:** gauge
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

## 9. `FUN_7101bcdd20`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bcdd20`  (offset `0x1bcdd20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bcdd20(undefined4 * param_1, undefined8 * param_2, long * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2800 bytes / 152 bb / 2 incoming refs
- **Match values:** gauge
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

## 10. `FUN_7101390d00`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101390d00`  (offset `0x1390d00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101390d00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3152 bytes / 150 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_sec_onoff;name_bg_col;gauge_00;gauge_01;gauge_colanim_00;gauge_colanim_01;bg_colanim_00;boss_face;set_txt_name_00;set_txt_name_01;set_rep_face
- **Callees:** FUN_7101414b10;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710377b140;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101390d00__7101390d00.c)  [cfg](../decompiled/FUN_7101390d00__7101390d00.mmd)
- **Clone hash:** `c9cdd83fe051cd5a`

```c

void FUN_7101390d00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 extraout_x1_01;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long lVar15;
  long ****pppplVar16;
  undefined1 auVar17 [16];
  long ***local_78;
  ulong local_70;
  undefined4 local_64;
  
  lVar15 = *(long *)(param_1 + 0x50);
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000088;
      param_3 = &local_78;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,param_3,param_4,param_5,param_6,param_7,param_8),
// ... (578 more lines)
```

## 11. `FUN_7101e9aa40`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e9aa40`  (offset `0x1e9aa40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e9aa40(long * param_1, undefined8 * param_2, undefined8 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3284 bytes / 175 bb / 3 incoming refs
- **Match values:** gauge
- **Strings touched:** slot_exist;slot_empty;offset_normal;offset_first;set_txt_00;cam_gym_leave;cam_school_leave;set_parts_condition;set_parts_lvup;aura_anim_loop;mode_empty_03;set_parts_spirit;set_txt_lv;set_rep_spirit_aw;set_rep_spirit;set_rep_shadow;gauge_progress;gauge_parts_on;gauge_parts_off;base_loop;level_on;level_off;gauge_off
- **Callers:** FUN_7101920610;FUN_71019401b0;FUN_7101e62bd0
- **Callees:** FUN_71003a4ca0;FUN_7101989a30;FUN_7101e9a8e0;FUN_7101e9b720;FUN_710337d5b0;FUN_710337d5c0;FUN_710337dab0;FUN_710337dac0;FUN_7103770b30;FUN_71037717d0;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710377a120;...
- **Files:** [decomp](../decompiled/FUN_7101e9aa40__7101e9aa40.c)  [cfg](../decompiled/FUN_7101e9aa40__7101e9aa40.mmd)
- **Clone hash:** `5f033f0a7f1ee885`

```c

void FUN_7101e9aa40(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  long ********pppppppplVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *********ppppppppplVar14;
  byte ****ppppbVar15;
  long lVar16;
  long *plVar17;
  long *******ppppppplVar18;
  undefined ***pppuVar19;
  code *pcVar20;
  byte bVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined1 auVar27 [16];
  undefined **local_210;
  undefined **local_208;
  long ********local_200;
// ... (692 more lines)
```

## 12. `FUN_7101e691f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e691f0`  (offset `0x1e691f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e691f0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 4260 bytes / 185 bb / 1 incoming refs
- **Match values:** gauge
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

## 13. `FUN_71020b1a20`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020b1a20`  (offset `0x20b1a20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020b1a20(long param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 732 bytes / 8 bb / 5 incoming refs
- **Match values:** gauge
- **Strings touched:** new_instance_lua;_motionKind;_motionCompFrame;_reqStatus;_taskId;_offsetX;gauge_parts_on;_offsetY;_frame;_targetPos
- **Callers:** FUN_71020b1950;FUN_7102196670;FUN_71021968e0;FUN_71021992f0;FUN_7102199550
- **Callees:** FUN_7101ff91a0;FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020b1a20__71020b1a20.c)  [cfg](../decompiled/FUN_71020b1a20__71020b1a20.mmd)
- **Clone hash:** `46f3cfaaddea130b`

```c

void FUN_71020b1a20(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  
  FUN_7101ff91a0(param_1,param_2);
  plVar7 = (long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar7;
  *puVar1 = FUN_71020b1d00;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  uVar3 = *(ulong *)(param_1 + 0x30);
  puVar4 = (ulong *)*plVar7;
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = uVar3 & 0xffffffffff;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_motionKind");
  plVar5 = (long *)*plVar7;
  *plVar5 = (long)*(int *)(param_1 + 0x38);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_motionCompFrame");
  plVar5 = (long *)*plVar7;
  *plVar5 = (long)*(int *)(param_1 + 0x3c);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *plVar7;
  *plVar7 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_reqStatus");
// ... (60 more lines)
```

## 14. `FUN_71020271a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020271a0`  (offset `0x20271a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020271a0(long param_1)`
- **Size / BBs / Incoming:** 2280 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
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

## 15. `FUN_71023b9770`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71023b9770`  (offset `0x23b9770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71023b9770(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 18880 bytes / 797 bb / 1 incoming refs
- **Match values:** gauge
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

## 16. `FUN_7101ec4ee0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ec4ee0`  (offset `0x1ec4ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ec4ee0(long param_1, long param_2, undefined8 * param_3, undefined8 * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 356 bytes / 17 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** save_in;gauge_parts_on;save_out;btn_dicide_in;btn_dicide_out
- **Callers:** FUN_7101ec59d0
- **Callees:** FUN_7101ec4db0;<EXTERNAL>::std::__shared_weak_count::__release_weak
- **Files:** [decomp](../decompiled/FUN_7101ec4ee0__7101ec4ee0.c)  [cfg](../decompiled/FUN_7101ec4ee0__7101ec4ee0.mmd)
- **Clone hash:** `d96b1ec7f5a66ece`

```c

void FUN_7101ec4ee0(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 local_60;
  long *plStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_50 = *param_3;
  plVar2 = (long *)param_3[1];
  local_48 = plVar2;
  if (plVar2 == (long *)0x0) {
    FUN_7101ec4db0((undefined8 *)(param_1 + 8),param_2,&local_50,(long ****)"save_in",
                   (long ****)"save_out",param_6,param_7,param_8);
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_7101ec4db0((undefined8 *)(param_1 + 8),param_2,&local_50,(long ****)"save_in",
                   (long ****)"save_out",param_6,param_7,param_8);
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
// ... (45 more lines)
```

## 17. `FUN_7101e4e150`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e4e150`  (offset `0x1e4e150`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e4e150(uint * param_1, uint param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)`
- **Size / BBs / Incoming:** 10680 bytes / 494 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** set_txt_facility_00;set_txt_facility_01;set_rep_eff_aura_00;view_gym_%02d;cam_gym_title;set_rep_gym_owner;set_rep_gym_shadow;gauge_off;header_type_01;set_parts_spirit_%02d;type_gym;view_school_%02d;set_rep_school_owner;set_rep_school_shadow;header_type_00;type_school;view_search_%02d;cam_searchfield_title;set_rep_search_owner;set_rep_search_shadow;set_rep_spirit_shadow;type_search;finish_off;set_rep_spirit;view_shop_%02d;cam_fac_menu_shop_title;set_rep_shop_owner;set_rep_shop_shadow;set_parts_shop_%02d;type_00;soldout_off;type_01;...
- **Callers:** FUN_71024f9120
- **Callees:** FUN_7101e4e050;FUN_7101e50b10;FUN_7102510b80;FUN_71025128e0;FUN_7102512d40;FUN_7102512ec0;FUN_710259c150;FUN_710323d580;FUN_710323faf0;FUN_710327d930;FUN_71032817a0;FUN_71032a9470;FUN_710338b9b0;FUN_7103776640;FUN_7103776910;FUN_7103778300;...
- **Files:** [decomp](../decompiled/FUN_7101e4e150__7101e4e150.c)  [cfg](../decompiled/FUN_7101e4e150__7101e4e150.mmd)
- **Clone hash:** `9f7c76940592c5d1`

```c

void FUN_7101e4e150(uint *param_1,uint param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   long param_6,ulong param_7,ulong param_8)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar14;
  undefined8 extraout_x1_03;
  char *pcVar15;
  undefined8 extraout_x1_04;
  undefined *puVar16;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  ulong uVar17;
  long ****pppplVar18;
  long *********ppppppppplVar19;
  long lVar20;
  ushort *puVar21;
  undefined2 *puVar22;
  byte *pbVar23;
  ulong uVar24;
// ... (1630 more lines)
```

## 18. `FUN_7101f3c990`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f3c990`  (offset `0x1f3c990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f3c990(undefined8 * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2216 bytes / 107 bb / 5 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_parts_on;set_pos_seek;set_pos_grad_00;set_pos_grad_01;set_pos_start;set_pos_end;set_size_clip_behind;set_size_clip_behindsel;set_size_clip_front;set_size_clip_frontsel;set_size_clip_unmute;set_size_clip_unmute_pi;set_size_clip_overlay;set_size_frame_selected;set_size_clip_mute;set_mask_size_thumb;set_mask_size_mark;set_mask_size_mute;set_mask_size_tellop;set_mask_size_behind;set_mask_size_bg_name_00;set_mask_size_bg_name_01;set_mask_size_unmute;set_mask_size_overlay;mode_empty_03;set_rep_thumb;set_rep_thumb2;set_offset_thumb2;set_pos_transition;set_offset_minus;set_txt_value_00;set_txt_value_01;...
- **Callers:** FUN_7101f31930;FUN_7101f41680
- **Callees:** FUN_7101f3c650;FUN_7103776390;FUN_7103776910;FUN_7103778ab0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101f3c990__7101f3c990.c)  [cfg](../decompiled/FUN_7101f3c990__7101f3c990.mmd)
- **Clone hash:** `a4d7a38ff623e1e3`

```c

void FUN_7101f3c990(undefined8 *param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **local_288;
  ulong local_280;
  undefined **local_278;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
// ... (424 more lines)
```

## 19. `FUN_7101fdbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fdbb90`  (offset `0x1fdbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fdbb90(undefined4 * param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 3228 bytes / 23 bb / 3 incoming refs
- **Match values:** gauge
- **Strings touched:** new_instance_lua;offset_;offset2_;power_;size_;vector_;r_eff_;r_fix_;r_add_;slip_;stop_frame_;stop_delay_;node_;target_category_;target_situation_;target_lr_;target_part_;attr_;sound_level_;sound_attr_;set_off_;no_scale_;shield_;reflector_;absorber_;gauge_parts_on;direct_;no_invincible_;no_xlu_;lr_check_;catch_;no_team_;...
- **Callers:** FUN_7101fdb990;FUN_7101ff0290;FUN_7101ff0410
- **Callees:** FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_7101fdbb90__7101fdbb90.c)  [cfg](../decompiled/FUN_7101fdbb90__7101fdbb90.mmd)
- **Clone hash:** `f770118e9db30a16`

```c

void FUN_7101fdbb90(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101fdc830;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"offset_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar2 = FUN_710391e050(param_2);
    plVar3 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar3 + 1) = 0x45;
    *plVar3 = lVar2;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar2,0,4);
  }
  uVar8 = *param_1;
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  puVar4[2] = 3;
  *puVar4 = uVar8;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"x");
// ... (383 more lines)
```

## 20. `FUN_7101fd17f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fd17f0`  (offset `0x1fd17f0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7101fd17f0(undefined8 * param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 16836 bytes / 1110 bb / 3 incoming refs
- **Match values:** gauge
- **Strings touched:** offset_;offset2_;power_;size_;vector_;r_eff_;r_fix_;r_add_;slip_;stop_frame_;stop_delay_;node_;target_category_;target_situation_;target_lr_;target_part_;attr_;sound_level_;sound_attr_;set_off_;no_scale_;shield_;reflector_;absorber_;gauge_parts_on;direct_;no_invincible_;no_xlu_;lr_check_;catch_;no_team_;no_stop_;...
- **Callers:** FUN_7101fd1610;FUN_7101ff0620;FUN_7102083720
- **Callees:** FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_7101fd17f0__7101fd17f0.c)  [cfg](../decompiled/FUN_7101fd17f0__7101fd17f0.mmd)
- **Clone hash:** `8b25e18ca01a05dc`

```c

uint FUN_7101fd17f0(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  float *pfVar14;
  float fVar15;
  long local_60;
  int local_58;
  
  puVar12 = (undefined8 *)(param_2 + 0x20);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar11 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar11 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar11 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar11 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
// ... (3241 more lines)
```

## 21. `FUN_7101b69480`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b69480`  (offset `0x1b69480`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b69480(void)`
- **Size / BBs / Incoming:** 40408 bytes / 2245 bb / 4 incoming refs
- **Match values:** gauge
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

## 22. `FUN_710206e930`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710206e930`  (offset `0x206e930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710206e930(long param_1)`
- **Size / BBs / Incoming:** 984 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** PostureModule;init_pos;pos_2d;pos_x;pos_y;pos_z;gauge_parts_on;set_pos;set_pos_2d;add_pos;add_pos_2d;prev_pos;prev_pos_2d;set_lr;reverse_lr;init_rot;init_rot_2;rot_x;rot_y;rot_z;set_rot;init_rot_y_lr;is_rot_y_lr_different_inner_lr;rot_y_lr;update_rot_y_lr;reverse_rot_y_lr;base_scale;TRANS_A_JUMP_AERIAL;scale;set_scale;scale_status;set_scale_status;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710206e930__710206e930.c)  [cfg](../decompiled/FUN_710206e930__710206e930.mmd)
- **Clone hash:** `bbbe989f490a147b`

```c

void FUN_710206e930(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"PostureModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"init_pos",(long ****)FUN_710206b130,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104368d8a,(long ****)FUN_710206b5b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_2d",(long ****)FUN_710206b6c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_x",(long ****)FUN_710206b7b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_y",(long ****)FUN_710206b890,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_z",(long ****)FUN_710206b970,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_pos",(long ****)FUN_710206ba50,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_pos_2d",(long ****)FUN_710206bd80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_pos",(long ****)FUN_710206c000,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_pos_2d",(long ****)FUN_710206c330,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"prev_pos",(long ****)FUN_710206c5b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"prev_pos_2d",(long ****)FUN_710206c6c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
// ... (58 more lines)
```

## 23. `FUN_71020a72d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020a72d0`  (offset `0x20a72d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020a72d0(long param_1)`
- **Size / BBs / Incoming:** 1632 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** PhysicsModule;update_rope_matrix;reset_swing;gauge_parts_on;set_swing_only_anim;TRANS_A_JUMP_AERIAL;set_swing_joint_name;set_swing_wind;set_swing_rate;set_swing_rebirth;set_2nd_gravity;set_2nd_status;get_2nd_status;set_2nd_end_pos;get_2nd_line_length;set_2nd_line_length_all;get_2nd_node_num;get_2nd_active_node_num;get_2nd_active_length;set_2nd_active_node_num;is_2nd_precede;set_2nd_precede;is_2nd_flip;set_2nd_flip;set_2nd_back_speed;set_ik;set_ik_target_pos;set_ik_target_dir;get_ik_end_joint_id;stop_charge;set_2nd_air_resistance;set_2nd_air_resistance_2;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020a72d0__71020a72d0.c)  [cfg](../decompiled/FUN_71020a72d0__71020a72d0.mmd)
- **Clone hash:** `a748235c8dcaf75a`

```c

void FUN_71020a72d0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"PhysicsModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"update_rope_matrix",(long ****)FUN_710209fd00,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_swing",(long ****)FUN_710209ff10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_only_anim",(long ****)FUN_710209ffc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_joint_name",(long ****)FUN_71020a0130,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_wind",(long ****)FUN_71020a0390,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_rate",(long ****)FUN_71020a0500,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_swing_rebirth",(long ****)FUN_71020a06d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_gravity",(long ****)FUN_71020a0840,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_status",(long ****)FUN_71020a0a10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_2nd_status",(long ****)FUN_71020a0b40,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_2nd_end_pos",(long ****)FUN_71020a0c20,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_2nd_line_length",(long ****)FUN_71020a1170,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (112 more lines)
```

## 24. `FUN_71020c9380`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
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

## 25. `FUN_71020b1dc0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020b1dc0`  (offset `0x20b1dc0`)
- **Namespace:** `Global`
- **Signature:** `byte * __cdecl FUN_71020b1dc0(long param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 2904 bytes / 172 bb / 4 incoming refs
- **Match values:** gauge
- **Strings touched:** _motionKind;_motionCompFrame;_reqStatus;_taskId;_offsetX;gauge_parts_on;_offsetY;_frame;_targetPos
- **Callers:** FUN_71021969b0;FUN_7102199620
- **Callees:** FUN_7101ff9450;FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_71020b1dc0__71020b1dc0.c)  [cfg](../decompiled/FUN_71020b1dc0__71020b1dc0.mmd)
- **Clone hash:** `98355476af531854`

```c

byte * FUN_71020b1dc0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  long local_50;
  int local_48;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar5 = *plVar4, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar6 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar6) {
      plVar6 = &DAT_7104862960;
// ... (489 more lines)
```

## 26. `FUN_7102087180`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102087180`  (offset `0x2087180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102087180(long param_1)`
- **Size / BBs / Incoming:** 1344 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** SoundModule;set_position_sub;play_se;play_se_no3d;play_se_pos;play_status_se;stop_status_se;play_sequence;set_play_hit_se_flag;get_play_hit_se_flag;set_no_hit_se;get_no_hit_se;play_hit_se;play_damage_se;play_step;play_step_flippable;play_landing_se;play_down_se;play_fly_voice;set_se_vol;TRANS_A_JUMP_AERIAL;get_se_vol;set_se_vol_db;gauge_parts_on;get_se_vol_db;set_auto_se_pitch;get_auto_se_pitch;set_se_pitch_cent;set_se_pitch_ratio;set_se_pitch_status;set_se_pitch_status_handle;set_continue_se_at_game_finish;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102087180__7102087180.c)  [cfg](../decompiled/FUN_7102087180__7102087180.mmd)
- **Clone hash:** `f7c4f90e9471f221`

```c

void FUN_7102087180(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"SoundModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_position_sub",(long ****)FUN_7102081d40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se",(long ****)FUN_7102082070,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_no3d",(long ****)FUN_71020824c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_pos",(long ****)FUN_7102082760,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_status_se",(long ****)FUN_7102082c30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"stop_status_se",(long ****)FUN_7102082f80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_sequence",(long ****)FUN_7102083030,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_play_hit_se_flag",(long ****)FUN_71020832a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_play_hit_se_flag",(long ****)FUN_7102083410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_no_hit_se",(long ****)FUN_71020834e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_hit_se",(long ****)FUN_7102083650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_hit_se",(long ****)FUN_7102083720,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_damage_se",(long ****)FUN_7102083990,ppppbVar1,in_x4,in_x5,
// ... (87 more lines)
```

## 27. `FUN_7101f31930`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f31930`  (offset `0x1f31930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f31930(undefined8 * param_1, long param_2, ulong * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7476 bytes / 419 bb / 1 incoming refs
- **Match values:** gauge
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

## 28. `FUN_7102053700`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102053700`  (offset `0x2053700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102053700(long param_1)`
- **Size / BBs / Incoming:** 2976 bytes / 5 bb / 2 incoming refs
- **Match values:** gauge
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

## 29. `FUN_7102098770`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102098770`  (offset `0x2098770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102098770(long param_1)`
- **Size / BBs / Incoming:** 1152 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** ArticleModule;generate_article;generate_article_enable;generate_article_have_item;shoot;shoot_exist;gauge_parts_on;set_pos;motion_kind;change_motion;change_motion_from_no;add_motion_2nd;motion_kind_2nd;set_weight;add_motion_partial;plate_side;set_frame;set_frame_2nd;set_rate;change_status;change_status_exist;set_visibility_whole;set_visibility;set_default_visibility;set_situation_kind;set_flag;is_flag;is_flag_from_no;set_int;get_int;set_int64;get_int64;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102098770__7102098770.c)  [cfg](../decompiled/FUN_7102098770__7102098770.mmd)
- **Clone hash:** `a08b3d8ba9ae21a3`

```c

void FUN_7102098770(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ArticleModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"generate_article",(long ****)FUN_7102092e50,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"generate_article_enable",(long ****)FUN_7102093070,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"generate_article_have_item",(long ****)FUN_7102093290,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104378fdc,(long ****)FUN_7102093400,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"shoot",(long ****)FUN_7102093650,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"shoot_exist",(long ****)FUN_7102093850,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_pos",(long ****)FUN_7102093a50,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind",(long ****)FUN_7102093da0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion",(long ****)FUN_7102093f20,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_motion_from_no",(long ****)FUN_7102094200,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_motion_2nd",(long ****)FUN_71020944f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"motion_kind_2nd",(long ****)FUN_7102094980,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
// ... (72 more lines)
```

## 30. `FUN_710200a5a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710200a5a0`  (offset `0x200a5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710200a5a0(long param_1)`
- **Size / BBs / Incoming:** 3168 bytes / 5 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** ControlModule;get_stick_angle;get_stick_dir;is_stick_side;get_sub_stick_dir;is_sub_stickSide;gauge_parts_on;is_enable_flick_jump;start_clatter;set_dec_time;set_dec_time_recovery;set_clatter_time;add_clatter_time;get_clatter_time;set_clatter_stop;is_clatter_stop;start_clatter_motion_rate;end_clatter_motion_rate;end_clatter;is_input_clatter;set_clatter_shake_scale;TRANS_A_JUMP_AERIAL;reset_button;reset_trigger;reset_trigger_2;reset_main_stick_x;set_main_stick_x;reset_main_stick_y;set_main_stick_y;reset_main_stick;reset_sub_stick_x;reset_sub_stick_y;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710200a5a0__710200a5a0.c)  [cfg](../decompiled/FUN_710200a5a0__710200a5a0.mmd)
- **Clone hash:** `5c50430a0a5b5603`

```c

void FUN_710200a5a0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ControlModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
  ;
  FUN_7103728bf0(&local_28,(uint *)"get_stick_angle",(long ****)FUN_7102001900,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_stick_dir",(long ****)FUN_71020019d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_stick_side",(long ****)FUN_7102001aa0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_sub_stick_dir",(long ****)FUN_7102001b70,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_sub_stickSide",(long ****)FUN_7102001c40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_enable_flick_jump",(long ****)FUN_7102001d10,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_clatter",(long ****)FUN_7102001de0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dec_time",(long ****)FUN_71020022d0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_dec_time_recovery",(long ****)FUN_71020024d0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_clatter_time",(long ****)FUN_71020026d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_clatter_time",(long ****)FUN_71020028d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_clatter_time",(long ****)FUN_7102002ad0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
// ... (240 more lines)
```

## 31. `FUN_7101e63d20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e63d20`  (offset `0x1e63d20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e63d20(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 656 bytes / 32 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_off
- **Callers:** FUN_7101944b60
- **Callees:** FUN_7101e957e0;FUN_7101e9b720;FUN_710259c720;FUN_7103778300;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101e63d20__7101e63d20.c)  [cfg](../decompiled/FUN_7101e63d20__7101e63d20.mmd)
- **Clone hash:** `1fd04114a838bbf8`

```c

void FUN_7101e63d20(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar6 = &local_50;
  if (*(char *)(param_1 + 0x271) == '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x272);
  uVar10 = (ulong)bVar1;
  plVar4 = (long *)(param_1 + 0x1c8);
  if (((uVar10 < 4) && (lVar11 = *(long *)(*plVar4 + uVar10 * 8 + 0x48), lVar11 != 0)) &&
     (*(char *)(lVar11 + 0xb0) != '\0')) {
    if (*(char *)(param_1 + 0x1d2) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(lVar11 + 8),0x710438d258);
      *(undefined1 *)(lVar11 + 0xb1) = 0;
    }
    FUN_7101e9b720(plVar4,bVar1,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar11 = param_1 + uVar10 * 4;
    param_3 = (long *********)(ulong)*(ushort *)(lVar11 + 0x254);
    if (param_3 != (long *********)0xffff) {
      param_4 = (byte ****)0x0;
      FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar11 + 0x256),
                     *(ushort *)(lVar11 + 0x254),0,param_5,param_6,param_7,param_8);
      *(undefined2 *)(lVar11 + 0x254) = 0xffff;
// ... (69 more lines)
```

## 32. `FUN_7101ea7720`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ea7720`  (offset `0x1ea7720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ea7720(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9864 bytes / 576 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** mode_empty_03;set_boundingbox;set_boundexingbox;set_boundingbox_icn_t;set_boundingbox_icn_b;set_boundingbox_icn_l;set_boundingbox_icn_r;set_select_point;select_point;set_null_startpoint;set_startpoint_start;set_startpoint_end;gauge_parts_on;set_startpoint_bar;set_null_endtpoint;set_endpoint_start;set_endpoint_end;set_endpoint_bar;set_null_handle;set_handle_start;set_handle_end;set_handle_bar;set_null_handle_touch;set_handle_touch_icn;handle_touch_point;set_null_handle_decide;set_handle_touch_icn_00;handle_touch_point_00;set_handle_icn;hit_00;set_propaty_info;hit_01;...
- **Callers:** FUN_71023b9770
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71032cbf30;FUN_7103773200;FUN_7103776290;FUN_7103776640;FUN_7103776910;FUN_71037780e0;FUN_7103778300;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101ea7720__7101ea7720.c)  [cfg](../decompiled/FUN_7101ea7720__7101ea7720.mmd)
- **Clone hash:** `55d0815116e9b808`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ea7720(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  long ****pppplVar6;
  byte ****ppppbVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long ****pppplVar11;
  long *plVar12;
  long *plVar13;
  long ****pppplVar14;
  ulong uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  long ***local_80;
  ulong local_78;
  long ***local_70;
  undefined4 local_64;
  
  *param_1 = &PTR_FUN_71050b2630;
  param_1[1] = 0;
  param_1[0xc] = 0;
// ... (1995 more lines)
```

## 33. `FUN_7101eb3f90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb3f90`  (offset `0x1eb3f90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb3f90(long param_1)`
- **Size / BBs / Incoming:** 312 bytes / 15 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_parts_on;save_out;maintool_out_dl
- **Callees:** FUN_710376b960;FUN_7103778300;FUN_710377aee0;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb3f90__7101eb3f90.c)  [cfg](../decompiled/FUN_7101eb3f90__7101eb3f90.mmd)
- **Clone hash:** `2b76f3bd33c6d7f6`

```c

void FUN_7101eb3f90(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71044130ab);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71043adf48);
    plVar1 = *(long **)(param_1 + 0x378);
    if ((char)plVar1[0xb] == '\0') {
      *(undefined4 *)(plVar1 + 6) = 0xffffffff;
      FUN_710376b960(plVar1[2]);
      (**(code **)(*plVar1 + 0x40))(plVar1);
      FUN_710377aee0(0x3f800000,(long)(plVar1 + 7));
      *(undefined1 *)(plVar1 + 0xb) = 1;
    }
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71044130ab);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x138))();
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      if (lVar3 == 0) goto LAB_7101eb401c;
    }
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71043adf48);
    if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
  }
// ... (9 more lines)
```

## 34. `FUN_7101b0c270`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b0c270`  (offset `0x1b0c270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b0c270(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 9952 bytes / 478 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** in_00;view_amiibo;view_standard;view_campaign_search;view_spirits_board;set_txt_title;set_txt_title_sdw;set_txt_01;set_txt_num_prize;mnu_reward_souvenir_num;mnu_reward_num;set_txt_num;mnu_reward_n;selector_01;set_parts_btn_next;selector_02;set_parts_det_key_detail;set_parts_det_key_replay;scroll;panel_type_list;set_parts_text_scroll;anim_in_bonus;set_part_bonus;set_txt_score;in_standard_score;set_parts_lvup;anim_glow_off;set_parts_spirit_s%d;set_parts_spirit_p%d;set_txt_sp_level;mel_result_item_unit_35_00;level_line_anim;...
- **Callers:** FUN_7103386910
- **Callees:** FUN_710175bf90;FUN_71019bb740;FUN_71019bb8f0;FUN_7101aff8b0;FUN_7101b0bfc0;FUN_7101b11920;FUN_71032cb040;FUN_71033743c0;FUN_710339ae90;FUN_710339b260;FUN_710339b5e0;FUN_710339b6b0;FUN_710339ba00;FUN_710339bba0;FUN_7103763c70;FUN_7103770b30;...
- **Files:** [decomp](../decompiled/FUN_7101b0c270__7101b0c270.c)  [cfg](../decompiled/FUN_7101b0c270__7101b0c270.mmd)
- **Clone hash:** `da7d2a0b0868d387`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7101b0c270(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long **pplVar2;
  long ***ppplVar3;
  long **pplVar4;
  long ***ppplVar5;
  byte bVar6;
  byte ***pppbVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  void *__dest;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long ***extraout_x1;
  long ***extraout_x1_00;
  long ***extraout_x1_01;
  long ***extraout_x1_02;
  long ***ppplVar20;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
// ... (1886 more lines)
```

## 35. `FUN_7102092330`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102092330`  (offset `0x2092330`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102092330(long param_1)`
- **Size / BBs / Incoming:** 1320 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** TRANS_A_JUMP_AERIAL;WorkModule;get_float;set_float;rnd_float;add_float;gauge_parts_on;sub_float;mul_float;div_float;get_int;set_int;get_int64;set_int64;rnd_int;inc_int;dec_int;add_int;sub_int;mul_int;div_int;count_down_int;is_flag;on_flag;off_flag;set_flag;turn_off_flag;enable_transition_term_group;unable_transition_term_group;clear_transition_term_group;is_enable_transition_term_group;enable_transition_term_group_ex;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102092330__7102092330.c)  [cfg](../decompiled/FUN_7102092330__7102092330.mmd)
- **Clone hash:** `92557daa849afe29`

```c

void FUN_7102092330(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"WorkModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_float",(long ****)FUN_710208de70,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_float",(long ****)FUN_710208dfc0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"rnd_float",(long ****)FUN_710208e1a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_float",(long ****)FUN_710208e420,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sub_float",(long ****)FUN_710208e600,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"mul_float",(long ****)FUN_710208e7e0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"div_float",(long ****)FUN_710208e9c0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_int",(long ****)FUN_710208eba0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_int",(long ****)FUN_710208ecf0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_int64",(long ****)FUN_710208ee40,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_int64",(long ****)FUN_710208ef90,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"rnd_int",(long ****)FUN_710208f0e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"inc_int",(long ****)FUN_710208f240,ppppbVar1,in_x4,in_x5,in_x6,
// ... (85 more lines)
```

## 36. `FUN_7102137e70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102137e70`  (offset `0x2137e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102137e70(long param_1)`
- **Size / BBs / Incoming:** 9332 bytes / 208 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** BattleObjectManager;is_active_find_battle_object;BattleObjectWorld;gravity_speed_coefficient;scale_z;gravity_pos;is_gravity_normal;is_move;move_speed;is_disable_reverse;BattleObjectSlow;rate_request;is_estimate;is_adjust;AreaContactLog;new_lua_table;store_lua_table;load_from_lua_table;LinkEventCapture;LinkEventThrow;ComboModule;reset;clear_setting;count;is_enable_combo_input;DamageTransactorImpl;calc_reaction_frame;GroundUtility;check_dead_area;check_dead_area2;get_degree_gravity;check_ignore_geometry_move_power_stage;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7101fa11c0;FUN_7101fa3990;FUN_7101fc7f30;FUN_7101fcfd60;FUN_7101fea810;FUN_7101ff0700;FUN_7101ff53b0;FUN_7101ff8910;FUN_7101ffcf40;FUN_7102000e80;FUN_710200a5a0;FUN_7102010f10;FUN_71020173c0;FUN_71020271a0;FUN_71020296f0;FUN_710203be10;...
- **Files:** [decomp](../decompiled/FUN_7102137e70__7102137e70.c)  [cfg](../decompiled/FUN_7102137e70__7102137e70.mmd)
- **Clone hash:** `c57706e054d53a86`

```c

void FUN_7102137e70(long param_1)

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
    FUN_7101fa11c0(0);
    FUN_7101fa3990(0);
    FUN_7101fc7f30(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectManager",0xfffffffd,in_x4,in_x5,in_x6,
                   in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_active_find_battle_object",(long ****)FUN_7101fca100,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"BattleObjectWorld",0xfffffffd,in_x4,in_x5,in_x6,in_x7)
    ;
    FUN_7103728bf0(&local_38,(uint *)"gravity_speed_coefficient",(long ****)FUN_7101fca300,ppppbVar5
                   ,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"scale_z",(long ****)FUN_7101fca340,ppppbVar5,in_x4,in_x5,in_x6
// ... (922 more lines)
```

## 37. `FUN_7102043650`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102043650`  (offset `0x2043650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102043650(long param_1)`
- **Size / BBs / Incoming:** 792 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** JostleModule;set_status;set_layer;set_fix;set_ignore_speed_x;sleep;is_sleep;jostle_speed_x;speed_attenuation_rate;target_weight;pos_z;TRANS_A_JUMP_AERIAL;set_refer;set_push_speed_x;set_push_speed_x_2;set_priority;priority;set_force_gap;gauge_parts_on;set_ignore_owner_id;ignore_owner_id;reset_area;overlap_x;set_ignore_pri;set_push_speed_x_overlap_rate;set_push_speed_x_overlap_rate_status;area_kind;weight;set_weight;set_influence_opponent_weight;set_propagate_push_speed;set_overlap_rate_mul;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102043650__7102043650.c)  [cfg](../decompiled/FUN_7102043650__7102043650.mmd)
- **Clone hash:** `448bea9da3d6de20`

```c

void FUN_7102043650(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"JostleModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_7102040fc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_layer",(long ****)FUN_7102041130,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fix",(long ****)FUN_7102041260,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_ignore_speed_x",(long ****)FUN_71020413d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7102041540,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_sleep",(long ****)FUN_71020416b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"jostle_speed_x",(long ****)FUN_7102041780,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"speed_attenuation_rate",(long ****)FUN_7102041850,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"target_weight",(long ****)FUN_7102041920,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_z",(long ****)FUN_71020419f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_refer",(long ****)FUN_7102041ac0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_push_speed_x",(long ****)FUN_7102041c30,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_push_speed_x_2",(long ****)FUN_7102041ea0,ppppbVar1,in_x4,
// ... (41 more lines)
```

## 38. `FUN_710203be10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710203be10`  (offset `0x203be10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710203be10(long param_1)`
- **Size / BBs / Incoming:** 3576 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** GroundModule;update_force;update_shape;get_rhombus;modify_rhombus;set_init_circle;get_circle_radius;set_offset_x;set_offset_y;get_offset_x;get_offset_y;set_rhombus_offset;correct;set_correct;get_correct;set_collidable;set_passable_check;is_passable_check;set_cloud_through;set_ignore_line_type1;set_ignore_boss;is_ignore_fighter_other;set_ignore_fighter_other;is_ignore_fighter_other_wall_l;is_ignore_fighter_other_wall_r;set_correct_ignore_slope;set_cliff_check;TRANS_A_JUMP_AERIAL;cliff_check;select_cliff_hangdata;is_status_cliff;correct_pos;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710203be10__710203be10.c)  [cfg](../decompiled/FUN_710203be10__710203be10.mmd)
- **Clone hash:** `67dcc368bd593160`

```c

void FUN_710203be10(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"GroundModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_force",(long ****)FUN_710202a500,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"update_shape",(long ****)FUN_710202a5b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_rhombus",(long ****)FUN_710202a720,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"modify_rhombus",(long ****)FUN_710202adc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_init_circle",(long ****)FUN_710202b0f0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_circle_radius",(long ****)FUN_710202b420,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_offset_x",(long ****)FUN_710202b4f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_offset_y",(long ****)FUN_710202b6c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_offset_x",(long ****)FUN_710202b890,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_offset_y",(long ****)FUN_710202b960,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_rhombus_offset",(long ****)FUN_710202ba30,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"correct",(long ****)FUN_710202bcb0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_correct",(long ****)FUN_710202bde0,ppppbVar1,in_x4,in_x5,
// ... (273 more lines)
```

## 39. `FUN_7101fcfd60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fcfd60`  (offset `0x1fcfd60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fcfd60(long param_1)`
- **Size / BBs / Incoming:** 864 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** AreaModule;gauge_parts_on;force_update;set_auto_layer_update;clean;set_layer;layer;set_whole;TRANS_A_JUMP_AERIAL;get_whole;get_group;area_instance_size;enable_area;is_enable_area;reset_area;set_area_target_group_mask;set_area_target_local_group_mask;set_area_shape_aabb;set_area_shape_circle;set_area_shape_type;set_center_x0;get_area_id;is_exist_area_instance;get_area_index_from_id;get_area_contact_count;get_area_contact_log;get_area_contact_target_id;erase_wind;add_wind_area_2nd;add_wind_area_2nd_rad;sleep;is_sleep;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fcfd60__7101fcfd60.c)  [cfg](../decompiled/FUN_7101fcfd60__7101fcfd60.mmd)
- **Clone hash:** `292bf33ca5e4dc53`

```c

void FUN_7101fcfd60(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"AreaModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"force_update",(long ****)FUN_7101fcc2a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_auto_layer_update",(long ****)FUN_7101fcc350,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_7101fcc4c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_layer",(long ****)FUN_7101fcc570,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"layer",(long ****)FUN_7101fcc6c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_whole",(long ****)FUN_7101fcc810,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_whole",(long ****)FUN_7101fcc980,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_group",(long ****)FUN_7101fcca50,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"area_instance_size",(long ****)FUN_7101fccba0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"enable_area",(long ****)FUN_7101fccc80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_enable_area",(long ****)FUN_7101fccea0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_area",(long ****)FUN_7101fccff0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_area_target_group_mask",(long ****)FUN_7101fcd120,ppppbVar1,
// ... (47 more lines)
```

## 40. `FUN_7101e51da0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e51da0`  (offset `0x1e51da0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e51da0(float param_1, long param_2, ulong param_3, undefined8 param_4, undefined8 param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 396 bytes / 19 bb / 9 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_progress;progress_finish;progress_finish_stop;mode_empty_03;progress_loop;finish_off;finish_on
- **Callers:** FUN_7101e50b10
- **Callees:** FUN_71037780e0;FUN_7103778300;FUN_7103778630;FUN_710377aee0;FUN_71037964b0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7101e51da0__7101e51da0.c)  [cfg](../decompiled/FUN_7101e51da0__7101e51da0.mmd)
- **Clone hash:** `6b67de3d97aeceaa`

```c

void FUN_7101e51da0(float param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined **local_50;
  ulong local_48;
  
  lVar4 = *(long *)(param_2 + 8);
  fVar5 = 0.0;
  if ((*(long *)(lVar4 + 8) != 0) &&
     (plVar1 = (long *)FUN_71037964b0(*(long *)(lVar4 + 8),0x71043cfbba), fVar5 = 0.0,
     plVar1 != (long *)0x0)) {
    fVar5 = (float)(**(code **)(*plVar1 + 0x1a8))();
    lVar4 = *(long *)(param_2 + 8);
  }
  FUN_7103778630((ulong)(uint)(fVar5 * param_1),lVar4,0x71043cfbba);
  if ((param_3 & 1) != 0) {
    FUN_71037780e0(&local_50,param_2,(long ****)"progress_finish",param_4,param_5,param_6,param_7,
                   param_8,param_9);
    uVar3 = local_48;
    if ((*(long **)(local_48 + 8) == (long *)0x0) ||
       (uVar2 = (**(code **)(**(long **)(local_48 + 8) + 0x138))(), (uVar2 & 1) != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x71043bec46);
    }
    else if ((*(long **)(local_48 + 8) == (long *)0x0) ||
            (uVar2 = (**(code **)(**(long **)(local_48 + 8) + 0x130))(), (uVar2 & 1) == 0)) {
      FUN_710377aee0(0x3f800000,(long)&local_50);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),0x710433a73c);
    local_50 = &PTR_FUN_710523d9e8;
    local_48 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
// ... (15 more lines)
```

## 41. `FUN_7101eaa850`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eaa850`  (offset `0x1eaa850`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eaa850(long param_1, int param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 852 bytes / 41 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** made_stage;set_txt_00;set_rep_00;preview_l;make_stage;favorite_off;gauge_parts_on;fourperson_off;mode_empty_03;download_off;preview_m;preview_s;favorite_on;fourperson_on;download_on
- **Callers:** FUN_7101eaabf0
- **Callees:** FUN_71017ceba0;FUN_7103776910;FUN_7103778300;FUN_7103779480;FUN_710377a310;FUN_710392eb40;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range
- **Files:** [decomp](../decompiled/FUN_7101eaa850__7101eaa850.c)  [cfg](../decompiled/FUN_7101eaa850__7101eaa850.mmd)
- **Clone hash:** `a6a429804c075113`

```c

void FUN_7101eaa850(long param_1,int param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  long *********ppppppppplVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined **local_208;
  long *local_200;
  undefined **local_1f8;
  ulong local_1f0;
  undefined4 local_1e8 [2];
  undefined1 auStack_1e0 [4];
  char local_1dc;
  long ********apppppppplStack_d8 [4];
  undefined8 local_b4;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined5 uStack_98;
  char cStack_93;
  char cStack_92;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
// ... (137 more lines)
```

## 42. `FUN_7101f35b00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f35b00`  (offset `0x1f35b00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f35b00(long param_1, long param_2, ulong * param_3, long * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5972 bytes / 325 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_parts_on;set_parts_btn_edit_00;set_parts_btn_edit_01;cursor_lr_00;set_parts_csr_l;set_parts_csr_r;set_scr_txt_footer_00;mnu_replay_movie_edit_cap_help;set_scr_txt_footer_01;selector_0;set_parts_btn_edit_%02d;set_parts_btn_edit_02;set_parts_btn_edit_03;selector_2;set_parts_btn_color_%02d;set_color_list_01;set_color_list_00;selector_3;arrow_csr;selector_4;set_parts_btn_decide;set_parts_preview;set_parts_tellop_text;set_parts_tellop_screen
- **Callers:** FUN_7101f09580
- **Callees:** FUN_7101f3e4e0;FUN_7101f3fe20;FUN_7101f41070;FUN_71032cbf30;FUN_710337df20;FUN_710376e070;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103771d60;FUN_71037760f0;FUN_7103776390;FUN_7103776640;FUN_7103776910;FUN_7103778760;FUN_7103779d90;...
- **Files:** [decomp](../decompiled/FUN_7101f35b00__7101f35b00.c)  [cfg](../decompiled/FUN_7101f35b00__7101f35b00.mmd)
- **Clone hash:** `d32446fb2fb8b11b`

```c

void FUN_7101f35b00(long param_1,long param_2,ulong *param_3,long *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long ****pppplVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  undefined **local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  long *local_1b8;
  undefined **local_1b0;
  long *local_1a8;
  byte ***local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
// ... (1014 more lines)
```

## 43. `FUN_7101eb4a80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb4a80`  (offset `0x1eb4a80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb4a80(long param_1)`
- **Size / BBs / Incoming:** 216 bytes / 10 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** maintool_change_playng_dl;gauge_parts_on;save_out
- **Callees:** FUN_7103778300;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb4a80__7101eb4a80.c)  [cfg](../decompiled/FUN_7101eb4a80__7101eb4a80.mmd)
- **Clone hash:** `4870c244bcf860ae`

```c

void FUN_7101eb4a80(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x710435bee2);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71044130ab);
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_71037964b0(lVar3,0x710435bee2);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x138))();
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      if (lVar3 == 0) goto LAB_7101eb4b0c;
    }
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71044130ab);
    if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
  }
LAB_7101eb4b0c:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


```

## 44. `FUN_7101f94540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
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

## 45. `FUN_7101c3aed0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101c3aed0`  (offset `0x1c3aed0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101c3aed0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 7708 bytes / 262 bb / 2 incoming refs
- **Match values:** gauge
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

## 46. `FUN_71020d8170`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020d8170`  (offset `0x20d8170`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020d8170(long param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1948 bytes / 21 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** new_instance_lua;hit_stop_frame_;attack_data_;speed_;angle_;brake_;accel_y_;to_fall_speed_;shoot_3d_;gauge_parts_on;speed_3d_;collision_layer_;arrival_z_;add_speed_;soot_frame_;hit_z_;hit_num_;hit_rect_;hit_index_;gimmick_collision_layer_;speed_stable_y_;brake_y_;brake_x_;reaction_frame_;damage_reaction_rate_;damage_reaction_min_;damage_reaction_max_;can_enter_
- **Callers:** FUN_71020d8080
- **Callees:** FUN_71020d4810;FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020d8170__71020d8170.c)  [cfg](../decompiled/FUN_71020d8170__71020d8170.mmd)
- **Clone hash:** `9e70a13f67f371da`

```c

void FUN_71020d8170(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  FUN_71020d4810(param_1,param_2);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = FUN_71020d8910;
  *(undefined4 *)(puVar2 + 1) = 2;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"pos_");
  }
  else {
    if (0 < *(long *)(*(long *)(param_2 + 0x18) + 0x18)) {
      FUN_71038fec40(param_2);
    }
    lVar3 = FUN_710391e050(param_2);
    plVar4 = *(long **)(param_2 + 0x10);
    *(undefined4 *)(plVar4 + 1) = 0x45;
    *plVar4 = lVar3;
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x10;
    FUN_710391d4c0(param_2,lVar3,0,4);
  }
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  puVar5[2] = 3;
  *puVar5 = uVar7;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"x");
// ... (225 more lines)
```

## 47. `FUN_7101eb3310`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101eb3310`  (offset `0x1eb3310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101eb3310(long param_1)`
- **Size / BBs / Incoming:** 216 bytes / 10 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** gauge_parts_on;save_out;maintool_out_dl
- **Callees:** FUN_7103778300;FUN_71037964b0
- **Files:** [decomp](../decompiled/FUN_7101eb3310__7101eb3310.c)  [cfg](../decompiled/FUN_7101eb3310__7101eb3310.mmd)
- **Clone hash:** `4538eddc6b943581`

```c

void FUN_7101eb3310(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71044130ab);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71043adf48);
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71044130ab);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x138))();
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      if (lVar3 == 0) goto LAB_7101eb339c;
    }
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71043adf48);
    if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
  }
LAB_7101eb339c:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}


```

## 48. `FUN_7101b3d470`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b3d470`  (offset `0x1b3d470`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b3d470(long * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12376 bytes / 606 bb / 1 incoming refs
- **Match values:** gauge
- **Strings touched:** }GebE;on_right_blank;on_right_snake;on_left_blank;on_left_campbell;on_left_meilin;on_left_otacon;on_left_slippy;in_serif;out_serif;loop_left_eye_00;loop_left_eye_01;loop_left_eye_02;loop_left_eye_03;loop_left_mouth_00;loop_left_mouth_01;loop_left_mouth_02;loop_left_mouth_03;loop_right_eye_00;loop_right_eye_01;loop_right_eye_02;loop_right_eye_03;loop_right_mouth_00;loop_right_mouth_01;loop_right_mouth_02;loop_right_mouth_03;loop_gauge_stop;loop_gauge;set_txt_serif
- **Callers:** FUN_71013d9f40
- **Callees:** FUN_7101414b10;FUN_7101438520;FUN_7101438690;FUN_71014388e0;FUN_71032cbf30;FUN_7103773200;FUN_7103776910;FUN_71037780e0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7101b3d470__7101b3d470.c)  [cfg](../decompiled/FUN_7101b3d470__7101b3d470.mmd)
- **Clone hash:** `8bd3500a24dab049`

```c

void FUN_7101b3d470(long *param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong uVar2;
  long ***ppplVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar4;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar5;
  char *pcVar6;
  byte ****ppppbVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  long ***local_c0;
  undefined8 *local_b8;
  long ***local_b0;
  undefined8 *local_a8;
  long ***local_a0;
  undefined8 *local_98;
  long ***local_90;
  undefined8 *local_88;
  long ***local_80;
  undefined8 *local_78;
  long ***local_70;
  undefined4 local_64;
  
  *param_1 = param_2;
  puVar1 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar4 = extraout_x1;
  if (puVar1 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
// ... (2380 more lines)
```

## 49. `FUN_710209f330`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710209f330`  (offset `0x209f330`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710209f330(long param_1)`
- **Size / BBs / Incoming:** 1368 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
- **Strings touched:** ItemModule;have_item;have_item_instance;use_item_instance;use_item;pickup_item;is_success_pickup_item;success_auto_pickup_item;is_success_auto_pickup_item;is_have_item;get_have_item_size;get_have_item_kind;get_have_item_trait;get_have_item_hold_kind;get_have_item_status_param_int;TRANS_A_JUMP_AERIAL;get_have_item_status_param_float;get_have_item_status_param_bool;get_have_item_id;get_pickable_item_object_id;get_pickable_item_size;get_pickable_item_kind;get_pickable_item_trait;remove_item;remove_all;throw_item;drop_item;warp_item;warp_attach_item;born_item;shoot_item_bullet;shoot_item_bullet_blanks;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710209f330__710209f330.c)  [cfg](../decompiled/FUN_710209f330__710209f330.mmd)
- **Clone hash:** `680ab56bcc400506`

```c

void FUN_710209f330(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ItemModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"have_item",(long ****)FUN_7102099050,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"have_item_instance",(long ****)FUN_7102099350,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"use_item_instance",(long ****)FUN_71020997a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"use_item",(long ****)FUN_71020999a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pickup_item",(long ****)FUN_7102099b80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_success_pickup_item",(long ****)FUN_7102099db0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"success_auto_pickup_item",(long ****)FUN_7102099e80,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_success_auto_pickup_item",(long ****)FUN_7102099f30,ppppbVar1
                 ,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_have_item",(long ****)FUN_710209a000,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_size",(long ****)FUN_710209a150,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_kind",(long ****)FUN_710209a2b0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_trait",(long ****)FUN_710209a410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_have_item_hold_kind",(long ****)FUN_710209a570,ppppbVar1,
// ... (89 more lines)
```

## 50. `FUN_7102068680`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102068680`  (offset `0x2068680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102068680(long param_1)`
- **Size / BBs / Incoming:** 2496 bytes / 4 bb / 2 incoming refs
- **Match values:** gauge
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

