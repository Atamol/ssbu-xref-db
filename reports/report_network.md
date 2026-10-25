# network (funcs=63, hits=120)

Top 50 functions by hit count

## 1. `FUN_7100183e60`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183e60`  (offset `0x183e60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183e60(void)`
- **Size / BBs / Incoming:** 284 bytes / 13 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;LocalDestroyNetworkJob::StartDestroyNetwork;LocalDestroyNetworkJob::SendDestroyNetworkMessage
- **Callees:** FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_7100180c00
- **Files:** [decomp](../decompiled/FUN_7100183e60__7100183e60.c)  [cfg](../decompiled/FUN_7100183e60__7100183e60.mmd)
- **Clone hash:** `47070e3f934be930`

```c

undefined8 FUN_7100183e60(long param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  long lVar6;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_7100180c00(*(long *)(param_1 + 0x88));
    if ((uVar2 & 0xff) != 1) {
      lStack_28 = 0;
      FUN_71000bb5d0(&lStack_28);
      lVar6 = lStack_28 - *(long *)(param_1 + 0x70);
      plVar3 = FUN_71000bb680();
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = lVar6 / *plVar3;
      }
      if (lVar1 < 0x2711) {
        lStack_28 = 0;
        FUN_71000bb5d0(&lStack_28);
        lVar6 = lStack_28 - *(long *)(param_1 + 0x68);
        plVar3 = FUN_71000bb680();
        lVar1 = 0;
        if (*plVar3 != 0) {
          lVar1 = lVar6 / *plVar3;
        }
        if (lVar1 < 0x12d) {
          return 5;
        }
        pcVar5 = FUN_7100183cc0;
        pcVar4 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
        goto LAB_7100183f0c;
      }
    }
// ... (20 more lines)
```

## 2. `FUN_7100183cc0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183cc0`  (offset `0x183cc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183cc0(void)`
- **Size / BBs / Incoming:** 200 bytes / 13 bb / 4 incoming refs
- **Match values:** Network
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

## 3. `FUN_7103371290`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103371290`  (offset `0x3371290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103371290(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12368 bytes / 333 bb / 3 incoming refs
- **Match values:** NETWORK;Network
- **Strings touched:** key_context;MetatableLayoutRoot;__index;MetatableLayoutView;MetatableLayoutPane;MetatableLayoutButton;plate_side;MetatableLayoutView_Animation;MetatableLayoutButtonSelector;MetatableLayoutButtonSelectorGlobal;LayoutButtonSelector;MetatableLayoutListScroller;MetatableLayoutRangeSlider;MetatableLayoutRangeSliderGlobal;LayoutRangeSlider;MetatableLayoutListWindow;deactivate;activate;close;is_busy;update;get_result;MetatableLayoutSubMenu;clear_result;MetatableLayoutButtonSelectorConfig;LayoutButtonSelectorConfig;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_DIRECTIONAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_SEQUENTIAL;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_GRID;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_POINTER;LAYOUTBUTTONSELECTOR_SELECTION_TYPE_AABB;MetatableLayoutRangeSliderConfig;...
- **Callers:** FUN_7101af2070;FUN_71022f2b20;FUN_71032cb040
- **Callees:** FUN_7103375650;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038f5390;FUN_71038f5c00;FUN_71038f7260;FUN_71038f9510;FUN_71038fec40;FUN_710391e050;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7103371290__7103371290.c)  [cfg](../decompiled/FUN_7103371290__7103371290.mmd)
- **Clone hash:** `acf8abf14fe11fb8`

```c

void FUN_7103371290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_370;
  undefined *puStack_368;
  undefined *local_360;
  undefined *puStack_358;
  undefined *local_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined *puStack_318;
  undefined *local_310;
  undefined *puStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  
  FUN_71038f4b20(param_1,"key_context");
  FUN_71038f4fc0(param_1,-0xf4628);
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    puVar8 = (undefined8 *)*plVar5;
  }
  else if (uVar2 == 7) {
    puVar8 = (undefined8 *)(*plVar5 + 0x28);
  }
// ... (1658 more lines)
```

## 4. `FUN_7100183be0`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183be0`  (offset `0x183be0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183be0(void)`
- **Size / BBs / Incoming:** 220 bytes / 11 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;LocalDestroyNetworkJob::SendDestroyNetworkMessage
- **Callees:** FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_71001813d0
- **Files:** [decomp](../decompiled/FUN_7100183be0__7100183be0.c)  [cfg](../decompiled/FUN_7100183be0__7100183be0.mmd)
- **Clone hash:** `8dd24ce148a8c435`

```c

undefined8 FUN_7100183be0(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  char *pcVar4;
  code *pcVar5;
  long lVar6;
  long lStack_28;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    bVar2 = FUN_71001813d0(*(long *)(param_1 + 0x88));
    if (bVar2) {
      lStack_28 = 0;
      FUN_71000bb5d0(&lStack_28);
      lVar6 = lStack_28 - *(long *)(param_1 + 0x78);
      plVar3 = FUN_71000bb680();
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = lVar6 / *plVar3;
      }
      if (lVar1 < 0x2711) {
        return 5;
      }
    }
    FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
    pcVar5 = FUN_7100183cc0;
    pcVar4 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    pcVar5 = FUN_7100183b90;
    pcVar4 = "LocalDestroyNetworkJob::WaitForCancel";
// ... (7 more lines)
```

## 5. `FUN_7100184270`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184270`  (offset `0x184270`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184270(void)`
- **Size / BBs / Incoming:** 272 bytes / 10 bb / 2 incoming refs
- **Match values:** Network
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

## 6. `FUN_7100171330`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100171330`  (offset `0x171330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100171330(void)`
- **Size / BBs / Incoming:** 312 bytes / 7 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** select_item;LdnScanNetworkJob::WaitScanNetwork
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71000bcf30;FUN_710016fbb0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100171330__7100171330.c)  [cfg](../decompiled/FUN_7100171330__7100171330.mmd)
- **Clone hash:** `ceabb26186a2e865`

```c

void FUN_7100171330(int *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar1 = aiStack_60;
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  lVar2 = *(long *)(param_2 + 0x68);
  if (*(char *)(lVar2 + 0x843c) == '\0') {
    (**(code **)(**(long **)(lVar2 + 0x400) + 0x38))
              (aiStack_60,*(long **)(lVar2 + 0x400),*(undefined8 *)(param_2 + 0x60),param_4);
  }
  else {
    FUN_710016fbb0(aiStack_60,*(long **)(lVar2 + 0x400),*(undefined4 **)(param_2 + 0x60),param_4);
  }
  FUN_71000bcf30(aiStack_50,aiStack_60);
  if (aiStack_50[0] == 0) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
    *(undefined1 *)(*(long *)(param_2 + 0x68) + 0x47d) = 0;
    *(code **)(param_2 + 0x30) = FUN_7100186040;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LdnScanNetworkJob::WaitScanNetwork";
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
  }
// ... (7 more lines)
```

