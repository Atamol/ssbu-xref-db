# nintendo (funcs=50, hits=117)

Top 50 functions by hit count

## 1. `FUN_71000c36e0`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c36e0`  (offset `0xc36e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c36e0(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 548 bytes / 26 bb / 1 incoming refs
- **Match values:** Nintendo
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

## 2. `nex_connection_loop`  (hits=8)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710370bc10`  (offset `0x370bc10`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl nex_connection_loop(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 10148 bytes / 389 bb / 1 incoming refs
- **Match values:** nintendo;Nintendo
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71000b68a0;FUN_71000bcf30;FUN_7100146ba0;nex_get_connection_error;FUN_7100147c10;FUN_710015e850;FUN_7100161fa0;FUN_7100165f60;FUN_7100192f00;FUN_7100193770;FUN_71001b04d0;FUN_71001b0920;FUN_71001b1300;FUN_71001b1400;FUN_71001b87f0;FUN_71001b89e0;...
- **Files:** [decomp](../decompiled/nex_connection_loop__710370bc10.c)  [cfg](../decompiled/nex_connection_loop__710370bc10.mmd)
- **Clone hash:** `5713fa245a9ac6b3`

```c

void nex_connection_loop(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                        long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ErrorResultVariant *this;
  code *pcVar1;
  ushort *puVar2;
  ulong *puVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  uint *puVar19;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar20;
  undefined1 uVar21;
  long lVar22;
  ErrorResultVariant *this_00;
  ErrorResultVariant *this_01;
  ErrorResultVariant *this_02;
  long lVar23;
  long **pplVar24;
  long lVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
// ... (1486 more lines)
```

## 3. `FUN_71020fbb90`  (hits=7)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71020fbb90`  (offset `0x20fbb90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71020fbb90(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 145300 bytes / 223 bb / 2 incoming refs
- **Match values:** Nintendo;NINTENDO
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

## 4. `FUN_71000c4770`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c4770`  (offset `0xc4770`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c4770(int * param_1, long param_2)`
- **Size / BBs / Incoming:** 1020 bytes / 39 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000ed7a0
- **Callees:** FUN_71000b1c60;FUN_71000b1cf0;FUN_71000b2850;FUN_71000b2b10;FUN_71000b40e0;FUN_71000b4150;FUN_71000b4160;FUN_71000b4820;FUN_71000bce50;FUN_71000c2890;FUN_71000d2ca0;FUN_710015fd60;FUN_710015ff20;FUN_710015ffc0;FUN_7100160210;FUN_7100160220;...
- **Files:** [decomp](../decompiled/FUN_71000c4770__71000c4770.c)  [cfg](../decompiled/FUN_71000c4770__71000c4770.mmd)
- **Clone hash:** `e5d50cbc86220a97`

```c

void FUN_71000c4770(int *param_1,long param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_158;
  undefined4 local_150;
  int local_d8 [32];
  undefined4 local_58 [2];
  
  piVar11 = (int *)(param_2 + 0xd8);
  if ((*piVar11 == 1) || (*(char *)(param_2 + 0xb0) == '\0')) {
LAB_71000c4850:
    local_d8[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_d8 | 4));
    local_158 = (ulong)local_158._4_4_ << 0x20;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_d8 | 4),(Result *)&local_158);
    FUN_71000bce50(param_1,local_d8);
    return;
  }
  lVar4 = FUN_7100162410(DAT_71052add68);
  lVar6 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4 + -0x18;
  }
  *(long *)(param_2 + 0xa0) = lVar6;
// ... (128 more lines)
```

## 5. `FUN_7103703fd0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103703fd0`  (offset `0x3703fd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7103703fd0(long param_1, char param_2, ulong param_3)`
- **Size / BBs / Incoming:** 1100 bytes / 50 bb / 1 incoming refs
- **Match values:** nintendo;Nintendo
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** nex_connection_loop
- **Callees:** FUN_71000b68a0;FUN_71000bcf30;FUN_71001152f0;FUN_71001156e0;FUN_7100116380;FUN_7100130550;FUN_71001305b0;FUN_7100130670;FUN_7100146a30;FUN_7100146a90;FUN_7100146ac0;FUN_7100146ba0;FUN_71001723b0;thunk_FUN_7100186520;FUN_7100172460;FUN_71001b1300;...
- **Files:** [decomp](../decompiled/FUN_7103703fd0__7103703fd0.c)  [cfg](../decompiled/FUN_7103703fd0__7103703fd0.mmd)
- **Clone hash:** `d133f1f77a1fd770`

```c

void FUN_7103703fd0(long param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  int local_8b8 [396];
  int aiStack_288 [4];
  undefined8 auStack_278 [64];
  uint local_78 [6];
  
  lVar10 = DAT_71052adb38;
  if (((((param_2 == '\x02') && ((param_3 & 1) != 0)) && (*(char *)(param_1 + 0x289) != '\0')) &&
      ((DAT_71052adb38 != 0 && (iVar5 = FUN_7100146ba0(DAT_71052adb38), iVar5 == 1)))) &&
     (*(int *)(param_1 + 0x2c) == 0)) {
    if (*(long *)(param_1 + 0x2b0) != 0) {
      lVar7 = nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan(lVar7 - DAT_71074470e8);
      uVar1 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
      if ((((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                  ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
          ((long)uVar8 >> 0x3f)) * 1000 - *(long *)(param_1 + 0x2b0) < 3500000000) {
        return;
      }
    }
    local_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_8b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_8b8);
    memset(auStack_278,0,0x200);
    std::recursive_mutex::lock();
// ... (94 more lines)
```

## 6. `FUN_7101735af0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101735af0`  (offset `0x1735af0`)
- **Namespace:** `Global`
- **Signature:** `uint __cdecl FUN_7101735af0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 568 bytes / 26 bb / 1 incoming refs
- **Match values:** nintendo;Nintendo
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001d0a10;FUN_710170cea0;FUN_7101717960;FUN_71017303e0;FUN_7101735fb0;FUN_7101735fc0;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_7101735af0__7101735af0.c)  [cfg](../decompiled/FUN_7101735af0__7101735af0.mmd)
- **Clone hash:** `e258b8895df49d31`

```c

