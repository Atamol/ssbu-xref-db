# transport (funcs=30, hits=95)

Top 50 functions by hit count

## 1. `FUN_71021eaa80`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021eaa80`  (offset `0x21eaa80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021eaa80(void)`
- **Size / BBs / Incoming:** 6012 bytes / 4 bb / 1 incoming refs
- **Match values:** TRANSPORT
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

## 2. `FUN_7100201e50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100201e50`  (offset `0x201e50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100201e50(void)`
- **Size / BBs / Incoming:** 1464 bytes / 82 bb / 1 incoming refs
- **Match values:** Transport
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsConnecting();(IsConnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001bec20;FUN_71001da0e0;FUN_71001f2180;FUN_7100202410;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_7100201e50__7100201e50.c)  [cfg](../decompiled/FUN_7100201e50__7100201e50.mmd)
- **Clone hash:** `f2aaf80b617f8060`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100201e50(undefined4 *param_1,long *param_2,long param_3,long param_4,long param_5,
                   long *param_6,int param_7)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_98;
  
  iVar4 = 10000000;
  if (param_7 != -1) {
    iVar4 = param_7;
  }
  uVar9 = (**(code **)(*param_2 + 0x60))();
  if (((((uVar9 & 1) == 0) && (*(int *)((long)param_2 + 0x114) != 0)) ||
      (uVar9 = (**(code **)(*param_2 + 0x40))(param_2), (uVar9 & 1) != 0)) ||
     (uVar9 = (**(code **)(*param_2 + 0x58))(param_2), (uVar9 & 1) != 0)) {
    uStack_98._0_4_ = 0x80050002;
    goto LAB_7100201ee0;
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  (**(code **)(*param_2 + 0xb0))(param_2,1);
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 8);
// ... (200 more lines)
```

## 3. `FUN_71001f9c80`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f9c80`  (offset `0x1f9c80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f9c80(long param_1)`
- **Size / BBs / Incoming:** 804 bytes / 49 bb / 1 incoming refs
- **Match values:** Transport
- **Strings touched:** SocketTransport::TransportJob;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001f9c20
- **Callees:** FUN_71001af850;FUN_71001af8a0;FUN_71001b1300;FUN_71001b47e0;FUN_71001b4910;FUN_71001cd210;FUN_71001da260;FUN_71001f61e0;FUN_71001fe990;FUN_71001feb20;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001f9c80__71001f9c80.c)  [cfg](../decompiled/FUN_71001f9c80__71001f9c80.mmd)
- **Clone hash:** `3ef1b09d4ae3b4d9`

```c

/* WARNING: Removing unreachable block (ram,0x0071001f9efc) */
/* WARNING: Removing unreachable block (ram,0x0071001f9ee8) */

void FUN_71001f9c80(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x2b8) != 0) goto joined_r0x0071001f9e7c;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto joined_r0x0071001f9e7c;
      }
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x10) == 0)) goto joined_r0x0071001f9e7c;
  puVar8 = FUN_71001af850(0x70);
  if (puVar8 == (undefined8 *)0x0) {
// ... (95 more lines)
```

## 4. `FUN_71020fbb90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** TRANSPORT
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

## 5. `FUN_7100202710`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** Transport
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Transport/PRUDP/PRUDPEndPoint.cpp;IsDisconnecting();chara/chara_4/chara_4_;(IsDisconnecting() && !Core::GetInstance()->GetTerminateImmediately());..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b4200;FUN_71001b4280;FUN_71001b46a0;FUN_71001b4730;FUN_71001b68a0;FUN_71001b6a50;FUN_71001da0e0;FUN_7100202db0;FUN_7100203410;FUN_71002039c0;FUN_7100216320;FUN_7101717960;...
- **Files:** [decomp](../decompiled/FUN_7100202710__7100202710.c)  [cfg](../decompiled/FUN_7100202710__7100202710.mmd)
- **Clone hash:** `04b862fbacc43879`