## 7. `FUN_710016df90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016df90`  (offset `0x16df90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710016df90(void)`
- **Size / BBs / Incoming:** 324 bytes / 7 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalCreateNetworkJob::WaitCreateNetwork
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71000bcf30;FUN_710016f650;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710016df90__710016df90.c)  [cfg](../decompiled/FUN_710016df90__710016df90.mmd)
- **Clone hash:** `df31f3102562bc0f`

```c

void FUN_710016df90(int *param_1,long param_2,undefined4 *param_3,long param_4)

{
  int *piVar1;
  long lVar2;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar1 = aiStack_60;
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  lVar2 = *(long *)(param_2 + 0x68);
  if (*(char *)(lVar2 + 0x843c) == '\0') {
    (**(code **)(**(long **)(lVar2 + 0x400) + 0x30))
              (aiStack_60,*(long **)(lVar2 + 0x400),*(undefined8 *)(param_2 + 0x60),param_4);
  }
  else {
    FUN_710016f650(aiStack_60,*(long **)(lVar2 + 0x400),*(undefined4 **)(param_2 + 0x60),param_4,1);
  }
  FUN_71000bcf30(aiStack_50,aiStack_60);
  if (aiStack_50[0] == 0) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
    lVar2 = *(long *)(param_2 + 0x68);
    *(undefined1 *)(lVar2 + 0x47d) = 0;
    *(undefined1 *)(lVar2 + 0x569) = 1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalCreateNetworkJob::WaitCreateNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100173ad0;
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
// ... (9 more lines)
```

## 8. `FUN_710016f650`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016f650`  (offset `0x16f650`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710016f650(int * param_1, long * param_2, undefined4 * param_3, long param_4, uint param_5)`
- **Size / BBs / Incoming:** 444 bytes / 13 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::UpdateCreateNetworkSettingForFixedChannel;LdnBackgroundProcessJob::CreateNetworkPrivate
- **Callers:** FUN_710016df90;FUN_7100170530
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710016e380;FUN_7100172d30;FUN_7100181800;<EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710016f650__710016f650.c)  [cfg](../decompiled/FUN_710016f650__710016f650.mmd)
- **Clone hash:** `763096de82f26f81`

```c

void FUN_710016f650(int *param_1,long *param_2,undefined4 *param_3,long param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 local_68;
  int local_58 [4];
  undefined4 local_48 [2];
  
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_68 = (ulong)local_68._4_4_ << 0x20;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)&local_68);
  local_68 = 0;
  FUN_71000bb5d0(&local_68);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_68 + *plVar1 * 0x1194;
  memcpy(param_2 + 0x17,(void *)(param_4 + 8),0x1d6);
  FUN_710016e380((int *)&local_68,(long)param_2);
  FUN_71000bcf30(local_58,(int *)&local_68);
  if (local_58[0] != 0) {
    piVar2 = local_58;
    goto LAB_710016f78c;
  }
  FUN_7100181800((int *)&local_68,(long *)param_2[0xe],param_2 + 0x16);
  FUN_71000bcf30(local_58,(int *)&local_68);
  if (local_58[0] == 0) {
    FUN_7100172d30((int *)&local_68,param_2,param_3,3);
    FUN_71000bcf30(local_58,(int *)&local_68);
    if (local_58[0] != 0) {
      uVar3 = 0x10c08;
      goto LAB_710016f768;
    }
    if ((param_5 & 1) == 0) {
      DAT_71052ac5e0 = param_2[0x17];
      param_2[7] = 0;
      param_2[8] = (long)"LdnBackgroundProcessJob::CreateNetworkPrivate";
// ... (25 more lines)
```

## 9. `FUN_7100183920`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183920`  (offset `0x183920`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100183920(int * param_1, long param_2, undefined4 * param_3, byte param_4)`
- **Size / BBs / Incoming:** 204 bytes / 6 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalDestroyNetworkJob::TryPrepareDestroyNetwork
- **Callers:** FUN_71001804e0;FUN_7100181d50
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100183920__7100183920.c)  [cfg](../decompiled/FUN_7100183920__7100183920.mmd)
- **Clone hash:** `eb4169057a897b52`

```c

void FUN_7100183920(int *param_1,long param_2,undefined4 *param_3,byte param_4)

{
  long lVar1;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (*(int *)(*(long *)(param_2 + 0x88) + 0x474) == 1) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    *(byte *)(param_2 + 0x80) = param_4 & 1;
    if ((param_4 & 1) != 0) {
      lVar1 = *(long *)(param_2 + 0x88);
      *(undefined4 *)(lVar1 + 0x418) = 1;
      *(undefined1 *)(lVar1 + 0x468) = 1;
    }
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalDestroyNetworkJob::TryPrepareDestroyNetwork";
    *(code **)(param_2 + 0x30) = FUN_71001839f0;
    local_48[0] = 0;
  }
  else {
    local_48[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_48);
  return;
}


```

## 10. `FUN_7100176d30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176d30`  (offset `0x176d30`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176d30(void)`
- **Size / BBs / Incoming:** 256 bytes / 15 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::ConnectNetwork;LocalHostMigrationJob::ScanNetwork
- **Callees:** FUN_71000b4300
- **Files:** [decomp](../decompiled/FUN_7100176d30__7100176d30.c)  [cfg](../decompiled/FUN_7100176d30__7100176d30.mmd)
- **Clone hash:** `d17fd4a9e0629b0c`

```c

undefined8 FUN_7100176d30(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar2 = *(long **)(param_1 + 0x78);
    if ((int)plVar2[0x90] != 0) {
      bVar1 = false;
      uVar7 = 0;
      do {
        lVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,uVar7);
        if (lVar3 == 0) break;
        uVar4 = (**(code **)(**(long **)(param_1 + 0x78) + 0x150))(*(long **)(param_1 + 0x78),lVar3)
        ;
        if ((uVar4 & 1) != 0) {
          bVar1 = true;
          *(uint *)(param_1 + 0x6c) = uVar7;
        }
        plVar2 = *(long **)(param_1 + 0x78);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(plVar2 + 0x90));
      if (bVar1) {
        *(undefined8 *)(param_1 + 0x30) = 0x50;
        pcVar6 = "LocalHostMigrationJob::ConnectNetwork";
        uVar5 = 1;
        goto LAB_7100176e18;
      }
    }
    uVar5 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100176a80;
    pcVar6 = "LocalHostMigrationJob::ScanNetwork";
  }
// ... (14 more lines)
```

