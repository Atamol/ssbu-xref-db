# mesh (funcs=189, hits=365)

Top 50 functions by hit count

## 1. `FUN_71000fec40`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fec40`  (offset `0xfec40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fec40(void)`
- **Size / BBs / Incoming:** 1944 bytes / 77 bb / 7 incoming refs
- **Match values:** Mesh
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

## 2. `FUN_71000d5530`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5530`  (offset `0xd5530`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5530(void)`
- **Size / BBs / Incoming:** 324 bytes / 16 bb / 3 incoming refs
- **Match values:** Mesh
- **Strings touched:** NexJoinMeshJob::LeaveMeshWithHostMigration;NexJoinMeshJob::LeaveMesh;NexJoinMeshJob::WaitCheckHostConnection;NexJoinMeshJob::WaitCheckKickoutJob
- **Callees:** FUN_7100152020;FUN_7100152040;FUN_710018b370;FUN_710018b870;FUN_71001921a0;FUN_7100192f60;FUN_71001931d0
- **Files:** [decomp](../decompiled/FUN_71000d5530__71000d5530.c)  [cfg](../decompiled/FUN_71000d5530__71000d5530.mmd)
- **Clone hash:** `f8cb40dd8874177c`

```c

undefined8 FUN_71000d5530(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  
  lVar3 = FUN_7100192f60(DAT_71052adfc0);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
    uVar4 = FUN_710018b370(param_1);
    if (((uVar4 & 1) != 0) ||
       ((bVar1 = FUN_71001921a0(DAT_71052adfc0), (bVar1 & 1) == 0 &&
        (uVar4 = FUN_710018b870(param_1), (uVar4 & 1) != 0)))) {
      FUN_7100152020(lVar3);
      return 1;
    }
    bVar2 = FUN_7100152040(lVar3);
    if (!bVar2) {
      return 5;
    }
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if ((bVar1 & 1) == 0) {
      *(code **)(param_1 + 0x30) = FUN_71000d5800;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckKickoutJob";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_71000d5680;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar5 = "NexJoinMeshJob::WaitCheckHostConnection";
    }
  }
  else {
    FUN_7100152020(lVar3);
    bVar1 = FUN_71001921a0(DAT_71052adfc0);
    if (((bVar1 & 1) == 0) || (bVar2 = FUN_71001931d0(DAT_71052adfc0), !bVar2)) {
      *(code **)(param_1 + 0x30) = FUN_710018d6e0;
// ... (13 more lines)
```

## 3. `FUN_71020fbb90`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** MESH
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

## 4. `FUN_71000d5800`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5800`  (offset `0xd5800`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000d5800(long param_1)`
- **Size / BBs / Incoming:** 252 bytes / 11 bb / 2 incoming refs
- **Match values:** Mesh
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

## 5. `FUN_71000d5680`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5680`  (offset `0xd5680`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5680(void)`
- **Size / BBs / Incoming:** 384 bytes / 18 bb / 2 incoming refs
- **Match values:** Mesh
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

## 6. `FUN_710018d4e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018d4e0`  (offset `0x18d4e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018d4e0(void)`
- **Size / BBs / Incoming:** 132 bytes / 4 bb / 4 incoming refs
- **Match values:** Mesh
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

## 7. `FUN_71001001a0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001001a0`  (offset `0x1001a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001001a0(void)`
- **Size / BBs / Incoming:** 1176 bytes / 49 bb / 2 incoming refs
- **Match values:** Mesh
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

