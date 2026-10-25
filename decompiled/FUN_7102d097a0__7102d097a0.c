// addr:      7102d097a0
// offset:    0x2d097a0
// name:      FUN_7102d097a0
// mangled:   
// signature: undefined __cdecl FUN_7102d097a0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102d097a0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 *puVar18;
  
  *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xbc8);
  *(ulong *)(param_1 + 0xbc0) = *(ulong *)(param_1 + 0xbc0) & 0xffffffff00000000;
  iVar6 = *(int *)(*(long *)(param_1 + 0xb68) + 0x18);
  if (iVar6 < 0x3e6) {
    *(int *)(*(long *)(param_1 + 0xb68) + 0x18) = iVar6 + 1;
  }
  lVar11 = *(long *)(param_1 + 0xa48);
  if (*(long *)(param_1 + 0xa50) != lVar11) {
    uVar16 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar16 * 8);
      (**(code **)(*plVar7 + 0x18))(plVar7,1);
      lVar11 = *(long *)(param_1 + 0xa48);
      uVar16 = uVar16 + 1;
      param_2 = extraout_x1;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xa50) - lVar11 >> 3));
  }
  lVar11 = *(long *)(param_1 + 0xb38);
  if (*(long *)(param_1 + 0xb40) != lVar11) {
    uVar16 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar16 * 8);
      (**(code **)(*plVar7 + 0x18))(plVar7,1);
      lVar11 = *(long *)(param_1 + 0xb38);
      uVar16 = uVar16 + 1;
      param_2 = extraout_x1_00;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xb40) - lVar11 >> 3));
  }
  lVar11 = *(long *)(param_1 + 0xb50);
  if (*(long *)(param_1 + 0xb58) != lVar11) {
    uVar16 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar16 * 8);
      (**(code **)(*plVar7 + 0x18))(plVar7,1);
      lVar11 = *(long *)(param_1 + 0xb50);
      uVar16 = uVar16 + 1;
      param_2 = extraout_x1_01;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xb58) - lVar11 >> 3));
  }
  plVar7 = *(long **)(param_1 + 0xb68);
  lVar11 = *plVar7;
  if (plVar7[1] != lVar11) {
    uVar16 = 0;
    do {
      lVar13 = *(long *)(lVar11 + uVar16 * 8);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar13 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar13 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar11 = *plVar7;
        param_2 = extraout_x1_02;
      }
      lVar13 = *(long *)(lVar11 + uVar16 * 8);
      if (lVar13 != 0) {
        *(byte *)(lVar13 + 0x118) = *(byte *)(lVar13 + 0x118) | 1;
        lVar11 = *plVar7;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(plVar7[1] - lVar11 >> 3));
  }
  (**(code **)(**(long **)(param_1 + 0xb80) + 0x18))(*(long **)(param_1 + 0xb80),1);
  (**(code **)(**(long **)(param_1 + 0xb88) + 0x18))(*(long **)(param_1 + 0xb88),1);
  plVar7 = *(long **)(param_1 + 0xb90);
  uVar9 = extraout_x1_03;
  if ((char)plVar7[8] != '\0') {
    plVar17 = (long *)plVar7[6];
    if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
       (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
      plVar8 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
      (**(code **)(*plVar8 + 0x48))(plVar8,0);
      *(undefined1 *)(plVar17 + 10) = 0;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7);
    uVar9 = extraout_x1_04;
  }
  *(undefined1 *)(plVar7 + 8) = 0;
  lVar13 = *(long *)(param_1 + 0xb90);
  lVar11 = *(long *)(lVar13 + 0xb8);
  if (lVar11 != 0) {
    *(undefined1 *)(lVar11 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar11 + 0x108),uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar9 = extraout_x1_05;
  }
  FUN_7103140b20(lVar13,uVar9,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar10 = (int)((ulong)(*(long *)(param_1 + 0xa68) - *(long *)(param_1 + 0xa60)) >> 3);
  iVar6 = (iVar10 + -1) * iVar10;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 1;
  }
  puVar14 = *(uint **)(param_1 + 0x340);
  *(undefined2 *)(param_1 + 0xb78) = 0;
  uVar1 = *puVar14 ^ *puVar14 << 0xb;
  uVar2 = puVar14[3];
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  puVar14[2] = uVar2;
  puVar14[3] = uVar1;
  if (0 < iVar10) {
    uVar2 = iVar6 >> 1;
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar1 / uVar2;
    }
    iVar6 = 0;
    uVar12 = 0;
    iVar3 = uVar1 - uVar5 * uVar2;
    iVar4 = iVar3;
    iVar15 = iVar10;
    do {
      iVar15 = iVar15 + -1;
      iVar6 = iVar6 + iVar15;
      if (iVar3 < iVar6) {
        lVar11 = (long)(int)(uVar12 + iVar4 + 1);
        goto LAB_7102d09a58;
      }
      uVar12 = uVar12 + 1;
      iVar4 = iVar4 - iVar15;
    } while ((int)uVar12 < iVar10);
  }
  lVar11 = 0;
  uVar12 = 0;