## 11. `FUN_7100183540`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183540`  (offset `0x183540`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183540(void)`
- **Size / BBs / Incoming:** 280 bytes / 15 bb / 2 incoming refs
- **Match values:** Network
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

## 12. `FUN_71001841c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001841c0`  (offset `0x1841c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001841c0(int * param_1, long param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 164 bytes / 4 bb / 1 incoming refs
- **Match values:** Network
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

## 13. `FUN_71001833f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001833f0`  (offset `0x1833f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001833f0(int * param_1, long param_2, undefined4 * param_3, long * param_4)`
- **Size / BBs / Incoming:** 328 bytes / 11 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalConnectNetworkJob::WaitConnectNetwork
- **Callers:** FUN_7100181f40
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71001815f0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001833f0__71001833f0.c)  [cfg](../decompiled/FUN_71001833f0__71001833f0.mmd)
- **Clone hash:** `8447264f122aecfb`

```c

void FUN_71001833f0(int *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  lVar1 = FUN_71001815f0(*(long **)(param_2 + 0x68),*param_4);
  if (*(byte *)(lVar1 + 8) < 7) {
    if (*(byte *)(lVar1 + 8) != 6) {
      local_48[0] = 0x641f;
      goto LAB_71001834f4;
    }
    if (*(int *)(lVar1 + 4) != (int)param_4[1]) {
      local_48[0] = 0x6c51;
      goto LAB_71001834f4;
    }
    plVar2 = *(long **)(*(long *)(param_2 + 0x68) + 0x400);
    (**(code **)(*plVar2 + 0x40))(local_48,plVar2,*(undefined8 *)(param_2 + 0x60),param_4);
    if (local_48[0] == 0) {
      *(undefined4 **)(param_2 + 0x58) = param_3;
      FUN_71000b40e0(param_3);
      FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
      FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
      lVar1 = *(long *)(param_2 + 0x68);
      *(undefined1 *)(lVar1 + 0x47d) = 0;
      *(undefined1 *)(lVar1 + 0x569) = 1;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LocalConnectNetworkJob::WaitConnectNetwork";
      *(code **)(param_2 + 0x30) = FUN_7100183540;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
// ... (17 more lines)
```

## 14. `FUN_7100183d90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183d90`  (offset `0x183d90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183d90(void)`
- **Size / BBs / Incoming:** 196 bytes / 5 bb / 3 incoming refs
- **Match values:** Network
- **Strings touched:** LocalDestroyNetworkJob::WaitDestroyNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4820;FUN_71000bce50;FUN_7100172c60
- **Files:** [decomp](../decompiled/FUN_7100183d90__7100183d90.c)  [cfg](../decompiled/FUN_7100183d90__7100183d90.mmd)
- **Clone hash:** `8a7a449f12294b44`

```c

undefined8 FUN_7100183d90(long param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  FUN_7100172c60(aiStack_30,*(long **)(*(long *)(param_1 + 0x88) + 0x400),
                 *(undefined4 **)(param_1 + 0x60));
  if (aiStack_30[0] == 0) {
    FUN_71000b4820(*(long *)(*(long *)(param_1 + 0x88) + 0x400),1);
    *(char **)(param_1 + 0x40) = "LocalDestroyNetworkJob::WaitDestroyNetwork";
    *(code **)(param_1 + 0x30) = FUN_7100183f80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  FUN_71000bce50(aiStack_40,(int *)(*(long *)(param_1 + 0x60) + 4));
  FUN_71000b41f0(puVar1,aiStack_40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    return 1;
  }
  return 1;
}


```

## 15. `FUN_71001739f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001739f0`  (offset `0x1739f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001739f0(void)`
- **Size / BBs / Incoming:** 216 bytes / 4 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalCreateNetworkJob::WaitCreateNetwork
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001739f0__71001739f0.c)  [cfg](../decompiled/FUN_71001739f0__71001739f0.mmd)
- **Clone hash:** `2b33672e65eeeac7`

```c

void FUN_71001739f0(int *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_50;
  plVar1 = *(long **)(*(long *)(param_2 + 0x68) + 0x400);
  (**(code **)(*plVar1 + 0x30))(aiStack_40,plVar1,*(undefined8 *)(param_2 + 0x60));
  if (aiStack_40[0] == 0) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
    lVar3 = *(long *)(param_2 + 0x68);
    *(undefined1 *)(lVar3 + 0x47d) = 0;
    *(undefined1 *)(lVar3 + 0x569) = 1;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalCreateNetworkJob::WaitCreateNetwork";
    *(code **)(param_2 + 0x30) = FUN_7100173ad0;
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  }
  else {
    piVar2 = aiStack_40;
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}


```

## 16. `FUN_7100185f70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100185f70`  (offset `0x185f70`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100185f70(void)`
- **Size / BBs / Incoming:** 208 bytes / 4 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** dys_yoga03_l_03_set;LocalScanNetworkJob::WaitScanNetwork
- **Callees:** FUN_71000b40e0;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100185f70__7100185f70.c)  [cfg](../decompiled/FUN_7100185f70__7100185f70.mmd)
- **Clone hash:** `760dfd08d1f5c614`

```c

void FUN_7100185f70(int *param_1,long param_2,undefined4 *param_3)

{
  long *plVar1;
  int *piVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_50;
  plVar1 = *(long **)(*(long *)(param_2 + 0x68) + 0x400);
  (**(code **)(*plVar1 + 0x38))(aiStack_40,plVar1,*(undefined8 *)(param_2 + 0x60));
  if (aiStack_40[0] == 0) {
    *(undefined4 **)(param_2 + 0x58) = param_3;
    FUN_71000b40e0(param_3);
    FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
    FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
    *(undefined1 *)(*(long *)(param_2 + 0x68) + 0x47d) = 0;
    *(code **)(param_2 + 0x30) = FUN_7100186040;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(char **)(param_2 + 0x40) = "LocalScanNetworkJob::WaitScanNetwork";
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  }
  else {
    piVar2 = aiStack_40;
  }
  FUN_71000bce50(param_1,piVar2);
  return;
}


```

## 17. `FUN_7100175970`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175970`  (offset `0x175970`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100175970(int * param_1, long param_2, undefined4 * param_3, int param_4)`
- **Size / BBs / Incoming:** 176 bytes / 6 bb / 2 incoming refs
- **Match values:** Network
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

