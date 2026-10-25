# retry (funcs=21, hits=24)

Top 50 functions by hit count

## 1. `FUN_7101d97570`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101d97570`  (offset `0x1d97570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101d97570(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 6580 bytes / 412 bb / 3 incoming refs
- **Match values:** retry
- **Strings touched:** set_parts_btn_05;nam_goods_spirit_charge_jamming;nam_goods_help_spirit_charge_jamming;set_parts_btn_00;nam_goods_spirit_all_shuffle;nam_goods_help_spirit_all_shuffle;set_parts_btn_06;nam_goods_spirit_apply_flower;nam_goods_help_spirit_apply_flower;set_parts_btn_07;nam_goods_spirit_escort_weaken;nam_goods_help_spirit_escort_weaken;set_parts_btn_08;nam_goods_spirit_item_lock;nam_goods_help_spirit_item_lock;set_parts_btn_09;nam_goods_spirit_damage_50;nam_goods_help_spirit_damage_50;set_parts_btn_01;nam_goods_spirit_all_attacker;nam_goods_help_spirit_all_attacker;set_parts_btn_02;nam_goods_spirit_all_supporter;nam_goods_help_spirit_all_supporter;set_parts_btn_03;nam_goods_spirit_reloaded;nam_goods_help_spirit_reloaded;set_parts_btn_04;nam_goods_spirit_retry_ticket;nam_goods_help_spirit_retry_ticket;selector_01;selector_00;...
- **Callers:** FUN_71018ee4a0;FUN_71018f7620;FUN_7101d99da0
- **Callees:** FUN_7101d98f30;FUN_7101d99160;FUN_7101d99320;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103776910;FUN_710377a120;FUN_710392eb40;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101d97570__7101d97570.c)  [cfg](../decompiled/FUN_7101d97570__7101d97570.mmd)
- **Clone hash:** `964ad64eddf75a27`

```c

void FUN_7101d97570(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar6;
  char *pcVar7;
  byte ****ppppbVar8;
  byte ****ppppbVar9;
  char *pcVar10;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined2 *puVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  char cVar22;
  ushort uVar23;
  ulong uVar24;
  long *plVar25;
  uint uVar26;
  undefined8 local_180;
// ... (1208 more lines)
```

## 2. `FUN_71000fec40`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000fec40`  (offset `0xfec40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000fec40(void)`
- **Size / BBs / Incoming:** 1944 bytes / 77 bb / 7 incoming refs
- **Match values:** Retry
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

## 3. `FUN_71018ebba0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71018ebba0`  (offset `0x18ebba0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71018ebba0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3352 bytes / 162 bb / 1 incoming refs
- **Match values:** retry
- **Strings touched:** set_parts_use_item;set_txt_item;nam_goods_spirit_all_shuffle;nam_goods_spirit_all_attacker;nam_goods_spirit_all_supporter;nam_goods_spirit_reloaded;nam_goods_spirit_retry_ticket;set_rep_item
- **Callees:** FUN_710177a5c0;FUN_71018ed9a0;FUN_7101d94b00;FUN_7101d98f30;FUN_7101d9a010;FUN_71024076d0;FUN_71024a6430;FUN_7103240590;FUN_71032673c0;FUN_7103267960;FUN_7103267ce0;FUN_7103313f20;FUN_7103776640;FUN_7103776910;FUN_7103778300;FUN_7103778b80;...
- **Files:** [decomp](../decompiled/FUN_71018ebba0__71018ebba0.c)  [cfg](../decompiled/FUN_71018ebba0__71018ebba0.mmd)
- **Clone hash:** `63a5f56056b49ea7`

```c

void FUN_71018ebba0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  long *********ppppppppplVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  short *psVar18;
  uint uVar19;
  ulong uVar20;
  ushort uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
// ... (516 more lines)
```

