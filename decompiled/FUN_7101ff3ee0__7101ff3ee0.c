// addr:      7101ff3ee0
// offset:    0x1ff3ee0
// name:      FUN_7101ff3ee0
// mangled:   
// signature: undefined8 __cdecl FUN_7101ff3ee0(long param_1)


undefined8 FUN_7101ff3ee0(long param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  
  if (*(long *)(param_1 + -8) == 0) {
    return 0;
  }
  plVar9 = *(long **)(*(long *)(param_1 + -8) + 0x48);
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  plVar5 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  uVar10 = (long)*(long **)(param_1 + 0x10) - (long)plVar5;
  if (*(long **)(param_1 + 0x10) <= plVar5) {
    plVar5 = &DAT_7104862960;
  }
  uVar2 = FUN_71038f4d40(param_1,plVar5,"new_instance_lua");
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 == 2) {
    pcVar7 = (code *)*plVar5;
  }
  else if (uVar1 == 7) {
    pcVar7 = (code *)(*plVar5 + 0x28);
  }
  else {
    pcVar7 = (code *)0x0;
  }
  *(long **)(param_1 + 0x10) = plVar5;
  pfVar3 = (float *)(*pcVar7)(uVar2);
  FUN_7101ff2160(pfVar3,param_1,1);
  iVar11 = (int)(uVar10 >> 4);
  if (iVar11 < 2) {
    if (iVar11 < 0) {
      uVar10 = **(long **)(param_1 + 0x20) +
               ((long)(uVar10 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar8 = *(ulong *)(param_1 + 0x10);
      while (uVar8 < uVar10) {
        *(ulong *)(param_1 + 0x10) = uVar8 + 0x10;
        *(undefined4 *)(uVar8 + 8) = 0;
        uVar8 = *(ulong *)(param_1 + 0x10);
      }
      lVar4 = 0;
      goto LAB_7101ff4058;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_71038f45b0(param_1,2,(undefined4 *)0x0);
    if (iVar11 != 2) {
      plVar9 = (long *)(**(long **)(param_1 + 0x20) + 0x30);
      if (*(long **)(param_1 + 0x10) <= plVar9) {
        plVar9 = &DAT_7104862960;
      }
      if ((*(uint *)(plVar9 + 1) & 0xf) == 2) {
        lVar6 = *plVar9;
      }
      else if ((*(uint *)(plVar9 + 1) & 0xf) == 7) {
        lVar6 = *plVar9 + 0x28;
      }
      else {
        lVar6 = 0;
      }
      plVar9 = *(long **)(lVar6 + 0x60);
    }
  }
  uVar10 = *(long *)(param_1 + 0x10) + ((long)(uVar10 * -0x10000000) >> 0x1c);
LAB_7101ff4058:
  *(ulong *)(param_1 + 0x10) = uVar10;
  (**(code **)(*plVar9 + 0x1b8))(plVar9,pfVar3,lVar4);
  if (pfVar3 != (float *)0x0) {
    FUN_710392eb40((ulong)pfVar3);
  }
  return 0;
}