```c

void FUN_7100202710(undefined8 *param_1,long *param_2,long param_3,long *param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uStack_b0;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (((int)param_2[0x14] == 0) || (uVar7 = (**(code **)(*param_2 + 0x58))(), (uVar7 & 1) == 0)) {
    uStack_b0._0_4_ = 0x80050002;
    goto LAB_71002028e4;
  }
  FUN_7100202db0(param_2);
  (**(code **)(*param_2 + 0xb0))(param_2,3);
  param_2[0x60] = 0;
  param_2[0x5f] = 0;
  param_2[0x61] = param_3;
  param_2[0x62] = *param_4;
  plVar8 = FUN_71001af850(0x238);
  if (plVar8 != (long *)0x0) {
    FUN_7100216320(plVar8,param_2,3,0x60,0,0);
  }
  *(undefined1 *)(plVar8 + 8) = *(undefined1 *)((long)param_2 + 0x1eb);
  uVar5 = (**(code **)(*param_2 + 0xf8))(param_2);
// ... (244 more lines)
```

## 6. `FUN_7100183f80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183f80`  (offset `0x183f80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183f80(void)`
- **Size / BBs / Incoming:** 280 bytes / 17 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;N2nn3pia9transport11DispatchJobE
- **Callees:** FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_710017dcc0
- **Files:** [decomp](../decompiled/FUN_7100183f80__7100183f80.c)  [cfg](../decompiled/FUN_7100183f80__7100183f80.mmd)
- **Clone hash:** `e4fc11220cee332c`

```c

undefined8 FUN_7100183f80(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar4 = aiStack_50;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183b90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalDestroyNetworkJob::WaitForCancel";
    return 0;
  }
  uVar3 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_7100184010_caseD_1;
  case 2:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_30);
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_710017dcc0(*(long *)(param_1 + 0x88));
    if (*(char *)(param_1 + 0x80) == '\0') goto switchD_7100184010_default;
    goto LAB_710018407c;
  case 3:
    FUN_71000bce50(aiStack_40,piVar2 + 1);
// ... (20 more lines)
```

## 7. `FUN_7100176800`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176800`  (offset `0x176800`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176800(void)`
- **Size / BBs / Incoming:** 300 bytes / 13 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::WaitAllClientsAck
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176800__7100176800.c)  [cfg](../decompiled/FUN_7100176800__7100176800.mmd)
- **Clone hash:** `01fed77466b32a7d`

```c

undefined8 FUN_7100176800(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176878_caseD_1;
  case 2:
    *(code **)(param_1 + 0x30) = FUN_7100176930;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitAllClientsAck";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar3 + 1);
    piVar3 = aiStack_50;
// ... (18 more lines)
```

## 8. `FUN_71001763d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001763d0`  (offset `0x1763d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001763d0(void)`
- **Size / BBs / Incoming:** 396 bytes / 13 bb / 1 incoming refs
- **Match values:** transport
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::WaitUntilAllClientsConnection
- **Callees:** FUN_71000b2b70;FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001763d0__71001763d0.c)  [cfg](../decompiled/FUN_71001763d0__71001763d0.mmd)
- **Clone hash:** `649aea3060b1bb65`

```c

undefined8 FUN_71001763d0(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176448_caseD_1;
  case 2:
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
    (**(code **)(*plVar4 + 0x148))(plVar4,uVar2);
    aiStack_70[2] = 0;
    aiStack_70[0] = 0x10;
    aiStack_70[1] = 0;
    FUN_71000b2b70();
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(code **)(param_1 + 0x30) = FUN_7100176560;
    *(undefined8 *)(param_1 + 0x38) = 0;
// ... (27 more lines)
```

## 9. `FUN_71001513f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001513f0`  (offset `0x1513f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001513f0(int * param_1)`
- **Size / BBs / Incoming:** 216 bytes / 7 bb / 1 incoming refs
- **Match values:** transport
- **Strings touched:** pia transport heap
- **Callers:** FUN_7103704c60
- **Callees:** FUN_71000b1480;FUN_71000b1a50;FUN_71000bccd0;FUN_71000bce50;FUN_71001531b0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001513f0__71001513f0.c)  [cfg](../decompiled/FUN_71001513f0__71001513f0.mmd)
- **Clone hash:** `c8c2e438a83567b4`

```c

void FUN_71001513f0(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined **local_38;
  char *local_30;
  undefined4 local_28 [2];
  
  FUN_71001531b0();
  bVar1 = FUN_71000b1480();
  if ((bVar1 & 1) == 0) {
    uVar2 = 0x10c08;
  }
  else {
    if (DAT_71052adb48 != '\x01') {
      local_38 = &PTR_FUN_7104f4a288;
      local_30 = "pia transport heap";
      FUN_71000b1a50(0xe,0,(long)&local_38);
      DAT_71052adb48 = '\x01';
      FUN_71000bccd0((int *)&local_38,0xe);
      local_38 = (undefined **)((ulong)local_38 & 0xffffffff00000000);
      goto LAB_7100151494;
    }
    uVar2 = 0x10c02;
  }
  local_38 = (undefined **)CONCAT44(local_38._4_4_,uVar2);
LAB_7100151494:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,(int *)&local_38);
  return;
}


```