## 18. `FUN_71001839f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001839f0`  (offset `0x1839f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001839f0(void)`
- **Size / BBs / Incoming:** 236 bytes / 13 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalDestroyNetworkJob::WaitForCancel;LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage
- **Callees:** FUN_71000b4300;FUN_71000bb5d0;FUN_7100172bb0;FUN_710017eae0
- **Files:** [decomp](../decompiled/FUN_71001839f0__71001839f0.c)  [cfg](../decompiled/FUN_71001839f0__71001839f0.mmd)
- **Clone hash:** `5b4056a7e6f49eb7`

```c

undefined8 FUN_71001839f0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172bb0(aiStack_30,*(long **)(*(long *)(param_1 + 0x88) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
      pcVar2 = FUN_7100183cc0;
      pcVar1 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
    }
    else {
      FUN_710017eae0(*(long **)(param_1 + 0x88));
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x78));
      pcVar2 = FUN_7100183be0;
      pcVar1 = "LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage";
    }
    *(code **)(param_1 + 0x30) = pcVar2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183b90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar1 = "LocalDestroyNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
// ... (2 more lines)
```

## 19. `FUN_71017f4090`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017f4090`  (offset `0x17f4090`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71017f4090(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** NetworkOwnerMessage
- **Files:** [decomp](../decompiled/FUN_71017f4090__71017f4090.c)  [cfg](../decompiled/FUN_71017f4090__71017f4090.mmd)
- **Clone hash:** `7b935df92278c8b9`

```c

char * FUN_71017f4090(void)

{
  return "NetworkOwnerMessage";
}


```

## 20. `FUN_710017ab60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017ab60`  (offset `0x17ab60`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017ab60(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalMatchCreateSessionJob::DestroyLocalNetwork
- **Callees:** FUN_7100175780
- **Files:** [decomp](../decompiled/FUN_710017ab60__710017ab60.c)  [cfg](../decompiled/FUN_710017ab60__710017ab60.mmd)
- **Clone hash:** `37b86ee08cd09f48`

```c

undefined8 FUN_710017ab60(long param_1)

{
  FUN_7100175780(*(long *)(param_1 + 0xa8));
  *(char **)(param_1 + 0x40) = "LocalMatchCreateSessionJob::DestroyLocalNetwork";
  *(code **)(param_1 + 0x30) = FUN_710017aba0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


```

## 21. `FUN_7100176e30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176e30`  (offset `0x176e30`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100176e30(long param_1)`
- **Size / BBs / Incoming:** 252 bytes / 8 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitConnectNetwork
- **Callees:** FUN_71000b4300;FUN_7100181f40
- **Files:** [decomp](../decompiled/FUN_7100176e30__7100176e30.c)  [cfg](../decompiled/FUN_7100176e30__7100176e30.mmd)
- **Clone hash:** `75fc945762a59ae9`

```c

undefined8 FUN_7100176e30(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  int local_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0xd8))
                      (*(long **)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x6c));
    plVar2 = (long *)(**(code **)(**(long **)(param_1 + 0x78) + 0x168))
                               (*(long **)(param_1 + 0x78),uVar1);
    plVar3 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar3 + 0x158))(plVar3,uVar1);
    FUN_7100181f40(local_40,*(long **)(param_1 + 0x78),*(undefined4 **)(param_1 + 0x60),plVar2);
    if (local_40[0] == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x58;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitConnectNetwork";
    }
    uVar1 = 5;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}


```

## 22. `FUN_71001700a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001700a0`  (offset `0x1700a0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71001700a0(long param_1)`
- **Size / BBs / Incoming:** 828 bytes / 22 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::WaitConnectNetworkEvent
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_71000bcf30;FUN_710016af60;FUN_710016b170;FUN_710016b2f0;FUN_710016c060;FUN_710016c120;FUN_710016da00;FUN_710016db50;FUN_710016e740;FUN_710017ddf0;<EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;...
- **Files:** [decomp](../decompiled/FUN_71001700a0__71001700a0.c)  [cfg](../decompiled/FUN_71001700a0__71001700a0.mmd)
- **Clone hash:** `796c18379c9b5e64`

```c

ulong FUN_71001700a0(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int *piVar3;
  undefined2 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  ErrorResultVariant *this;
  int aiStack_180 [4];
  int aiStack_170 [4];
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [4];
  int local_130 [4];
  int local_120 [4];
  undefined4 local_110 [2];
  undefined1 auStack_108 [48];
  undefined8 local_d8;
  undefined8 uStack_d0;
  char local_c8;
  undefined7 uStack_c7;
  undefined8 uStack_c0;
  uint local_b8 [18];
  int aiStack_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar3 = aiStack_180;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
  local_b8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_b8);
  lVar7 = *(long *)(param_1 + 0x70);
  FUN_710016c060((int *)local_b8);
// ... (98 more lines)
```

## 23. `FUN_71017f3ca0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017f3ca0`  (offset `0x17f3ca0`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71017f3ca0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** NetworkMeleeMessage
- **Files:** [decomp](../decompiled/FUN_71017f3ca0__71017f3ca0.c)  [cfg](../decompiled/FUN_71017f3ca0__71017f3ca0.mmd)
- **Clone hash:** `bf21ccc77edcdd91`

```c

char * FUN_71017f3ca0(void)

{
  return "NetworkMeleeMessage";
}


```

## 24. `FUN_71017f4480`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017f4480`  (offset `0x17f4480`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71017f4480(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** NODE_PRE_REFRACT_BLEND;NetworkErrorMessage
- **Files:** [decomp](../decompiled/FUN_71017f4480__71017f4480.c)  [cfg](../decompiled/FUN_71017f4480__71017f4480.mmd)
- **Clone hash:** `ee4d2302a0406665`

```c

char * FUN_71017f4480(void)

{
  return "NetworkErrorMessage";
}


```

## 25. `FUN_710016f920`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016f920`  (offset `0x16f920`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710016f920(void)`
- **Size / BBs / Incoming:** 652 bytes / 17 bb / 3 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::WaitCreateNetworkEvent
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_71000bcf30;FUN_710016b170;FUN_710016b2f0;FUN_710016c000;FUN_710016c120;FUN_710016da00;FUN_710016db50;FUN_710016e740;FUN_710017ddf0;<EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;<EXTERNAL>::nn::ldn::CreateNetworkPrivate;...
- **Files:** [decomp](../decompiled/FUN_710016f920__710016f920.c)  [cfg](../decompiled/FUN_710016f920__710016f920.mmd)
- **Clone hash:** `630e8ec925ffca55`

