// addr:      71038fca90
// offset:    0x38fca90
// name:      FUN_71038fca90
// mangled:   
// signature: int __cdecl FUN_71038fca90(long param_1, undefined * param_2, undefined8 param_3, long param_4, undefined8 param_5)


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
      *plVar15 = lVar9;
      bVar5 = *(byte *)(lVar9 + 8);
      goto LAB_71038fcb2c;
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + -8);
    *plVar15 = *(long *)(*(long *)(param_1 + 0x10) + -0x10);
    plVar15[1] = lVar9;
  }
  *(long **)(param_1 + 0x10) = plVar15 + 2;
  *(long *)(param_1 + 0x20) = lVar12;
  *(undefined1 *)(param_1 + 0xc9) = uVar4;
  *(undefined2 *)(param_1 + 0xc4) = uVar6;
  lVar9 = lVar12;
  plVar15 = plVar15 + 2;
  while (plVar7 = plVar15, lVar9 != 0) {
    puVar13 = (undefined8 *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x10);
    plVar15 = (long *)*puVar13;
    if ((long *)*puVar13 <= plVar7) {
      plVar15 = plVar7;
    }
  }
  iVar14 = (int)((ulong)((long)plVar7 - *(long *)(param_1 + 0x38)) >> 4);
  iVar1 = iVar14 + 8;
  if (-1 < iVar14 + 1) {
    iVar1 = iVar14 + 1;
  }
  uVar2 = iVar14 + (iVar1 >> 3) + 0xb;
  if (999999 < (int)uVar2) {
    uVar2 = 1000000;
  }
  plVar15 = (long *)(lVar12 + 0x18);
  lVar9 = *plVar15;
  if (*(int *)(param_1 + 0xb8) < 0xf4241) {
    while ((lVar9 != 0 && (lVar11 = *(long *)(lVar9 + 0x18), lVar11 != 0))) {
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      (*(code *)*puVar13)(puVar13[1],lVar9,0x48,0);
      lVar3 = 0;
      if (lVar9 != 0) {
        lVar3 = -0x48;
      }
      puVar13[3] = lVar3 + puVar13[3];
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
      *plVar15 = lVar11;
      plVar15 = (long *)(lVar11 + 0x18);
      lVar9 = *plVar15;
      *(long *)(lVar11 + 0x10) = lVar12;
      lVar12 = lVar11;
    }
  }
  else {
    *plVar15 = 0;
    while (lVar9 != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      lVar11 = *(long *)(lVar9 + 0x18);
      (*(code *)*puVar13)(puVar13[1],lVar9,0x48,0);
      lVar12 = 0;
      if (lVar9 != 0) {
        lVar12 = -0x48;
      }
      puVar13[3] = lVar12 + puVar13[3];
      *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
      lVar9 = lVar11;
    }
  }
  if ((iVar14 < 1000000) && ((int)uVar2 < *(int *)(param_1 + 0xb8))) {
    FUN_71038fb530(param_1,uVar2);
  }
LAB_71038fccb0:
  *(undefined8 *)(param_1 + 0xb0) = uVar10;
  return iVar8;
}

