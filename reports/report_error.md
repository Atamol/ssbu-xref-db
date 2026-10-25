# error (funcs=73, hits=131)

Top 50 functions by hit count

## 1. `FUN_71035e0e50`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71035e0e50`  (offset `0x35e0e50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71035e0e50(long * param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 6928 bytes / 411 bb / 1 incoming refs
- **Match values:** error
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

## 2. `FUN_710000fb30`  (hits=5)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000fb30`  (offset `0xfb30`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000fb30(long param_1, uint * param_2, size_t * param_3, uint * param_4, uint * param_5, uint * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4824 bytes / 291 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** dys_yoga03_l_03_set;HTTP/;Content-Length:;NODE_PRE_REFRACT_BLEND;no chunk, no close, no size. Assume close to signal end
; HTTP/%1d.%1d%c%3d; HTTP/2 %d;Lying server, not serving HTTP/2
;Keep sending data to get tossed away!
;chara/chara_4/chara_4_; RTSP/%d.%d %3d;HTTP error before end of send, keep sending
; HTTP %3d;HTTP 1.0, assume close after body
;Content-Type:;Server:;Proxy-Connection:;keep-alive;HTTP/1.0 proxy connection set to keep alive!
;Negative content-length: %ld, closing after transfer
;close;HTTP/1.1 proxy connection set close!
;Connection:;select_item;HTTP/1.0 connection set to keep alive!
;Transfer-Encoding:;chunked;identity;deflate;x-gzip;Content-Encoding:;Content-Range:;...
- **Callers:** FUN_7100017ae0
- **Callees:** FUN_71000012c0;FUN_7100004200;FUN_710000bba0;FUN_710000e840;FUN_710000e940;FUN_710000f090;FUN_710000f6f0;FUN_7100012920;FUN_7100013750;FUN_7100014250;FUN_7100014410;FUN_7100014fc0;FUN_7100015de0;FUN_7100015ed0;FUN_7100016040;FUN_71000167d0;...
- **Files:** [decomp](../decompiled/FUN_710000fb30__710000fb30.c)  [cfg](../decompiled/FUN_710000fb30__710000fb30.mmd)
- **Clone hash:** `137d2d0fd72772c7`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000fb30(long param_1,uint *param_2,size_t *param_3,uint *param_4,uint *param_5,
                    uint *param_6,undefined8 param_7,undefined8 param_8)

