// addr:      710396fc20
// offset:    0x396fc20
// name:      FUN_710396fc20
// mangled:   
// signature: undefined8 __cdecl FUN_710396fc20(long param_1, uint param_2)


undefined8 FUN_710396fc20(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar10 = *(uint *)(param_1 + 0x48);
  uVar4 = 0;
  if (uVar10 != 0) {
    uVar4 = param_2 / uVar10;
  }
  lVar9 = *(long *)(param_1 + 8) +
          (ulong)*(uint *)(*(long *)(param_1 + 8) + (ulong)((param_2 - uVar4 * uVar10) * 4 + 0x20));
  if (param_2 < uVar10) {
    uVar4 = *(int *)(lVar9 + 0x2c) + 1;
    if ((uVar4 < 2) || (*(uint *)(lVar9 + 0x74) < 100)) {
      lVar9 = *(long *)(param_1 + 0x50);
      plVar6 = (long *)(lVar9 + (ulong)(uVar10 + param_2) * 8);
      if (*plVar6 == 0) {
        FUN_710396fc20(param_1,uVar10 + param_2);
        lVar9 = *(long *)(param_1 + 0x50);
        plVar6 = (long *)(lVar9 + (ulong)(*(int *)(param_1 + 0x48) + param_2) * 8);
      }
      *(long *)(lVar9 + (ulong)param_2 * 8) = *plVar6;
      if (*(long *)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 8) == 0) {
        return 0x80000004;
      }
      return 0;
    }
    iVar5 = uVar4 * 0x10 + 0x170;
    if (DAT_7106dd53f0 == (code *)0x0) {
      std::recursive_mutex::lock();
      plVar6 = FUN_71039873e0(DAT_7106dd53e0,iVar5,0);
      std::recursive_mutex::unlock();
    }
    else {
      plVar6 = (long *)(*DAT_7106dd53f0)(iVar5);
    }
    if (plVar6 == (long *)0x0) {
      return 0x80000004;
    }
    memcpy(plVar6,&PTR_s_DefaultTone_7105298cc8,0x160);
    iVar2 = *(int *)(lVar9 + 8);
    *(int *)(plVar6 + 1) = iVar2;
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) {
      uVar10 = *(uint *)(param_1 + 0x48);
      uVar3 = 0;
      if (uVar10 != 0) {
        uVar3 = param_2 / uVar10;
      }
      lVar14 = *(long *)(param_1 + 0x40);
      uVar10 = (param_2 - uVar3 * uVar10) * 8;
    }
    else {
      lVar14 = lVar9 + 0x40;
      uVar10 = (*(int *)(lVar9 + 0x14) + *(int *)(lVar9 + 0x10)) * iVar2;
    }
    plVar6[3] = (long)(plVar6 + 0x2c);
    *plVar6 = lVar14 + (ulong)uVar10;
    *(int *)((long)plVar6 + 0xc) = iVar5;
    *(undefined4 *)(plVar6 + 2) = 1;
    plVar6[0x2d] = (long)(plVar6 + 0x2e);
    lVar9 = 0;
    *(uint *)(plVar6 + 0x2c) = uVar4;
    uVar12 = (ulong)uVar4;
    iVar5 = -1;
    *(undefined4 *)((long)plVar6 + 0x164) = 0;
    uVar10 = param_2;
    do {
      lVar14 = *(long *)(param_1 + 8);
      uVar3 = *(uint *)(lVar14 + (ulong)(uVar10 * 4 + 0x20));
      uVar4 = *(int *)(param_1 + 0x48) + uVar10;
      if (*(long *)(*(long *)(param_1 + 0x50) + (ulong)uVar4 * 8) == 0) {
        FUN_710396fc20(param_1,uVar4);
        if (lVar9 != 0) goto LAB_71039701ac;
LAB_71039701c8:
        *(undefined4 *)plVar6[0x2d] = 0;
        *(undefined4 *)(plVar6 + 0x15) =
             *(undefined4 *)
              (*(long *)(*(long *)(param_1 + 0x50) + (ulong)(*(int *)(param_1 + 0x48) + uVar10) * 8)
              + 0xa8);
        *(undefined4 *)((long)plVar6 + 0xac) =
             *(undefined4 *)
              (*(long *)(*(long *)(param_1 + 0x50) + (ulong)(*(int *)(param_1 + 0x48) + uVar10) * 8)
              + 0xac);
        *(undefined4 *)(plVar6 + 0x16) =
             *(undefined4 *)
              (*(long *)(*(long *)(param_1 + 0x50) + (ulong)(*(int *)(param_1 + 0x48) + uVar10) * 8)
              + 0xb0);
        *(undefined4 *)((long)plVar6 + 0xb4) =
             *(undefined4 *)
              (*(long *)(*(long *)(param_1 + 0x50) + (ulong)(*(int *)(param_1 + 0x48) + uVar10) * 8)
              + 0xb4);
      }
      else {
        if (lVar9 == 0) goto LAB_71039701c8;
LAB_71039701ac:
        *(int *)(plVar6[0x2d] + lVar9) = iVar5;
      }
      puVar1 = (uint *)(lVar14 + 0x30 + (ulong)uVar3);
      *(uint *)(plVar6[0x2d] + lVar9 + 4) = puVar1[0x12];
      *(float *)(plVar6[0x2d] + lVar9 + 8) = (float)(int)puVar1[0x11] / 100.0;
      lVar14 = plVar6[0x2d] + lVar9;
      lVar9 = lVar9 + 0x10;
      *(uint *)(lVar14 + 0xc) = *(int *)(param_1 + 0x48) + uVar10;
      uVar10 = *puVar1;
      uVar12 = uVar12 - 1;
      iVar5 = iVar5 + 1;
    } while (uVar12 != 0);
    goto LAB_7103970284;
  }
  if (DAT_7106dd53f0 == (code *)0x0) {
    std::recursive_mutex::lock();
    plVar6 = FUN_71039873e0(DAT_7106dd53e0,0x1a8,0);
    std::recursive_mutex::unlock();
  }
  else {
    plVar6 = (long *)(*DAT_7106dd53f0)(0x1a8);
  }
  if (plVar6 == (long *)0x0) {
    return 0x80000004;
  }
  memcpy(plVar6,&PTR_s_DefaultTone_7105298cc8,0x160);
  *(undefined4 *)(plVar6 + 2) = 0;
  plVar6[3] = (long)(plVar6 + 0x2c);
  iVar5 = *(int *)(lVar9 + 8);
  *(int *)(plVar6 + 1) = iVar5;
  lVar14 = *(long *)(param_1 + 0x18);
  if (lVar14 == 0) {
    uVar10 = *(uint *)(param_1 + 0x48);
    uVar4 = 0;
    if (uVar10 != 0) {
      uVar4 = param_2 / uVar10;
    }
    lVar8 = *(long *)(param_1 + 0x40);
    uVar10 = (param_2 - uVar4 * uVar10) * 8;
  }
  else {
    lVar8 = lVar14 + 0x40;
    uVar10 = (*(int *)(lVar14 + 0x14) + *(int *)(lVar14 + 0x10)) * iVar5;
  }
  *plVar6 = lVar8 + (ulong)uVar10;
  *(undefined4 *)((long)plVar6 + 0xc) = 0x1a8;
  *(undefined4 *)(plVar6 + 4) = *(undefined4 *)(lVar9 + 0x34);
  *(undefined4 *)((long)plVar6 + 0x24) = *(undefined4 *)(lVar9 + 0x40);
  *(float *)(plVar6 + 5) = (float)*(int *)(lVar9 + 0x3c);
  *(undefined4 *)((long)plVar6 + 0x2c) = *(undefined4 *)(lVar9 + 0x58);
  *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(lVar9 + 0x5c);
  *(undefined4 *)((long)plVar6 + 0x34) = *(undefined4 *)(lVar9 + 0x38);
  *(undefined4 *)(plVar6 + 8) = *(undefined4 *)(lVar9 + 0x80);
  *(undefined4 *)((long)plVar6 + 0x44) = *(undefined4 *)(lVar9 + 0x90);
  *(undefined4 *)(plVar6 + 9) = *(undefined4 *)(lVar9 + 0x4c);
  uVar7 = *(undefined4 *)(lVar9 + 0x14);
  plVar6[0x2c] = *(long *)(param_1 + 8) + (long)*(int *)(*(long *)(param_1 + 8) + 0x10) +
                 (ulong)*(uint *)(lVar9 + 0x18);
  *(undefined4 *)(plVar6 + 0x2d) = uVar7;
  plVar6[0xb] = (long)(plVar6 + 0x2e);
  iVar5 = *(int *)(lVar9 + 0x60);
  std::recursive_mutex::lock();
  for (plVar11 = *(long **)(DAT_7106dd5488 + 0x28); plVar11 != (long *)0x0;
      plVar11 = (long *)plVar11[3]) {
    if ((int)plVar11[2] == iVar5) {
      std::recursive_mutex::unlock();
      uVar12 = 0;
      goto LAB_710396fe7c;
    }
  }
  std::recursive_mutex::unlock();
  uVar10 = 0;
  goto LAB_710396feb4;
  while( true ) {
    plVar11 = (long *)(**(code **)(*plVar11 + 0x100))(plVar11);
    uVar12 = uVar13 + 1;
    if (plVar11 == (long *)0x0) break;
LAB_710396fe7c:
    uVar13 = uVar12;
    *(int *)(plVar6[0xb] + uVar13 * 4) = (int)plVar11[2];
    if (5 < uVar13) break;
  }
  uVar10 = (int)uVar13 + 1;
