// addr:      7103347d90
// offset:    0x3347d90
// name:      FUN_7103347d90
// mangled:   
// signature: undefined __cdecl FUN_7103347d90(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103347d90(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ulong uVar2;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  if ((param_2 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x16c) & ((uint)param_3 ^ 0xffffffff);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x16c) | (uint)param_3;
  }
  *(uint *)(param_1 + 0x16c) = uVar3;
  lVar9 = DAT_710532f828;
  if ((((*(char *)(param_1 + 0x178) == '\0') && (*(int *)(param_1 + 0x118) != 0)) &&
      (uVar3 == 0 || *(int *)(param_1 + 0x170) == 0)) &&
     (*(int *)(param_1 + 0x170) != 0 || uVar3 != 0)) {
    if ((*(ulong *)(*(long *)(DAT_710532f828 + 0x10) + 0x198) & 0xff0000ffffffffff) ==
        0x5800001a16874403) {
      **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xffffefff;
    }
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x16c);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x10c) = 0;
      *(undefined8 *)(param_1 + 0x104) = 0;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined8 *)(param_1 + 0xfc) = 0;
      *(undefined8 *)(param_1 + 0xf4) = 0;
      *(undefined8 *)(param_1 + 0xec) = 0;
      *(undefined8 *)(param_1 + 0xe4) = 0;
      *(undefined8 *)(param_1 + 0xdc) = 0;
      *(undefined8 *)(param_1 + 0xd4) = 0;
      *(undefined8 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x118) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 200) = 1;
      lVar9 = *(long *)(*(long *)(DAT_710532f7f0 + 8) + 8);
      lVar11 = *(long *)(lVar9 + 0x80);
      if (*(char *)(lVar11 + 500) != '\0') {
        uVar3 = *(byte *)(lVar11 + 0x1f6) ^ 1;
      }
      lVar4 = *(long *)(lVar11 + 0x100);
      lVar7 = *(long *)(lVar11 + 0x108);
      uVar2 = 0;
      if (lVar7 - lVar4 != 0) {
        uVar2 = (lVar7 - lVar4 >> 3) * 0x155 - 1;
      }
      uVar8 = *(long *)(lVar11 + 0x120) + *(long *)(lVar11 + 0x118);
      if (uVar2 == uVar8) {
        FUN_7101afbf30((ulong *)(lVar11 + 0xf8),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar8 = *(long *)(lVar11 + 0x118) + *(long *)(lVar11 + 0x120);
        lVar4 = *(long *)(lVar11 + 0x100);
        lVar7 = *(long *)(lVar11 + 0x108);
      }
      if (lVar7 == lVar4) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)(*(long *)(lVar4 + (uVar8 / 0x155) * 8) + (uVar8 % 0x155) * 0xc);
      }
      *puVar5 = 5;
      puVar5[1] = uVar3;
      puVar5[2] = 0;
      *(long *)(lVar11 + 0x120) = *(long *)(lVar11 + 0x120) + 1;
      lVar9 = *(long *)(lVar9 + 0x80);
      *(undefined4 *)(lVar9 + 0x1ec) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x168),0x71043f05c9);
      **(undefined8 **)(lVar9 + 0x188) = 0;
      *(undefined8 *)(*(long *)(lVar9 + 0x188) + 8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x178),0x7104349e99);
      *(undefined4 *)(lVar9 + 0x1e4) = 1;
      plVar10 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x10);
      if ((plVar10 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar10 + 0x48))(plVar10), (uVar2 & 1) == 0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,1);
      }
    }
    else {
      if (*(int *)(param_1 + 0x118) == 5) {
        bVar1 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff217080d045);
        if (bVar1) {
          FUN_71032edf70(*(uint **)(lVar9 + 0x10),0x58ffff217080d045);
          FUN_71032f1bb0(*(long *)(lVar9 + 8),*(uint **)(lVar9 + 0x10),param_3,param_4,param_5,
                         param_6,param_7,param_8);
          param_2 = extraout_x1_00;
        }
        else {
          *(undefined4 *)(*(long *)(lVar9 + 8) + 0x118) = 0;
          param_2 = extraout_x1;
        }
      }
      *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x16c);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x118) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined1 *)(param_1 + 0x124) = 0;
      *(undefined4 *)(param_1 + 0x114) = 1;
      *(undefined4 *)(param_1 + 200) = 8;
      *(undefined4 *)(param_1 + 0xcc) = 7;
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      lVar9 = *(long *)(*(long *)(DAT_710532f7f0 + 8) + 8);
      lVar11 = *(long *)(lVar9 + 0x80);
      if (*(char *)(lVar11 + 500) != '\0') {
        uVar3 = *(byte *)(lVar11 + 0x1f6) ^ 1;
      }
      lVar4 = *(long *)(lVar11 + 0x100);
      lVar7 = *(long *)(lVar11 + 0x108);
      uVar2 = 0;
      if (lVar7 - lVar4 != 0) {
        uVar2 = (lVar7 - lVar4 >> 3) * 0x155 - 1;
      }
      uVar8 = *(long *)(lVar11 + 0x120) + *(long *)(lVar11 + 0x118);
      if (uVar2 == uVar8) {
        FUN_7101afbf30((ulong *)(lVar11 + 0xf8),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar8 = *(long *)(lVar11 + 0x118) + *(long *)(lVar11 + 0x120);
        lVar4 = *(long *)(lVar11 + 0x100);
        lVar7 = *(long *)(lVar11 + 0x108);
      }
      if (lVar7 == lVar4) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)(*(long *)(lVar4 + (uVar8 / 0x155) * 8) + (uVar8 % 0x155) * 0xc);
      }
      *puVar5 = 5;
      puVar5[1] = uVar3;
      puVar5[2] = 0;
      *(long *)(lVar11 + 0x120) = *(long *)(lVar11 + 0x120) + 1;
      FUN_7101afe7c0(*(long *)(lVar9 + 0x80),4,param_3,param_4,param_5,param_6,param_7,param_8);
      lVar9 = *(long *)(lVar9 + 0x80);
      if (*(char *)(lVar9 + 499) == '\0') {
        lVar11 = *(long *)(lVar9 + 0x100);
        lVar4 = *(long *)(lVar9 + 0x108);
        uVar2 = 0;
        if (lVar4 - lVar11 != 0) {
          uVar2 = (lVar4 - lVar11 >> 3) * 0x155 - 1;
        }
        uVar8 = *(long *)(lVar9 + 0x120) + *(long *)(lVar9 + 0x118);
        if (uVar2 == uVar8) {
          FUN_7101afbf30((ulong *)(lVar9 + 0xf8),extraout_x1_01,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          uVar8 = *(long *)(lVar9 + 0x118) + *(long *)(lVar9 + 0x120);
          lVar11 = *(long *)(lVar9 + 0x100);
          lVar4 = *(long *)(lVar9 + 0x108);
        }
        if (lVar4 == lVar11) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          puVar6 = (undefined8 *)(*(long *)(lVar11 + (uVar8 / 0x155) * 8) + (uVar8 % 0x155) * 0xc);
        }
        *puVar6 = &DAT_100000006;
        *(undefined4 *)(puVar6 + 1) = 0;
        *(long *)(lVar9 + 0x120) = *(long *)(lVar9 + 0x120) + 1;
      }
      plVar10 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x10);
      if ((plVar10 != (long *)0x0) &&
         (uVar2 = (**(code **)(*plVar10 + 0x48))(plVar10), (uVar2 & 1) != 0)) {
        (**(code **)(*plVar10 + 0x30))(plVar10);
      }
    }
  }
  return;
}

