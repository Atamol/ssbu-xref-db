# block (funcs=73, hits=329)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=110)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 2. `FUN_7102aa2190`  (hits=30)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102aa2190`  (offset `0x2aa2190`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102aa2190(undefined8 * param_1, long param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 2492 bytes / 154 bb / 1 incoming refs
- **Match values:** Block
- **Strings touched:** BlockN3;BlockN4;plate_side;BlockN9;BlockN10;BlockN15;BlockN2;BlockN5;BlockN8;BlockN11;BlockN14;BlockN1;BlockN6;BlockN7;BlockN12;BlockN13;BlockN28;BlockN27;BlockN22;BlockN21;BlockN16;BlockN29;BlockN26;BlockN23;BlockN20;BlockN17;BlockN30;BlockN25;BlockN24;BlockN19;BlockN18
- **Callers:** FUN_7102a9dcb0
- **Callees:** FUN_71026533a0;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_7102aa2190__7102aa2190.c)  [cfg](../decompiled/FUN_7102aa2190__7102aa2190.mmd)
- **Clone hash:** `8a40fd98d395162e`

```c

void FUN_7102aa2190(undefined8 *param_1,long param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  plVar2 = param_1 + 3;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0;
  pppplVar5 = (long ****)0x217;
  *(undefined8 *)((long)param_1 + 0x2f4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ec) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x2c4) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 700) = 0;
  *(undefined8 *)((long)param_1 + 0x2b4) = 0;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0;
  pppplVar6 = param_5;
  uVar7 = param_6;
  memset(plVar2,0,0x217);
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x54] = 0;
// ... (430 more lines)
```

