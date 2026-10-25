# leave (funcs=191, hits=310)

Top 50 functions by hit count

## 1. `FUN_71020fbb90`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** LEAVE
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

## 2. `FUN_7100104540`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104540`  (offset `0x104540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104540(void)`
- **Size / BBs / Incoming:** 896 bytes / 36 bb / 3 incoming refs
- **Match values:** Leave
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

## 3. `FUN_7100104000`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104000`  (offset `0x104000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104000(void)`
- **Size / BBs / Incoming:** 376 bytes / 18 bb / 4 incoming refs
- **Match values:** Leave
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

## 4. `FUN_7100104180`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104180`  (offset `0x104180`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104180(void)`
- **Size / BBs / Incoming:** 324 bytes / 12 bb / 2 incoming refs
- **Match values:** Leave
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

## 5. `FUN_7101bc3210`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bc3210`  (offset `0x1bc3210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bc3210(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 19188 bytes / 938 bb / 1 incoming refs
- **Match values:** leave
- **Strings touched:** stat_change;layout_def;layout_pn2;layout_pn3;layout_pn4;layout_pn5;layout_pn6;layout_pn7;layout_pn8;in_menu;out_menu;in_layout_change;out_layout_change;in_battlestart;out_battlestart;game_start_ok;game_start_stop;tp_total_00;tp_total_01;tp_total_02;tp_total_03;leave_show;leave_hidden;score_set_out;score_set_in;score_off;score_on;set_parts_lct;count_on;count_off;set_main_00;set_main_01;...
- **Callers:** FUN_71013cdd00
- **Callees:** FUN_7101414b10;FUN_7101989a30;FUN_7101bc7d10;FUN_7101bc7fa0;FUN_7101bc7fb0;FUN_7101bc8060;FUN_7101bc8070;FUN_7101bc8120;FUN_7101bc8130;FUN_7101bc8210;FUN_7101bc8220;FUN_7101bc8380;FUN_7101bc8390;FUN_7101bcc0a0;FUN_7101bcc690;FUN_7101bcd660;...
- **Files:** [decomp](../decompiled/FUN_7101bc3210__7101bc3210.c)  [cfg](../decompiled/FUN_7101bc3210__7101bc3210.mmd)
- **Clone hash:** `5170893832615672`

```c

void FUN_7101bc3210(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  void *__dest;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar14;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  byte ****ppppbVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  byte **ppbVar19;
  code *pcVar20;
  long lVar21;
  byte ***pppbVar22;
  long lVar23;
// ... (3497 more lines)
```

## 6. `FUN_7100141230`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100141230`  (offset `0x141230`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100141230(long * param_1)`
- **Size / BBs / Incoming:** 344 bytes / 15 bb / 9 incoming refs
- **Match values:** Leave
- **Strings touched:** nn::pia::session::LeaveSessionJob::SendMonitoringData;LeaveSessionJob::WaitLeaveMeshWithHostMigration;LeaveSessionJob::WaitLeaveMesh
- **Callees:** FUN_7100146ba0;FUN_7100146be0;FUN_7100146ed0;FUN_7100192050;FUN_7100192af0;FUN_71001931d0;FUN_7100193380
- **Files:** [decomp](../decompiled/FUN_7100141230__7100141230.c)  [cfg](../decompiled/FUN_7100141230__7100141230.mmd)
- **Clone hash:** `9bf3ea3af5122142`

```c

undefined8 FUN_7100141230(long *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  int local_40 [4];
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  FUN_7100193380((long)DAT_71052adfc0,1);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if ((bVar1) && (uVar3 = FUN_7100146ed0(DAT_71052adb38), (uVar3 & 1) != 0)) {
    uVar2 = FUN_7100146be0(DAT_71052adb38);
    if ((uVar2 & 0xffff) == 1) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    FUN_7100192050(local_40,DAT_71052adfc0,(int *)(param_1 + 0xc));
    if (local_40[0] != 0) {
LAB_7100141350:
      (**(code **)(*param_1 + 0x38))(param_1);
      return 0;
    }
    pcVar4 = FUN_71001413b0;
    pcVar5 = "LeaveSessionJob::WaitLeaveMeshWithHostMigration";
  }
  else {
    FUN_7100192af0(local_40,(long)DAT_71052adfc0,(int *)(param_1 + 0xc));
    if (*(char *)(DAT_71052adb38 + 0x15d) != '\0') {
      *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
    }
// ... (10 more lines)
```

## 7. `FUN_71001048c0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001048c0`  (offset `0x1048c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001048c0(void)`
- **Size / BBs / Incoming:** 252 bytes / 10 bb / 2 incoming refs
- **Match values:** Leave
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

## 8. `FUN_710018f2c0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f2c0`  (offset `0x18f2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018f2c0(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 8 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveWithHostMigrationJob::StartDisconnectStations;LeaveWithHostMigrationJob::WaitHostMigrationProcess;LeaveWithHostMigrationJob::SendStartMultiMigrationMessage;LeaveWithHostMigrationJob::SendStartMigrationMessage
- **Callees:** FUN_71001a2880
- **Files:** [decomp](../decompiled/FUN_710018f2c0__710018f2c0.c)  [cfg](../decompiled/FUN_710018f2c0__710018f2c0.mmd)
- **Clone hash:** `8399b340e4daef63`

```c

undefined8 FUN_710018f2c0(long param_1)

{
  char *pcVar1;
  long *plVar2;
  
  plVar2 = *(long **)(DAT_71052adfc0 + 0x38);
  if (*(char *)((long)plVar2 + 0x84) == '\0') {
    if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
      *(code **)(param_1 + 0x30) = FUN_710018f560;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMultiMigrationMessage";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710018f5e0;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMigrationMessage";
    }
  }
  else if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
    FUN_71001a2880(plVar2);
    *(undefined1 *)(plVar2 + 9) = 1;
    *(code **)(param_1 + 0x30) = FUN_710018f380;
    pcVar1 = "LeaveWithHostMigrationJob::StartDisconnectStations";
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_710018f4e0;
    pcVar1 = "LeaveWithHostMigrationJob::WaitHostMigrationProcess";
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}


```

