// addr:      7101c9f350
// offset:    0x1c9f350
// name:      FUN_7101c9f350
// mangled:   
// signature: undefined __cdecl FUN_7101c9f350(long param_1, ushort param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9f350(long param_1,ushort param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  undefined **local_50;
  long *local_48;
  undefined **local_40;
  ulong local_38;
  
  piVar6 = *(int **)(param_1 + 0x228);
  piVar8 = *(int **)(param_1 + 0x230);
  if (piVar8 == piVar6) {
    return;
  }
  iVar1 = *piVar6;
  piVar9 = piVar6;
  while (iVar1 != 0x21e) {
    piVar9 = piVar9 + 1;
    if (piVar8 == piVar9) {
      return;
    }
    iVar1 = *piVar9;
  }
  if (piVar9 == piVar8) {
    return;
  }
  uVar11 = (ulong)((long)piVar9 - (long)piVar6) >> 2;
  FUN_7103776640(&local_40,param_1 + 0x118,(byte ****)"set_parts_items_%02d",uVar11 & 0xffffffff,
                 param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_38;
  uVar2 = *(ushort *)(param_1 + 0x240) & param_2;
  if (uVar2 == 0) {
    FUN_7103778300(0x3f800000,local_38,0x71043ad885);
    FUN_7103771d60(&local_50,*(long *)(param_1 + 0x168),(long ****)(uVar11 & 0xffffffff),param_4,
                   param_5,param_6,param_7,param_8);
    plVar4 = (long *)*local_48;
    plVar10 = local_48;
    if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x2f0);
      uVar5 = 1;
LAB_7101c9f470:
      (*pcVar7)(plVar4,uVar5,0);
    }
  }
  else {
    if ((uVar2 != *(ushort *)(param_1 + 0x240)) && ((param_3 & 1) == 0)) goto LAB_7101c9f490;
    FUN_7103778300(0x3f800000,local_38,0x7104318f65);
    FUN_7103771d60(&local_50,*(long *)(param_1 + 0x168),(long ****)(uVar11 & 0xffffffff),param_4,
                   param_5,param_6,param_7,param_8);
    plVar4 = (long *)*local_48;
    plVar10 = local_48;
    if (plVar4 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar4 + 0x2f0);
      uVar5 = 0;
      goto LAB_7101c9f470;
    }
  }
  local_50 = &PTR_FUN_710523d9c8;
  local_48 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
LAB_7101c9f490:
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar3 != 0) {
    uVar11 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar3);
  }
  return;
}

