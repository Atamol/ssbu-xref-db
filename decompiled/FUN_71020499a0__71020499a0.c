// addr:      71020499a0
// offset:    0x20499a0
// name:      FUN_71020499a0
// mangled:   
// signature: undefined4 __cdecl FUN_71020499a0(long param_1)


undefined4 FUN_71020499a0(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  
  if ((*(long *)(param_1 + -8) == 0) ||
     (plVar11 = *(long **)(*(long *)(param_1 + -8) + 0xb8), plVar11 == (long *)0x0)) {
    return 0;
  }
  uVar12 = *(long *)(param_1 + 0x10) - (**(long **)(param_1 + 0x20) + 0x10);
  uVar3 = FUN_71038f45b0(param_1,1,(undefined4 *)0x0);
  plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x20);
  if (*(long **)(param_1 + 0x10) <= plVar6) {
    plVar6 = &DAT_7104862960;
  }
  uVar2 = FUN_71038f4d40(param_1,plVar6,"new_instance_lua");
  plVar6 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 == 2) {
    pcVar9 = (code *)*plVar6;
  }
  else {
    pcVar9 = (code *)0x0;
    if (uVar1 == 7) {
      pcVar9 = (code *)(*plVar6 + 0x28);
    }
  }
  *(long **)(param_1 + 0x10) = plVar6;
  plVar6 = (long *)(*pcVar9)(uVar2);
  (**(code **)(*plVar6 + 0x20))(plVar6,param_1,2);
  iVar13 = (int)(uVar12 >> 4);
  if (iVar13 < 3) {
    if (iVar13 < 0) {
      uVar12 = **(long **)(param_1 + 0x20) +
               ((long)(uVar12 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar10 = *(ulong *)(param_1 + 0x10);
      while (uVar10 < uVar12) {
        *(ulong *)(param_1 + 0x10) = uVar10 + 0x10;
        *(undefined4 *)(uVar10 + 8) = 0;
        uVar10 = *(ulong *)(param_1 + 0x10);
      }
      lVar4 = 0;
      goto LAB_7102049b4c;
    }
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_71038f45b0(param_1,3,(undefined4 *)0x0);
    if (iVar13 != 3) {
      plVar11 = (long *)(**(long **)(param_1 + 0x20) + 0x40);
      if (*(long **)(param_1 + 0x10) <= plVar11) {
        plVar11 = &DAT_7104862960;
      }
      if ((*(uint *)(plVar11 + 1) & 0xf) == 2) {
        lVar7 = *plVar11;
      }
      else if ((*(uint *)(plVar11 + 1) & 0xf) == 7) {
        lVar7 = *plVar11 + 0x28;
      }
      else {
        lVar7 = 0;
      }
      plVar11 = *(long **)(lVar7 + 0xd0);
    }
  }
  uVar12 = *(long *)(param_1 + 0x10) + ((long)(uVar12 * -0x10000000) >> 0x1c);
LAB_7102049b4c:
  *(ulong *)(param_1 + 0x10) = uVar12;
  (**(code **)(*plVar11 + 0xb0))(plVar11,uVar3 & 0xffffffff,plVar6,lVar4);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  uVar5 = FUN_710391e050(param_1);
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar8 + 1) = 0x45;
  *puVar8 = uVar5;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  (**(code **)(*plVar6 + 0x18))(plVar6,param_1,1);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  return 1;
}