## 8. `FUN_71035e0e50`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035e0e50`  (offset `0x35e0e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035e0e50(long * param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6928 bytes / 411 bb / 1 incoming refs
- **Match values:** Mesh
- **Strings touched:** model.xmb;lod.xmb;MeshArray;LodArray;Ratio;Visibility;value;dys_yoga03_l_03_set;parent;Motion;error;model.numdlb
- **Callers:** FUN_71035c2890
- **Callees:** FUN_7100492060;FUN_7103540a00;FUN_7103540b10;FUN_71035c25f0;FUN_71035c32d0;FUN_71035e2f00;FUN_71035e5bd0;FUN_71035e5ed0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::strcmp;<EXTERNAL>::strlen;<EXTERNAL>::memcpy;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::atoi;<EXTERNAL>::std::recursive_mutex::lock;...
- **Files:** [decomp](../decompiled/FUN_71035e0e50__71035e0e50.c)  [cfg](../decompiled/FUN_71035e0e50__71035e0e50.mmd)
- **Clone hash:** `9a4005f84d79ac7b`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71035e0e50(long *param_1,uint *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  long ********pppppppplVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong *puVar22;
  long *******ppppppplVar23;
  size_t sVar24;
  long ********pppppppplVar25;
  long *plVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long *******ppppppplVar30;
  long ********pppppppplVar31;
  ulong uVar32;
  long ********pppppppplVar33;
// ... (1329 more lines)
```

## 9. `FUN_71000ff630`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff630`  (offset `0xff630`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff630(void)`
- **Size / BBs / Incoming:** 528 bytes / 16 bb / 2 incoming refs
- **Match values:** Mesh
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

## 10. `FUN_7100100820`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100820`  (offset `0x100820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100820(void)`
- **Size / BBs / Incoming:** 2540 bytes / 89 bb / 2 incoming refs
- **Match values:** Mesh
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

## 11. `FUN_71000ff3e0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff3e0`  (offset `0xff3e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff3e0(void)`
- **Size / BBs / Incoming:** 592 bytes / 32 bb / 5 incoming refs
- **Match values:** Mesh
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

## 12. `FUN_71001a4790`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a4790`  (offset `0x1a4790`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71001a4790(long * param_1, long param_2, undefined8 param_3, uint param_4)`
- **Size / BBs / Incoming:** 260 bytes / 11 bb / 1 incoming refs
- **Match values:** Mesh
- **Strings touched:** select_item;ProcessUpdateMeshJob::WaitDirectConnection;ProcessUpdateMeshJob::CheckConnectionAll;ProcessUpdateMeshJob::UpdateFailed
- **Callers:** FUN_7100198e30
- **Callees:** FUN_7100193a00;FUN_71001a48a0;FUN_71001a4b30;FUN_71001a4c50;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_71001a4790__71001a4790.c)  [cfg](../decompiled/FUN_71001a4790__71001a4790.mmd)
- **Clone hash:** `a149cf7248a497ce`

```c

ulong FUN_71001a4790(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = FUN_71001a48a0((long)param_1,param_2);
  if ((int)uVar3 == 4) {
    FUN_71001a4b30((long)param_1,param_4 & 1);
    if ((param_4 & 1) == 0) {
      param_1[0x1d] = 0;
    }
    else {
      *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + 1;
    }
    *(char *)((long)param_1 + 0xf5) = (char)(param_4 & 1);
    memset(param_1 + 0x10,0xff,0x20);
    *(undefined1 *)((long)param_1 + 0xf4) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    uVar2 = FUN_71001a4c50((long)param_1);
    *(byte *)((long)param_1 + 0xfc) = (byte)uVar2 & 1;
    if ((uVar2 & 1) == 0) {
      param_1[6] = (long)FUN_71001a65f0;
      pcVar4 = "ProcessUpdateMeshJob::UpdateFailed";
    }
    else {
      bVar1 = FUN_7100193a00(DAT_71052adfc0);
      if ((bVar1 & 1) == 0) {
        param_1[6] = (long)FUN_71001a5e80;
        pcVar4 = "ProcessUpdateMeshJob::CheckConnectionAll";
      }
      else {
        param_1[6] = (long)FUN_71001a5780;
        pcVar4 = "ProcessUpdateMeshJob::WaitDirectConnection";
      }
    }
    param_1[7] = 0;
// ... (5 more lines)
```

## 13. `FUN_71000fc7d0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fc7d0`  (offset `0xfc7d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fc7d0(void)`
- **Size / BBs / Incoming:** 1164 bytes / 32 bb / 6 incoming refs
- **Match values:** Mesh
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

## 14. `FUN_71001a7ee0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a7ee0`  (offset `0x1a7ee0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001a7ee0(long * param_1, long param_2, undefined8 param_3, uint param_4)`
- **Size / BBs / Incoming:** 884 bytes / 49 bb / 1 incoming refs
- **Match values:** Mesh
- **Strings touched:** select_item;ProcessUpdateMeshJob::WaitDirectConnection;ProcessUpdateMeshJob::CheckConnectionAll;ProcessUpdateMeshJob::UpdateFailed
- **Callers:** FUN_7100198e30
- **Callees:** FUN_71000bb9a0;FUN_7100193a00;FUN_71001a4b30;FUN_71001a4c50;FUN_71001a8260
- **Files:** [decomp](../decompiled/FUN_71001a7ee0__71001a7ee0.c)  [cfg](../decompiled/FUN_71001a7ee0__71001a7ee0.mmd)
- **Clone hash:** `dc7d8347de689d79`

```c

undefined8 FUN_71001a7ee0(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_70;
  undefined4 local_68;
  
  bVar7 = *(byte *)(param_2 + 1);
  cVar3 = *(char *)(param_2 + 2);
  uVar8 = FUN_71000bb9a0((uint *)(param_2 + 4));
  if ((*(ushort *)(param_1 + 0x14) < (ushort)bVar7) ||
     ((uVar8 <= *(uint *)(param_1 + 0x1e) && ((param_4 & 1) == 0)))) {
    return 0;
  }
  if (*(char *)(param_2 + 8) == '\x02') {
    uVar15 = (ulong)*(byte *)(param_2 + 9);
    if (((char)param_1[0x19] == '\0') && (*(char *)((long)param_1 + 0xc9) == '\0')) {
      *(ushort *)((long)param_1 + 0xca) = (ushort)bVar7;
      *(char *)((long)param_1 + 0xcc) = cVar3;
      *(uint *)(param_1 + 0x1a) = uVar8;
      *(undefined1 *)((long)param_1 + 0xd4) = 2;
LAB_71001a81c0:
      bVar4 = *(byte *)(param_2 + 10);
      if (bVar4 != 0) {
// ... (131 more lines)
```

## 15. `FUN_71000fe620`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fe620`  (offset `0xfe620`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fe620(void)`
- **Size / BBs / Incoming:** 392 bytes / 16 bb / 5 incoming refs
- **Match values:** Mesh
- **Strings touched:** NexMatchJointSessionJob::ProcessFailure;NexMatchJointSessionJob::StartLeaveMesh;NexMatchJointSessionJob::MeshRestart
- **Callees:** FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000fe620__71000fe620.c)  [cfg](../decompiled/FUN_71000fe620__71000fe620.mmd)
- **Clone hash:** `3999ea7f1e1980bd`

```c

undefined8 FUN_71000fe620(long param_1)

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
    if (*(char *)(param_1 + 0xfb) == '\0') {
      if (*(ulong *)(param_1 + 0x208) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(code **)(param_1 + 0x30) = FUN_71000fec40;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::MeshRestart";
      }
      uVar2 = 5;
      if (*(char *)(param_1 + 0xf4) == '\0') {
        return 5;
      }
      pcVar3 = FUN_71000fec40;
      pcVar4 = "NexMatchJointSessionJob::MeshRestart";
    }
    else {
// ... (26 more lines)
```

## 16. `FUN_710226e860`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226e860`  (offset `0x226e860`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226e860(long param_1)`
- **Size / BBs / Incoming:** 1152 bytes / 4 bb / 2 incoming refs
- **Match values:** mesh
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

## 17. `FUN_71000f9e90`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f9e90`  (offset `0xf9e90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f9e90(void)`
- **Size / BBs / Incoming:** 812 bytes / 23 bb / 3 incoming refs
- **Match values:** Mesh
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

## 18. `FUN_7103660e50`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103660e50`  (offset `0x3660e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103660e50(undefined8 * param_1, long param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2928 bytes / 135 bb / 2 incoming refs
- **Match values:** mesh
- **Strings touched:** distortionmesh
- **Callers:** FUN_710365f580
- **Callees:** FUN_71002c51f0;FUN_7103593520;FUN_710359d620;FUN_710359ddb0;FUN_71035e88e0;FUN_71035e90a0;FUN_71035e9280;FUN_71035f68b0;FUN_7103662c30;FUN_71037c3a70;FUN_7103886f60;FUN_710388a9a0;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;...
- **Files:** [decomp](../decompiled/FUN_7103660e50__7103660e50.c)  [cfg](../decompiled/FUN_7103660e50__7103660e50.mmd)
- **Clone hash:** `06b3840b7a168e6d`

```c

/* WARNING: Removing unreachable block (ram,0x0071036615a8) */

void FUN_7103660e50(undefined8 *param_1,long param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte ****ppppbVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 local_5d8;
  long *local_5d0;
  long local_5c8;
  long *local_5c0;
  long local_5b8;
  void *local_5b0;
  byte *local_5a8;
  byte *local_5a0;
  undefined8 local_598;
  undefined8 *local_590;
  undefined8 *local_588;
  undefined8 *puStack_580;
  undefined2 local_578;
  undefined2 uStack_576;
  undefined4 uStack_574;
  undefined1 local_570;
// ... (597 more lines)
```

## 19. `FUN_710013f090`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f090`  (offset `0x13f090`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f090(void)`
- **Size / BBs / Incoming:** 328 bytes / 9 bb / 6 incoming refs
- **Match values:** Mesh
- **Strings touched:** JoinSessionJob::WaitLeaveMeshWithHostMigration;JoinSessionJob::WaitLeaveMesh;NODE_PRE_REFRACT_BLEND;JoinSessionJob::WaitDestroyMesh
- **Callees:** FUN_71000bcf30;FUN_7100191ee0;FUN_71001921a0;FUN_71001921b0;FUN_7100192c30;FUN_71001931d0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710013f090__710013f090.c)  [cfg](../decompiled/FUN_710013f090__710013f090.mmd)
- **Clone hash:** `8f7ffe00f10f8ab9`