```c

ulong FUN_710016f920(long param_1)

{
  void *pvVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  int aiStack_158 [4];
  int aiStack_148 [4];
  int aiStack_138 [4];
  int aiStack_128 [4];
  int aiStack_118 [4];
  int aiStack_108 [4];
  UserConfig aUStack_f8 [48];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  uint auStack_a8 [18];
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_a8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_a8);
  lVar5 = *(long *)(param_1 + 0x70);
  FUN_710016c000((int *)auStack_a8);
  FUN_71000bcf30(aiStack_50,(int *)auStack_a8);
  if (aiStack_50[0] == 0) {
    FUN_710017ddf0(*(long *)(param_1 + 0x70),1);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xa8))
              (auStack_a8,*(long **)(param_1 + 0x70),param_1 + 0x105,
// ... (75 more lines)
```

## 26. `FUN_7100170830`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170830`  (offset `0x170830`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170830(void)`
- **Size / BBs / Incoming:** 200 bytes / 8 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LdnHostMigrationJob::WaitForCancel;LdnHostMigrationJob::WaitConnectNetwork
- **Callees:** FUN_71000b4300;FUN_71000b4820;FUN_710016ffa0;FUN_710017dcc0
- **Files:** [decomp](../decompiled/FUN_7100170830__7100170830.c)  [cfg](../decompiled/FUN_7100170830__7100170830.mmd)
- **Clone hash:** `af62d497f55dea19`

```c

undefined8 FUN_7100170830(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int aiStack_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = *(long **)(*(long *)(param_1 + 0x78) + 0x400);
    FUN_710016ffa0(aiStack_40,plVar3,*(undefined4 **)(param_1 + 0x60));
    if (aiStack_40[0] == 0) {
      FUN_710017dcc0(*(long *)(param_1 + 0x78));
      lVar2 = *(long *)(param_1 + 0x78);
      *(undefined1 *)(lVar2 + 0x47d) = 0;
      *(undefined1 *)(lVar2 + 0x569) = 1;
      FUN_71000b4820((long)plVar3,1);
      *(undefined8 *)(param_1 + 0x30) = 0x58;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitConnectNetwork";
    }
    uVar1 = 5;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}


```

## 27. `FUN_7100176310`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176310`  (offset `0x176310`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100176310(long param_1)`
- **Size / BBs / Incoming:** 188 bytes / 8 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;dys_yoga03_l_03_set;LocalHostMigrationJob::WaitCreateNetwork
- **Callees:** FUN_71000b4300;FUN_71001819f0
- **Files:** [decomp](../decompiled/FUN_7100176310__7100176310.c)  [cfg](../decompiled/FUN_7100176310__7100176310.mmd)
- **Clone hash:** `2a0edf4e5cba8637`

```c

undefined8 FUN_7100176310(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int local_40 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    plVar3 = *(long **)(param_1 + 0x78);
    lVar4 = *(long *)(param_1 + 0x60);
    lVar2 = (**(code **)(*plVar3 + 0x158))(plVar3);
    FUN_71001819f0(local_40,plVar3,lVar4,lVar2);
    if (local_40[0] == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0x40;
      *(undefined8 *)(param_1 + 0x38) = 1;
      *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitCreateNetwork";
    }
    uVar1 = 5;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  }
  return uVar1;
}


```

## 28. `FUN_71016a5980`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71016a5980`  (offset `0x16a5980`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71016a5980(undefined * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1396 bytes / 54 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** Network
- **Callees:** FUN_71003cb050;FUN_7101695c80;FUN_7101696e80;FUN_7101697850;FUN_71016a3e90;FUN_7103755220;FUN_710392e290;<EXTERNAL>::memset;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_71016a5980__71016a5980.c)  [cfg](../decompiled/FUN_71016a5980__71016a5980.mmd)
- **Clone hash:** `32963c1564632329`

```c

void FUN_71016a5980(undefined **param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long ****pppplVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long **pplVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long ***local_710;
  undefined **local_708;
  undefined4 *local_700;
  undefined **local_6f8;
  long ****local_6f0;
  undefined **local_6e8;
  undefined1 *puStack_6e0;
  undefined **local_6d8;
  undefined1 *puStack_6d0;
  undefined **local_6c8;
  undefined1 *puStack_6c0;
  undefined **local_6b8;
  undefined1 *puStack_6b0;
  undefined4 local_6a8;
  undefined **local_6a0;
  undefined1 *puStack_698;
  undefined1 *local_690;
  undefined8 uStack_688;
  undefined1 auStack_680 [776];
// ... (217 more lines)
```

## 29. `FUN_7100173320`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100173320`  (offset `0x173320`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100173320(int * param_1, long * param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 212 bytes / 4 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalBackgroundProcessJob::ConnectNetwork
- **Callers:** FUN_710016eef0
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100172d30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100173320__7100173320.c)  [cfg](../decompiled/FUN_7100173320__7100173320.mmd)
- **Clone hash:** `47069210b66de338`

```c

void FUN_7100173320(int *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  int local_50 [4];
  long local_40 [2];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  FUN_71000bb5d0(local_40);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_40[0] + *plVar1 * 0x1194;
  FUN_7100172d30((int *)local_40,param_2,param_3,3);
  if ((int)local_40[0] == 0) {
    param_2[6] = 0x60;
    param_2[7] = 1;
    param_2[8] = (long)"LocalBackgroundProcessJob::ConnectNetwork";
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_50);
  return;
}


```

## 30. `FUN_7100176a80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100176a80`  (offset `0x176a80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100176a80(void)`
- **Size / BBs / Incoming:** 360 bytes / 12 bb / 3 incoming refs
- **Match values:** Network
- **Strings touched:** LocalHostMigrationJob::WaitForCancel;LocalHostMigrationJob::WaitScanNetwork
- **Callees:** FUN_71000b41f0;FUN_71000b4300;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100176130;FUN_7100182400;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100176a80__7100176a80.c)  [cfg](../decompiled/FUN_7100176a80__7100176a80.mmd)
- **Clone hash:** `a6a3b87542bffa13`

