# battle_end (funcs=2, hits=2)

Top 50 functions by hit count

## 1. `FUN_71022e06a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71022e06a0`  (offset `0x22e06a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71022e06a0(long param_1, undefined8 param_2, ulong param_3, ulong param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4752 bytes / 238 bb / 1 incoming refs
- **Match values:** battle_end
- **Strings touched:** set_btn_helptxt_00;battle_end_%d;battle%d_rank_on;battle%d_rank_off;battle%d_rank_%d;anim_result;set_txt_help;mnu_amiibo_journey_finish
- **Callees:** FUN_71000001c0;FUN_710062dc20;FUN_710137bc30;FUN_7101764000;FUN_710179d930;FUN_710179e400;FUN_71017a8ca0;FUN_71017a91b0;FUN_71017a9500;FUN_71017a96c0;FUN_71017a9810;FUN_71017abd00;FUN_7101991290;FUN_71022e4530;FUN_710324bb60;FUN_71032631a0;...
- **Files:** [decomp](../decompiled/FUN_71022e06a0__71022e06a0.c)  [cfg](../decompiled/FUN_71022e06a0__71022e06a0.mmd)
- **Clone hash:** `8ce97852e5ac5428`

```c

/* WARNING: Removing unreachable block (ram,0x0071022e1278) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71022e06a0(long param_1,undefined8 param_2,ulong param_3,ulong param_4,long ****param_5,
                   byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  ulong *puVar5;
  undefined1 uVar6;
  int iVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  long lVar18;
  char *pcVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  undefined1 uVar23;
  int iVar24;
  ulong uVar25;
  ulong *puVar26;
  undefined1 *puVar27;
  long lVar28;
  char local_2ec;
  ushort local_2e8;
  uint local_2d8;
  undefined4 uStack_2d4;
// ... (765 more lines)
```

## 2. `FUN_71020fbb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** Battle_End
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