```c

ulong FUN_710013f090(long *param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if (bVar1) {
    bVar2 = FUN_71001921a0((long)DAT_71052adfc0);
    if ((bVar2 & 1) == 0) {
      FUN_7100191ee0(aiStack_40,DAT_71052adfc0);
      FUN_71000bcf30(aiStack_30,aiStack_40);
      param_1[6] = (long)FUN_710013f1e0;
      param_1[7] = 0;
      param_1[8] = (long)"JoinSessionJob::WaitDestroyMesh";
    }
    else {
      FUN_71001921b0(aiStack_40,DAT_71052adfc0);
      FUN_71000bcf30(aiStack_30,aiStack_40);
      param_1[6] = (long)FUN_710013f260;
      param_1[7] = 0;
      param_1[8] = (long)"JoinSessionJob::WaitLeaveMeshWithHostMigration";
    }
  }
  else {
    FUN_7100192c30(aiStack_40,(long)DAT_71052adfc0);
    FUN_71000bcf30(aiStack_30,aiStack_40);
    param_1[6] = (long)FUN_710013f2e0;
    param_1[7] = 0;
// ... (16 more lines)
```

## 20. `FUN_710208d940`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710208d940`  (offset `0x208d940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710208d940(long param_1)`
- **Size / BBs / Incoming:** 528 bytes / 4 bb / 2 incoming refs
- **Match values:** mesh
- **Strings touched:** VisibilityModule;set_int64;set_status_default;TRANS_A_JUMP_AERIAL;set_status_default_int64;reset_status_default;reset_status_default_int64;reset_status_default_all;set_default_all;set_mesh_visibility;set_mesh_visibility_int64;set_material_anim_priority;set_whole;get_whole;is_visible;set_default;set_default_int64;is_visible_mesh;set_visibility_mode;set_model_visible
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710208d940__710208d940.c)  [cfg](../decompiled/FUN_710208d940__710208d940.mmd)
- **Clone hash:** `55e21a4c2263786c`

