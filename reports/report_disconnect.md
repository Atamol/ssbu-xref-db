# disconnect (funcs=31, hits=55)

Top 50 functions by hit count

## 1. `FUN_7101a2b570`  (hits=6)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a2b570`  (offset `0x1a2b570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a2b570(undefined * * param_1, undefined8 param_2, undefined * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 22080 bytes / 1202 bb / 1 incoming refs
- **Match values:** disconnect
- **Strings touched:** disconnect_off;indicator_%d;disconnect_on;mel_chara_select_lv_n;cp_level_%d;hand_catch;set_lct_controller_entry;btn_anim;set_txt_btn;set_parts_lct;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;controller_max;controller_fp;chara/chara_4/chara_4_;ready_in;ready_out
- **Callers:** FUN_7101a31860
- **Callees:** FUN_71000001c0;FUN_71003a4ca0;FUN_710137bc30;FUN_71016ea290;FUN_71016ea960;FUN_71016f6340;FUN_710175dfc0;FUN_7101764000;FUN_71019eb330;FUN_71019f08a0;FUN_71019f1410;FUN_7101a000c0;FUN_7101a029b0;FUN_7101a04c80;FUN_7101a06920;FUN_7101a06ef0;...
- **Files:** [decomp](../decompiled/FUN_7101a2b570__7101a2b570.c)  [cfg](../decompiled/FUN_7101a2b570__7101a2b570.mmd)
- **Clone hash:** `9f20780a0c7432be`

```c

/* WARNING: Removing unreachable block (ram,0x007101a2fb0c) */
/* WARNING: Removing unreachable block (ram,0x007101a2d6d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a2b570(undefined **param_1,undefined8 param_2,undefined **param_3,
                   long ************param_4,long ****param_5,ulong param_6,undefined8 param_7,
                   undefined8 param_8)

{
  undefined **ppuVar1;
  float *pfVar2;
  byte bVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  long ***********ppppppppppplVar18;
  ulong uVar19;
  ulong uVar20;
  void *__dest;
  undefined1 *puVar21;
  long *********ppppppppplVar22;
  long **********pppppppppplVar23;
  undefined **ppuVar24;
  long *plVar25;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
// ... (4049 more lines)
```

## 2. `FUN_7100188180`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100188180`  (offset `0x188180`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100188180(void)`
- **Size / BBs / Incoming:** 192 bytes / 7 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** DisconnectStationJob::WaitForDisconnection;DisconnectStationJob::DisconnectionSucceeded
- **Callees:** FUN_71000bb680;FUN_71000beb20;FUN_710019ee10;FUN_710019eea0
- **Files:** [decomp](../decompiled/FUN_7100188180__7100188180.c)  [cfg](../decompiled/FUN_7100188180__7100188180.mmd)
- **Clone hash:** `f8e80722a933aca5`

```c

undefined8 FUN_7100188180(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  code *pcVar7;
  long lVar8;
  
  lVar5 = *(long *)(param_1 + 0x68);
  if (*(byte *)(lVar5 + 0x38) < 0x20) {
    FUN_710019ee10(*(long **)(lVar5 + 0x98),(uint)*(byte *)(lVar5 + 0x38),0);
  }
  else {
    bVar2 = FUN_71000beb20(lVar5 + 0x10);
    if (!bVar2) {
      pcVar7 = FUN_71001882c0;
      uVar4 = 0;
      pcVar6 = "DisconnectStationJob::DisconnectionSucceeded";
      goto LAB_7100188228;
    }
    FUN_710019eea0(*(long **)(*(long *)(param_1 + 0x68) + 0x98),*(long *)(param_1 + 0x68) + 0x10);
  }
  lVar5 = DAT_71052ac580;
  iVar1 = *(int *)(param_1 + 0x78);
  plVar3 = FUN_71000bb680();
  lVar5 = *(long *)(lVar5 + 0x30);
  lVar8 = *plVar3;
  uVar4 = 5;
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(long *)(param_1 + 0x70) = lVar5 + lVar8 * iVar1;
  pcVar7 = FUN_71001883b0;
  pcVar6 = "DisconnectStationJob::WaitForDisconnection";
LAB_7100188228:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
// ... (4 more lines)
```

## 3. `FUN_7100187ff0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100187ff0`  (offset `0x187ff0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100187ff0(void)`
- **Size / BBs / Incoming:** 396 bytes / 12 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** DisconnectStationJob::SendDisconnectionRequest;DisconnectStationJob::CutRouteOfRelayConnection
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100161fa0;FUN_7100193a30;FUN_71001aca60;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100187ff0__7100187ff0.c)  [cfg](../decompiled/FUN_7100187ff0__7100187ff0.mmd)
- **Clone hash:** `ec34c86a39fd8a56`

