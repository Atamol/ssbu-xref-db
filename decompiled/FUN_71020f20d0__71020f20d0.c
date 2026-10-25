// addr:      71020f20d0
// offset:    0x20f20d0
// name:      FUN_71020f20d0
// mangled:   
// signature: undefined8 __cdecl FUN_71020f20d0(long param_1)


undefined8 FUN_71020f20d0(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  lVar12 = **(long **)(param_1 + 0x20);
  plVar4 = *(long **)(param_1 + 0x10);
  plVar5 = (long *)(lVar12 + 0x10);
  uVar8 = (long)plVar4 - (long)plVar5;
  iVar9 = (int)(uVar8 >> 4);
  if (((iVar9 == 2 && (long *)(lVar12 + 0x20) < plVar4) &&
       (long *)(lVar12 + 0x20) != &DAT_7104862960) && ((*(uint *)(lVar12 + 0x28) & 0xf) == 5)) {
    if (plVar4 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
    if ((*(uint *)(plVar5 + 1) & 0xf) == 2) {
      puVar13 = (undefined4 *)*plVar5;
    }
    else if ((*(uint *)(plVar5 + 1) & 0xf) == 7) {
      puVar13 = (undefined4 *)(*plVar5 + 0x28);
    }
    else {
      puVar13 = (undefined4 *)0x0;
    }
    if (plVar5 + 2 < plVar4 + -2) {
      plVar11 = plVar4 + -4;
      plVar10 = plVar5 + 2;
      do {
        lVar12 = *plVar10;
        lVar1 = plVar10[1];
        lVar2 = plVar11[3];
        *plVar10 = plVar11[2];
        plVar10[1] = lVar2;
        plVar11[2] = lVar12;
        plVar11[3] = lVar1;
        bVar3 = plVar10 + 2 < plVar11;
        plVar11 = plVar11 + -2;
        plVar10 = plVar10 + 2;
      } while (bVar3);
    }
    if (plVar5 < plVar4 + -2) {
      plVar4 = plVar4 + -4;
      do {
        lVar12 = *plVar5;
        lVar1 = plVar5[1];
        lVar2 = plVar4[3];
        *plVar5 = plVar4[2];
        plVar5[1] = lVar2;
        plVar4[2] = lVar12;
        plVar4[3] = lVar1;
        bVar3 = plVar5 + 2 < plVar4;
        plVar4 = plVar4 + -2;
        plVar5 = plVar5 + 2;
      } while (bVar3);
    }
    lVar12 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar12 + -0x10;
    *(code **)(lVar12 + -0x10) = FUN_71020f1eb0;
    *(undefined4 *)(lVar12 + -8) = 2;
    lVar12 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar12 + 0x10;
    FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"new_instance_lua");
    FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"center");
    uVar14 = *puVar13;
    puVar7 = *(undefined4 **)(param_1 + 0x10);
    puVar7[2] = 3;
    *puVar7 = uVar14;
    lVar12 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar12 + 0x10;
    FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"x");
    uVar14 = puVar13[1];
    puVar7 = *(undefined4 **)(param_1 + 0x10);
    puVar7[2] = 3;
    *puVar7 = uVar14;
    lVar12 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar12 + 0x10;
    FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"y");
    lVar12 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar12 + -0x10;
    *(undefined4 *)(lVar12 + -0x10) = puVar13[4];
    *(undefined4 *)(lVar12 + -8) = 3;
    goto LAB_71020f22f0;
  }
  plVar10 = plVar5;
  if (plVar4 <= plVar5) {
    plVar10 = &DAT_7104862960;
  }
  if ((*(uint *)(plVar10 + 1) & 0xf) == 2) {
    puVar13 = (undefined4 *)*plVar10;
joined_r0x0071020f2160:
    if (-1 < iVar9) goto LAB_71020f214c;
LAB_71020f2164:
    plVar5 = (long *)((long)plVar5 + ((long)(uVar8 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c));
    while (plVar4 < plVar5) {
      *(long **)(param_1 + 0x10) = plVar4 + 2;
      *(undefined4 *)(plVar4 + 1) = 0;
      plVar4 = *(long **)(param_1 + 0x10);
    }
  }
  else {
    if ((*(uint *)(plVar10 + 1) & 0xf) != 7) {
      puVar13 = (undefined4 *)0x0;
      goto joined_r0x0071020f2160;
    }
    puVar13 = (undefined4 *)(*plVar10 + 0x28);
    if (iVar9 < 0) goto LAB_71020f2164;
LAB_71020f214c:
    plVar5 = (long *)((long)plVar4 + ((long)(uVar8 * -0x10000000) >> 0x1c));
  }
  *(long **)(param_1 + 0x10) = plVar5;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar12 = FUN_710391e050(param_1);
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar5 + 1) = 0x45;
  *plVar5 = lVar12;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar12,0,3);
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *puVar6 = FUN_71020f1eb0;
  *(undefined4 *)(puVar6 + 1) = 2;
  lVar12 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar12 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"new_instance_lua");
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar12 = FUN_710391e050(param_1);
  plVar5 = *(long **)(param_1 + 0x10);
  *plVar5 = lVar12;
  *(undefined4 *)(plVar5 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar12,0,3);
  uVar14 = *puVar13;
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  puVar7[2] = 3;
  *puVar7 = uVar14;
  lVar12 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar12 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"x");
  uVar14 = puVar13[1];
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  puVar7[2] = 3;
  *puVar7 = uVar14;
  lVar12 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar12 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"y");
  FUN_71038f5390(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x20),"center");
  puVar7 = *(undefined4 **)(param_1 + 0x10);
  *puVar7 = puVar13[4];
  puVar7[2] = 3;
LAB_71020f22f0:
  lVar12 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar12 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar12 + -0x10),"radius");
  return 1;
}

