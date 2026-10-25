# arena (funcs=14, hits=84)

Top 50 functions by hit count

## 1. `FUN_7103959290`  (hits=40)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103959290`  (offset `0x3959290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103959290(int * param_1)`
- **Size / BBs / Incoming:** 5888 bytes / 323 bb / 1 incoming refs
- **Match values:** Arena;arena
- **Strings touched:** version;<jemalloc>: Failure in xmallctl("%s", ...)
;Version;config;Build-time option settings;config.cache_oblivious;cache_oblivious;config.debug;debug;config.fill;config.lazy_lock;lazy_lock;malloc_conf;config.malloc_conf;NODE_PRE_REFRACT_BLEND;config.prof;config.prof_libgcc;prof_libgcc;config.prof_libunwind;prof_libunwind;config.stats;stats;config.utrace;utrace;config.xmalloc;xmalloc;Run-time option settings;opt.abort;abort;opt.abort_conf;abort_conf;opt.retain;...
- **Callers:** FUN_7103958eb0
- **Callees:** FUN_710392ec40;FUN_710392ecf0;FUN_710392ed90;FUN_71039545b0;FUN_7103957550;FUN_7103959240;FUN_710395a990;FUN_710395ab20;FUN_710395ac50;FUN_710395aca0;FUN_710395ad30;FUN_710395ae40;FUN_710395aea0;FUN_710395af00;FUN_710395af50;FUN_710395afc0;...
- **Files:** [decomp](../decompiled/FUN_7103959290__7103959290.c)  [cfg](../decompiled/FUN_7103959290__7103959290.mmd)
- **Clone hash:** `75bb6240942dc29a`

```c

void FUN_7103959290(int *param_1)

{
  int iVar1;
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
  long ****pppplVar2;
  char *pcVar3;
  long ****pppplVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  uint *puVar8;
  char *in_x5;
  undefined8 in_x6;
  uint *in_x7;
  byte ***local_260;
  long ***local_258;
  undefined1 auStack_250 [16];
  ulong local_240;
  uint local_214;
  long ***local_210;
  undefined1 local_204 [4];
  byte ***local_200;
  long ***local_1f8;
  undefined1 auStack_1f0 [16];
  ulong local_1e0;
  byte ***local_1b8;
  long ***local_1b0;
  undefined1 auStack_1a8 [16];
// ... (616 more lines)
```

## 2. `FUN_71029d6e10`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71029d6e10`  (offset `0x29d6e10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71029d6e10(undefined1[16] param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)`
- **Size / BBs / Incoming:** 11788 bytes / 738 bb / 1 incoming refs
- **Match values:** Arena
- **Strings touched:** 00_B01_Underground05_GimmickL;stc_field_set;00_D01_Arena01L;00_D01_Arena01R;plate_side;dys_bridge_set;00_A03_WaterPlace01R;00_E01_Rockface01L
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7101764000;FUN_7102405040;FUN_71025dd540;FUN_71025e9d50;FUN_71025f0150;FUN_710260fdd0;FUN_71029d9c20;FUN_71029da0f0;FUN_71029daad0;FUN_710313ef20;FUN_7103142120;FUN_7103142390;FUN_71031446b0;FUN_7103146db0;...
- **Files:** [decomp](../decompiled/FUN_71029d6e10__71029d6e10.c)  [cfg](../decompiled/FUN_71029d6e10__71029d6e10.mmd)
- **Clone hash:** `c56452b22e6806a1`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71029d6e10(undefined1 param_1 [16],long param_2,undefined8 param_3,long ****param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
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
  undefined8 uVar18;
  undefined8 uVar19;
  long ***ppplVar20;
  long **pplVar21;
  long ***ppplVar22;
  long **pplVar23;
  bool bVar24;
  uint uVar25;
  uint uVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  int iVar26;
  long *plVar31;
// ... (2258 more lines)
```

## 3. `FUN_710392dca0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392dca0`  (offset `0x392dca0`)
- **Namespace:** `Global`
- **Signature:** `undefined1 __cdecl FUN_710392dca0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 516 bytes / 43 bb / 1 incoming refs
- **Match values:** arena
- **Strings touched:** <jemalloc>: perCPU arena getcpu() not available. Setting narenas to %u.
;<jemalloc>: narenas w/ percpuarena beyond limit (%d)
;<jemalloc>: invalid configuration -- per physical CPU arena with odd number (%u) of CPUs (no hyper threading?).
;select_item;<jemalloc>: Reducing narenas to limit (%d)

- **Callers:** FUN_710392d920
- **Callees:** FUN_71039293d0;FUN_71039296d0;FUN_710392e010;FUN_710392e060;FUN_710392e0b0;FUN_7103957550;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710392dca0__710392dca0.c)  [cfg](../decompiled/FUN_710392dca0__710392dca0.mmd)
- **Clone hash:** `7bbb84c73c92a818`

