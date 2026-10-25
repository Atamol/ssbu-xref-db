# register (funcs=40, hits=69)

Top 50 functions by hit count

## 1. `FUN_71037f8180`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Register
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_71037f8180__71037f8180.c)  [cfg](../decompiled/FUN_71037f8180__71037f8180.mmd)
- **Clone hash:** `5e5bcf3c984ab2cc`

```c

void FUN_71037f8180(undefined8 param_1,undefined *param_2)

{
  DAT_71059408e8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71059408f0 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71059408f8 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_7105940900 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_7105940908 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_7105940910 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_7105940918 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_7105940920 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_7105940928 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_7105940930 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_7105940938 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_7105940940 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_7105940948 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_7105940950 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_7105940958 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_7105940960 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_7105940968 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_7105940970 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_7105940978 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_7105940980 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_7105940988 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_7105940990 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_7105940998 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71059409a0 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71059409a8 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71059409b0 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71059409b8 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71059409c0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71059409c8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71059409d0 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71059409d8 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71059409e0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71059409e8 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71059409f0 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71059409f8 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_7105940a00 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 2. `FUN_7100033a40`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Register
- **Strings touched:** nvnDeviceBuilderSetDefaults;nvnDeviceBuilderSetFlags;nvnDeviceBuilderGetFlags;nvnDeviceInitialize;nvnDeviceFinalize;nvnDeviceSetDebugLabel;nvnDeviceGetProcAddress;nvnDeviceGetInteger;nvnDeviceGetCurrentTimestampInNanoseconds;nvnDeviceSetIntermediateShaderCache;nvnDeviceGetTextureHandle;nvnDeviceGetTexelFetchHandle;nvnDeviceGetImageHandle;nvnDeviceInstallDebugCallback;nvnDeviceGenerateDebugDomainId;chara/chara_4/chara_4_;nvnDeviceSetWindowOriginMode;nvnDeviceSetDepthMode;nvnDeviceRegisterFastClearColor;nvnDeviceRegisterFastClearColori;nvnDeviceRegisterFastClearColorui;nvnDeviceRegisterFastClearDepth;nvnDeviceGetWindowOriginMode;nvnDeviceGetDepthMode;nvnDeviceGetTimestampInNanoseconds;nvnDeviceApplyDeferredFinalizes;nvnDeviceFinalizeCommandHandle;nvnDeviceWalkDebugDatabase;nvnDeviceGetSeparateTextureHandle;nvnDeviceGetSeparateSamplerHandle;nvnDeviceIsExternalDebuggerAttached;dys_yoga03_l_03_set;...
- **Callers:** FUN_71037fb770;FUN_71037fe8c0
- **Files:** [decomp](../decompiled/FUN_7100033a40__7100033a40.c)  [cfg](../decompiled/FUN_7100033a40__7100033a40.mmd)
- **Clone hash:** `f1d8c7f827926111`

```c

void FUN_7100033a40(undefined8 param_1,undefined *param_2)

