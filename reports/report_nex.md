# nex (funcs=339, hits=1410)

Top 50 functions by hit count

## 1. `FUN_7102192760`  (hits=10)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102192760`  (offset `0x2192760`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102192760(void)`
- **Size / BBs / Incoming:** 8960 bytes / 13 bb / 1 incoming refs
- **Match values:** NEX
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

## 2. `FUN_71000fec40`  (hits=9)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fec40`  (offset `0xfec40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fec40(void)`
- **Size / BBs / Incoming:** 1944 bytes / 77 bb / 7 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartCreateNextMesh;NexMatchJointSessionJob::StartGetNextMeshHostStationLocation;NexMatchJointSessionJob::WaitStartRetryJoinMesh;NexMatchJointSessionJob::StartLeaveMesh;dys_yoga03_l_03_set
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000c4cc0;FUN_71000d7ea0;FUN_71000d8f90;FUN_71000edff0;FUN_71000ee2e0;FUN_71001405b0;FUN_7100140e30;FUN_7100146ba0;FUN_7100150590;FUN_7100150840;FUN_7100150d50;FUN_71001902d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;...
- **Files:** [decomp](../decompiled/FUN_71000fec40__71000fec40.c)  [cfg](../decompiled/FUN_71000fec40__71000fec40.mmd)
- **Clone hash:** `394ef12fcefe07d8`

```c

undefined8 FUN_71000fec40(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int aiStack_60 [4];
  undefined4 uStack_48;
  int iStack_44;
  
  piVar7 = (int *)&uStack_70;
  FUN_71001902d0(DAT_71052adfc0);
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar8 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_60[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_60[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_60[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
// ... (263 more lines)
```

## 3. `FUN_71000fc7d0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc7d0`  (offset `0xfc7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc7d0(void)`
- **Size / BBs / Incoming:** 1164 bytes / 32 bb / 6 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;chara/chara_4/chara_4_;NexMatchJointSessionJob::SendNextSessionId;NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh;NexMatchJointSessionJob::WaitNextSessionId
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_71000f9670;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149290;FUN_710014e050;FUN_7100150440;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fc7d0__71000fc7d0.c)  [cfg](../decompiled/FUN_71000fc7d0__71000fc7d0.mmd)
- **Clone hash:** `d38cb28c7328b7fd`

```c

undefined8 FUN_71000fc7d0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar5 = aiStack_60;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar2 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar2) {
          FUN_710014e050(aiStack_50,*(long *)(lVar1 + 200),(char)*(undefined4 *)(param_1 + 0x90),
                         *(long *)(param_1 + 0xa0),*(int *)(param_1 + 0xf0),1);
// ... (131 more lines)
```

## 4. `FUN_7100110e60`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110e60`  (offset `0x110e60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110e60(void)`
- **Size / BBs / Incoming:** 1476 bytes / 128 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100190a90;FUN_7100192e90;FUN_7100193560;FUN_7100193a30;FUN_71001a35c0;FUN_71001aca60;FUN_71001d0a10;FUN_71001f16c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110e60__7100110e60.c)  [cfg](../decompiled/FUN_7100110e60__7100110e60.mmd)
- **Clone hash:** `8f794951245e5264`

```c

undefined8 FUN_7100110e60(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  uint auStack_58 [4];
  uint auStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_7100192e90((int *)auStack_48,DAT_71052adfc0);
  auStack_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)auStack_58 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)auStack_58 | 4),(Result *)auStack_38);
  if (auStack_48[0] == auStack_58[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100110ed8:
    pcVar10 = FUN_71001a1d80;
    uVar6 = 0;
    pcVar9 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111284;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_710011125c;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar10 = FUN_71001a2450;
// ... (204 more lines)
```

## 5. `FUN_7100111430`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111430`  (offset `0x111430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111430(void)`
- **Size / BBs / Incoming:** 1188 bytes / 113 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NODE_PRE_REFRACT_BLEND;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexWaitCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111430__7100111430.c)  [cfg](../decompiled/FUN_7100111430__7100111430.mmd)
- **Clone hash:** `5b50e2e5a4a4f5c0`

```c

undefined8 FUN_7100111430(long param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] != aiStack_50[0]) {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x208)) {
      if (*(char *)(param_1 + 0xb3) == -3) {
        if (*(char *)(param_1 + 0xc1) != '\0') {
          pcVar7 = FUN_71001a2450;
          uVar5 = 0;
          pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
          goto LAB_71001118b0;
        }
        cVar2 = *(char *)(param_1 + 0xf0);
        if (cVar2 != '\x01') {
          if (cVar2 != '\x02') {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          else {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          if (cVar3 != '\x01') {
// ... (149 more lines)
```

## 6. `FUN_7100111da0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111da0`  (offset `0x111da0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111da0(void)`
- **Size / BBs / Incoming:** 1296 bytes / 124 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti;NexProcessHostMigrationJob::NexCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_7100192e90;FUN_71001a35c0;FUN_71001d0a10;FUN_71001f16c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100111da0__7100111da0.c)  [cfg](../decompiled/FUN_7100111da0__7100111da0.mmd)
- **Clone hash:** `cc5ee9c8e0dc68aa`

```c

undefined8 FUN_7100111da0(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100111e14:
    pcVar7 = FUN_71001a1d80;
    pcVar8 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_71001121ac;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_7100112188;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar7 = FUN_71001a2450;
    pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
    goto LAB_71001121ac;
  }
// ... (201 more lines)
```

## 7. `FUN_71000fa1c0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fa1c0`  (offset `0xfa1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fa1c0(void)`
- **Size / BBs / Incoming:** 1084 bytes / 43 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::ResendInvitationAsCompanion;NexMatchJointSessionJob::SendLeaveMeshCompanion;NexMatchJointSessionJob::StartCreateMatchmakeSession;NexMatchJointSessionJob::StartJoinMatchmakeSession;chara/chara_4/chara_4_;NexMatchJointSessionJob::StartRandomMatchmake
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_7100150680;FUN_71001508c0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fa1c0__71000fa1c0.c)  [cfg](../decompiled/FUN_71000fa1c0__71000fa1c0.mmd)
- **Clone hash:** `fe1ac3bccde37620`