```c

void FUN_7100187ff0(int *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong auStack_50 [2];
  undefined4 auStack_38 [2];
  
  if (param_3 == 0) {
    uVar4 = 0x10c07;
  }
  else {
    if (*(int *)(param_3 + 0x48) == 5) {
      param_2[0xd] = param_3;
      *(undefined1 *)((long)param_2 + 0x7c) = 0;
      auStack_50[0] = 0;
      FUN_71000bb5d0(auStack_50);
      lVar2 = param_2[0xc];
      plVar1 = FUN_71000bb680();
      param_2[0xb] = auStack_50[0] + *plVar1 * (long)(int)lVar2;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[6] = (long)FUN_7100188180;
      param_2[7] = 0;
      param_2[8] = (long)"DisconnectStationJob::SendDisconnectionRequest";
      lVar2 = FUN_7100193a30(DAT_71052adfc0);
      if (lVar2 != 0) {
        lVar2 = FUN_7100161fa0(DAT_71052add68);
        if (*(long *)(lVar2 + 0x98) != 0) {
          lVar2 = FUN_7100193a30(DAT_71052adfc0);
          lVar3 = FUN_7100161fa0(DAT_71052add68);
          FUN_71001aca60((int *)auStack_50,lVar2,(uint)*(byte *)(*(long *)(lVar3 + 0x98) + 0x38),
                         (uint)*(byte *)(param_2[0xd] + 0x38),(undefined1 *)auStack_38);
          if (((int)auStack_50[0] == 0) && (auStack_38[0]._0_1_ != *(Result *)(param_2[0xd] + 0x38))
             ) {
            param_2[6] = (long)FUN_7100188240;
            param_2[7] = 0;
            param_2[8] = (long)"DisconnectStationJob::CutRouteOfRelayConnection";
// ... (18 more lines)
```

## 4. `FUN_7100184270`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184270`  (offset `0x184270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184270(void)`
- **Size / BBs / Incoming:** 272 bytes / 10 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LocalDisconnectNetworkJob::WaitForCancel;LocalDisconnectNetworkJob::WaitDisconnectNetwork;NODE_PRE_REFRACT_BLEND
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000b4820;FUN_71000bce50;FUN_71000bcf30;FUN_7100172e00;FUN_7100172eb0
- **Files:** [decomp](../decompiled/FUN_7100184270__7100184270.c)  [cfg](../decompiled/FUN_7100184270__7100184270.mmd)
- **Clone hash:** `c3588256c0bc6df7`

```c

undefined8 FUN_7100184270(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172e00(aiStack_30,*(long **)(*(long *)(param_1 + 0x68) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    FUN_7100172eb0(aiStack_40,*(long **)(*(long *)(param_1 + 0x68) + 0x400),
                   *(undefined4 **)(param_1 + 0x60));
    FUN_71000bcf30(aiStack_30,aiStack_40);
    if (aiStack_30[0] != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_50,(int *)(*(long *)(param_1 + 0x60) + 4));
      FUN_71000b41f0(puVar1,aiStack_50);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    FUN_71000b4820(*(long *)(*(long *)(param_1 + 0x68) + 0x400),1);
    *(code **)(param_1 + 0x30) = FUN_7100184460;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitDisconnectNetwork";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    *(code **)(param_1 + 0x30) = FUN_7100184410;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
// ... (2 more lines)
```

## 5. `FUN_7100175970`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175970`  (offset `0x175970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100175970(int * param_1, long param_2, undefined4 * param_3, int param_4)`
- **Size / BBs / Incoming:** 176 bytes / 6 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LocalForceDisconnectNetworkJob::WaitDisconnected;LocalForceDisconnectNetworkJob::WaitHostMigrationEnd
- **Callers:** FUN_71001804e0
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100175970__7100175970.c)  [cfg](../decompiled/FUN_7100175970__7100175970.mmd)
- **Clone hash:** `829babfcc8c2f00e`

```c

void FUN_7100175970(int *param_1,long param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  code *pcVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  *(undefined4 **)(param_2 + 0x58) = param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
  if (param_4 == 0) {
    pcVar2 = FUN_7100175a20;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitHostMigrationEnd";
  }
  else {
    if (param_4 != 1) goto LAB_71001759dc;
    pcVar2 = FUN_7100175b00;
    pcVar1 = "LocalForceDisconnectNetworkJob::WaitDisconnected";
  }
  *(code **)(param_2 + 0x30) = pcVar2;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = pcVar1;
LAB_71001759dc:
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}


```

## 6. `FUN_71001883b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001883b0`  (offset `0x1883b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001883b0(void)`
- **Size / BBs / Incoming:** 272 bytes / 13 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** DisconnectStationJob::DisconnectionSucceeded
- **Callees:** FUN_71000bb680;FUN_71000beb20;FUN_710019ee10;FUN_710019eea0
- **Files:** [decomp](../decompiled/FUN_71001883b0__71001883b0.c)  [cfg](../decompiled/FUN_71001883b0__71001883b0.mmd)
- **Clone hash:** `b764359a01a2c0db`