## 9. `FUN_71000f2880`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f2880`  (offset `0xf2880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f2880(void)`
- **Size / BBs / Incoming:** 1996 bytes / 90 bb / 16 incoming refs
- **Match values:** Leave
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

## 10. `FUN_7100141060`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100141060`  (offset `0x141060`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100141060(long * param_1)`
- **Size / BBs / Incoming:** 320 bytes / 15 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** nn::pia::session::LeaveSessionJob::SendMonitoringData;LeaveSessionJob::LeaveMesh
- **Callees:** FUN_71000b4920;FUN_71000b4990;FUN_7100146ba0;FUN_7100146e20;FUN_7100146ed0;FUN_710014fde0
- **Files:** [decomp](../decompiled/FUN_7100141060__7100141060.c)  [cfg](../decompiled/FUN_7100141060__7100141060.mmd)
- **Clone hash:** `302224fdc469fad2`

```c

undefined8 FUN_7100141060(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  if ((*(long *)(DAT_71052adb38 + 0x70) != 0) &&
     (uVar2 = FUN_71000b4990(*(long *)(DAT_71052adb38 + 0x70)), (uVar2 & 1) != 0)) {
    return 5;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    uVar2 = FUN_71000b4990(*(long *)(lVar1 + 0x10));
    if (((uVar2 & 1) != 0) && (iVar3 = FUN_71000b4920(*(long *)(lVar1 + 0x10)), iVar3 != 2)) {
      return 5;
    }
    FUN_710014fde0(*(long **)(lVar1 + 0x10));
  }
  uVar4 = FUN_7100146ed0(lVar1);
  if ((((uVar4 & 1) != 0) && (uVar4 = FUN_7100146e20(lVar1), (uVar4 & 1) != 0)) &&
     (*(int *)(lVar1 + 0xd4) == 4)) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 0;
  }
  param_1[6] = (long)FUN_7100141230;
  param_1[7] = 0;
  param_1[8] = (long)"LeaveSessionJob::LeaveMesh";
  return 0;
}
// ... (1 more lines)
```

## 11. `FUN_71000fc7d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc7d0`  (offset `0xfc7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc7d0(void)`
- **Size / BBs / Incoming:** 1164 bytes / 32 bb / 6 incoming refs
- **Match values:** Leave
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

## 12. `FUN_71001417f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001417f0`  (offset `0x1417f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001417f0(void)`
- **Size / BBs / Incoming:** 304 bytes / 11 bb / 5 incoming refs
- **Match values:** Leave
- **Strings touched:** nn::pia::session::LeaveSessionJob::SendMonitoringData;dys_yoga03_l_03_set;LeaveSessionJob::WaitLeaveCurrentMatchmakeSession
- **Callees:** FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_71001417f0__71001417f0.c)  [cfg](../decompiled/FUN_71001417f0__71001417f0.mmd)
- **Clone hash:** `240f8268aa64ff2d`

```c

undefined8 FUN_71001417f0(long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  int aiStack_40 [4];
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if ((uVar1 < 10 && (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) != 0) ||
     (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 == 6)) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
  }
  else {
    plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar5 + 0x60))
                (aiStack_40,plVar5,param_1 + 0xc,
                 *(undefined4 *)
                  (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
      if (aiStack_40[0] == 0) {
        param_1[8] = (long)"LeaveSessionJob::WaitLeaveCurrentMatchmakeSession";
        param_1[6] = (long)FUN_7100141920;
        param_1[7] = 0;
        return 5;
      }
      pcVar4 = *(code **)(*param_1 + 0x50);
    }
    else {
      pcVar4 = *(code **)(*param_1 + 0x48);
    }
    (*pcVar4)(param_1);
  }
// ... (3 more lines)
```

## 13. `FUN_71000f9e90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f9e90`  (offset `0xf9e90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f9e90(void)`
- **Size / BBs / Incoming:** 812 bytes / 23 bb / 3 incoming refs
- **Match values:** Leave
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

## 14. `FUN_710018ed30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018ed30`  (offset `0x18ed30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018ed30(void)`
- **Size / BBs / Incoming:** 340 bytes / 17 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveMeshJob::WaitLeavingProcess;LeaveMeshJob::LeaveSuccess
- **Callees:** FUN_71000b4820;FUN_7100161fa0;FUN_7100187fe0;FUN_7100190a90;FUN_7100190af0
- **Files:** [decomp](../decompiled/FUN_710018ed30__710018ed30.c)  [cfg](../decompiled/FUN_710018ed30__710018ed30.mmd)
- **Clone hash:** `a12e85a4b3444ee9`

```c

undefined8 FUN_710018ed30(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  code *pcVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar2 = FUN_7100161fa0(DAT_71052add68);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) {
    pcVar6 = FUN_710018ee90;
    pcVar7 = "LeaveMeshJob::LeaveSuccess";
  }
  else {
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    lVar8 = *(long *)(lVar3 + 0x20);
    pcVar6 = FUN_710018efd0;
    lVar3 = lVar3 + 0x18;
    if (lVar8 == lVar3) {
      pcVar7 = "LeaveMeshJob::WaitLeavingProcess";
    }
    else {
      pcVar7 = "LeaveMeshJob::WaitLeavingProcess";
LAB_710018eda0:
      do {
        if (*(long *)(lVar8 + 0x10) != lVar2) {
          bVar1 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(*(long *)(lVar8 + 0x10) + 0x38));
          if (bVar1) {
            FUN_7100190af0(DAT_71052adfc0,(uint)*(byte *)(*(long *)(lVar8 + 0x10) + 0x38));
          }
          plVar4 = *(long **)(lVar8 + 0x10);
          plVar5 = (long *)plVar4[0x15];
// ... (24 more lines)
```