uint FUN_7101735af0(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined **local_90;
  code *local_88;
  long local_80;
  long local_78;
  long *local_70;
  long local_58;
  long local_50;
  long lStack_48;
  
  plVar8 = *(long **)(param_2 + 0x10);
  uVar4 = *(int *)((long)plVar8 + 0x1c) - 1;
  if (3 < uVar4) {
    uVar4 = 2;
  }
  if (uVar4 == 0) {
    if ((char)plVar8[0x80d8] == '\0') {
      return 0;
    }
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)(param_1 + 100),(Result *)((long)plVar8 + 0x406c4));
    iVar3 = *(int *)((long)plVar8 + 0x406c4);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(bool *)(param_1 + 0x61) = iVar3 == 0;
    *(undefined1 *)(param_1 + 0x62) = 1;
    *(undefined1 *)(param_1 + 0x60) = 1;
    if (*(int *)(*(long *)(param_2 + 0x10) + 0x1c) != 1) {
// ... (73 more lines)
```

## 7. `FUN_7103710a20`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7103710a20`  (offset `0x3710a20`)
- **Namespace:** `Global`
- **Signature:** `undefined8 __cdecl FUN_7103710a20(long param_1)`
- **Size / BBs / Incoming:** 596 bytes / 36 bb / 1 incoming refs
- **Match values:** nintendo;Nintendo
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b41d0;FUN_71001b4300;FUN_71001d1590;FUN_71001d5dd0;FUN_7100238f30;FUN_7100239af0;FUN_71002480e0;FUN_710170cea0;FUN_7101717960;FUN_7103700a90;FUN_710370fde0;FUN_7103710da0;FUN_7103710db0
- **Files:** [decomp](../decompiled/FUN_7103710a20__7103710a20.c)  [cfg](../decompiled/FUN_7103710a20__7103710a20.mmd)
- **Clone hash:** `71bf6d35dae1226f`

```c

undefined8 FUN_7103710a20(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  code *pcVar5;
  long lVar6;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  long lStack_68;
  long *local_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x30) == 0)) || (*(long *)(lVar6 + 0x18) == 0)) {
    return 2;
  }
  FUN_7103700a90(DAT_710533a0b8);
  if ((long *)**(long **)(lVar6 + 0x78) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar6 + 0x78) + 0x20))();
  }
  if ((long *)**(long **)(lVar6 + 0x68) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar6 + 0x68) + 0x20))();
  }
  if ((long *)**(long **)(lVar6 + 0x60) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar6 + 0x60) + 0x20))();
  }
  if (*(long **)(lVar6 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x28) + 0x20))();
  }
  if (*(long **)(lVar6 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x20) + 0x20))();
  }
  lVar3 = 0;
// ... (68 more lines)
```

## 8. `FUN_71000c3d90`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c3d90`  (offset `0xc3d90`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_71000c3d90(void)`
- **Size / BBs / Incoming:** 2524 bytes / 74 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** D:\home\ead-p2p\Env\Lib\NintendoSDK\NintendoSDK-NEX\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\NintendoSDK-NEX\Include\OnlineCore/src/Core/InstanceTable.h
- **Callers:** FUN_71000c3d80
- **Callees:** FUN_71000b1c30;FUN_71000b1c60;FUN_71000b1cb0;FUN_71000b1cf0;FUN_71000b1da0;FUN_71000b2850;FUN_71000b3880;FUN_71000b4180;FUN_71000b41f0;FUN_71000b4260;FUN_71000b9f60;FUN_71000ba0c0;FUN_71000bce50;FUN_71000bcf30;FUN_71000bed60;FUN_71000bedd0;...
- **Files:** [decomp](../decompiled/FUN_71000c3d90__71000c3d90.c)  [cfg](../decompiled/FUN_71000c3d90__71000c3d90.mmd)
- **Clone hash:** `28c7078cc52dd322`

```c

void FUN_71000c3d90(long *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  int *piVar14;
  int iVar15;
  ErrorResultVariant *this;
  long *plVar16;
  long lVar17;
  int aiStack_360 [4];
  undefined8 uStack_350;
  undefined4 uStack_348;
  ushort uStack_338;
  int aiStack_330 [4];
  int aiStack_320 [4];
  undefined **ppuStack_310;
  undefined4 auStack_308 [30];
  undefined8 auStack_290 [16];
  undefined8 auStack_210 [16];
  int aiStack_190 [32];
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  undefined8 auStack_c0 [3];
  ushort uStack_a8;
// ... (328 more lines)
```

## 9. `FUN_710226f500`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710226f500`  (offset `0x226f500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710226f500(long param_1)`
- **Size / BBs / Incoming:** 23732 bytes / 622 bb / 1 incoming refs
- **Match values:** nintendo
- **Strings touched:** backshield;is_enable_backshield;is_visible_backshield;is_force_visible_backshield;set_reflector;beetle;is_enable_capture_beetle;set_grab;boomerang;send_event_catch;set_assist_team_no;is_catch_area_hit_check;bossgalaga;is_enable_capture_bossgalaga;chicken;is_behind_fighter;is_front_fighter;clubshot;check_roll_up_area;curryshot;init_log_attack_info;is_preview_mode;diddypeanuts;DIDDYPEANUTS_DIDDYPEANUTS_SCALE_MUL;dragoonset;calc_dragoonsight2;get_stage_dragoon_camera_rectangle;dragoonsight;set_dragoonsight_effect;get_rotation_with_calc_camera_direction;calc_dragoonsight;healball;...
- **Callers:** FUN_7101f45620
- **Callees:** FUN_7102219310;FUN_7102235da0;FUN_7102239aa0;FUN_710223aa90;FUN_710223b0b0;FUN_710223c0c0;FUN_710223c740;FUN_710223d040;FUN_710223d940;FUN_710223ef10;FUN_710223ff20;FUN_7102242610;FUN_7102243740;FUN_71022490e0;FUN_710224bda0;FUN_71022505d0;...
- **Files:** [decomp](../decompiled/FUN_710226f500__710226f500.c)  [cfg](../decompiled/FUN_710226f500__710226f500.mmd)
- **Clone hash:** `355e9f5d7a84e54e`

```c

void FUN_710226f500(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar3;
  code *pcVar4;
  byte ****ppppbVar5;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (param_1 == 0) {
    FUN_7102219310(0);
    FUN_7102235da0(0);
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"backshield",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_enable_backshield",(long ****)FUN_7102237fc0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_visible_backshield",(long ****)FUN_71022380c0,ppppbVar5,
                   in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"is_force_visible_backshield",(long ****)FUN_71022381c0,
                   ppppbVar5,in_x4,in_x5,in_x6,in_x7);
    FUN_7103728bf0(&local_38,(uint *)"set_reflector",(long ****)FUN_71022382c0,ppppbVar5,in_x4,in_x5
                   ,in_x6,in_x7);
    if ((local_38 != 0) && (CONCAT44(uStack_2c,local_30) != 0)) {
      FUN_71038f55d0(local_38,local_28);
    }
    ppppbVar5 = (byte ****)0xfffffffd;
    FUN_7103728630(&local_38,0,(undefined **)"beetle",0xfffffffd,in_x4,in_x5,in_x6,in_x7);
// ... (2227 more lines)
```

## 10. `FUN_71017357e0`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71017357e0`  (offset `0x17357e0`)
- **Namespace:** `Global`
- **Signature:** `undefined4 __cdecl FUN_71017357e0(long param_1, long param_2)`
- **Size / BBs / Incoming:** 784 bytes / 38 bb / 1 incoming refs
- **Match values:** nintendo;Nintendo
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b1870;FUN_71001d1590;FUN_710170cea0;FUN_7101717960;FUN_71017303e0;FUN_7101735fb0;FUN_7101735fc0;<EXTERNAL>::nn::album::GetAlbumMovieStreamSize
- **Files:** [decomp](../decompiled/FUN_71017357e0__71017357e0.c)  [cfg](../decompiled/FUN_71017357e0__71017357e0.mmd)
- **Clone hash:** `9a18da8bedb680fe`

```c

undefined4 FUN_71017357e0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined ***pppuVar3;
  uint *puVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined **local_70;
  code *local_68;
  long local_60;
  undefined8 local_58;
  undefined ***local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long local_38;
  
  plVar9 = *(long **)(param_2 + 0x10);
  if (*plVar9 == 0) {
    return 2;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  nn::album::GetAlbumMovieStreamSize(&local_38,*(undefined8 *)(lVar10 + 8));
  local_68 = (code *)((ulong)local_68 & 0xffffffffffffff00);
  local_50 = (undefined ***)0x0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
// ... (103 more lines)
```

## 11. `FUN_710171bb70`  (hits=4)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710171bb70`  (offset `0x171bb70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710171bb70(long param_1)`
- **Size / BBs / Incoming:** 352 bytes / 17 bb / 1 incoming refs
- **Match values:** nintendo;Nintendo
- **Strings touched:** NODE_PRE_REFRACT_BLEND;C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_7101717960
- **Files:** [decomp](../decompiled/FUN_710171bb70__710171bb70.c)  [cfg](../decompiled/FUN_710171bb70__710171bb70.mmd)
- **Clone hash:** `eb01797d28144e6a`

```c

void FUN_710171bb70(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar14;
  undefined8 *puVar13;
  
  plVar14 = *(long **)(param_1 + 0x10);
  *plVar14 = **(long **)(*(long *)(param_1 + 8) + 0x68);
  lVar8 = plVar14[0xc9];
  if ((ulong)((plVar14[0xcb] - lVar8 >> 3) * -0x5555555555555555) < 100) {
    lVar9 = plVar14[0xca];
    puVar5 = FUN_71001b1820(0x960);
    puVar1 = (undefined8 *)((long)puVar5 + (lVar9 - lVar8));
    puVar6 = (undefined8 *)plVar14[0xc9];
    puVar10 = puVar1;
    puVar11 = puVar1;
    puVar12 = (undefined8 *)plVar14[0xca];
    if ((undefined8 *)plVar14[0xca] != puVar6) {
      do {
        puVar13 = puVar12 + -3;
        uVar2 = puVar12[-2];
        uVar3 = puVar12[-1];
        puVar11 = puVar10 + -3;
        *puVar11 = *puVar13;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar3;
        puVar10 = puVar11;
// ... (47 more lines)
```

## 12. `FUN_7100047d00`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100047d00`  (offset `0x47d00`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100047d00(undefined8 param_1, undefined8 param_2, undefined8 param_3)`
- **Size / BBs / Incoming:** 172 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoWare_Ui2d-8_2_1-Release
- **Callers:** FUN_710375abe0
- **Callees:** FUN_7100048d60;<EXTERNAL>::nn::util::ReferSymbol;<EXTERNAL>::nn::os::GetSystemTick
- **Files:** [decomp](../decompiled/FUN_7100047d00__7100047d00.c)  [cfg](../decompiled/FUN_7100047d00__7100047d00.mmd)
- **Clone hash:** `b8534d7b2df097f2`

```c

void FUN_7100047d00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = nn::os::GetSystemTick();
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Ui2d-8_2_1-Release");
  FUN_7100048d60(param_1,param_2,param_3);
  DAT_71052ab508 = &PTR_PTR_7104f3f208;
  DAT_71052ab510 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  DAT_71052ab514 = (DAT_71052ab510 ^ DAT_71052ab510 >> 0x1e) * 0x6c078965 + 2;
  DAT_71052ab518 = (DAT_71052ab514 ^ DAT_71052ab514 >> 0x1e) * 0x6c078965 + 3;
  DAT_71052ab51c = (DAT_71052ab518 ^ DAT_71052ab518 >> 0x1e) * 0x6c078965 + 4;
  return;
}


```

## 13. `FUN_7100031500`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100031500`  (offset `0x31500`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100031500(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoSDK_gfx-8_2_1-Release
- **Callers:** FUN_7100031440
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_7100031500__7100031500.c)  [cfg](../decompiled/FUN_7100031500__7100031500.mmd)
- **Clone hash:** `83207b574b345904`