```c

undefined8 FUN_71000fa1c0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_78,DAT_71052adfc0);
    if ((aiStack_78[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        piVar4 = (int *)param_1[0xb];
        if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
// ... (127 more lines)
```

## 8. `FUN_71000c36e0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c36e0`  (offset `0xc36e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c36e0(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 548 bytes / 26 bb / 1 incoming refs
- **Match values:** NEX
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000ed7a0
- **Callees:** FUN_71000bce50;FUN_71000d3390;FUN_71001b1300;FUN_7100258800;FUN_7100258950;FUN_7101717960;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000c36e0__71000c36e0.c)  [cfg](../decompiled/FUN_71000c36e0__71000c36e0.mmd)
- **Clone hash:** `d865e773c2dce56e`

```c

void FUN_71000c36e0(int *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int local_58 [4];
  undefined4 local_48 [2];
  
  plVar5 = *(long **)(param_2 + 0x50);
  if ((((plVar5 != (long *)0x0) && (*(int *)(param_2 + 8) != 0)) &&
      ((DAT_71052af0e0 & 0xfffffffe) == 2)) &&
     ((*(undefined4 *)(param_2 + 0x58) = 0, *(long *)(param_2 + 0x78) != 0 &&
      (*(long *)(param_2 + 0x60) != 0)))) {
    plVar6 = &DAT_71052af180;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          goto LAB_71000c389c;
        }
        plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x68);
      }
    }
    if ((*plVar6 != 0) && (*(long *)(*plVar6 + 0x10) != 0)) {
      plVar6 = &DAT_71052af180;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar3;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
            FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
// ... (41 more lines)
```

## 9. `FUN_71000f2880`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2880`  (offset `0xf2880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2880(void)`
- **Size / BBs / Incoming:** 1996 bytes / 90 bb / 16 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;select_item;NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::WaitLeaveCurrentMatchmakeSession;NexMatchJoinSessionJob::WaitLeaveBufferMatchmakeSession;NexMatchJoinSessionJob::WaitLeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_71000c36b0;FUN_71000e08e0;FUN_71000ecfb0;FUN_71000ee050;FUN_71000ee290;FUN_71000ee2c0;FUN_71000ee730;FUN_71000ee7f0;FUN_7100146ba0;FUN_7100149270;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f2880__71000f2880.c)  [cfg](../decompiled/FUN_71000f2880__71000f2880.mmd)
- **Clone hash:** `6c61e61087bae516`

```c

undefined8 FUN_71000f2880(long param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    aiStack_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
    aiStack_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (250 more lines)
```

## 10. `FUN_71000fd9e0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd9e0`  (offset `0xfd9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd9e0(void)`
- **Size / BBs / Incoming:** 1008 bytes / 35 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::SendPreparedForMigrateSession;NexMatchJointSessionJob::GetNextMatchmakeSessionInfo;chara/chara_4/chara_4_
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149290;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd9e0__71000fd9e0.c)  [cfg](../decompiled/FUN_71000fd9e0__71000fd9e0.mmd)
- **Clone hash:** `79e58e309476dd51`

```c

undefined8 FUN_71000fd9e0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar4 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar1) {
          iVar2 = *(int *)(param_1 + 0xf0);
joined_r0x0071000fddac:
          if ((iVar2 == 0) || (bVar1 = FUN_71000edff0(*(long *)(lVar4 + 8),iVar2), !bVar1)) {
            return 5;
// ... (113 more lines)
```

## 11. `FUN_71000f9e90`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f9e90`  (offset `0xf9e90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f9e90(void)`
- **Size / BBs / Incoming:** 812 bytes / 23 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh;NexMatchJointSessionJob::WaitNextSessionId
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100140e30;FUN_7100146ba0;FUN_7100149240;FUN_710014e380;FUN_7100150440;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f9e90__71000f9e90.c)  [cfg](../decompiled/FUN_71000f9e90__71000f9e90.mmd)
- **Clone hash:** `5db5f9437ee35601`

```c

undefined8 FUN_71000f9e90(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 uVar6;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_48,DAT_71052adfc0);
    if ((aiStack_48[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar2 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        FUN_710014e380(aiStack_48,*(long *)(DAT_71052adb38 + 200),
                       (char)*(undefined4 *)(param_1 + 0x90),*(long *)(param_1 + 0xa0),1);
        aiStack_58[0] = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
// ... (80 more lines)
```

## 12. `FUN_71000f7a50`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f7a50`  (offset `0xf7a50`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f7a50(void)`
- **Size / BBs / Incoming:** 916 bytes / 35 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::SendDestroyInvitation;NexMatchJointSessionJob::GetMatchmakeSessionOwners;NexMatchJointSessionJob::SendInvitationAsCompanion;dys_yoga03_l_03_set;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_7100148e50;FUN_7100151000;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f7a50__71000f7a50.c)  [cfg](../decompiled/FUN_71000f7a50__71000f7a50.mmd)
- **Clone hash:** `6f51e51c34e8a508`

```c

undefined8 FUN_71000f7a50(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] != 0) ||
       (iVar1 = FUN_7100146ba0(DAT_71052adb38), lVar10 = DAT_71052adb38, iVar1 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
// ... (112 more lines)
```

## 13. `FUN_71000fcc60`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fcc60`  (offset `0xfcc60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fcc60(void)`
- **Size / BBs / Incoming:** 912 bytes / 39 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::ResendNextSessionId;NexMatchJointSessionJob::SendLeaveMeshCompanion;NexMatchJointSessionJob::SendPreparedForMigrateSession
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_7100150480;FUN_7100150550;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fcc60__71000fcc60.c)  [cfg](../decompiled/FUN_71000fcc60__71000fcc60.mmd)
- **Clone hash:** `7eb595f619339050`

```c

undefined8 FUN_71000fcc60(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long alStack_168 [31];
  undefined4 auStack_70 [4];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_168[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_168[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_168[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_168[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_168,DAT_71052adfc0);
    if (((int)alStack_168[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 == 4)) {
      alStack_168[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
// ... (97 more lines)
```