## 4. `FUN_7100121000`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100121000`  (offset `0x121000`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100121000(void)`
- **Size / BBs / Incoming:** 460 bytes / 12 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake;LanMatchRandomMatchmakeJob::RandomMatchmake;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_710011bb20;FUN_710011beb0;FUN_710011bec0;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100121000__7100121000.c)  [cfg](../decompiled/FUN_7100121000__7100121000.mmd)
- **Clone hash:** `9b892226a80e3997`

```c

undefined8 FUN_7100121000(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
    pcVar8 = FUN_71001429b0;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x6c) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x7d) == '\0' && (*(char *)(param_1 + 0x7e) == '\0')) &&
         (*(char *)(param_1 + 0x80) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x82) + 1, *(byte *)(param_1 + 0x82) = bVar2,
       lVar3 = DAT_71052adb38, 2 < bVar2)) {
      FUN_710011bb20(*(long *)(param_1 + 0x178));
// ... (34 more lines)
```

## 5. `FUN_7100100820`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100100820`  (offset `0x100820`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100100820(void)`
- **Size / BBs / Incoming:** 2540 bytes / 89 bb / 2 incoming refs
- **Match values:** Retry
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

## 6. `FUN_71001097d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001097d0`  (offset `0x1097d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001097d0(void)`
- **Size / BBs / Incoming:** 420 bytes / 15 bb / 2 incoming refs
- **Match values:** Retry
- **Strings touched:** NexMatchRandomMatchmakeJob::StartNatSession;NexMatchRandomMatchmakeJob::WaitForRetryJoinMesh;NexMatchRandomMatchmakeJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_7100150b70
- **Files:** [decomp](../decompiled/FUN_71001097d0__71001097d0.c)  [cfg](../decompiled/FUN_71001097d0__71001097d0.mmd)
- **Clone hash:** `785f3e6f3a8e6025`

```c

undefined8 FUN_71001097d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
  cVar3 = DAT_71052ac6d9;
  if (((uVar4 & 1) != 0) && (cVar3 = '\x01', DAT_71052ac6d9 != -1)) {
    cVar3 = DAT_71052ac6d9 + '\x01';
  }
  DAT_71052ac6d9 = cVar3;
  puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
  FUN_7100150b70((long *)*puVar1);
  lVar9 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x68) != '\0') {
LAB_7100109840:
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100108de0;
    pcVar7 = "NexMatchRandomMatchmakeJob::StartNatSession";
    goto LAB_7100109940;
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    if (((*(char *)(param_1 + 0x7e) != '\0') || (*(char *)(param_1 + 0x81) != '\0')) ||
       (*(char *)(param_1 + 0x80) != '\0')) {
      plVar6 = FUN_71000bb680();
      *(long *)(param_1 + 0x158) = *(long *)(lVar9 + 0x30) + *plVar6 * 30000;
      lVar9 = DAT_71052ac580;
      plVar6 = FUN_71000bb680();
      lVar9 = *(long *)(lVar9 + 0x30) + *plVar6 * 10000;
      *(undefined1 *)(param_1 + 0x184) = 1;
// ... (33 more lines)
```

## 7. `FUN_710168c4d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710168c4d0`  (offset `0x168c4d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710168c4d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1572 bytes / 55 bb / 1 incoming refs
- **Match values:** retry
- **Strings touched:** hac_p_aaaba_session_end;Ver. %d.%d.%d;app_version;gathering_id;gamemode;min_players;max_players;rating;country;scorebased_key;scorebased_value;cluster_id;rate_rank;is_vip;is_parallel;matching_retry;match_result;wait_interval
- **Callees:** FUN_71000001c0;FUN_710167fac0;FUN_710172b370;FUN_710172bb90;FUN_7101747490;FUN_7101764000;FUN_710375aa90;FUN_710392eb40;<EXTERNAL>::sprintf;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::os::GetSystemTick;<EXTERNAL>::nn::os::ConvertToTimeSpan;<EXTERNAL>::abort;<EXTERNAL>::nn::prepo::PlayReport::Add
- **Files:** [decomp](../decompiled/FUN_710168c4d0__710168c4d0.c)  [cfg](../decompiled/FUN_710168c4d0__710168c4d0.mmd)
- **Clone hash:** `4a9e8d132a490049`

