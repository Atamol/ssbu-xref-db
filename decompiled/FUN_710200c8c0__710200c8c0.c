// addr:      710200c8c0
// offset:    0x200c8c0
// name:      FUN_710200c8c0
// mangled:   
// signature: undefined8 __cdecl FUN_710200c8c0(long param_1)


undefined8 FUN_710200c8c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long *plVar4;
  uint *puVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  
  if ((*(long *)(param_1 + -8) == 0) ||
     (plVar9 = *(long **)(*(long *)(param_1 + -8) + 0x90), plVar9 == (long *)0x0)) {
    return 0;
  }
  plVar4 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  uVar10 = (long)*(long **)(param_1 + 0x10) - (long)plVar4;
  if (*(long **)(param_1 + 0x10) <= plVar4) {
    plVar4 = &DAT_7104862960;
  }
  uVar1 = FUN_71038f4d40(param_1,plVar4,"new_instance_lua");
  plVar4 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar2 == 2) {
    pcVar6 = (code *)*plVar4;
  }
  else if (uVar2 == 7) {
    pcVar6 = (code *)(*plVar4 + 0x28);
  }
  else {
    pcVar6 = (code *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar4;
  pfVar3 = (float *)(*pcVar6)(uVar1);
  FUN_710200ca80(pfVar3,param_1,1);
  iVar11 = (int)(uVar10 >> 4);
  if (iVar11 < 2) {
    if (iVar11 < 0) {
      uVar10 = **(long **)(param_1 + 0x20) +
               ((long)(uVar10 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar7 = *(ulong *)(param_1 + 0x10);
      while (uVar7 < uVar10) {
        *(ulong *)(param_1 + 0x10) = uVar7 + 0x10;
        *(undefined4 *)(uVar7 + 8) = 0;
        uVar7 = *(ulong *)(param_1 + 0x10);
      }
      goto LAB_710200ca1c;
    }
    plVar4 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar9 = (long *)(**(long **)(param_1 + 0x20) + 0x20);
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 <= plVar9) {
      plVar9 = &DAT_7104862960;
    }
    if ((*(uint *)(plVar9 + 1) & 0xf) == 2) {
      lVar8 = *plVar9;
    }
    else if ((*(uint *)(plVar9 + 1) & 0xf) == 7) {
      lVar8 = *plVar9 + 0x28;
    }
    else {
      lVar8 = 0;
    }
    plVar9 = *(long **)(lVar8 + 0xa8);
  }
  uVar10 = (long)plVar4 + ((long)(uVar10 * -0x10000000) >> 0x1c);
LAB_710200ca1c:
  *(ulong *)(param_1 + 0x10) = uVar10;
  uVar2 = (**(code **)(*plVar9 + 0xe0))(plVar9,pfVar3);
  puVar5 = *(uint **)(param_1 + 0x10);
  *puVar5 = uVar2 & 1;
  puVar5[2] = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (pfVar3 != (float *)0x0) {
    FUN_710392eb40((ulong)pfVar3);
  }
  return 1;
}