```c

void FUN_7100031500(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_gfx-8_2_1-Release");
  return;
}


```

## 14. `FUN_71000afcf0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000afcf0`  (offset `0xafcf0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000afcf0(long param_1, undefined8 * param_2)`
- **Size / BBs / Incoming:** 156 bytes / 7 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoWare_G3d-8_2_1-Release
- **Callers:** FUN_710009a540
- **Callees:** FUN_71000338f0;FUN_7100033920;FUN_710003b000;FUN_71000afeb0;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71000afcf0__71000afcf0.c)  [cfg](../decompiled/FUN_71000afcf0__71000afcf0.mmd)
- **Clone hash:** `d058cc518129328c`

```c

void FUN_71000afcf0(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_G3d-8_2_1-Release");
  plVar2 = *(long **)(param_1 + 0xa8);
  if ((plVar2 != (long *)0x0) &&
     (puVar4 = *(undefined4 **)(param_1 + 0xb0), puVar4 != (undefined4 *)0x0)) {
    FUN_71000338f0(plVar2);
    FUN_7100033920(plVar2,param_2,puVar4);
    FUN_710003b000(plVar2);
  }
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_71000afeb0(*(long *)(param_1 + 0x28) + lVar3,param_2);
      lVar3 = lVar3 + 0x78;
    } while ((ulong)uVar1 * 0x78 - lVar3 != 0);
  }
  return;
}


```

## 15. `FUN_71000a3d30`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000a3d30`  (offset `0xa3d30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000a3d30(long * param_1, long param_2)`
- **Size / BBs / Incoming:** 332 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoWare_Vfx-8_2_1-Release
- **Callers:** FUN_710055d080
- **Callees:** FUN_7100031850;FUN_71000338f0;<EXTERNAL>::memset;<EXTERNAL>::nn::util::ReferSymbol;<EXTERNAL>::nn::os::InitializeMutex
- **Files:** [decomp](../decompiled/FUN_71000a3d30__71000a3d30.c)  [cfg](../decompiled/FUN_71000a3d30__71000a3d30.mmd)
- **Clone hash:** `b76b8e7fd35c92e3`

```c

void FUN_71000a3d30(long *param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)&PTR_FUN_7104f4a130;
  param_1[8] = (long)&DAT_7104f49d08;
  memset(param_1 + 0x11c,0,0x898);
  FUN_7100031850(param_1 + 0x263);
  *(undefined1 *)(param_1 + 0x26d) = 0;
  FUN_71000338f0(param_1 + 0x26e);
  param_1[0x298] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x299] = (long)&PTR_FUN_7104f49c08;
  FUN_7100031850(param_1 + 0x29a);
  FUN_71000338f0(param_1 + 0x2a3);
  param_1[0x2c9] = (long)(param_1 + 0x2c9);
  param_1[0x2ca] = (long)(param_1 + 0x2c9);
  param_1[0x2cb] = (long)(param_1 + 0x2cb);
  param_1[0x2cc] = (long)(param_1 + 0x2cb);
  param_1[0x2ce] = 0;
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d3] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d8),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2dc),false,0);
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Vfx-8_2_1-Release");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x256] = 0;
  param_1[0x255] = 0;
                    /* WARNING: Could not recover jumptable at 0x0071000a3e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
// ... (5 more lines)
```