## 10. `FUN_7100184800`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184800`  (offset `0x184800`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100184800(long param_1)`
- **Size / BBs / Incoming:** 248 bytes / 13 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE;LocalAllowParticipatingJob::WaitBackgroundJobEnd
- **Callees:** FUN_71000b4300;FUN_71000bce50;FUN_71000bcf30;FUN_710017dde0;FUN_710017eae0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100184800__7100184800.c)  [cfg](../decompiled/FUN_7100184800__7100184800.mmd)
- **Clone hash:** `85eea8d73a1053b4`

```c

undefined8 FUN_7100184800(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = *(int *)(param_1 + 0x68);
  if (*(char *)(*(long *)(param_1 + 0x60) + 0x28) == '\0') {
    uVar2 = 5;
    switch(iVar1) {
    case 1:
      goto switchD_7100184854_caseD_1;
    case 2:
      FUN_710017dde0(*(long *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x98));
      FUN_710017eae0(*(long **)(param_1 + 0xb0));
      local_38[0] = 0;
      goto LAB_710018487c;
    case 3:
      FUN_71000bce50(local_38,(int *)(param_1 + 0x6c));
      break;
    case 4:
      goto switchD_7100184854_caseD_4;
    default:
      return 1;
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_71000b4300(param_1 + 0x68);
    }
switchD_7100184854_caseD_4:
    local_38[0] = 0x6c05;
LAB_710018487c:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
// ... (10 more lines)
```

## 11. `FUN_710017b4d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017b4d0`  (offset `0x17b4d0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017b4d0(long param_1)`
- **Size / BBs / Incoming:** 416 bytes / 13 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE;LocalMatchBrowseMatchmakeJob::UpdateCurrentConnectionStatus
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100146ba0;FUN_7100174cb0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017b4d0__710017b4d0.c)  [cfg](../decompiled/FUN_710017b4d0__710017b4d0.mmd)
- **Clone hash:** `21fb49d14047c38e`

```c

undefined8 FUN_710017b4d0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  piVar4 = aiStack_80;
  if (DAT_71052adb38 == 0) {
switchD_710017b518_caseD_6:
    bVar1 = FUN_7100174cb0(*(long *)(param_1 + 0x60));
    if (bVar1) {
      uVar3 = 5;
    }
    else {
      uVar3 = 0;
      *(code **)(param_1 + 0x30) = FUN_710017b670;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalMatchBrowseMatchmakeJob::UpdateCurrentConnectionStatus";
    }
  }
  else {
    iVar2 = FUN_7100146ba0(DAT_71052adb38);
    switch(iVar2) {
    case 4:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      local_50[0] = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
// ... (41 more lines)
```

## 12. `FUN_7100164960`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100164960`  (offset `0x164960`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100164960(void)`
- **Size / BBs / Incoming:** 492 bytes / 18 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE
- **Callees:** FUN_71000bcf30;FUN_710013bb20;FUN_710013bb30;FUN_71001635a0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100164960__7100164960.c)  [cfg](../decompiled/FUN_7100164960__7100164960.mmd)
- **Clone hash:** `03457f3ed5954988`

```c

void FUN_7100164960(long *param_1,long *param_2)

{
  long lVar1;
  ErrorResultVariant *this;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  lVar1 = DAT_71052ad718;
  this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
  do {
    switch((int)param_1[0x14]) {
    case 1:
    case 3:
      FUN_710013bb20((long)(param_1 + 0xb));
      break;
    case 2:
      (**(code **)(*param_1 + 8))(aiStack_78,param_1);
      if ((param_1[0x17] != 0) && (FUN_71001635a0(aiStack_88,param_1[0x17]), aiStack_88[0] != 0)) {
        FUN_71000bcf30(aiStack_78,aiStack_88);
      }
      if (aiStack_78[0] != 0) {
        aiStack_88[0] = 0x2c03;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
        if (aiStack_78[0] != aiStack_88[0]) {
          aiStack_88[0] = 0x4c0d;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_68[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
          if (aiStack_78[0] != aiStack_88[0]) {
            aiStack_88[0] = 0x2c09;
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_68[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
            if (aiStack_78[0] != aiStack_88[0]) {
              FUN_71000bcf30((int *)(param_1 + 0x15),aiStack_78);
// ... (24 more lines)
```