```c

void FUN_710168c4d0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  ulong local_68;
  ulong local_60;
  ulong *local_48;
  
  iVar6 = (int)param_3;
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      ppppbVar10 = param_4;
      if ((*(int *)(param_1 + 0x269c0) == 0xc) && (*(byte *)(param_4 + 1) < 3)) {
        lVar13 = *DAT_710593b580;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x98);
        iVar3 = *(int *)(lVar13 + 0x7300);
        uVar2 = *(uint *)(lVar11 + 0xdcc);
        if (iVar3 == -1) {
          plVar7 = (long *)(lVar13 + 0x28);
        }
        else {
          if (*(ulong *)(lVar13 + 0x72c0) <= (ulong)(long)iVar3) goto LAB_710168caf0;
          plVar7 = (long *)(lVar13 + (long)iVar3 * 0xcc0 + 0xce8);
        }
        lVar11 = lVar11 + 0x540;
// ... (148 more lines)
```

## 8. `FUN_71000f4300`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f4300`  (offset `0xf4300`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f4300(void)`
- **Size / BBs / Incoming:** 468 bytes / 14 bb / 2 incoming refs
- **Match values:** Retry
- **Strings touched:** NexMatchJoinSessionJob::WaitForRetryJoinMesh;NODE_PRE_REFRACT_BLEND;NexMatchJoinSessionJob::GetStationLocation;NexMatchJoinSessionJob::LeaveMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_7100150b70;FUN_710015fd60;FUN_710015fea0;FUN_710015ff20
- **Files:** [decomp](../decompiled/FUN_71000f4300__71000f4300.c)  [cfg](../decompiled/FUN_71000f4300__71000f4300.mmd)
- **Clone hash:** `a26e48a4038ecebb`

```c

undefined8 FUN_71000f4300(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 auStack_b0 [16];
  
  uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
  lVar7 = DAT_71052adb38;
  cVar3 = DAT_71052ac6d9;
  if (((uVar4 & 1) != 0) && (cVar3 = '\x01', DAT_71052ac6d9 != -1)) {
    cVar3 = DAT_71052ac6d9 + '\x01';
  }
  DAT_71052ac6d9 = cVar3;
  puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
  *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
  FUN_7100150b70((long *)*puVar1);
  (**(code **)(**(long **)(lVar7 + 8) + 0x28))();
  lVar7 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x11a) == '\0') {
    if (((*(char *)(param_1 + 0x11b) == '\0') && (*(char *)(param_1 + 0x11e) == '\0')) &&
       (*(char *)(param_1 + 0x11d) == '\0')) {
      if (*(char *)(param_1 + 0x119) == '\0') {
        *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
        *(code **)(param_1 + 0x30) = FUN_71000f2880;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 5;
      }
      FUN_710015fd60(auStack_b0);
      FUN_710015fea0(param_1 + 0x90,(long)auStack_b0);
      *(code **)(param_1 + 0x30) = FUN_71000f3580;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::GetStationLocation";
      FUN_710015ff20(auStack_b0);
// ... (31 more lines)
```

## 9. `FUN_7100109430`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100109430`  (offset `0x109430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100109430(void)`
- **Size / BBs / Incoming:** 916 bytes / 26 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** NexMatchRandomMatchmakeJob::LeaveMatchmakeSession;NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh
- **Callees:** FUN_71000bcf30;FUN_7100150b70;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100109430__7100109430.c)  [cfg](../decompiled/FUN_7100109430__7100109430.mmd)
- **Clone hash:** `2733c46c2080bdf6`