```c

undefined8 FUN_71001883b0(long param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar4 = *(ulong *)(DAT_71052ac580 + 0x30);
    if (uVar4 < *(ulong *)(param_1 + 0x58)) {
      if (*(byte *)(*(long *)(param_1 + 0x68) + 0x38) < 0x20) {
LAB_710018840c:
        if (uVar4 < *(ulong *)(param_1 + 0x70)) {
          return 5;
        }
        lVar5 = *(long *)(param_1 + 0x68);
        if (*(byte *)(lVar5 + 0x38) < 0x20) {
          FUN_710019ee10(*(long **)(lVar5 + 0x98),(uint)*(byte *)(lVar5 + 0x38),0);
        }
        else {
          FUN_710019eea0(*(long **)(lVar5 + 0x98),lVar5 + 0x10);
        }
        lVar5 = DAT_71052ac580;
        iVar1 = *(int *)(param_1 + 0x78);
        plVar3 = FUN_71000bb680();
        *(long *)(param_1 + 0x70) = *(long *)(lVar5 + 0x30) + *plVar3 * (long)iVar1;
        return 5;
      }
      bVar2 = FUN_71000beb20(*(long *)(param_1 + 0x68) + 0x10);
      if (bVar2) {
        uVar4 = *(ulong *)(DAT_71052ac580 + 0x30);
        goto LAB_710018840c;
      }
    }
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x48) = 6;
// ... (6 more lines)
```

## 7. `FUN_71001841c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001841c0`  (offset `0x1841c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001841c0(int * param_1, long param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 164 bytes / 4 bb / 1 incoming refs
- **Match values:** Disconnect
- **Strings touched:** select_item;LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork
- **Callers:** FUN_71001804e0
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001841c0__71001841c0.c)  [cfg](../decompiled/FUN_71001841c0__71001841c0.mmd)
- **Clone hash:** `ddfc398289f8014f`

```c

void FUN_71001841c0(int *param_1,long param_2,undefined4 *param_3)

{
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(*(long *)(param_2 + 0x68) + 0x474) == 2) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDisconnectNetworkJob::TryPrepareDisconnectNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100184270;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}


```

## 8. `FUN_7100188240`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100188240`  (offset `0x188240`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100188240(void)`
- **Size / BBs / Incoming:** 116 bytes / 3 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** DisconnectStationJob::DisconnectionSucceeded
- **Callees:** FUN_710019ee10
- **Files:** [decomp](../decompiled/FUN_7100188240__7100188240.c)  [cfg](../decompiled/FUN_7100188240__7100188240.mmd)
- **Clone hash:** `b5242d1a74cb5bfe`

```c

undefined8 FUN_7100188240(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (*(byte *)(lVar1 + 0x38) < 0x20) {
    FUN_710019ee10(*(long **)(lVar1 + 0x98),(uint)*(byte *)(lVar1 + 0x38),1);
    FUN_710019ee10(*(long **)(*(long *)(param_1 + 0x68) + 0x98),
                   (uint)*(byte *)(*(long *)(param_1 + 0x68) + 0x38),1);
    lVar1 = *(long *)(param_1 + 0x68);
  }
  *(undefined4 *)(lVar1 + 0x48) = 6;
  *(code **)(param_1 + 0x30) = FUN_71001882c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DisconnectStationJob::DisconnectionSucceeded";
  return 5;
}


```

## 9. `FUN_7100202710`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100202710`  (offset `0x202710`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100202710(void)`
- **Size / BBs / Incoming:** 1688 bytes / 103 bb / 1 incoming refs
- **Match values:** Disconnect
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

## 10. `FUN_7100172eb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100172eb0`  (offset `0x172eb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100172eb0(int * param_1, long * param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 200 bytes / 4 bb / 1 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LocalBackgroundProcessJob::DisconnectNetwork
- **Callers:** FUN_7100184270
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100172d30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100172eb0__7100172eb0.c)  [cfg](../decompiled/FUN_7100172eb0__7100172eb0.mmd)
- **Clone hash:** `7645b11cf39cbe5e`

```c

void FUN_7100172eb0(int *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long local_50 [2];
  long local_40 [2];
  undefined4 local_28 [2];
  
  plVar2 = local_50;
  local_40[0] = 0;
  FUN_71000bb5d0(local_40);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_40[0] + *plVar1 * 45000;
  FUN_7100172d30((int *)local_40,param_2,param_3,2);
  if ((int)local_40[0] == 0) {
    param_2[6] = 0x68;
    param_2[7] = 1;
    *(undefined1 *)((long)param_2 + 0x65) = 0;
    param_2[8] = (long)"LocalBackgroundProcessJob::DisconnectNetwork";
    local_50[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  }
  else {
    plVar2 = local_40;
  }
  FUN_71000bce50(param_1,(int *)plVar2);
  return;
}


```

## 11. `FUN_7100110e60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100110e60`  (offset `0x110e60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100110e60(void)`
- **Size / BBs / Incoming:** 1476 bytes / 128 bb / 2 incoming refs
- **Match values:** Disconnect
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

