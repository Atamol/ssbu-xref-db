// addr:      7101ddc760
// offset:    0x1ddc760
// name:      FUN_7101ddc760
// mangled:   
// signature: undefined __cdecl FUN_7101ddc760(long param_1, ulong param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ddc760(long param_1,ulong param_2,long ****param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte ****ppppbVar7;
  ulong uVar8;
  undefined **local_60;
  long *local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776640(&local_40,param_1 + 0x18,(byte ****)"set_parts_sp",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_num_sp",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar1 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
  ppppbVar7 = (byte ****)(ulong)uVar1;
  lVar4 = *(long *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x1010) = uVar1;
  if ((param_2 & 1) == 0) {
    FUN_7103399f50(lVar4,uVar1,param_3,ppppbVar7,param_5,param_6,param_7,param_8);
    iVar2 = *(int *)(param_1 + 0x1014);
  }
  else {
    if (*(uint *)(lVar4 + 0x94) != uVar1) {
      param_3 = (long ****)0x1;
      *(uint *)(lVar4 + 0x94) = uVar1;
      FUN_710377a280(lVar4,(byte *)(lVar4 + 0x18),1);
    }
    FUN_7103776910(&local_60,param_1 + 0x18,(long ****)"set_sp_visible",param_3,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    plVar3 = local_58;
    lVar4 = *local_58;
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    }
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar3);
    }
    FUN_7103778630(0,local_38,0x71043beb1c);
    iVar2 = *(int *)(param_1 + 0x1014);
  }
  if (iVar2 == 0) {
    FUN_7103776910(&local_60,(long)&local_40,(long ****)"set_txt_sp_spend",param_3,ppppbVar7,param_5
                   ,param_6,param_7,param_8);
    lVar4 = *local_58;
    plVar3 = local_58;
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
    }
  }
  else {
    FUN_7103776910(&local_60,(long)&local_40,(long ****)"set_txt_sp_spend",param_3,ppppbVar7,param_5
                   ,param_6,param_7,param_8);
    uVar8 = (ulong)*(uint *)(param_1 + 0x1014);
    uVar6 = 1;
    FUN_710377a280((long)&local_60,(byte *)"mnu_spirits_raise_sp_use_n",1);
    plVar3 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar3);
    }
    FUN_7103776910(&local_60,(long)&local_40,(long ****)"set_txt_sp_spend",uVar6,uVar8,param_5,
                   param_6,param_7,param_8);
    lVar4 = *local_58;
    plVar3 = local_58;
    if (lVar4 != 0) {
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
    }
  }
  local_58 = (long *)0x0;
  local_60 = &PTR_FUN_710523d9a8;
  if (plVar3 != (long *)0x0) {
    local_58 = (long *)0x0;
    local_60 = &PTR_FUN_710523d9a8;
    FUN_710392eb40((ulong)plVar3);
  }
  uVar8 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar8 != 0) {
    uVar5 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar8 != 0) {
    uVar5 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar8);
  }
  return;
}