## 16. `FUN_7100027380`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100027380`  (offset `0x27380`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100027380(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 2 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoSDK_libcurl-8_2_1-Release
- **Callers:** FUN_71000007f0;FUN_7100000960
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_7100027380__7100027380.c)  [cfg](../decompiled/FUN_7100027380__7100027380.mmd)
- **Clone hash:** `e0fa850d74298cae`

```c

void FUN_7100027380(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_libcurl-8_2_1-Release");
  return;
}


```

## 17. `Libz_SigloMiddlewareInfo`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710002a2e0`  (offset `0x2a2e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl Libz_SigloMiddlewareInfo(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 3 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoSDK_libz-8_2_1-Release
- **Callers:** FUN_7100028420;FUN_710002c1f0
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/Libz_SigloMiddlewareInfo__710002a2e0.c)  [cfg](../decompiled/Libz_SigloMiddlewareInfo__710002a2e0.mmd)
- **Clone hash:** `c485df3829f8445b`

```c

void Libz_SigloMiddlewareInfo(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoSDK_libz-8_2_1-Release");
  return;
}


```

## 18. `FUN_71000c4e70`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c4e70`  (offset `0xc4e70`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c4e70(int * param_1, long * param_2)`
- **Size / BBs / Incoming:** 688 bytes / 19 bb / 1 incoming refs
- **Match values:** nintendo
- **Strings touched:** nncs1-%.n.n.srv.nintendo.net;nncs2-%.n.n.srv.nintendo.net
- **Callers:** FUN_71000d2dc0
- **Callees:** FUN_71000b1f20;FUN_71000ba850;FUN_71000bb5d0;FUN_71000bb680;FUN_71000bce50;FUN_71000bcf30;FUN_71000c5120;FUN_71000c74c0;FUN_71000cf9e0;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000c4e70__71000c4e70.c)  [cfg](../decompiled/FUN_71000c4e70__71000c4e70.mmd)
- **Clone hash:** `b5c6de8073799c1b`

```c

void FUN_71000c4e70(int *param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  ErrorResultVariant *this;
  long lVar7;
  int local_78 [4];
  undefined8 local_68;
  long local_58;
  undefined4 local_48 [2];
  
  local_58 = 0;
  FUN_71000bb5d0(&local_58);
  lVar2 = FUN_71000c74c0(param_2[0x12]);
  if (*(int *)(lVar2 + 8) == 4) {
LAB_71000c4eb0:
    local_68 = 0;
    FUN_71000bb5d0(&local_68);
    lVar2 = local_58;
    uVar5 = local_68;
    plVar3 = FUN_71000bb680();
    lVar7 = *plVar3;
    uVar4 = (**(code **)(*param_2 + 0x58))(param_2);
    if ((uVar4 & 1) != 0) {
      DAT_71052ac600 = 0;
      if (lVar7 != 0) {
        DAT_71052ac600 = (undefined2)((long)(uVar5 - lVar2) / lVar7);
      }
    }
    local_68 = local_68 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_68 | 4));
    local_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_68 | 4),(Result *)local_78);
// ... (64 more lines)
```

## 19. `FUN_710007add0`  (hits=2)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710007add0`  (offset `0x7add0`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710007add0(void)`
- **Size / BBs / Incoming:** 2116 bytes / 13 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NintendoWare_Font-8_2_1-Release;chara/chara_4/chara_4_;ShaderParam;PerCharacterParamBlock;ShaderParamBlackWhiteInterpolation;uTextureSrc;aVertex
- **Callees:** FUN_7100031070;FUN_71000310a0;FUN_71000310c0;FUN_7100031140;FUN_71000312b0;FUN_71000312d0;FUN_71000312e0;FUN_7100031720;FUN_7100031880;FUN_71000319b0;FUN_71000319d0;FUN_7100031a00;FUN_71000338d0;FUN_71000338e0;FUN_7100033920;FUN_7100037ef0;...
- **Files:** [decomp](../decompiled/FUN_710007add0__710007add0.c)  [cfg](../decompiled/FUN_710007add0__710007add0.mmd)
- **Clone hash:** `ccc74afb5f657478`

```c

undefined4
FUN_710007add0(long param_1,undefined8 *param_2,long param_3,undefined4 param_4,long *param_5,
              long param_6)

{
  undefined1 *puVar1;
  uint6 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  void *__dest;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Font-8_2_1-Release");
  if (*(int *)(param_1 + 0x8c) != 0) {
    return 0;
// ... (222 more lines)
```

## 20. `FUN_71001531b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001531b0`  (offset `0x1531b0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001531b0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
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

## 21. `FUN_7100167630`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100167630`  (offset `0x167630`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100167630(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+PiaLocal-5_19_1
- **Callers:** FUN_7100167370
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_7100167630__7100167630.c)  [cfg](../decompiled/FUN_7100167630__7100167630.mmd)
- **Clone hash:** `48fdcba509135d52`

```c

void FUN_7100167630(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaLocal-5_19_1");
  return;
}


```

## 22. `FUN_71033778a0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71033778a0`  (offset `0x33778a0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71033778a0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 4848 bytes / 250 bb / 2 incoming refs
- **Match values:** nintendo
- **Strings touched:** RubyFont
- **Callers:** FUN_7101977420;FUN_71033773d0
- **Callees:** FUN_71000001c0;FUN_710007f500;FUN_710007f870;FUN_71000803c0;FUN_710323b9e0;FUN_7103378b90;FUN_7103540a00;FUN_7103540b10;FUN_710354ccd0;FUN_7103720c30;FUN_7103760840;FUN_7103760b00;FUN_7103760e20;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;...
- **Files:** [decomp](../decompiled/FUN_71033778a0__71033778a0.c)  [cfg](../decompiled/FUN_71033778a0__71033778a0.mmd)
- **Clone hash:** `43435d544eae641f`

```c

/* WARNING: Type propagation algorithm not settling */

void FUN_71033778a0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
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
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 uVar8;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  long *********ppppppppplVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  char cVar13;
  uint uVar14;
  char *pcVar15;
  long lVar16;
// ... (820 more lines)
```

## 23. `FUN_71001b87f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71001b87f0`  (offset `0x1b87f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71001b87f0(void)`
- **Size / BBs / Incoming:** 492 bytes / 22 bb / 2 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NEX-4_6_13-appc2
- **Callers:** FUN_71001d5a90;nex_connection_loop
- **Callees:** FUN_71001b7d40;malloc;<EXTERNAL>::nn::util::ReferSymbol;<EXTERNAL>::nn::os::InitializeMutex
- **Files:** [decomp](../decompiled/FUN_71001b87f0__71001b87f0.c)  [cfg](../decompiled/FUN_71001b87f0__71001b87f0.mmd)
- **Clone hash:** `65a27b4281cebd4f`