## 12. `FUN_7101a26200`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a26200`  (offset `0x1a26200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a26200(long param_1, uint param_2, long * * * * * * * * * * * param_3, long * * * * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2312 bytes / 108 bb / 5 incoming refs
- **Match values:** disconnect
- **Strings touched:** player_number_%dp;kumite_player_number_%dp;controller_entry_on;controller_entry_off;set_lct_controller_entry;btn_anim;headcount_on;headcount_off;window_l;set_%d;set_parts_controller_res;disconnect_off;standard_player_%dp
- **Callers:** FUN_7101a20200;FUN_7101a26b10;FUN_7101a2b570;FUN_7101a31020
- **Callees:** FUN_71003a4ca0;FUN_71019e90c0;FUN_71019ea0a0;FUN_71019eade0;FUN_71019f2980;FUN_71019fa350;FUN_71019fce50;FUN_7101a06380;FUN_7101a06ef0;FUN_7101a0f680;FUN_7101a1b4a0;FUN_7101a1e660;FUN_7101a1e860;FUN_7101a1e9b0;FUN_7101a1f0b0;FUN_7101a27570;...
- **Files:** [decomp](../decompiled/FUN_7101a26200__7101a26200.c)  [cfg](../decompiled/FUN_7101a26200__7101a26200.mmd)
- **Clone hash:** `b9fb1ee13a2c2e32`

```c

void FUN_7101a26200(long param_1,uint param_2,long ***********param_3,long ************param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar5;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long ***********ppppppppppplVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  ulong uVar21;
  long ***********local_118;
  undefined8 local_110;
// ... (414 more lines)
```

## 13. `FUN_710151e4b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710151e4b0`  (offset `0x151e4b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710151e4b0(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1784 bytes / 60 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** StateLoadAsyncForStaffRoll;StateWaitForSyncWhenBeginning;StateAppearanceProduction;StateMeleeForStaffRoll;StateEndProduction;StatePause;StateOperatorHUDDone;StateDisconnectSyncCommunication;StateResult;StateApplyParameters;StateFadeOutWhenEndingForStaffRoll;StateWaitForSyncWhenEnding
- **Callers:** FUN_7101853990
- **Callees:** FUN_7101341d50;FUN_710135a0f0;FUN_710135ac80;FUN_710135bea0;FUN_710392eb40
- **Files:** [decomp](../decompiled/FUN_710151e4b0__710151e4b0.c)  [cfg](../decompiled/FUN_710151e4b0__710151e4b0.mmd)
- **Clone hash:** `a57b0e3dbbb87bdf`

```c

void FUN_710151e4b0(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
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
  FUN_710135bea0((long)param_1,(byte *)"StateLoadAsyncForStaffRoll",(long ****)FUN_710151ebb0,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateWaitForSyncWhenBeginning",(long ****)FUN_710151ec40,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateAppearanceProduction",(long ****)FUN_710151ecd0,param_4
                 ,param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateMeleeForStaffRoll",(long ****)FUN_710151ed50,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_710135bea0((long)param_1,(byte *)"StateEndProduction",(long ****)FUN_710151edd0,param_4,
// ... (302 more lines)
```

## 14. `FUN_7101a20200`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a20200`  (offset `0x1a20200`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a20200(long param_1, undefined4 * param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 14464 bytes / 684 bb / 1 incoming refs
- **Match values:** disconnect
- **Strings touched:** bg_anime;ready_out;black_base_all_battle;black_base_vip;black_base_def;set_txt_all_gamenum_00;set_txt_all_gamenum_01;set_parts_btn;view_other;view_jp;img_2;img_1;img_0;set_txt_n_title_othe;set_txt_n_title;set_txt_n_title_sdw_othe;set_txt_period;set_txt_period_sdw;set_txt_other_period;set_parts_lct;count_on;set_txt_score;set_txt_count;dys_yoga03_l_03_set;mnu_convention_session_time;player_number_2p;record_off;day_off;set_cursor_area;set_medal_area;set_panel_%dp_disconnect;set_lct_controller;...
- **Callers:** FUN_710183be60
- **Callees:** FUN_71000001c0;FUN_7101684280;FUN_7101764000;FUN_71019e5610;FUN_71019e6eb0;FUN_71019e8560;FUN_71019e8720;FUN_71019eb330;FUN_71019eb840;FUN_71019f57d0;FUN_71019fbf50;FUN_7101a032e0;FUN_7101a04050;FUN_7101a06380;FUN_7101a0e450;FUN_7101a12080;...
- **Files:** [decomp](../decompiled/FUN_7101a20200__7101a20200.c)  [cfg](../decompiled/FUN_7101a20200__7101a20200.mmd)
- **Clone hash:** `3793474728589d81`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a20200(long param_1,undefined4 *param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint7 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  bool bVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long *******ppppppplVar18;
  long ***ppplVar19;
  byte ****ppppbVar20;
  byte **ppbVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 extraout_x1;
  char *pcVar24;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
// ... (2769 more lines)
```

## 15. `FUN_7100175d60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175d60`  (offset `0x175d60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100175d60(int * param_1, long param_2, undefined4 * param_3, byte param_4)`
- **Size / BBs / Incoming:** 172 bytes / 1 bb / 1 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LocalHostMigrationJob::DisconnectNetwork
- **Callers:** FUN_710017ec70
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100175d60__7100175d60.c)  [cfg](../decompiled/FUN_7100175d60__7100175d60.mmd)
- **Clone hash:** `1e56179507b5c7e7`

```c

void FUN_7100175d60(int *param_1,long param_2,undefined4 *param_3,byte param_4)

{
  undefined4 uVar1;
  int local_48 [4];
  undefined4 local_38 [2];
  
  *(undefined4 **)(param_2 + 0x58) = param_3;
  FUN_71000b40e0(param_3);
  FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
  *(byte *)(param_2 + 0x68) = param_4 & 1;
  uVar1 = 2;
  if ((param_4 & 1) == 0) {
    uVar1 = 3;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x78) + 0x418) = uVar1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalHostMigrationJob::DisconnectNetwork";
  *(code **)(param_2 + 0x30) = FUN_7100175e10;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_48);
  return;
}