## 14. `FUN_71001082f0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001082f0`  (offset `0x1082f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001082f0(void)`
- **Size / BBs / Incoming:** 2020 bytes / 92 bb / 17 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;dys_yoga03_l_03_set;NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::WaitLeaveCurrentMatchmakeSession;NexMatchRandomMatchmakeJob::WaitLeaveBufferMatchmakeSession;NexMatchRandomMatchmakeJob::WaitLeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_71000c36b0;FUN_71000e08e0;FUN_71000ecfb0;FUN_71000ee050;FUN_71000ee290;FUN_71000ee2c0;FUN_71000ee730;FUN_71000ee7f0;FUN_7100146ba0;FUN_7100149270;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001082f0__71001082f0.c)  [cfg](../decompiled/FUN_71001082f0__71001082f0.mmd)
- **Clone hash:** `b3fdc75f3d178828`

```c

undefined8 FUN_71001082f0(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    aiStack_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
// ... (259 more lines)
```

## 15. `FUN_7100104180`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104180`  (offset `0x104180`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104180(void)`
- **Size / BBs / Incoming:** 324 bytes / 12 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** NexMatchLeaveSessionJob::GetMatchmakeSessionOwners;chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData
- **Callees:** FUN_71000bce50;FUN_71000da970;FUN_7100146ba0;FUN_7100150e30
- **Files:** [decomp](../decompiled/FUN_7100104180__7100104180.c)  [cfg](../decompiled/FUN_7100104180__7100104180.mmd)
- **Clone hash:** `3c7c59da76798bd8`

```c

undefined8 FUN_7100104180(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  int aiStack_40 [4];
  
  lVar1 = DAT_71052adb38;
  plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar3 = FUN_71000da970((long)plVar6);
    if ((uVar3 & 1) != 0) {
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      if (aiStack_40[0] != 0) {
        *(code **)(param_1 + 0x30) = FUN_7100104000;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::GetMatchmakeSessionOwners";
      }
      lVar4 = (**(code **)(*plVar6 + 0xf0))(plVar6);
// ... (11 more lines)
```

## 16. `FUN_71001001a0`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001001a0`  (offset `0x1001a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001001a0(void)`
- **Size / BBs / Incoming:** 1176 bytes / 49 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartJoinNextMesh;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::WaitStartRetryJoinMesh
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_71001602c0;FUN_7100160990;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001001a0__71001001a0.c)  [cfg](../decompiled/FUN_71001001a0__71001001a0.mmd)
- **Clone hash:** `72a0072209950e3a`

```c

undefined8 FUN_71001001a0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar7 = DAT_71052adb38;
  if (iVar3 == 7) {
    uVar10 = 0xc420;
LAB_7100100228:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    aiStack_58[0] = uVar10;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4));
    aiStack_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
    FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_58);
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71000f70d0;
    param_1[7] = 0;
    param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
    return 0;
  }
  if (iVar3 == 6) {
// ... (153 more lines)
```

## 17. `FUN_71001109a0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001109a0`  (offset `0x1109a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001109a0(void)`
- **Size / BBs / Incoming:** 652 bytes / 42 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::WaitNewHostFinished;NexProcessHostMigrationJob::WaitNewHostGreeting;NexProcessHostMigrationJob::NexGetMatchMakingClientHost
- **Callees:** FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001109a0__71001109a0.c)  [cfg](../decompiled/FUN_71001109a0__71001109a0.mmd)
- **Clone hash:** `6a3c5f303c1401bc`

```c

undefined8 FUN_71001109a0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    pcVar1 = FUN_71001a1d80;
    pcVar2 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100110bcc;
  }
  if (*(char *)(param_1 + 0xb3) == -3) {
    if (*(char *)(param_1 + 0xc1) != '\0') {
      pcVar1 = FUN_71001a2450;
      pcVar2 = "NexProcessHostMigrationJob::WaitNewHostFinished";
      goto LAB_7100110bcc;
    }
    if ((((((((*(char *)(param_1 + 0xf0) != '\x01') && (*(char *)(param_1 + 0xf1) != '\x01')) &&
            (*(char *)(param_1 + 0xf2) != '\x01')) &&
           (((*(char *)(param_1 + 0xf3) != '\x01' && (*(char *)(param_1 + 0xf4) != '\x01')) &&
            ((*(char *)(param_1 + 0xf5) != '\x01' &&
             ((*(char *)(param_1 + 0xf6) != '\x01' && (*(char *)(param_1 + 0xf7) != '\x01'))))))))
          && (*(char *)(param_1 + 0xf8) != '\x01')) &&
         ((((((*(char *)(param_1 + 0xf9) != '\x01' && (*(char *)(param_1 + 0xfa) != '\x01')) &&
             (*(char *)(param_1 + 0xfb) != '\x01')) &&
            ((*(char *)(param_1 + 0xfc) != '\x01' && (*(char *)(param_1 + 0xfd) != '\x01')))) &&
           (*(char *)(param_1 + 0xfe) != '\x01')) &&
          (((*(char *)(param_1 + 0xff) != '\x01' && (*(char *)(param_1 + 0x100) != '\x01')) &&
           (((*(char *)(param_1 + 0x101) != '\x01' &&
             (((*(char *)(param_1 + 0x102) != '\x01' && (*(char *)(param_1 + 0x103) != '\x01')) &&
// ... (25 more lines)
```

## 18. `FUN_7100102730`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102730`  (offset `0x102730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100102730(void)`
- **Size / BBs / Incoming:** 976 bytes / 33 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitHostStationId;NexMatchJointSessionJob::WaitCompanionStation
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_710014f000;FUN_7100150680;FUN_7100192e90;FUN_71001939c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100102730__7100102730.c)  [cfg](../decompiled/FUN_7100102730__7100102730.mmd)
- **Clone hash:** `6aca059c9d7cba62`

```c

undefined8 FUN_7100102730(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (!bVar1) {
          uVar4 = FUN_7100146ed0(lVar7);
          if ((uVar4 & 1) == 0) {
// ... (111 more lines)
```

## 19. `FUN_7101d8d450`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d8d450`  (offset `0x1d8d450`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d8d450(long param_1, undefined8 param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2100 bytes / 106 bb / 5 incoming refs
- **Match values:** nex
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

