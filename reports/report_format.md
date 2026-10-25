# format (funcs=18, hits=83)

Top 50 functions by hit count

## 1. `FUN_7100033a40`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100033a40`  (offset `0x33a40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100033a40(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 14476 bytes / 1 bb / 2 incoming refs
- **Match values:** Format
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

## 2. `FUN_71037f8180`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037f8180`  (offset `0x37f8180`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037f8180(undefined8 param_1, undefined * param_2)`
- **Size / BBs / Incoming:** 12412 bytes / 2 bb / 2 incoming refs
- **Match values:** Format
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

## 3. `FUN_71037adba0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037adba0`  (offset `0x37adba0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71037adba0(undefined8 param_1, undefined4 param_2, undefined4 param_3)`
- **Size / BBs / Incoming:** 260 bytes / 10 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** sys_date_format_full;sys_date_format_yymm;dys_yoga03_l_03_set;sys_date_format_mmdd;select_item;sys_date_format_mdd;sys_date_format_full_space
- **Callers:** FUN_71037ab750
- **Callees:** FUN_71037ab600
- **Files:** [decomp](../decompiled/FUN_71037adba0__71037adba0.c)  [cfg](../decompiled/FUN_71037adba0__71037adba0.mmd)
- **Clone hash:** `2dffd8d93c846e34`

```c

undefined8 FUN_71037adba0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_date_format_full",3);
    return uVar1;
  case 1:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_date_format_yymm",2);
    return uVar1;
  case 2:
    pcVar2 = "sys_date_format_mmdd";
    break;
  case 3:
    pcVar2 = "sys_date_format_mdd";
    break;
  case 4:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_date_format_full_space",3);
    return uVar1;
  default:
    return 0;
  }
  uVar1 = FUN_71037ab600(param_1,param_2,(byte *)pcVar2,2);
  return uVar1;
}


```

## 4. `FUN_71037adcb0`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037adcb0`  (offset `0x37adcb0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71037adcb0(undefined8 param_1, undefined4 param_2, undefined4 param_3)`
- **Size / BBs / Incoming:** 260 bytes / 10 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** sys_time_format_full;sys_time_format_hhmm;sys_time_format_hmm;dys_yoga03_l_03_set;sys_time_format_mmss;sys_time_format_mss
- **Callers:** FUN_71037ab750
- **Callees:** FUN_71037ab600
- **Files:** [decomp](../decompiled/FUN_71037adcb0__71037adcb0.c)  [cfg](../decompiled/FUN_71037adcb0__71037adcb0.mmd)
- **Clone hash:** `7a42b85bc86d7015`

```c

undefined8 FUN_71037adcb0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  switch(param_3) {
  case 0:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_full",3);
    return uVar1;
  case 1:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_hhmm",2);
    return uVar1;
  case 2:
    uVar1 = FUN_71037ab600(param_1,param_2,(byte *)"sys_time_format_hmm",2);
    return uVar1;
  case 3:
    pcVar2 = "sys_time_format_mmss";
    break;
  case 4:
    pcVar2 = "sys_time_format_mss";
    break;
  default:
    return 0;
  }
  uVar1 = FUN_71037ab600(param_1,param_2,(byte *)pcVar2,2);
  return uVar1;
}


```

## 5. `FUN_7103918310`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103918310`  (offset `0x3918310`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103918310(long param_1, undefined8 param_2, char * param_3, char * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1912 bytes / 94 bb / 1 incoming refs
- **Match values:** format
- **Strings touched:** string;number;no value;number has no integer representation;string contains zeros;\%03d;invalid option '%%%c' to 'format';invalid format (repeated flags);invalid format (width or precision too long)
- **Callees:** FUN_71038f41a0;FUN_71038f4440;FUN_71038f45b0;FUN_71038f4730;FUN_71038f6c50;FUN_71038f6d60;FUN_71038f74d0;FUN_71038f7870;FUN_71038f7b00;FUN_71038f7bd0;FUN_71038f8c50;FUN_71038fec40;FUN_71039080b0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_7103918310__7103918310.c)  [cfg](../decompiled/FUN_7103918310__7103918310.mmd)
- **Clone hash:** `1685ef8b7ed073de`