## 13. `FUN_71001531b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001531b0`  (offset `0x1531b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001531b0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Transport
- **Strings touched:** SDK MW+Nintendo+PiaTransport-5_19_1
- **Callers:** FUN_71001513f0
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71001531b0__71001531b0.c)  [cfg](../decompiled/FUN_71001531b0__71001531b0.mmd)
- **Clone hash:** `1bf9f49335104ba4`

```c

void FUN_71001531b0(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaTransport-5_19_1");
  return;
}


```

## 14. `FUN_7100176f30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176f30`  (offset `0x176f30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176f30(void)`
- **Size / BBs / Incoming:** 372 bytes / 14 bb / 1 incoming refs
- **Match values:** transport
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE
- **Callees:** FUN_71000b2b70;FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176f30__7100176f30.c)  [cfg](../decompiled/FUN_7100176f30__7100176f30.mmd)
- **Clone hash:** `6c4facd2b4d4c83f`

```c

undefined8 FUN_7100176f30(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 uStack_48;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_80;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar3 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_7100176fa8_caseD_1;
  case 2:
    uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,(int *)&uStack_50);
    FUN_71000b4180(puVar1,aiStack_40);
// ... (31 more lines)
```

## 15. `FUN_71001f6670`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f6670`  (offset `0x1f6670`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001f6670(void)`
- **Size / BBs / Incoming:** 268 bytes / 7 bb / 2 incoming refs
- **Match values:** Transport
- **Strings touched:** TransportBufferThread(send)
- **Callees:** FUN_71001af850;FUN_71001b2360;FUN_71001b27e0;FUN_71001b47e0;FUN_71001b4910
- **Files:** [decomp](../decompiled/FUN_71001f6670__71001f6670.c)  [cfg](../decompiled/FUN_71001f6670__71001f6670.mmd)
- **Clone hash:** `ce7f56b9e28d2cb8`

```c

undefined4 FUN_71001f6670(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined **ppuStack_58;
  undefined1 auStack_50 [16];
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar2 = FUN_71001af850(0x78);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 800) = 0;
  }
  else {
    auStack_50[0] = 0;
    puStack_40 = auStack_50;
    uStack_38 = 0x10;
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&ppuStack_58,"TransportBufferThread(send)",-1);
    FUN_71001b2360(puVar2,(long)&ppuStack_58,DAT_7104f577c4);
    puVar2[0xd] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *puVar2 = &PTR_FUN_7104f595c8;
    *(undefined8 **)(param_1 + 800) = puVar2;
    ppuStack_58 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_58);
  }
  if (DAT_7104f577c8 == -0x80000000) {
    pvVar3 = *(void **)(param_1 + 800);
  }
  else {
    pvVar3 = *(void **)(param_1 + 800);
    *(int *)((long)pvVar3 + 0x54) = DAT_7104f577c8;
  }
  *(long *)((long)pvVar3 + 0x68) = param_1;
  *(undefined4 *)((long)pvVar3 + 0x70) = 0;
// ... (6 more lines)
```

## 16. `FUN_7100183540`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183540`  (offset `0x183540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183540(void)`
- **Size / BBs / Incoming:** 280 bytes / 15 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** LocalConnectNetworkJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalConnectNetworkJob::ProcessSucceeded
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000b4990;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_7100183540__7100183540.c)  [cfg](../decompiled/FUN_7100183540__7100183540.mmd)
- **Clone hash:** `1c2d675d49574710`

```c

undefined8 FUN_7100183540(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar4 = aiStack_40;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_71001836f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    uVar3 = FUN_71000b4990(*(long *)(*(long *)(param_1 + 0x68) + 0x400));
    if ((uVar3 & 1) != 0) {
      return 5;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183740;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::ProcessSucceeded";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    piVar4 = aiStack_30;
    break;
  case 4:
// ... (11 more lines)
```