## 15. `FUN_71000f7210`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f7210`  (offset `0xf7210`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f7210(void)`
- **Size / BBs / Incoming:** 660 bytes / 21 bb / 74 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession;NexMatchJointSessionJob::WaitLeaveMesh
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_7100146ed0;FUN_7100191ee0;FUN_71001921b0;FUN_7100192c30;FUN_7100192e90;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f7210__71000f7210.c)  [cfg](../decompiled/FUN_71000f7210__71000f7210.mmd)
- **Clone hash:** `b285a5172d29fb61`

```c

undefined8 FUN_71000f7210(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *pcVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined1 *)(param_1 + 0xfa) = 1;
  lVar1 = DAT_71052adb38;
  *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
  iVar4 = FUN_7100146ba0(lVar1);
  puVar2 = DAT_71052adfc0;
  switch(iVar4) {
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
    FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
    aiStack_60[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (65 more lines)
```

## 16. `FUN_7100104430`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104430`  (offset `0x104430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104430(void)`
- **Size / BBs / Incoming:** 268 bytes / 9 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** nex::NexMatchLeaveSessionJob::SendMonitoringData;chara/chara_4/chara_4_;nex::NexMatchLeaveSessionJob::LeaveMesh
- **Callees:** FUN_71000bce50;FUN_71000e2370;FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100104430__7100104430.c)  [cfg](../decompiled/FUN_7100104430__7100104430.mmd)
- **Clone hash:** `57aff61c7cd1f580`

```c

undefined8 FUN_7100104430(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int aiStack_40 [4];
  
  lVar4 = *(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
  ;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    uVar3 = 0;
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nex::NexMatchLeaveSessionJob::SendMonitoringData";
    break;
  case 6:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    uVar3 = 0;
    param_1[6] = (long)FUN_7100141230;
    param_1[7] = 0;
    param_1[8] = (long)"nex::NexMatchLeaveSessionJob::LeaveMesh";
    break;
  default:
    uVar2 = FUN_71000e2370(lVar4);
    if ((uVar2 & 1) == 0) {
      uVar3 = 5;
    }
    else {
      FUN_71000bce50(aiStack_40,(int *)((long)param_1 + 100));
      (**(code **)(*param_1 + 0x38))(param_1);
      uVar3 = 0;
    }
// ... (4 more lines)
```

## 17. `FUN_71001082f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001082f0`  (offset `0x1082f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001082f0(void)`
- **Size / BBs / Incoming:** 2020 bytes / 92 bb / 17 incoming refs
- **Match values:** Leave
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

## 18. `FUN_71000fe3b0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fe3b0`  (offset `0xfe3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fe3b0(void)`
- **Size / BBs / Incoming:** 616 bytes / 19 bb / 4 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitLeavePreviousMatchmakeSession
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_71001902d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fe3b0__71000fe3b0.c)  [cfg](../decompiled/FUN_71000fe3b0__71000fe3b0.mmd)
- **Clone hash:** `dcf3b80a8e70ecad`

```c

undefined8 FUN_71000fe3b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  long *plVar7;
  int aiStack_60 [4];
  int aiStack_50 [4];
  
  FUN_71001902d0(DAT_71052adfc0);
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
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      *(undefined1 *)(param_1 + 0x130) = 6;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    uVar4 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    plVar7 = *(long **)(DAT_71052adb38 + uVar4 * 8 + 0x168);
// ... (50 more lines)
```

## 19. `FUN_7100141b50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100141b50`  (offset `0x141b50`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100141b50(long * param_1)`
- **Size / BBs / Incoming:** 300 bytes / 9 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** nn::pia::session::LeaveSessionJob::SendMonitoringData;LeaveSessionJob::WaitLeaveBufferMatchmakeSession
- **Callees:** FUN_7100146ba0;FUN_7100149290
- **Files:** [decomp](../decompiled/FUN_7100141b50__7100141b50.c)  [cfg](../decompiled/FUN_7100141b50__7100141b50.mmd)
- **Clone hash:** `ac75a39668a7d0aa`

```c

undefined8 FUN_7100141b50(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  int local_30 [4];
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if ((9 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) == 0) &&
     (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 != 6)) {
    uVar4 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    if (*(int *)(DAT_71052adb38 + uVar4 * 4 + 0x180) != 0) {
      plVar3 = *(long **)(DAT_71052adb38 + uVar4 * 8 + 0x168);
      (**(code **)(*plVar3 + 0x60))(local_30,plVar3,param_1 + 0xc);
      if (local_30[0] == 0) {
        param_1[8] = (long)"LeaveSessionJob::WaitLeaveBufferMatchmakeSession";
        param_1[6] = (long)FUN_7100141c80;
        param_1[7] = 0;
        return 5;
      }
      FUN_7100149290(DAT_71052adb38,0);
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    return 0;
  }
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71001411a0;
  param_1[7] = 0;
  param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
  return 0;
}


```

## 20. `FUN_71000ff630`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff630`  (offset `0xff630`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff630(void)`
- **Size / BBs / Incoming:** 528 bytes / 16 bb / 2 incoming refs
- **Match values:** Leave
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

## 21. `FUN_710018efd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018efd0`  (offset `0x18efd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018efd0(void)`
- **Size / BBs / Incoming:** 192 bytes / 9 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveMeshJob::LeaveSuccess
- **Callees:** FUN_7100161fa0
- **Files:** [decomp](../decompiled/FUN_710018efd0__710018efd0.c)  [cfg](../decompiled/FUN_710018efd0__710018efd0.mmd)
- **Clone hash:** `ec8ec3cb6c2350d9`