```c

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_7103918310(long param_1,undefined8 param_2,char *param_3,char *param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  char *__s;
  size_t sVar7;
  char *pcVar8;
  ulong *__n;
  void *__dest;
  size_t sVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  char *pcVar11;
  float *pfVar12;
  ulong uVar13;
  byte *pbVar14;
  byte bVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  float *pfVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  float fVar23;
  undefined1 local_20d0 [8];
  undefined8 local_20c8;
  undefined1 *local_20a8;
  char *local_20a0;
// ... (317 more lines)
```

## 6. `FUN_71038fcce0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fcce0`  (offset `0x38fcce0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038fcce0(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 2368 bytes / 135 bb / 1 incoming refs
- **Match values:** format
- **Strings touched:** binary string;select_item;truncated;not a;version mismatch in;format mismatch in;corrupted;%s size mismatch in;NODE_PRE_REFRACT_BLEND;size_t;Instruction;lua_Integer;dys_yoga03_l_03_set;lua_Number;endianness mismatch in;float format mismatch in;attempt to load a %s chunk (mode is '%s');chara/chara_4/chara_4_;binary
- **Callees:** FUN_71038fb3c0;FUN_71038fb6f0;FUN_71038fdf10;FUN_71038fe0c0;FUN_71039004f0;FUN_7103908660;FUN_71039086e0;FUN_71039204f0;FUN_7103920530;<EXTERNAL>::strchr;<EXTERNAL>::memcpy;<EXTERNAL>::memcmp;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_71038fcce0__71038fcce0.c)  [cfg](../decompiled/FUN_71038fcce0__71038fcce0.mmd)
- **Clone hash:** `d56284b59fc61300`

```c

void FUN_71038fcce0(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  float *pfVar9;
  size_t sVar10;
  uint uVar11;
  long *plVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long local_78;
  ulong *local_70;
  char *pcStack_68;
  ulong local_60 [2];
  float local_48;
  undefined4 uStack_44;
  
  lVar7 = *(long *)*param_2;
  *(long *)*param_2 = lVar7 + -1;
  plVar12 = (long *)*param_2;
  if (lVar7 == 0) {
    pbVar5 = (byte *)(*(code *)plVar12[2])(plVar12[4],plVar12[3],&local_78);
    if (pbVar5 == (byte *)0x0 || local_78 == 0) {
      uVar11 = 0xffffffff;
    }
    else {
      *plVar12 = local_78 + -1;
      plVar12[1] = (long)(pbVar5 + 1);
      uVar11 = (uint)*pbVar5;
    }
// ... (412 more lines)
```

## 7. `FUN_7101bf02a0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101bf02a0`  (offset `0x1bf02a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101bf02a0(undefined8 * param_1, long * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10668 bytes / 435 bb / 1 incoming refs
- **Match values:** FORMAT;format
- **Strings touched:** SEQUENCE_NONE;SEQUENCE_TITLE;SEQUENCE_TITLE_DEMO;SEQUENCE_MELEE;SEQUENCE_MELEE_NORMAL;SEQUENCE_MELEE_TEAM_COMPE;SEQUENCE_MELEE_SPECIAL;SEQUENCE_MELEE_SPECIAL_VARIOUS;SEQUENCE_MELEE_SPECIAL_SUDDENDEATH;SEQUENCE_MELEE_SPECIAL_ALL_BATTLE;SEQUENCE_MELEE_TOURNAMENT;SEQUENCE_SPIRITS;mode_empty_03;SEQUENCE_SPIRITS_CHALLENGE;SEQUENCE_SPIRITS_CANPAIGN;SEQUENCE_SPIRITS_FORMATION;SEQUENCE_SPIRITS_CHALLENGE_SPECIAL;SEQUENCE_OTHER;SEQUENCE_OTHER_STANDARD;SEQUENCE_OTHER_KUMITE;SEQUENCE_OTHER_KUMITE_100;SEQUENCE_OTHER_KUMITE_ALLSTAR;SEQUENCE_OTHER_KUMITE_CRUEL;SEQUENCE_OTHER_HOMERUN;SEQUENCE_OTHER_HOMERUN_SINGLE;SEQUENCE_OTHER_HOMERUN_COOP;SEQUENCE_OTHER_HOMERUN_EVERYONE;SEQUENCE_OTHER_TRAINING;SEQUENCE_OTHER_CHARA_MAKE;SEQUENCE_OTHER_STAGE_MAKE;SEQUENCE_OTHER_AMIIBO;SEQUENCE_OTHER_CHALLENGER;...
- **Callers:** FUN_710185e890
- **Callees:** FUN_71000001c0;FUN_710075f050;FUN_710172a350;FUN_7101761580;FUN_7101761830;FUN_7101762400;FUN_7101763880;FUN_7101763970;FUN_7101763b40;FUN_7101764000;FUN_7101be16e0;FUN_7101be1cf0;FUN_7101be1ef0;FUN_7101be3dc0;FUN_7101be4200;FUN_71025d2a00;...
- **Files:** [decomp](../decompiled/FUN_7101bf02a0__7101bf02a0.c)  [cfg](../decompiled/FUN_7101bf02a0__7101bf02a0.mmd)
- **Clone hash:** `5467e28c510ce846`