## 3. `FUN_7102b16910`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b16910`  (offset `0x2b16910`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b16910(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1848 bytes / 106 bb / 3 incoming refs
- **Match values:** block
- **Strings touched:** red_blockr_set;green_blockl1_set;green_blockl2_set;blue_block_set;redblock2
- **Callers:** FUN_7102b17fe0
- **Callees:** FUN_7102405040;FUN_71025e9d50;FUN_71025f4d80;FUN_7102b22230;FUN_7102b224a0;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7102b16910__7102b16910.c)  [cfg](../decompiled/FUN_7102b16910__7102b16910.mmd)
- **Clone hash:** `04240d5f054a6261`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102b16910(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  uint uVar12;
  long ****pppplVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  long *plVar26;
  undefined1 auVar27 [16];
// ... (364 more lines)
```

## 4. `FUN_7101fc7f30`  (hits=11)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fc7f30`  (offset `0x1fc7f30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fc7f30(long param_1)`
- **Size / BBs / Incoming:** 8568 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 5. `FUN_710009c610`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009c610`  (offset `0x9c610`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710009c610(long param_1)`
- **Size / BBs / Incoming:** 796 bytes / 41 bb / 2 incoming refs
- **Match values:** Block
- **Strings touched:** sysViewUniformBlock;sysEmitterStaticUniformBlock;sysEmitterDynamicUniformBlock;sysEmitterFieldUniformBlock;sysEmitterPluginUniformBlock;sysCustomShaderReservedUniformBlockParam;sysCustomShaderUniformBlock0;select_item;sysCustomShaderUniformBlock1;sysCustomShaderUniformBlock2;sysCustomShaderUniformBlock3
- **Callers:** FUN_710009c9e0;FUN_710009ccf0
- **Callees:** FUN_71000af8c0
- **Files:** [decomp](../decompiled/FUN_710009c610__710009c610.c)  [cfg](../decompiled/FUN_710009c610__710009c610.mmd)
- **Clone hash:** `a18a3d29c6e6eb15`

```c

void FUN_710009c610(long param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined8 *)(param_1 + 0x174) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x16c) = 0xffffffffffffffff;
  piVar1 = (int *)(param_1 + 0x14c);
  *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
  piVar2 = (int *)(param_1 + 0x144);
  piVar3 = (int *)(param_1 + 0x13c);
  *(undefined8 *)(param_1 + 0x15c) = 0xffffffffffffffff;
  piVar4 = (int *)(param_1 + 0x134);
  piVar5 = (int *)(param_1 + 300);
  *(undefined8 *)(param_1 + 0x154) = 0xffffffffffffffff;
  piVar1[0] = -1;
  piVar1[1] = -1;
  piVar2[0] = -1;
  piVar2[1] = -1;
  piVar3[0] = -1;
  piVar3[1] = -1;
  piVar4[0] = -1;
  piVar4[1] = -1;
  piVar5[0] = -1;
  piVar5[1] = -1;
  *(undefined8 *)(param_1 + 0x124) = 0xffffffffffffffff;
  FUN_71000af8c0((undefined4 *)(param_1 + 0x124),*(long *)(param_1 + 8),"sysViewUniformBlock");
  FUN_71000af8c0(piVar5,*(long *)(param_1 + 8),"sysEmitterStaticUniformBlock");
  FUN_71000af8c0(piVar4,*(long *)(param_1 + 8),"sysEmitterDynamicUniformBlock");
  FUN_71000af8c0(piVar3,*(long *)(param_1 + 8),"sysEmitterFieldUniformBlock");
  FUN_71000af8c0(piVar2,*(long *)(param_1 + 8),"sysEmitterPluginUniformBlock");
  FUN_71000af8c0(piVar1,*(long *)(param_1 + 8),"sysCustomShaderReservedUniformBlockParam");
  FUN_71000af8c0((undefined4 *)(param_1 + 0x154),*(long *)(param_1 + 8),
                 "sysCustomShaderUniformBlock0");
  FUN_71000af8c0((undefined4 *)(param_1 + 0x15c),*(long *)(param_1 + 8),
// ... (68 more lines)
```

## 6. `FUN_7101f89310`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f89310`  (offset `0x1f89310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f89310(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 26376 bytes / 55 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 7. `FUN_7101f45620`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f45620`  (offset `0x1f45620`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f45620(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 168788 bytes / 794 bb / 1 incoming refs
- **Match values:** BLOCK;block
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

## 8. `FUN_7101fa11c0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 9. `FUN_71020c9380`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020c9380`  (offset `0x20c9380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020c9380(long param_1)`
- **Size / BBs / Incoming:** 2520 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK;block
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

## 10. `FUN_710200a5a0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710200a5a0`  (offset `0x200a5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710200a5a0(long param_1)`
- **Size / BBs / Incoming:** 3168 bytes / 5 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 11. `FUN_7102053700`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102053700`  (offset `0x2053700`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102053700(long param_1)`
- **Size / BBs / Incoming:** 2976 bytes / 5 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 12. `FUN_7102068680`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102068680`  (offset `0x2068680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102068680(long param_1)`
- **Size / BBs / Incoming:** 2496 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 13. `FUN_7102137e70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102137e70`  (offset `0x2137e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102137e70(long param_1)`
- **Size / BBs / Incoming:** 9332 bytes / 208 bb / 1 incoming refs
- **Match values:** BLOCK
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

## 14. `FUN_710203be10`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710203be10`  (offset `0x203be10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710203be10(long param_1)`
- **Size / BBs / Incoming:** 3576 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 15. `FUN_7100028420`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100028420`  (offset `0x28420`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100028420(long * param_1, int param_2)`
- **Size / BBs / Incoming:** 7628 bytes / 452 bb / 2 incoming refs
- **Match values:** block
- **Strings touched:** plate_side;invalid block type;invalid code lengths set;invalid literal/lengths set;NODE_PRE_REFRACT_BLEND;invalid distances set;incorrect data check;incorrect length check;invalid distance too far back;invalid distance code;invalid literal/length code;invalid code -- missing end-of-block;invalid bit length repeat;too many length or distance symbols;invalid stored block lengths;header crc mismatch;unknown header flags set;unknown compression method;incorrect header check;invalid window size
- **Callers:** FUN_7100012ef0;FUN_71000c04e0
- **Callees:** Libz_SigloMiddlewareInfo;FUN_710002a6c0;FUN_710002a9c0;FUN_710002a9d0;FUN_710002b180;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100028420__7100028420.c)  [cfg](../decompiled/FUN_7100028420__7100028420.mmd)
- **Clone hash:** `ce1835ef9754c84e`

```c

int FUN_7100028420(long *param_1,int param_2)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  void *__dest;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  undefined1 *puVar19;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined2 uVar28;
  int iVar29;
  uint uVar30;
  ulong uVar31;
  uint *puVar32;
  long lVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
// ... (1612 more lines)
```

## 16. `FUN_710009c130`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009c130`  (offset `0x9c130`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710009c130(long * param_1, long param_2)`
- **Size / BBs / Incoming:** 376 bytes / 1 bb / 1 incoming refs
- **Match values:** Block
- **Strings touched:** sysEmitterDynamicUniformBlock;sysEmitterStaticUniformBlock;sysEmitterFieldUniformBlock;sysCurlNoiseTextureArray;sysPosBuff;sysVecBuff;sysPosDeltaBuff;sysScaleBuff;sysRandomBuff;dys_yoga03_l_03_set;sysEmtMat0Buff;sysEmtMat1Buff;sysEmtMat2Buff
- **Callers:** FUN_710009ce40
- **Callees:** FUN_7100038e90
- **Files:** [decomp](../decompiled/FUN_710009c130__710009c130.c)  [cfg](../decompiled/FUN_710009c130__710009c130.mmd)
- **Clone hash:** `677cc167260a58a0`

```c

undefined8 FUN_710009c130(long *param_1,long param_2)

{
  ulong uVar1;
  
  *param_1 = param_2;
  uVar1 = FUN_7100038e90(param_2,5,3,"sysEmitterDynamicUniformBlock");
  *(int *)((long)param_1 + 0xc) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,3,"sysEmitterStaticUniformBlock");
  *(int *)(param_1 + 2) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,3,"sysEmitterFieldUniformBlock");
  *(int *)((long)param_1 + 0x14) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,2,"sysCurlNoiseTextureArray");
  *(int *)(param_1 + 3) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysPosBuff");
  *(int *)((long)param_1 + 0x1c) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysVecBuff");
  *(int *)(param_1 + 4) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysPosDeltaBuff");
  *(int *)((long)param_1 + 0x24) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysScaleBuff");
  *(int *)(param_1 + 5) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysRandomBuff");
  *(int *)((long)param_1 + 0x2c) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat0Buff");
  *(int *)(param_1 + 6) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat1Buff");
  *(int *)((long)param_1 + 0x34) = (int)uVar1;
  uVar1 = FUN_7100038e90(*param_1,5,4,"sysEmtMat2Buff");
  *(int *)(param_1 + 7) = (int)uVar1;
  return 1;
}


```

## 17. `FUN_7101fea810`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fea810`  (offset `0x1fea810`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fea810(long param_1)`
- **Size / BBs / Incoming:** 4752 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** AttackModule;clear_all;clear;sleep_partialy;set_attack;set_attack_2;set_absolute;hit_absolute;hit_absolute_joint;set_absolute_lr;set_whole;sleep;active_part_num;is_attack;set_invalid_invincible;is_invalid_invincible;set_invalid_xlu;is_invalid_xlu;is_hit_abs;set_power;add_power;set_vector;set_size;set_target_category;off_target_kind;set_offset;set_offset2;get_offset2;set_node;set_serial_hit_frame;TRANS_A_JUMP_AERIAL;get_power;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fea810__7101fea810.c)  [cfg](../decompiled/FUN_7101fea810__7101fea810.mmd)
- **Clone hash:** `f5933f559ea092c5`

```c

void FUN_7101fea810(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"AttackModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7101fd11c0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7101fd1270,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep_partialy",(long ****)FUN_7101fd1440,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attack",(long ****)FUN_7101fd1610,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_attack_2",(long ****)FUN_7101fd59c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_absolute",(long ****)FUN_7101fd5b10,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_absolute",(long ****)FUN_7101fd7150,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"hit_absolute_joint",(long ****)FUN_7101fd7510,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_absolute_lr",(long ****)FUN_7101fd76d0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_whole",(long ****)FUN_7101fd7800,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7101fd79a0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"active_part_num",(long ****)FUN_7101fd7b10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_attack",(long ****)FUN_7101fd7bf0,ppppbVar1,in_x4,in_x5,in_x6
// ... (371 more lines)
```

## 18. `FUN_710225b990`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 19. `FUN_710226e860`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226e860`  (offset `0x226e860`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226e860(long param_1)`
- **Size / BBs / Incoming:** 1152 bytes / 4 bb / 2 incoming refs
- **Match values:** block
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

## 20. `FUN_7102b58750`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b58750`  (offset `0x2b58750`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b58750(byte * param_1, long * param_2, long * * * * param_3, char * param_4, long * * * * param_5, uint * param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 2832 bytes / 117 bb / 1 incoming refs
- **Match values:** Block
- **Strings touched:** %s_%s;Misc_PinkBlock;stc_%s_set
- **Callers:** FUN_7102b4d850
- **Callees:** FUN_71000001c0;FUN_7100523f10;FUN_7100525010;FUN_7101764000;FUN_710176bcc0;FUN_7102b5f650;FUN_7102b60b30;FUN_7102b63c80;FUN_71031653d0;FUN_710392e290;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_7102b58750__7102b58750.c)  [cfg](../decompiled/FUN_7102b58750__7102b58750.mmd)
- **Clone hash:** `6398ffe45faf519e`