```c

undefined8 FUN_7100109430(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  char cVar7;
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
  if (*(char *)(param_1 + 0x7f) == '\0') {
    if (*(char *)(param_1 + 0x68) == '\0') {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
      *(byte *)(param_1 + 0x82) = bVar2;
      if (1 < bVar2) goto LAB_710010945c;
      if (*(char *)(param_1 + 0x80) == '\0') {
        if (*(char *)(param_1 + 0x7d) == '\0') {
          if (*(char *)(param_1 + 0x7e) == '\0') {
            if (*(char *)(param_1 + 0x81) == '\0') {
              if (*(char *)(param_1 + 0x7c) == '\0') {
                aiStack_48[0] = 0x643f;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
                aiStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
                if (*param_2 != aiStack_48[0]) {
                  aiStack_58[0] = 0x6445;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
                  aiStack_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=
// ... (125 more lines)
```

## 10. `FUN_7100120b00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120b00`  (offset `0x120b00`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120b00(void)`
- **Size / BBs / Incoming:** 624 bytes / 12 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::LeaveMatchmakeSession;LanMatchRandomMatchmakeJob::WaitForRetryRandomMatchmake;LanMatchRandomMatchmakeJob::RandomMatchmake
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_710011bb20;FUN_710011beb0;FUN_710011bec0;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120b00__7100120b00.c)  [cfg](../decompiled/FUN_7100120b00__7100120b00.mmd)
- **Clone hash:** `49f2d19b7f2f65c7`

```c

undefined8 FUN_7100120b00(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  ErrorResultVariant *this;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    pcVar9 = FUN_71001429b0;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x6c);
    FUN_71000bcf30(piVar3,param_2);
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
    if (*(int *)(param_1 + 0x6c) != aiStack_50[0]) {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
// ... (57 more lines)
```

## 11. `FUN_71001001a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001001a0`  (offset `0x1001a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001001a0(void)`
- **Size / BBs / Incoming:** 1176 bytes / 49 bb / 2 incoming refs
- **Match values:** Retry
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

## 12. `FUN_71015032d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71015032d0`  (offset `0x15032d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71015032d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 256 bytes / 10 bb / 2 incoming refs
- **Match values:** Retry
- **Strings touched:** InGameRetryFiberedProcess
- **Callers:** FUN_71014ac350;FUN_71014d4060
- **Callees:** FUN_7101503480;FUN_7101503490;phx::Fiber::~Fiber;phx::Fiber::setup;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71015032d0__71015032d0.c)  [cfg](../decompiled/FUN_71015032d0__71015032d0.mmd)
- **Clone hash:** `6c328dbbf99118cf`

```c

void FUN_71015032d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  Fiber *this;
  long ****pppplVar2;
  code *pcVar3;
  Fiber *this_00;
  long ***local_60;
  long lStack_58;
  long *local_40;
  undefined4 local_24;
  
  pppplVar2 = &local_60;
  *(undefined1 *)(DAT_71052c50f0 + 0x10) = 1;
  this = (Fiber *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (this == (Fiber *)0x0) {
    local_24 = 0;
    local_60 = (long ***)&DAT_00000008;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
    this = (Fiber *)FUN_710392e290(0x10,8,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined8 *)this = 0;
  puVar1 = (undefined8 *)(param_1 + 0x1df98);
  this_00 = (Fiber *)*puVar1;
  *puVar1 = this;
  if (this_00 != (Fiber *)0x0) {
    phx::Fiber::~Fiber(this_00);
    FUN_710392eb40((ulong)this_00);
    this = (Fiber *)*puVar1;
  }
  local_60 = (long ***)&PTR_FUN_710506c6a0;
  lStack_58 = param_1;
  local_40 = (long *)&local_60;
  phx::Fiber::setup(this,(long *)&local_60,(Fiber **)"InGameRetryFiberedProcess",(Fiber *)0x10000,
                    param_5,param_6,param_7,param_8);
  if (&local_60 == (long ****)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
// ... (11 more lines)
```

## 13. `FUN_710011d1c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d1c0`  (offset `0x11d1c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011d1c0(long param_1, int * param_2)`
- **Size / BBs / Incoming:** 548 bytes / 10 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::MeshCleanup;LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d1c0__710011d1c0.c)  [cfg](../decompiled/FUN_710011d1c0__710011d1c0.mmd)
- **Clone hash:** `9ee4f8b2e06d4c6d`