```c

undefined1
FUN_710392dca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_7105294560 != 2) {
    iVar1 = FUN_71039296d0();
    if (iVar1 < 0) {
      DAT_7105294560 = 2;
      uVar2 = DAT_7106d4b58c;
      if (DAT_7106d4b58c == 0) {
        uVar2 = FUN_710392e060();
      }
      FUN_7103957550((byte *)
                     "<jemalloc>: perCPU arena getcpu() not available. Setting narenas to %u.\n",
                     (ulong)uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (DAT_7106d4b579 == '\x01') {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (0xffe < DAT_7106d434a0) {
        FUN_7103957550((byte *)"<jemalloc>: narenas w/ percpuarena beyond limit (%d)\n",
                       (ulong)DAT_7106d434a0,param_3,param_4,param_5,param_6,param_7,param_8);
        if (DAT_7106d4b579 != '\x01') {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar1 = FUN_710392e010(DAT_7105294560);
      if (((iVar1 == 4) && ((DAT_7106d434a0 & 1) != 0)) &&
         (FUN_7103957550((byte *)
                         "<jemalloc>: invalid configuration -- per physical CPU arena with odd number (%u) of CPUs (no hyper threading?).\n"
                         ,(ulong)DAT_7106d434a0,param_3,param_4,param_5,param_6,param_7,param_8),
// ... (24 more lines)
```

## 4. `FUN_71020fbb90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** Arena
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

## 5. `FUN_71000f0ae0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f0ae0`  (offset `0xf0ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000f0ae0(long param_1)`
- **Size / BBs / Incoming:** 1396 bytes / 55 bb / 3 incoming refs
- **Match values:** areNa
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;ConnectStationJob::ConnectionFailed;NexConnectStationJob::PrepareNatTraversal;NexConnectStationJob::PrepareNatTraversalByRelay
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000b4260;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000c0860;FUN_71000c36d0;FUN_71000c4cd0;FUN_71000c5330;FUN_71000c5390;FUN_71000c5af0;FUN_71001602e0;FUN_7100160300;FUN_7100160320;...
- **Files:** [decomp](../decompiled/FUN_71000f0ae0__71000f0ae0.c)  [cfg](../decompiled/FUN_71000f0ae0__71000f0ae0.mmd)
- **Clone hash:** `edabe3619378abc7`

```c

ulong FUN_71000f0ae0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ErrorResultVariant *this;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  long local_80 [2];
  int local_70 [4];
  ulong local_60;
  undefined4 local_58 [2];
  
  plVar1 = DAT_71052acd90;
  plVar9 = (long *)(param_1 + 0x80);
  iVar6 = FUN_71001602e0((long)plVar9);
  uVar7 = FUN_71000c5330((long)plVar1,iVar6);
  if ((uVar7 & 1) == 0) {
    local_60 = 0;
    FUN_71000bb5d0(&local_60);
    if ((local_60 <= *(ulong *)(param_1 + 0x100)) && (*(int *)(param_1 + 0x108) == 1)) {
      uVar14 = 0x640000;
      uVar7 = 4;
      goto LAB_71000f0dfc;
    }
// ... (190 more lines)
```