```c

undefined8 FUN_7100176a80(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  long alStack_50 [2];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    alStack_50[0] = 0;
    FUN_71000bb5d0(alStack_50);
    lVar4 = alStack_50[0] - *(long *)(param_1 + 0x80);
    plVar2 = FUN_71000bb680();
    lVar3 = 0;
    if (*plVar2 != 0) {
      lVar3 = lVar4 / *plVar2;
    }
    if (lVar3 < 0x2711) {
      plVar2 = *(long **)(param_1 + 0x78);
      lVar4 = *(long *)(param_1 + 0x60);
      lVar3 = (**(code **)(*plVar2 + 0x160))(plVar2);
      FUN_7100182400((int *)alStack_50,(long)plVar2,lVar4,lVar3);
      if ((int)alStack_50[0] == 0) {
        *(code **)(param_1 + 0x30) = FUN_7100176bf0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitScanNetwork";
      }
      uVar1 = 5;
    }
    else {
      if (**(int **)(param_1 + 0x60) == 1) {
        FUN_71000b4300((long)*(int **)(param_1 + 0x60));
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 0x400) + 0x48) = 1;
      }
      FUN_7100176130(param_1);
// ... (25 more lines)
```

## 31. `FUN_710016ffa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016ffa0`  (offset `0x16ffa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710016ffa0(int * param_1, long * param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 256 bytes / 6 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::ConnectNetworkPrivate
- **Callers:** FUN_7100170830
- **Callees:** FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_7100172d30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710016ffa0__710016ffa0.c)  [cfg](../decompiled/FUN_710016ffa0__710016ffa0.mmd)
- **Clone hash:** `73148d9d1aacc274`

```c

void FUN_710016ffa0(int *param_1,long *param_2,undefined4 *param_3)

{
  long *plVar1;
  int local_50 [4];
  long local_40 [2];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  FUN_71000bb5d0(local_40);
  plVar1 = FUN_71000bb680();
  param_2[0xd] = local_40[0] + *plVar1 * 0x1194;
  FUN_7100172d30((int *)local_40,param_2,param_3,3);
  if ((int)local_40[0] == 0) {
    plVar1 = (long *)param_2[0x54];
    param_2[6] = (long)FUN_71001700a0;
    param_2[7] = 0;
    param_2[8] = (long)"LdnBackgroundProcessJob::ConnectNetworkPrivate";
    DAT_71052ac5e0 = 0;
    if (*(char *)((long)plVar1 + 0x53) == '\x02') {
      DAT_71052ac5e0 = plVar1[1];
    }
    DAT_71052ac5e8 = (**(code **)(*plVar1 + 8))();
    local_50[0] = 0;
  }
  else {
    local_50[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_50);
  return;
}


```

## 32. `FUN_710017afd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017afd0`  (offset `0x17afd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017afd0(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LocalMatchDestroySessionJob::DestroyLocalNetwork
- **Files:** [decomp](../decompiled/FUN_710017afd0__710017afd0.c)  [cfg](../decompiled/FUN_710017afd0__710017afd0.mmd)
- **Clone hash:** `b3ee3fc153922a7a`

```c

void FUN_710017afd0(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_710017ae70;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalMatchDestroySessionJob::DestroyLocalNetwork";
  return;
}


```

## 33. `FUN_7100184460`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100184460`  (offset `0x184460`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100184460(void)`
- **Size / BBs / Incoming:** 240 bytes / 13 bb / 2 incoming refs
- **Match values:** Network
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

## 34. `FUN_710017a7c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a7c0`  (offset `0x17a7c0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a7c0(void)`
- **Size / BBs / Incoming:** 184 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** select_item;LocalMatchCreateSessionJob::CreateLocalNetwork
- **Callees:** FUN_71000bce50;FUN_710013dc70;FUN_71001492c0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710017a7c0__710017a7c0.c)  [cfg](../decompiled/FUN_710017a7c0__710017a7c0.mmd)
- **Clone hash:** `3ca0fc2556411ebf`

```c

void FUN_710017a7c0(int *param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  long *plVar2;
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  *(long **)(param_2 + 0xa0) = plVar2;
  (**(code **)(*plVar2 + 0x140))();
  uVar1 = FUN_710013dc70(param_3);
  FUN_71001492c0(DAT_71052adb38,uVar1);
  *(code **)(param_2 + 0x30) = FUN_710017a880;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalMatchCreateSessionJob::CreateLocalNetwork";
  aiStack_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_48);
  return;
}


```

## 35. `FUN_7100186040`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100186040`  (offset `0x186040`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100186040(long param_1)`
- **Size / BBs / Incoming:** 240 bytes / 13 bb / 3 incoming refs
- **Match values:** Network
- **Strings touched:** LocalScanNetworkJob::WaitForCancel
- **Callees:** FUN_71000b4180;FUN_71000b41f0;FUN_71000b4300;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_7100186040__7100186040.c)  [cfg](../decompiled/FUN_7100186040__7100186040.mmd)
- **Clone hash:** `e94e9c52c0149da4`

```c

undefined8 FUN_7100186040(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar3 = aiStack_60;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_71001861c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalScanNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x47d) = 1;
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  case 3:
    FUN_71000bce50(aiStack_50,piVar2 + 1);
    piVar3 = aiStack_50;
    break;
  case 4:
    FUN_71000bce50(aiStack_60,piVar2 + 1);
    break;
  default:
// ... (8 more lines)
```

## 36. `FUN_710016f810`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016f810`  (offset `0x16f810`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710016f810(void)`
- **Size / BBs / Incoming:** 264 bytes / 5 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::CreateNetworkPrivate
- **Callees:** FUN_71000b63d0;FUN_710016af60;FUN_7100173100;FUN_7100173820;FUN_71001820f0;FUN_7100182850;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_710016f810__710016f810.c)  [cfg](../decompiled/FUN_710016f810__710016f810.mmd)
- **Clone hash:** `1367995b84fa99c5`

```c

undefined8 FUN_710016f810(long param_1)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined2 *)(param_1 + 0xc0);
  *(undefined2 *)(param_1 + 0x300) = *(undefined2 *)(param_1 + 0x28c);
  memset(&uStack_40,0,0x10);
  *(undefined8 *)(param_1 + 0x2f0) = uVar6;
  *(ulong *)(param_1 + 0x2f8) = CONCAT44(uStack_34,CONCAT22(uVar1,uStack_38));
  *(undefined1 *)(param_1 + 0x302) = *(undefined1 *)(param_1 + 0xc2);
  uStack_40 = uVar6;
  uStack_36 = uVar1;
  uVar3 = FUN_710016af60(*(long *)(param_1 + 0x70));
  *(short *)(param_1 + 0x304) = (short)uVar3;
  bVar2 = FUN_7100182850(*(long *)(param_1 + 0x70));
  if (bVar2) {
    if (*(char *)(param_1 + 0x78) != '\0') {
      uVar6 = FUN_71000b63d0();
      uVar5 = FUN_71000b63d0();
      FUN_7100173820(param_1,uVar6,uVar5);
    }
    uVar4 = FUN_7100173100(param_1);
    FUN_71001820f0(*(long *)(param_1 + 0x70),uVar4);
    (**(code **)(**(long **)(param_1 + 0x70) + 0xd0))
              (*(long **)(param_1 + 0x70),param_1 + 0x105,uVar4);
  }
  DAT_71052ac5e0 = *(undefined8 *)(param_1 + 0xb8);
  DAT_71052ac5e8 = *(undefined1 *)(param_1 + 0xc2);
// ... (6 more lines)
```