```c

undefined8 FUN_710011d1c0(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  char *pcVar10;
  ErrorResultVariant *this;
  int local_48 [4];
  undefined4 local_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar5 == 5) {
    local_48[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
    FUN_71000bcf30((int *)(param_1 + 0x120),local_48);
    pcVar9 = FUN_710013e970;
    uVar6 = 0;
    pcVar10 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    piVar3 = (int *)(param_1 + 0x120);
    FUN_71000bcf30(piVar3,param_2);
    local_48[0] = 0x6838;
    this = (ErrorResultVariant *)((ulong)local_48 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
    if (*(int *)(param_1 + 0x120) != local_48[0]) {
      local_48[0] = 0x6c3d;
// ... (49 more lines)
```

## 14. `FUN_7100170900`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170900`  (offset `0x170900`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170900(void)`
- **Size / BBs / Incoming:** 684 bytes / 22 bb / 1 incoming refs
- **Match values:** Retry
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

## 15. `FUN_71014d4210`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014d4210`  (offset `0x14d4210`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014d4210(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 248 bytes / 10 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** InGameRetryFiberedProcess
- **Callees:** FUN_7101508b80;FUN_7101508b90;phx::Fiber::~Fiber;phx::Fiber::setup;FUN_710392e290;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71014d4210__71014d4210.c)  [cfg](../decompiled/FUN_71014d4210__71014d4210.mmd)
- **Clone hash:** `2a0f88964cb9d8a4`

```c

void FUN_71014d4210(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  Fiber *this;
  long ****pppplVar2;
  code *pcVar3;
  Fiber *this_00;
  long lVar4;
  long ***local_60;
  long lStack_58;
  long *local_40;
  undefined4 local_24;
  
  pppplVar2 = &local_60;
  lVar4 = *DAT_71052c3760;
  this = (Fiber *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (this == (Fiber *)0x0) {
    local_24 = 0;
    local_60 = (long ***)&DAT_00000008;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
    this = (Fiber *)FUN_710392e290(0x10,8,pppplVar2,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined8 *)this = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x1df98);
  this_00 = (Fiber *)*puVar1;
  *puVar1 = this;
  if (this_00 != (Fiber *)0x0) {
    phx::Fiber::~Fiber(this_00);
    FUN_710392eb40((ulong)this_00);
    this = (Fiber *)*puVar1;
  }
  local_60 = (long ***)&PTR_FUN_710506ca00;
  lStack_58 = lVar4;
  local_40 = (long *)&local_60;
  phx::Fiber::setup(this,(long *)&local_60,(Fiber **)"InGameRetryFiberedProcess",(Fiber *)0x10000,
                    param_5,param_6,param_7,param_8);
  if (&local_60 == (long ****)local_40) {
// ... (12 more lines)
```

## 16. `FUN_71014aa930`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014aa930`  (offset `0x14aa930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 70 bb / 2 incoming refs
- **Match values:** Retry
- **Strings touched:** StateLoadAsyncForHomeRunContest;StateSetupBatterOrder;StateShowPlayerInformation;StateShowBatterOrder;NODE_PRE_REFRACT_BLEND;StateShowRemainingTimes;StateStartPauseUntilReady;StateEndPauseUntilReady;chara/chara_4/chara_4_;StateResetBatterFighter;StateFadeOut;StateShowReady;StateMeleeForHomeRunContest;StatePause;StateOperatorHUDDone;StateRetryPreparations;StateEndProduction;StateResult;StateResultNoContest;StateApplyParameters
- **Callers:** FUN_7101850830
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_71014aa930__71014aa930.c)  [cfg](../decompiled/FUN_71014aa930__71014aa930.mmd)
- **Clone hash:** `b011ce5fe471cc6f`

```c

void FUN_71014aa930(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
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
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_7101341d50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForHomeRunContest",(long ****)FUN_71014ab2d0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateSetupBatterOrder",(long ****)FUN_71014ab360,param_4,
// ... (423 more lines)
```