```c

undefined8 FUN_710018efd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = FUN_7100161fa0(DAT_71052add68);
  lVar3 = *(long *)(lVar1 + 0x20);
  do {
    if (lVar3 == lVar1 + 0x18) {
LAB_710018f060:
      *(code **)(param_1 + 0x30) = FUN_710018ee90;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LeaveMeshJob::LeaveSuccess";
      return 0;
    }
    lVar4 = *(long *)(lVar3 + 0x10);
    if ((*(int *)(lVar4 + 0x48) == 5) &&
       (lVar2 = FUN_7100161fa0(DAT_71052add68), lVar4 != *(long *)(lVar2 + 0x98))) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
        return 5;
      }
      goto LAB_710018f060;
    }
    lVar3 = *(long *)(lVar3 + 8);
  } while( true );
}


```

## 22. `FUN_71000f3580`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3580`  (offset `0xf3580`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3580(void)`
- **Size / BBs / Incoming:** 564 bytes / 11 bb / 4 incoming refs
- **Match values:** Leave
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

## 23. `FUN_71000fd6b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd6b0`  (offset `0xfd6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd6b0(void)`
- **Size / BBs / Incoming:** 808 bytes / 27 bb / 3 incoming refs
- **Match values:** Leave
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

## 24. `FUN_710018d4e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018d4e0`  (offset `0x18d4e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018d4e0(void)`
- **Size / BBs / Incoming:** 132 bytes / 4 bb / 4 incoming refs
- **Match values:** Leave
- **Strings touched:** JoinMeshJob::WaitLeaveMesh;JoinMeshJob::CompleteCancelWithLeaveMesh
- **Callees:** FUN_7100191bb0;FUN_7100192050
- **Files:** [decomp](../decompiled/FUN_710018d4e0__710018d4e0.c)  [cfg](../decompiled/FUN_710018d4e0__710018d4e0.mmd)
- **Clone hash:** `e8e44267561636e4`

```c

undefined8 FUN_710018d4e0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_30 [4];
  
  uVar1 = FUN_7100191bb0((long)DAT_71052adfc0);
  if ((uVar1 & 0xffff) < 2) {
    pcVar3 = FUN_710018d5e0;
    uVar2 = 0;
    pcVar4 = "JoinMeshJob::CompleteCancelWithLeaveMesh";
  }
  else {
    FUN_7100192050(aiStack_30,DAT_71052adfc0,(int *)(param_1 + 0xc0));
    pcVar3 = FUN_710018d570;
    uVar2 = 5;
    pcVar4 = "JoinMeshJob::WaitLeaveMesh";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}


```

## 25. `FUN_71000fd440`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd440`  (offset `0xfd440`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd440(void)`
- **Size / BBs / Incoming:** 612 bytes / 25 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::StartLeavePreviousMesh
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;FUN_7100150680;FUN_71001508c0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fd440__71000fd440.c)  [cfg](../decompiled/FUN_71000fd440__71000fd440.mmd)
- **Clone hash:** `f5bf46d8f3521d0a`

```c

ulong FUN_71000fd440(long param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  int aiStack_70 [4];
  undefined4 auStack_58 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_70[0] = 0xc406;
    break;
  case 6:
    aiStack_70[0] = 0xa471;
    break;
  case 7:
    aiStack_70[0] = 0xc420;
    break;
  case 8:
    aiStack_70[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_70,DAT_71052adfc0);
    if ((aiStack_70[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        uVar6 = 0x3e80000;
        if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x1e0)) {
          lVar9 = *(long *)(param_1 + 0xb0);
          if (lVar9 != param_1 + 0xa8) {
// ... (62 more lines)
```

## 26. `FUN_71000fddd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fddd0`  (offset `0xfddd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fddd0(void)`
- **Size / BBs / Incoming:** 392 bytes / 18 bb / 3 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeavePreviousMesh;NexMatchJointSessionJob::StartLeaveMesh
- **Callees:** FUN_71000bcf30;FUN_7100140060;FUN_7100146ba0;FUN_7100150680;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fddd0__71000fddd0.c)  [cfg](../decompiled/FUN_71000fddd0__71000fddd0.mmd)
- **Clone hash:** `8359d84b9d736757`

```c

undefined8 FUN_71000fddd0(long param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar2 == 7) {
    aiStack_40[0] = 0xc420;
  }
  else if (iVar2 == 6) {
    aiStack_40[0] = 0xa471;
  }
  else if (iVar2 == 5) {
    aiStack_40[0] = 0xc406;
  }
  else {
    if (iVar2 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        *(undefined1 *)(param_1 + 0x130) = 6;
        *(code **)(param_1 + 0x30) = FUN_71000f7210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
        return 5;
      }
      bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
      if ((bVar1) &&
         ((bVar1 = FUN_7100140060(param_1), !bVar1 || (*(char *)(param_1 + 0xf7) == '\0')))) {
        return 5;
      }
      *(code **)(param_1 + 0x30) = FUN_71000fd6b0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar3 = "NexMatchJointSessionJob::StartLeavePreviousMesh";
      goto LAB_71000fdeb8;
    }
// ... (18 more lines)
```

## 27. `FUN_710018f560`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f560`  (offset `0x18f560`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018f560(void)`
- **Size / BBs / Incoming:** 116 bytes / 4 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveWithHostMigrationJob::WaitMigrationResponse;LeaveWithHostMigrationJob::CleanupMesh
- **Callees:** FUN_7100193580;FUN_710019ac40
- **Files:** [decomp](../decompiled/FUN_710018f560__710018f560.c)  [cfg](../decompiled/FUN_710018f560__710018f560.mmd)
- **Clone hash:** `7d1655b07121d0c5`