## 37. `FUN_710017a880`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017a880`  (offset `0x17a880`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710017a880(void)`
- **Size / BBs / Incoming:** 200 bytes / 6 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalMatchCreateSessionJob::WaitCreateLocalNetwork
- **Callees:** FUN_71000b41f0;FUN_71000bce50
- **Files:** [decomp](../decompiled/FUN_710017a880__710017a880.c)  [cfg](../decompiled/FUN_710017a880__710017a880.mmd)
- **Clone hash:** `dc51ed3b0d865e64`

```c

undefined8 FUN_710017a880(long *param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if ((param_1[0xb] != 0) && (*(char *)(param_1[0xb] + 0x28) != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  (**(code **)(*(long *)param_1[0x14] + 0x40))(aiStack_30,(long *)param_1[0x14],param_1 + 0xc);
  if (aiStack_30[0] != 0) {
    puVar1 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_40,aiStack_30);
    FUN_71000b41f0(puVar1,aiStack_40);
    param_1[0xb] = 0;
    return 1;
  }
  param_1[8] = (long)"LocalMatchCreateSessionJob::WaitCreateLocalNetwork";
  param_1[6] = (long)FUN_710017a950;
  param_1[7] = 0;
  return 5;
}


```

## 38. `FUN_7100175fc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175fc0`  (offset `0x175fc0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100175fc0(void)`
- **Size / BBs / Incoming:** 356 bytes / 15 bb / 2 incoming refs
- **Match values:** Network
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

## 39. `FUN_7100170bb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100170bb0`  (offset `0x170bb0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100170bb0(void)`
- **Size / BBs / Incoming:** 132 bytes / 3 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LdnHostMigrationJob::ConnectNetwork
- **Callees:** FUN_71000bb5d0;FUN_71000bb680
- **Files:** [decomp](../decompiled/FUN_7100170bb0__7100170bb0.c)  [cfg](../decompiled/FUN_7100170bb0__7100170bb0.mmd)
- **Clone hash:** `31055414a5b8a18b`

```c

undefined8 FUN_7100170bb0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_28;
  
  lStack_28 = 0;
  FUN_71000bb5d0(&lStack_28);
  lVar3 = lStack_28 - *(long *)(param_1 + 0x98);
  plVar2 = FUN_71000bb680();
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = lVar3 / *plVar2;
  }
  if (lVar1 < *(int *)(param_1 + 0x8c)) {
    return 5;
  }
  *(undefined8 *)(param_1 + 0x30) = 0x50;
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::ConnectNetwork";
  return 0;
}


```

## 40. `FUN_710016f0c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016f0c0`  (offset `0x16f0c0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710016f0c0(long param_1)`
- **Size / BBs / Incoming:** 820 bytes / 24 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::WaitConnectNetworkEvent
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000bce50;FUN_71000bcf30;FUN_710016af60;FUN_710016b2f0;FUN_710016c060;FUN_710016c120;FUN_710016da00;FUN_710016db50;FUN_710016e740;FUN_710016f400;FUN_710017ddf0;<EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=;...
- **Files:** [decomp](../decompiled/FUN_710016f0c0__710016f0c0.c)  [cfg](../decompiled/FUN_710016f0c0__710016f0c0.mmd)
- **Clone hash:** `70f0d397489fd711`

```c

ulong FUN_710016f0c0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  void *pvVar3;
  int *piVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  ErrorResultVariant *this;
  int aiStack_170 [4];
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [4];
  int aiStack_130 [4];
  int aiStack_120 [4];
  int local_110 [4];
  int local_100 [4];
  undefined4 local_f0 [2];
  undefined1 auStack_e8 [48];
  uint local_b8 [18];
  int aiStack_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar4 = aiStack_170;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
  local_b8[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_b8);
  lVar8 = *(long *)(param_1 + 0x70);
  FUN_710016c060((int *)local_b8);
  FUN_71000bcf30(local_60,(int *)local_b8);
  if (local_60[0] == 0) {
    FUN_710017ddf0(*(long *)(param_1 + 0x70),2);
// ... (97 more lines)
```

## 41. `FUN_71017f3df0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017f3df0`  (offset `0x17f3df0`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71017f3df0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** NetworkRuleMessage
- **Files:** [decomp](../decompiled/FUN_71017f3df0__71017f3df0.c)  [cfg](../decompiled/FUN_71017f3df0__71017f3df0.mmd)
- **Clone hash:** `b9d906abe042d097`

```c

char * FUN_71017f3df0(void)

{
  return "NetworkRuleMessage";
}


```

## 42. `FUN_710016e450`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016e450`  (offset `0x16e450`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710016e450(void)`
- **Size / BBs / Incoming:** 744 bytes / 20 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::WaitCreateNetworkEvent
- **Callees:** FUN_71000b41f0;FUN_71000b4260;FUN_71000b63d0;FUN_71000bce50;FUN_71000bcf30;FUN_710016af60;FUN_710016b2f0;FUN_710016c000;FUN_710016c120;FUN_710016da00;FUN_710016db50;FUN_710016e740;FUN_7100173100;FUN_7100173820;FUN_710017ddf0;FUN_71001820f0;...
- **Files:** [decomp](../decompiled/FUN_710016e450__710016e450.c)  [cfg](../decompiled/FUN_710016e450__710016e450.mmd)
- **Clone hash:** `b1d886e5e1c4531a`

```c

ulong FUN_710016e450(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined4 *puVar11;
  long lVar12;
  int aiStack_160 [4];
  int aiStack_150 [4];
  int aiStack_140 [4];
  int aiStack_130 [4];
  int aiStack_120 [4];
  int aiStack_110 [4];
  undefined4 auStack_100 [2];
  UserConfig aUStack_f8 [48];
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined2 uStack_6c;
  int aiStack_60 [4];
  int aiStack_50 [4];
  
  piVar7 = aiStack_160;
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  uStack_c8 = (ulong)uStack_c8._4_4_ << 0x20;
// ... (97 more lines)
```

## 43. `FUN_7100172eb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100172eb0`  (offset `0x172eb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100172eb0(int * param_1, long * param_2, undefined4 * param_3)`
- **Size / BBs / Incoming:** 200 bytes / 4 bb / 1 incoming refs
- **Match values:** Network
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

