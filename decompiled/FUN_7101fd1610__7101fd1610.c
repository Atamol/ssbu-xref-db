// addr:      7101fd1610
// offset:    0x1fd1610
// name:      FUN_7101fd1610
// mangled:   
// signature: undefined8 __cdecl FUN_7101fd1610(long param_1)


undefined8 FUN_7101fd1610(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  code *pcVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  
  if (*(long *)(param_1 + -8) == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(param_1 + -8) + 0x88);
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  uVar11 = *(long *)(param_1 + 0x10) - (**(long **)(param_1 + 0x20) + 0x10);
  uVar3 = FUN_71038f45b0(param_1,1,(undefined4 *)0x0);
  uVar4 = FUN_71038f45b0(param_1,2,(undefined4 *)0x0);
  plVar6 = (long *)(**(long **)(param_1 + 0x20) + 0x30);
  if (*(long **)(param_1 + 0x10) <= plVar6) {
    plVar6 = &DAT_7104862960;
  }
  uVar2 = FUN_71038f4d40(param_1,plVar6,"new_instance_lua");
  plVar6 = (long *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 == 2) {
    pcVar7 = (code *)*plVar6;
  }
  else {
    pcVar7 = (code *)0x0;
    if (uVar1 == 7) {
      pcVar7 = (code *)(*plVar6 + 0x28);
    }
  }
  *(long **)(param_1 + 0x10) = plVar6;
  puVar5 = (undefined8 *)(*pcVar7)(uVar2);
  FUN_7101fd17f0(puVar5,param_1,3);
  iVar12 = (int)(uVar11 >> 4);
  if (iVar12 < 4) {
    if (iVar12 < 0) {
      uVar11 = **(long **)(param_1 + 0x20) +
               ((long)(uVar11 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
      uVar8 = *(ulong *)(param_1 + 0x10);
      while (uVar8 < uVar11) {
        *(ulong *)(param_1 + 0x10) = uVar8 + 0x10;
        *(undefined4 *)(uVar8 + 8) = 0;
        uVar8 = *(ulong *)(param_1 + 0x10);
      }
      goto LAB_7101fd179c;
    }
    plVar6 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar10 = (long *)(**(long **)(param_1 + 0x20) + 0x40);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 <= plVar10) {
      plVar10 = &DAT_7104862960;
    }
    if ((*(uint *)(plVar10 + 1) & 0xf) == 2) {
      lVar9 = *plVar10;
    }
    else if ((*(uint *)(plVar10 + 1) & 0xf) == 7) {
      lVar9 = *plVar10 + 0x28;
    }
    else {
      lVar9 = 0;
    }
    plVar10 = *(long **)(lVar9 + 0xa0);
  }
  uVar11 = (long)plVar6 + ((long)(uVar11 * -0x10000000) >> 0x1c);
LAB_7101fd179c:
  *(ulong *)(param_1 + 0x10) = uVar11;
  (**(code **)(*plVar10 + 0x68))(plVar10,uVar3 & 0xffffffff,uVar4 & 0xffffffff,puVar5);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar5);
  }
  return 0;
}