```c

undefined8 FUN_710018f560(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  uVar2 = FUN_710019ac40(lVar1,param_1 + 0x6e);
  if ((uVar2 & 1) == 0) {
    pcVar4 = FUN_710018f700;
    uVar3 = 0;
    pcVar5 = "LeaveWithHostMigrationJob::CleanupMesh";
  }
  else {
    *(undefined1 *)(param_1 + 0x8e) = 1;
    pcVar4 = FUN_710018f800;
    uVar3 = 5;
    pcVar5 = "LeaveWithHostMigrationJob::WaitMigrationResponse";
  }
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}


```

## 28. `FUN_71000fdf60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fdf60`  (offset `0xfdf60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fdf60(void)`
- **Size / BBs / Incoming:** 580 bytes / 20 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fdf60__71000fdf60.c)  [cfg](../decompiled/FUN_71000fdf60__71000fdf60.mmd)
- **Clone hash:** `23839102481e6e1a`

```c

undefined8 FUN_71000fdf60(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  code *pcVar6;
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
    if ((aiStack_40[0] != 0) || (iVar1 = FUN_7100146ba0(DAT_71052adb38), iVar1 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      uVar5 = 4;
LAB_71000fe024:
      *(undefined1 *)(param_1 + 0x130) = uVar5;
// ... (47 more lines)
```

## 29. `FUN_71000d5800`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5800`  (offset `0xd5800`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d5800(long param_1)`
- **Size / BBs / Incoming:** 252 bytes / 11 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexJoinMeshJob::LeaveMeshWithHostMigration;NexJoinMeshJob::LeaveMesh;NexJoinMeshJob::CompleteProcess
- **Callees:** FUN_71000b4990;FUN_710018b370;FUN_71001921a0;FUN_71001931d0;FUN_71001939d0
- **Files:** [decomp](../decompiled/FUN_71000d5800__71000d5800.c)  [cfg](../decompiled/FUN_71000d5800__71000d5800.mmd)
- **Clone hash:** `b4c8d4e2fbd1cf44`

```c

undefined8 FUN_71000d5800(long param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) != 0) && (bVar2 = FUN_71001931d0(DAT_71052adfc0), bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d4e0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexJoinMeshJob::LeaveMeshWithHostMigration";
      return 0;
    }
    *(code **)(param_1 + 0x30) = FUN_710018d6e0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::LeaveMesh";
    return 0;
  }
  uVar4 = FUN_710018b370(param_1);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar5 = FUN_71001939d0(DAT_71052adfc0);
  uVar3 = FUN_71000b4990(lVar5);
  if ((uVar3 & 1) != 0) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_710018cf30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
  return 0;
}


```

## 30. `FUN_71002a5cc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a5cc0`  (offset `0x2a5cc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a5cc0(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** leave
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;leaveRoom;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a5cc0__71002a5cc0.c)  [cfg](../decompiled/FUN_71002a5cc0__71002a5cc0.mmd)
- **Clone hash:** `49734bc8910cf610`

```c

void FUN_71002a5cc0(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint *puVar18;
  long lVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  code *pcVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  int local_358 [6];
  char *local_340;
  undefined **local_338;
  undefined1 local_330 [4];
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
// ... (284 more lines)
```

## 31. `FUN_7100102730`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102730`  (offset `0x102730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100102730(void)`
- **Size / BBs / Incoming:** 976 bytes / 33 bb / 2 incoming refs
- **Match values:** Leave
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

## 32. `FUN_7100101bd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100101bd0`  (offset `0x101bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100101bd0(void)`
- **Size / BBs / Incoming:** 1220 bytes / 38 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCompanionStation
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_7100146ed0;FUN_710014ea20;FUN_7100150680;FUN_7100192e90;FUN_71001939c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100101bd0__7100101bd0.c)  [cfg](../decompiled/FUN_7100101bd0__7100101bd0.mmd)
- **Clone hash:** `03afbe4bf4ab31f8`

```c

undefined8 FUN_7100101bd0(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_58[0] = 0xc406;
    break;
  case 6:
    aiStack_58[0] = 0xa471;
    break;
  case 7:
    aiStack_58[0] = 0xc420;
    break;
  case 8:
    aiStack_58[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_58,DAT_71052adfc0);
    if ((aiStack_58[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar9 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        if (*(ulong *)(param_1 + 0x200) < *(ulong *)(DAT_71052ac580 + 0x30)) {
          *(undefined1 *)(param_1 + 0x130) = 0x22;
        }
// ... (149 more lines)
```

## 33. `FUN_71000fb490`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fb490`  (offset `0xfb490`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fb490(void)`
- **Size / BBs / Incoming:** 1276 bytes / 54 bb / 3 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitUntilCompanionLeavesMesh
- **Callees:** FUN_71000b4260;FUN_71000bb680;FUN_71000bcf30;FUN_71000d8f90;FUN_7100140910;FUN_7100146ba0;FUN_7100146e20;FUN_710014efe0;FUN_7100150680;FUN_71001506d0;FUN_7100150770;FUN_7100150870;FUN_7100150900;FUN_7100150d50;FUN_7100192e90;FUN_71001939c0;...
- **Files:** [decomp](../decompiled/FUN_71000fb490__71000fb490.c)  [cfg](../decompiled/FUN_71000fb490__71000fb490.mmd)
- **Clone hash:** `8181c75b5aa0fa0e`

```c

/* WARNING: Removing unreachable block (ram,0x0071000fb988) */

undefined8 FUN_71000fb490(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 uVar9;
  ushort uVar10;
  short sVar11;
  long lVar12;
  ErrorResultVariant *this;
  long lVar13;
  long *plVar14;
  int aiStack_170 [4];
  int aiStack_160 [4];
  long alStack_150 [31];
  undefined4 auStack_58 [2];
  
  piVar7 = aiStack_170;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_150[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_150[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_150[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_150[0]._0_4_ = 0xc421;
// ... (154 more lines)
```

## 34. `FUN_71000fec40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fec40`  (offset `0xfec40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fec40(void)`
- **Size / BBs / Incoming:** 1944 bytes / 77 bb / 7 incoming refs
- **Match values:** Leave
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