```c

void FUN_710208d940(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"VisibilityModule",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)&DAT_710438db8b,(long ****)FUN_710208c160,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_int64",(long ****)FUN_710208c2b0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_default",(long ****)FUN_710208c400,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_status_default_int64",(long ****)FUN_710208c550,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_status_default",(long ****)FUN_710208c6a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_status_default_int64",(long ****)FUN_710208c7d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"reset_status_default_all",(long ****)FUN_710208c900,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_default_all",(long ****)FUN_710208c9b0,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_mesh_visibility",(long ****)FUN_710208ca60,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_mesh_visibility_int64",(long ****)FUN_710208cc50,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_material_anim_priority",(long ****)FUN_710208ce40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_whole",(long ****)FUN_710208cfe0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (20 more lines)
```

## 21. `FUN_71000d53a0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d53a0`  (offset `0xd53a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d53a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 17 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::WaitBandwidthCheck
- **Callees:** FUN_7100151ef0;FUN_7100151fe0;FUN_7100152020;FUN_7100161fb0;FUN_7100192f60;FUN_7100193560
- **Files:** [decomp](../decompiled/FUN_71000d53a0__71000d53a0.c)  [cfg](../decompiled/FUN_71000d53a0__71000d53a0.mmd)
- **Clone hash:** `929958c318dc8f0d`

```c

undefined8 FUN_71000d53a0(long param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ushort uVar7;
  int aiStack_60 [4];
  
  lVar4 = FUN_7100192f60(DAT_71052adfc0);
  if (*(char *)(lVar4 + 0x51) != '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018cf30;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::CompleteProcess";
    return 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 3;
  if (*(ushort *)(param_1 + 0x6c) < 2) {
LAB_71000d54c4:
    *(char **)(param_1 + 0x40) = "NexJoinMeshJob::WaitBandwidthCheck";
    *(code **)(param_1 + 0x30) = FUN_71000d5530;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  uVar3 = FUN_7100151fe0(lVar4);
  if ((uVar3 & 1) == 0) {
    FUN_7100152020(lVar4);
    return 5;
  }
  plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
  aiStack_60[0] = 0;
  aiStack_60[1] = 0x800;
  aiStack_60[2] = 0;
  (**(code **)(*plVar5 + 0x68))(plVar5,aiStack_60);
  if (1 < *(ushort *)(param_1 + 0x6c)) {
    uVar7 = 2;
// ... (21 more lines)
```

## 22. `FUN_71001a65f0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a65f0`  (offset `0x1a65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001a65f0(long param_1)`
- **Size / BBs / Incoming:** 168 bytes / 6 bb / 7 incoming refs
- **Match values:** Mesh
- **Strings touched:** ProcessUpdateMeshJob::WaitLeaveMesh;ProcessUpdateMeshJob::CleanupByProcessFailure
- **Callees:** FUN_71000b4820;FUN_710018eaf0;FUN_7100191ed0
- **Files:** [decomp](../decompiled/FUN_71001a65f0__71001a65f0.c)  [cfg](../decompiled/FUN_71001a65f0__71001a65f0.mmd)
- **Clone hash:** `206d666685229cdf`

```c

undefined8 FUN_71001a65f0(long param_1)

{
  long lVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  
  if ((*(char *)(param_1 + 0xf6) != '\0') && (*(int *)(param_1 + 0x100) != 1)) {
    uVar2 = FUN_710018eaf0(*(long **)(DAT_71052adfc0 + 0x10),(undefined4 *)(param_1 + 0x100));
    if ((uVar2 & 1) != 0) {
      FUN_71000b4820(*(long *)(DAT_71052adfc0 + 0x10),0);
      pcVar4 = FUN_71001a7ea0;
      pcVar3 = "ProcessUpdateMeshJob::WaitLeaveMesh";
      goto LAB_71001a6680;
    }
  }
  lVar1 = DAT_71052adfc0;
  *(undefined4 *)(DAT_71052adfc0 + 0xb4) = 6;
  FUN_7100191ed0(lVar1,6);
  pcVar4 = FUN_71001a7dd0;
  pcVar3 = "ProcessUpdateMeshJob::CleanupByProcessFailure";
LAB_71001a6680:
  *(code **)(param_1 + 0x30) = pcVar4;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar3;
  return 0;
}


```

## 23. `FUN_7100100640`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100640`  (offset `0x100640`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100640(void)`
- **Size / BBs / Incoming:** 472 bytes / 15 bb / 2 incoming refs
- **Match values:** Mesh
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

## 24. `FUN_7100193c30`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100193c30`  (offset `0x193c30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100193c30(void)`
- **Size / BBs / Incoming:** 248 bytes / 12 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** DestroyMeshJob::CleanupMesh;DestroyMeshJob::WaitDestroyResponse
- **Callees:** FUN_7100190a90;FUN_7100193560;FUN_7100193580;FUN_7100199db0
- **Files:** [decomp](../decompiled/FUN_7100193c30__7100193c30.c)  [cfg](../decompiled/FUN_7100193c30__7100193c30.mmd)
- **Clone hash:** `92b344789499c396`