## 6. `FUN_71029d3b90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71029d3b90`  (offset `0x29d3b90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71029d3b90(byte * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)`
- **Size / BBs / Incoming:** 10176 bytes / 483 bb / 1 incoming refs
- **Match values:** Arena
- **Strings touched:** dys_spring_set;stc_field_set;TopN_O_OBJ_O_HIR;stc_ladder_set;00_A03_WaterPlace01R;00_E01_Rockface01L;00_D01_Arena01L;00_D01_Arena01R;IPP0004
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_7101764000;FUN_71025d9250;FUN_71025e9d50;FUN_71025f4d80;FUN_71025f5420;FUN_71025f55b0;FUN_710260fdd0;FUN_71029d9c20;FUN_71029da0f0;FUN_710313e6a0;FUN_710313ef20;FUN_7103140260;FUN_7103140b20;FUN_7103141b60;...
- **Files:** [decomp](../decompiled/FUN_71029d3b90__71029d3b90.c)  [cfg](../decompiled/FUN_71029d3b90__71029d3b90.mmd)
- **Clone hash:** `d155a4d3d9891d09`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71029d3b90(byte **param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char cVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte **ppbVar16;
  undefined1 *puVar17;
  long *plVar18;
  ulong uVar19;
  byte ***pppbVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  byte *extraout_x1_01;
  byte *extraout_x1_02;
  byte *extraout_x1_03;
  byte *extraout_x1_04;
  byte *extraout_x1_05;
  byte *extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  byte *extraout_x1_09;
  undefined8 extraout_x1_10;
// ... (2169 more lines)
```

## 7. `FUN_7102841990`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102841990`  (offset `0x2841990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102841990(byte * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, char * param_8)`
- **Size / BBs / Incoming:** 9920 bytes / 543 bb / 1 incoming refs
- **Match values:** Arena;ARENA
- **Strings touched:** 0%d_Item;STG_ARENA_SMOKE;s02_hmdl_01turi_asiba;IPP0104;plate_side;01_Item;s02_01turi_rope;s02_01turi_asiba_koware;s02_02sekizou_a01;s02_02sekizou_a02;02_Item;IPP0202;s02_02sekizou_b01;s02_02sekizou_b02;IPP0203;s02_04kassya_asiba
- **Callees:** FUN_71000001c0;FUN_71003ac560;FUN_710062dc20;FUN_7101764000;FUN_71025d9250;FUN_71025e9d50;FUN_710262bb40;FUN_710262beb0;FUN_710262c340;FUN_7102845920;FUN_7102845d70;FUN_7102845ed0;FUN_71028461f0;FUN_7102846ac0;FUN_7102848440;FUN_7102848de0;...
- **Files:** [decomp](../decompiled/FUN_7102841990__7102841990.c)  [cfg](../decompiled/FUN_7102841990__7102841990.mmd)
- **Clone hash:** `78e99c5f8819e01c`

```c

void FUN_7102841990(byte ****param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   undefined1 (*param_7) [16],char *param_8)

{
  byte ****ppppbVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  byte *pbVar5;
  int *piVar6;
  byte bVar7;
  int iVar8;
  bool bVar9;
  int *piVar10;
  long ***ppplVar11;
  uint uVar12;
  int iVar13;
  byte ***pppbVar14;
  long lVar15;
  long ***ppplVar16;
  byte **ppbVar17;
  long *plVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar19;
  long ****pppplVar20;
  char *pcVar21;
  byte ****ppppbVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  char *pcVar26;
  long ***ppplVar27;
  undefined1 (*pauVar28) [16];
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
// ... (1654 more lines)
```

## 8. `FUN_7102846ac0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102846ac0`  (offset `0x2846ac0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102846ac0(undefined8 * param_1, undefined4 param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, byte * param_6, byte * param_7, byte * param_8, byte * param_9, byte * param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 2076 bytes / 118 bb / 2 incoming refs
- **Match values:** ARENA
- **Strings touched:** STG_ARENA_JIRO_HIT;STG_ARENA_JIRO_BREAK;eff_jirobreak_R
- **Callers:** FUN_7102841990
- **Callees:** FUN_71025e9d50;FUN_7102845ed0;FUN_71028461f0;FUN_710313e6a0;FUN_7103151710;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_7102846ac0__7102846ac0.c)  [cfg](../decompiled/FUN_7102846ac0__7102846ac0.mmd)
- **Clone hash:** `3d8a6504c2f34021`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102846ac0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,byte ****param_4,
                   long ****param_5,byte *param_6,byte *param_7,byte *param_8,byte *param_9,
                   byte *param_10,undefined8 param_11)