LAB_7102d09a58:
  plVar7 = *(long **)(*(long *)(param_1 + 0xa60) + (ulong)uVar12 * 8);
  (**(code **)(*plVar7 + 0x20))(plVar7,1,1);
  plVar7 = *(long **)(*(long *)(param_1 + 0xa60) + lVar11 * 8);
  (**(code **)(*plVar7 + 0x20))(plVar7,1,1);
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(**(long **)(param_1 + 0xa90) + 100) = 1;
  }
  lVar11 = *(long *)(param_1 + 0xac0);
  if (*(long *)(param_1 + 0xac8) != lVar11) {
    uVar16 = 0;
    do {
      FUN_710313ef20(*(long **)(lVar11 + uVar16 * 8));
      (**(code **)(**(long **)(*(long *)(param_1 + 0xac0) + uVar16 * 8) + 0x10))(0);
      lVar11 = *(long *)(param_1 + 0xac0);
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xac8) - lVar11 >> 3));
  }
  lVar11 = *(long *)(param_1 + 0xad8);
  if (*(long *)(param_1 + 0xae0) != lVar11) {
    uVar16 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar16 * 8);
      if ((char)plVar7[8] != '\0') {
        plVar17 = (long *)plVar7[6];
        if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
           (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
          plVar8 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
          (**(code **)(*plVar8 + 0x48))(plVar8,0);
          *(undefined1 *)(plVar17 + 10) = 0;
        }
        (**(code **)(*plVar7 + 0x30))(plVar7);
      }
      *(undefined1 *)(plVar7 + 8) = 0;
      lVar11 = *(long *)(param_1 + 0xad8);
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xae0) - lVar11 >> 3));
  }
  lVar11 = *(long *)(param_1 + 0xaf0);
  if (*(long *)(param_1 + 0xaf8) != lVar11) {
    uVar16 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar16 * 8);
      if ((char)plVar7[8] != '\0') {
        plVar17 = (long *)plVar7[6];
        if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
           (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
          plVar8 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
          (**(code **)(*plVar8 + 0x48))(plVar8,0);
          *(undefined1 *)(plVar17 + 10) = 0;
        }
        (**(code **)(*plVar7 + 0x30))(plVar7);
      }
      *(undefined1 *)(plVar7 + 8) = 0;
      lVar11 = *(long *)(param_1 + 0xaf0);
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xaf8) - lVar11 >> 3));
  }
  lVar11 = *(long *)(param_1 + 0xb08);
  if (*(long *)(param_1 + 0xb10) != lVar11) {
    uVar16 = 0;
    do {
      plVar7 = *(long **)(lVar11 + uVar16 * 8);
      if ((char)plVar7[8] != '\0') {
        plVar17 = (long *)plVar7[6];
        if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
           (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
          plVar8 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
          (**(code **)(*plVar8 + 0x48))(plVar8,0);
          *(undefined1 *)(plVar17 + 10) = 0;
        }
        (**(code **)(*plVar7 + 0x30))(plVar7);
      }
      *(undefined1 *)(plVar7 + 8) = 0;
      lVar11 = *(long *)(param_1 + 0xb08);
      uVar16 = uVar16 + 1;
    } while (uVar16 < (ulong)(*(long *)(param_1 + 0xb10) - lVar11 >> 3));
  }
  FUN_7102d09dc0(param_1,0,0,param_4,param_5,param_6,param_7,param_8);
  plVar7 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  plVar17 = (long *)plVar7[1];
  for (plVar7 = (long *)*plVar7; plVar7 != plVar17; plVar7 = plVar7 + 1) {
    if ((*(ulong *)(*plVar7 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
      puVar18 = *(undefined8 **)(*plVar7 + 0x130);
      FUN_71025f55b0((undefined8 *)*puVar18,(undefined8 *)puVar18[1],"IPP0002");
      FUN_71025f55b0((undefined8 *)*puVar18,(undefined8 *)puVar18[1],"IPP0003");
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51ba == '\0') {
        FUN_71025f55b0((undefined8 *)*puVar18,(undefined8 *)puVar18[1],"IPP0004");
      }
    }
  }
  *(undefined2 *)(param_1 + 0xbf0) = 1;
  *(undefined4 *)(param_1 + 0xb98) = 1;
  return;
}