```

## 16. `FUN_7100111430`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111430`  (offset `0x111430`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111430(void)`
- **Size / BBs / Incoming:** 1188 bytes / 113 bb / 3 incoming refs
- **Match values:** Disconnect
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

## 17. `FUN_7100111da0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100111da0`  (offset `0x111da0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100111da0(void)`
- **Size / BBs / Incoming:** 1296 bytes / 124 bb / 2 incoming refs
- **Match values:** Disconnect
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

## 18. `FUN_71014d2130`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014d2130`  (offset `0x14d2130`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014d2130(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3256 bytes / 92 bb / 2 incoming refs
- **Match values:** Disconnect
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

## 19. `FUN_71021a07b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71021a07b0`  (offset `0x21a07b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71021a07b0(void)`
- **Size / BBs / Incoming:** 7268 bytes / 7 bb / 1 incoming refs
- **Match values:** DISCONNECT
- **Strings touched:** FIGHTER_INKLING_INSTANCE_WORK_ID_INT_START;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_BOMB_ID_THROW_LW;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_WATER_FRAME;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_LAMP_EFFECT_HANDLE;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_EFFECT_HANDLE;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_LINE_EFFECT_HANDLE;FIGHTER_INKLING_INSTANCE_WORK_ID_INT_TERM;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_START;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_HEIGHT;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_RADIUS;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_R;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_G;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_B;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK;FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_TERM;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_START;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_CAN_SPECIAL_LW_BOMB;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_EXIST_SQUID;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_NO_FLIP_SQUID;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_NO_DAMAGE_MOTION_INTP;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_DISABLE_SPECIAL_S;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_INK_SUCCESS;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_PRE_WHOLE_VISIBLITY;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_LANDING_HEAVY;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_BOY;FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_TERM;FIGHTER_INKLING_MOTION_PART_SET_KIND_TANK;FIGHTER_INKLING_MOTION_PART_SET_KIND_TERM;FIGHTER_INKLING_STATUS_SPECIAL_N_FLAG_START;FIGHTER_INKLING_STATUS_SPECIAL_N_FLAG_CAN_CHANGE_ANGLE;FIGHTER_INKLING_STATUS_SPECIAL_N_WORK_INT_START;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_71037289c0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_71021a07b0__71021a07b0.c)  [cfg](../decompiled/FUN_71021a07b0__71021a07b0.mmd)
- **Clone hash:** `53f7d64166402b53`

```c

void FUN_71021a07b0(void)

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
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_START",
                 (undefined **)0x100000bd,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_BOMB_ID_THROW_LW",
                 (undefined **)0x100000be,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_WATER_FRAME",
                 (undefined **)0x100000bf,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_LAMP_EFFECT_HANDLE",
                 (undefined **)0x100000c0,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_EFFECT_HANDLE",
                 (undefined **)0x100000c1,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,
                 (uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_READY_FINAL_LINE_EFFECT_HANDLE",
                 (undefined **)0x100000c2,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_INT_TERM",
                 (undefined **)0x100000c3,in_x3,in_x4,in_x5,in_x6,in_x7);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xfffffffd;
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_START",
                 (undefined **)&DAT_0000004c,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_HEIGHT",
                 (undefined **)0x4d,in_x3,in_x4,in_x5,in_x6,in_x7);
  FUN_71037289c0(&local_78,(uint *)"FIGHTER_INKLING_INSTANCE_WORK_ID_FLOAT_INK_RADIUS",
                 (undefined **)&DAT_0000004e,in_x3,in_x4,in_x5,in_x6,in_x7);
// ... (822 more lines)
```

## 20. `FUN_710018f2c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f2c0`  (offset `0x18f2c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710018f2c0(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 8 bb / 2 incoming refs
- **Match values:** Disconnect
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

## 21. `FUN_710018f380`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018f380`  (offset `0x18f380`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018f380(void)`
- **Size / BBs / Incoming:** 340 bytes / 17 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LeaveWithHostMigrationJob::WaitDisconnectStations;LeaveWithHostMigrationJob::CleanupMesh
- **Callees:** FUN_71000b4820;FUN_7100161fa0;FUN_7100187fe0;FUN_7100190a90;FUN_7100190af0
- **Files:** [decomp](../decompiled/FUN_710018f380__710018f380.c)  [cfg](../decompiled/FUN_710018f380__710018f380.mmd)
- **Clone hash:** `af6d3a822caedd01`

```c

undefined8 FUN_710018f380(long param_1)

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
    pcVar6 = FUN_710018f700;
    pcVar7 = "LeaveWithHostMigrationJob::CleanupMesh";
  }
  else {
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    lVar8 = *(long *)(lVar3 + 0x20);
    pcVar6 = FUN_710018f8c0;
    lVar3 = lVar3 + 0x18;
    if (lVar8 == lVar3) {
      pcVar7 = "LeaveWithHostMigrationJob::WaitDisconnectStations";
    }
    else {
      pcVar7 = "LeaveWithHostMigrationJob::WaitDisconnectStations";
LAB_710018f3f0:
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

## 22. `FUN_710016e8a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016e8a0`  (offset `0x16e8a0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710016e8a0(void)`
- **Size / BBs / Incoming:** 448 bytes / 18 bb / 1 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LdnBackgroundProcessJob::WaitDisconnected
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_71000bcf30;FUN_710016b2f0;FUN_710016b4f0;FUN_710016c030;FUN_710016db10;FUN_710017ddf0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;<EXTERNAL>::nn::ldn::GetState;<EXTERNAL>::nn::ldn::DestroyNetwork
- **Files:** [decomp](../decompiled/FUN_710016e8a0__710016e8a0.c)  [cfg](../decompiled/FUN_710016e8a0__710016e8a0.mmd)
- **Clone hash:** `8d287d7bbdde8ffa`

```c

ulong FUN_710016e8a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int aiStack_68 [4];
  undefined4 auStack_58 [2];
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_40);
  FUN_71000bce50(aiStack_40,aiStack_50);
  FUN_710016b4f0(aiStack_50,*(long *)(param_1 + 0x70));
  FUN_71000bcf30(aiStack_30,aiStack_50);
  if ((aiStack_30[0] == 0) || (aiStack_40[0] != 0)) {
    iVar1 = nn::ldn::GetState();
  }
  else {
    FUN_71000bcf30(aiStack_40,aiStack_30);
    iVar1 = nn::ldn::GetState();
  }
  if (iVar1 == 3) {
    auStack_58[0] = nn::ldn::DestroyNetwork();
    FUN_710016b2f0(aiStack_50,*(undefined8 *)(param_1 + 0x70),(Result *)auStack_58);
    FUN_71000bcf30(aiStack_30,aiStack_50);
    if ((aiStack_30[0] != 0) && (aiStack_40[0] == 0)) {
      FUN_71000bcf30(aiStack_40,aiStack_30);
// ... (32 more lines)
```

## 23. `FUN_7100124370`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100124370`  (offset `0x124370`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100124370(void)`
- **Size / BBs / Incoming:** 888 bytes / 66 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::WaitNewHostGreeting;LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti;LanProcessHostMigrationJob::LanCheckOldHostDisconnection
- **Callees:** FUN_71000bb680;FUN_710011b3c0;FUN_710011b450;FUN_7100192e90;FUN_71001a35c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100124370__7100124370.c)  [cfg](../decompiled/FUN_7100124370__7100124370.mmd)
- **Clone hash:** `a04d6d66725f7d76`

```c

undefined8 FUN_7100124370(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  char *pcVar22;
  long *plVar23;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar23 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar18 = FUN_710011b3c0((long)plVar23);
  if (((uVar18 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
// ... (113 more lines)
```

## 24. `FUN_710018cdc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018cdc0`  (offset `0x18cdc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018cdc0(void)`
- **Size / BBs / Incoming:** 368 bytes / 14 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** JoinMeshJob::WaitDisconnectStations
- **Callees:** FUN_71000b4820;FUN_71000bb680;FUN_7100161fa0;FUN_7100187520;FUN_7100187fe0;FUN_7100190a90;FUN_7100190af0;FUN_71001a0e00
- **Files:** [decomp](../decompiled/FUN_710018cdc0__710018cdc0.c)  [cfg](../decompiled/FUN_710018cdc0__710018cdc0.mmd)
- **Clone hash:** `2243ed3b40facec4`

```c

undefined8 FUN_710018cdc0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  lVar2 = FUN_7100161fa0(DAT_71052add68);
  lVar2 = *(long *)(lVar2 + 0x98);
  if (lVar2 == 0) {
    uVar4 = 1;
  }
  else {
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    lVar6 = *(long *)(lVar3 + 0x20);
    lVar3 = FUN_7100161fa0(DAT_71052add68);
    if (lVar6 != lVar3 + 0x18) {
      do {
        if (*(long *)(lVar6 + 0x10) != lVar2) {
          bVar1 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(*(long *)(lVar6 + 0x10) + 0x38));
          if (bVar1) {
            FUN_7100190af0(DAT_71052adfc0,(uint)*(byte *)(*(long *)(lVar6 + 0x10) + 0x38));
          }
          lVar3 = *(long *)(lVar6 + 0x10);
          FUN_7100187520(*(long **)(lVar3 + 0xa0));
          FUN_71001a0e00(*(long **)(lVar3 + 0xb0));
          plVar5 = *(long **)(lVar3 + 0xa8);
          if (plVar5 != (long *)0x0) {
            FUN_7100187fe0(plVar5);
            if ((int)uStack_60 == 0) {
              FUN_71000b4820((long)plVar5,0);
              goto LAB_710018ceb0;
            }
          }
// ... (20 more lines)
```

## 25. `FUN_710016f490`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016f490`  (offset `0x16f490`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710016f490(void)`
- **Size / BBs / Incoming:** 448 bytes / 18 bb / 1 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LdnBackgroundProcessJob::WaitDisconnected
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_71000bcf30;FUN_710016b2f0;FUN_710016b4f0;FUN_710016c090;FUN_710016db10;FUN_710017ddf0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;<EXTERNAL>::nn::ldn::GetState;<EXTERNAL>::nn::ldn::Disconnect
- **Files:** [decomp](../decompiled/FUN_710016f490__710016f490.c)  [cfg](../decompiled/FUN_710016f490__710016f490.mmd)
- **Clone hash:** `467dd0a63640aaee`

```c

ulong FUN_710016f490(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  int aiStack_68 [4];
  undefined4 auStack_58 [2];
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_40);
  FUN_71000bce50(aiStack_40,aiStack_50);
  lVar4 = *(long *)(param_1 + 0x70);
  FUN_710016b4f0(aiStack_50,lVar4);
  FUN_71000bcf30(aiStack_30,aiStack_50);
  if ((aiStack_30[0] == 0) || (aiStack_40[0] != 0)) {
    iVar1 = nn::ldn::GetState();
  }
  else {
    FUN_71000bcf30(aiStack_40,aiStack_30);
    iVar1 = nn::ldn::GetState();
  }
  if (iVar1 == 5) {
    auStack_58[0] = nn::ldn::Disconnect();
    FUN_710016b2f0(aiStack_50,lVar4,(Result *)auStack_58);
    FUN_71000bcf30(aiStack_30,aiStack_50);
// ... (34 more lines)
```

## 26. `FUN_7100175e10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175e10`  (offset `0x175e10`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100175e10(void)`
- **Size / BBs / Incoming:** 188 bytes / 9 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitDisconnectNetwork
- **Callees:** FUN_71000b4300;FUN_71001804d0;FUN_71001804e0
- **Files:** [decomp](../decompiled/FUN_7100175e10__7100175e10.c)  [cfg](../decompiled/FUN_7100175e10__7100175e10.mmd)
- **Clone hash:** `d9d6b1607e1b1b96`

```c

undefined8 FUN_7100175e10(long param_1)

{
  bool bVar1;
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x470) == '\0') {
      bVar1 = FUN_71001804d0(*(long *)(param_1 + 0x78));
      if ((!bVar1) &&
         (FUN_71001804e0(aiStack_30,*(long *)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60)),
         aiStack_30[0] == 0)) {
        *(code **)(param_1 + 0x30) = FUN_7100175fc0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitDisconnectNetwork";
      }
      return 5;
    }
  }
  else if (**(int **)(param_1 + 0x60) == 1) {
    FUN_71000b4300((long)*(int **)(param_1 + 0x60));
  }
  *(code **)(param_1 + 0x30) = FUN_7100175f70;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  return 0;
}


```

## 27. `FUN_710018ec80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018ec80`  (offset `0x18ec80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018ec80(void)`
- **Size / BBs / Incoming:** 172 bytes / 7 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LeaveMeshJob::StartDisconnectStations
- **Callees:** FUN_71000bb680;FUN_7100161fa0
- **Files:** [decomp](../decompiled/FUN_710018ec80__710018ec80.c)  [cfg](../decompiled/FUN_710018ec80__710018ec80.mmd)
- **Clone hash:** `cdc14d04e1c7a1e3`

```c

undefined8 FUN_710018ec80(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = DAT_71052ac580;
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
      lVar2 = FUN_7100161fa0(DAT_71052add68);
      if (*(long *)(lVar2 + 0x98) != 0) {
        return 5;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x60);
      plVar3 = FUN_71000bb680();
      *(long *)(param_1 + 0x58) = *(long *)(lVar2 + 0x30) + *plVar3 * (long)iVar1;
    }
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  *(code **)(param_1 + 0x30) = FUN_710018ed30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::StartDisconnectStations";
  return 0;
}


```

## 28. `FUN_7100183cc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183cc0`  (offset `0x183cc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183cc0(void)`
- **Size / BBs / Incoming:** 200 bytes / 13 bb / 4 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection;LocalDestroyNetworkJob::StartDestroyNetwork
- **Callees:** FUN_71000b4300;FUN_71000bb5d0;FUN_710017fc00;FUN_710017fce0;FUN_71001800a0
- **Files:** [decomp](../decompiled/FUN_7100183cc0__7100183cc0.c)  [cfg](../decompiled/FUN_7100183cc0__7100183cc0.mmd)
- **Clone hash:** `ca91784e7f7364d8`

```c

undefined8 FUN_7100183cc0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_71001800a0(*(long *)(param_1 + 0x88));
    if ((uVar2 & 1) == 0) {
      pcVar5 = FUN_7100183d90;
      uVar1 = 0;
      pcVar4 = "LocalDestroyNetworkJob::StartDestroyNetwork";
    }
    else {
      lVar3 = *(long *)(param_1 + 0x88);
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_710017fc00(lVar3);
      }
      else {
        *(undefined1 *)(lVar3 + 0x468) = 0;
        FUN_710017fce0(lVar3);
      }
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x68));
      pcVar5 = FUN_7100183e60;
      uVar1 = 5;
      pcVar4 = "LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection";
    }
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    pcVar5 = FUN_7100183b90;
// ... (9 more lines)
```

## 29. `FUN_7100184460`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184460`  (offset `0x184460`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184460(void)`
- **Size / BBs / Incoming:** 240 bytes / 13 bb / 2 incoming refs
- **Match values:** Disconnect
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

## 30. `FUN_710018c4c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710018c4c0`  (offset `0x18c4c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710018c4c0(void)`
- **Size / BBs / Incoming:** 2292 bytes / 91 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** JoinMeshJob::StartDisconnectStations
- **Callees:** FUN_71000b40e0;FUN_71000b41f0;FUN_71000b4260;FUN_71000b4990;FUN_71000bb680;FUN_71000bce50;FUN_7100160050;FUN_7100161fb0;FUN_710018a7d0;FUN_710018b370;FUN_710018b870;FUN_7100190a90;FUN_7100190cb0;FUN_71001932d0;FUN_7100193390;FUN_7100193560;...
- **Files:** [decomp](../decompiled/FUN_710018c4c0__710018c4c0.c)  [cfg](../decompiled/FUN_710018c4c0__710018c4c0.mmd)
- **Clone hash:** `26b3c927c4bbcd6a`

```c

ulong FUN_710018c4c0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ErrorResultVariant *pEVar13;
  int *piVar14;
  short sVar15;
  int iVar16;
  int aiStack_118 [4];
  int aiStack_108 [4];
  int aiStack_f8 [4];
  int aiStack_e8 [4];
  int aiStack_d8 [4];
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  undefined4 auStack_58 [2];
  
  uVar4 = FUN_710018a7d0((long)param_1);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 0x10));
    if (((uVar3 & 1) == 0) &&
       (uVar3 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 0x50)), (uVar3 & 1) == 0)) {
      bVar1 = FUN_7100193560(DAT_71052adfc0);
// ... (392 more lines)
```

## 31. `FUN_71001246f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001246f0`  (offset `0x1246f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001246f0(void)`
- **Size / BBs / Incoming:** 336 bytes / 11 bb / 2 incoming refs
- **Match values:** Disconnect
- **Strings touched:** LanProcessHostMigrationJob::HostMigrationFailure;LanProcessHostMigrationJob::LanCheckOldHostDisconnection;LanProcessHostMigrationJob::LanPrepareForBecomingHost
- **Callees:** FUN_710011b3c0;FUN_710011b450;FUN_7100192e90;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001246f0__71001246f0.c)  [cfg](../decompiled/FUN_71001246f0__71001246f0.mmd)
- **Clone hash:** `db091ba577b9e604`

```c

ulong FUN_71001246f0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = FUN_710011b3c0((long)plVar5);
  if (((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      uVar4 = 0x640000;
      uVar1 = 4;
      goto LAB_7100124828;
    }
    FUN_710011b450(aiStack_40,(long)plVar5);
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar3 = "LanProcessHostMigrationJob::HostMigrationFailure";
    uVar1 = 5;
  }
  else {
    lVar2 = (**(code **)(*plVar5 + 0xf0))(plVar5);
    if (lVar2 == -1) {
      uVar1 = 0;
      *(code **)(param_1 + 0x30) = FUN_7100123b10;
      pcVar3 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
    }
// ... (13 more lines)
```