```c

void FUN_7102b58750(byte *param_1,long *param_2,long ****param_3,char *param_4,long ****param_5,
                   uint *param_6,long ***param_7,long ***param_8)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long ***ppplVar7;
  long *plVar8;
  undefined8 extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *extraout_x1_07;
  undefined8 extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long *extraout_x1_11;
  long *extraout_x1_12;
  long *extraout_x1_13;
  long *extraout_x1_14;
  undefined **ppuVar9;
  long ****pppplVar10;
  undefined1 (*pauVar11) [16];
  byte ****ppppbVar12;
  undefined1 (*pauVar13) [16];
  byte *pbVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 uVar19;
// ... (547 more lines)
```

## 21. `FUN_71020a72d0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020a72d0`  (offset `0x20a72d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020a72d0(long param_1)`
- **Size / BBs / Incoming:** 1632 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 22. `FUN_7101f94540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 23. `FUN_71020ad520`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020ad520`  (offset `0x20ad520`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020ad520(long param_1)`
- **Size / BBs / Incoming:** 504 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 24. `FUN_71020800c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020800c0`  (offset `0x20800c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020800c0(long param_1)`
- **Size / BBs / Incoming:** 960 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** ReflectorModule;clean;is_shield;set_size;set_status;set_status_all;is_turn;is_front;is_hop;get_hop_angle;is_no_hop;set_turn;set_front;set_hop;set_attack_mul;get_attack_mul;set_speed_mul;get_speed_mul;set_life_mul;get_life_mul;set_attack_limit;get_attack_limit;set_hit_stop_mul;is_no_m_ball;get_part_size;get_team_no;set_no_team;set_shield_type;clear_all;clear_all_2;get_center_pos;get_lr;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020800c0__71020800c0.c)  [cfg](../decompiled/FUN_71020800c0__71020800c0.mmd)
- **Clone hash:** `175432b9ad9b169f`

```c

void FUN_71020800c0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ReflectorModule",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_710207cb30,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shield",(long ****)FUN_710207cbe0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_710207cd60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_710207cf90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_all",(long ****)FUN_710207d100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_turn",(long ****)FUN_710207d260,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_front",(long ****)FUN_710207d3b0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hop",(long ****)FUN_710207d500,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hop_angle",(long ****)FUN_710207d650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_no_hop",(long ****)FUN_710207d7a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_turn",(long ****)FUN_710207d8f0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_front",(long ****)FUN_710207dac0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (56 more lines)
```

## 25. `FUN_71020d8170`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020d8170`  (offset `0x20d8170`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020d8170(long param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1948 bytes / 21 bb / 1 incoming refs
- **Match values:** BLOCK
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

## 26. `FUN_710205c800`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710205c800`  (offset `0x205c800`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710205c800(long param_1)`
- **Size / BBs / Incoming:** 816 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** ModelModule;set_rotation_order;rotation_order;TRANS_A_JUMP_AERIAL;scale;set_scale;scale_z;set_scale_z;set_temporary_scale_z;gauge_parts_on;joint_global_position;joint_global_position_with_offset;joint_global_offset_from_top;top_joint_global_position_from_joint;joint_global_rotation;joint_global_axis;set_joint_srt;set_joint_scale;set_joint_rotate;set_joint_translate;clear_joint_srt;joint_rotate;set_visibility;is_visible;set_mesh_visibility;set_alpha;set_color_rgb;set_emmisive_scale;set_render_offset_position;set_depth_offset;set_depth_stencil;virtual_joint_tra;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710205c800__710205c800.c)  [cfg](../decompiled/FUN_710205c800__710205c800.mmd)
- **Clone hash:** `aa5ea58c5cb2d175`

```c

void FUN_710205c800(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ModelModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_rotation_order",(long ****)FUN_7102057810,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"rotation_order",(long ****)FUN_7102057940,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"scale",(long ****)FUN_7102057a20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_scale",(long ****)FUN_7102057af0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"scale_z",(long ****)FUN_7102057cc0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_scale_z",(long ****)FUN_7102057d90,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_temporary_scale_z",(long ****)FUN_7102057f60,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"joint_global_position",(long ****)FUN_7102058130,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"joint_global_position_with_offset",(long ****)FUN_7102058580,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"joint_global_offset_from_top",(long ****)FUN_7102058bf0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"top_joint_global_position_from_joint",(long ****)FUN_7102058fa0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"joint_global_rotation",(long ****)FUN_7102059570,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"joint_global_axis",(long ****)FUN_71020599c0,ppppbVar1,in_x4,
// ... (43 more lines)
```

## 27. `FUN_71020d89f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020d89f0`  (offset `0x20d89f0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71020d89f0(long param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 9264 bytes / 562 bb / 1 incoming refs
- **Match values:** BLOCK
- **Strings touched:** hit_stop_frame_;attack_data_;speed_;angle_;brake_;accel_y_;to_fall_speed_;shoot_3d_;gauge_parts_on;speed_3d_;collision_layer_;arrival_z_;add_speed_;soot_frame_;hit_z_;hit_num_;hit_rect_;hit_index_;gimmick_collision_layer_;speed_stable_y_;brake_y_;brake_x_;reaction_frame_;damage_reaction_rate_;damage_reaction_min_;damage_reaction_max_;can_enter_
- **Callees:** FUN_71020d4a00;FUN_71038f4d40;FUN_7103907f00
- **Files:** [decomp](../decompiled/FUN_71020d89f0__71020d89f0.c)  [cfg](../decompiled/FUN_71020d89f0__71020d89f0.mmd)
- **Clone hash:** `03b7277db53f5998`

```c

uint FUN_71020d89f0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  long local_60;
  int local_58;
  
  FUN_71020d4a00(param_1,param_2,param_3);
  puVar10 = (undefined8 *)(param_2 + 0x20);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar9 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar9 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar9 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar9 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
// ... (1676 more lines)
```

## 28. `FUN_7101fdbb90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fdbb90`  (offset `0x1fdbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fdbb90(undefined4 * param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 3228 bytes / 23 bb / 3 incoming refs
- **Match values:** BLOCK
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

## 29. `FUN_7101fd17f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fd17f0`  (offset `0x1fd17f0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7101fd17f0(undefined8 * param_1, long param_2, int param_3)`
- **Size / BBs / Incoming:** 16836 bytes / 1110 bb / 3 incoming refs
- **Match values:** BLOCK
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

## 30. `FUN_7101968a20`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101968a20`  (offset `0x1968a20`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101968a20(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5656 bytes / 246 bb / 1 incoming refs
- **Match values:** block
- **Strings touched:** satge_size_m;preview_m;satge_size_l;preview_l;satge_size_s;preview_s;limit_on;limit_off;mnu_stgcreate_save_sample_name;set_btn_00;set_txt_name;text_scr_select;text_scr_off;stage_edit;is_created;use_grid;use_testplay;use_layer;member_is_four;num_rail;num_gear;num_cannon;num_spring;num_warp_zone;num_bumper;num_ladder;num_bomb_block;num_explosion_block_;num_wind_area;num_switch
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_71017bcd80;FUN_71017ce460;FUN_71017ce600;FUN_71017ce970;FUN_7101eb8a60;FUN_7101eb95d0;FUN_7101ebadf0;FUN_71023d0640;FUN_7103198780;FUN_7103741810;FUN_710375aa90;FUN_7103771a80;FUN_7103775dc0;FUN_7103775fa0;...
- **Files:** [decomp](../decompiled/FUN_7101968a20__7101968a20.c)  [cfg](../decompiled/FUN_7101968a20__7101968a20.mmd)
- **Clone hash:** `ec2e94d3b8935c56`

```c

void FUN_7101968a20(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint *puVar2;
  void *__src;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  ulong *puVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *__src_00;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  char *pcVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar18;
  undefined8 extraout_x1_01;
  long ****pppplVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  ushort uVar22;
  uint uVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long lVar27;
  ushort *puVar28;
  ushort uVar29;
  short *psVar30;
// ... (849 more lines)
```

## 31. `FUN_710226f500`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** block
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

## 32. `FUN_71020ef8c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020ef8c0`  (offset `0x20ef8c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020ef8c0(long param_1)`
- **Size / BBs / Incoming:** 2436 bytes / 61 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** GimmickEvent;new_lua_table;store_lua_table;load_from_lua_table;GimmickEventPos;GimmickEventNotify;GimmickEventWarp;GimmickEventBarrel;GimmickEventSpring;GimmickEventPipe;GimmickEventTornadoMoveInfo;GimmickEventTornadoShootInfo;GimmickEventTornadoEscape;GimmickEventLadder;GimmickEventCatch;GimmickEventDrumCheckNeedLock;GimmickEventDrumCheckNeedHide;GimmickEventDrumPos;GimmickEventDrumShake;GimmickEventDrumEscape;GimmickEventDrumRelease;GimmickEventSlashLockInfo;GimmickEventSlashEscape
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020ef8c0__71020ef8c0.c)  [cfg](../decompiled/FUN_71020ef8c0__71020ef8c0.mmd)
- **Clone hash:** `bb0ffa1806d3e748`

```c

void FUN_71020ef8c0(long param_1)

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
  FUN_7103728630(&local_38,param_1,(undefined **)"GimmickEvent",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d4770,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020d5460,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020d5680,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"GimmickEventPos",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d5880,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"store_lua_table",(long ****)FUN_71020d66e0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"load_from_lua_table",(long ****)FUN_71020d6900,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
    FUN_71038f55d0(local_38,local_28);
  }
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"GimmickEventNotify",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"new_lua_table",(long ****)FUN_71020d6a20,ppppbVar1,in_x4,in_x5,
// ... (215 more lines)
```

## 33. `FUN_710207c4f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710207c4f0`  (offset `0x207c4f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710207c4f0(long param_1)`
- **Size / BBs / Incoming:** 960 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** AbsorberModule;clean;is_shield;set_size;set_status;set_status_all;is_turn;is_front;is_hop;get_hop_angle;is_no_hop;set_turn;set_front;set_hop;set_attack_mul;get_attack_mul;set_speed_mul;get_speed_mul;set_life_mul;get_life_mul;set_attack_limit;get_attack_limit;set_hit_stop_mul;is_no_m_ball;get_part_size;get_team_no;set_no_team;set_shield_type;clear_all;clear_all_2;get_center_pos;get_lr;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710207c4f0__710207c4f0.c)  [cfg](../decompiled/FUN_710207c4f0__710207c4f0.mmd)
- **Clone hash:** `6fdc832e0eebbb78`