```c

/* WARNING: Removing unreachable block (ram,0x0071001b889c) */
/* WARNING: Removing unreachable block (ram,0x0071001b88c8) */

void FUN_71001b87f0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  
  (**(code **)(DAT_71052aed00 + 0x10))(&DAT_71052aed00);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX-4_6_13-appc2");
  if (DAT_71052aec10 == (undefined8 *)0x0) {
    if (DAT_71052ae0a8 == (code *)0x0) {
      puVar5 = malloc(0x88);
    }
    else {
      puVar5 = (undefined8 *)(*DAT_71052ae0a8)(0x88);
    }
    *puVar5 = DAT_71052ae0b0;
    puVar7 = puVar5 + 2;
    *puVar7 = &PTR_FUN_7104f54e58;
    puVar5[7] = 0;
    puVar5[8] = &PTR_FUN_7104f54b48;
    puVar5[9] = &PTR_FUN_7104f54c30;
    puVar5[3] = &PTR_FUN_7104f552e8;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    nn::os::InitializeMutex((MutexType *)(puVar5 + 10),true,0);
    *(undefined1 *)(puVar5 + 0xf) = 0;
    *(undefined8 *)((long)puVar5 + 0x7c) = 1;
    puVar5[0xe] = &PTR_FUN_7104f54b90;
    *(undefined4 *)((long)puVar5 + 0x84) = 0;
    puVar5[8] = &PTR_FUN_7104f551a8;
// ... (48 more lines)
```

## 24. `FUN_71000b1940`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000b1940`  (offset `0xb1940`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000b1940(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+PiaCommon-5_19_1
- **Callers:** FUN_71000b1490
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71000b1940__71000b1940.c)  [cfg](../decompiled/FUN_71000b1940__71000b1940.mmd)
- **Clone hash:** `96400c6cb6fd1169`

```c

void FUN_71000b1940(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaCommon-5_19_1");
  return;
}


```

## 25. `FUN_71000bc930`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000bc930`  (offset `0xbc930`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000bc930(int * param_1, long * param_2, long param_3, int param_4, uint param_5, uint param_6, int param_7)`
- **Size / BBs / Incoming:** 340 bytes / 16 bb / 2 incoming refs
- **Match values:** NINTENDO
- **Strings touched:** 1.2.11.f-NINTENDO-SDK-v1
- **Callers:** FUN_71000b3260;FUN_7100155db0
- **Callees:** FUN_710002b820;FUN_710002d920;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000bc930__71000bc930.c)  [cfg](../decompiled/FUN_71000bc930__71000bc930.mmd)
- **Clone hash:** `0472b40dda3aef36`

```c

void FUN_71000bc930(int *param_1,long *param_2,long param_3,int param_4,uint param_5,uint param_6,
                   int param_7)

{
  undefined8 uVar1;
  long lVar2;
  int local_50 [4];
  undefined4 local_38 [2];
  
  if ((((param_3 == 0) || (param_4 == 0)) || (9 < param_5)) ||
     (((param_6 & 0xfffffff8) != 8 || (8 < param_7 - 1U)))) {
    local_50[0] = 0x10c07;
  }
  else if (((int)param_2[2] == 0) && (*param_2 != 0)) {
    param_2[0xe] = (long)param_2;
    param_2[0xc] = (long)FUN_71000bc7e0;
    param_2[0xd] = (long)FUN_71000bc830;
    uVar1 = FUN_710002b820((long)(param_2 + 4),param_5,8,param_6,param_7,0,
                           "1.2.11.f-NINTENDO-SDK-v1",0x70);
    if ((int)uVar1 == -4) {
      local_50[0] = 0x10c01;
    }
    else if ((int)uVar1 == 0) {
      lVar2 = FUN_710002d920((long)(param_2 + 4),0x80);
      param_2[3] = lVar2 + -0x80;
      param_2[7] = param_3;
      *(int *)(param_2 + 8) = param_4;
      local_50[0] = 0;
    }
    else {
      local_50[0] = 0xc0b;
    }
  }
  else {
    local_50[0] = 0x10c08;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
// ... (5 more lines)
```

## 26. `FUN_7100012df0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100012df0`  (offset `0x12df0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100012df0(long * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 216 bytes / 8 bb / 2 incoming refs
- **Match values:** NINTENDO
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

## 27. `FUN_710002b7f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710002b7f0`  (offset `0x2b7f0`)
- **Namespace:** `Global`
- **Signature:** `char * __cdecl FUN_710002b7f0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 3 incoming refs
- **Match values:** NINTENDO
- **Strings touched:** 1.2.11.f-NINTENDO-SDK-v1
- **Callers:** FUN_71000130b0;FUN_7100025dc0
- **Files:** [decomp](../decompiled/FUN_710002b7f0__710002b7f0.c)  [cfg](../decompiled/FUN_710002b7f0__710002b7f0.mmd)
- **Clone hash:** `ee1074e132a3b95e`

```c

char * FUN_710002b7f0(void)

{
  return "1.2.11.f-NINTENDO-SDK-v1";
}


```

## 28. `FUN_71002a4430`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a4430`  (offset `0x2a4430`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a4430(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** nintendo
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;joinRoom;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a4430__71002a4430.c)  [cfg](../decompiled/FUN_71002a4430__71002a4430.mmd)
- **Clone hash:** `1802d92a98223cae`

```c

void FUN_71002a4430(long param_1)

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

## 29. `FUN_710025cdd0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710025cdd0`  (offset `0x25cdd0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710025cdd0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 76 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NEX_UT-4_6_13
- **Callers:** FUN_7103710260
- **Callees:** FUN_7100234fb0;FUN_710025eaf0;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_710025cdd0__710025cdd0.c)  [cfg](../decompiled/FUN_710025cdd0__710025cdd0.mmd)
- **Clone hash:** `d1b7e7686e30ef58`

```c

void FUN_710025cdd0(undefined8 *param_1)

{
  FUN_7100234fb0(param_1,0x6e);
  *param_1 = &DAT_7104f5ddb8;
  FUN_710025eaf0(param_1 + 4,0x6e);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_UT-4_6_13");
  return;
}


```

## 30. `FUN_71000c03d0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c03d0`  (offset `0xc03d0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c03d0(int * param_1, long * param_2, long param_3, int param_4)`
- **Size / BBs / Incoming:** 216 bytes / 12 bb / 1 incoming refs
- **Match values:** NINTENDO
- **Strings touched:** 1.2.11.f-NINTENDO-SDK-v1
- **Callers:** FUN_7100153f80
- **Callees:** FUN_7100028410;FUN_71000bce50;<EXTERNAL>::nn::err::ErrorResultVariant::ErrorResultVariant;<EXTERNAL>::nn::err::ErrorResultVariant::operator=
- **Files:** [decomp](../decompiled/FUN_71000c03d0__71000c03d0.c)  [cfg](../decompiled/FUN_71000c03d0__71000c03d0.mmd)
- **Clone hash:** `6882ad9ef7383ffa`