## 20. `FUN_71000f74b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f74b0`  (offset `0xf74b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f74b0(void)`
- **Size / BBs / Incoming:** 744 bytes / 25 bb / 4 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::CloseJointSessionParticipation;NexMatchJointSessionJob::SendInvitationAsCompanion;dys_yoga03_l_03_set;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100146ba0;FUN_7100148dc0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f74b0__71000f74b0.c)  [cfg](../decompiled/FUN_71000f74b0__71000f74b0.mmd)
- **Clone hash:** `243ef268b35a11f4`

```c

undefined8 FUN_71000f74b0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 uVar8;
  code *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
// ... (76 more lines)
```

## 21. `FUN_7100110c30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110c30`  (offset `0x110c30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110c30(void)`
- **Size / BBs / Incoming:** 356 bytes / 13 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** ProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexWaitMatchMakingClientHost;NexProcessHostMigrationJob::HostMigrationFailure;NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti
- **Callees:** FUN_7100146e00;FUN_7100192e90;FUN_71001d0a10;FUN_71001d1590;FUN_710024bec0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100110c30__7100110c30.c)  [cfg](../decompiled/FUN_7100110c30__7100110c30.mmd)
- **Clone hash:** `fae1d930231cf7d2`

```c

undefined8 FUN_7100110c30(long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  *(undefined4 *)(param_1 + 0x110) = 4;
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] == aiStack_50[0]) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar6 = "ProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (((*(char *)(param_1 + 0x1f8) == '\0') && (DAT_71052adb38 != 0)) &&
          (uVar2 = FUN_7100146e00(DAT_71052adb38), uVar2 < 3)) {
    uVar4 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100110da0;
    pcVar6 = "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti";
  }
  else {
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar5 + 0x14) == 1) {
        FUN_71001d0a10(plVar5);
        plVar5 = *(long **)(param_1 + 0x118);
      }
// ... (20 more lines)
```

## 22. `FUN_7100104000`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104000`  (offset `0x104000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104000(void)`
- **Size / BBs / Incoming:** 376 bytes / 18 bb / 4 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** LeaveSessionJob::LeaveMesh;NexMatchLeaveSessionJob::WaitGetMatchmakeSessionOwners;chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData
- **Callees:** FUN_71000da870;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100104000__7100104000.c)  [cfg](../decompiled/FUN_7100104000__7100104000.mmd)
- **Clone hash:** `d3a7a2800150094c`

```c

undefined8 FUN_7100104000(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  code *pcVar6;
  char *pcVar7;
  ulong uVar8;
  int aiStack_50 [4];
  
  lVar3 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    bVar5 = *(byte *)(param_1 + 0x128);
    if (bVar5 != 0) {
      uVar8 = 0;
      lVar1 = param_1 + 0x129;
      do {
        while( true ) {
          iVar4 = *(int *)(lVar1 + uVar8 * 4 + -0x81);
          bVar2 = *(byte *)(lVar3 + 0x162);
// ... (30 more lines)
```

## 23. `FUN_71000ffca0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ffca0`  (offset `0xffca0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ffca0(void)`
- **Size / BBs / Incoming:** 1272 bytes / 51 bb / 5 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitHostStationId;NexMatchJointSessionJob::WaitUntilCompanionCompletion;NexMatchJointSessionJob::SendCompletionForMigrateSession
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_71000edff0;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_7100150600;FUN_7100192e90;FUN_71001939c0;FUN_7100193a50;FUN_71001ae940;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000ffca0__71000ffca0.c)  [cfg](../decompiled/FUN_71000ffca0__71000ffca0.mmd)
- **Clone hash:** `1158104db63da09f`

```c

undefined8 FUN_71000ffca0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  ushort uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined4 auStack_58 [2];
  
  piVar7 = aiStack_160;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    uStack_150._0_4_ = 0xc406;
    break;
  case 6:
    uStack_150._0_4_ = 0xa471;
    break;
  case 7:
    uStack_150._0_4_ = 0xc420;
    break;
  case 8:
    uStack_150._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)&uStack_150,DAT_71052adfc0);
    if (((int)uStack_150 == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar11 = DAT_71052adb38, iVar3 != 4)) {
// ... (153 more lines)
```

## 24. `FUN_7100104f30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104f30`  (offset `0x104f30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104f30(void)`
- **Size / BBs / Incoming:** 516 bytes / 20 bb / 3 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::CreateMatchmakeSession;NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitLeaveJoinedMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100104f30__7100104f30.c)  [cfg](../decompiled/FUN_7100104f30__7100104f30.mmd)
- **Clone hash:** `a15aeea6093de7e3`

```c

undefined8 FUN_7100104f30(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0xb8) - 1) * 4 + 0xa8);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x60),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
      if (aiStack_50[0] == 0) {
// ... (44 more lines)
```

## 25. `FUN_7100104540`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104540`  (offset `0x104540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104540(void)`
- **Size / BBs / Incoming:** 896 bytes / 36 bb / 3 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** LeaveSessionJob::LeaveCurrentMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData;dys_yoga03_l_03_set;NexMatchLeaveSessionJob::WaitLeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000e08e0;FUN_71000ecfb0;FUN_71000ee290;FUN_71000ee2c0;FUN_71000ee730;FUN_71000ee7f0;FUN_71001049c0;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100104540__7100104540.c)  [cfg](../decompiled/FUN_7100104540__7100104540.mmd)
- **Clone hash:** `6fb79808e67fb1ad`

```c

undefined8 FUN_7100104540(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  long *plVar10;
  uint uVar11;
  undefined **ppuStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  
  lVar2 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_71001411a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar9 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100141230;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar9 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    plVar10 = *(long **)(DAT_71052adb38 + 8);
    if (plVar10 != (long *)0x0) {
// ... (91 more lines)
```

## 26. `FUN_71000f53b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f53b0`  (offset `0xf53b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f53b0(void)`
- **Size / BBs / Incoming:** 692 bytes / 23 bb / 6 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::SendAnswerToDestroyInvitation;NexMatchJointSessionJob::CloseMatchmakeSession;NexMatchJointSessionJob::SendAnswerToInvitation
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_710013fd20;FUN_7100146ba0;FUN_7100192e90;FUN_7100193380;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f53b0__71000f53b0.c)  [cfg](../decompiled/FUN_71000f53b0__71000f53b0.mmd)
- **Clone hash:** `8d436204bd201420`