LAB_710396feb4:
  iVar5 = *(int *)(lVar9 + 100);
  std::recursive_mutex::lock();
  lVar14 = *(long *)(DAT_7106dd5488 + 0x28);
  if (lVar14 != 0) {
    do {
      if (*(int *)(lVar14 + 0x10) == iVar5 + 0x10000000) {
        std::recursive_mutex::unlock();
        *(undefined4 *)(plVar6[0xb] + (ulong)uVar10 * 4) = *(undefined4 *)(lVar14 + 0x10);
        uVar10 = uVar10 + 1;
        goto LAB_710396ff0c;
      }
      lVar14 = *(long *)(lVar14 + 0x18);
    } while (lVar14 != 0);
  }
  std::recursive_mutex::unlock();
LAB_710396ff0c:
  uVar4 = *(uint *)(lVar9 + 0x7c);
  if (((uVar10 < 10) && ((uVar4 & 1) != 0)) && (DAT_7106dd5588 != 0)) {
    *(undefined4 *)(plVar6[0xb] + (ulong)uVar10 * 4) = *(undefined4 *)(DAT_7106dd5588 + 0x10);
    uVar10 = uVar10 + 1;
  }
  if ((((uVar4 >> 1 & 1) != 0) && (uVar10 < 10)) && (DAT_7106dd5590 != 0)) {
    *(undefined4 *)(plVar6[0xb] + (ulong)uVar10 * 4) = *(undefined4 *)(DAT_7106dd5590 + 0x10);
    uVar10 = uVar10 + 1;
  }
  *(uint *)(plVar6 + 10) = uVar10;
  *(undefined4 *)(plVar6 + 0xe) = 0x80000000;
  *(int *)(plVar6 + 0xf) = *(int *)(lVar9 + 0x54) + 0x10000000;
  plVar6[0xd] = plVar6[0xb] + 0x28;
  std::recursive_mutex::lock();
  lVar14 = *(long *)(DAT_7106dd5448 + 0x28);
  while ((lVar14 != 0 &&
         ((*(char **)(lVar14 + 8) == (char *)0x0 ||
          (iVar5 = strncmp("MasterBus",*(char **)(lVar14 + 8),0x1f), iVar5 != 0))))) {
    lVar14 = *(long *)(lVar14 + 0x18);
  }
  std::recursive_mutex::unlock();
  *(undefined4 *)plVar6[0xd] = 0;
  *(undefined4 *)(plVar6[0xd] + 4) = 0;
  *(undefined4 *)(plVar6 + 0xc) = 1;
  std::recursive_mutex::lock();
  for (lVar14 = *(long *)(DAT_7106dd5448 + 0x28); lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x18)) {
    if ((*(char **)(lVar14 + 8) != (char *)0x0) &&
       (iVar5 = strncmp("FxBus",*(char **)(lVar14 + 8),0x1f), iVar5 == 0)) {
      std::recursive_mutex::unlock();
      *(undefined4 *)(plVar6[0xd] + 8) = 1;
      *(undefined4 *)(plVar6[0xd] + 0xc) = *(undefined4 *)(lVar9 + 0x6c);
      *(undefined4 *)(plVar6 + 0xc) = 2;
      goto LAB_71039700cc;
    }
  }
  std::recursive_mutex::unlock();
LAB_71039700cc:
  *(undefined4 *)((long)plVar6 + 0x74) = *(undefined4 *)(lVar9 + 0xb8);
  *(undefined4 *)((long)plVar6 + 0x94) = *(undefined4 *)(lVar9 + 0x44);
  *(undefined4 *)(plVar6 + 0x15) = *(undefined4 *)(lVar9 + 0xac);
  *(undefined4 *)((long)plVar6 + 0xac) = *(undefined4 *)(lVar9 + 0xb0);
  *(undefined4 *)(plVar6 + 0x16) = *(undefined4 *)(lVar9 + 0xb4);
  *(undefined4 *)((long)plVar6 + 0xb4) = *(undefined4 *)(lVar9 + 0xb8);
  if (*(int *)(lVar9 + 0x70) < 0x3e9) {
    if (*(int *)(lVar9 + 0x70) == 1000) {
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 3;
  }
  *(undefined4 *)((long)plVar6 + 0x4c) = uVar7;
LAB_7103970284:
  *(long **)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 8) = plVar6;
  return 0;
}