{
  uint *param4;
  uint *param3;
  uint *param3_00;
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  void *__dest;
  char *pcVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  size_t sVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  char *pcVar18;
  size_t __n;
  byte *pbVar19;
  uint *puVar20;
  long lVar21;
  char cVar22;
  long lVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined1 auVar26 [16];
  undefined8 local_70;
// ... (801 more lines)
```

## 3. `FUN_710002c1f0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710002c1f0`  (offset `0x2c1f0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710002c1f0(long * param_1, uint param_2)`
- **Size / BBs / Incoming:** 5924 bytes / 250 bb / 2 incoming refs
- **Match values:** error
- **Strings touched:** stream error;buffer error
- **Callers:** FUN_71000bcac0;FUN_71000bcc00
- **Callees:** Libz_SigloMiddlewareInfo;FUN_710002a6c0;FUN_710002a9c0;FUN_710002bca0;FUN_710002dac0;FUN_710002f200;FUN_710002f370;FUN_710002f400;FUN_710002f560;<EXTERNAL>::memcpy;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_710002c1f0__710002c1f0.c)  [cfg](../decompiled/FUN_710002c1f0__710002c1f0.mmd)
- **Clone hash:** `c43c0480ee905ad8`

```c

ulong FUN_710002c1f0(long *param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  void *pvVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong __n;
  ulong uVar25;
  ulong uVar26;
  
  Libz_SigloMiddlewareInfo();
  if ((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
     ((plVar22 = (long *)param_1[7], plVar22 == (long *)0x0 || ((long *)*plVar22 != param_1)))) {
    return 0xfffffffe;
  }
  iVar19 = (int)plVar22[1];
  if (((0x38 < iVar19 - 0x39U) ||
      ((1L << ((ulong)(iVar19 - 0x39U) & 0x3f) & 0x100400400011001U) == 0)) &&
// ... (925 more lines)
```

## 4. `FUN_7100099560`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100099560`  (offset `0x99560`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100099560(undefined8 * param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8, undefined8 param_9, byte param_10, undefined8 param_11)`
- **Size / BBs / Incoming:** 656 bytes / 10 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** Required Alignment:%d
;               Gap:%d
;Alignment Unmatched Error!!! Please check your binary file.
;Binary Tag Error.
;Data    Version:%d
;Runtime Version:%d
;Binary Version Error!!! Please check your binary file.
;Data    API:%d
;Runtime API:%d
;Graphic API Unmatched Error!!! Please check your binary file.

- **Callers:** FUN_71000a4d90
- **Callees:** FUN_7100031850;FUN_71000338f0;FUN_7100093530;FUN_7100093900;FUN_71000997f0;FUN_710009c9c0;FUN_710009ce30;<EXTERNAL>::nn::util::BinaryFileHeader::GetAlignment;<EXTERNAL>::nn::util::BinaryFileHeader::IsSignatureValid;<EXTERNAL>::nn::util::BinaryFileHeader::IsAlignmentValid
- **Files:** [decomp](../decompiled/FUN_7100099560__7100099560.c)  [cfg](../decompiled/FUN_7100099560__7100099560.mmd)
- **Clone hash:** `125f2f333ec6a0dd`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_7100099560(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                   undefined8 param_9,byte param_10,undefined8 param_11)

{
  char cVar1;
  short sVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_7104f49cd8;
  FUN_7100031850(param_1 + 0x1e);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_71000338f0(param_1 + 0x29);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  FUN_7100031850(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  FUN_71000338f0(param_1 + 0x5f);
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = &DAT_7104f49d08;
  FUN_710009c9c0((undefined1 *)(param_1 + 0x98));
  FUN_710009ce30((undefined1 *)(param_1 + 0xa1));
  param_1[7] = param_9;
  param_1[8] = param_4;
  param_1[5] = param_7;
  param_1[6] = 0;
  param_1[2] = param_2;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 9) = param_8;
// ... (74 more lines)
```

## 5. `FUN_71038fc360`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fc360`  (offset `0x38fc360`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_71038fc360(long param_1, long param_2, undefined4 param_3)`
- **Size / BBs / Incoming:** 860 bytes / 40 bb / 5 incoming refs
- **Match values:** error
- **Strings touched:** error in error handling
- **Callers:** FUN_7101f44910;FUN_7103376860;FUN_7103727c30;FUN_71037280f0;FUN_7103903710
- **Callees:** FUN_71038fb4b0;FUN_71038fb530;FUN_71038fdfe0;FUN_7103917660
- **Files:** [decomp](../decompiled/FUN_71038fc360__71038fc360.c)  [cfg](../decompiled/FUN_71038fc360__71038fc360.mmd)
- **Clone hash:** `b49a26477fc4812f`

```c

int FUN_71038fc360(long param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 *puVar8;
  short sVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  int local_68;
  undefined4 local_64;
  
  uVar6 = *(undefined2 *)(param_1 + 0xc4);
  if (param_2 == 0) {
    sVar9 = 1;
  }
  else {
    sVar9 = *(short *)(param_2 + 0xc6) + 1;
  }
  *(short *)(param_1 + 0xc6) = sVar9;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  local_64 = param_3;
  iVar7 = FUN_71038fb4b0(param_1,FUN_71038fc6c0,&local_64);
  if (iVar7 == -1) {
    iVar7 = 2;
  }
  else {
    while (1 < iVar7) {
      lVar11 = *(long *)(param_1 + 0x20);
      local_68 = iVar7;
      if (lVar11 == 0) {
// ... (122 more lines)
```

## 6. `FUN_71000130b0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000130b0`  (offset `0x130b0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_71000130b0(long * param_1, long param_2, char * param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 972 bytes / 71 bb / 2 incoming refs
- **Match values:** Error
- **Strings touched:** 1.2.0.4;1.2.11.f-NINTENDO-SDK-v1;NODE_PRE_REFRACT_BLEND;Error while processing content unencoding: %s;Error while processing content unencoding: Unknown failure within decompression software.
- **Callers:** FUN_7100012930;FUN_7100017ae0
- **Callees:** FUN_7100012ef0;FUN_7100016040;FUN_7100017580;FUN_7100027290;FUN_71000272a0;FUN_71000281d0;FUN_710002a1f0;FUN_710002b7f0;<EXTERNAL>::strcmp;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_71000130b0__71000130b0.c)  [cfg](../decompiled/FUN_71000130b0__71000130b0.mmd)
- **Clone hash:** `49d92e553e9a1806`

```c

int FUN_71000130b0(long *param_1,long param_2,char *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  void *__dest;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  byte *pbVar15;
  
  iVar7 = (int)param_3;
  pcVar8 = param_3;
  if (*(uint *)(param_2 + 0xd4) < 5) {
    puVar1 = (undefined8 *)(param_2 + 0xd8);
    switch(*(uint *)(param_2 + 0xd4)) {
    case 0:
      *(undefined8 *)(param_2 + 0x138) = 0;
      *(undefined8 *)(param_2 + 0x140) = 0;
      *(undefined8 *)(param_2 + 0x128) = 0;
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined8 *)(param_2 + 0x118) = 0;
      *(undefined8 *)(param_2 + 0x120) = 0;
      *(undefined8 *)(param_2 + 0x108) = 0;
      *(undefined8 *)(param_2 + 0x110) = 0;
      *(undefined8 *)(param_2 + 0xf8) = 0;
      *(undefined8 *)(param_2 + 0x100) = 0;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      *(undefined8 *)(param_2 + 0xf0) = 0;
// ... (192 more lines)
```

## 7. `FUN_710384ca70`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710384ca70`  (offset `0x384ca70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710384ca70(undefined4 * param_1, long param_2, ulong * param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, byte * * * * param_7, ulong param_8, void * param_9)`
- **Size / BBs / Incoming:** 4300 bytes / 263 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** SystemErrorVS;SystemErrorPS;SystemEmptyErrorPS
- **Callees:** std::__tree_balance_after_insert<std::__tree_node_base<void*>*>;FUN_71037b2bc0;FUN_71037c3a70;FUN_71037cfe00;FUN_71038ae0b0;FUN_71038b64a0;FUN_71038b69b0;FUN_710392e1f0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memmove;<EXTERNAL>::memcpy;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::_Unwind_Resume;<EXTERNAL>::std::__basic_string_common<true>::__throw_length_error;...
- **Files:** [decomp](../decompiled/FUN_710384ca70__710384ca70.c)  [cfg](../decompiled/FUN_710384ca70__710384ca70.mmd)
- **Clone hash:** `dd1a94adbc8a6267`

```c

void FUN_710384ca70(undefined4 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,byte ****param_7,ulong param_8,void *param_9)

{
  undefined8 *puVar1;
  byte bVar2;
  long ***ppplVar3;
  long *plVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long ****pppplVar21;
  void *__dest;
  void *pvVar22;
  long *local_a0;
  ulong local_98;
  void *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined5 uStack_7f;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined4 uStack_74;
// ... (848 more lines)
```

## 8. `FUN_71037e3270`  (hits=3)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71037e3270`  (offset `0x37e3270`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71037e3270(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * * param_7, allocator * param_8)`
- **Size / BBs / Incoming:** 7860 bytes / 528 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** SystemLambertVS;SystemLambertPS;SystemLambertTexture2DArrayPS;SystemLambertNonTextureVS;SystemLambertNonTexturePS;SystemConstantVS;SystemConstantPS;SystemConstantNonTextureVS;SystemConstantNonTexturePS;SystemErrorVS;SystemErrorPS;SystemEmptyErrorPS;SystemQuadVS;SystemQuadPS;SystemQuadUseSamplerPS
- **Callers:** FUN_71037d07b0
- **Callees:** FUN_71037b2bc0;FUN_71037c9810;FUN_71037cffc0;FUN_71037e5130;FUN_710392e1f0;FUN_710392eb40;<EXTERNAL>::nu::VirtualFreeHook;<EXTERNAL>::nu::VirtualAllocHook;<EXTERNAL>::_Unwind_Resume
- **Files:** [decomp](../decompiled/FUN_71037e3270__71037e3270.c)  [cfg](../decompiled/FUN_71037e3270__71037e3270.mmd)
- **Clone hash:** `7934e2ca5845d9fa`

```c

void FUN_71037e3270(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ****param_7,allocator *param_8)

{
  void *pvVar1;
  int iVar2;
  ulong uVar3;
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
  undefined ***pppuVar4;
  char *pcVar5;
  char *pcVar6;
  undefined **local_2e0;
  long *local_2d8;
  long *local_2d0;
  long local_2c8;
  undefined **local_2c0;
  long *local_2b8;
  long *local_2b0;
  long local_2a8;
  undefined **local_2a0;
  long *local_298;
  long *local_290;
  long local_288;
  undefined **local_280;
  long *local_278;
// ... (1305 more lines)
```

## 9. `FUN_7101a4e880`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a4e880`  (offset `0x1a4e880`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a4e880(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 19976 bytes / 983 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** error_action;decide;tournament_off;change;NODE_PRE_REFRACT_BLEND;amiibo_off
- **Callees:** FUN_71015547e0;FUN_7101696040;FUN_710175dfc0;FUN_71017abd00;FUN_71019e66d0;FUN_71019e69d0;FUN_71019f08a0;FUN_71019f11d0;FUN_71019f1fa0;FUN_71019fd0b0;FUN_71019fd290;FUN_7101a00c90;FUN_7101a029b0;FUN_7101a02cb0;FUN_7101a03490;FUN_7101a036e0;...
- **Files:** [decomp](../decompiled/FUN_7101a4e880__7101a4e880.c)  [cfg](../decompiled/FUN_7101a4e880__7101a4e880.mmd)
- **Clone hash:** `121ec0adafddc341`

```c

/* WARNING: Removing unreachable block (ram,0x007101a51d28) */
/* WARNING: Removing unreachable block (ram,0x007101a4f18c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a4e880(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long *********ppppppppplVar19;
  void *__dest;
  long lVar20;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  ulong extraout_x1_07;
// ... (3397 more lines)
```

## 10. `FUN_710392e1f0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392e1f0`  (offset `0x392e1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_710392e1f0(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 156 bytes / 5 bb / 3210 incoming refs
- **Match values:** Error
- **Strings touched:** <jemalloc>: Error allocating aligned memory: out of memory
;<jemalloc>: Error allocating aligned memory: invalid alignment

- **Callers:** FUN_71002c4f60;FUN_71002c51f0;FUN_7100440e30;FUN_7100441dd0;FUN_7100443610;FUN_7100445740;FUN_7100445b40;FUN_7100446740;FUN_71004fad80;FUN_710055c860;FUN_710055cae0;FUN_710055d080;FUN_710133fba0;FUN_7101cc72d0;FUN_71022b7100;FUN_710353ad40;...
- **Callees:** FUN_710392cea0;FUN_710392cf00;FUN_710392cf50
- **Files:** [decomp](../decompiled/FUN_710392e1f0__710392e1f0.c)  [cfg](../decompiled/FUN_710392e1f0__710392e1f0.mmd)
- **Clone hash:** `13275529d9ab4b9e`

```c

undefined4
FUN_710392e1f0(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 local_88;
  undefined8 local_80;
  long ****local_78;
  undefined8 local_70;
  byte abStack_58 [8];
  undefined8 local_50;
  char *local_48;
  char *local_40;
  long ****local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_710392cea0(abStack_58);
  FUN_710392cf00(&local_88);
  abStack_58[1] = 1;
  local_50 = 8;
  local_48 = "<jemalloc>: Error allocating aligned memory: out of memory\n";
  local_40 = "<jemalloc>: Error allocating aligned memory: invalid alignment\n";
  local_88 = local_18;
  local_80 = 1;
  local_78 = local_28;
  local_70 = local_20;
  uVar1 = FUN_710392cf50(abStack_58,&local_88,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}


```

## 11. `FUN_71038fca90`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fca90`  (offset `0x38fca90`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_71038fca90(long param_1, undefined * param_2, undefined8 param_3, long param_4, undefined8 param_5)`
- **Size / BBs / Incoming:** 584 bytes / 23 bb / 7 incoming refs
- **Match values:** error
- **Strings touched:** error in error handling
- **Callers:** FUN_7103377130;FUN_7103727700;FUN_710372d730;FUN_71038f5d80;FUN_71038f5fe0;FUN_71038fe990
- **Callees:** FUN_71038fb4b0;FUN_71038fb530;FUN_71038fdfe0;FUN_7103917660
- **Files:** [decomp](../decompiled/FUN_71038fca90__71038fca90.c)  [cfg](../decompiled/FUN_71038fca90__71038fca90.mmd)
- **Clone hash:** `64e89ec05a9450e3`

```c

int FUN_71038fca90(long param_1,undefined *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  long *plVar15;
  
  lVar12 = *(long *)(param_1 + 0x20);
  uVar4 = *(undefined1 *)(param_1 + 0xc9);
  uVar10 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = param_5;
  uVar6 = *(undefined2 *)(param_1 + 0xc4);
  iVar8 = FUN_71038fb4b0(param_1,param_2,param_3);
  if (iVar8 == 0) goto LAB_71038fccb0;
  plVar15 = (long *)(*(long *)(param_1 + 0x38) + param_4);
  FUN_71038fdfe0(param_1,(ulong)plVar15);
  if (iVar8 == 6) {
    puVar13 = FUN_7103917660(param_1,"error in error handling",0x17);
    *plVar15 = (long)puVar13;
    bVar5 = *(byte *)(puVar13 + 1);
LAB_71038fcb2c:
    *(uint *)(plVar15 + 1) = bVar5 | 0x40;
  }
  else {
    if (iVar8 == 4) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
// ... (73 more lines)
```

## 12. `FUN_71001ce780`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001ce780`  (offset `0x1ce780`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001ce780(undefined8 param_1, undefined8 param_2, char * param_3, ulong param_4)`
- **Size / BBs / Incoming:** 88 bytes / 3 bb / 2 incoming refs
- **Match values:** Error
- **Strings touched:** Encryption Error
- **Callees:** <EXTERNAL>::strlen;<EXTERNAL>::strcpy
- **Files:** [decomp](../decompiled/FUN_71001ce780__71001ce780.c)  [cfg](../decompiled/FUN_71001ce780__71001ce780.mmd)
- **Clone hash:** `ea096a2a08387f7e`

```c

undefined8 FUN_71001ce780(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  
  sVar1 = strlen("Encryption Error");
  if (sVar1 < param_4) {
    strcpy(param_3,"Encryption Error");
    return 1;
  }
  return 0;
}


```

## 13. `FUN_7100023290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100023290`  (offset `0x23290`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100023290(ulong param_1, char * param_2, byte * param_3, long * param_4, long * param_5, long * param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 2432 bytes / 134 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** SOCKS5: connecting to HTTP proxy %s port %d
;SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]
;SOCKS5: no connection here;Connection time-out;SOCKS5: connection timeout;warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu
;SOCKS5: error occurred during connection;SOCKS5 communication to %s:%d
;NODE_PRE_REFRACT_BLEND;SOCKS5 nothing to read;Unable to send initial SOCKS5 request.;SOCKS5 read timeout;SOCKS5 read error occurred;SOCKS5 GSSAPI per-message authentication is not supported.;Unable to receive initial SOCKS5 response.;Received invalid version in initial SOCKS5 response.;No authentication method was acceptable.;Undocumented SOCKS5 mode attempted to be used by server.;No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.);Failed to send SOCKS5 sub-negotiation request.;User was rejected by the SOCKS5 server (%d %d).;SOCKS5 connect to IPv4 %s (locally resolved)
;Unable to receive SOCKS5 sub-negotiation response.;select_item;Failed to send SOCKS5 connect request.;SOCKS5 connection to %s not supported
;Failed to resolve "%s" for SOCKS5 connect.;SOCKS5 reply has wrong version, version should be 5.;Can't complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d);SOCKS5 request granted.
;Can't complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d);Can't complete SOCKS5 connection to %s:%d. (%d);...
- **Callers:** FUN_710001edb0
- **Callees:** FUN_7100002af0;FUN_7100004910;FUN_7100005ba0;FUN_7100005f10;FUN_71000060d0;FUN_7100013730;FUN_7100015800;FUN_7100015de0;FUN_7100016040;FUN_71000162c0;FUN_7100016980;<EXTERNAL>::strlen;<EXTERNAL>::memcpy
- **Files:** [decomp](../decompiled/FUN_7100023290__7100023290.c)  [cfg](../decompiled/FUN_7100023290__7100023290.mmd)
- **Clone hash:** `b3d3e348bc39a1b0`

```c

/* WARNING: Removing unreachable block (ram,0x00710002388c) */

int FUN_7100023290(ulong param_1,char *param_2,byte *param_3,long *param_4,long *param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  size_t __n;
  long *plVar6;
  size_t __n_00;
  size_t __n_01;
  char *pcVar7;
  byte *pbVar8;
  long *plVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long local_328;
  long local_318;
  long local_310 [8];
  long *local_2d0;
  undefined8 local_2c8;
  byte local_2c0 [7];
  byte local_2b9;
  byte local_2b8;
  byte local_2b7;
  
  lVar15 = param_6[0x27];
  lVar13 = *param_6;
  uVar1 = *(uint *)((long)param_6 + (long)(int)param_5 * 4 + 600);
// ... (381 more lines)
```

## 14. `FUN_71038fb3c0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fb3c0`  (offset `0x38fb3c0`)
- **Namespace:** `Global`
- **Signature:** `noreturn undefined __cdecl FUN_71038fb3c0(long param_1, int param_2)`
- **Size / BBs / Incoming:** 236 bytes / 15 bb / 75 incoming refs
- **Match values:** error
- **Strings touched:** error in error handling
- **Callers:** FUN_7101fa4480;app::sv_animcmd::stop;app::sv_animcmd::frame;app::sv_animcmd::wait;app::sv_animcmd::wait_loop;app::sv_animcmd::wait_loop_sync_mot;app::sv_animcmd::wait_loop_clear;FUN_7103729a50;FUN_71038f3f70;FUN_71038f5f30;FUN_71038f6930;FUN_71038f8c50;FUN_71038f9c30;FUN_71038fb0d0;FUN_71038fb3c0;FUN_71038fb530;...
- **Callees:** FUN_71038fb3c0;FUN_7103917660;<EXTERNAL>::abort;<EXTERNAL>::longjmp
- **Files:** [decomp](../decompiled/FUN_71038fb3c0__71038fb3c0.c)  [cfg](../decompiled/FUN_71038fb3c0__71038fb3c0.mmd)
- **Clone hash:** `9dc9eaf5e943a237`

```c

void FUN_71038fb3c0(long param_1,int param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  int extraout_w1;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  long *plVar5;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(int *)(*(long *)(param_1 + 0x58) + 0x140) = param_2;
    longjmp((__jmp_buf_tag *)(*(long *)(param_1 + 0x58) + 8),1);
    lVar4 = extraout_x8;
    param_2 = extraout_w1;
LAB_71038fb430:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 **)(lVar4 + 0x10) = puVar3 + 2;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
    *puVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -0x10);
    puVar3[1] = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_71038fb3c0(*(long *)(unaff_x20 + 200),param_2);
  }
  unaff_x20 = *(long *)(param_1 + 0x18);
  *(char *)(param_1 + 0xc) = (char)param_2;
  lVar4 = *(long *)(unaff_x20 + 200);
  if (*(long *)(lVar4 + 0x58) != 0) goto LAB_71038fb430;
  if (*(long *)(unaff_x20 + 0xc0) == 0) goto LAB_71038fb4a8;
  plVar5 = *(long **)(param_1 + 0x10);
  if (param_2 == 6) {
    puVar3 = FUN_7103917660(param_1,"error in error handling",0x17);
    *plVar5 = (long)puVar3;
    bVar2 = *(byte *)(puVar3 + 1);
LAB_71038fb46c:
    *(uint *)(plVar5 + 1) = bVar2 | 0x40;
  }
// ... (21 more lines)
```

## 15. `FUN_7100012df0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100012df0`  (offset `0x12df0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100012df0(long * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 216 bytes / 8 bb / 2 incoming refs
- **Match values:** Error
- **Strings touched:** 1.2.11.f-NINTENDO-SDK-v1;NODE_PRE_REFRACT_BLEND;Error while processing content unencoding: %s;Error while processing content unencoding: Unknown failure within decompression software.
- **Callers:** FUN_7100012930;FUN_7100017ae0
- **Callees:** FUN_7100012ef0;FUN_7100016040;FUN_7100028410
- **Files:** [decomp](../decompiled/FUN_7100012df0__7100012df0.c)  [cfg](../decompiled/FUN_7100012df0__7100012df0.mmd)
- **Clone hash:** `a7d87d1109e5caf4`

```c

int FUN_7100012df0(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  if (*(int *)(param_2 + 0xd4) == 0) {
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined8 *)(param_2 + 0x140) = 0;
    uVar2 = 0x70;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined8 *)(param_2 + 0x130) = 0;
    *(undefined8 *)(param_2 + 0x118) = 0;
    *(undefined8 *)(param_2 + 0x120) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined8 *)(param_2 + 0x110) = 0;
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x100) = 0;
    *(undefined8 *)(param_2 + 0xe8) = 0;
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(code **)(param_2 + 0x118) = FUN_7100012ed0;
    *(code **)(param_2 + 0x120) = FUN_7100012ee0;
    iVar1 = FUN_7100028410(param_2 + 0xd8,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar1 != 0) {
      if (*(long *)(param_2 + 0x108) == 0) {
        FUN_7100016040(*param_1,(byte *)
                                "Error while processing content unencoding: Unknown failure within decompression software."
                       ,0,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7100016040(*param_1,(byte *)"Error while processing content unencoding: %s",
                       *(long *)(param_2 + 0x108),param_4,param_5,param_6,param_7,param_8);
      }
      return 0x3d;
    }
// ... (8 more lines)
```

## 16. `FUN_71000179b0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000179b0`  (offset `0x179b0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_71000179b0(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 304 bytes / 15 bb / 5 incoming refs
- **Match values:** error
- **Strings touched:** dys_yoga03_l_03_set;seek callback returned error %d;select_item;the ioctl callback returned %d
;ioctl callback returned error %d;NODE_PRE_REFRACT_BLEND;necessary data rewind wasn't possible
- **Callers:** FUN_710000e940;FUN_710000fb30;FUN_7100017ae0;FUN_71000194f0
- **Callees:** FUN_7100015de0;FUN_7100016040;FUN_71000279e0
- **Files:** [decomp](../decompiled/FUN_71000179b0__71000179b0.c)  [cfg](../decompiled/FUN_71000179b0__71000179b0.mmd)
- **Clone hash:** `022eb8376a6ed54f`

```c

ulong FUN_71000179b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0;
  lVar4 = *param_1;
  *(undefined1 *)((long)param_1 + 0x823) = 0;
  *(uint *)(lVar4 + 0x224) = *(uint *)(lVar4 + 0x224) & 0xfffffffd;
  if (*(long *)(lVar4 + 0x2e0) == 0) {
    if (*(int *)(lVar4 + 0x480) == 3) {
      return 0;
    }
    if (*(code **)(lVar4 + 0x2e8) == (code *)0x0) {
      if (*(code **)(lVar4 + 0x340) == (code *)0x0) {
        if (*(code **)(lVar4 + 0x4fd0) == FUN_71000279b0) {
          param_3 = 0;
          iVar2 = FUN_71000279e0();
          if (iVar2 != -1) {
            return 0;
          }
        }
        FUN_7100016040(lVar4,(byte *)"necessary data rewind wasn\'t possible",param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        uVar1 = (**(code **)(lVar4 + 0x340))(lVar4,1,*(undefined8 *)(lVar4 + 0x3a0));
        FUN_7100015de0(lVar4,(byte *)"the ioctl callback returned %d\n",(ulong)uVar1,param_4,param_5
                       ,param_6,param_7,param_8);
        if (uVar1 == 0) {
          return 0;
        }
        FUN_7100016040(lVar4,(byte *)"ioctl callback returned error %d",(ulong)uVar1,param_4,param_5
                       ,param_6,param_7,param_8);
      }
// ... (14 more lines)
```

## 17. `FUN_7101a12f60`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a12f60`  (offset `0x1a12f60`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a12f60(long param_1, long * * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 16140 bytes / 871 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** decide;change;error_action;mel_chara_select_lv_n;cp_level_%d
- **Callees:** FUN_7101686610;FUN_7101695020;FUN_71016f4260;FUN_71016f6340;FUN_71016f6a40;FUN_710175dfc0;FUN_71019f08a0;FUN_71019f11d0;FUN_71019f1fa0;FUN_71019fd0b0;FUN_71019fd290;FUN_7101a000c0;FUN_7101a00c90;FUN_7101a029b0;FUN_7101a03490;FUN_7101a036e0;...
- **Files:** [decomp](../decompiled/FUN_7101a12f60__7101a12f60.c)  [cfg](../decompiled/FUN_7101a12f60__7101a12f60.mmd)
- **Clone hash:** `8ff067d4a9bc0f26`

```c

/* WARNING: Removing unreachable block (ram,0x007101a135c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a12f60(long param_1,long **param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  void *__dest;
  byte *pbVar23;
  long **extraout_x1;
  long **extraout_x1_00;
  long **extraout_x1_01;
  long **extraout_x1_02;
  long **extraout_x1_03;
  long **extraout_x1_04;
  long **extraout_x1_05;
  long **extraout_x1_06;
// ... (2689 more lines)
```

## 18. `FUN_7100027390`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100027390`  (offset `0x27390`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7100027390(long * param_1, char * param_2)`
- **Size / BBs / Incoming:** 392 bytes / 16 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** 
Error: nn::nsd::ResolveEx() failed. Err Desc: %d

;
Error: Failed to allocate memory for nn::nsd::ResolveEx().


- **Callers:** FUN_7100019bf0
- **Callees:** FUN_7100008270;FUN_7100027290;FUN_71000272a0;<EXTERNAL>::strncpy;<EXTERNAL>::nn::nsd::ResolveEx
- **Files:** [decomp](../decompiled/FUN_7100027390__7100027390.c)  [cfg](../decompiled/FUN_7100027390__7100027390.mmd)
- **Clone hash:** `f67bdc6e06121d7a`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_7100027390(long *param_1,char *param_2)

{
  uint uVar1;
  Fqdn *__dest;
  Fqdn *__src;
  
  __dest = (Fqdn *)FUN_7100027290();
  *(undefined8 *)(__dest + 0xf0) = 0;
  *(undefined8 *)(__dest + 0xf8) = 0;
  *(undefined8 *)(__dest + 0xe0) = 0;
  *(undefined8 *)(__dest + 0xe8) = 0;
  *(undefined8 *)(__dest + 0xd0) = 0;
  *(undefined8 *)(__dest + 0xd8) = 0;
  *(undefined8 *)(__dest + 0xc0) = 0;
  *(undefined8 *)(__dest + 200) = 0;
  *(undefined8 *)(__dest + 0xb0) = 0;
  *(undefined8 *)(__dest + 0xb8) = 0;
  *(undefined8 *)(__dest + 0xa0) = 0;
  *(undefined8 *)(__dest + 0xa8) = 0;
  *(undefined8 *)(__dest + 0x90) = 0;
  *(undefined8 *)(__dest + 0x98) = 0;
  *(undefined8 *)(__dest + 0x80) = 0;
  *(undefined8 *)(__dest + 0x88) = 0;
  *(undefined8 *)(__dest + 0x70) = 0;
  *(undefined8 *)(__dest + 0x78) = 0;
  *(undefined8 *)(__dest + 0x60) = 0;
  *(undefined8 *)(__dest + 0x68) = 0;
  *(undefined8 *)(__dest + 0x50) = 0;
  *(undefined8 *)(__dest + 0x58) = 0;
  *(undefined8 *)(__dest + 0x40) = 0;
  *(undefined8 *)(__dest + 0x48) = 0;
  *(undefined8 *)(__dest + 0x30) = 0;
  *(undefined8 *)(__dest + 0x38) = 0;
  *(undefined8 *)(__dest + 0x20) = 0;
  *(undefined8 *)(__dest + 0x28) = 0;
  *(undefined8 *)(__dest + 0x10) = 0;
// ... (65 more lines)
```

## 19. `FUN_710392e290`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392e290`  (offset `0x392e290`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710392e290(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 152 bytes / 5 bb / 58799 incoming refs
- **Match values:** Error
- **Strings touched:** <jemalloc>: Error allocating aligned memory: out of memory
;<jemalloc>: Error allocating aligned memory: invalid alignment

- **Callers:** nnMain;FUN_71002c9900;FUN_71002f1ef0;FUN_71002f23d0;FUN_7100305180;FUN_7100309030;FUN_710030c710;FUN_710032ef60;FUN_7100342850;FUN_71003429a0;FUN_7100342af0;FUN_7100342c40;FUN_7100342d90;FUN_7100342ee0;FUN_7100343030;FUN_7100343180;...
- **Callees:** FUN_710392cea0;FUN_710392cf00;FUN_710392cf50
- **Files:** [decomp](../decompiled/FUN_710392e290__710392e290.c)  [cfg](../decompiled/FUN_710392e290__710392e290.mmd)
- **Clone hash:** `abc9072766d94a47`

```c

undefined8
FUN_710392e290(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte abStack_50 [3];
  undefined1 local_4d;
  undefined1 local_4c;
  undefined8 local_48;
  char *local_40;
  char *local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_710392cea0(abStack_50);
  FUN_710392cf00(&local_80);
  abStack_50[1] = 1;
  local_4d = 1;
  local_4c = 1;
  local_48 = 1;
  local_40 = "<jemalloc>: Error allocating aligned memory: out of memory\n";
  local_38 = "<jemalloc>: Error allocating aligned memory: invalid alignment\n";
  local_80 = &local_28;
  local_78 = 1;
  local_70 = local_20;
  local_68 = local_18;
  FUN_710392cf50(abStack_50,&local_80,param_3,param_4,param_5,param_6,param_7,param_8);
  return local_28;
}


```

## 20. `FUN_7101a32080`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101a32080`  (offset `0x1a32080`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101a32080(long param_1, long * param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10252 bytes / 461 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** select_on;change;error_action;select_off;decide
- **Callees:** FUN_7100058250;FUN_7100058290;FUN_710175dfc0;FUN_71019f11d0;FUN_71019f1fa0;FUN_7101a105b0;FUN_7101a35300;FUN_7101a36120;FUN_7101a38000;FUN_7101a38310;FUN_7101a385b0;FUN_7101a48700;FUN_7101a48ba0;FUN_7101a48cd0;FUN_7101a49c60;FUN_7101a4a510;...
- **Files:** [decomp](../decompiled/FUN_7101a32080__7101a32080.c)  [cfg](../decompiled/FUN_7101a32080__7101a32080.mmd)
- **Clone hash:** `5b7ed06e035e5192`

```c

/* WARNING: Removing unreachable block (ram,0x007101a33e48) */
/* WARNING: Removing unreachable block (ram,0x007101a33120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a32080(long param_1,long *param_2,long *********param_3,long *********param_4,
                   long ****param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long **pplVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  long *********ppppppppplVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  long *extraout_x1;
  long *extraout_x1_00;
  long *extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long ***ppplVar18;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *extraout_x1_07;
  long *extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long *extraout_x1_11;
// ... (1588 more lines)
```

## 21. `FUN_71002ac940`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002ac940`  (offset `0x2ac940`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71002ac940(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 944 bytes / 52 bb / 4 incoming refs
- **Match values:** error
- **Strings touched:** status;errorMessage
- **Callers:** FUN_71002a95a0;FUN_71002ac4c0;FUN_71002acf90;FUN_71002add70
- **Callees:** FUN_71001b1870;FUN_71001b3cb0;FUN_71001ba380;operator.delete;<EXTERNAL>::memcmp
- **Files:** [decomp](../decompiled/FUN_71002ac940__71002ac940.c)  [cfg](../decompiled/FUN_71002ac940__71002ac940.mmd)
- **Clone hash:** `189ca703d2fcb986`

```c

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_71002ac940(long param_1,undefined8 *param_2)

{
  uint *******pppppppuVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint *******pppppppuVar5;
  uint uVar6;
  uint *******pppppppuVar7;
  ulong uVar8;
  uint uVar9;
  uint *******pppppppuVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  ulong local_4f8;
  uint *******local_4f0;
  undefined8 uStack_4e8;
  undefined8 **local_4e0;
  long *local_4d8;
  undefined8 local_4d0;
  long local_4c8;
  long local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  int local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined8 *local_480;
  undefined8 uStack_478;
  long local_470;
  undefined8 uStack_468;
  undefined8 local_460;
// ... (185 more lines)
```

## 22. `FUN_7100012ef0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100012ef0`  (offset `0x12ef0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100012ef0(long * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 444 bytes / 25 bb / 2 incoming refs
- **Match values:** Error
- **Strings touched:** 1.2.11.f-NINTENDO-SDK-v1;Error while processing content unencoding: Unknown failure within decompression software.;NODE_PRE_REFRACT_BLEND;Error while processing content unencoding: %s
- **Callers:** FUN_7100012df0;FUN_71000130b0
- **Callees:** FUN_7100016040;FUN_71000167d0;FUN_7100027290;FUN_71000272a0;FUN_71000281d0;FUN_7100028420;FUN_710002a1f0
- **Files:** [decomp](../decompiled/FUN_7100012ef0__7100012ef0.c)  [cfg](../decompiled/FUN_7100012ef0__7100012ef0.mmd)
- **Clone hash:** `82dd43c13c5cd810`

```c

int FUN_7100012ef0(long *param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  plVar9 = (long *)(param_2 + 0xd8);
  lVar10 = *plVar9;
  uVar1 = *(undefined4 *)(param_2 + 0xe0);
  pcVar6 = (char *)FUN_7100027290();
  if (pcVar6 == (char *)0x0) {
    FUN_710002a1f0((long)plVar9);
    *(undefined4 *)(param_2 + 0xd4) = 0;
    iVar5 = 0x1b;
  }
  else {
    bVar3 = true;
LAB_7100012f50:
    do {
      *(char **)(param_2 + 0xf0) = pcVar6;
      *(undefined4 *)(param_2 + 0xf8) = 0x4000;
      uVar4 = FUN_7100028420(plVar9,2);
      if (1 < uVar4) {
        if ((bVar3) && (uVar4 == 0xfffffffd)) {
          FUN_710002a1f0((long)plVar9);
          param_4 = 0x70;
          uVar7 = FUN_71000281d0((long)plVar9,0xfffffff1,"1.2.11.f-NINTENDO-SDK-v1",0x70);
          if ((int)uVar7 == 0) {
            bVar3 = false;
            *(long *)(param_2 + 0xd8) = lVar10;
// ... (53 more lines)
```

## 23. `FUN_71038fe990`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fe990`  (offset `0x38fe990`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71038fe990(long param_1, int param_2)`
- **Size / BBs / Incoming:** 500 bytes / 25 bb / 3 incoming refs
- **Match values:** error
- **Strings touched:** no message;error in __gc metamethod (%s)
- **Callers:** FUN_71038fec40;FUN_71038fedf0;FUN_7103917230
- **Callees:** FUN_71038fb3c0;FUN_71038fca90;FUN_7103908660
- **Files:** [decomp](../decompiled/FUN_71038fe990__71038fe990.c)  [cfg](../decompiled/FUN_71038fe990__71038fe990.mmd)
- **Clone hash:** `2d6814587230e9e0`

```c

void FUN_71038fe990(long param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x18);
  puVar7 = *(undefined8 **)(lVar12 + 0x98);
  *(undefined8 *)(lVar12 + 0x98) = *puVar7;
  *puVar7 = *(undefined8 *)(lVar12 + 0x58);
  *(undefined8 **)(lVar12 + 0x58) = puVar7;
  bVar3 = *(byte *)((long)puVar7 + 9);
  *(byte *)((long)puVar7 + 9) = bVar3 & 0xf7;
  if (*(byte *)(lVar12 + 0x55) - 2 < 4) {
    *(byte *)((long)puVar7 + 9) = bVar3 & 0xf0 | *(byte *)(lVar12 + 0x54) & 3;
  }
  bVar3 = *(byte *)(puVar7 + 1);
  if ((bVar3 & 0xf) == 7) {
    lVar8 = puVar7[2];
  }
  else if ((bVar3 & 0xf) == 5) {
    lVar8 = puVar7[5];
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)bVar3 & 0xf) * 8 + 0x1a0);
  }
  if (lVar8 == 0) {
    puVar9 = &DAT_7104862960;
  }
// ... (42 more lines)
```

## 24. `FUN_710390db70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710390db70`  (offset `0x390db70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710390db70(uint * param_1, long * param_2, int param_3)`
- **Size / BBs / Incoming:** 920 bytes / 48 bb / 2 incoming refs
- **Match values:** error
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

## 25. `FUN_71001d1f60`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001d1f60`  (offset `0x1d1f60`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71001d1f60(ulong param_1, undefined4 param_2, byte param_3, undefined * param_4, undefined8 param_5, byte * param_6)`
- **Size / BBs / Incoming:** 432 bytes / 17 bb / 2 incoming refs
- **Match values:** Error
- **Strings touched:** C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Scheduler.cpp;(vResult = cbCallback(object, 0)) == bErrorValue;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71001d1e40;FUN_71001d6330
- **Callees:** FUN_71001b1300;FUN_71001b2e80;FUN_71001b2e90;FUN_71001b46a0;FUN_71001b4730;FUN_71001b4760;FUN_71001d2110;FUN_71001d7a70;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_71001d1f60__71001d1f60.c)  [cfg](../decompiled/FUN_71001d1f60__71001d1f60.mmd)
- **Clone hash:** `dbb1750fd549f81d`

```c

undefined8
FUN_71001d1f60(ulong param_1,undefined4 param_2,byte param_3,undefined *param_4,undefined8 param_5,
              byte *param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 auStack_88 [7];
  
  if (((param_1 & 1) == 0) || (uVar2 = FUN_71001d7a70(), (uVar2 & 1) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar5;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar4;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    if ((uVar6 & 1) == 0) {
      FUN_71001b46a0(auStack_88,10,param_2);
      FUN_71001b2e80((long)auStack_88);
      do {
        bVar1 = (*(code *)param_4)(param_5,0);
        if (((bVar1 ^ param_3) & 1) != 0) goto LAB_71001d20c8;
// ... (20 more lines)
```

## 26. `FUN_7100009d00`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100009d00`  (offset `0x9d00`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100009d00(long param_1, byte * * param_2, size_t * * * * * * * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, byte * * param_6, size_t * * * * * * * param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 5688 bytes / 367 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** Resolving timed out after %ld milliseconds;select_item;Internal error clearing splay node = %d
;Connection timed out after %ld milliseconds;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Re-used connection seems dead, get a new one
;Operation timed out after %ld milliseconds with %ld bytes received;Hostname '%s' was found in DNS cache
;dys_yoga03_l_03_set;Pipe broke: handle %p, url = %s
;In state %d with no easy_conn, bail out!

- **Callers:** FUN_7100009aa0
- **Callees:** FUN_7100002af0;FUN_7100002f80;FUN_7100004200;FUN_7100004910;FUN_7100004a10;FUN_7100005a10;FUN_7100005c60;FUN_71000067f0;FUN_7100006870;FUN_71000086c0;FUN_7100008d20;FUN_7100008fc0;FUN_710000c8f0;FUN_710000c920;FUN_710000c950;FUN_710000e660;...
- **Files:** [decomp](../decompiled/FUN_7100009d00__7100009d00.c)  [cfg](../decompiled/FUN_7100009d00__7100009d00.mmd)
- **Clone hash:** `8e0dba2c0a10b389`

```c

/* WARNING: Type propagation algorithm not settling */

int FUN_7100009d00(long param_1,byte **param_2,size_t *******param_3,size_t *******param_4,
                  size_t *******param_5,byte **param_6,size_t *******param_7,size_t *******param_8)

{
  size_t *******pppppppsVar1;
  size_t *******pppppppsVar2;
  long *plVar3;
  size_t *******pppppppsVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  byte **ppbVar16;
  size_t ******ppppppsVar17;
  byte **extraout_x1;
  byte **extraout_x1_00;
  byte **extraout_x1_01;
  byte **extraout_x1_02;
  byte **extraout_x1_03;
  byte **extraout_x1_04;
  byte **extraout_x1_05;
  byte **extraout_x1_06;
  byte **extraout_x1_07;
  byte **extraout_x1_08;
  byte **extraout_x1_09;
  byte **extraout_x1_10;
  byte **extraout_x1_11;
  byte **extraout_x1_12;
  byte **extraout_x1_13;
  byte **extraout_x1_14;
// ... (1163 more lines)
```

## 27. `FUN_710335ea80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710335ea80`  (offset `0x335ea80`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710335ea80(long param_1)`
- **Size / BBs / Incoming:** 1588 bytes / 28 bb / 2 incoming refs
- **Match values:** error
- **Strings touched:** input_index;dys_yoga03_l_03_set;selection_type;use_cursor_looping;cancel_outside_window;use_only_shortcut;use_only_touch_control;use_only_pointer_input;input_direction_only_x;input_direction_only_y;bring_front_on_select;plate_side;cursor_adjust_size;cursor_interpolation;ignore_side_input;decide_only_shortcut;select_same_button;detect_outside_at_same;use_button_history;size_use_button_id;directional_degree;multiple_operator_num;is_unique_se;decide_se_label_code;cancel_se_label_code;cursor_se_label_code;error_se_label_code
- **Callees:** FUN_71038f5390;FUN_71038fec40;FUN_710391e050
- **Files:** [decomp](../decompiled/FUN_710335ea80__710335ea80.c)  [cfg](../decompiled/FUN_710335ea80__710335ea80.mmd)
- **Clone hash:** `f7dd20fd7bb6aaea`

```c

undefined8 FUN_710335ea80(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined4 *puVar5;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  undefined4 local_40;
  
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_50 = (long *)0x0;
  local_40 = 0;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar1 = FUN_710391e050(param_1);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar2 + 1) = 0x45;
  *puVar2 = uVar1;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  *(undefined4 *)(lVar3 + 0x18) = 0x13;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
// ... (186 more lines)
```

## 28. `FUN_710392a220`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392a220`  (offset `0x392a220`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710392a220(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 3936 bytes / 309 bb / 1 incoming refs
- **Match values:** Error
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

## 29. `FUN_7103906480`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103906480`  (offset `0x3906480`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103906480(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 684 bytes / 35 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** string;'package.%s' must be a string;error loading module '%s' from file '%s':
	%s
- **Callees:** FUN_71038f4b20;FUN_71038f4d40;FUN_71038f6c50;FUN_71038f74d0;FUN_71038f8090;FUN_71038fec40;FUN_7103907460;FUN_71039080b0
- **Files:** [decomp](../decompiled/FUN_7103906480__7103906480.c)  [cfg](../decompiled/FUN_7103906480__7103906480.mmd)
- **Clone hash:** `f5e1d74aa481e077`

```c

undefined8
FUN_7103906480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  pfVar6 = *(float **)(param_1 + 0x10);
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar7 = pfVar8;
  if (pfVar6 <= pfVar8) {
    pfVar7 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar7[2] & 0xf) == 4) {
LAB_7103906508:
    pcVar3 = (char *)(*(long *)pfVar7 + 0x18);
  }
  else {
    if (((uint)pfVar7[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar6 = *(float **)(param_1 + 0x10);
        pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar7 = pfVar8;
      if (pfVar6 <= pfVar8) {
        pfVar7 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar7);
      goto LAB_7103906508;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
// ... (78 more lines)
```

## 30. `FUN_710392a070`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710392a070`  (offset `0x392a070`)
- **Namespace:** `Global`
- **Signature:** `undefined1 __cdecl FUN_710392a070(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 420 bytes / 32 bb / 2 incoming refs
- **Match values:** Error
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

## 31. `FUN_71017f4480`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017f4480`  (offset `0x17f4480`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_71017f4480(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** NODE_PRE_REFRACT_BLEND;NetworkErrorMessage
- **Files:** [decomp](../decompiled/FUN_71017f4480__71017f4480.c)  [cfg](../decompiled/FUN_71017f4480__71017f4480.mmd)
- **Clone hash:** `ee4d2302a0406665`

```c

char * FUN_71017f4480(void)

{
  return "NetworkErrorMessage";
}


```

## 32. `FUN_71038fa1b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71038fa1b0`  (offset `0x38fa1b0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71038fa1b0(long param_1)`
- **Size / BBs / Incoming:** 168 bytes / 9 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** PANIC: unprotected error in call to Lua API (%s)

- **Callees:** FUN_71038fec40;FUN_71039080b0;<EXTERNAL>::fprintf;<EXTERNAL>::fflush
- **Files:** [decomp](../decompiled/FUN_71038fa1b0__71038fa1b0.c)  [cfg](../decompiled/FUN_71038fa1b0__71038fa1b0.mmd)
- **Clone hash:** `bc9721c836e36909`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71038fa1b0(long param_1)

{
  uint uVar1;
  FILE *param0;
  char *param2;
  float *pfVar2;
  
  param0 = _stderr;
  pfVar2 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 != 4) {
    if (uVar1 != 3) {
      param2 = (char *)0x0;
      goto LAB_71038fa22c;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar2 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar2);
  }
  param2 = (char *)(*(long *)pfVar2 + 0x18);
LAB_71038fa22c:
  fprintf(param0,"PANIC: unprotected error in call to Lua API (%s)\n",param2);
  fflush(param0);
  return 0;
}


```

## 33. `FUN_7101991290`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101991290`  (offset `0x1991290`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101991290(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 372 bytes / 15 bb / 10 incoming refs
- **Match values:** error
- **Strings touched:** mnu_amiibo_journey_online_mark_%d;mnu_amiibo_journey_wait;mnu_amiibo_journey_match;mnu_amiibo_journey_newsletter;mnu_amiibo_journey_communication_error;mnu_amiibo_journey_prepare;mnu_amiibo_journey_end
- **Callers:** FUN_7101992150;FUN_71019924a0;FUN_71022e06a0;FUN_71022e2520;FUN_71022e2690;FUN_71022e34e0;FUN_71022e48c0
- **Callees:** FUN_710062dc20;FUN_710377a120;FUN_710377a280
- **Files:** [decomp](../decompiled/FUN_7101991290__7101991290.c)  [cfg](../decompiled/FUN_7101991290__7101991290.mmd)
- **Clone hash:** `a6ad936b838898cd`

```c

void FUN_7101991290(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  uint local_68 [2];
  undefined1 local_60;
  
  if (**(long **)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) == 4) {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_60 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_710062dc20(local_68,"mnu_amiibo_journey_online_mark_%d");
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 1:
    pcVar1 = "mnu_amiibo_journey_wait";
    goto LAB_7101991388;
  case 2:
    pcVar1 = "mnu_amiibo_journey_match";
    break;
  case 3:
    pcVar1 = "mnu_amiibo_journey_newsletter";
LAB_7101991388:
    FUN_710377a280(param_1,(byte *)pcVar1,2);
    return;
  case 4:
    FUN_710377a120(param_1,"mnu_amiibo_journey_communication_error",uVar2,param_4,param_5,param_6,
                   param_7,param_8);
    return;
// ... (14 more lines)
```

## 34. `FUN_71000a0af0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000a0af0`  (offset `0xa0af0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000a0af0(long * param_1, undefined8 param_2, undefined4 param_3, int param_4)`
- **Size / BBs / Incoming:** 356 bytes / 5 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** SuperStripeSystem is already initialized.
;[SuperStripe] Memory Allocate Error!! : %d

- **Callers:** FUN_71000a3e80
- **Callees:** FUN_7100093530;FUN_7100093660;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_71000a0af0__71000a0af0.c)  [cfg](../decompiled/FUN_71000a0af0__71000a0af0.mmd)
- **Clone hash:** `834143d3c9df018e`

```c

void FUN_71000a0af0(long *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  
  if (DAT_71052ab978 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(int *)((long)puVar1 + 0x1c) = param_4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_7104f4a100;
    puVar1[1] = param_2;
    puVar1[4] = (long)param_4 * 0xa0;
    __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0xa0,0x80);
    puVar1[6] = __s;
    memset(__s,0,(long)*(int *)((long)puVar1 + 0x1c) * 0xa0);
    lVar2 = puVar1[1];
    *(undefined8 *)(lVar2 + 0xf68) = 0;
    *(code **)(lVar2 + 0xf70) = FUN_71000a0400;
    *(code **)(lVar2 + 0xf78) = FUN_71000a0890;
    *(code **)(lVar2 + 0xf88) = FUN_71000a08e0;
    *(code **)(lVar2 + 0xf90) = FUN_71000a0910;
    *(code **)(lVar2 + 0xf98) = FUN_71000a0960;
    *(code **)(lVar2 + 4000) = FUN_71000a0670;
    *(code **)(lVar2 + 0xfa8) = FUN_71000a0710;
    *(code **)(lVar2 + 0xfb0) = FUN_71000a0820;
    *(undefined8 *)(lVar2 + 0xf80) = 0;
    *(code **)(lVar2 + 0xfb8) = FUN_710009d750;
    DAT_71052ab978 = puVar1;
    return;
  }
  FUN_7100093660();
// ... (3 more lines)
```

## 35. `FUN_710395ff40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710395ff40`  (offset `0x395ff40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710395ff40(void)`
- **Size / BBs / Incoming:** 160 bytes / 4 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** <jemalloc>: Error allocating TSD

- **Callers:** FUN_710395ff00
- **Callees:** FUN_71039545b0;FUN_710395f790;FUN_710395f7c0;FUN_710395fb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_710395ff40__710395ff40.c)  [cfg](../decompiled/FUN_710395ff40__710395ff40.mmd)
- **Clone hash:** `954d8d33217b993a`

```c

void FUN_710395ff40(void)

{
  undefined1 local_1838 [6160];
  undefined1 *local_28;
  
  local_28 = (undefined1 *)FUN_710395f790();
  if (local_28 == (undefined1 *)0x0) {
    FUN_71039545b0("<jemalloc>: Error allocating TSD\n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_7105297238 = 0;
  FUN_710395fb40(&DAT_7105297240);
  *local_28 = 0;
  memset(local_1838,0,0x1810);
  local_1838[0] = 5;
  memcpy(local_28 + 8,local_1838,0x1810);
  FUN_710395f7c0(local_28);
  return;
}


```

## 36. `FUN_710008b350`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710008b350`  (offset `0x8b350`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710008b350(char * param_1, long param_2)`
- **Size / BBs / Incoming:** 300 bytes / 21 bb / 3 incoming refs
- **Match values:** Error
- **Strings touched:** ShaderBinary Bind Error.

- **Callers:** FUN_7100089080;FUN_710009aa20
- **Callees:** FUN_710008a850;FUN_7100093660;FUN_710009b550;FUN_710009ccf0
- **Files:** [decomp](../decompiled/FUN_710008b350__710008b350.c)  [cfg](../decompiled/FUN_710008b350__710008b350.mmd)
- **Clone hash:** `127e263b2ae34094`

```c

undefined8 FUN_710008b350(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*param_1 != '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x4c0) == '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0x508) == '\0') {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  pcVar1 = (char *)(param_2 + 0x4c0);
  if ((*(long *)(lVar4 + 0x8c8) != -1) &&
     ((*(int *)(param_1 + 0x330) == 0 || (3 < *(int *)(param_1 + 0x330))))) {
    lVar2 = FUN_710009b550(param_2,*(long *)(lVar4 + 0x8c8));
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x78) = lVar2;
  }
  param_1[0x350] = '\0';
  param_1[0x351] = '\0';
  param_1[0x352] = '\0';
  param_1[0x353] = '\0';
  param_1[0x354] = '\0';
  param_1[0x355] = '\0';
  param_1[0x356] = '\0';
  param_1[0x357] = '\0';
  param_1[0x348] = '\0';
  param_1[0x349] = '\0';
  param_1[0x34a] = '\0';
  param_1[0x34b] = '\0';
// ... (38 more lines)
```

## 37. `FUN_710335f0c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710335f0c0`  (offset `0x335f0c0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710335f0c0(long param_1, undefined4 * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 5208 bytes / 369 bb / 3 incoming refs
- **Match values:** error
- **Strings touched:** input_index;dys_yoga03_l_03_set;selection_type;use_cursor_looping;cancel_outside_window;use_only_shortcut;use_only_touch_control;use_only_pointer_input;input_direction_only_x;input_direction_only_y;bring_front_on_select;plate_side;cursor_adjust_size;cursor_interpolation;ignore_side_input;decide_only_shortcut;select_same_button;detect_outside_at_same;use_button_history;size_use_button_id;directional_degree;multiple_operator_num;is_unique_se;decide_se_label_code;cancel_se_label_code;cursor_se_label_code;error_se_label_code;key_context
- **Callers:** FUN_7101ad8e40;FUN_7101d2dec0;FUN_7103360570
- **Callees:** FUN_7101989a30;FUN_7103375ed0;FUN_7103375ee0;FUN_7103376160;FUN_7103376170;FUN_71033763f0;FUN_7103376400;FUN_7103376680;FUN_7103376690;FUN_710337df20;FUN_71038f4b20;FUN_71038f4d40;FUN_71038f4fc0;FUN_71038fec40;FUN_7103907f00;FUN_71039080b0;...
- **Files:** [decomp](../decompiled/FUN_710335f0c0__710335f0c0.c)  [cfg](../decompiled/FUN_710335f0c0__710335f0c0.mmd)
- **Clone hash:** `570b3bfe269cd299`

```c

ulong FUN_710335f0c0(long param_1,undefined4 *param_2,undefined8 param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  void *__dest;
  char *pcVar5;
  undefined4 uVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  long **pplVar17;
  uint uVar18;
  float *pfVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  long ****pppplVar25;
  void *__src;
  size_t __n;
  ulong *puVar26;
  long *plVar27;
  float fVar28;
  long ***local_a0;
  long *local_98;
  long ****local_80;
  undefined4 local_64;
// ... (1080 more lines)
```

## 38. `FUN_710000c9d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000c9d0`  (offset `0xc9d0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710000c9d0(void)`
- **Size / BBs / Incoming:** 7016 bytes / 461 bb / 2 incoming refs
- **Match values:** error
- **Strings touched:** User-Agent:;Referer:;Cookie:;Referer: %s
;select_item;Accept-Encoding:;Accept-Encoding: %s
;Connection:;%s, TE
TE: gzip
;Connection: TE
TE: gzip
;Transfer-Encoding:;chunked;Transfer-Encoding: chunked
;Host:;dys_yoga03_l_03_set;Host: %s%s%s
;Host: %s%s%s:%hu
;Content-Type:;Accept:;Accept: */*
;plate_side;File already completely uploaded;ftp://;;type=;Range:;Chunky upload is not supported by HTTP 1.0;Range: bytes=%s
;ftp://%s:%s@%s;Content-Range:;Content-Range: bytes %s%ld/%ld
;Content-Range: bytes 0-%ld/%ld
;Content-Range: bytes %s/%ld
;...
- **Callees:** FUN_7100002080;FUN_7100002540;FUN_7100007ef0;FUN_7100007fd0;FUN_710000bba0;FUN_710000e840;FUN_710000ec90;FUN_710000f280;FUN_710000f530;FUN_710000f600;FUN_710000f6f0;FUN_710000f7f0;FUN_710000fa20;FUN_7100011ba0;FUN_7100011c00;FUN_7100012300;...
- **Files:** [decomp](../decompiled/FUN_710000c9d0__710000c9d0.c)  [cfg](../decompiled/FUN_710000c9d0__710000c9d0.mmd)
- **Clone hash:** `30388a151ac3798e`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_710000c9d0(long *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                    ulong *param_5,ulong param_6,ulong param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  size_t __n;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  long *plVar14;
  void *pvVar15;
  byte *pbVar16;
  char *pcVar17;
  char *pcVar18;
  FILE *pFVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 uVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
// ... (1114 more lines)
```

## 39. `FUN_71000027a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000027a0`  (offset `0x27a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000027a0(long param_1, int param_2, undefined8 param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)`
- **Size / BBs / Incoming:** 800 bytes / 44 bb / 2 incoming refs
- **Match values:** error
- **Strings touched:** # Netscape HTTP Cookie File
# https://curl.haxx.se/docs/http-cookies.html
# This file was generated by libcurl! Edit at your own risk.

;#HttpOnly_;FALSE;%s%s%s	%s	%s	%s	%ld	%s	%s;#
# Fatal libcurl error
;plate_side;WARNING: failed to save cookies in %s

- **Callers:** FUN_7100019730;FUN_7100019bf0
- **Callees:** FUN_7100000f70;FUN_7100002540;FUN_7100007fd0;FUN_7100015de0;FUN_7100016b40;FUN_7100016ba0;FUN_7100016c80;FUN_71000272a0;FUN_7100027620;FUN_71000277b0;FUN_7100027870;FUN_7100027950;FUN_7100027980;<EXTERNAL>::strcmp;<EXTERNAL>::fclose
- **Files:** [decomp](../decompiled/FUN_71000027a0__71000027a0.c)  [cfg](../decompiled/FUN_71000027a0__71000027a0.mmd)
- **Clone hash:** `75558b1a64dff8ab`

```c

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000027a0(long param_1,int param_2,undefined8 param_3,long param_4,char *param_5,
                   undefined1 *param_6,char *param_7,long param_8)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  FILE *__stream;
  undefined8 *puVar4;
  char *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    if ((param_2 != 0) && (*(undefined8 **)(param_1 + 0x9b8) != (undefined8 *)0x0)) {
      FUN_7100016c80(*(undefined8 **)(param_1 + 0x9b8));
      *(undefined8 *)(param_1 + 0x9b8) = 0;
    }
    FUN_7100016b40(param_1,2);
  }
  else {
    if (*(long *)(param_1 + 0x9b8) != 0) {
      FUN_7100000f70(param_1);
    }
    FUN_7100016b40(param_1,2);
    plVar5 = *(long **)(param_1 + 0x9c8);
    if ((plVar5 != (long *)0x0) && (plVar5[3] != 0)) {
      __s2 = *(char **)(param_1 + 0x738);
      lVar3 = FUN_7100027620((long *)0x0);
      if ((long *)*plVar5 != (long *)0x0) {
        plVar7 = (long *)*plVar5;
        plVar8 = (long *)0x0;
        do {
          while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar6[6] != 0 && plVar6[6] < lVar3) {
// ... (91 more lines)
```

## 40. `FUN_71033912c0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71033912c0`  (offset `0x33912c0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71033912c0(undefined8 param_1, undefined8 param_2, long * param_3, ushort * param_4)`
- **Size / BBs / Incoming:** 320 bytes / 25 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** pop_sys_overflow_digit;pop_share_upload_name_error
- **Callees:** FUN_71037ab600;<EXTERNAL>::nn::ngc::CountNumbers
- **Files:** [decomp](../decompiled/FUN_71033912c0__71033912c0.c)  [cfg](../decompiled/FUN_71033912c0__71033912c0.mmd)
- **Clone hash:** `4b44bc1ff221d6b9`

```c

undefined8 FUN_71033912c0(undefined8 param_1,undefined8 param_2,long *param_3,ushort *param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  
  iVar1 = nn::ngc::CountNumbers(param_4);
  if (iVar1 < 6) {
    if ((param_4 == (ushort *)0x0) || (uVar5 = (uint)*param_4, *param_4 == 0)) {
      return 0;
    }
    uVar4 = 0;
    iVar3 = 0;
    iVar1 = 0;
    puVar7 = param_4;
    do {
      if ((uVar5 | 1) == 0xf) {
        if (uVar5 == 0xe) {
          iVar6 = (puVar7[3] >> 1) + 4;
        }
        else {
          iVar6 = 3;
          if (uVar5 != 0xf) {
            iVar6 = 0;
          }
        }
      }
      else {
        if (uVar5 < 0x2002) {
          if ((uVar5 == 0x20) || (uVar5 == 0xa0)) goto LAB_71033913b0;
        }
        else if ((uVar5 - 0x2002 < 2) || ((uVar5 == 0x3164 || (uVar5 == 0x3000)))) {
LAB_71033913b0:
          iVar1 = iVar1 + 1;
// ... (24 more lines)
```

## 41. `FUN_7100017ae0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100017ae0`  (offset `0x17ae0`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_7100017ae0(size_t * * * * * * * param_1, long param_2, char * param_3, size_t * * * * * * * param_4, size_t * * * * * * * param_5, uint * param_6, undefined8 param_7, size_t * * * * * * * param_8)`
- **Size / BBs / Incoming:** 3632 bytes / 232 bb / 1 incoming refs
- **Match values:** error
- **Strings touched:** select/poll returned error;We are completely uploaded and fine
;NODE_PRE_REFRACT_BLEND;Ignoring the response-body
;Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)
;Leftovers after chunking: %zu bytes
;dys_yoga03_l_03_set;Rewinding %zu bytes
;Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld
;The requested document is not new enough
;Operation timed out after %ld milliseconds with %ld out of %ld bytes received;Done waiting for 100-continue
;Rewinding stream by : %zd bytes on url %s (zero-length body)
;plate_side;Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)
;we are done reading and this is set to close, stop send
;transfer closed with outstanding read data remaining;Operation timed out after %ld milliseconds with %ld bytes received;Failed writing data;select_item;%s in chunked-encoding;transfer closed with %ld bytes remaining to read;Failed to alloc scratch buffer!;Unrecognized content encoding type. libcurl understands `identity', `deflate' and `gzip' content encodings.;The entire document is already downloaded;HTTP server doesn't seem to support byte ranges. Cannot resume.;The requested document is not old enough
;Simulate a HTTP 304 response!

- **Callers:** FUN_7100009d00
- **Callees:** FUN_7100002af0;FUN_7100004200;FUN_71000086c0;FUN_71000093f0;FUN_710000bba0;FUN_710000fb30;FUN_7100012930;FUN_7100012dc0;FUN_7100012df0;FUN_71000130b0;FUN_7100014700;FUN_7100015020;FUN_71000151d0;FUN_7100015270;FUN_7100015800;FUN_7100015de0;...
- **Files:** [decomp](../decompiled/FUN_7100017ae0__7100017ae0.c)  [cfg](../decompiled/FUN_7100017ae0__7100017ae0.mmd)
- **Clone hash:** `05edffe8f78d3329`

```c

/* WARNING: Type propagation algorithm not settling */

ulong FUN_7100017ae0(size_t *******param_1,long param_2,char *param_3,size_t *******param_4,
                    size_t *******param_5,uint *param_6,undefined8 param_7,size_t *******param_8)

{
  uint *puVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar10;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  undefined8 extraout_x1_09;
  long extraout_x1_10;
  long extraout_x1_11;
  long extraout_x1_12;
  long extraout_x1_13;
  long extraout_x1_14;
  char *pcVar15;
  long extraout_x1_15;
  size_t ************ppppppppppppsVar16;
// ... (707 more lines)
```

## 42. `FUN_71020fbb90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** ERROR
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

## 43. `FUN_71019d0fb0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71019d0fb0`  (offset `0x19d0fb0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71019d0fb0(long * * param_1, long * param_2)`
- **Size / BBs / Incoming:** 11700 bytes / 516 bb / 1 incoming refs
- **Match values:** error
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

## 44. `FUN_71000088e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000088e0`  (offset `0x88e0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_71000088e0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 920 bytes / 59 bb / 2 incoming refs
- **Match values:** error
- **Strings touched:** select_item;Internal error clearing splay node = %d

- **Callers:** FUN_7100000a90;FUN_7100019730
- **Callees:** FUN_7100004200;FUN_7100006870;FUN_71000068f0;FUN_71000086c0;FUN_7100008d20;FUN_7100008fc0;FUN_7100015de0;FUN_7100016d90;FUN_7100017150;FUN_7100017740;FUN_7100017750;FUN_71000189d0;FUN_710001ec00;FUN_7100027150
- **Files:** [decomp](../decompiled/FUN_71000088e0__71000088e0.c)  [cfg](../decompiled/FUN_71000088e0__71000088e0.mmd)
- **Clone hash:** `126a2c335e5941ce`

```c

undefined8
FUN_71000088e0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  undefined1 auVar12 [12];
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (long *)0x0) || ((int)param_2[0xa27] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0x15] == 0) {
    return 0;
  }
  plVar5 = param_2 + 2;
  uVar1 = *(uint *)(param_2 + 9);
  if ((undefined8 *)*plVar5 == (undefined8 *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(long **)*plVar5 == param_2;
  }
  if (uVar1 < 0x11) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
    plVar11 = (long *)param_1[8];
    while (plVar2 = plVar11, plVar2 != (long *)0x0) {
// ... (118 more lines)
```

## 45. `FUN_7103949d70`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103949d70`  (offset `0x3949d70`)
- **Namespace:** `Global`
- **Signature:** `undefined1 * __cdecl FUN_7103949d70(byte param_1)`
- **Size / BBs / Incoming:** 284 bytes / 14 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** <jemalloc>: Error allocating TSD

- **Callers:** FUN_7103949cc0
- **Callees:** FUN_7103949e90;FUN_71039545b0;FUN_710395f620;FUN_710395f790;FUN_710395f7f0;FUN_7103960150;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7103949d70__7103949d70.c)  [cfg](../decompiled/FUN_7103949d70__7103949d70.mmd)
- **Clone hash:** `3d3ded0e27140b3f`

```c

undefined1 * FUN_7103949d70(byte param_1)

{
  undefined1 local_1868 [6160];
  long alStack_58 [3];
  undefined1 *local_40;
  undefined1 *local_38;
  byte local_2c;
  
  local_2c = param_1 & 1;
  local_38 = (undefined1 *)FUN_7103960150(DAT_7106dd50b0);
  if (((local_2c & 1) != 0) && (local_38 == (undefined1 *)0x0)) {
    local_38 = (undefined1 *)FUN_710395f620((long *)&DAT_7105297198,alStack_58);
    if (local_38 != (undefined1 *)0x0) {
      return local_38;
    }
    local_40 = (undefined1 *)FUN_710395f790();
    local_38 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      FUN_71039545b0("<jemalloc>: Error allocating TSD\n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *local_40 = 0;
    memset(local_1868,0,0x1810);
    local_1868[0] = 5;
    memcpy(local_38 + 8,local_1868,0x1810);
    FUN_7103949e90(local_38);
    FUN_710395f7f0((long *)&DAT_7105297198,alStack_58);
  }
  return local_38;
}


```

## 46. `FUN_710000e940`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710000e940`  (offset `0xe940`)
- **Namespace:** `Global`
- **Signature:** `ulong __cdecl FUN_710000e940(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 848 bytes / 78 bb / 2 incoming refs
- **Match values:** error
- **Strings touched:** The requested URL returned error: %d
- **Callers:** FUN_710000bdc0;FUN_710000fb30
- **Callees:** FUN_7100004200;FUN_7100016040;FUN_71000179b0;FUN_71000272a0;FUN_71000272c0
- **Files:** [decomp](../decompiled/FUN_710000e940__710000e940.c)  [cfg](../decompiled/FUN_710000e940__710000e940.mmd)
- **Clone hash:** `136e967bf74e425d`

```c

ulong FUN_710000e940(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x1;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar8 + 0x170);
  if (iVar1 - 100U < 100) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x4d00) != '\0') {
    uVar5 = 0;
    if (*(char *)(lVar8 + 0x6b8) != '\0') {
      uVar5 = 0x16;
    }
    return (ulong)uVar5;
  }
  bVar3 = false;
  if (((char)param_1[0x103] == '\0') ||
     ((iVar1 != 0x191 &&
      ((bVar3 = false, 299 < iVar1 || (*(char *)((long)param_1 + 0x822) == '\0')))))) {
LAB_710000ea44:
    if (*(char *)((long)param_1 + 0x819) == '\0') goto LAB_710000ea98;
LAB_710000ea4c:
    if ((iVar1 != 0x197) && ((299 < iVar1 || (*(char *)((long)param_1 + 0x822) == '\0'))))
    goto LAB_710000ea98;
    uVar7 = *(ulong *)(lVar8 + 0x4ce0) & *(ulong *)(lVar8 + 0x4cf0);
// ... (146 more lines)
```

## 47. `FUN_71036f6be0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71036f6be0`  (offset `0x36f6be0`)
- **Namespace:** `Global`
- **Signature:** `long __cdecl FUN_71036f6be0(long param_1, long * param_2, ulong param_3, void * param_4, long param_5)`
- **Size / BBs / Incoming:** 456 bytes / 22 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** Movie:Error(%08x)

- **Callees:** <EXTERNAL>::memcpy;<EXTERNAL>::nn::err::ShowError;<EXTERNAL>::nn::album::ReadAlbumMovieStream;<EXTERNAL>::printf;<EXTERNAL>::nn::fs::ReadFile
- **Files:** [decomp](../decompiled/FUN_71036f6be0__71036f6be0.c)  [cfg](../decompiled/FUN_71036f6be0__71036f6be0.mmd)
- **Clone hash:** `4d2e0a1886a385b0`

```c

long FUN_71036f6be0(long param_1,long *param_2,ulong param_3,void *param_4,long param_5)

{
  size_t __n;
  ulong uVar1;
  uint param1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long local_68;
  
  lVar6 = *(long *)(param_1 + 8);
  if (*(long *)(lVar6 + 0x30) == 0) {
    local_68 = 0;
    if (param_2 == (long *)0x0) {
      return 0;
    }
    if ((long)param_3 < 0) {
      return 0;
    }
    if (param_4 == (void *)0x0) {
      return 0;
    }
    if (param_5 == 0) {
      return 0;
    }
    if (*param_2 == **(long **)(lVar6 + 8)) {
      nn::fs::ReadFile(&local_68,*param_2,*(long *)(lVar6 + 0x20) + param_3,param_4,param_5);
      return local_68;
    }
  }
  else if ((*(long *)(lVar6 + 0x48) != 0) && (param_5 - 1U >> 0x1f == 0)) {
    uVar7 = (param_3 + param_5) - 1;
    uVar8 = *(ulong *)(lVar6 + 0x78);
    lVar3 = 0;
// ... (45 more lines)
```

## 48. `FUN_710023abc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710023abc0`  (offset `0x23abc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710023abc0(long * param_1, long param_2, long * param_3, long param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 936 bytes / 30 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** ..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;ClientProtocolRequestBroker: Error processing message. pBuffer=; Protocol ID=; CntSize=; Size=;chara/chara_4/chara_4_;  EndPoint: CID=; PID=; URL=;dys_yoga03_l_03_set;  <EndPoint is NULL>
- **Callers:** FUN_710023ab90
- **Callees:** FUN_71001afae0;FUN_71001afd40;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b3300;FUN_71001b6080;FUN_71001b60c0;FUN_71001b6320;FUN_71001b6470;FUN_71001b6610;FUN_71001d6ba0;FUN_71001d6c40;FUN_71001e6720;FUN_71001e6870;FUN_71001e6910;FUN_71001e69b0;...
- **Files:** [decomp](../decompiled/FUN_710023abc0__710023abc0.c)  [cfg](../decompiled/FUN_710023abc0__710023abc0.mmd)
- **Clone hash:** `f05e2e693bcc067f`

```c

void FUN_710023abc0(long *param_1,long param_2,long *param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  ushort *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 auStack_218 [37];
  undefined1 auStack_f0 [28];
  char local_d4 [4];
  undefined8 uStack_d0;
  char local_c8;
  ushort local_58 [2];
  uint local_54;
  
  lVar3 = param_4;
  FUN_71001e6870(&uStack_d0,param_4);
  puVar5 = local_58;
  FUN_710022a760((long)&uStack_d0,&local_54,puVar5);
  uVar11 = *(ulong *)(param_4 + 0x18);
  puVar2 = FUN_71001afd40((long)(param_1 + 1),(uint)local_58[0],puVar5,lVar3,param_5,param_6,param_7
                          ,param_8);
  FUN_71001afae0((long)(puVar2 + 1),uVar11);
  if (local_54 == 1) {
    FUN_710022a4b0(param_2);
    FUN_71001d6ba0((long)(param_1 + 10),param_2);
    FUN_71001e6720(auStack_218);
    local_d4[0] = '\0';
    FUN_710022bf40();
    (**(code **)(*param_1 + 0x18))(param_1,local_58[0],&uStack_d0,auStack_218,local_d4,param_3);
// ... (90 more lines)
```

## 49. `FUN_710009d0f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009d0f0`  (offset `0x9d0f0`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_710009d0f0(long * param_1)`
- **Size / BBs / Incoming:** 644 bytes / 29 bb / 2 incoming refs
- **Match values:** Error
- **Strings touched:** select_item;[Stripe] Memory Allocate Error!! : %d

- **Callees:** FUN_7100088090;FUN_71000880e0;FUN_7100093650;FUN_7100093660;FUN_710009f2c0
- **Files:** [decomp](../decompiled/FUN_710009d0f0__710009d0f0.c)  [cfg](../decompiled/FUN_710009d0f0__710009d0f0.mmd)
- **Clone hash:** `eee5f8cf4ae97269`

```c

/* WARNING: Removing unreachable block (ram,0x00710009d19c) */
/* WARNING: Removing unreachable block (ram,0x00710009d228) */

undefined8 FUN_710009d0f0(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = *param_1;
  if (*(char *)(*(long *)(lVar6 + 0xa0) + 0x752) != '\0') {
    return 0;
  }
  puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x828) + 0x10))(lVar6 + 0x828,0x40,0x80);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 **)(*param_1 + 0x418) = puVar4;
  fVar12 = *(float *)(*(long *)(*param_1 + 0xa0) + 0x800);
  lVar6 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2b8);
// ... (106 more lines)
```

## 50. `FUN_710009d800`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710009d800`  (offset `0x9d800`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710009d800(long * param_1, undefined8 param_2, undefined4 param_3, int param_4)`
- **Size / BBs / Incoming:** 356 bytes / 5 bb / 1 incoming refs
- **Match values:** Error
- **Strings touched:** StripeSystem is already initialized.
;select_item;[Stripe] Memory Allocate Error!! : %d

- **Callers:** FUN_71000a3e80
- **Callees:** FUN_7100093530;FUN_7100093660;<EXTERNAL>::memset
- **Files:** [decomp](../decompiled/FUN_710009d800__710009d800.c)  [cfg](../decompiled/FUN_710009d800__710009d800.mmd)
- **Clone hash:** `5da4d88113ee8c6e`

```c

void FUN_710009d800(long *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  
  if (DAT_71052ab970 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(int *)((long)puVar1 + 0x1c) = param_4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_7104f4a0d0;
    puVar1[1] = param_2;
    puVar1[4] = (long)param_4 * 0x90;
    __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0x90,0x80);
    puVar1[6] = __s;
    memset(__s,0,(long)*(int *)((long)puVar1 + 0x1c) * 0x90);
    lVar2 = puVar1[1];
    *(undefined8 *)(lVar2 + 0xf10) = 0;
    *(code **)(lVar2 + 0xf18) = FUN_710009d0f0;
    *(code **)(lVar2 + 0xf20) = FUN_710009d5a0;
    *(code **)(lVar2 + 0xf30) = FUN_710009d5f0;
    *(code **)(lVar2 + 0xf38) = FUN_710009d620;
    *(code **)(lVar2 + 0xf40) = FUN_710009d670;
    *(code **)(lVar2 + 0xf48) = FUN_710009d380;
    *(code **)(lVar2 + 0xf50) = FUN_710009d420;
    *(code **)(lVar2 + 0xf58) = FUN_710009d530;
    *(undefined8 *)(lVar2 + 0xf28) = 0;
    *(code **)(lVar2 + 0xf60) = FUN_710009d750;
    DAT_71052ab970 = puVar1;
    return;
  }
  FUN_7100093660();
// ... (3 more lines)
```

