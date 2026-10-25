// addr:      7101b8dde0
// offset:    0x1b8dde0
// name:      FUN_7101b8dde0
// mangled:   
// signature: undefined __cdecl FUN_7101b8dde0(long param_1, byte * * * * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b8dde0(long param_1,byte ****param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  iVar1 = (int)param_3;
  FUN_7103776640(&local_40,**(long **)(param_1 + 8) + 8,param_2,param_3,param_4,param_5,param_6,
                 param_7,param_8);
  lVar5 = (long)iVar1;
  lVar4 = param_1 + (long)iVar1 * 0x48;
  *(undefined4 *)(lVar4 + 0x78) = 0xb;
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_title_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_48;
  if ((undefined ***)(lVar4 + 0x90) != &local_50) {
    lVar4 = param_1 + lVar5 * 0x48;
    local_48 = 0;
    uVar3 = *(ulong *)(lVar4 + 0x98);
    *(ulong *)(lVar4 + 0x98) = uVar2;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_key_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar2 = local_48;
  if ((undefined ***)(param_1 + lVar5 * 0x48 + 0xa0) != &local_50) {
    lVar4 = param_1 + lVar5 * 0x48;
    local_48 = 0;
    uVar3 = *(ulong *)(lVar4 + 0xa8);
    *(ulong *)(lVar4 + 0xa8) = uVar2;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_icn_00",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_48;
  if ((undefined ***)(param_1 + lVar5 * 0x48 + 0x80) != &local_50) {
    lVar4 = param_1 + lVar5 * 0x48;
    local_48 = 0;
    uVar3 = *(ulong *)(lVar4 + 0x88);
    *(ulong *)(lVar4 + 0x88) = uVar2;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_71037780e0(&local_50,(long)&local_40,(long ****)"grayout",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar2 = local_48;
  if ((undefined ***)(param_1 + lVar5 * 0x48 + 0xb0) != &local_50) {
    lVar4 = param_1 + lVar5 * 0x48;
    local_48 = 0;
    uVar3 = *(ulong *)(lVar4 + 0xb8);
    *(ulong *)(lVar4 + 0xb8) = uVar2;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

