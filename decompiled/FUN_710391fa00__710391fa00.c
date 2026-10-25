// addr:      710391fa00
// offset:    0x391fa00
// name:      FUN_710391fa00
// mangled:   
// signature: undefined __cdecl FUN_710391fa00(long param_1, uint param_2, uint param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710391fa00(long param_1,uint param_2,uint param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  clock_t cVar5;
  time_t tVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  
  if (param_3 <= param_2) {
    return;
  }
  uVar13 = param_4 & 0xffffffff;
  uVar10 = (ulong)param_3;
  uVar12 = (ulong)param_2;
LAB_710391fa38:
  FUN_71038f5170(param_1,1,uVar12);
  FUN_71038f5170(param_1,1,uVar10);
  uVar3 = FUN_710391fdd0(param_1,-1,-2);
  if ((int)uVar3 == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
  }
  else {
    FUN_71038f5730(param_1,1,uVar12);
    FUN_71038f5730(param_1,1,uVar10);
  }
  uVar9 = (uint)uVar10;
  uVar11 = (uint)uVar12;
  uVar14 = uVar9 - uVar11;
  if (uVar14 == 1) {
    return;
  }
  uVar19 = (uint)uVar13;
  if ((uVar14 < 100) || (uVar19 == 0)) {
    uVar19 = uVar9 + uVar11 >> 1;
  }
  else {
    uVar1 = uVar14 >> 2;
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar19 / (uVar1 * 2);
    }
    uVar19 = uVar1 + uVar11 + (uVar19 - uVar2 * uVar1 * 2);
  }
  uVar16 = (ulong)uVar19;
  FUN_71038f5170(param_1,1,uVar16);
  FUN_71038f5170(param_1,1,uVar12);
  uVar3 = FUN_710391fdd0(param_1,-2,-1);
  if ((int)uVar3 == 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    FUN_71038f5170(param_1,1,uVar10);
    uVar3 = FUN_710391fdd0(param_1,-1,-2);
    if ((int)uVar3 == 0) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x20;
      goto joined_r0x00710391fda0;
    }
    FUN_71038f5730(param_1,1,uVar16);
    uVar3 = uVar10;
  }
  else {
    FUN_71038f5730(param_1,1,uVar16);
    uVar3 = uVar12;
  }
  FUN_71038f5730(param_1,1,uVar3);
joined_r0x00710391fda0:
  if (uVar14 == 2) {
    return;
  }
  FUN_71038f5170(param_1,1,uVar16);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *puVar8 = puVar8[-2];
  puVar8[1] = puVar8[-1];
  uVar15 = (ulong)(uVar9 - 1);
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f5170(param_1,1,uVar15);
  FUN_71038f5730(param_1,1,uVar16);
  FUN_71038f5730(param_1,1,uVar15);
  uVar3 = uVar15;
  uVar16 = uVar12;
  do {
    iVar18 = (int)uVar16;
    uVar17 = (ulong)(iVar18 + 1);
    FUN_71038f5170(param_1,1,uVar17);
    uVar7 = 0xfffffffe;
    uVar4 = FUN_710391fdd0(param_1,-1,-2);
    uVar16 = uVar17;
    if ((int)uVar4 != 0) {
      uVar14 = iVar18 + 2;
      do {
        uVar19 = uVar14;
        if (uVar9 == uVar19) goto LAB_710391fdc0;
        uVar17 = (ulong)uVar19;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
        FUN_71038f5170(param_1,1,uVar17);
        uVar7 = 0xfffffffe;
        uVar16 = FUN_710391fdd0(param_1,-1,-2);
        uVar14 = uVar19 + 1;
      } while ((int)uVar16 != 0);
      uVar16 = (ulong)uVar19;
    }
    while( true ) {
      uVar14 = (int)uVar3 - 1;
      uVar3 = (ulong)uVar14;
      FUN_71038f5170(param_1,1,uVar3);
      uVar7 = 0xffffffff;
      uVar4 = FUN_710391fdd0(param_1,-3,-1);
      uVar19 = (uint)uVar16;
      if ((int)uVar4 == 0) break;
      if (uVar14 < uVar19) {
LAB_710391fdc0:
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1,"invalid order function for sorting",uVar7,param_4,param_5,param_6,
                       param_7,param_8);
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
    }
    if (uVar14 < uVar19) break;
    FUN_71038f5730(param_1,1,uVar17);
    FUN_71038f5730(param_1,1,uVar3);
  } while( true );
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  FUN_71038f5730(param_1,1,uVar15);
  FUN_71038f5730(param_1,1,uVar17);
  uVar14 = uVar9 - uVar19;
  param_4 = uVar13;
  if (uVar19 - uVar11 < uVar14) {
    FUN_710391fa00(param_1,uVar11,uVar19 - 1,uVar13,param_5,param_6,param_7,param_8);
    uVar12 = (ulong)(uVar19 + 1);
    uVar14 = uVar19 - uVar11;
  }
  else {
    FUN_710391fa00(param_1,uVar19 + 1,uVar9,uVar13,param_5,param_6,param_7,param_8);
    uVar10 = (ulong)(uVar19 - 1);
  }
  if (uVar14 < (uint)uVar10 - (uint)uVar12 >> 7) {
    cVar5 = clock();
    tVar6 = time((time_t *)0x0);
    uVar13 = (ulong)(uint)((int)((ulong)cVar5 >> 0x20) + (int)cVar5 + (int)tVar6 +
                          (int)((ulong)tVar6 >> 0x20));
  }
  if ((uint)uVar10 <= (uint)uVar12) {
    return;
  }
  goto LAB_710391fa38;
}

