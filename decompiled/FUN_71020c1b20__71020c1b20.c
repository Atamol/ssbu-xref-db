// addr:      71020c1b20
// offset:    0x20c1b20
// name:      FUN_71020c1b20
// mangled:   
// signature: undefined8 __cdecl FUN_71020c1b20(long param_1)


undefined8 FUN_71020c1b20(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  
  plVar5 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  uVar11 = (long)*(long **)(param_1 + 0x10) - (long)plVar5;
  if (*(long **)(param_1 + 0x10) <= plVar5) {
    plVar5 = &DAT_7104862960;
  }
  if ((*(uint *)(plVar5 + 1) & 0xf) == 2) {
    lVar6 = *plVar5;
  }
  else if ((*(uint *)(plVar5 + 1) & 0xf) == 7) {
    lVar6 = *plVar5 + 0x28;
  }
  else {
    lVar6 = 0;
  }
  lVar3 = FUN_71038f45b0(param_1,2,(undefined4 *)0x0);
  plVar5 = (long *)(**(long **)(param_1 + 0x20) + 0x30);
  if (*(long **)(param_1 + 0x10) <= plVar5) {
    plVar5 = &DAT_7104862960;
  }
  uVar2 = FUN_71038f4d40(param_1,plVar5,"new_instance_lua");
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 == 2) {
    pcVar8 = (code *)*plVar5;
  }
  else {
    pcVar8 = (code *)0x0;
    if (uVar1 == 7) {
      pcVar8 = (code *)(*plVar5 + 0x28);
    }
  }
  *(long **)(param_1 + 0x10) = plVar5;
  pfVar4 = (float *)(*pcVar8)(uVar2);
  FUN_7101ff2160(pfVar4,param_1,3);
  if ((int)(uVar11 >> 4) < 0) {
    uVar11 = **(long **)(param_1 + 0x20) +
             ((long)(uVar11 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
    uVar9 = *(ulong *)(param_1 + 0x10);
    while (uVar9 < uVar11) {
      *(ulong *)(param_1 + 0x10) = uVar9 + 0x10;
      *(undefined4 *)(uVar9 + 8) = 0;
      uVar9 = *(ulong *)(param_1 + 0x10);
    }
    *(ulong *)(param_1 + 0x10) = uVar11;
  }
  else {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + ((long)(uVar11 * -0x10000000) >> 0x1c);
  }
  if (pfVar4 == (float *)0x0) {
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    *puVar7 = 0xffffffffffffffff;
    *(undefined4 *)(puVar7 + 1) = 0x13;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(**(long **)(lVar6 + 0x38) + 0x60))();
    if ((int)lVar3 < 1) {
      lVar6 = -1;
    }
    else {
      fVar13 = (float)((ulong)*puVar7 >> 0x20);
      lVar6 = 0;
      pfVar10 = pfVar4 + 2;
      do {
        fVar12 = (float)*puVar7;
        if ((((pfVar10[-2] <= fVar12) && (fVar12 <= pfVar10[-1])) && (pfVar10[1] <= fVar13)) &&
           (fVar13 <= *pfVar10)) goto LAB_71020c1d14;
        lVar6 = lVar6 + 1;
        pfVar10 = pfVar10 + 4;
      } while (lVar6 < (int)lVar3);
      lVar6 = -1;
    }
LAB_71020c1d14:
    plVar5 = *(long **)(param_1 + 0x10);
    *plVar5 = lVar6;
    *(undefined4 *)(plVar5 + 1) = 0x13;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_710392eb40((ulong)pfVar4);
  }
  return 1;
}