## 17. `FUN_710011d5a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011d5a0`  (offset `0x11d5a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011d5a0(void)`
- **Size / BBs / Incoming:** 392 bytes / 10 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure;LanMatchJoinSessionJob::WaitForRetryJoinMatchmakeSession;LanMatchJoinSessionJob::MeshCleanup
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_7100146ba0;FUN_7100150b70;FUN_7100193580;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011d5a0__710011d5a0.c)  [cfg](../decompiled/FUN_710011d5a0__710011d5a0.mmd)
- **Clone hash:** `14e5bc55996e55b2`

```c

undefined8 FUN_710011d5a0(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  char *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar4 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    pcVar8 = FUN_710013e970;
    uVar5 = 0;
    pcVar9 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    aiStack_40[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    if (((*(int *)(param_1 + 0x120) == aiStack_40[0]) ||
        (((*(char *)(param_1 + 0x11a) == '\0' && (*(char *)(param_1 + 0x11b) == '\0')) &&
         (*(char *)(param_1 + 0x11d) == '\0')))) ||
       (bVar2 = *(char *)(param_1 + 0x11f) + 1, *(byte *)(param_1 + 0x11f) = bVar2,
       lVar3 = DAT_71052adb38, 1 < bVar2)) {
      pcVar8 = FUN_710013f360;
// ... (24 more lines)
```

## 18. `FUN_71000194f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000194f0`  (offset `0x194f0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000194f0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 268 bytes / 13 bb / 2 incoming refs
- **Match values:** retry
- **Strings touched:** Connection died, retrying a fresh connect

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100004200;FUN_7100015de0;FUN_71000179b0;FUN_71000272c0
- **Files:** [decomp](../decompiled/FUN_71000194f0__71000194f0.c)  [cfg](../decompiled/FUN_71000194f0__71000194f0.mmd)
- **Clone hash:** `9cd6f41936a3a909`

```c

ulong FUN_71000194f0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if (((((*(char *)(lVar3 + 0x6c1) == '\0') || ((*(uint *)(param_1[0x10b] + 0x80) & 0x40003) != 0))
       && (*(long *)(lVar3 + 0xe0) + *(long *)(lVar3 + 0xf0) == 0)) &&
      (*(char *)((long)param_1 + 0x812) != '\0')) &&
     (((*(char *)(lVar3 + 0x6c0) == '\0' || ((*(byte *)(param_1[0x10b] + 0x80) & 3) != 0)) &&
      (*(int *)(lVar3 + 0x8fc) != 0xb)))) {
    FUN_7100015de0(*param_1,(byte *)"Connection died, retrying a fresh connect\n",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    lVar1 = FUN_71000272c0();
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    FUN_7100004200((long)param_1,1);
    *(undefined1 *)(param_1 + 0x104) = 1;
    if (((*(byte *)(param_1[0x10b] + 0x80) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 600) + 0x30) != 0)) {
      uVar2 = FUN_71000179b0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}


```

## 19. `FUN_71014d2130`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014d2130`  (offset `0x14d2130`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014d2130(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3256 bytes / 92 bb / 2 incoming refs
- **Match values:** Retry
- **Strings touched:** StateWaitForSyncWhenBeginning;StateHowToPlayDescription;StateAppearanceProduction;StateEndProduction;StateSuddenDeathPreparations;StateSuddenDeathStartingProduction;StateSuddenDeath;StatePause;StateOperatorHUDDone;StateDisconnectSyncCommunication;StateResetTraining;StateRetryPreparations;StateContinuePreparations;StateSkipMelee;StateResult;StateApplyParameters;StateWaitForSyncWhenEnding
- **Callers:** FUN_7101850c80
- **Callees:** FUN_71000001c0;FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_7101764000;FUN_710392eb40;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71014d2130__71014d2130.c)  [cfg](../decompiled/FUN_71014d2130__71014d2130.mmd)
- **Clone hash:** `d28b3455d1051185`