```c

void FUN_71000c03d0(int *param_1,long *param_2,long param_3,int param_4)

{
  int iVar1;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_38[0] = 0x10c07;
  }
  else if (param_2[0xe] == 0) {
    local_38[0] = 0x10c08;
  }
  else {
    *param_2 = param_3;
    *(int *)(param_2 + 1) = param_4;
    param_2[8] = (long)FUN_71000c0280;
    param_2[9] = (long)FUN_71000c02d0;
    param_2[10] = (long)param_2;
    iVar1 = FUN_7100028410((long)param_2,"1.2.11.f-NINTENDO-SDK-v1",0x70);
    if (iVar1 == -4) {
      local_38[0] = 0x10c01;
    }
    else if (iVar1 == 0) {
      local_38[0] = 0;
    }
    else {
      local_38[0] = 0xc0b;
    }
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_38 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_38);
  return;
}


```

## 31. `FUN_710013e3f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710013e3f0`  (offset `0x13e3f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710013e3f0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+PiaSession-5_19_1
- **Callers:** FUN_710013c880
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_710013e3f0__710013e3f0.c)  [cfg](../decompiled/FUN_710013e3f0__710013e3f0.mmd)
- **Clone hash:** `b0378fd05cda376c`

```c

void FUN_710013e3f0(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaSession-5_19_1");
  return;
}


```

## 32. `FUN_7100261c50`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100261c50`  (offset `0x261c50`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100261c50(undefined8 * param_1)`
- **Size / BBs / Incoming:** 164 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NEX_DS-4_6_13
- **Callers:** FUN_7103710260
- **Callees:** FUN_7100234fb0;FUN_710028c010;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_7100261c50__7100261c50.c)  [cfg](../decompiled/FUN_7100261c50__7100261c50.mmd)
- **Clone hash:** `8489e88d5b9d7688`

```c

void FUN_7100261c50(undefined8 *param_1)

{
  FUN_7100234fb0(param_1,0x73);
  *param_1 = &PTR_FUN_7104f5e8c0;
  param_1[4] = &PTR_FUN_7104f5ec68;
  FUN_710028c010(param_1 + 5,0x73);
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined1 *)((long)param_1 + 0xc4) = 1;
  param_1[0x19] = 0xea60000000a7;
  param_1[0x1a] = 0x4000;
  *param_1 = &DAT_7104f5e1a8;
  param_1[0x17] = &DAT_7104f5e7f0;
  param_1[4] = &DAT_7104f5e650;
  param_1[0x1b] = 0x8000;
  param_1[0x1c] = 0x10000;
  param_1[0x1d] = 0x10000;
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_DS-4_6_13");
  return;
}


```

## 33. `FUN_7101762e80`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101762e80`  (offset `0x1762e80`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101762e80(undefined8 param_1, long param_2)`
- **Size / BBs / Incoming:** 360 bytes / 22 bb / 6 incoming refs
- **Match values:** nintendo
- **Strings touched:** https://www.youtube.com/embed/;https://www-aaaba-%-hac.cdn.nintendo.net/
- **Callers:** FUN_71018b3a20;FUN_71018ed510;FUN_7101aa7cc0;FUN_7101beee80;FUN_7101c44740;FUN_71032ed230
- **Callees:** FUN_71017633e0;FUN_7101763840;FUN_7101763850
- **Files:** [decomp](../decompiled/FUN_7101762e80__7101762e80.c)  [cfg](../decompiled/FUN_7101762e80__7101762e80.mmd)
- **Clone hash:** `b143344a77231ce4`

```c

void FUN_7101762e80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined **local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_30;
  
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  for (uVar6 = 0; "https://www.youtube.com/embed/"[uVar6] != '\0'; uVar6 = uVar6 + 2) {
    *(char *)(param_2 + uVar6 + 0x28) = "https://www.youtube.com/embed/"[uVar6];
    if ("https://www.youtube.com/embed/"[uVar6 + 1] == '\0') {
      uVar6 = uVar6 + 1;
      break;
    }
    *(char *)(param_2 + uVar6 + 0x29) = "https://www.youtube.com/embed/"[uVar6 + 1];
  }
  *(undefined1 *)(param_2 + 0x28 + (uVar6 & 0xffffffff)) = 0;
  *(int *)(param_2 + 0x24) = (int)uVar6;
  uVar5 = (uint)*(byte *)(param_2 + 0x28);
  uVar3 = 0x811c9dc5;
  uVar8 = uVar3;
  if (*(byte *)(param_2 + 0x28) != 0) {
    pbVar7 = (byte *)(param_2 + 0x29);
    do {
      uVar8 = uVar8 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (uVar5 != 0);
// ... (48 more lines)
```

## 34. `FUN_7100116950`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100116950`  (offset `0x116950`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7100116950(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+PiaLan-5_19_1
- **Callers:** FUN_71001166b0
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_7100116950__7100116950.c)  [cfg](../decompiled/FUN_7100116950__7100116950.mmd)
- **Clone hash:** `2726e5d4501dace9`

```c

void FUN_7100116950(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaLan-5_19_1");
  return;
}


```

## 35. `FUN_71000c08e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000c08e0`  (offset `0xc08e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000c08e0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+PiaNex-5_19_1-forNEX-4_6_3
- **Callers:** FUN_71000c05c0
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71000c08e0__71000c08e0.c)  [cfg](../decompiled/FUN_71000c08e0__71000c08e0.mmd)
- **Clone hash:** `29c0fc467dc0a33b`

```c

void FUN_71000c08e0(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+PiaNex-5_19_1-forNEX-4_6_3");
  return;
}


```

## 36. `FUN_71032ed230`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71032ed230`  (offset `0x32ed230`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71032ed230(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, undefined8 * param_7, ulong param_8)`
- **Size / BBs / Incoming:** 3240 bytes / 135 bb / 1 incoming refs
- **Match values:** nintendo
- **Strings touched:** https://www-aaaba-%-hac.cdn.nintendo.net/{$lang}/index.html
- **Callers:** FUN_71022d23e0
- **Callees:** FUN_71000001c0;FUN_7101762560;FUN_7101762b40;FUN_7101762e80;FUN_7101764000;FUN_7101765b20;FUN_71017f4bb0;FUN_7101afe3e0;FUN_7101afed00;FUN_71025d2490;FUN_7103342a40;FUN_71037418e0;FUN_710392e290;<EXTERNAL>::__cxa_guard_acquire;<EXTERNAL>::__cxa_guard_release;<EXTERNAL>::nn::time::StandardNetworkSystemClock::GetCurrentTime;...
- **Files:** [decomp](../decompiled/FUN_71032ed230__71032ed230.c)  [cfg](../decompiled/FUN_71032ed230__71032ed230.mmd)
- **Clone hash:** `4a995c5a5b75fee5`