## 35. `FUN_71000f74b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f74b0`  (offset `0xf74b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f74b0(void)`
- **Size / BBs / Incoming:** 744 bytes / 25 bb / 4 incoming refs
- **Match values:** Leave
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

## 36. `FUN_7100104b10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104b10`  (offset `0x104b10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104b10(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions
- **Files:** [decomp](../decompiled/FUN_7100104b10__7100104b10.c)  [cfg](../decompiled/FUN_7100104b10__7100104b10.mmd)
- **Clone hash:** `ac9f7f1e93d62910`

```c

void FUN_7100104b10(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_7100104540;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchLeaveSessionJob::LeaveMatchmakeSessionCompanions";
  return;
}


```

## 37. `FUN_710011cbb0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011cbb0`  (offset `0x11cbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011cbb0(void)`
- **Size / BBs / Incoming:** 372 bytes / 10 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** LanMatchJoinSessionJob::LeaveMatchmakeSession;nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitGetStationLocation
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011cbb0__710011cbb0.c)  [cfg](../decompiled/FUN_710011cbb0__710011cbb0.mmd)
- **Clone hash:** `f8ca07f2e20fa266`

```c

undefined8 FUN_710011cbb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_30[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      aiStack_30[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4))
      ;
      aiStack_40[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
      *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_710011cd30;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0xa0))
              (aiStack_30,*(long **)(param_1 + 0x138),param_1 + 0x60,
// ... (20 more lines)
```

## 38. `FUN_71000ff840`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff840`  (offset `0xff840`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff840(void)`
- **Size / BBs / Incoming:** 460 bytes / 16 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;chara/chara_4/chara_4_
- **Callees:** FUN_71000bcf30;FUN_71000d8f90;FUN_7100146ba0;FUN_71001918f0;FUN_7100193380;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000ff840__71000ff840.c)  [cfg](../decompiled/FUN_71000ff840__71000ff840.mmd)
- **Clone hash:** `03034b8154034ab2`

```c

undefined8 FUN_71000ff840(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
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
    FUN_71001918f0(aiStack_40,DAT_71052adfc0);
    if (aiStack_40[0] == 0) {
      FUN_7100193380((long)DAT_71052adfc0,1);
      pcVar4 = FUN_71000ffa10;
      pcVar3 = "NexMatchJointSessionJob::WaitCreateNextMesh";
// ... (31 more lines)
```

## 39. `FUN_71000fd9e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd9e0`  (offset `0xfd9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd9e0(void)`
- **Size / BBs / Incoming:** 1008 bytes / 35 bb / 3 incoming refs
- **Match values:** Leave
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

## 40. `FUN_71001049c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001049c0`  (offset `0x1049c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001049c0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 296 bytes / 14 bb / 4 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveSessionJob::LeaveBufferMatchmakeSession
- **Callers:** FUN_7100104540;FUN_7100104b30;FUN_7100104b80;FUN_7100104bd0
- **Callees:** FUN_71000c36b0;FUN_71000ee050;FUN_71000ee290;FUN_71000ee2c0;FUN_7100149290
- **Files:** [decomp](../decompiled/FUN_71001049c0__71001049c0.c)  [cfg](../decompiled/FUN_71001049c0__71001049c0.mmd)
- **Clone hash:** `edd922f1c8ceb94f`

```c

void FUN_71001049c0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  
  if (*(int *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 4 + 0x180) == 0
     ) {
    plVar6 = *(long **)(DAT_71052adb38 + 8);
    if ((plVar6 != (long *)0x0) && (iVar1 = FUN_71000ee2c0((long)plVar6), iVar1 != 0)) {
      uVar7 = 0;
      do {
        iVar1 = FUN_71000ee290((long)plVar6,uVar7);
        if (iVar1 != 0) {
          uVar3 = FUN_71000c36b0(DAT_71052acd90);
          uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,iVar1,uVar3);
          if ((uVar4 & 1) == 0) {
            FUN_71000ee050((long)plVar6,iVar1);
          }
          else if (iVar1 != *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 +
                                    0x180)) {
            FUN_7100149290(DAT_71052adb38,iVar1);
            goto LAB_7100104a00;
          }
        }
        uVar7 = uVar7 + 1;
        uVar2 = FUN_71000ee2c0((long)plVar6);
      } while (uVar7 < uVar2);
    }
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
// ... (10 more lines)
```

## 41. `FUN_710018eaf0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018eaf0`  (offset `0x18eaf0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_710018eaf0(long * param_1, undefined4 * param_2)`
- **Size / BBs / Incoming:** 288 bytes / 13 bb / 3 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveMeshJob::SendLeaveRequest
- **Callers:** FUN_710018de80;FUN_7100192af0;FUN_71001a65f0
- **Callees:** FUN_71000b4160;FUN_71000b4920;FUN_71000bb680;FUN_7100191ed0;FUN_71001a2880;FUN_71001a85d0
- **Files:** [decomp](../decompiled/FUN_710018eaf0__710018eaf0.c)  [cfg](../decompiled/FUN_710018eaf0__710018eaf0.mmd)
- **Clone hash:** `c63c9dd01531d58a`