```c

undefined8 FUN_71000f53b0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] == 0) && (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        uVar4 = 6;
        goto LAB_71000f546c;
      }
      FUN_710013fd20(param_1);
      *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
      FUN_7100193380(DAT_71052adfc0,1);
      lVar1 = DAT_71052ac580;
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(DAT_71052ac580 + 0x30);
// ... (68 more lines)
```

## 27. `FUN_7100100640`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100640`  (offset `0x100640`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100640(void)`
- **Size / BBs / Incoming:** 472 bytes / 15 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;dys_yoga03_l_03_set;NexMatchJointSessionJob::WaitJoinNextMesh
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_71001928e0;FUN_7100193380;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100100640__7100100640.c)  [cfg](../decompiled/FUN_7100100640__7100100640.mmd)
- **Clone hash:** `09d9135b1169c1f0`

```c

undefined8 FUN_7100100640(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      *(undefined1 *)(param_1 + 0x130) = 6;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    *(undefined1 *)(DAT_71052adb38 + 0x15c) = 0;
    FUN_71001928e0(aiStack_40,DAT_71052adfc0,param_1 + 0x138);
    if (aiStack_40[0] == 0) {
      FUN_7100193380(DAT_71052adfc0,1);
      pcVar3 = FUN_7100100820;
      uVar2 = 0;
// ... (30 more lines)
```

## 28. `FUN_71000ff630`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff630`  (offset `0xff630`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff630(void)`
- **Size / BBs / Incoming:** 528 bytes / 16 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;dys_yoga03_l_03_set;NexMatchJointSessionJob::WaitGetNextMeshHostStationLocation
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100140e30;FUN_7100146ba0;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000ff630__71000ff630.c)  [cfg](../decompiled/FUN_71000ff630__71000ff630.mmd)
- **Clone hash:** `3186bf2d130ef464`

```c

undefined8 FUN_71000ff630(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar3 == 7) {
    aiStack_b0[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_b0[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_b0[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        *(undefined1 *)(param_1 + 0x130) = 6;
        *(code **)(param_1 + 0x30) = FUN_71000f7210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      bVar2 = FUN_7100140e30(param_1);
      uVar1 = (ulong)((ulong)*(byte *)(DAT_71052adb38 + 0x162) == 0);
      if (!bVar2) {
        uVar1 = (ulong)*(byte *)(DAT_71052adb38 + 0x162);
      }
      plVar6 = *(long **)(DAT_71052adb38 + uVar1 * 8 + 0x168);
// ... (40 more lines)
```

## 29. `FUN_71000f3580`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3580`  (offset `0xf3580`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3580(void)`
- **Size / BBs / Incoming:** 564 bytes / 11 bb / 4 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::WaitGetStationLocation
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3580__71000f3580.c)  [cfg](../decompiled/FUN_71000f3580__71000f3580.mmd)
- **Clone hash:** `cb6f5aeb9c95993a`

```c

undefined8 FUN_71000f3580(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  undefined4 auStack_28 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) != 0) {
    aiStack_b0[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
    aiStack_c0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_b0);
    param_1[8] = (long)"NexMatchJoinSessionJob::LeaveMatchmakeSession";
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    return 5;
  }
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
  FUN_710015fd60((undefined8 *)aiStack_b0);
  FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_b0);
  (**(code **)(*plVar5 + 0xa0))(aiStack_c0,plVar5,param_1 + 0xc,uVar1);
  if (aiStack_c0[0] == 0) {
    pcVar3 = FUN_71000f37c0;
    uVar6 = 5;
    pcVar4 = "NexMatchJoinSessionJob::WaitGetStationLocation";
  }
// ... (48 more lines)
```

## 30. `FUN_7100106350`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106350`  (offset `0x106350`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100106350(void)`
- **Size / BBs / Incoming:** 272 bytes / 9 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** nex::NexMatchDestroySessionJob::SendMonitoringData;NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession;NexMatchDestroySessionJob::WaitUnregisterBufferMatchmakeSession
- **Callees:** FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100106350__7100106350.c)  [cfg](../decompiled/FUN_7100106350__7100106350.mmd)
- **Clone hash:** `b96628cc6badf2af`

```c

undefined8 FUN_7100106350(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  int aiStack_30 [4];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_710013e030;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    break;
  default:
    uVar5 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    if (*(int *)(DAT_71052adb38 + uVar5 * 4 + 0x180) != 0) {
      plVar3 = *(long **)(DAT_71052adb38 + uVar5 * 8 + 0x168);
      (**(code **)(*plVar3 + 0x70))(aiStack_30,plVar3,param_1 + 0x60);
      pcVar1 = FUN_7100106590;
      if (aiStack_30[0] != 0) {
        pcVar1 = FUN_7100106460;
      }
      pcVar4 = "NexMatchDestroySessionJob::WaitUnregisterBufferMatchmakeSession";
      if (aiStack_30[0] != 0) {
        pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
      }
      *(code **)(param_1 + 0x30) = pcVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar4;
      return 0;
    }
// ... (8 more lines)
```

## 31. `FUN_7100100820`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100820`  (offset `0x100820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100820(void)`
- **Size / BBs / Incoming:** 2540 bytes / 89 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCompanionStation;NexMatchJointSessionJob::WaitStartRetryJoinMesh;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::StartLeaveMesh
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140060;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;FUN_71001507a0;FUN_71001902d0;FUN_71001929a0;FUN_71001929d0;FUN_7100192a60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100100820__7100100820.c)  [cfg](../decompiled/FUN_7100100820__7100100820.mmd)
- **Clone hash:** `6443dc19d85972e5`

```c

undefined8 FUN_7100100820(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ErrorResultVariant *pEVar14;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  long alStack_60 [2];
  undefined4 auStack_48 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  if (iVar5 == 7) {
    alStack_60[0]._0_4_ = 0xc420;
LAB_71001008ac:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)alStack_60 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_60);
// ... (350 more lines)
```