```c

void FUN_71032ed230(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,long param_6,undefined8 *param_7,ulong param_8)

{
  float *pfVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  long ***ppplVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  long ****pppplVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  code *pcVar21;
  uint uVar22;
  uint uVar23;
  undefined **ppuVar24;
  undefined1 auVar25 [16];
  byte ***local_a70;
  byte local_a68 [2];
  undefined6 local_a66;
  undefined2 uStack_a60;
  undefined1 local_a5e;
  undefined8 local_a5c;
  undefined4 local_a54;
  undefined8 local_a50;
  undefined1 local_a48;
// ... (516 more lines)
```

## 37. `FUN_710022ce20`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022ce20`  (offset `0x22ce20`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_710022ce20(void)`
- **Size / BBs / Incoming:** 276 bytes / 3 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** <unknown>;dys_yoga03_l_03_set;NintendoNotificationEventManager
- **Callees:** FUN_71001af850;FUN_71001b47e0;FUN_71001b4910;FUN_71001d22e0;FUN_71001db340
- **Files:** [decomp](../decompiled/FUN_710022ce20__710022ce20.c)  [cfg](../decompiled/FUN_710022ce20__710022ce20.mmd)
- **Clone hash:** `425173a57eae4abf`

```c

undefined8 * FUN_710022ce20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = FUN_71001af850(0xa8);
  if (puVar1 != (undefined8 *)0x0) {
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"<unknown>",-1);
    FUN_71001d22e0(puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
    *(undefined2 *)(puVar1 + 9) = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = &DAT_7104f5a558;
    puVar1[0x12] = 0;
    puVar1[0x11] = puVar1 + 0x12;
    *(undefined4 *)(puVar1 + 0xc) = 9;
    puVar1[0x13] = 0;
    puVar1[0x14] = param_1;
    auStack_60[0] = 0;
    uStack_48 = 0x10;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    FUN_71001b47e0((long)&ppuStack_68,"NintendoNotificationEventManager",-1);
    FUN_71001db340((long)puVar1,(long)&ppuStack_68);
    ppuStack_68 = &PTR_FUN_710509cc08;
// ... (5 more lines)
```

## 38. `FUN_71002a5cc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a5cc0`  (offset `0x2a5cc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a5cc0(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** nintendo
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

## 39. `FUN_7100249190`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100249190`  (offset `0x249190`)
- **Namespace:** `Global`
- **Signature:** `undefined FUN_7100249190(void)`
- **Size / BBs / Incoming:** 780 bytes / 17 bb / 3 incoming refs
- **Match values:** nintendo
- **Strings touched:** dummy;g%08x-%%.s.n.srv.nintendo.net;select_item;https://%s/
- **Callees:** FUN_71001af850;FUN_71001aff70;FUN_71001b12a0;FUN_71001b2f70;FUN_71001b3300;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b52a0;FUN_71001b6080;FUN_71001b60c0;FUN_71001d1590;FUN_71001d3d60;FUN_71001d4540;FUN_71001d4590;...
- **Files:** [decomp](../decompiled/FUN_7100249190__7100249190.c)  [cfg](../decompiled/FUN_7100249190__7100249190.mmd)
- **Clone hash:** `9786bb9660fd20d9`

```c

void FUN_7100249190(long param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 in_x4;
  ulong in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar7;
  undefined1 **ppuVar8;
  undefined **ppuStack_3a0;
  undefined1 auStack_398 [16];
  undefined1 *puStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  code *pcStack_370;
  undefined8 uStack_368;
  undefined1 *puStack_360;
  undefined4 auStack_250 [64];
  undefined **ppuStack_150;
  char acStack_148 [16];
  char *pcStack_138;
  undefined8 uStack_130;
  
  iVar7 = *(int *)(param_1 + 0x178);
  if (iVar7 != -1) {
    FUN_71001b12a0((ulong *)&ppuStack_378);
    ppuStack_378._0_4_ = (int)ppuStack_378 - *(int *)(param_1 + 0x180);
    iVar7 = *(int *)(param_1 + 0x178) - (int)ppuStack_378;
    if (iVar7 == 0 || *(int *)(param_1 + 0x178) < (int)ppuStack_378) {
      ppuStack_150 = (undefined **)CONCAT44(ppuStack_150._4_4_,0x8001000b);
      FUN_71001b4200((undefined4 *)&ppuStack_378,(undefined4 *)&ppuStack_150);
      FUN_7100248800(param_1,(int *)&ppuStack_378);
      return;
// ... (83 more lines)
```

## 40. `FUN_71002a2f90`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a2f90`  (offset `0x2a2f90`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a2f90(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** nintendo
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;getToken;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a2f90__71002a2f90.c)  [cfg](../decompiled/FUN_71002a2f90__71002a2f90.mmd)
- **Clone hash:** `66a80ab0c9049b1f`

```c

void FUN_71002a2f90(long param_1)

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

## 41. `FUN_71002aa1f0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002aa1f0`  (offset `0x2aa1f0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002aa1f0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 240 bytes / 5 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NEX_CO-4_6_13
- **Callers:** FUN_7103710260
- **Callees:** FUN_71001af850;FUN_71001b1820;FUN_71001d5a90;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71002aa1f0__71002aa1f0.c)  [cfg](../decompiled/FUN_71002aa1f0__71002aa1f0.mmd)
- **Clone hash:** `241438d95f3b1249`

```c

void FUN_71002aa1f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_7104f60fa0;
  param_1[1] = &PTR_FUN_7104f61718;
  puVar1 = FUN_71001b1820(4);
  param_1[3] = &PTR_FUN_7104f61758;
  puVar2 = FUN_71001af850(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_7104f55998;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((long)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_7104f61798;
  }
  param_1[4] = puVar2;
  puVar1 = FUN_71001af850(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_7104f60968;
  }
  param_1[5] = puVar1;
  *(undefined4 *)(param_1 + 6) = 0x10;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_CO-4_6_13");
  FUN_71001d5a90();
  **(undefined4 **)(param_1[4] + 0x10) = 0;
  return;
}


```

## 42. `FUN_71000bccc0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000bccc0`  (offset `0xbccc0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71000bccc0(void)`
- **Size / BBs / Incoming:** 12 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+Pia-5_19_1
- **Callers:** FUN_71000b1490
- **Callees:** <EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71000bccc0__71000bccc0.c)  [cfg](../decompiled/FUN_71000bccc0__71000bccc0.mmd)
- **Clone hash:** `ca0bcb6f8a488b9f`

```c

void FUN_71000bccc0(void)

{
  nn::util::ReferSymbol("SDK MW+Nintendo+Pia-5_19_1");
  return;
}


```

## 43. `FUN_71002a8250`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a8250`  (offset `0x2a8250`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a8250(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** nintendo
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;setVoiceChatChannel;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a8250__71002a8250.c)  [cfg](../decompiled/FUN_71002a8250__71002a8250.mmd)
- **Clone hash:** `90b562664257afc2`