## 17. `FUN_71001f8fc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f8fc0`  (offset `0x1f8fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f8fc0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 928 bytes / 33 bb / 1 incoming refs
- **Match values:** Transport
- **Strings touched:** dys_yoga03_l_03_set;Transport Job
- **Callers:** FUN_71001eea30
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001b1870;FUN_71001b38e0;FUN_71001bd330;FUN_71001bf280;FUN_71001cf760;FUN_71001d5a90;FUN_71001e0c80;FUN_71001f0ba0;FUN_71001f54b0;FUN_71001f5750;FUN_71001f78d0;FUN_7100214450;FUN_7101717960;<EXTERNAL>::memset;...
- **Files:** [decomp](../decompiled/FUN_71001f8fc0__71001f8fc0.c)  [cfg](../decompiled/FUN_71001f8fc0__71001f8fc0.mmd)
- **Clone hash:** `ddfe42fbbf7b3349`

```c

void FUN_71001f8fc0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  FUN_71001f0ba0(param_1);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_7104f57ba8;
  puVar2 = FUN_71001b1820(0x20);
  puVar5 = (undefined8 *)param_1[0x59];
  puVar6 = (undefined8 *)param_1[0x5a];
  if (puVar6 == puVar5) {
    param_1[0x59] = puVar2;
    param_1[0x5a] = puVar2;
    param_1[0x5b] = puVar2 + 4;
  }
  else {
    uVar9 = (long)puVar6 + (-0x10 - (long)puVar5);
    uVar4 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    puVar10 = puVar2;
    if ((uVar4 & 7) != 0) {
      lVar8 = -((ulong)uVar4 & 7);
      puVar7 = puVar6;
      puVar11 = puVar2;
      do {
        puVar6 = puVar7 + -2;
// ... (141 more lines)
```

## 18. `FUN_710017b6c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017b6c0`  (offset `0x17b6c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017b6c0(void)`
- **Size / BBs / Incoming:** 416 bytes / 13 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE;chara/chara_4/chara_4_;LocalMatchBrowseMatchmakeJob::UpdateSessionInfo
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100146ba0;FUN_7100175790;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017b6c0__710017b6c0.c)  [cfg](../decompiled/FUN_710017b6c0__710017b6c0.mmd)
- **Clone hash:** `39a0821b60537145`

```c

undefined8 FUN_710017b6c0(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_80;
  if (DAT_71052adb38 == 0) {
switchD_710017b708_caseD_6:
    bVar1 = FUN_7100175790(*(long *)(param_1 + 0x60));
    if ((bVar1 & 1) == 0) {
      uVar3 = 0;
      *(code **)(param_1 + 0x30) = FUN_710017b860;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalMatchBrowseMatchmakeJob::UpdateSessionInfo";
    }
    else {
      uVar3 = 5;
    }
  }
  else {
    iVar2 = FUN_7100146ba0(DAT_71052adb38);
    switch(iVar2) {
    case 4:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      aiStack_50[0] = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
// ... (45 more lines)
```

## 19. `FUN_7100170610`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170610`  (offset `0x170610`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100170610(long param_1)`
- **Size / BBs / Incoming:** 336 bytes / 13 bb / 1 incoming refs
- **Match values:** transport
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::WaitUntilAllClientsConnection
- **Callees:** FUN_71000b2b70;FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100170610__7100170610.c)  [cfg](../decompiled/FUN_7100170610__7100170610.mmd)
- **Clone hash:** `2b8760c812f48ba9`

```c

undefined8 FUN_7100170610(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100170688_caseD_1;
  case 2:
    local_70[2] = 0;
    local_70[0] = 0x10;
    local_70[1] = 0;
    FUN_71000b2b70();
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(code **)(param_1 + 0x30) = FUN_7100176560;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
// ... (23 more lines)
```

## 20. `FUN_7100173ad0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100173ad0`  (offset `0x173ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100173ad0(void)`
- **Size / BBs / Incoming:** 228 bytes / 14 bb / 3 incoming refs
- **Match values:** transport
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LocalCreateNetworkJob::WaitForCancel;N2nn3pia9transport11DispatchJobE
- **Callees:** FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_7100173ad0__7100173ad0.c)  [cfg](../decompiled/FUN_7100173ad0__7100173ad0.mmd)
- **Clone hash:** `afa5f2cb55c43380`

```c

undefined8 FUN_7100173ad0(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar3 = aiStack_50;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_7100173c50;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalCreateNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_30);
    goto LAB_7100173b9c;
  case 3:
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar2 + 1);
    break;
  default:
    goto switchD_7100173b50_caseD_1;
  }
// ... (7 more lines)
```