```c

void FUN_710207c4f0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"AbsorberModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7
                );
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_7102078f60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shield",(long ****)FUN_7102079010,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_7102079190,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_71020793c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_all",(long ****)FUN_7102079530,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_turn",(long ****)FUN_7102079690,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_front",(long ****)FUN_71020797e0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hop",(long ****)FUN_7102079930,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hop_angle",(long ****)FUN_7102079a80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_no_hop",(long ****)FUN_7102079bd0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_turn",(long ****)FUN_7102079d20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_front",(long ****)FUN_7102079ef0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (56 more lines)
```

## 34. `FUN_7102043650`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102043650`  (offset `0x2043650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102043650(long param_1)`
- **Size / BBs / Incoming:** 792 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 35. `FUN_71020271a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020271a0`  (offset `0x20271a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020271a0(long param_1)`
- **Size / BBs / Incoming:** 2280 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 36. `FUN_7101b2a1f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b2a1f0`  (offset `0x1b2a1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7101b2a1f0(void)`
- **Size / BBs / Incoming:** 30364 bytes / 1105 bb / 1 incoming refs
- **Match values:** BLOCK
- **Strings touched:** preview_1_00;preview_2_00;preview_3_00;arrows;header_tips;btn_back;set_parts_txt_head_00;set_txt_mode;set_txt_scene;mnu_header_arrow;header_stage;set_hand_%02d;set_preview_st_0%d;set_txt_num_medal;mel_stage_select_art_n;un_decide;off_atteintion;anim_stage_select;set_parts_btn_stage;view_stage;icon_normal;color_able_shortcut;unable_shortcut;blink_on;set_parts_btn_music;view_music;icon_music;player_color_%dp;view_rep_stage;set_rep_stage;set_parts_n_stage_%03d;view_random;...
- **Callers:** FUN_7101b3b1d0
- **Callees:** FUN_71000001c0;FUN_7100058250;FUN_7100058290;FUN_71003a4ca0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101748070;FUN_7101764000;FUN_7101b260a0;FUN_7101b2a000;FUN_7101b31890;FUN_7101b31a10;FUN_7101b323a0;FUN_7101b32b00;FUN_7101b37740;FUN_7101b38160;FUN_7101b38ac0;...
- **Files:** [cfg](../decompiled/FUN_7101b2a1f0__7101b2a1f0.mmd)


## 37. `FUN_7102078920`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102078920`  (offset `0x2078920`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102078920(long param_1)`
- **Size / BBs / Incoming:** 960 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** ShieldModule;clean;is_shield;set_size;set_status;set_status_all;is_turn;is_front;is_hop;get_hop_angle;is_no_hop;set_turn;set_front;set_hop;set_attack_mul;get_attack_mul;set_speed_mul;get_speed_mul;set_life_mul;get_life_mul;set_attack_limit;get_attack_limit;set_hit_stop_mul;is_no_m_ball;get_part_size;get_team_no;set_no_team;set_shield_type;clear_all;clear_all_2;get_center_pos;get_lr;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102078920__7102078920.c)  [cfg](../decompiled/FUN_7102078920__7102078920.mmd)
- **Clone hash:** `84b51e66f4707e69`

```c

void FUN_7102078920(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ShieldModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clean",(long ****)FUN_7102075390,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_shield",(long ****)FUN_7102075440,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_71020755c0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status",(long ****)FUN_71020757f0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_all",(long ****)FUN_7102075960,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_turn",(long ****)FUN_7102075ac0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_front",(long ****)FUN_7102075c10,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_hop",(long ****)FUN_7102075d60,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_hop_angle",(long ****)FUN_7102075eb0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_no_hop",(long ****)FUN_7102076000,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_turn",(long ****)FUN_7102076150,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_front",(long ****)FUN_7102076320,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_hop",(long ****)FUN_7102076480,ppppbVar1,in_x4,in_x5,in_x6,
// ... (55 more lines)
```

## 38. `FUN_71020d1680`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020d1680`  (offset `0x20d1680`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020d1680(long param_1)`
- **Size / BBs / Incoming:** 744 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** ItemKineticModuleImpl;set_throw_param;gauge_parts_on;set_slope_type;set_kinetic_flags;get_kinetic_flags;on_kinetic_flag;off_kinetic_flag;add_speed_consider_gravity;clear_speed;add_speed_damage;slope_angle;set_motion_trans_rate;get_motion_trans_rate;set_motion_trans_angle;get_motion_trans_angle;set_motion_trans_rate_2nd;get_motion_trans_rate_2nd;set_motion_trans_angle_2nd;get_motion_trans_angle_2nd;set_param_gemini;get_sum_speed_simple;set_rot_along_speed_x;it_ai_move;it_ai_type;it_ai_dir_factor;it_ai_distance_factor;it_ai_dir_rot_mode;it_base_rot;set_interpolate_rate
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020d1680__71020d1680.c)  [cfg](../decompiled/FUN_71020d1680__71020d1680.mmd)
- **Clone hash:** `ab5dbeb80529d0d5`