```c

void FUN_71002a8250(long param_1)

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

## 44. `FUN_7101e9d5e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7101e9d5e0`  (offset `0x1e9d5e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_7101e9d5e0(undefined1[16] param_1, undefined1[16] param_2, double param_3, double param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)`
- **Size / BBs / Incoming:** 3276 bytes / 198 bb / 1 incoming refs
- **Match values:** nintendo
- **Strings touched:** nintendo64
- **Callees:** FUN_7101e9cfe0;FUN_71033794c0;FUN_7103775dc0;FUN_7103776910;FUN_71037a2270;FUN_71037a4450;FUN_71037a4570;FUN_71037a7bd0;FUN_710392e290;FUN_710392eb40;<EXTERNAL>::memcpy;<EXTERNAL>::memset;<EXTERNAL>::std::__vector_base_common<true>::__throw_length_error;<EXTERNAL>::std::__vector_base_common<true>::__throw_out_of_range;<EXTERNAL>::abort
- **Files:** [decomp](../decompiled/FUN_7101e9d5e0__7101e9d5e0.c)  [cfg](../decompiled/FUN_7101e9d5e0__7101e9d5e0.mmd)
- **Clone hash:** `e3838938775feac7`

```c

void FUN_7101e9d5e0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined2 *puVar1;
  float *pfVar2;
  int *piVar3;
  byte *pbVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  double dVar8;
  bool bVar9;
  ulong uVar10;
  ushort *puVar11;
  long ***ppplVar12;
  ushort *puVar13;
  long ****pppplVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  short *psVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  long ***ppplVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ushort uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  char *pcVar34;
// ... (631 more lines)
```

## 45. `FUN_71002a7000`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002a7000`  (offset `0x2a7000`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002a7000(long param_1)`
- **Size / BBs / Incoming:** 1788 bytes / 40 bb / 2 incoming refs
- **Match values:** nintendo
- **Strings touched:** Bearer ;Authorization;User-Agent;Content-Type;application/json;api-%%.znc.srv.nintendo.net;https://;/v1/NX/;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h
- **Callees:** FUN_71001af850;FUN_71001b0ab0;FUN_71001b1300;FUN_71001b1820;FUN_71001b1870;FUN_71001b2b10;FUN_71001b2bf0;FUN_71001b3cb0;FUN_71001b4200;FUN_71001b47e0;FUN_71001b4910;FUN_71001b5080;FUN_71001b52a0;FUN_71001b5d60;FUN_71001b6080;FUN_71001b60c0;...
- **Files:** [decomp](../decompiled/FUN_71002a7000__71002a7000.c)  [cfg](../decompiled/FUN_71002a7000__71002a7000.mmd)
- **Clone hash:** `d337cbfaeb1fa345`

```c

void FUN_71002a7000(long param_1)

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

## 46. `FUN_7100012ef0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `7100012ef0`  (offset `0x12ef0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_7100012ef0(long * param_1, long param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 444 bytes / 25 bb / 2 incoming refs
- **Match values:** NINTENDO
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

## 47. `FUN_71000130b0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71000130b0`  (offset `0x130b0`)
- **Namespace:** `Global`
- **Signature:** `int __cdecl FUN_71000130b0(long * param_1, long param_2, char * param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)`
- **Size / BBs / Incoming:** 972 bytes / 71 bb / 2 incoming refs
- **Match values:** NINTENDO
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

## 48. `FUN_710022cc40`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710022cc40`  (offset `0x22cc40`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710022cc40(undefined8 * param_1, undefined8 param_2)`
- **Size / BBs / Incoming:** 260 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** <unknown>;dys_yoga03_l_03_set;NintendoNotificationEventManager
- **Callers:** FUN_7100238270
- **Callees:** FUN_71001b47e0;FUN_71001b4910;FUN_71001d22e0;FUN_71001db340
- **Files:** [decomp](../decompiled/FUN_710022cc40__710022cc40.c)  [cfg](../decompiled/FUN_710022cc40__710022cc40.mmd)
- **Clone hash:** `4f1407daa6270a49`

```c

void FUN_710022cc40(undefined8 *param_1,undefined8 param_2)

{
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"<unknown>",-1);
  FUN_71001d22e0(param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = &DAT_7104f5a558;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0xc) = 9;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  local_60[0] = 0;
  uStack_48 = 0x10;
  local_68 = &PTR_FUN_710509cc08;
  local_50 = local_60;
  FUN_71001b47e0((long)&local_68,"NintendoNotificationEventManager",-1);
  FUN_71001db340((long)param_1,(long)&local_68);
  local_68 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_68);
  return;
}
// ... (1 more lines)
```

## 49. `FUN_710024ab30`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `710024ab30`  (offset `0x24ab30`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_710024ab30(undefined8 * param_1)`
- **Size / BBs / Incoming:** 1024 bytes / 30 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NEX_MM-4_6_13;..\..\..\..\.\OnlineCore/src/Core/InstanceTable.h;DynamicGathering
- **Callers:** FUN_710024dff0
- **Callees:** FUN_71001af850;FUN_71001b1300;FUN_71001b3cb0;FUN_71001b47e0;FUN_71001cf750;FUN_71001cf760;FUN_7100234fb0;FUN_710024b170;FUN_710024d010;FUN_710024d230;FUN_710024d4f0;FUN_710024da60;FUN_710024db10;FUN_7101717960;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_710024ab30__710024ab30.c)  [cfg](../decompiled/FUN_710024ab30__710024ab30.mmd)
- **Clone hash:** `95aa837e102d4307`

```c

void FUN_710024ab30(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  
  FUN_7100234fb0(param_1,0xc);
  *param_1 = &PTR_FUN_7104f5cb88;
  FUN_710024d230(param_1 + 4,0x15);
  FUN_710024d4f0(param_1 + 0x16,0x32);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_MM-4_6_13");
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024abd8:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710024ac0c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710024abd8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710024abd8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710024ac0c:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
// ... (102 more lines)
```

## 50. `FUN_71002ae2e0`  (hits=1)
- **Symbol:** `(no mangled symbol)`
- **Address:** `71002ae2e0`  (offset `0x2ae2e0`)
- **Namespace:** `Global`
- **Signature:** `undefined __cdecl FUN_71002ae2e0(undefined8 * param_1)`
- **Size / BBs / Incoming:** 72 bytes / 1 bb / 1 incoming refs
- **Match values:** Nintendo
- **Strings touched:** SDK MW+Nintendo+NEX_SC-4_6_13
- **Callers:** FUN_7103710260
- **Callees:** FUN_7100234fb0;FUN_71002ae990;<EXTERNAL>::nn::util::ReferSymbol
- **Files:** [decomp](../decompiled/FUN_71002ae2e0__71002ae2e0.c)  [cfg](../decompiled/FUN_71002ae2e0__71002ae2e0.mmd)
- **Clone hash:** `0bff240b5b661fea`

```c

void FUN_71002ae2e0(undefined8 *param_1)

{
  FUN_7100234fb0(param_1,0x7c);
  *param_1 = &DAT_7104f61858;
  FUN_71002ae990(param_1 + 4,0x7c);
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_SC-4_6_13");
  return;
}


```