## 21. `FUN_710016b2f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016b2f0`  (offset `0x16b2f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710016b2f0(int * param_1, undefined8 param_2, Result * param_3)`
- **Size / BBs / Incoming:** 400 bytes / 25 bb / 23 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE
- **Callers:** FUN_710016b0b0;FUN_710016c000;FUN_710016c030;FUN_710016c060;FUN_710016c090;FUN_710016cd90;FUN_710016ce30;FUN_710016ced0;FUN_710016d4d0;FUN_710016da00;FUN_710016db50;FUN_710016e450;FUN_710016e8a0;FUN_710016ec20;FUN_710016f0c0;FUN_710016f400;...
- **Callees:** FUN_71000bce50;FUN_71000be900;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710016b2f0__710016b2f0.c)  [cfg](../decompiled/FUN_710016b2f0__710016b2f0.mmd)
- **Clone hash:** `a1afe9ad203ac7c9`

```c

void FUN_710016b2f0(int *param_1,undefined8 param_2,Result *param_3)

{
  uint uVar1;
  uint uVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = *(uint *)param_3;
  if (uVar1 == 0) {
    local_40[0] = 0;
    goto LAB_710016b3f0;
  }
  if ((uVar1 & 0x1ff) == 0xcb) {
    uVar2 = uVar1 >> 9 & 0x1fff;
    if (uVar2 - 0x11 < 5) {
switchD_710016b3d8_caseD_5:
      local_40[0] = 0xa46e;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
      FUN_71000bce50(param_1,local_40);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)local_40,param_3);
      FUN_71000be900((long)param_1,(undefined8 *)local_40);
      return;
    }
    if (uVar2 - 0x16 < 5) {
      if ((uVar1 & 0x3ffe00) == 0x3000) {
        local_40[0] = 0xc421;
      }
      else {
        if ((uVar1 & 0x3ffe00) != 0x2e00) goto switchD_710016b3d8_caseD_5;
        local_40[0] = 0xc420;
      }
      goto LAB_710016b3f0;
    }
    switch((uVar1 & 0x3fe000) - 0x4000 >> 0xd) {
    case 0:
// ... (36 more lines)
```

## 22. `FUN_710017b260`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017b260`  (offset `0x17b260`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017b260(long * param_1)`
- **Size / BBs / Incoming:** 504 bytes / 19 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE;session::BrowseMatchmakeJob::CompleteProcess
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017b260__710017b260.c)  [cfg](../decompiled/FUN_710017b260__710017b260.mmd)
- **Clone hash:** `88fc30719d820d80`

```c

undefined8 FUN_710017b260(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = aiStack_90;
  if (DAT_71052adb38 == 0) {
switchD_710017b2a8_caseD_6:
    if (*(int *)param_1[0xb] == 4) {
      (**(code **)(*param_1 + 0x30))(param_1);
      return 1;
    }
    uVar2 = (**(code **)(*(long *)param_1[0x13] + 0x30))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    if ((int)param_1[0xd] == 2) {
      param_1[6] = (long)FUN_710013cda0;
      param_1[7] = 0;
      param_1[8] = (long)"session::BrowseMatchmakeJob::CompleteProcess";
      return 0;
    }
    if ((int)param_1[0xd] != 3) {
      return 5;
    }
    puVar4 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_90,(int *)((long)param_1 + 0x6c));
  }
  else {
// ... (50 more lines)
```