```c

void FUN_71020d1680(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"ItemKineticModuleImpl",0xfffffffd,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_throw_param",(long ****)FUN_71020cd090,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_slope_type",(long ****)FUN_71020cd680,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_kinetic_flags",(long ****)FUN_71020cd7a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_kinetic_flags",(long ****)FUN_71020cd8c0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"on_kinetic_flag",(long ****)FUN_71020cd980,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"off_kinetic_flag",(long ****)FUN_71020cdaa0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_speed_consider_gravity",(long ****)FUN_71020cdbc0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_speed",(long ****)FUN_71020ce0a0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"add_speed_damage",(long ****)FUN_71020ce230,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"slope_angle",(long ****)FUN_71020ce550,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_motion_trans_rate",(long ****)FUN_71020ce7a0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_motion_trans_rate",(long ****)FUN_71020ceac0,ppppbVar1,in_x4
                 ,in_x5,in_x6,in_x7);
// ... (38 more lines)
```

## 39. `FUN_7102b4d850`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b4d850`  (offset `0x2b4d850`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7102b4d850(void)`
- **Size / BBs / Incoming:** 19444 bytes / 1102 bb / 1 incoming refs
- **Match values:** Block
- **Strings touched:** M_hand%02d;stc_%s_set;Misc_Brick;Misc_Hatena;FloatMisc_Railed;Float;Block;Brick;Hatena
- **Callees:** FUN_71000001c0;FUN_71013e0e10;FUN_7101764000;FUN_710176bcc0;FUN_71025d9250;FUN_71025e9d50;FUN_7102616cf0;FUN_7102624740;FUN_7102624870;FUN_7102b53350;FUN_7102b53440;FUN_7102b53c50;FUN_7102b58750;FUN_7102b59260;FUN_7102b59410;FUN_7102b59c30;...
- **Files:** [decomp](../decompiled/FUN_7102b4d850__7102b4d850.c)  [cfg](../decompiled/FUN_7102b4d850__7102b4d850.mmd)
- **Clone hash:** `c8e5977fc1c0db73`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7102b4d850(undefined1 (*param_1) [16],undefined8 param_2,long *********param_3,
                   byte ****param_4,long ****param_5,undefined8 param_6,long ******param_7,
                   long ***param_8)