```c

undefined8 FUN_7100193c30(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  char *pcVar7;
  ulong uVar8;
  
  bVar2 = FUN_7100193560(DAT_71052adfc0);
  if (bVar2 < 0x20) {
    uVar8 = 0;
    lVar1 = param_1 + 0x6c;
    do {
      while ((uint)bVar2 == ((uint)uVar8 & 0xff)) {
        *(undefined1 *)(lVar1 + uVar8) = 0;
        uVar8 = uVar8 + 1;
        if (uVar8 == 0x20) goto LAB_7100193cf0;
      }
      bVar3 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar8);
      if (bVar3) {
        lVar5 = FUN_7100193580(DAT_71052adfc0);
        FUN_7100199db0(lVar5,uVar8 & 0xffffffff);
        *(undefined1 *)(lVar1 + uVar8) = 1;
      }
      else {
        *(undefined1 *)(lVar1 + uVar8) = 0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x20);
LAB_7100193cf0:
    *(undefined1 *)(param_1 + 0x8c) = 1;
    pcVar6 = FUN_7100193e40;
    uVar4 = 5;
    pcVar7 = "DestroyMeshJob::WaitDestroyResponse";
  }
// ... (11 more lines)
```

## 25. `FUN_710225b990`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b990`  (offset `0x225b990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b990(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 64040 bytes / 97 bb / 2 incoming refs
- **Match values:** MESH
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

## 26. `FUN_71001a1100`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a1100`  (offset `0x1a1100`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a1100(void)`
- **Size / BBs / Incoming:** 144 bytes / 5 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** ProcessDestroyMeshJob::CleanupMesh
- **Callees:** FUN_7100193110;FUN_7100193580;FUN_7100199ef0
- **Files:** [decomp](../decompiled/FUN_71001a1100__71001a1100.c)  [cfg](../decompiled/FUN_71001a1100__71001a1100.mmd)
- **Clone hash:** `539ba9b0ce9f4d02`

```c

undefined8 FUN_71001a1100(long param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  
  bVar1 = FUN_7100193110(DAT_71052adfc0);
  if (bVar1 < 0x20) {
    plVar2 = (long *)FUN_7100193580(DAT_71052adfc0);
    uVar3 = FUN_7100199ef0(plVar2,(uint)bVar1);
    if (((uVar3 & 1) == 0) && (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
  }
  *(code **)(param_1 + 0x30) = FUN_71001a1190;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessDestroyMeshJob::CleanupMesh";
  return 5;
}


```

## 27. `FUN_71000fd6b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd6b0`  (offset `0xfd6b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd6b0(void)`
- **Size / BBs / Incoming:** 808 bytes / 27 bb / 3 incoming refs
- **Match values:** Mesh
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

## 28. `FUN_710018b770`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018b770`  (offset `0x18b770`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018b770(long param_1)`
- **Size / BBs / Incoming:** 248 bytes / 9 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** JoinMeshJob::WaitJoinResponse;JoinMeshJob::AnalyzeJoinResponse
- **Callees:** FUN_710018a7d0;FUN_710018b370;FUN_710018b870;FUN_7100193a40;FUN_71001adfc0;FUN_71001ae030
- **Files:** [decomp](../decompiled/FUN_710018b770__710018b770.c)  [cfg](../decompiled/FUN_710018b770__710018b770.mmd)
- **Clone hash:** `191bb11d1d84b3ec`

```c

undefined8 FUN_710018b770(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  lVar1 = FUN_7100193a40(DAT_71052adfc0);
  uVar2 = FUN_71001adfc0(lVar1,*(int *)(param_1 + 0x68));
  if ((uVar2 & 1) == 0) {
    *(code **)(param_1 + 0x30) = FUN_710018bdd0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitJoinResponse";
    return 0;
  }
  uVar2 = FUN_710018a7d0(param_1);
  if ((((uVar2 & 1) == 0) && (uVar2 = FUN_710018b370(param_1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_710018b870(param_1), (uVar2 & 1) == 0)) {
    if (*(char *)(param_1 + 0x80) != '\0') {
      return 5;
    }
    plVar3 = (long *)FUN_7100193a40(DAT_71052adfc0);
    FUN_71001ae030(plVar3,*(int *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(code **)(param_1 + 0x30) = FUN_710018b9f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::AnalyzeJoinResponse";
    return 0;
  }
  plVar3 = (long *)FUN_7100193a40(DAT_71052adfc0);
  FUN_71001ae030(plVar3,*(int *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return 1;
}


```

## 29. `FUN_71001a5780`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a5780`  (offset `0x1a5780`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a5780(void)`
- **Size / BBs / Incoming:** 1792 bytes / 50 bb / 3 incoming refs
- **Match values:** Mesh
- **Strings touched:** ProcessUpdateMeshJob::SendConnectionReport;ProcessUpdateMeshJob::UpdateFailed
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710015e540;FUN_710015e550;FUN_710015e7d0;FUN_71001602c0;FUN_7100161fa0;FUN_7100161fb0;FUN_7100162430;FUN_7100193110;FUN_7100193560;FUN_7100193580;FUN_7100199a50;FUN_71001a6860;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;...
- **Files:** [decomp](../decompiled/FUN_71001a5780__71001a5780.c)  [cfg](../decompiled/FUN_71001a5780__71001a5780.mmd)
- **Clone hash:** `2f8a7d54127571fb`