## 23. `FUN_71001f7780`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001f7780`  (offset `0x1f7780`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001f7780(long param_1)`
- **Size / BBs / Incoming:** 336 bytes / 7 bb / 1 incoming refs
- **Match values:** Transport
- **Strings touched:** TransportBufferThread(recv 
- **Callers:** FUN_71001f69f0
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b2360;FUN_71001b27e0;FUN_71001b47e0;FUN_71001b4910;FUN_71001b6080;FUN_71001b60c0
- **Files:** [decomp](../decompiled/FUN_71001f7780__71001f7780.c)  [cfg](../decompiled/FUN_71001f7780__71001f7780.mmd)
- **Clone hash:** `81d69b056f77397a`

```c

void FUN_71001f7780(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined **local_190;
  undefined1 local_188 [16];
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  char *local_160;
  
  FUN_71001b6080(&uStack_168);
  lVar1 = FUN_71001b0ab0((long)&uStack_168,"TransportBufferThread(recv ");
  lVar1 = FUN_71001b0ab0(lVar1,(&PTR_DAT_7104f555e0)[*(uint *)(param_1 + 0xe0)]);
  FUN_71001b0ab0(lVar1,")");
  puVar2 = FUN_71001af850(0x78);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  else {
    local_188[0] = 0;
    local_178 = local_188;
    local_170 = 0x10;
    local_190 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_190,local_160,-1);
    FUN_71001b2360(puVar2,(long)&local_190,DAT_7104f577c0);
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &PTR_FUN_7104f59608;
    *(undefined8 **)(param_1 + 0xd8) = puVar2;
    local_190 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_190);
  }
  if (DAT_7104f577c8 == -0x80000000) {
    pvVar3 = *(void **)(param_1 + 0xd8);
  }
// ... (13 more lines)
```

## 24. `FUN_71001831b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001831b0`  (offset `0x1831b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001831b0(void)`
- **Size / BBs / Incoming:** 116 bytes / 7 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE;LocalEventJob::ProcessUpdateEvent;LocalEventJob::WaitBackgroundJobEnd
- **Files:** [decomp](../decompiled/FUN_71001831b0__71001831b0.c)  [cfg](../decompiled/FUN_71001831b0__71001831b0.mmd)
- **Clone hash:** `bb190bf0608f93e8`

```c

undefined8 FUN_71001831b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  switch(*(undefined4 *)(param_1 + 0x58)) {
  case 1:
    break;
  case 2:
    *(code **)(param_1 + 0x30) = FUN_7100183230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::ProcessUpdateEvent";
    return 0;
  case 3:
    *(code **)(param_1 + 0x30) = FUN_7100183280;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEventJob::WaitBackgroundJobEnd";
    return 0;
  default:
    uVar1 = 1;
  }
  return uVar1;
}


```

## 25. `FUN_71001853d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001853d0`  (offset `0x1853d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001853d0(void)`
- **Size / BBs / Incoming:** 84 bytes / 6 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE;LocalEjectClientListCheckJob::WaitBackgroundJobEnd
- **Files:** [decomp](../decompiled/FUN_71001853d0__71001853d0.c)  [cfg](../decompiled/FUN_71001853d0__71001853d0.mmd)
- **Clone hash:** `cf3160563b87419e`

```c

undefined8 FUN_71001853d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  switch(*(undefined4 *)(param_1 + 400)) {
  case 1:
    break;
  case 2:
  case 3:
    *(code **)(param_1 + 0x30) = FUN_7100185430;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::WaitBackgroundJobEnd";
    return 0;
  default:
    uVar1 = 1;
  }
  return uVar1;
}


```

## 26. `FUN_7100184460`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184460`  (offset `0x184460`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184460(void)`
- **Size / BBs / Incoming:** 240 bytes / 13 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** LocalDisconnectNetworkJob::WaitForCancel;N2nn3pia9transport11DispatchJobE
- **Callees:** FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_710017dcc0
- **Files:** [decomp](../decompiled/FUN_7100184460__7100184460.c)  [cfg](../decompiled/FUN_7100184460__7100184460.mmd)
- **Clone hash:** `cd4cd99bcfcb3144`

```c

undefined8 FUN_7100184460(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar4 = aiStack_50;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_7100184410;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalDisconnectNetworkJob::WaitForCancel";
    return 0;
  }
  uVar3 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_71001844e0_caseD_1;
  case 2:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_30);
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_710017dcc0(*(long *)(param_1 + 0x68));
    break;
  case 3:
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    piVar4 = aiStack_40;
    goto LAB_7100184530;
  case 4:
    FUN_71000bce50(aiStack_50,piVar2 + 1);
// ... (9 more lines)
```

## 27. `FUN_7100176bf0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176bf0`  (offset `0x176bf0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176bf0(void)`
- **Size / BBs / Incoming:** 308 bytes / 13 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::SearchNewHostNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176bf0__7100176bf0.c)  [cfg](../decompiled/FUN_7100176bf0__7100176bf0.mmd)
- **Clone hash:** `46e2b632cdcc3450`

```c

undefined8 FUN_7100176bf0(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176c68_caseD_1;
  case 2:
    *(undefined1 *)(*(long *)(param_1 + 0x78) + 0x47d) = 0;
    *(code **)(param_1 + 0x30) = FUN_7100176d30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::SearchNewHostNetwork";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar3 + 1);
// ... (19 more lines)
```