{
  uint uVar1;
  long ***ppplVar2;
  byte **ppbVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  char *pcVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  byte **ppbVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  uint uVar28;
  long ****pppplVar29;
  undefined8 *puVar30;
  byte ****ppppbVar31;
// ... (414 more lines)
```

## 9. `FUN_710392a220`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392a220`  (offset `0x392a220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710392a220(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3936 bytes / 309 bb / 1 incoming refs
- **Match values:** arena
- **Strings touched:** JE_MALLOC_CONF;abort;false;Invalid conf value;abort_conf;NODE_PRE_REFRACT_BLEND;metadata_thp;retain;Error setting dss;narenas;Out-of-range conf value;select_item;dirty_decay_ms;muzzy_decay_ms;stats_print;stats_print_opts;tcache;lg_extent_max_active_fit;lg_tcache_max;percpu_arena;background_thread;chara/chara_4/chara_4_;max_background_threads;No THP support;Invalid conf pair
- **Callers:** FUN_710392a070
- **Callees:** FUN_710392b530;FUN_710392b540;FUN_710392b730;FUN_710392b790;FUN_710392b7c0;FUN_710392b7e0;FUN_710392b900;FUN_710392b920;FUN_7103946590;FUN_7103954660;FUN_71039c00b0;<EXTERNAL>::strncmp;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710392a220__710392a220.c)  [cfg](../decompiled/FUN_710392a220__710392a220.mmd)
- **Clone hash:** `72ca6809948cbe2c`

```c

void FUN_710392a220(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte bVar20;
  bool bVar21;
  int iVar22;
  uint uVar23;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
// ... (583 more lines)
```

## 10. `FUN_7103935f80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103935f80`  (offset `0x3935f80`)
- **Namespace:** `Global`
- **Signature:** `undefined4 * __cdecl FUN_7103935f80(long param_1, uint param_2, undefined8 param_3)`
- **Size / BBs / Incoming:** 928 bytes / 54 bb / 1 incoming refs
- **Match values:** arena
- **Strings touched:** arena_large;extent_grow;extent_avail
- **Callers:** FUN_71039298d0
- **Callees:** FUN_710392c730;FUN_7103930460;FUN_7103930890;FUN_7103931ab0;FUN_7103935970;FUN_71039359f0;FUN_7103935b70;FUN_7103936320;FUN_7103936390;FUN_7103936400;FUN_7103936480;FUN_7103936800;FUN_710393c600;FUN_71039441b0;FUN_71039441c0;FUN_7103945d30;...
- **Files:** [decomp](../decompiled/FUN_7103935f80__7103935f80.c)  [cfg](../decompiled/FUN_7103935f80__7103935f80.mmd)
- **Clone hash:** `cb8dbad35f3529cd`

```c

undefined4 * FUN_7103935f80(long param_1,uint param_2,undefined **param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  byte *pbVar6;
  uint local_4c;
  undefined4 *local_48;
  
  if (param_2 == 0) {
    local_48 = (undefined4 *)FUN_71039441b0();
  }
  else {
    local_48 = FUN_71039441c0(param_1,param_2,param_3);
    if (local_48 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  puVar4 = (undefined4 *)FUN_7103945eb0(param_1,local_48,0x7d90,0x40);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_7103936320(puVar4);
    FUN_7103936320(puVar4 + 1);
    *(undefined8 *)(puVar4 + 2) = 0;
    FUN_7103931ab0((undefined8 *)(puVar4 + 0x686),puVar4);
    FUN_7103931ab0((undefined8 *)(puVar4 + 0x688),0);
    FUN_7103946580();
    FUN_7103936320(puVar4 + 0x68a);
    FUN_7103931ab0((undefined8 *)(puVar4 + 0x68c),0);
    FUN_7103930460((undefined8 *)(puVar4 + 0x68e));
    bVar1 = FUN_7103957a50((undefined8 *)(puVar4 + 0x690),"arena_large",0x13,0);
    if (((((bVar1 & 1) == 0) &&
         (bVar1 = FUN_710393c600(param_1,(undefined8 *)(puVar4 + 0x6b6),1,1), (bVar1 & 1) == 0)) &&
        (bVar1 = FUN_710393c600(param_1,(undefined8 *)(puVar4 + 0x85c),2,0), (bVar1 & 1) == 0)) &&
       (bVar1 = FUN_710393c600(param_1,(undefined8 *)(puVar4 + 0xa02),3,0), (bVar1 & 1) == 0)) {
      lVar5 = FUN_7103935970();
      bVar2 = FUN_7103936390((undefined8 *)(puVar4 + 0xba8),lVar5);
// ... (44 more lines)
```

## 11. `FUN_71000f06a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f06a0`  (offset `0xf06a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f06a0(void)`
- **Size / BBs / Incoming:** 228 bytes / 8 bb / 2 incoming refs
- **Match values:** areNa
- **Strings touched:** NexConnectStationJob::ResolveCurrentAddress;NexConnectStationJob::PrepareNatTraversal
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000c5ad0;FUN_7100160340;FUN_7100160350
- **Files:** [decomp](../decompiled/FUN_71000f06a0__71000f06a0.c)  [cfg](../decompiled/FUN_71000f06a0__71000f06a0.mmd)
- **Clone hash:** `9f91bcc33fec9edd`

```c

undefined8 FUN_71000f06a0(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x70) + 0x38) != -2) {
    plVar4 = (long *)(param_1 + 0x80);
    bVar3 = FUN_7100160340((long)plVar4);
    if ((((bVar3 & 1) == 0) && (*(char *)(param_1 + 0x78) != '\0')) ||
       ((bVar3 = FUN_7100160350((long)plVar4), (bVar3 & 1) == 0 &&
        (*(char *)(param_1 + 0x78) != '\0')))) {
      FUN_71000c5ad0(DAT_71052acd90,plVar4,1);
      *(code **)(param_1 + 0x30) = FUN_71000f09f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexConnectStationJob::ResolveCurrentAddress";
      return 0;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71000f0790;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexConnectStationJob::PrepareNatTraversal";
  iVar1 = *(int *)(DAT_71052acd90 + 0xb4);
  iVar2 = *(int *)(DAT_71052acd90 + 0xb8);
  plVar4 = FUN_71000bb680();
  lVar5 = *plVar4;
  lStack_28 = 0;
  FUN_71000bb5d0(&lStack_28);
  *(long *)(param_1 + 0x100) = lStack_28 + lVar5 * ((long)iVar2 + (long)iVar1);
  return 0;
}


```

## 12. `FUN_71000f1060`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f1060`  (offset `0xf1060`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f1060(void)`
- **Size / BBs / Incoming:** 936 bytes / 26 bb / 2 incoming refs
- **Match values:** areNa
- **Strings touched:** NexConnectStationJob::PrepareNatTraversal;NexConnectStationJob::WaitForNatTraversalCompleted;ConnectStationJob::ConnectionFailed
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000c5390;FUN_71000c5af0;FUN_7100138620;FUN_7100160300;FUN_7100160990;FUN_7100161fb0;FUN_7100193a00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f1060__71000f1060.c)  [cfg](../decompiled/FUN_71000f1060__71000f1060.mmd)
- **Clone hash:** `ac215ab973ea1997`

```c

uint FUN_71000f1060(long param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  ErrorResultVariant *this;
  int aiStack_80 [4];
  int aiStack_70 [4];
  ulong uStack_60;
  long lStack_58;
  undefined4 uStack_50;
  undefined4 auStack_48 [2];
  
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar10 = *(int *)((long)DAT_71052acd90 + 0xb4);
    lVar5 = FUN_7100161fb0(DAT_71052add68);
    bVar2 = FUN_7100160300(lVar5 + 8);
    if (bVar2) {
      iVar10 = (int)DAT_71052acd90[0x17] + iVar10;
    }
    bVar2 = FUN_7100160300(param_1 + 0x80);
    if ((bVar2) || (*(char *)(*(long *)(param_1 + 0x70) + 0x38) == -2)) {
      iVar10 = (int)DAT_71052acd90[0x17] + iVar10;
    }
    plVar6 = FUN_71000bb680();
    lVar5 = *plVar6;
    lStack_58 = 0;
    FUN_71000bb5d0(&lStack_58);
    lStack_58 = lStack_58 + lVar5 * iVar10;
LAB_71000f12f8:
// ... (94 more lines)
```

## 13. `nninitStartup`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002c55e0`  (offset `0x2c55e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl nninitStartup(void)`
- **Size / BBs / Incoming:** 60 bytes / 1 bb / 1 incoming refs
- **Match values:** arena
- **Strings touched:** NODE_PRE_REFRACT_BLEND;percpu_arena:percpu,dirty_decay_ms:1
- **Callees:** <EXTERNAL>::nn::os::GetHostArgc;<EXTERNAL>::nn::os::GetHostArgv;<EXTERNAL>::nn::fs::SetAllocator
- **Files:** [decomp](../decompiled/nninitStartup__71002c55e0.c)  [cfg](../decompiled/nninitStartup__71002c55e0.mmd)
- **Clone hash:** `00b4177c90c8992d`

```c

void nninitStartup(void)

{
  DAT_71052b6f18 = "percpu_arena:percpu,dirty_decay_ms:1";
  nn::os::GetHostArgc();
  nn::os::GetHostArgv();
  nn::fs::SetAllocator(FUN_710353c150,FUN_710353c1c0);
  return;
}


```

## 14. `FUN_710392a070`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392a070`  (offset `0x392a070`)
- **Namespace:** `Global`
- **Signature:** `undefined1 __cdecl FUN_710392a070(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 420 bytes / 32 bb / 2 incoming refs
- **Match values:** arena
- **Strings touched:** <jemalloc>: Error in atexit()
;plate_side;arenas
- **Callers:** FUN_710392a020;FUN_710392d920
- **Callees:** FUN_7103927f10;FUN_7103929e50;FUN_710392a220;FUN_7103936550;FUN_7103944150;FUN_7103946280;FUN_7103951030;FUN_71039545b0;FUN_7103957a50;FUN_7103958460;FUN_710395eb80;<EXTERNAL>::memset;<EXTERNAL>::abort;<EXTERNAL>::atexit
- **Files:** [decomp](../decompiled/FUN_710392a070__710392a070.c)  [cfg](../decompiled/FUN_710392a070__710392a070.mmd)
- **Clone hash:** `0f798ea2c73bfe1c`

```c

undefined1
FUN_710392a070(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_11;
  
  DAT_7106d4b578 = 1;
  FUN_710392a220(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((DAT_7106dd4fd4 == '\x01') && (iVar3 = atexit(FUN_710392b180), iVar3 != 0)) &&
     (FUN_71039545b0("<jemalloc>: Error in atexit()\n"), DAT_7106d4b579 == '\x01')) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = FUN_7103958460();
  if ((bVar1 & 1) == 0) {
    bVar2 = FUN_7103946280();
    if (bVar2) {
      local_11 = 1;
    }
    else {
      bVar1 = FUN_7103944150();
      if ((bVar1 & 1) == 0) {
        bVar2 = FUN_7103951030();
        if (bVar2) {
          local_11 = 1;
        }
        else {
          FUN_7103936550();
          bVar1 = FUN_710395eb80();
          if ((bVar1 & 1) == 0) {
            bVar1 = FUN_7103957a50((undefined8 *)&DAT_7106d434a8,"arenas",3,0);
            if ((bVar1 & 1) == 0) {
              DAT_7106d434a4 = 1;
              memset(&DAT_7106d43580,0,8);
// ... (30 more lines)
```