## 32. `FUN_7100105b50`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105b50`  (offset `0x105b50`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7100105b50(long param_1)`
- **Size / BBs / Incoming:** 1112 bytes / 32 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::CompleteFailure;CreateSessionJob::MeshStartup
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000ed820;FUN_710013dae0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100105b50__7100105b50.c)  [cfg](../decompiled/FUN_7100105b50__7100105b50.mmd)
- **Clone hash:** `cca19695e79c76ec`

```c

uint FUN_7100105b50(long param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  ErrorResultVariant *pEVar7;
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int local_88 [4];
  int local_78 [4];
  int local_68 [4];
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_48[0] = 0xc406;
    break;
  case 6:
    local_48[0] = 0xa471;
    break;
  case 7:
    local_48[0] = 0xc420;
    break;
  case 8:
    local_48[0] = 0xc421;
    break;
  default:
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      local_48[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
// ... (140 more lines)
```

## 33. `FUN_7100107aa0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100107aa0`  (offset `0x107aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100107aa0(void)`
- **Size / BBs / Incoming:** 524 bytes / 20 bb / 3 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** dys_yoga03_l_03_set;nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::RandomMatchmake;NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::WaitLeaveJoinedMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100107aa0__7100107aa0.c)  [cfg](../decompiled/FUN_7100107aa0__7100107aa0.mmd)
- **Clone hash:** `114d998585a7a2f2`

```c

undefined8 FUN_7100107aa0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(int *)(param_1 + 0x180) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0x180) - 1) * 4 + 0x170);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x110));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x110),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
// ... (45 more lines)
```

## 34. `FUN_710010a020`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710010a020`  (offset `0x10a020`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710010a020(void)`
- **Size / BBs / Incoming:** 492 bytes / 24 bb / 3 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::StartNatSession;NexMatchRandomMatchmakeJob::ChangeParticipation
- **Callees:** FUN_71000bcf30;FUN_71000c36b0;FUN_7100146ba0;FUN_7100146e00;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710010a020__710010a020.c)  [cfg](../decompiled/FUN_710010a020__710010a020.mmd)
- **Clone hash:** `59a6d31b7936e1da`

```c

undefined8 FUN_710010a020(long param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(param_1 + 0x160) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(undefined1 *)(param_1 + 0x184) = 0;
        *(code **)(param_1 + 0x30) = FUN_7100108de0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar4 = "NexMatchRandomMatchmakeJob::StartNatSession";
        goto LAB_710010a11c;
      }
      if (*(ulong *)(param_1 + 0x158) < *(ulong *)(DAT_71052ac580 + 0x30)) goto LAB_710010a17c;
      lVar5 = *(long *)(param_1 + 0x150);
      if ((lVar5 == 0) || (lVar3 = FUN_71000c36b0(DAT_71052acd90), lVar5 != lVar3)) {
        return 5;
// ... (40 more lines)
```

## 35. `FUN_71000f82a0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f82a0`  (offset `0xf82a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f82a0(void)`
- **Size / BBs / Incoming:** 864 bytes / 31 bb / 2 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::SendDestroyInvitation;NexMatchJointSessionJob::GetMatchmakeSessionOwners;NexMatchJointSessionJob::SendInvitationAsCompanion;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_7100149250;FUN_7100151000;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f82a0__71000f82a0.c)  [cfg](../decompiled/FUN_71000f82a0__71000f82a0.mmd)
- **Clone hash:** `486e64cb1a819cc9`

```c

undefined8 FUN_71000f82a0(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x98))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
// ... (106 more lines)
```

## 36. `FUN_71001048c0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001048c0`  (offset `0x1048c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001048c0(void)`
- **Size / BBs / Incoming:** 252 bytes / 10 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh;nex::NexMatchLeaveSessionJob::SendMonitoringData;NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions
- **Callees:** FUN_71000bce50;FUN_71000e0b40;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_71001048c0__71001048c0.c)  [cfg](../decompiled/FUN_71001048c0__71001048c0.mmd)
- **Clone hash:** `ffc00ae1552c0e79`

```c

undefined8 FUN_71001048c0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  int aiStack_40 [4];
  
  lVar6 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar4 = FUN_71001411a0;
    uVar3 = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar4 = FUN_7100141230;
    uVar3 = 0;
    pcVar5 = "nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar2 = FUN_71000e0b40(lVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    pcVar4 = FUN_7100104540;
    uVar3 = 5;
    pcVar5 = "NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
// ... (5 more lines)
```

## 37. `FUN_71000f22b0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f22b0`  (offset `0xf22b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f22b0(void)`
- **Size / BBs / Incoming:** 524 bytes / 20 bb / 3 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::JoinMatchmakeSession;NexMatchJoinSessionJob::MeshCleanup;NexMatchJoinSessionJob::WaitLeaveJoinedMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f22b0__71000f22b0.c)  [cfg](../decompiled/FUN_71000f22b0__71000f22b0.mmd)
- **Clone hash:** `86b87dd4969e56f8`

```c

undefined8 FUN_71000f22b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    *(undefined4 *)(param_1 + 0x110) = 1;
    if (*(int *)(param_1 + 0x168) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0x168) - 1) * 4 + 0x158);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x60),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
// ... (45 more lines)
```

## 38. `FUN_71000fd6b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd6b0`  (offset `0xfd6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd6b0(void)`
- **Size / BBs / Incoming:** 808 bytes / 27 bb / 3 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeavePreviousMatchmakeSession;NexMatchJointSessionJob::WaitMeshRestart;NexMatchJointSessionJob::WaitLeavePreviousMesh
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100140060;FUN_7100140e30;FUN_7100146ba0;FUN_7100146ed0;FUN_7100191ee0;FUN_71001921b0;FUN_7100192c30;FUN_7100192e90;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd6b0__71000fd6b0.c)  [cfg](../decompiled/FUN_71000fd6b0__71000fd6b0.mmd)
- **Clone hash:** `ea65146691ff6e84`

```c

undefined8 FUN_71000fd6b0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  code *pcVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined4 *)(param_1 + 0x230) = 0xe;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 7) {
    aiStack_50[0] = 0xc420;
  }
  else if (iVar4 == 6) {
    aiStack_50[0] = 0xa471;
  }
  else if (iVar4 == 5) {
    aiStack_50[0] = 0xc406;
  }
  else {
    if (iVar4 != 8) {
      *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
      puVar2 = DAT_71052adfc0;
      FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
      aiStack_60[0] = 0x6c50;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
      if (aiStack_50[0] == aiStack_60[0]) {
// ... (88 more lines)
```