## 44. `FUN_710016fbb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710016fbb0`  (offset `0x16fbb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710016fbb0(int * param_1, long * param_2, undefined4 * param_3, long * param_4)`
- **Size / BBs / Incoming:** 268 bytes / 7 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** LdnBackgroundProcessJob::ScanNetworkPrivate
- **Callers:** FUN_7100171330
- **Callees:** FUN_71000bce50;FUN_71000bcf30;FUN_710016eb70;FUN_7100172d30;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710016fbb0__710016fbb0.c)  [cfg](../decompiled/FUN_710016fbb0__710016fbb0.mmd)
- **Clone hash:** `96b63ef767de0c90`

```c

void FUN_710016fbb0(int *param_1,long *param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  int *piVar2;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  lVar1 = param_4[1];
  param_2[0x52] = *param_4;
  param_2[0x53] = lVar1;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  FUN_710016eb70(local_58,(long)param_2);
  FUN_71000bcf30(local_48,local_58);
  if (local_48[0] == 0) {
    FUN_7100172d30(local_58,param_2,param_3,7);
    FUN_71000bcf30(local_48,local_58);
    if (local_48[0] == 0) {
      param_2[8] = (long)"LdnBackgroundProcessJob::ScanNetworkPrivate";
      param_2[6] = (long)FUN_710016fcc0;
      param_2[7] = 0;
      local_58[0] = 0;
    }
    else {
      local_58[0] = 0x10c08;
    }
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar2 = local_58;
  }
  else {
    piVar2 = local_48;
// ... (5 more lines)
```

## 45. `FUN_7100183f80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100183f80`  (offset `0x183f80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100183f80(void)`
- **Size / BBs / Incoming:** 280 bytes / 17 bb / 2 incoming refs
- **Match values:** Network
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

## 46. `FUN_71017f3f40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017f3f40`  (offset `0x17f3f40`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71017f3f40(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** NetworkEntryMessage
- **Files:** [decomp](../decompiled/FUN_71017f3f40__71017f3f40.c)  [cfg](../decompiled/FUN_71017f3f40__71017f3f40.mmd)
- **Clone hash:** `0f7f2caf19d1377b`

```c

char * FUN_71017f3f40(void)

{
  return "NetworkEntryMessage";
}


```

## 47. `FUN_710017aba0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710017aba0`  (offset `0x17aba0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710017aba0(long param_1)`
- **Size / BBs / Incoming:** 128 bytes / 1 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LocalMatchCreateSessionJob::CompleteFailure;LocalMatchCreateSessionJob::WaitDestroyLocalNetwork
- **Files:** [decomp](../decompiled/FUN_710017aba0__710017aba0.c)  [cfg](../decompiled/FUN_710017aba0__710017aba0.mmd)
- **Clone hash:** `c1079135e48ab355`

```c

undefined8 FUN_710017aba0(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int local_30 [4];
  
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x70))
            (local_30,*(long **)(param_1 + 0xa0),param_1 + 0x60,0);
  bVar4 = local_30[0] != 0;
  pcVar1 = FUN_710017ac70;
  if (bVar4) {
    pcVar1 = FUN_710017ac20;
  }
  pcVar2 = "LocalMatchCreateSessionJob::WaitDestroyLocalNetwork";
  if (bVar4) {
    pcVar2 = "LocalMatchCreateSessionJob::CompleteFailure";
  }
  *(code **)(param_1 + 0x30) = pcVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  uVar3 = 5;
  if (bVar4) {
    uVar3 = 0;
  }
  return uVar3;
}


```

## 48. `FUN_71001707a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001707a0`  (offset `0x1707a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001707a0(long param_1)`
- **Size / BBs / Incoming:** 132 bytes / 3 bb / 2 incoming refs
- **Match values:** Network
- **Strings touched:** LdnHostMigrationJob::ConnectNetwork
- **Callees:** FUN_71000bb5d0;FUN_71000bb680
- **Files:** [decomp](../decompiled/FUN_71001707a0__71001707a0.c)  [cfg](../decompiled/FUN_71001707a0__71001707a0.mmd)
- **Clone hash:** `3eca7e86aa47c51d`

```c

undefined8 FUN_71001707a0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  local_28 = 0;
  FUN_71000bb5d0(&local_28);
  lVar3 = local_28 - *(long *)(param_1 + 0x98);
  plVar2 = FUN_71000bb680();
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = lVar3 / *plVar2;
  }
  if (lVar1 < *(int *)(param_1 + 0x88)) {
    return 5;
  }
  *(undefined8 *)(param_1 + 0x30) = 0x50;
  *(undefined8 *)(param_1 + 0x38) = 1;
  *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::ConnectNetwork";
  return 0;
}


```

## 49. `FUN_7100175d60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100175d60`  (offset `0x175d60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100175d60(int * param_1, long param_2, undefined4 * param_3, byte param_4)`
- **Size / BBs / Incoming:** 172 bytes / 1 bb / 1 incoming refs
- **Match values:** Network
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

## 50. `FUN_71016a65f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71016a65f0`  (offset `0x16a65f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71016a65f0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 864 bytes / 44 bb / 1 incoming refs
- **Match values:** Network
- **Strings touched:** Network
- **Callees:** FUN_71003cb050;FUN_7101696e80;FUN_710392e290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::std::recursive_mutex::lock;<EXTERNAL>::std::recursive_mutex::unlock;<EXTERNAL>::std::recursive_mutex::recursive_mutex
- **Files:** [decomp](../decompiled/FUN_71016a65f0__71016a65f0.c)  [cfg](../decompiled/FUN_71016a65f0__71016a65f0.mmd)
- **Clone hash:** `abfabe3612ec885c`

```c

void FUN_71016a65f0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long ****pppplVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long ***local_80;
  code *local_78;
  undefined8 uStack_70;
  long local_68;
  long *local_60;
  undefined4 local_44;
  
  lVar9 = DAT_710533a0a0;
  pppplVar5 = &local_80;
  plVar3 = (long *)FUN_710392e290(0x10,0x28,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_80 = (long ***)&DAT_00000028;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x28,pppplVar5,param_4,param_5,param_6,param_7,
                                          param_8), plVar3 != (long *)0x0)) goto LAB_71016a6670;
    }
    plVar3 = (long *)0x0;
  }
LAB_71016a6670:
  *(undefined4 *)(plVar3 + 1) = 1;
  *plVar3 = (long)&PTR_FUN_7105083120;
// ... (134 more lines)
```