```c

void FUN_71014d2130(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 uVar2;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  code *pcVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong *puVar7;
// ... (548 more lines)
```

## 20. `FUN_71013c1690`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71013c1690`  (offset `0x13c1690`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71013c1690(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 15256 bytes / 840 bb / 1 incoming refs
- **Match values:** retry
- **Strings touched:** selector_0;set_parts_%02d;btn_ptn;set_parts_title;p_color;set_txt_pause_any;set_parts_00;set_parts_01;set_parts_02;set_parts_03;set_parts_04;mel_pause_restart;mel_pause_end;mel_pause_end_btn;mel_pause_sp_move_list;mel_pause_con_connect;mnu_stgcreate_edit_fighter_select;mel_pause_restart_camera;mel_pause_kumite_retry;mnu_stgcreate_edit_stage_reset;mnu_stgcreate_edit_stage_reset_guide;mnu_stgcreate_edit_back;mnu_stgcreate_edit_back_guide
- **Callers:** FUN_71013c5ba0
- **Callees:** FUN_71000001c0;FUN_7101414b10;FUN_7101764000;FUN_7101b8dde0;FUN_7101b8dfe0;FUN_710323f760;FUN_71032cad20;FUN_71032caea0;FUN_71032cbf30;FUN_710337df20;FUN_7103770b30;FUN_71037717d0;FUN_7103771930;FUN_7103773200;FUN_71037760f0;FUN_7103776640;...
- **Files:** [decomp](../decompiled/FUN_71013c1690__71013c1690.c)  [cfg](../decompiled/FUN_71013c1690__71013c1690.mmd)
- **Clone hash:** `7140d83484656d8b`

```c

void FUN_71013c1690(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar14;
  char *pcVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  long ********pppppppplVar20;
  long lVar21;
  int *piVar22;
  byte bVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  void *pvVar29;
  undefined4 *puVar30;
  long lVar31;
  long *********ppppppppplVar32;
// ... (3055 more lines)
```

## 21. `FUN_71000f3f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000f3f40`  (offset `0xf3f40`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000f3f40(void)`
- **Size / BBs / Incoming:** 956 bytes / 28 bb / 1 incoming refs
- **Match values:** Retry
- **Strings touched:** NexMatchJoinSessionJob::MeshCleanup;NexMatchJoinSessionJob::CleanupForRetryJoinMesh
- **Callees:** FUN_71000bcf30;FUN_7100150b70;FUN_7100151fe0;FUN_7100152020;FUN_7100192f60;FUN_71001936e0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000f3f40__71000f3f40.c)  [cfg](../decompiled/FUN_71000f3f40__71000f3f40.mmd)
- **Clone hash:** `1e6cefc99ab52a2e`

```c

undefined8 FUN_71000f3f40(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_71000bcf30((int *)(param_1 + 0x120),param_2);
  bVar2 = FUN_71001936e0(DAT_71052adfc0);
  if ((bVar2 & 1) != 0) {
    lVar4 = FUN_7100192f60(DAT_71052adfc0);
    uVar3 = FUN_7100151fe0(lVar4);
    if ((uVar3 & 1) != 0) {
      FUN_7100152020(lVar4);
    }
  }
  bVar2 = *(char *)(param_1 + 0x11f) + 1;
  *(byte *)(param_1 + 0x11f) = bVar2;
  if ((1 < bVar2) || (*(char *)(param_1 + 0x11c) != '\0')) goto LAB_71000f3fb4;
  if (*(char *)(param_1 + 0x11d) == '\0') {
    if (*(char *)(param_1 + 0x11a) == '\0') {
      if (*(char *)(param_1 + 0x11b) == '\0') {
        if (*(char *)(param_1 + 0x11e) == '\0') {
          if (*(char *)(param_1 + 0x119) == '\0') {
            aiStack_48[0] = 0x643f;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
            aiStack_58[0] = 0;
// ... (128 more lines)
```