{
  DAT_71052aa310 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetDefaults");
  DAT_71052aa318 = (*(code *)param_2)(param_1,"nvnDeviceBuilderSetFlags");
  DAT_71052aa320 = (*(code *)param_2)(param_1,"nvnDeviceBuilderGetFlags");
  DAT_71052aa328 = (*(code *)param_2)(param_1,"nvnDeviceInitialize");
  DAT_71052aa330 = (*(code *)param_2)(param_1,"nvnDeviceFinalize");
  DAT_71052aa338 = (*(code *)param_2)(param_1,"nvnDeviceSetDebugLabel");
  DAT_71052aa340 = (*(code *)param_2)(param_1,"nvnDeviceGetProcAddress");
  DAT_71052aa348 = (*(code *)param_2)(param_1,"nvnDeviceGetInteger");
  DAT_71052aa350 = (*(code *)param_2)(param_1,"nvnDeviceGetCurrentTimestampInNanoseconds");
  DAT_71052aa358 = (*(code *)param_2)(param_1,"nvnDeviceSetIntermediateShaderCache");
  DAT_71052aa360 = (*(code *)param_2)(param_1,"nvnDeviceGetTextureHandle");
  DAT_71052aa368 = (*(code *)param_2)(param_1,"nvnDeviceGetTexelFetchHandle");
  DAT_71052aa370 = (*(code *)param_2)(param_1,"nvnDeviceGetImageHandle");
  DAT_71052aa378 = (*(code *)param_2)(param_1,"nvnDeviceInstallDebugCallback");
  DAT_71052aa380 = (*(code *)param_2)(param_1,"nvnDeviceGenerateDebugDomainId");
  DAT_71052aa388 = (*(code *)param_2)(param_1,"nvnDeviceSetWindowOriginMode");
  DAT_71052aa390 = (*(code *)param_2)(param_1,"nvnDeviceSetDepthMode");
  DAT_71052aa398 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColor");
  DAT_71052aa3a0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColori");
  DAT_71052aa3a8 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearColorui");
  DAT_71052aa3b0 = (*(code *)param_2)(param_1,"nvnDeviceRegisterFastClearDepth");
  DAT_71052aa3b8 = (*(code *)param_2)(param_1,"nvnDeviceGetWindowOriginMode");
  DAT_71052aa3c0 = (*(code *)param_2)(param_1,"nvnDeviceGetDepthMode");
  DAT_71052aa3c8 = (*(code *)param_2)(param_1,"nvnDeviceGetTimestampInNanoseconds");
  DAT_71052aa3d0 = (*(code *)param_2)(param_1,"nvnDeviceApplyDeferredFinalizes");
  DAT_71052aa3d8 = (*(code *)param_2)(param_1,"nvnDeviceFinalizeCommandHandle");
  DAT_71052aa3e0 = (*(code *)param_2)(param_1,"nvnDeviceWalkDebugDatabase");
  DAT_71052aa3e8 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateTextureHandle");
  DAT_71052aa3f0 = (*(code *)param_2)(param_1,"nvnDeviceGetSeparateSamplerHandle");
  DAT_71052aa3f8 = (*(code *)param_2)(param_1,"nvnDeviceIsExternalDebuggerAttached");
  DAT_71052aa400 = (*(code *)param_2)(param_1,"nvnQueueGetError");
  DAT_71052aa408 = (*(code *)param_2)(param_1,"nvnQueueGetTotalCommandMemoryUsed");
  DAT_71052aa410 = (*(code *)param_2)(param_1,"nvnQueueGetTotalControlMemoryUsed");
  DAT_71052aa418 = (*(code *)param_2)(param_1,"nvnQueueGetTotalComputeMemoryUsed");
  DAT_71052aa420 = (*(code *)param_2)(param_1,"nvnQueueResetMemoryUsageCounts");
  DAT_71052aa428 = (*(code *)param_2)(param_1,"nvnQueueBuilderSetDevice");
// ... (483 more lines)
```

## 3. `FUN_71019d0fb0`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019d0fb0`  (offset `0x19d0fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019d0fb0(long * * param_1, long * param_2)`
- **Size / BBs / Incoming:** 11700 bytes / 516 bb / 1 incoming refs
- **Match values:** REGISTER;register
- **Strings touched:** scroll;scr_sort;plate_side;set_parts_submenu;submenu_item_01;set_det_column_0%d;category_0%d;value_txt;value_color;color_00;btn_keyhelp_00;set_txt_icon;mii_select_scroller;sub_menu;sort_window;sort_window_facade;set_detail;is_max_num;is_full;is_favorite_fighter;switch_favorite_fighter;post_fighter;is_finished_post;is_succeeded_post;delete_fighter;get_no_delete_popup_id;is_parallel_matching;reload_fighter;sort_data_id_list;backup_list_selected_id;gauge_parts_on;select_list_from_backup_id;...
- **Callers:** FUN_710180f330
- **Callees:** FUN_71000001c0;std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_7101764000;FUN_71017bd310;FUN_71017bd3e0;FUN_71019c1c50;FUN_71019d6770;FUN_71019d6830;FUN_71019dc4e0;FUN_71019dc640;FUN_71019dc780;FUN_71019dc900;FUN_71019e0910;FUN_7101ccce30;FUN_71032cb040;FUN_71032ccb70;...
- **Files:** [decomp](../decompiled/FUN_71019d0fb0__71019d0fb0.c)  [cfg](../decompiled/FUN_71019d0fb0__71019d0fb0.mmd)
- **Clone hash:** `fb467ceec23953e7`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71019d0fb0(long **param_1,long *param_2)

{
  int *piVar1;
  long **pplVar2;
  undefined4 *puVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  long *****ppppplVar9;
  uint *puVar10;
  ushort *puVar11;
  uint *puVar12;
  long *****ppppplVar13;
  long **pplVar14;
  bool bVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  long ***ppplVar19;
  byte ***pppbVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long ****pppplVar21;
  undefined **ppuVar22;
  char *pcVar23;
  byte ****ppppbVar24;
  byte ****ppppbVar25;
  long ****pppplVar26;
// ... (2174 more lines)
```

## 4. `FUN_7100106350`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106350`  (offset `0x106350`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100106350(void)`
- **Size / BBs / Incoming:** 272 bytes / 9 bb / 2 incoming refs
- **Match values:** register
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

## 5. `FUN_7103908c40`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103908c40`  (offset `0x3908c40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103908c40(uint * param_1)`
- **Size / BBs / Incoming:** 6936 bytes / 313 bb / 10 incoming refs
- **Match values:** register
- **Strings touched:** (for index);NODE_PRE_REFRACT_BLEND;(for limit);chara/chara_4/chara_4_;(for step);(for generator);(for state);(for control);labels/gotos;label '%s' already defined on line %d;C levels;'=' or 'in' expected;control structure too long;%s expected (to close %s at line %d);syntax error;function or expression needs too many registers
- **Callers:** FUN_71039086e0;FUN_7103908c40;FUN_710390b320;FUN_710390c400;FUN_710390ccd0
- **Callees:** FUN_71039059a0;FUN_7103908660;FUN_7103908c40;FUN_710390a760;FUN_710390ab60;FUN_710390b110;FUN_710390b290;FUN_710390b2a0;FUN_710390b320;FUN_710390b770;FUN_710390c280;FUN_710390c400;FUN_710390c8b0;FUN_710390ca30;FUN_710390cb70;FUN_710390ccd0;...
- **Files:** [decomp](../decompiled/FUN_7103908c40__7103908c40.c)  [cfg](../decompiled/FUN_7103908c40__7103908c40.mmd)
- **Clone hash:** `a0d28a51997a547f`

```c

void FUN_7103908c40(uint *param_1)

{
  ushort uVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  uint *puVar24;
  float *pfVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  byte local_a0;
  char local_9f;
  undefined1 local_9e;
// ... (1110 more lines)
```

## 6. `FUN_710390b770`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390b770`  (offset `0x390b770`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710390b770(uint * param_1, long * param_2, int param_3)`
- **Size / BBs / Incoming:** 2828 bytes / 173 bb / 26 incoming refs
- **Match values:** register
- **Strings touched:** C levels;control structure too long;function or expression needs too many registers;cannot use '...' outside a vararg function
- **Callers:** FUN_7103908c40;FUN_710390b320;FUN_710390b770;FUN_710390d5f0;FUN_710390db70;FUN_710390df10;FUN_710390e2b0;FUN_710390e8e0
- **Callees:** FUN_710390b2a0;FUN_710390b770;FUN_710390ccd0;FUN_710390d5f0;FUN_710390e2b0;FUN_710390eb80;FUN_710390efb0;FUN_7103913040;FUN_71039133b0;FUN_7103913650;FUN_7103913810;FUN_7103913ee0;FUN_71039140b0;FUN_71039141b0;FUN_7103914420;FUN_7103914810;...
- **Files:** [decomp](../decompiled/FUN_710390b770__710390b770.c)  [cfg](../decompiled/FUN_710390b770__710390b770.mmd)
- **Clone hash:** `5ee4ada094960b73`

```c

ulong FUN_710390b770(uint *param_1,long *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar1 = *(short *)(*(long *)(param_1 + 0xe) + 0xc6) + 1;
  *(ushort *)(*(long *)(param_1 + 0xe) + 0xc6) = uVar1;
  if (200 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_710390b2a0(*(long **)(param_1 + 0xc));
  }
  uVar5 = param_1[4];
  if ((int)uVar5 < 0x7e) {
    if (uVar5 == 0x23) {
      iVar12 = 3;
    }
    else {
      if (uVar5 != 0x2d) {
// ... (606 more lines)
```

## 7. `FUN_7100105b50`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105b50`  (offset `0x105b50`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7100105b50(long param_1)`
- **Size / BBs / Incoming:** 1112 bytes / 32 bb / 2 incoming refs
- **Match values:** register
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

## 8. `FUN_710390d5f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390d5f0`  (offset `0x390d5f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390d5f0(uint * param_1, long * param_2)`
- **Size / BBs / Incoming:** 1400 bytes / 66 bb / 3 incoming refs
- **Match values:** register
- **Strings touched:** function or expression needs too many registers;unexpected symbol;%s expected (to close %s at line %d)
- **Callers:** FUN_7103908c40;FUN_710390b770;FUN_710390db70
- **Callees:** FUN_7103908660;FUN_710390a760;FUN_710390b770;FUN_710390ca30;FUN_710390cb70;FUN_710390df10;FUN_710390eb20;FUN_710390eb80;FUN_710390efb0;FUN_7103913040;FUN_71039133b0;FUN_7103913650;FUN_7103913770;FUN_71039140b0;FUN_71039141b0
- **Files:** [decomp](../decompiled/FUN_710390d5f0__710390d5f0.c)  [cfg](../decompiled/FUN_710390d5f0__710390d5f0.mmd)
- **Clone hash:** `8b8eafb0e8e78819`

```c

void FUN_710390d5f0(uint *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long *plVar9;
  float *pfVar10;
  long *plVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long local_78;
  uint local_70;
  undefined8 local_68;
  
  plVar9 = *(long **)(param_1 + 0xc);
  uVar1 = param_1[1];
  if (param_1[4] == 0x124) {
    lVar14 = *(long *)(param_1 + 6);
    param_1[2] = uVar1;
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar6;
      plVar11 = *(long **)(param_1 + 0xc);
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
      plVar11 = plVar9;
    }
    iVar3 = FUN_710390ca30(plVar11,lVar14,(int *)param_2,1);
    if (iVar3 == 0) {
// ... (190 more lines)
```

## 9. `FUN_7100120640`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120640`  (offset `0x120640`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120640(void)`
- **Size / BBs / Incoming:** 188 bytes / 4 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::UnregisterGathering
- **Callees:** FUN_71000bcf30;FUN_710011bb20;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120640__7100120640.c)  [cfg](../decompiled/FUN_7100120640__7100120640.mmd)
- **Clone hash:** `0a3daf2c8f756ac2`

```c

undefined8 FUN_7100120640(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    pcVar3 = FUN_71001429b0;
    uVar2 = 0;
    pcVar4 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
    FUN_710011bb20(*(long *)(param_1 + 0x178));
    pcVar3 = FUN_7100120700;
    uVar2 = 5;
    pcVar4 = "LanMatchRandomMatchmakeJob::UnregisterGathering";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}


```

## 10. `FUN_710390db70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390db70`  (offset `0x390db70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390db70(uint * param_1, long * param_2, int param_3)`
- **Size / BBs / Incoming:** 920 bytes / 48 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** syntax error;C levels;function or expression needs too many registers
- **Callers:** FUN_7103908c40;FUN_710390db70
- **Callees:** FUN_710390a760;FUN_710390b2a0;FUN_710390b770;FUN_710390c8b0;FUN_710390d5f0;FUN_710390db70;FUN_710390eb80;FUN_710390efb0;FUN_7103913040;FUN_7103913770;FUN_7103914300
- **Files:** [decomp](../decompiled/FUN_710390db70__710390db70.c)  [cfg](../decompiled/FUN_710390db70__710390db70.mmd)
- **Clone hash:** `a07c07a952672b0f`

```c

void FUN_710390db70(uint *param_1,long *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 local_80;
  uint local_78 [2];
  undefined8 local_70;
  
  plVar7 = param_2 + 1;
  if (2 < (int)*plVar7 - 8U) {
                    /* WARNING: Subroutine does not return */
    FUN_710390eb80((long)param_1,"syntax error");
  }
  if (param_1[4] == 0x3d) {
    puVar10 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar10 == 0x121) {
      uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar4;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390b770(param_1,&local_80,0);
    puVar1 = param_1 + 0xc;
    if (param_1[4] == 0x2c) {
      iVar8 = 1;
      do {
// ... (108 more lines)
```

## 11. `FUN_71001de000`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001de000`  (offset `0x1de000`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001de000(void)`
- **Size / BBs / Incoming:** 704 bytes / 13 bb / 1 incoming refs
- **Match values:** Register
- **Strings touched:** CallContextRegisterCheckExpiredCalls;ConnectionEncoding
- **Callees:** FUN_71000001c0;FUN_71001b0350;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release
- **Files:** [decomp](../decompiled/FUN_71001de000__71001de000.c)  [cfg](../decompiled/FUN_71001de000__71001de000.mmd)
- **Clone hash:** `97a5b9ec516fce62`

```c

void FUN_71001de000(void)

{
  int iVar1;
  
  DAT_71052af0b0 = &PTR_FUN_7104f566e0;
  DAT_71052af0b8 = 0;
  DAT_71052af0c0 = 0;
  DAT_71052af0c8 = "CallContextRegisterCheckExpiredCalls";
  DAT_71052af0d4 = 0;
  DAT_71052af0d0 = 100;
  if (((DAT_71052af230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052af230), iVar1 != 0)) {
    DAT_71052af238 = &PTR_FUN_7104f57088;
    DAT_71052af240 = (undefined8 *)0x0;
    DAT_71052af248 = (undefined8 *)0x0;
    DAT_71052af250 = (undefined8 *)0x0;
    DAT_71052af258 = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71052af230);
  }
  if (DAT_71052af240 == DAT_71052af250) {
    DAT_71052af240 = &DAT_71052af0b0;
  }
  else {
    *(undefined ****)((long)DAT_71052af248 + 8) = &DAT_71052af0b0;
    DAT_71052af0c0 = (long)DAT_71052af248;
  }
  DAT_71052af258 = DAT_71052af258 + 1;
  DAT_71052af248 = &DAT_71052af0b0;
  FUN_71000001c0();
  DAT_71052af108 = 0;
  DAT_71052af0e8 = &PTR_FUN_7104f566e0;
  DAT_71052af0f0 = 0;
  DAT_71052af10c = 0;
  DAT_71052af0f8 = (undefined8 *)0x0;
  DAT_71052af100 = "ConnectionEncoding";
  if (((DAT_71052af230 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052af230), iVar1 != 0)) {
    DAT_71052af238 = &PTR_FUN_7104f57088;
    DAT_71052af240 = (undefined8 *)0x0;
// ... (47 more lines)
```

## 12. `FUN_7100105fd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105fd0`  (offset `0x105fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105fd0(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering
- **Callees:** FUN_71000bcf30
- **Files:** [decomp](../decompiled/FUN_7100105fd0__7100105fd0.c)  [cfg](../decompiled/FUN_7100105fd0__7100105fd0.mmd)
- **Clone hash:** `801f1cc0b6166b99`

```c

undefined8 FUN_7100105fd0(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0x90),param_2);
  *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::UnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_7100105660;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 13. `FUN_7100105660`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105660`  (offset `0x105660`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105660(void)`
- **Size / BBs / Incoming:** 320 bytes / 12 bb / 7 incoming refs
- **Match values:** register
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

## 14. `FUN_7103913580`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103913580`  (offset `0x3913580`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103913580(long * param_1, int * param_2, int param_3)`
- **Size / BBs / Incoming:** 208 bytes / 9 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** function or expression needs too many registers
- **Callers:** FUN_710390c8b0
- **Callees:** FUN_710390eb80
- **Files:** [decomp](../decompiled/FUN_7103913580__7103913580.c)  [cfg](../decompiled/FUN_7103913580__7103913580.mmd)
- **Clone hash:** `00a8262cf888cdfd`

```c

void FUN_7103913580(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  
  if (*param_2 == 0xe) {
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         param_3 * 0x800000 + 0x800000U |
         *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) & 0x7fffff;
    uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         uVar1 & 0xffffc000 | uVar1 & 0x3f | (uint)*(byte *)((long)param_1 + 0x3c) << 6;
    bVar2 = *(byte *)((long)param_1 + 0x3c);
    cVar3 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80(param_1[2],"function or expression needs too many registers");
      }
      *(char *)(*param_1 + 0xc) = cVar3;
      cVar3 = *(char *)((long)param_1 + 0x3c) + '\x01';
    }
    *(char *)((long)param_1 + 0x3c) = cVar3;
  }
  else if (*param_2 == 0xd) {
    uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         uVar1 & 0xff800000 | uVar1 & 0x3fff | (param_3 * 0x4000 + 0x4000U >> 0xe & 0x1ff) << 0xe;
    return;
  }
  return;
}


```

## 15. `FUN_7100106330`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106330`  (offset `0x106330`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100106330(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** NexMatchDestroySessionJob::UnregisterBufferMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_7100106330__7100106330.c)  [cfg](../decompiled/FUN_7100106330__7100106330.mmd)
- **Clone hash:** `d754697c8b41173c`

```c

void FUN_7100106330(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_7100106350;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchDestroySessionJob::UnregisterBufferMatchmakeSession";
  return;
}


```

## 16. `FUN_7100105ad0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100105ad0`  (offset `0x105ad0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100105ad0(void)`
- **Size / BBs / Incoming:** 128 bytes / 4 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;NexMatchCreateSessionJob::WaitStartNatSession
- **Callees:** FUN_71000bcf30;FUN_71000ed7a0
- **Files:** [decomp](../decompiled/FUN_7100105ad0__7100105ad0.c)  [cfg](../decompiled/FUN_7100105ad0__7100105ad0.mmd)
- **Clone hash:** `0db1756a6b94f75e`

```c

undefined8 FUN_7100105ad0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int aiStack_30 [4];
  
  FUN_71000ed7a0(aiStack_30);
  if (aiStack_30[0] == 0) {
    pcVar2 = FUN_7100105b50;
    pcVar1 = "NexMatchCreateSessionJob::WaitStartNatSession";
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_30);
    pcVar2 = FUN_7100105660;
    pcVar1 = "NexMatchCreateSessionJob::UnregisterGathering";
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 5;
}


```

## 17. `FUN_71000a4d90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000a4d90`  (offset `0xa4d90`)
- **Namespace:** `Global`
- **Signature:** `bool __cdecl FUN_71000a4d90(long param_1, long * param_2, long param_3, int param_4, byte param_5, undefined8 param_6)`
- **Size / BBs / Incoming:** 248 bytes / 5 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** vfx system deleted the registered binary. resource id : %d.

- **Callers:** FUN_710355fea0
- **Callees:** FUN_7100093660;FUN_7100099560;FUN_7100099da0
- **Files:** [decomp](../decompiled/FUN_71000a4d90__71000a4d90.c)  [cfg](../decompiled/FUN_71000a4d90__71000a4d90.mmd)
- **Clone hash:** `49afdbccb5725945`

```c

bool FUN_71000a4d90(long param_1,long *param_2,long param_3,int param_4,byte param_5,
                   undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_4 * 8);
  if (lVar1 != 0) {
    FUN_7100099da0(lVar1,(long)param_2);
    lVar1 = (long)param_4 * 8;
    (**(code **)(*param_2 + 0x18))(param_2,*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1));
    *(undefined8 *)(*(long *)(param_1 + 0x98) + lVar1) = 0;
    FUN_7100093660();
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x540,0x80);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_7100099560(puVar2,*(undefined8 *)(param_1 + 0x38),param_2,param_3,0,0,0,param_4,param_1,
                   param_5 & 1,param_6);
    *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)param_4 * 8) = puVar2;
  }
  return puVar2 != (undefined8 *)0x0;
}


```

## 18. `FUN_710011f5f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f5f0`  (offset `0x11f5f0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011f5f0(void)`
- **Size / BBs / Incoming:** 64 bytes / 1 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** NODE_PRE_REFRACT_BLEND;LanMatchCreateSessionJob::UnregisterGathering
- **Callees:** FUN_71000bcf30
- **Files:** [decomp](../decompiled/FUN_710011f5f0__710011f5f0.c)  [cfg](../decompiled/FUN_710011f5f0__710011f5f0.mmd)
- **Clone hash:** `18b134e833ab1252`

```c

undefined8 FUN_710011f5f0(long param_1,int *param_2)

{
  FUN_71000bcf30((int *)(param_1 + 0xa0),param_2);
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::UnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f630;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}


```

## 19. `FUN_7100106590`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106590`  (offset `0x106590`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7100106590(long param_1)`
- **Size / BBs / Incoming:** 288 bytes / 10 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** nex::NexMatchDestroySessionJob::SendMonitoringData;NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
- **Callees:** FUN_71000bce50;FUN_7100146ba0;FUN_7100149290;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100106590__7100106590.c)  [cfg](../decompiled/FUN_7100106590__7100106590.mmd)
- **Clone hash:** `62ecf616efdf73ee`

```c

undefined8 FUN_7100106590(long param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined4 local_48 [4];
  int aiStack_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    pcVar3 = FUN_710013e030;
    pcVar4 = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    break;
  default:
    uVar2 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x78))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    FUN_7100149290(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) == 3) {
      FUN_71000bce50(aiStack_38,(int *)(param_1 + 100));
      local_48[0] = 0x6c4b;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    }
    pcVar3 = FUN_7100106460;
    pcVar4 = "NexMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
// ... (7 more lines)
```

## 20. `FUN_71001dca80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001dca80`  (offset `0x1dca80`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001dca80(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Register
- **Strings touched:** CallContextRegister
- **Files:** [decomp](../decompiled/FUN_71001dca80__71001dca80.c)  [cfg](../decompiled/FUN_71001dca80__71001dca80.mmd)
- **Clone hash:** `b56db407ddb7f944`

```c

char * FUN_71001dca80(void)

{
  return "CallContextRegister";
}


```

## 21. `FUN_71001057a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001057a0`  (offset `0x1057a0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001057a0(long param_1)`
- **Size / BBs / Incoming:** 816 bytes / 28 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::UnregisterGathering;NexMatchCreateSessionJob::StartNatSession
- **Callees:** FUN_71000bb680;FUN_71000bcf30;FUN_71000ecfb0;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001057a0__71001057a0.c)  [cfg](../decompiled/FUN_71001057a0__71001057a0.mmd)
- **Clone hash:** `a2673036977c05ad`

```c

undefined8 FUN_71001057a0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  int local_58 [4];
  undefined4 local_48 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    local_58[0] = 0xc406;
    break;
  case 6:
    local_58[0] = 0xa471;
    break;
  case 7:
    local_58[0] = 0xc420;
    break;
  case 8:
    local_58[0] = 0xc421;
    break;
  default:
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0xc0)) {
        plVar9 = *(long **)(DAT_71052adb38 + 8);
        plVar5 = (long *)FUN_71000ecfb0((long)plVar9,0);
        if (plVar5 == (long *)0x0) {
          uVar3 = 1;
          plVar5 = (long *)FUN_71000ecfb0((long)plVar9,1);
// ... (81 more lines)
```

## 22. `FUN_710390df10`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390df10`  (offset `0x390df10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390df10(uint * param_1, undefined4 * param_2, uint param_3)`
- **Size / BBs / Incoming:** 920 bytes / 41 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** function arguments expected;%s expected (to close %s at line %d);function or expression needs too many registers
- **Callers:** FUN_710390d5f0
- **Callees:** FUN_7103908660;FUN_710390a760;FUN_710390b770;FUN_710390e2b0;FUN_710390eb20;FUN_710390eb80;FUN_710390efb0;FUN_7103913040;FUN_71039133b0;FUN_7103913770
- **Files:** [decomp](../decompiled/FUN_710390df10__710390df10.c)  [cfg](../decompiled/FUN_710390df10__710390df10.mmd)
- **Clone hash:** `e9663636341b7c1d`

```c

void FUN_710390df10(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong local_68;
  uint local_60;
  undefined8 local_58;
  
  uVar6 = param_1[4];
  plVar7 = *(long **)(param_1 + 0xc);
  if (uVar6 == 0x125) {
    local_68 = *(ulong *)(param_1 + 6);
    local_60 = *(byte *)(local_68 + 8) | 0x40;
    uVar4 = FUN_71039133b0(plVar7,(float *)&local_68,(float *)&local_68);
    local_58 = 0xffffffffffffffff;
    local_68 = CONCAT44(local_68._4_4_,4);
    local_60 = (uint)uVar4;
    param_1[2] = param_1[1];
    if (param_1[8] != 0x121) {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      goto LAB_710390e188;
    }
  }
  else {
    if (uVar6 == 0x7b) {
      FUN_710390e2b0(param_1,(int *)&local_68);
      goto LAB_710390e190;
    }
    if (uVar6 != 0x28) {
                    /* WARNING: Subroutine does not return */
// ... (100 more lines)
```

## 23. `FUN_7102087180`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7102087180`  (offset `0x2087180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7102087180(long param_1)`
- **Size / BBs / Incoming:** 1344 bytes / 4 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** SoundModule;set_position_sub;play_se;play_se_no3d;play_se_pos;play_status_se;stop_status_se;play_sequence;set_play_hit_se_flag;get_play_hit_se_flag;set_no_hit_se;get_no_hit_se;play_hit_se;play_damage_se;play_step;play_step_flippable;play_landing_se;play_down_se;play_fly_voice;set_se_vol;TRANS_A_JUMP_AERIAL;get_se_vol;set_se_vol_db;gauge_parts_on;get_se_vol_db;set_auto_se_pitch;get_auto_se_pitch;set_se_pitch_cent;set_se_pitch_ratio;set_se_pitch_status;set_se_pitch_status_handle;set_continue_se_at_game_finish;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7102087180__7102087180.c)  [cfg](../decompiled/FUN_7102087180__7102087180.mmd)
- **Clone hash:** `f7c4f90e9471f221`

```c

void FUN_7102087180(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"SoundModule",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_position_sub",(long ****)FUN_7102081d40,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se",(long ****)FUN_7102082070,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_no3d",(long ****)FUN_71020824c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_se_pos",(long ****)FUN_7102082760,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_status_se",(long ****)FUN_7102082c30,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"stop_status_se",(long ****)FUN_7102082f80,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_sequence",(long ****)FUN_7102083030,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_play_hit_se_flag",(long ****)FUN_71020832a0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_play_hit_se_flag",(long ****)FUN_7102083410,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_no_hit_se",(long ****)FUN_71020834e0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_no_hit_se",(long ****)FUN_7102083650,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_hit_se",(long ****)FUN_7102083720,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"play_damage_se",(long ****)FUN_7102083990,ppppbVar1,in_x4,in_x5,
// ... (87 more lines)
```

## 24. `FUN_710390e2b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390e2b0`  (offset `0x390e2b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390e2b0(uint * param_1, int * param_2)`
- **Size / BBs / Incoming:** 1580 bytes / 73 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** %s expected (to close %s at line %d);function or expression needs too many registers
- **Callers:** FUN_710390b770;FUN_710390df10
- **Callees:** FUN_7103908660;FUN_710390a760;FUN_710390b770;FUN_710390e8e0;FUN_710390eb20;FUN_710390eb80;FUN_710390efb0;FUN_7103913040;FUN_7103913770
- **Files:** [decomp](../decompiled/FUN_710390e2b0__710390e2b0.c)  [cfg](../decompiled/FUN_710390e2b0__710390e2b0.mmd)
- **Clone hash:** `37fcb742983f7049`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_710390e2b0(uint *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  uint *puVar12;
  long local_90;
  int local_88;
  undefined8 local_80;
  int *local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  
  plVar10 = *(long **)(param_1 + 0xc);
  uVar6 = param_1[1];
  iVar3 = FUN_7103913040(plVar10,0xb);
  local_68 = 0;
  local_70 = 0;
  local_6c = 0;
  param_2[4] = -1;
  param_2[5] = -1;
  *param_2 = 0xc;
  param_2[2] = iVar3;
  local_80 = 0xffffffffffffffff;
  local_90._0_4_ = 0;
  local_88 = 0;
  local_78 = param_2;
// ... (215 more lines)
```

## 25. `FUN_710011f630`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f630`  (offset `0x11f630`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710011f630(long param_1)`
- **Size / BBs / Incoming:** 304 bytes / 5 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure;LanMatchCreateSessionJob::WaitUnregisterGathering
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_710011f630__710011f630.c)  [cfg](../decompiled/FUN_710011f630__710011f630.mmd)
- **Clone hash:** `365d35b30722a88b`

```c

undefined8 FUN_710011f630(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int aiStack_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    local_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
    FUN_71000bcf30((int *)(param_1 + 0xa0),local_38);
    *(code **)(param_1 + 0x30) = FUN_710013d590;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure";
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0xb0) + 0x70))
            (local_38,*(long **)(param_1 + 0xb0),param_1 + 0x60,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (local_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 0xa0));
    FUN_71000b41f0(puVar2,aiStack_48);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(char **)(param_1 + 0x40) = "LanMatchCreateSessionJob::WaitUnregisterGathering";
  *(code **)(param_1 + 0x30) = FUN_710011f760;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}