## 39. `FUN_7100105660`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105660`  (offset `0x105660`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105660(void)`
- **Size / BBs / Incoming:** 320 bytes / 12 bb / 7 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitUnregisterGathering
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100105660__7100105660.c)  [cfg](../decompiled/FUN_7100105660__7100105660.mmd)
- **Clone hash:** `3fcf7ce476aa39b1`

```c

undefined8 FUN_7100105660(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar2 + 0x70))
              (aiStack_38,plVar2,param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_38[0] == 0) {
      pcVar4 = FUN_7100106010;
      uVar3 = 5;
      pcVar5 = "NexMatchCreateSessionJob::WaitUnregisterGathering";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_38);
      pcVar4 = FUN_710013d590;
// ... (19 more lines)
```

## 40. `FUN_71000f24c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f24c0`  (offset `0xf24c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f24c0(void)`
- **Size / BBs / Incoming:** 460 bytes / 15 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** NexMatchJoinSessionJob::MeshCleanup;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_71000ede30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f24c0__71000f24c0.c)  [cfg](../decompiled/FUN_71000f24c0__71000f24c0.mmd)
- **Clone hash:** `160905fa3e1fd533`

```c

undefined8 FUN_71000f24c0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar2 & 1) != 0) {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      param_1[8] = (long)"NexMatchJoinSessionJob::MeshCleanup";
      param_1[6] = (long)FUN_710013f360;
      param_1[7] = 0;
// ... (38 more lines)
```

## 41. `FUN_71000f3050`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3050`  (offset `0xf3050`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3050(void)`
- **Size / BBs / Incoming:** 544 bytes / 24 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::WaitNotification;select_item
- **Callees:** FUN_71000b40e0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000ecfb0;FUN_710013f6f0;FUN_7100146ba0;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3050__71000f3050.c)  [cfg](../decompiled/FUN_71000f3050__71000f3050.mmd)
- **Clone hash:** `ff4e3ee324ecff03`

```c

undefined8 FUN_71000f3050(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    plVar6 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar2 = (**(code **)(*plVar6 + 0x58))(plVar6);
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    iVar1 = *(int *)(param_1 + 0x60);
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_50,(int *)(param_1 + 100));
// ... (49 more lines)
```

## 42. `FUN_71020fbb90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** neX;NEX
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

## 43. `FUN_71000ff3e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff3e0`  (offset `0xff3e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff3e0(void)`
- **Size / BBs / Incoming:** 592 bytes / 32 bb / 5 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::MeshRestart;NexMatchJointSessionJob::StartLeaveMesh
- **Callees:** FUN_71000b4260;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100140e30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000ff3e0__71000ff3e0.c)  [cfg](../decompiled/FUN_71000ff3e0__71000ff3e0.mmd)
- **Clone hash:** `cbb972757af31331`

```c

undefined8 FUN_71000ff3e0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  char *pcVar6;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_40[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_40[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_40[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)((long)param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
        *(undefined1 *)(param_1 + 0x26) = 6;
        param_1[6] = (long)FUN_71000f7210;
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      piVar4 = (int *)param_1[0xb];
      if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
        if (2 < *piVar4 - 2U) {
          FUN_71000b4260(piVar4);
        }
        param_1[0xb] = 0;
// ... (58 more lines)
```

## 44. `FUN_71000f3a60`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3a60`  (offset `0xf3a60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3a60(void)`
- **Size / BBs / Incoming:** 1088 bytes / 30 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession;NexMatchJoinSessionJob::CompleteFailure;JoinSessionJob::MeshStartup
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000ed820;FUN_71000ed8e0;FUN_710013f710;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3a60__71000f3a60.c)  [cfg](../decompiled/FUN_71000f3a60__71000f3a60.mmd)
- **Clone hash:** `4821a3a021404ac4`

```c

uint FUN_71000f3a60(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  ErrorResultVariant *pEVar7;
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar3 & 1) != 0) {
      FUN_71000ed8e0(aiStack_48);
// ... (130 more lines)
```

## 45. `FUN_71000f37c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f37c0`  (offset `0xf37c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f37c0(void)`
- **Size / BBs / Incoming:** 428 bytes / 18 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::StartNatSession;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f37c0__71000f37c0.c)  [cfg](../decompiled/FUN_71000f37c0__71000f37c0.mmd)
- **Clone hash:** `40b4e408dc43a395`

```c

undefined8 FUN_71000f37c0(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_1 + 0x12);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    else {
      iVar1 = (int)param_1[0xc];
      if (iVar1 == 2) {
        param_1[6] = (long)FUN_71000f3970;
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJoinSessionJob::StartNatSession";
        return 0;
      }
      if (iVar1 == 4) {
        aiStack_38[0] = 0x6c05;
// ... (30 more lines)
```

## 46. `FUN_71000f3270`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3270`  (offset `0xf3270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3270(void)`
- **Size / BBs / Incoming:** 772 bytes / 27 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NexMatchJoinSessionJob::LeaveMatchmakeSession;NODE_PRE_REFRACT_BLEND;NexMatchJoinSessionJob::GetStationLocation
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000ecfb0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3270__71000f3270.c)  [cfg](../decompiled/FUN_71000f3270__71000f3270.mmd)
- **Clone hash:** `8e8fead75e32fe07`

```c

undefined8 FUN_71000f3270(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x2a]) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar6 == (long *)0x0) {
          uVar3 = 1;
// ... (78 more lines)
```

## 47. `NexMatchRandomMatchmakeJob_WaitNotification_step`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100108ae0`  (offset `0x108ae0`)
- **Namespace:** `Global`
- **Signature:** `undefined NexMatchRandomMatchmakeJob_WaitNotification_step(void)`
- **Size / BBs / Incoming:** 764 bytes / 27 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** nex::NexMatchRandomMatchmakeJob::CompleteFailure;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::StartNatSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000ecfb0;FUN_7100143730;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/NexMatchRandomMatchmakeJob_WaitNotification_step__7100108ae0.c)  [cfg](../decompiled/NexMatchRandomMatchmakeJob_WaitNotification_step__7100108ae0.mmd)
- **Clone hash:** `7206443d194512e1`