```c

undefined4 FUN_710018eaf0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar2 = FUN_71000b4920((long)param_1);
  if (((iVar2 == 4) || (iVar2 = FUN_71000b4920((long)param_1), iVar2 == 1)) ||
     (iVar2 = FUN_71000b4920((long)param_1), iVar2 == 3)) {
    uVar4 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      param_1[0xd] = (long)param_2;
      FUN_71000b4160(param_2);
    }
    lVar1 = DAT_71052ac580;
    lVar5 = param_1[0xc];
    plVar3 = FUN_71000bb680();
    param_1[0xb] = *(long *)(lVar1 + 0x30) + *plVar3 * (long)(int)lVar5;
    FUN_7100191ed0(DAT_71052adfc0,2);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_710018ec10;
    param_1[7] = 0;
    param_1[8] = (long)"LeaveMeshJob::SendLeaveRequest";
    lVar5 = *(long *)(DAT_71052adfc0 + 0x20);
    if (*(char *)(lVar5 + 0xf4) != '\0') {
      FUN_71001a85d0(lVar5);
      *(undefined1 *)(lVar5 + 0x48) = 1;
    }
    plVar3 = *(long **)(DAT_71052adfc0 + 0x38);
    if (plVar3 == (long *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
// ... (9 more lines)
```

## 42. `FUN_7100102fc0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102fc0`  (offset `0x102fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100102fc0(long param_1)`
- **Size / BBs / Incoming:** 560 bytes / 20 bb / 5 incoming refs
- **Match values:** Leave
- **Strings touched:** chara/chara_4/chara_4_;dys_yoga03_l_03_set;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession;NexMatchJointSessionJob::WaitLeaveCurrentMatchmakeSession
- **Callees:** FUN_71000b40e0;FUN_71000bcf30;FUN_7100146ba0;FUN_7100146ed0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100102fc0__7100102fc0.c)  [cfg](../decompiled/FUN_7100102fc0__7100102fc0.mmd)
- **Clone hash:** `238cae7411822cfd`

```c

undefined8 FUN_7100102fc0(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  long *plVar6;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    local_50[0] = 0xc406;
    break;
  case 6:
    local_50[0] = 0xa471;
    break;
  case 7:
    local_50[0] = 0xc420;
    break;
  case 8:
    local_50[0] = 0xc421;
    break;
  default:
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    iVar1 = *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
    if (iVar1 == 0) {
LAB_71001031a8:
      pcVar5 = FUN_71001035f0;
      pcVar4 = "NexMatchJointSessionJob::StartLeaveBufferMatchmakeSession";
    }
// ... (51 more lines)
```

## 43. `FUN_71000fa9e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fa9e0`  (offset `0xfa9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fa9e0(void)`
- **Size / BBs / Incoming:** 908 bytes / 32 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::WaitCreateMatchmakeSession
- **Callees:** FUN_71000b4260;FUN_71000bcf30;FUN_71000d8f90;FUN_71000dc200;FUN_7100140910;FUN_7100146ba0;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fa9e0__71000fa9e0.c)  [cfg](../decompiled/FUN_71000fa9e0__71000fa9e0.mmd)
- **Clone hash:** `3bb13f5501c4c4b0`

```c

undefined8 FUN_71000fa9e0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  int aiStack_178 [4];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
// ... (155 more lines)
```

## 44. `FUN_710013f3b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f3b0`  (offset `0x13f3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f3b0(void)`
- **Size / BBs / Incoming:** 832 bytes / 18 bb / 5 incoming refs
- **Match values:** Leave
- **Strings touched:** JoinSessionJob::LeaveMesh
- **Callees:** FUN_71000b4180;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_7100146fd0;FUN_7100147420;FUN_7100147ce0;FUN_71001509c0;FUN_7100150b70;FUN_71001921a0;FUN_7100193320;FUN_7100193330;FUN_7100193380;FUN_7100193740;FUN_7100193770;...
- **Files:** [decomp](../decompiled/FUN_710013f3b0__710013f3b0.c)  [cfg](../decompiled/FUN_710013f3b0__710013f3b0.mmd)
- **Clone hash:** `a9a753ac1ebf2589`

```c

ulong FUN_710013f3b0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ErrorResultVariant *this;
  undefined4 *puVar11;
  long lVar12;
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 auStack_38 [2];
  
  uVar6 = (**(code **)(*param_1 + 0x48))();
  if ((uVar6 & 1) == 0) {
    if (((*(char *)((long)param_1 + 0x11c) == '\0') && (*(char *)((long)param_1 + 0x11d) == '\0'))
       && (*(char *)((long)param_1 + 0x11a) == '\0')) {
      bVar1 = FUN_71001921a0(DAT_71052adfc0);
      if (((bVar1 & 1) == 0) ||
         ((bVar1 = FUN_7100193320(DAT_71052adfc0), (bVar1 & 1) == 0 &&
          (bVar2 = FUN_7100193740(DAT_71052adfc0), !bVar2)))) {
        iVar3 = FUN_7100193770(DAT_71052adfc0);
        if (iVar3 == 0) {
          uStack_50 = CONCAT44(uStack_50._4_4_,0x6439);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&uStack_50 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_38);
          FUN_71000bcf30((int *)(param_1 + 0x24),(int *)&uStack_50);
          uVar6 = (**(code **)(*param_1 + 0x80))(param_1);
// ... (98 more lines)
```

## 45. `FUN_7100141dd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100141dd0`  (offset `0x141dd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100141dd0(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 3 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveSessionJob::LeaveCurrentMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_7100141dd0__7100141dd0.c)  [cfg](../decompiled/FUN_7100141dd0__7100141dd0.mmd)
- **Clone hash:** `c41aa9e8265be337`

```c

void FUN_7100141dd0(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_71001417f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveSessionJob::LeaveCurrentMatchmakeSession";
  return;
}


```

## 46. `FUN_710018ec10`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018ec10`  (offset `0x18ec10`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018ec10(long param_1)`
- **Size / BBs / Incoming:** 100 bytes / 1 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveMeshJob::WaitLeaveResponse
- **Callees:** FUN_7100193580;FUN_7100199b50;FUN_710019b560
- **Files:** [decomp](../decompiled/FUN_710018ec10__710018ec10.c)  [cfg](../decompiled/FUN_710018ec10__710018ec10.mmd)
- **Clone hash:** `1cd0b831d1fff350`