```c

undefined8 FUN_71001a5780(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ErrorResultVariant *this;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar6 = FUN_7100193560(DAT_71052adfc0);
    plVar8 = (long *)(ulong)bVar6;
    if (bVar6 < 0x20) {
      if (*(short *)(param_1 + 0xd6) != 0) {
        uVar14 = *(ulong *)(param_1 + 0xe0);
        bVar4 = false;
        uVar12 = *(ulong *)(DAT_71052ac580 + 0x30);
        lVar18 = 0;
        uVar17 = 0;
        bVar3 = false;
        bVar2 = false;
        this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
// ... (229 more lines)
```

## 30. `FUN_71000fd440`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd440`  (offset `0xfd440`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd440(void)`
- **Size / BBs / Incoming:** 612 bytes / 25 bb / 2 incoming refs
- **Match values:** Mesh
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

## 31. `FUN_71000fddd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fddd0`  (offset `0xfddd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fddd0(void)`
- **Size / BBs / Incoming:** 392 bytes / 18 bb / 3 incoming refs
- **Match values:** Mesh
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

## 32. `FUN_71001a7330`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a7330`  (offset `0x1a7330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a7330(void)`
- **Size / BBs / Incoming:** 2716 bytes / 81 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** ProcessUpdateMeshJob::CheckConnectionAll;ProcessUpdateMeshJob::UpdateFailed;select_item
- **Callees:** FUN_71000b1cf0;FUN_71000b40e0;FUN_71000b4260;FUN_71000b4820;FUN_71000b4990;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710015e540;FUN_710015e550;FUN_710015e560;FUN_710015e730;FUN_710015e7d0;FUN_7100160230;FUN_71001602c0;FUN_7100161fa0;...
- **Files:** [decomp](../decompiled/FUN_71001a7330__71001a7330.c)  [cfg](../decompiled/FUN_71001a7330__71001a7330.mmd)
- **Clone hash:** `026d4f0181061031`

```c

undefined8 FUN_71001a7330(long param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  ushort uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ErrorResultVariant *this;
  undefined1 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  int aiStack_90 [5];
  byte abStack_7c [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar3 = FUN_7100193560(DAT_71052adfc0);
    uVar7 = (uint)bVar3;
    if (bVar3 < 0x20) {
      lVar8 = FUN_7100193a30(DAT_71052adfc0);
// ... (319 more lines)
```

## 33. `FUN_71000fdf60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fdf60`  (offset `0xfdf60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fdf60(void)`
- **Size / BBs / Incoming:** 580 bytes / 20 bb / 2 incoming refs
- **Match values:** Mesh
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

## 34. `FUN_7100196770`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100196770`  (offset `0x196770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100196770(undefined8 * param_1)`
- **Size / BBs / Incoming:** 180 bytes / 4 bb / 1 incoming refs
- **Match values:** Mesh
- **Strings touched:** MeshProtocolReliable send buffer num;MeshProtocolReliable receive buffer num
- **Callers:** FUN_710018fcc0
- **Callees:** FUN_71000bc710;FUN_71000bc730;FUN_7100156390
- **Files:** [decomp](../decompiled/FUN_7100196770__7100196770.c)  [cfg](../decompiled/FUN_7100196770__7100196770.mmd)
- **Clone hash:** `4d6fcaaf5013cd3b`

```c

void FUN_7100196770(undefined8 *param_1)

{
  long lVar1;
  
  FUN_7100156390(param_1);
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_thunk_FUN_71001563d0_7104f54248;
  param_1[0xd] = 0x3e800000000;
  param_1[0xe] = 0;
  *(undefined2 *)((long)param_1 + 0x7a) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xaa) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  if (DAT_71052accf8 != 0) {
    lVar1 = FUN_71000bc710(DAT_71052accf8,9);
    FUN_71000bc730(lVar1,"MeshProtocolReliable send buffer num");
    if (DAT_71052accf8 != 0) {
      lVar1 = FUN_71000bc710(DAT_71052accf8,10);
      FUN_71000bc730(lVar1,"MeshProtocolReliable receive buffer num");
      return;
    }
  }
  return;
}


```

## 35. `FUN_7100102730`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100102730`  (offset `0x102730`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100102730(void)`
- **Size / BBs / Incoming:** 976 bytes / 33 bb / 2 incoming refs
- **Match values:** Mesh
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

## 36. `FUN_7100101bd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100101bd0`  (offset `0x101bd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100101bd0(void)`
- **Size / BBs / Incoming:** 1220 bytes / 38 bb / 2 incoming refs
- **Match values:** Mesh
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

## 37. `FUN_71000fb490`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fb490`  (offset `0xfb490`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fb490(void)`
- **Size / BBs / Incoming:** 1276 bytes / 54 bb / 3 incoming refs
- **Match values:** Mesh
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

## 38. `FUN_710018d570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018d570`  (offset `0x18d570`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018d570(void)`
- **Size / BBs / Incoming:** 100 bytes / 3 bb / 3 incoming refs
- **Match values:** Mesh
- **Strings touched:** JoinMeshJob::CompleteCancelWithLeaveMesh
- **Callees:** FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_710018d570__710018d570.c)  [cfg](../decompiled/FUN_710018d570__710018d570.mmd)
- **Clone hash:** `b2c86a60b0af0a95`