```c

undefined8 NexMatchRandomMatchmakeJob_WaitNotification_step(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    uVar5 = FUN_7100143730(param_1);
    if ((uVar5 & 1) == 0) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x168)) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar6 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar6 == (long *)0x0) {
          uVar3 = 1;
// ... (78 more lines)
```

## 48. `FUN_71001068d0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001068d0`  (offset `0x1068d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001068d0(void)`
- **Size / BBs / Incoming:** 600 bytes / 19 bb / 1 incoming refs
- **Match values:** Nex
- **Strings touched:** NexMatchBrowseMatchmakeJob::WaitFindSessionByOwner;NexMatchBrowseMatchmakeJob::WaitFindSessionByParticipant;NexMatchBrowseMatchmakeJob::WaitFindSessionBySessionId;NexMatchBrowseMatchmakeJob::BrowseMatchmake
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_71000e4650;FUN_71000e9cd0;FUN_71000ea3e0;FUN_71000ead70;FUN_710014f120;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001068d0__71001068d0.c)  [cfg](../decompiled/FUN_71001068d0__71001068d0.mmd)
- **Clone hash:** `4a40316e37ce44cc`

```c

void FUN_71001068d0(int *param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  *(undefined8 *)(param_2 + 0x90) = param_3;
  iVar1 = FUN_710014f120(param_4);
  if (iVar1 == 1) {
    FUN_71000e9cd0(aiStack_48,*(long *)(param_2 + 0x90),(int *)(param_2 + 0x60),param_4);
    FUN_71000bcf30((int *)(param_2 + 0x98),aiStack_48);
    if (*(int *)(param_2 + 0x98) != 0) {
      aiStack_48[0] = 0xac5a;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
      if (*(int *)(param_2 + 0x98) != aiStack_48[0]) {
LAB_7100106a8c:
        piVar2 = (int *)(param_2 + 0x98);
        goto LAB_7100106b10;
      }
    }
    pcVar3 = FUN_7100106b30;
    pcVar4 = "NexMatchBrowseMatchmakeJob::WaitFindSessionByOwner";
LAB_7100106adc:
    *(code **)(param_2 + 0x30) = pcVar3;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = pcVar4;
    aiStack_48[0] = 0;
  }
  else {
    iVar1 = FUN_710014f120(param_4);
    if (iVar1 == 2) {
// ... (50 more lines)
```

## 49. `FUN_71000f4b10`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4b10`  (offset `0xf4b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4b10(void)`
- **Size / BBs / Incoming:** 484 bytes / 17 bb / 2 incoming refs
- **Match values:** Nex;nex
- **Strings touched:** NexMatchJoinSessionJob::LeaveMatchmakeSession;chara/chara_4/chara_4_;nex::NexMatchJoinSessionJob::CompleteFailure;NODE_PRE_REFRACT_BLEND;NexMatchJoinSessionJob::GetStationLocation
- **Callees:** FUN_71000bcf30;FUN_71000c36b0;FUN_7100146ba0;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f4b10__71000f4b10.c)  [cfg](../decompiled/FUN_71000f4b10__71000f4b10.mmd)
- **Clone hash:** `26b0b2da5a354d8d`

```c

undefined8 FUN_71000f4b10(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int aiStack_a8 [32];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_a8[0] = 0xc406;
    break;
  case 6:
    aiStack_a8[0] = 0xa471;
    break;
  case 7:
    aiStack_a8[0] = 0xc420;
    break;
  case 8:
    aiStack_a8[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x22) = 8;
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar2 & 1) == 0) {
      if ((ulong)param_1[0x29] < *(ulong *)(DAT_71052ac580 + 0x30)) {
        FUN_710015fd60((undefined8 *)aiStack_a8);
        FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_a8);
        param_1[6] = (long)FUN_71000f3580;
        param_1[7] = 0;
        *(undefined1 *)((long)param_1 + 0x16c) = 0;
        param_1[8] = (long)"NexMatchJoinSessionJob::GetStationLocation";
        FUN_710015ff20((undefined8 *)aiStack_a8);
        return 0;
      }
      if ((*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x28]) &&
// ... (31 more lines)
```

## 50. `FUN_71021d37a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021d37a0`  (offset `0x21d37a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021d37a0(void)`
- **Size / BBs / Incoming:** 17364 bytes / 31 bb / 1 incoming refs
- **Match values:** NEX
- **Strings touched:** FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_START;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GRADE_1;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_WOOD;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_STONE;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_IRON;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GOLD;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_RED_STONE;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_DIAMOND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_AIR_LW_FORBID_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_REPEAT_COUNT_ON_CATEGORY_SPECIAL;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_S_JUMP_COUNT_ON_AIR;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_REPLASE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N2_TABLE_OBJECT_ID;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_TABLE_RECREATE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_FINAL_MOVIE_HASH;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_MATERIAL_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_HAVE_CRAFT_WEAPON_COUNT;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_REQUEST_HAVE_CRAFT_WEAPON_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_CATCH_OBJECT_ID;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_DISABLE_CRAFT_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_LANDING_HIGH_PLACE_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_MINI_FRAME;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SITUATION_KIND;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_JUMP_COUNT_BACKUP;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_GRADE_1_TABLE_PROGRESS;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_WOOD_TABLE_PROGRESS;FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_SPECIAL_N1_MINING_STONE_TABLE_PROGRESS;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021d37a0__71021d37a0.c)  [cfg](../decompiled/FUN_71021d37a0__71021d37a0.mmd)
- **Clone hash:** `4786da1208e21a78`

```c

void FUN_71021d37a0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bc,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GRADE_1",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_WOOD",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_STONE",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_IRON",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_GOLD",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_RED_STONE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_MATERIAL_NUM_DIAMOND",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_STATUS_KIND_ATTACK_PREV",
                 (undefined **)0x100000c4,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_MINI_JUMP_ATTACK_FRAME",
                 (undefined **)0x100000c5,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_CANCEL_STATUS_KIND",
                 (undefined **)0x100000c6,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_PICKEL_INSTANCE_WORK_ID_INT_ATTACK_FRAME",
// ... (1992 more lines)
```