// ... (1 more lines)
```

## 26. `FUN_71039145e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71039145e0`  (offset `0x39145e0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71039145e0(long * param_1, int * param_2, int param_3)`
- **Size / BBs / Incoming:** 556 bytes / 27 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** control structure too long;function or expression needs too many registers
- **Callers:** FUN_7103914420;FUN_7103914810
- **Callees:** FUN_710390eb80;FUN_7103913040;FUN_7103913ee0
- **Files:** [decomp](../decompiled/FUN_71039145e0__71039145e0.c)  [cfg](../decompiled/FUN_71039145e0__71039145e0.mmd)
- **Clone hash:** `7bfce3dcd33684da`

```c

ulong FUN_71039145e0(long *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  if (*param_2 == 7) {
LAB_710391470c:
    if ((((uint)param_2[2] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
  }
  else {
    if (*param_2 == 0xc) {
      lVar6 = *param_1;
      uVar11 = *(uint *)(*(long *)(lVar6 + 0x38) + (long)param_2[2] * 4);
      if ((uVar11 & 0x3f) == 0x1b) {
        *(int *)(param_1 + 4) = (int)param_1[4] + -1;
        FUN_7103913040(param_1,uVar11 >> 0x11 & 0x7fc0 | (uint)(param_3 == 0) << 0xe | 0x22);
        uVar11 = *(uint *)(param_1 + 5);
        *(undefined4 *)(param_1 + 5) = 0xffffffff;
        uVar5 = FUN_7103913040(param_1,0x7fff801e);
        if (uVar11 == 0xffffffff) {
          return uVar5;
        }
        if ((int)uVar5 == -1) goto LAB_71039147d8;
        lVar6 = *(long *)(*param_1 + 0x38);
        uVar10 = uVar5 & 0xffffffff;
        do {
// ... (66 more lines)
```

## 27. `FUN_710011f970`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f970`  (offset `0x11f970`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011f970(void)`
- **Size / BBs / Incoming:** 28 bytes / 1 bb / 1 incoming refs
- **Match values:** register
- **Strings touched:** LanMatchDestroySessionJob::UnregisterCurrentMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011f970__710011f970.c)  [cfg](../decompiled/FUN_710011f970__710011f970.mmd)
- **Clone hash:** `2e3f831d686af652`

```c

void FUN_710011f970(long param_1)

{
  *(code **)(param_1 + 0x30) = FUN_710011f990;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LanMatchDestroySessionJob::UnregisterCurrentMatchmakeSession";
  return;
}


```

## 28. `FUN_71001d46c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d46c0`  (offset `0x1d46c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d46c0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 1512 bytes / 51 bb / 1 incoming refs
- **Match values:** Register
- **Strings touched:** CallContextRegister;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d5a90
- **Callees:** FUN_71001af850;FUN_71001b0350;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b47e0;FUN_71001b4910;FUN_71001b68a0;FUN_71001b6a50;FUN_71001d4d00;FUN_71001d5f20;FUN_71001d7dd0;FUN_71001d8670;FUN_71001da310;FUN_71001dbef0;FUN_7101717960;...
- **Files:** [decomp](../decompiled/FUN_71001d46c0__71001d46c0.c)  [cfg](../decompiled/FUN_71001d46c0__71001d46c0.mmd)
- **Clone hash:** `0b113fe54b41b51b`

```c

void FUN_71001d46c0(undefined8 *param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 uVar7;
  long lVar8;
  long ***ppplVar9;
  long *plVar10;
  long lVar11;
  long ****pppplVar12;
  uint uVar13;
  long ****pppplVar14;
  ulong local_80;
  long ***local_78;
  long ***local_70;
  long local_68;
  long ***local_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_7104f561e8;
  if (DAT_71052af1d8 == '\0') {
    uVar13 = 0;
  }
  else {
    puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar13 = *puVar1;
// ... (196 more lines)
```

## 29. `FUN_710011f990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710011f990`  (offset `0x11f990`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710011f990(void)`
- **Size / BBs / Incoming:** 152 bytes / 1 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** DestroySessionJob::SendMonitoringData;LanMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession
- **Files:** [decomp](../decompiled/FUN_710011f990__710011f990.c)  [cfg](../decompiled/FUN_710011f990__710011f990.mmd)
- **Clone hash:** `5922025c94d144fb`

```c

undefined8 FUN_710011f990(long param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  long *plVar5;
  int aiStack_30 [4];
  
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar5 + 0x70))
            (aiStack_30,plVar5,param_1 + 0x60,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  bVar4 = aiStack_30[0] != 0;
  pcVar1 = FUN_710011fa30;
  if (bVar4) {
    pcVar1 = FUN_710013e030;
  }
  pcVar2 = "LanMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession";
  if (bVar4) {
    pcVar2 = "DestroySessionJob::SendMonitoringData";
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

## 30. `FUN_710390c400`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390c400`  (offset `0x390c400`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390c400(uint * param_1, int param_2, undefined4 param_3, int param_4, int param_5)`
- **Size / BBs / Incoming:** 1188 bytes / 37 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** function or expression needs too many registers;control structure too long
- **Callers:** FUN_7103908c40
- **Callees:** FUN_7103908c40;FUN_710390a760;FUN_710390ab60;FUN_710390eb80;FUN_710390efb0;FUN_7103913040;FUN_7103913220
- **Files:** [decomp](../decompiled/FUN_710390c400__710390c400.c)  [cfg](../decompiled/FUN_710390c400__710390c400.mmd)
- **Clone hash:** `528be7306c1e81e9`

```c

void FUN_710390c400(uint *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  long local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  
  plVar11 = *(long **)(param_1 + 0xc);
  bVar2 = *(char *)((long)plVar11 + 0x3a) + 3;
  *(byte *)((long)plVar11 + 0x3a) = bVar2;
  *(int *)(*(long *)(*plVar11 + 0x50) +
           (long)*(short *)(**(long **)(plVar11[2] + 0x58) +
                           (long)(int)(*(int *)((long)plVar11 + 0x34) + (uint)bVar2 + -3) * 2) *
           0x10 + 8) = (int)plVar11[4];
  *(int *)(*(long *)(*plVar11 + 0x50) +
           (long)*(short *)(**(long **)(plVar11[2] + 0x58) +
                           (long)(int)((uint)*(byte *)((long)plVar11 + 0x3a) +
                                       *(int *)((long)plVar11 + 0x34) + -2) * 2) * 0x10 + 8) =
       (int)plVar11[4];
// ... (146 more lines)
```

## 31. `FUN_710390ccd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390ccd0`  (offset `0x390ccd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390ccd0(uint * param_1, int * param_2, int param_3, uint param_4)`
- **Size / BBs / Incoming:** 1552 bytes / 58 bb / 3 incoming refs
- **Match values:** register
- **Strings touched:** functions;<name> or '...' expected;function or expression needs too many registers;%s expected (to close %s at line %d)
- **Callers:** FUN_7103908c40;FUN_710390b770
- **Callees:** FUN_71038fe0c0;FUN_71038fe340;FUN_71039059a0;FUN_7103908660;FUN_7103908c40;FUN_710390a760;FUN_710390a7a0;FUN_710390c280;FUN_710390eb20;FUN_710390eb80;FUN_710390eed0;FUN_710390efb0;FUN_7103913040;FUN_7103913770
- **Files:** [decomp](../decompiled/FUN_710390ccd0__710390ccd0.c)  [cfg](../decompiled/FUN_710390ccd0__710390ccd0.mmd)
- **Clone hash:** `e74bb8a2f4ff00e0`

```c

void FUN_710390ccd0(uint *param_1,int *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  int *piVar17;
  uint *puVar18;
  long *plVar19;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  long local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  
// ... (217 more lines)
```

## 32. `FUN_7100106460`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100106460`  (offset `0x106460`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100106460(void)`
- **Size / BBs / Incoming:** 304 bytes / 7 bb / 4 incoming refs
- **Match values:** register
- **Strings touched:** nex::NexMatchDestroySessionJob::SendMonitoringData;chara/chara_4/chara_4_;DestroySessionJob::SendMonitoringData;NexMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession
- **Callees:** FUN_7100146ba0
- **Files:** [decomp](../decompiled/FUN_7100106460__7100106460.c)  [cfg](../decompiled/FUN_7100106460__7100106460.mmd)
- **Clone hash:** `ae040b7ccc96e8c5`

```c

undefined8 FUN_7100106460(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  int aiStack_30 [4];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
  case 6:
  case 7:
  case 8:
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_710013e030;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nex::NexMatchDestroySessionJob::SendMonitoringData";
    return 0;
  }
  if (*(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180) != 0) {
    plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar5 + 0x70))(aiStack_30,plVar5,param_1 + 0x60);
    pcVar1 = "NexMatchDestroySessionJob::WaitUnregisterCurrentMatchmakeSession";
    pcVar3 = FUN_71001066b0;
    if (aiStack_30[0] != 0) {
      pcVar1 = "DestroySessionJob::SendMonitoringData";
      pcVar3 = FUN_710013e030;
    }
    uVar2 = 5;
    if (aiStack_30[0] != 0) {
      uVar2 = 0;
    }
    *(char **)(param_1 + 0x40) = pcVar1;
    *(code **)(param_1 + 0x30) = pcVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return uVar2;
// ... (7 more lines)
```

## 33. `FUN_71001dca90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001dca90`  (offset `0x1dca90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001dca90(void)`
- **Size / BBs / Incoming:** 84 bytes / 3 bb / 1 incoming refs
- **Match values:** Register
- **Strings touched:** CallContextRegister;SystemComponent
- **Callees:** <EXTERNAL>::strcmp
- **Files:** [decomp](../decompiled/FUN_71001dca90__71001dca90.c)  [cfg](../decompiled/FUN_71001dca90__71001dca90.mmd)
- **Clone hash:** `586d2566293801a9`

```c

bool FUN_71001dca90(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("CallContextRegister",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}


```

## 34. `FUN_71001d2570`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d2570`  (offset `0x1d2570`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001d2570(long param_1)`
- **Size / BBs / Incoming:** 672 bytes / 29 bb / 1 incoming refs
- **Match values:** Register
- **Strings touched:** CallContextRegister::CheckExpiredCalls;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d2550
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b47e0;FUN_71001b4910;FUN_71001d8820;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d2570__71001d2570.c)  [cfg](../decompiled/FUN_71001d2570__71001d2570.mmd)
- **Clone hash:** `0b2d0178e36699db`

```c

/* WARNING: Removing unreachable block (ram,0x0071001d26e4) */
/* WARNING: Removing unreachable block (ram,0x0071001d26d0) */

void FUN_71001d2570(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  puVar7 = FUN_71001af850(0x88);
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    local_50[0] = 0;
    local_40 = local_50;
    local_38 = 0x10;
    local_58 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_58,"CallContextRegister::CheckExpiredCalls",-1);
    *puVar7 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined1 *)((long)puVar7 + 0xc) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
// ... (85 more lines)
```

## 35. `FUN_7103913770`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103913770`  (offset `0x3913770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103913770(long * param_1, int * param_2)`
- **Size / BBs / Incoming:** 160 bytes / 9 bb / 16 incoming refs
- **Match values:** register
- **Strings touched:** function or expression needs too many registers
- **Callers:** FUN_7103908c40;FUN_710390c8b0;FUN_710390ccd0;FUN_710390d5f0;FUN_710390db70;FUN_710390df10;FUN_710390e2b0
- **Callees:** FUN_710390eb80;FUN_7103913650;FUN_7103913810
- **Files:** [decomp](../decompiled/FUN_7103913770__7103913770.c)  [cfg](../decompiled/FUN_7103913770__7103913770.mmd)
- **Clone hash:** `e9347c99902d8171`

```c

void FUN_7103913770(long *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  
  FUN_7103913650(param_1,param_2);
  if (((*param_2 == 7) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  bVar2 = bVar1 + 1;
  if (*(byte *)(*param_1 + 0xc) <= bVar1) {
    if (0xfd < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80(param_1[2],"function or expression needs too many registers");
    }
    *(byte *)(*param_1 + 0xc) = bVar2;
    bVar2 = *(char *)((long)param_1 + 0x3c) + 1;
  }
  *(byte *)((long)param_1 + 0x3c) = bVar2;
  FUN_7103913810(param_1,param_2,bVar2 - 1);
  return;
}


```

## 36. `FUN_71001054b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001054b0`  (offset `0x1054b0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71001054b0(void)`
- **Size / BBs / Incoming:** 424 bytes / 16 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** NexMatchCreateSessionJob::UnregisterGathering;nex::NexMatchCreateSessionJob::CompleteFailure;NexMatchCreateSessionJob::WaitNotification
- **Callees:** FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_710013dac0;FUN_7100146ba0;FUN_7100149240;FUN_7100149270;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71001054b0__71001054b0.c)  [cfg](../decompiled/FUN_71001054b0__71001054b0.mmd)
- **Clone hash:** `97bdff533222fedd`

```c

undefined8 FUN_71001054b0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  int aiStack_40 [4];
  int aiStack_28 [2];
  
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
    aiStack_28[0] = 0;
    uVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))(*(long **)(param_1 + 0xa0),aiStack_28)
    ;
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) != 2) {
      if (*(int *)(param_1 + 0x60) != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
// ... (33 more lines)
```

## 37. `FUN_7100120700`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100120700`  (offset `0x120700`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100120700(void)`
- **Size / BBs / Incoming:** 324 bytes / 5 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure;LanMatchRandomMatchmakeJob::WaitUnregisterGathering
- **Callees:** FUN_71000b41f0;FUN_71000bce50;FUN_71000bcf30;FUN_7100146ba0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7100120700__7100120700.c)  [cfg](../decompiled/FUN_7100120700__7100120700.mmd)
- **Clone hash:** `002ed3de86477b88`

```c

undefined8 FUN_7100120700(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_38);
    param_1[6] = (long)FUN_71001429b0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
    return 0;
  }
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar2 + 0x70))
            (aiStack_38,plVar2,param_1 + 0x22,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (aiStack_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_48,(int *)((long)param_1 + 0x6c));
    FUN_71000b41f0(puVar3,aiStack_48);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  param_1[8] = (long)"LanMatchRandomMatchmakeJob::WaitUnregisterGathering";
  param_1[6] = (long)FUN_71001211d0;
// ... (4 more lines)
```

## 38. `FUN_71039140b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71039140b0`  (offset `0x39140b0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_71039140b0(long * param_1, int * param_2)`
- **Size / BBs / Incoming:** 256 bytes / 15 bb / 11 incoming refs
- **Match values:** register
- **Strings touched:** function or expression needs too many registers
- **Callers:** FUN_7103908c40;FUN_710390b770;FUN_710390cb70;FUN_710390d5f0;FUN_710390e8e0;FUN_71039141b0;FUN_7103914300;FUN_7103914980
- **Callees:** FUN_710390eb80;FUN_7103913650;FUN_7103913810
- **Files:** [decomp](../decompiled/FUN_71039140b0__71039140b0.c)  [cfg](../decompiled/FUN_71039140b0__71039140b0.mmd)
- **Clone hash:** `d08c9f27587b4811`

```c

uint FUN_71039140b0(long *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_7103913650(param_1,param_2);
  if (*param_2 == 7) {
    uVar1 = param_2[2];
    if (param_2[4] == param_2[5]) {
      return uVar1;
    }
    if ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar1) {
      FUN_7103913810(param_1,param_2,uVar1);
      goto LAB_7103914178;
    }
  }
  FUN_7103913650(param_1,param_2);
  if (((*param_2 == 7) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  bVar2 = *(byte *)((long)param_1 + 0x3c);
  bVar3 = bVar2 + 1;
  if (*(byte *)(*param_1 + 0xc) <= bVar2) {
    if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80(param_1[2],"function or expression needs too many registers");
    }
    *(byte *)(*param_1 + 0xc) = bVar3;
    bVar3 = *(char *)((long)param_1 + 0x3c) + 1;
  }
  *(byte *)((long)param_1 + 0x3c) = bVar3;
  FUN_7103913810(param_1,param_2,bVar3 - 1);
LAB_7103914178:
  return param_2[2];
}


```

## 39. `FUN_710390c8b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390c8b0`  (offset `0x390c8b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390c8b0(long * param_1, int param_2, int param_3, int * param_4)`
- **Size / BBs / Incoming:** 384 bytes / 22 bb / 3 incoming refs
- **Match values:** register
- **Strings touched:** function or expression needs too many registers
- **Callers:** FUN_7103908c40;FUN_710390db70
- **Callees:** FUN_710390eb80;FUN_7103913040;FUN_7103913580;FUN_7103913770
- **Files:** [decomp](../decompiled/FUN_710390c8b0__710390c8b0.c)  [cfg](../decompiled/FUN_710390c8b0__710390c8b0.mmd)
- **Clone hash:** `17bfcf328e624798`

```c

void FUN_710390c8b0(long *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  long lVar10;
  
  iVar5 = param_2 - param_3;
  if (*param_4 - 0xdU < 2) {
    uVar7 = iVar5 + 1U & ((int)(iVar5 + 1U) >> 0x1f ^ 0xffffffffU);
    FUN_7103913580(param_1,param_4,uVar7);
    if (1 < (int)uVar7) {
      bVar4 = *(byte *)((long)param_1 + 0x3c);
      iVar5 = (uVar7 - 1) + (uint)bVar4;
      if ((int)(uint)*(byte *)(*param_1 + 0xc) < iVar5) {
        if (0xfe < iVar5) {
LAB_710390ca20:
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(param_1[2],"function or expression needs too many registers");
        }
        *(char *)(*param_1 + 0xc) = (char)iVar5;
        bVar4 = *(byte *)((long)param_1 + 0x3c);
      }
      *(byte *)((long)param_1 + 0x3c) = bVar4 + (char)(uVar7 - 1);
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_7103913770(param_1,param_4);
    }
    if (0 < iVar5) {
      bVar4 = *(byte *)((long)param_1 + 0x3c);
// ... (38 more lines)
```

## 40. `FUN_71000a4aa0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000a4aa0`  (offset `0xa4aa0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000a4aa0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 576 bytes / 17 bb / 2 incoming refs
- **Match values:** register
- **Strings touched:** vfx system deleted the registered binary. resource id : %d.
- **Callers:** FUN_71000a4ce0
- **Callees:** FUN_7100031870;FUN_7100033910;FUN_7100088be0;FUN_7100089850;FUN_710008d090;FUN_7100093520;FUN_7100093600;FUN_7100093610;FUN_7100093660;FUN_71000937a0;FUN_7100098f00;FUN_71000992a0;FUN_7100099da0;FUN_710009d970;FUN_71000a0c60;FUN_71000accc0;...
- **Files:** [decomp](../decompiled/FUN_71000a4aa0__71000a4aa0.c)  [cfg](../decompiled/FUN_71000a4aa0__71000a4aa0.mmd)
- **Clone hash:** `435e085aac259132`

```c

void FUN_71000a4aa0(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_7104f4a130;
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_7100089850((undefined8 *)(param_1[0x14] + lVar3));
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x270;
    } while (lVar4 < *(int *)((long)param_1 + 0x6c));
  }
  iVar2 = *(int *)((long)param_1 + 100);
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[0x13] + lVar4 * 8);
      if (lVar3 != 0) {
        FUN_7100099da0(lVar3,0);
        FUN_7100093660();
        iVar2 = *(int *)((long)param_1 + 100);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  FUN_7100088be0((long)(param_1 + 0x299));
  plVar1 = (long *)FUN_7100093610();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1[0x2d6]);
  plVar1 = (long *)FUN_7100093610();
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1[0x2d7]);
  plVar1 = param_1 + 8;
  FUN_71000afa50((undefined1 *)(param_1 + 0x263),param_1[7],plVar1);
  if (0 < *(int *)(param_1 + 0xe)) {
// ... (41 more lines)
```