```c

undefined8 FUN_710018d570(long param_1)

{
  int aiStack_30 [4];
  
  if (*(int *)(param_1 + 0xc0) - 2U < 3) {
    FUN_71000bce50(aiStack_30,(int *)(param_1 + 0xc4));
    *(code **)(param_1 + 0x30) = FUN_710018d5e0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::CompleteCancelWithLeaveMesh";
    return 0;
  }
  return 5;
}


```

## 39. `FUN_71000d5330`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000d5330`  (offset `0xd5330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000d5330(void)`
- **Size / BBs / Incoming:** 100 bytes / 1 bb / 1 incoming refs
- **Match values:** Mesh
- **Strings touched:** NexJoinMeshJob::CompleteProcess;NexJoinMeshJob::StartBandwidthCheck
- **Callees:** FUN_71001936e0
- **Files:** [decomp](../decompiled/FUN_71000d5330__71000d5330.c)  [cfg](../decompiled/FUN_71000d5330__71000d5330.mmd)
- **Clone hash:** `f91636cd2f884574`

```c

undefined8 FUN_71000d5330(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = FUN_71001936e0(DAT_71052adfc0);
  bVar3 = (bVar4 & 1) == 0;
  pcVar1 = "NexJoinMeshJob::StartBandwidthCheck";
  if (bVar3) {
    pcVar1 = "NexJoinMeshJob::CompleteProcess";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  pcVar2 = FUN_71000d53a0;
  if (bVar3) {
    pcVar2 = FUN_710018cf30;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 40. `FUN_71000f74b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f74b0`  (offset `0xf74b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f74b0(void)`
- **Size / BBs / Incoming:** 744 bytes / 25 bb / 4 incoming refs
- **Match values:** Mesh
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

## 41. `FUN_71001a71f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001a71f0`  (offset `0x1a71f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001a71f0(void)`
- **Size / BBs / Incoming:** 312 bytes / 8 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** ProcessUpdateMeshJob::StartRelayConnection;ProcessUpdateMeshJob::UpdateFailed
- **Callees:** FUN_71000bcf30;FUN_7100193110;FUN_7100193560;FUN_7100193580;FUN_710019a6e0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001a71f0__71001a71f0.c)  [cfg](../decompiled/FUN_71001a71f0__71001a71f0.mmd)
- **Clone hash:** `41e7fd1706a7ec99`

```c

undefined8 FUN_71001a71f0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar3 = FUN_7100193560(DAT_71052adfc0);
    bVar4 = FUN_7100193110(DAT_71052adfc0);
    if ((bVar4 | bVar3) < 0x20) {
      aiStack_50[0] = 0;
      uVar2 = *(undefined4 *)(param_1 + 0xf0);
      iVar1 = *(int *)(param_1 + 0xe8) + 1;
      lVar6 = FUN_7100193580(DAT_71052adfc0);
      bVar5 = FUN_710019a6e0(lVar6,(ulong)bVar4,uVar2,iVar1,aiStack_50,0);
      if (bVar5) {
        *(int *)(param_1 + 0xe8) = iVar1;
        *(code **)(param_1 + 0x30) = FUN_71001a7330;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "ProcessUpdateMeshJob::StartRelayConnection";
      }
      return 5;
    }
  }
  else {
    aiStack_50[0] = 0x6c0e;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c),aiStack_50);
  }
  *(code **)(param_1 + 0x30) = FUN_71001a65f0;