```c

/* WARNING: Removing unreachable block (ram,0x007101bf28e4) */
/* WARNING: Removing unreachable block (ram,0x007101bf28e8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f0) */
/* WARNING: Removing unreachable block (ram,0x007101bf28f8) */
/* WARNING: Removing unreachable block (ram,0x007101bf28fc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101bf02a0(undefined8 *param_1,long *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  ulong *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  PosixTime *pPVar12;
  void *__dest;
  PosixTime *pPVar13;
  undefined8 extraout_x1;
  long *plVar14;
  PosixTime **ppPVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  PosixTime *pPVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  long lVar26;
// ... (1797 more lines)
```

## 8. `FUN_710001f340`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710001f340`  (offset `0x1f340`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710001f340(long param_1, undefined8 * param_2, byte * * param_3, byte * * param_4, byte * * param_5, byte * * param_6, byte * * param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 12036 bytes / 695 bb / 1 incoming refs
- **Match values:** format
- **Strings touched:** Illegal characters found in URL;select_item;Bad URL, colon is first character;file:;%*15[^
/:]:%[^
];%[^
];localhost/;NODE_PRE_REFRACT_BLEND;127.0.0.1/;File drive letters are only accepted in MSDOS/Windows.;%15[^
/:]:%3[/]%[^
/?#]%[^
];Bad URL;%[^
/?#]%[^
];Unwillingly accepted illegal URL using %d slash%s!
;%s://%s%s;Invalid file://hostname/, expected localhost or 127.0.0.1 or none;dys_yoga03_l_03_set;DICT.;LDAP.;IMAP.;SMTP.;Rebuilt URL to: %s
;Protocol "%s" not supported or disabled in libcurl;<url> malformed;plate_side;Please URL encode %% as %%25, see RFC 6874.
;chara/chara_4/chara_4_;Invalid IPv6 address format
;%s://%s;Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.
;memory shortage;no_proxy;...
- **Callers:** FUN_710001f290
- **Callees:** FUN_7100002af0;FUN_7100002bd0;FUN_7100004200;FUN_7100004360;FUN_7100004400;FUN_7100004690;FUN_71000060b0;FUN_71000067e0;FUN_71000068f0;FUN_7100007ef0;FUN_7100007fd0;FUN_7100008270;FUN_71000093f0;FUN_710000bbe0;FUN_710000bbf0;FUN_710000c980;...
- **Files:** [decomp](../decompiled/FUN_710001f340__710001f340.c)  [cfg](../decompiled/FUN_710001f340__710001f340.mmd)
- **Clone hash:** `49a38eb5ed8786c3`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_710001f340(long param_1,undefined8 *param_2,byte **param_3,byte **param_4,byte **param_5,
                  byte **param_6,byte **param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  size_t sVar16;
  byte **ppbVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  long *plVar21;
  byte **ppbVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  int *piVar26;
  byte bVar27;
  char cVar28;
  undefined1 uVar29;
  uint uVar30;
  undefined4 uVar31;
  char *pcVar32;
// ... (2158 more lines)
```

## 9. `FUN_710391ba90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391ba90`  (offset `0x391ba90`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_710391ba90(long * param_1, long * param_2, uint * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 832 bytes / 53 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** invalid format option '%c';missing size for format option 'c';integral size (%d) out of limits [1,%d]
- **Callers:** FUN_710391b840
- **Callees:** FUN_71038f6c50
- **Files:** [decomp](../decompiled/FUN_710391ba90__710391ba90.c)  [cfg](../decompiled/FUN_710391ba90__710391ba90.mmd)
- **Clone hash:** `0b41a4999223f3cb`

```c

undefined4
FUN_710391ba90(long *param_1,long *param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar5 = (byte *)*param_2;
  *param_2 = (long)(pbVar5 + 1);
  bVar1 = *pbVar5;
  *param_3 = 0;
  uVar6 = (uint)bVar1;
  uVar4 = 5;
  switch(uVar6) {
  case 0x20:
    goto switchD_710391bacc_caseD_20;
  case 0x21:
    if (*(byte *)*param_2 - 0x30 < 10) {
      uVar3 = 0;
      pbVar5 = (byte *)*param_2;
      do {
        pbVar7 = pbVar5 + 1;
        *param_2 = (long)pbVar7;
        iVar2 = (uint)*pbVar5 + (int)uVar3 * 10;
        uVar6 = iVar2 - 0x30;
        uVar3 = (ulong)uVar6;
        pbVar5 = pbVar7;
      } while ((int)uVar6 < 0xccccccc && *pbVar7 - 0x30 < 10);
      if (0xf < iVar2 - 0x31U) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(*param_1,"integral size (%d) out of limits [1,%d]",uVar3,0x10,param_5,param_6
                       ,param_7,param_8);
      }
// ... (153 more lines)
```

## 10. `FUN_710391afd0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391afd0`  (offset `0x391afd0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710391afd0(void)`
- **Size / BBs / Incoming:** 408 bytes / 17 bb / 1 incoming refs
- **Match values:** format
- **Strings touched:** string;chara/chara_4/chara_4_;format result too large;variable-length format
- **Callees:** FUN_71038f6d60;FUN_71038f74d0;FUN_71038fec40;FUN_71039080b0;FUN_710391b840
- **Files:** [decomp](../decompiled/FUN_710391afd0__710391afd0.c)  [cfg](../decompiled/FUN_710391afd0__710391afd0.mmd)
- **Clone hash:** `a563f308588ff722`

```c

undefined8
FUN_710391afd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  float *pfVar5;
  ulong *puVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  uint uStack_68;
  uint uStack_64;
  long lStack_60;
  undefined1 *puStack_58;
  char *pcStack_48;
  
  pfVar7 = *(float **)(param_1 + 0x10);
  pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar8 = pfVar5;
  if (pfVar7 <= pfVar5) {
    pfVar8 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar8[2] & 0xf) != 4) {
    if (((uint)pfVar8[2] & 0xf) != 3) {
      FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
      pcStack_48 = (char *)0x0;
      goto LAB_710391b088;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar7 = *(float **)(param_1 + 0x10);
      pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
    }
    pfVar8 = pfVar5;
    if (pfVar7 <= pfVar5) {
// ... (36 more lines)
```

## 11. `FUN_7101fa11c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101fa11c0`  (offset `0x1fa11c0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101fa11c0(long param_1)`
- **Size / BBs / Incoming:** 5508 bytes / 40 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** sv_system;battle_object;battle_object_module_accessor;gauge_parts_on;battle_object_category;TRANS_A_JUMP_AERIAL;battle_object_kind;owner_id;get_status_func;entry_child_thread_table;get_global_table;get_global_fighter_table;get_line_state_table;get_child_thread_table;mode_empty_03;get_child_thread_env_table;sv_module_access;motion;kinetic;slope;ground;camera;control;effect;sound;article;cancel;damage;combo;model;attack;search;...
- **Callers:** FUN_7102137e70
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101fa11c0__7101fa11c0.c)  [cfg](../decompiled/FUN_7101fa11c0__7101fa11c0.mmd)
- **Clone hash:** `a31b4b26022e17c7`

```c

void FUN_7101fa11c0(long param_1)

{
  byte ****ppppbVar1;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  long local_30;
  int local_28;
  
  ppppbVar1 = (byte ****)0xfffffffd;
  FUN_7103728630(&local_38,param_1,(undefined **)"sv_system",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object",(long ****)FUN_7101f95350,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_module_accessor",(long ****)FUN_7101f95380,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_category",(long ****)FUN_7101f953b0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"battle_object_kind",(long ****)FUN_7101f953e0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"owner_id",(long ****)FUN_7101f95410,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_status_func",(long ****)FUN_7101f95440,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"entry_child_thread_table",(long ****)FUN_7101f95510,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_table",(long ****)FUN_7101f956d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_global_fighter_table",(long ****)FUN_7101f95710,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_line_state_table",(long ****)FUN_7101f95750,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_table",(long ****)FUN_7101f95790,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_38,(uint *)"get_child_thread_env_table",(long ****)FUN_7101f95840,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  if ((local_38 != 0) && (local_30 != 0)) {
// ... (457 more lines)
```

## 12. `FUN_710009bda0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009bda0`  (offset `0x9bda0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710009bda0(long param_1, long param_2, long param_3)`
- **Size / BBs / Incoming:** 588 bytes / 22 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** select_item;dys_yoga03_l_03_set;%s.fmdb : A format of _u1 is different from _uo of the particle shape.

- **Callers:** FUN_710009a540
- **Callees:** FUN_7100031a20;FUN_7100093660;FUN_710009bff0
- **Files:** [decomp](../decompiled/FUN_710009bda0__710009bda0.c)  [cfg](../decompiled/FUN_710009bda0__710009bda0.mmd)
- **Clone hash:** `47f905f6ea2af90e`

```c

undefined8 FUN_710009bda0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  undefined *local_80 [4];
  
  *(long *)(param_1 + 0x10) = param_2;
  lVar2 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  lVar6 = *(long *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = lVar6;
  pcVar7 = "_p0";
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar6 + 0x18);
  local_80[0] = &DAT_71043291fc;
  local_80[1] = &DAT_71044214ef;
  local_80[2] = &DAT_7104453bbe;
  local_80[3] = &DAT_71042f6d76;
  lVar3 = FUN_710009bff0(lVar2,"_p0");
  lVar2 = 0;
  lVar6 = 0x40;
  do {
    lVar4 = FUN_710009bff0(*(long *)(param_1 + 0x18),pcVar7);
    if ((lVar2 == 0x20) && (lVar4 == 0)) {
      if ((ulong)*(byte *)(param_3 + 0x14) != 0xff) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
        if (lVar4 != 0) {
          lVar4 = FUN_710009bff0(*(long *)(param_1 + 0x18),
                                 (char *)(*(long *)(lVar4 + (ulong)*(byte *)(param_3 + 0x14) * 0x10
                                                   + 0x20) + 2));
          goto LAB_710009be9c;
        }
      }
// ... (72 more lines)
```

## 13. `FUN_71020fbb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** FORMAT
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

## 14. `FUN_71014aa930`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71014aa930`  (offset `0x14aa930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71014aa930(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2452 bytes / 70 bb / 2 incoming refs
- **Match values:** format
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

## 15. `FUN_7100022610`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100022610`  (offset `0x22610`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100022610(long param_1, long param_2, byte * * param_3, byte * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 1332 bytes / 82 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** https;select_item;Unsupported proxy '%s', libcurl is built without the HTTPS-proxy support.;socks5h;socks5;socks4a;socks4;socks;http:;chara/chara_4/chara_4_;Invalid IPv6 address format
;No valid port number in proxy string (%s)
;plate_side;Please URL encode %% as %%25, see RFC 6874.
;Unsupported proxy scheme for '%s'
- **Callers:** FUN_710001f340
- **Callees:** FUN_7100015de0;FUN_7100016040;FUN_7100017490;FUN_7100022250;FUN_7100024310;FUN_71000272a0;FUN_71000272c0;<EXTERNAL>::strlen;<EXTERNAL>::strchr;FUN_71039c00b0;<EXTERNAL>::strncmp;<EXTERNAL>::strstr;<EXTERNAL>::isxdigit
- **Files:** [decomp](../decompiled/FUN_7100022610__7100022610.c)  [cfg](../decompiled/FUN_7100022610__7100022610.mmd)
- **Clone hash:** `07ca499bd7ac8eaa`

```c

int FUN_7100022610(long param_1,long param_2,byte **param_3,byte **param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  size_t sVar12;
  byte **ppbVar13;
  byte **__s;
  byte **ppbVar14;
  byte **__s_00;
  uint uVar15;
  char *local_68;
  byte *local_60;
  byte *local_58;
  
  iVar7 = (int)param_4;
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x0;
  ppbVar13 = param_3;
  pcVar9 = strstr((char *)param_3,"://");
  __s_00 = param_3;
  if (pcVar9 == (char *)0x0) {
LAB_7100022794:
    if (iVar7 - 4U < 4) {
      pcVar9 = strchr((char *)__s_00,0x40);
joined_r0x0071000227b0:
      bVar6 = true;
      iVar8 = iVar7;
    }
// ... (223 more lines)
```

## 16. `FUN_710225b390`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710225b390`  (offset `0x225b390`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710225b390(long param_1)`
- **Size / BBs / Incoming:** 600 bytes / 4 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** kiiladarzmanager;entry_summon_fighter;set_assist_team_no;unentry_summon_fighter;load_summon_fighter_light;load_summon_fighter_dark;set_figher_information_parameter;is_loaded_fighter;start_fighter;is_activate_fighter;deactivate_fighter;get_fighter_battle_object_id;set_stage_status_default;set_stage_status_kiila_and_darz;set_stage_status_kiila;set_stage_status_darz;get_light_fighter_kind_num;get_light_fighter_kind;get_dark_fighter_kind_num;get_dark_fighter_kind;set_stage_floating_plates_visibility;stop_stage_sound;stop_ingame_se;set_visible_hud
- **Callers:** FUN_710226f500
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_710225b390__710225b390.c)  [cfg](../decompiled/FUN_710225b390__710225b390.mmd)
- **Clone hash:** `5ab5f3b412275428`

```c

void FUN_710225b390(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"kiiladarzmanager",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"entry_summon_fighter",(long ****)FUN_7102259e20,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"unentry_summon_fighter",(long ****)FUN_7102259ec0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"load_summon_fighter_light",(long ****)FUN_7102259f90,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"load_summon_fighter_dark",(long ****)FUN_710225a090,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_figher_information_parameter",(long ****)FUN_710225a190,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_loaded_fighter",(long ****)FUN_710225a4d0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"start_fighter",(long ****)FUN_710225a5c0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_activate_fighter",(long ****)FUN_710225a940,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"deactivate_fighter",(long ****)FUN_710225aa20,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_battle_object_id",(long ****)FUN_710225aaf0,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage_status_default",(long ****)FUN_710225ac40,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage_status_kiila_and_darz",(long ****)FUN_710225ac80,
                 ppppbVar1,in_x4,in_x5,in_x6,in_x7);
// ... (26 more lines)
```

## 17. `FUN_710391b840`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710391b840`  (offset `0x391b840`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_710391b840(long * param_1, uint param_2, long * param_3, uint * param_4, uint * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 256 bytes / 13 bb / 3 incoming refs
- **Match values:** format
- **Strings touched:** too many results;invalid next option for option 'X';format asks for alignment not power of 2
- **Callers:** FUN_710391a370;FUN_710391afd0;FUN_710391b170
- **Callees:** FUN_71038f6d60;FUN_710391ba90
- **Files:** [decomp](../decompiled/FUN_710391b840__710391b840.c)  [cfg](../decompiled/FUN_710391b840__710391b840.mmd)
- **Clone hash:** `23fe5cab2c5ab311`

```c

int FUN_710391b840(long *param_1,uint param_2,long *param_3,uint *param_4,uint *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint local_44;
  
  puVar3 = param_4;
  puVar4 = param_5;
  iVar1 = FUN_710391ba90(param_1,param_3,param_4,param_4,param_5,param_6,param_7,param_8);
  local_44 = *param_4;
  uVar6 = local_44;
  if (iVar1 == 7) {
    if (*(char *)*param_3 != '\0') {
      iVar2 = FUN_710391ba90(param_1,param_3,&local_44,puVar3,puVar4,param_6,param_7,param_8);
      if ((iVar2 != 3) && (uVar6 = local_44, local_44 != 0)) goto LAB_710391b8cc;
    }
    uVar6 = local_44;
    FUN_71038f6d60(*param_1,1,"invalid next option for option \'X\'",puVar3,puVar4,param_6,param_7,
                   param_8);
  }
LAB_710391b8cc:
  uVar5 = 0;
  if ((iVar1 != 3) && (1 < (int)uVar6)) {
    uVar5 = *(uint *)((long)param_1 + 0xc);
    if ((int)uVar5 < (int)uVar6) {
      uVar6 = uVar5;
      local_44 = uVar5;
    }
    uVar5 = uVar6 - 1;
    if ((uVar5 & uVar6) != 0) {
      FUN_71038f6d60(*param_1,1,"format asks for alignment not power of 2",puVar3,puVar4,param_6,
                     param_7,param_8);
    }
// ... (6 more lines)
```

## 18. `FUN_7101f94540`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101f94540`  (offset `0x1f94540`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101f94540(long param_1)`
- **Size / BBs / Incoming:** 1752 bytes / 4 bb / 2 incoming refs
- **Match values:** format
- **Strings touched:** LuaAutomaticTest;print;set_fighter_num;gauge_parts_on;set_fighter_kind;get_fighter_kind;set_fighter_color;set_fighter_cp_flag;change_fighter;is_reloaded_fighter;is_fighter_status_wait;set_all_fighter_visibility;mode_empty_03;get_fighter_animcmd;set_stage;set_stage_visibility;set_waiting_frames;get_waiting_frames;begin_melee;is_melee_started;start_melee;end_melee;start_measuring_load;end_measuring_load;set_melee_pause;random;set_all_info_visibility;set_bool_of_debug_resident_menu;get_bool_of_debug_resident_menu;set_int_of_debug_resident_menu;get_int_of_debug_resident_menu;set_float_of_debug_resident_menu;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7103728630;FUN_7103728bf0;FUN_71038f55d0
- **Files:** [decomp](../decompiled/FUN_7101f94540__7101f94540.c)  [cfg](../decompiled/FUN_7101f94540__7101f94540.mmd)
- **Clone hash:** `75eef1448bd6895c`

```c

void FUN_7101f94540(long param_1)

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
  FUN_7103728630(&local_28,param_1,(undefined **)"LuaAutomaticTest",0xfffffffd,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"print",(long ****)FUN_7101f8fa20,ppppbVar1,in_x4,in_x5,in_x6,
                 in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_num",(long ****)FUN_7101f8fb10,ppppbVar1,in_x4,in_x5
                 ,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_kind",(long ****)FUN_7101f8fbb0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_kind",(long ****)FUN_7101f8fcf0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_color",(long ****)FUN_7101f8fdc0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_fighter_cp_flag",(long ****)FUN_7101f8fe80,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"change_fighter",(long ****)FUN_7101f8ffc0,ppppbVar1,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_reloaded_fighter",(long ****)FUN_7101f900f0,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"is_fighter_status_wait",(long ****)FUN_7101f901d0,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_all_fighter_visibility",(long ****)FUN_7101f90320,ppppbVar1,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"get_fighter_animcmd",(long ****)FUN_7101f90500,ppppbVar1,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103728bf0(&local_28,(uint *)"set_stage",(long ****)FUN_7101f905a0,ppppbVar1,in_x4,in_x5,in_x6
                 ,in_x7);
// ... (122 more lines)
```