{
  bool bVar1;
  undefined1 (*pauVar2) [12];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined3 uVar28;
  undefined5 uVar29;
  undefined6 uVar30;
  undefined7 uVar31;
// ... (21927 more lines)
```

## 40. `FUN_7101fec9e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fec9e0`  (offset `0x1fec9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fec9e0(undefined4 * param_1, long param_2)`
- **Size / BBs / Incoming:** 876 bytes / 1 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** new_instance_lua;power_;vector_;r_eff_;r_fix_;r_add_;slip_;stop_frame_;stop_delay_;attr_;sound_level_;sound_attr_;lr_check_;no_stop_;no_effect_;region_;gauge_parts_on;catch_
- **Callers:** FUN_7101fec930;FUN_7101fecd50
- **Callees:** FUN_71038f5390
- **Files:** [decomp](../decompiled/FUN_7101fec9e0__7101fec9e0.c)  [cfg](../decompiled/FUN_7101fec9e0__7101fec9e0.mmd)
- **Clone hash:** `dcb942f91001831e`

```c

void FUN_7101fec9e0(undefined4 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  ulong *puVar6;
  uint *puVar7;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101fec890;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"power_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[1];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"vector_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[2];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"r_eff_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)(int)param_1[3];
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
// ... (78 more lines)
```

## 41. `FUN_7102b06310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b06310`  (offset `0x2b06310`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b06310(long * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1220 bytes / 78 bb / 4 incoming refs
- **Match values:** block
- **Strings touched:** s04_yak_chikuwablock
- **Callers:** FUN_7102af63c0
- **Callees:** FUN_71025e9d50;FUN_71025f4d80;FUN_710262c340;FUN_710262fb80;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_7102b06310__7102b06310.c)  [cfg](../decompiled/FUN_7102b06310__7102b06310.mmd)
- **Clone hash:** `e227e09b65c2151d`

```c

void FUN_7102b06310(long *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  long ****pppplVar6;
  undefined8 *puVar7;
  long *extraout_x1;
  long *plVar8;
  long *extraout_x1_00;
  char *pcVar9;
  long ****pppplVar10;
  ulong uVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  char *pcVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined1 auVar19 [16];
  char local_1c8 [64];
  undefined8 local_188;
  long *local_180;
  uint local_178;
  undefined4 local_174;
  byte local_170 [64];
  long *local_130;
  long *local_128 [2];
  byte local_118 [64];
  long *local_d8;
  long *plStack_d0;
  char local_c0 [64];
  undefined8 local_80;
  long ********local_78;
// ... (214 more lines)
```

## 42. `FUN_71020296f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020296f0`  (offset `0x20296f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020296f0(long param_1)`
- **Size / BBs / Incoming:** 528 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** GrabModule;clear_all;clear;TRANS_A_JUMP_AERIAL;set_constraint;is_grab;set_size;pos_x;center_pos;set_power_up;set_size_mul;set_scale_2nd;sleep;relocate;set_check_front;set_rebound;is_rebound;check_rebound;disable_sub_fighter
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71020296f0__71020296f0.c)  [cfg](../decompiled/FUN_71020296f0__71020296f0.mmd)
- **Clone hash:** `0217c27a30d6b350`

```c

void FUN_71020296f0(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"GrabModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear_all",(long ****)FUN_7102027c00,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"clear",(long ****)FUN_7102027cb0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_constraint",(long ****)FUN_7102027de0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_grab",(long ****)FUN_7102027fb0,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_7104348ff8,(long ****)FUN_7102028100,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size",(long ****)FUN_7102028250,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"pos_x",(long ****)FUN_7102028450,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"center_pos",(long ****)FUN_7102028520,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_710433b19b,(long ****)FUN_7102028690,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_power_up",(long ****)FUN_71020287e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_size_mul",(long ****)FUN_71020289b0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_scale_2nd",(long ****)FUN_7102028b80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"sleep",(long ****)FUN_7102028d50,ppppbVar1,in_x4,in_x5,in_x6,
// ... (19 more lines)
```

## 43. `FUN_7101b1e440`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101b1e440`  (offset `0x1b1e440`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101b1e440(long * * param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1944 bytes / 54 bb / 1 incoming refs
- **Match values:** block
- **Strings touched:** my_music_scroller_;my_music_sort_window_;my_music_sort_window_facade_;reset_incidence_my_music;control_incidence_my_music;control_block_incidence_my_music;is_both_ends_incidence_my_music;is_hold_incidence_my_music;release_incidence_my_music;sort_list_my_music;get_sort_id_my_music;backup_selected_bgm_my_music;select_bgm_from_backup_my_music;get_pitch_bar_loop_se_my_music;on_my_bgm_pos_current_my_music
- **Callees:** FUN_7101b21940;FUN_7101b21a00;FUN_7101b25dd0;FUN_7101b25e90;FUN_7101b26010;FUN_71033744b0;FUN_71033745a0;FUN_7103375650;FUN_7103376af0;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_7101b1e440__7101b1e440.c)  [cfg](../decompiled/FUN_7101b1e440__7101b1e440.mmd)
- **Clone hash:** `87a3168f0fc76df2`

```c

void FUN_7101b1e440(long **param_1,long *param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ***ppplVar1;
  long ****pppplVar2;
  long lVar3;
  long ***local_a8;
  long ***local_a0;
  long ***local_98;
  long ***local_90;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  long ***local_58;
  long ***local_50;
  long ***local_48;
  undefined4 local_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)*param_2;
  }
  FUN_71033744b0(lVar3,"my_music_scroller_",param_1 + 2);
  pppplVar2 = (long ****)(param_1 + 0x14);
  FUN_71033745a0(lVar3,"my_music_sort_window_",pppplVar2);
  if ((long *)*param_2 != (long *)0x0) {
    param_4 = (byte ****)param_1[0x13];
    pppplVar2 = (long ****)&DAT_710439b9ac;
    FUN_7103375650((long *)*param_2,"my_music_sort_window_facade_",&DAT_710439b9ac);
  }
  local_50 = (long ***)FUN_710392e290(0x10,0x38,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  if (local_50 == (long ***)0x0) {
    local_34 = 0;
// ... (287 more lines)
```

## 44. `FUN_71020e5a70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020e5a70`  (offset `0x20e5a70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020e5a70(long param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 840 bytes / 14 bb / 1 incoming refs
- **Match values:** BLOCK
- **Strings touched:** new_instance_lua;upper_;under_;is_exist_upper_;is_exist_under_;is_disabled_
- **Callers:** FUN_71020e59c0
- **Callees:** FUN_71020d4810;FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020e5a70__71020e5a70.c)  [cfg](../decompiled/FUN_71020e5a70__71020e5a70.mmd)
- **Clone hash:** `f65e9d44033576a7`

```c

void FUN_71020e5a70(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  FUN_71020d4810(param_1,param_2);
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  *puVar2 = FUN_71020e5dc0;
  *(undefined4 *)(puVar2 + 1) = 2;
  lVar3 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar3 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar3 + -0x10),"new_instance_lua");
  if ((param_3 & 1) == 0) {
    FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"upper_");
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
// ... (81 more lines)
```

## 45. `FUN_7101ed3b80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101ed3b80`  (offset `0x1ed3b80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101ed3b80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 184 bytes / 10 bb / 1 incoming refs
- **Match values:** block
- **Strings touched:** property_bomb;mnu_stgcreate_edit_setting_block
- **Callees:** FUN_7101ed3aa0;FUN_7103778300
- **Files:** [decomp](../decompiled/FUN_7101ed3b80__7101ed3b80.c)  [cfg](../decompiled/FUN_7101ed3b80__7101ed3b80.mmd)
- **Clone hash:** `37acc3a4c1c97785`

```c

void FUN_7101ed3b80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 8) + 8),0x71042b4ba1);
  FUN_7101ed3aa0(param_1,0x21,"mnu_stgcreate_edit_setting_block",param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(param_1 + 0x34) = 1;
  plVar2 = *(long **)(param_1 + 0x18);
  while (plVar2 != (long *)(param_1 + 0x20)) {
    *(undefined1 *)(plVar2[5] + 0x53) = 0;
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  return;
}


```

## 46. `FUN_71020cb970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020cb970`  (offset `0x20cb970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020cb970(long param_1)`
- **Size / BBs / Incoming:** 720 bytes / 4 bb / 2 incoming refs
- **Match values:** BLOCK
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

## 47. `FUN_7102c0c720`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102c0c720`  (offset `0x2c0c720`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102c0c720(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 15448 bytes / 912 bb / 1 incoming refs
- **Match values:** Block
- **Strings touched:** floatbase%d;SwingN;CSwingBody;%s0000;%s00%02d;ChikuwaBlock%dN;SeesawN;DMStandA;ashiba_set_01;Floatbase2;ship_set_01;ShipN;ship_set
- **Callers:** FUN_7102c0abe0
- **Callees:** FUN_7100532bc0;FUN_710062dc20;FUN_7102405040;FUN_71025e9d50;FUN_71025ee080;FUN_71025f4d80;FUN_710260fdd0;FUN_7102610070;FUN_710262cfa0;FUN_710262fb80;FUN_71026527b0;FUN_71026825a0;FUN_71029ebfb0;FUN_7102c104b0;FUN_7102c10570;FUN_7102c11940;...
- **Files:** [decomp](../decompiled/FUN_7102c0c720__7102c0c720.c)  [cfg](../decompiled/FUN_7102c0c720__7102c0c720.mmd)
- **Clone hash:** `065db9d5d42d4677`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102c0c720(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  float *pfVar1;
  uint uVar2;
  undefined4 *puVar3;
  char cVar4;
  short sVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long ****pppplVar18;
  int *piVar19;
  long extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long *plVar20;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
// ... (2946 more lines)
```

## 48. `FUN_7102b01870`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102b01870`  (offset `0x2b01870`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102b01870(long * param_1, long param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 1456 bytes / 95 bb / 6 incoming refs
- **Match values:** Block
- **Strings touched:** S04_YAK_BlockBrick_wait
- **Callers:** FUN_7102af63c0
- **Callees:** FUN_71025e9d50;FUN_710262c340;FUN_710262fb80;FUN_710392e290
- **Files:** [decomp](../decompiled/FUN_7102b01870__7102b01870.c)  [cfg](../decompiled/FUN_7102b01870__7102b01870.mmd)
- **Clone hash:** `592b3c12150f579d`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102b01870(long *param_1,long param_2,undefined4 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  long *plVar3;
  short sVar4;
  ulong uVar5;
  long lVar6;
  long ****pppplVar7;
  undefined8 *puVar8;
  long *extraout_x1;
  long *plVar9;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  char *pcVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  ulong uVar14;
  byte *pbVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  long *plVar19;
  undefined1 uVar20;
  long *plVar21;
  long lVar22;
  undefined1 auVar23 [16];
  char local_1c8 [64];
  undefined8 local_188;
  long *local_180;
  uint local_178;
  undefined4 local_174;
// ... (282 more lines)
```

## 49. `FUN_71020126d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020126d0`  (offset `0x20126d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020126d0(undefined4 * param_1, long param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1192 bytes / 14 bb / 2 incoming refs
- **Match values:** BLOCK
- **Strings touched:** new_instance_lua;damage_;damage_add_;damage_add_reaction_;power_max_;reaction_max_;damage_lr_;attack_pos_;attack_speed_;damage_add_2nd_;owner_object_id_;shake_scale_;catch_absolute_;no_dead_damage_fly_effect_
- **Callers:** FUN_71020124f0;FUN_7102012b80
- **Callees:** FUN_71038f4d40;FUN_71038f5390;FUN_71038fec40;FUN_710391d4c0;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_71020126d0__71020126d0.c)  [cfg](../decompiled/FUN_71020126d0__71020126d0.mmd)
- **Clone hash:** `1f1cf7ae3f0cff52`

```c

void FUN_71020126d0(undefined4 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint *puVar5;
  long *plVar6;
  undefined4 uVar7;
  
  plVar6 = (long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)*plVar6;
  *puVar1 = FUN_7102012330;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = *param_1;
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[1];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[2];
  puVar4[2] = 3;
  lVar2 = *plVar6;
  *plVar6 = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_add_reaction_");
  puVar4 = (undefined4 *)*plVar6;
  *puVar4 = param_1[3];
  puVar4[2] = 3;
// ... (122 more lines)
```

## 50. `FUN_7101714c00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101714c00`  (offset `0x1714c00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101714c00(long param_1, long param_2, undefined2 * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6812 bytes / 251 bb / 2 incoming refs
- **Match values:** block
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