// ... (5 more lines)
```

## 42. `FUN_71000ff840`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000ff840`  (offset `0xff840`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000ff840(void)`
- **Size / BBs / Incoming:** 460 bytes / 16 bb / 2 incoming refs
- **Match values:** Mesh
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

## 43. `FUN_71000fd9e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fd9e0`  (offset `0xfd9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fd9e0(void)`
- **Size / BBs / Incoming:** 1008 bytes / 35 bb / 3 incoming refs
- **Match values:** Mesh
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

## 44. `FUN_7100104000`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100104000`  (offset `0x104000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100104000(void)`
- **Size / BBs / Incoming:** 376 bytes / 18 bb / 4 incoming refs
- **Match values:** Mesh
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

## 45. `FUN_7100141230`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100141230`  (offset `0x141230`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100141230(long * param_1)`
- **Size / BBs / Incoming:** 344 bytes / 15 bb / 9 incoming refs
- **Match values:** Mesh
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

## 46. `FUN_7100193b50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100193b50`  (offset `0x193b50`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_7100193b50(long * param_1, undefined4 * param_2, byte param_3)`
- **Size / BBs / Incoming:** 216 bytes / 9 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** DestroyMeshJob::SendDestroyMesh
- **Callers:** FUN_7100191a60;FUN_7100196f10
- **Callees:** FUN_71000b4160;FUN_71000bb680;FUN_7100191ed0
- **Files:** [decomp](../decompiled/FUN_7100193b50__7100193b50.c)  [cfg](../decompiled/FUN_7100193b50__7100193b50.mmd)
- **Clone hash:** `76c08766c660c72f`

```c

undefined4 FUN_7100193b50(long *param_1,undefined4 *param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (*(char *)((long)param_1 + 0x8d) == '\0') {
    if (param_2 != (undefined4 *)0x0) {
      param_1[0xb] = (long)param_2;
      FUN_71000b4160(param_2);
    }
    lVar5 = DAT_71052ac580;
    lVar1 = param_1[0xd];
    plVar2 = FUN_71000bb680();
    lVar4 = *plVar2;
    lVar5 = *(long *)(lVar5 + 0x30);
    *(byte *)((long)param_1 + 0x8e) = param_3 & 1;
    param_1[0xc] = lVar5 + lVar4 * (int)lVar1;
    *(undefined1 *)((long)param_1 + 0x8d) = 1;
    if ((param_3 & 1) == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = *(int *)(DAT_71052adfc0 + 0xb4);
    }
    FUN_7100191ed0(DAT_71052adfc0,iVar3);
    uVar6 = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_7100193c30;
    param_1[7] = 0;
    param_1[8] = (long)"DestroyMeshJob::SendDestroyMesh";
  }
  else {
    uVar6 = 0;
  }
// ... (3 more lines)
```

## 47. `FUN_71000fa9e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fa9e0`  (offset `0xfa9e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fa9e0(void)`
- **Size / BBs / Incoming:** 908 bytes / 32 bb / 2 incoming refs
- **Match values:** Mesh
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

## 48. `FUN_710013f3b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013f3b0`  (offset `0x13f3b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710013f3b0(void)`
- **Size / BBs / Incoming:** 832 bytes / 18 bb / 5 incoming refs
- **Match values:** Mesh
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

## 49. `FUN_7100193e40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100193e40`  (offset `0x193e40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100193e40(void)`
- **Size / BBs / Incoming:** 332 bytes / 35 bb / 2 incoming refs
- **Match values:** Mesh
- **Strings touched:** DestroyMeshJob::CleanupMesh
- **Files:** [decomp](../decompiled/FUN_7100193e40__7100193e40.c)  [cfg](../decompiled/FUN_7100193e40__7100193e40.mmd)
- **Clone hash:** `92b73e0cf1daa117`

```c

undefined8 FUN_7100193e40(long param_1)

{
  if (((((((((*(char *)(param_1 + 0x6c) != '\0') || (*(char *)(param_1 + 0x6d) != '\0')) ||
           (*(char *)(param_1 + 0x6e) != '\0')) ||
          (((*(char *)(param_1 + 0x6f) != '\0' || (*(char *)(param_1 + 0x70) != '\0')) ||
           ((*(char *)(param_1 + 0x71) != '\0' ||
            ((*(char *)(param_1 + 0x72) != '\0' || (*(char *)(param_1 + 0x73) != '\0')))))))) ||
         (*(char *)(param_1 + 0x74) != '\0')) ||
        ((((((*(char *)(param_1 + 0x75) != '\0' || (*(char *)(param_1 + 0x76) != '\0')) ||
            (*(char *)(param_1 + 0x77) != '\0')) ||
           ((*(char *)(param_1 + 0x78) != '\0' || (*(char *)(param_1 + 0x79) != '\0')))) ||
          (*(char *)(param_1 + 0x7a) != '\0')) ||
         (((*(char *)(param_1 + 0x7b) != '\0' || (*(char *)(param_1 + 0x7c) != '\0')) ||
          (((*(char *)(param_1 + 0x7d) != '\0' ||
            (((*(char *)(param_1 + 0x7e) != '\0' || (*(char *)(param_1 + 0x7f) != '\0')) ||
             (*(char *)(param_1 + 0x80) != '\0')))) ||
           (((*(char *)(param_1 + 0x81) != '\0' || (*(char *)(param_1 + 0x82) != '\0')) ||
            (*(char *)(param_1 + 0x83) != '\0')))))))))) ||
       (((*(char *)(param_1 + 0x84) != '\0' || (*(char *)(param_1 + 0x85) != '\0')) ||
        ((*(char *)(param_1 + 0x86) != '\0' ||
         (((*(char *)(param_1 + 0x87) != '\0' || (*(char *)(param_1 + 0x88) != '\0')) ||
          (*(char *)(param_1 + 0x89) != '\0')))))))) ||
      ((*(char *)(param_1 + 0x8a) != '\0' || (*(char *)(param_1 + 0x8b) != '\0')))) &&
     (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x60))) {
    return 5;
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(code **)(param_1 + 0x30) = FUN_7100193d30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DestroyMeshJob::CleanupMesh";
  return 0;
}


```

## 50. `FUN_710018d6e0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018d6e0`  (offset `0x18d6e0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018d6e0(void)`
- **Size / BBs / Incoming:** 88 bytes / 1 bb / 4 incoming refs
- **Match values:** Mesh
- **Strings touched:** JoinMeshJob::WaitLeaveMesh
- **Callees:** FUN_7100192af0
- **Files:** [decomp](../decompiled/FUN_710018d6e0__710018d6e0.c)  [cfg](../decompiled/FUN_710018d6e0__710018d6e0.mmd)
- **Clone hash:** `14ddac481150c547`

```c

undefined8 FUN_710018d6e0(long param_1)

{
  int aiStack_30 [4];
  
  FUN_7100192af0(aiStack_30,DAT_71052adfc0,(int *)(param_1 + 0xc0));
  *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitLeaveMesh";
  *(code **)(param_1 + 0x30) = FUN_710018d570;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