```c

undefined8 FUN_710018ec10(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  FUN_7100199b50(lVar1);
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  FUN_710019b560(lVar1,param_1);
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(code **)(param_1 + 0x30) = FUN_710018ec80;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::WaitLeaveResponse";
  return 5;
}


```

## 47. `FUN_7100104b30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104b30`  (offset `0x104b30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104b30(void)`
- **Size / BBs / Incoming:** 68 bytes / 1 bb / 1 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveSessionJob::LeaveCurrentMatchmakeSession
- **Callees:** FUN_71001049c0
- **Files:** [decomp](../decompiled/FUN_7100104b30__7100104b30.c)  [cfg](../decompiled/FUN_7100104b30__7100104b30.mmd)
- **Clone hash:** `fe9b7c697a1d6e0a`

```c

void FUN_7100104b30(long param_1)

{
  undefined **ppuStack_30;
  code *pcStack_28;
  undefined8 uStack_20;
  char *pcStack_18;
  
  ppuStack_30 = &PTR_FUN_7104f4a708;
  pcStack_28 = FUN_71001417f0;
  uStack_20 = 0;
  pcStack_18 = "LeaveSessionJob::LeaveCurrentMatchmakeSession";
  FUN_71001049c0(param_1,(long)&ppuStack_30);
  return;
}


```

## 48. `FUN_710018f5e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f5e0`  (offset `0x18f5e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018f5e0(void)`
- **Size / BBs / Incoming:** 280 bytes / 12 bb / 3 incoming refs
- **Match values:** Leave
- **Strings touched:** LeaveWithHostMigrationJob::WaitMigrationResponse;LeaveWithHostMigrationJob::CleanupMesh
- **Callees:** FUN_7100190a90;FUN_7100193560;FUN_7100193580;FUN_710019a410
- **Files:** [decomp](../decompiled/FUN_710018f5e0__710018f5e0.c)  [cfg](../decompiled/FUN_710018f5e0__710018f5e0.mmd)
- **Clone hash:** `fd36008dfa36485a`

```c

undefined8 FUN_710018f5e0(long *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  ulong uVar8;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  *(undefined1 *)((long)param_1 + 0x6d) = uVar1;
  bVar2 = FUN_7100193560(DAT_71052adfc0);
  pcVar7 = FUN_710018f700;
  uVar4 = 0;
  pcVar6 = "LeaveWithHostMigrationJob::CleanupMesh";
  if ((*(byte *)((long)param_1 + 0x6d) < 0x20) && (*(byte *)((long)param_1 + 0x6d) != bVar2)) {
    uVar8 = 0;
    do {
      while ((uint)bVar2 == ((uint)uVar8 & 0xff)) {
        *(undefined1 *)((long)param_1 + uVar8 + 0x6e) = 0;
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x20) goto LAB_710018f6c0;
      }
      bVar3 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar8);
      if (bVar3) {
        lVar5 = FUN_7100193580(DAT_71052adfc0);
        FUN_710019a410(lVar5,uVar8 & 0xffffffff,*(undefined1 *)((long)param_1 + 0x6d));
        *(undefined1 *)((long)param_1 + uVar8 + 0x6e) = 1;
      }
      else {
        *(undefined1 *)((long)param_1 + uVar8 + 0x6e) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20);
LAB_710018f6c0:
    *(undefined1 *)((long)param_1 + 0x8e) = 1;
// ... (10 more lines)
```

## 49. `FUN_71000d5680`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5680`  (offset `0xd5680`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5680(void)`
- **Size / BBs / Incoming:** 384 bytes / 18 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexJoinMeshJob::LeaveMeshWithHostMigration;NexJoinMeshJob::LeaveMesh;NexJoinMeshJob::CompleteProcess
- **Callees:** FUN_71000b4990;FUN_7100161fa0;FUN_710018b370;FUN_71001921a0;FUN_7100193110;FUN_71001931d0;FUN_71001939c0;FUN_71001939d0
- **Files:** [decomp](../decompiled/FUN_71000d5680__71000d5680.c)  [cfg](../decompiled/FUN_71000d5680__71000d5680.mmd)
- **Clone hash:** `03e507cc898ff576`

```c

undefined8 FUN_71000d5680(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  char *pcVar8;
  
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar5 = FUN_710018b370(param_1);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    lVar6 = FUN_71001939c0(DAT_71052adfc0);
    if (*(char *)(lVar6 + 0x84) != '\0') {
      return 5;
    }
    lVar6 = FUN_71001939d0(DAT_71052adfc0);
    uVar4 = FUN_71000b4990(lVar6);
    if ((uVar4 & 1) != 0) {
      return 5;
    }
    plVar7 = (long *)FUN_7100161fa0(DAT_71052add68);
    uVar3 = FUN_7100193110(DAT_71052adfc0);
    lVar6 = (**(code **)(*plVar7 + 0x48))(plVar7,uVar3);
    if (lVar6 == 0) {
      return 5;
    }
    if (*(int *)(lVar6 + 0x48) != 5) {
      return 5;
    }
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar8 = "NexJoinMeshJob::CompleteProcess";
  }
// ... (17 more lines)
```

## 50. `FUN_71000fb100`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fb100`  (offset `0xfb100`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fb100(void)`
- **Size / BBs / Incoming:** 900 bytes / 33 bb / 2 incoming refs
- **Match values:** Leave
- **Strings touched:** NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::ProcessFailure;chara/chara_4/chara_4_
- **Callees:** FUN_71000b4260;FUN_71000bcf30;FUN_71000d8f90;FUN_71000d9470;FUN_7100140910;FUN_7100146ba0;FUN_7100150680;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fb100__71000fb100.c)  [cfg](../decompiled/FUN_71000fb100__71000fb100.mmd)
- **Clone hash:** `f71948d0a5462073`

```c

undefined8 FUN_71000fb100(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  long *plVar12;
  int aiStack_178 [4];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
// ... (154 more lines)
```