## 28. `FUN_7100170900`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170900`  (offset `0x170900`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170900(void)`
- **Size / BBs / Incoming:** 684 bytes / 22 bb / 1 incoming refs
- **Match values:** transport
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LdnHostMigrationJob::WaitRetry
- **Callees:** FUN_71000b2b70;FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_710016c090;FUN_7100176130;FUN_710017ddf0;FUN_710017f1c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100170900__7100170900.c)  [cfg](../decompiled/FUN_7100170900__7100170900.mmd)
- **Clone hash:** `68777c10b3b9ce71`

```c

undefined8 FUN_7100170900(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  ErrorResultVariant *this;
  undefined4 *puVar4;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 uStack_48;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_b0;
  puVar4 = *(undefined4 **)(param_1 + 0x58);
  piVar1 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar4 + 10) != '\0') {
    if (*piVar1 == 1) {
      FUN_71000b4300((long)piVar1);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar1) {
  case 1:
    goto switchD_7100170978_caseD_1;
  case 2:
    uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    aiStack_60[0] = 0;
// ... (77 more lines)
```

## 29. `FUN_710017e100`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017e100`  (offset `0x17e100`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017e100(void)`
- **Size / BBs / Incoming:** 732 bytes / 21 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** N2nn3pia9transport11DispatchJobE
- **Callees:** FUN_71000b2850;FUN_71000b2b10;FUN_71000bce50;FUN_7100153d50;FUN_7100180330;FUN_7100180400;FUN_7100180810;FUN_7100182940;FUN_71001829a0;FUN_7100182e70;FUN_7100182e90;<EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017e100__710017e100.c)  [cfg](../decompiled/FUN_710017e100__710017e100.mmd)
- **Clone hash:** `985b52bdac7653db`

```c

void FUN_710017e100(int *param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  uint uVar7;
  int aiStack_98 [4];
  int iStack_88;
  int aiStack_80 [4];
  byte bStack_6e;
  undefined4 auStack_58 [2];
  
  plVar6 = (long *)param_2[2];
  aiStack_80[0] = (**(code **)(*param_2 + 0x18))();
  plVar6 = FUN_7100153d50(plVar6,aiStack_80);
  (**(code **)(*(long *)*plVar6 + 0x98))();
  uVar4 = (**(code **)(*(long *)*plVar6 + 0xa0))();
  if ((uVar4 & 1) == 0) {
    do {
      plVar1 = (long *)0x0;
      if (*(long *)(*plVar6 + 0x40) != 0) {
        plVar1 = (long *)(*plVar6 + 0x40);
      }
      bVar2 = *(byte *)(plVar1 + 6);
      uVar7 = 1;
      if ((bVar2 & 1) != 0) {
        uVar7 = 2;
      }
      if ((bVar2 & 2) != 0) {
        uVar7 = uVar7 + 2;
      }
      if ((bVar2 & 4) != 0) {
        uVar7 = uVar7 + 4;
      }
      if ((bVar2 & 8) != 0) {
// ... (87 more lines)
```

## 30. `FUN_7100175fc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175fc0`  (offset `0x175fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100175fc0(void)`
- **Size / BBs / Incoming:** 356 bytes / 15 bb / 2 incoming refs
- **Match values:** transport
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;N2nn3pia9transport11DispatchJobE;LocalHostMigrationJob::CreateNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bce50;FUN_7100176130;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100175fc0__7100175fc0.c)  [cfg](../decompiled/FUN_7100175fc0__7100175fc0.mmd)
- **Clone hash:** `60e1ce627bec0dd4`

```c

undefined8 FUN_7100175fc0(long *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = (undefined4 *)param_1[0xb];
  piVar3 = (int *)param_1[0xc];
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    param_1[6] = (long)FUN_7100175f70;
    param_1[7] = 0;
    param_1[8] = (long)"LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176038_caseD_1;
  case 2:
    (**(code **)(*(long *)param_1[0xf] + 0x188))();
    if ((char)param_1[0xd] != '\0') {
      param_1[6] = 0x38;
      param_1[7] = 1;
      param_1[8] = (long)"LocalHostMigrationJob::CreateNetwork";
      return 0;
    }
    FUN_71000bb5d0(param_1 + 0x10);
    (**(code **)(*param_1 + 0x48))(param_1);
    return 0;
  case 3:
// ... (24 more lines)
```

