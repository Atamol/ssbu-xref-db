// addr:      7102049770
// offset:    0x2049770
// name:      FUN_7102049770
// mangled:   
// signature: undefined4 __cdecl FUN_7102049770(long param_1)


undefined4 FUN_7102049770(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  
  if ((*(long *)(param_1 + -8) == 0) ||
     (plVar11 = *(long **)(*(long *)(param_1 + -8) + 0xb8), plVar11 == (long *)0x0)) {
    return 0;
  }
  uVar12 = *(long *)(param_1 + 0x10) - (**(long **)(param_1 + 0x20) + 0x10);
  uVar3 = FUN_71038f45b0(param_1,1,(undefined4 *)0x0);
  plVar5 = (long *)(**(long **)(param_1 + 0x20) + 0x20);
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
  plVar5 = (long *)(*pcVar8)(uVar2);
  (**(code **)(*plVar5 + 0x20))(plVar5,param_1,2);
  iVar13 = (int)(uVar12 >> 4);
  if (iVar13 < 3) {
    if (iVar13 < 0) {
      uVar12 = **(long **)(param_1 + 0x20) +
               ((long)(uVar12 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar9 = *(ulong *)(param_1 + 0x10);
      while (uVar9 < uVar12) {
        *(ulong *)(param_1 + 0x10) = uVar9 + 0x10;
        *(undefined4 *)(uVar9 + 8) = 0;
        uVar9 = *(ulong *)(param_1 + 0x10);
      }
      goto LAB_71020498f8;
    }
    plVar6 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar11 = (long *)(**(long **)(param_1 + 0x20) + 0x30);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 <= plVar11) {
      plVar11 = &DAT_7104862960;
    }
    if ((*(uint *)(plVar11 + 1) & 0xf) == 2) {
      lVar10 = *plVar11;
    }
    else if ((*(uint *)(plVar11 + 1) & 0xf) == 7) {
      lVar10 = *plVar11 + 0x28;
    }
    else {
      lVar10 = 0;
    }
    plVar11 = *(long **)(lVar10 + 0xd0);
  }
  uVar12 = (long)plVar6 + ((long)(uVar12 * -0x10000000) >> 0x1c);
LAB_71020498f8:
  *(ulong *)(param_1 + 0x10) = uVar12;
  (**(code **)(*plVar11 + 0xa8))(plVar11,uVar3 & 0xffffffff,plVar5);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar4 = FUN_710391e050(param_1);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar7 + 1) = 0x45;
  *puVar7 = uVar4;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  (**(code **)(*plVar5 + 0x18))(plVar5,param_1,1);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  return 1;
}

