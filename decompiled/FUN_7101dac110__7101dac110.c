// addr:      7101dac110
// offset:    0x1dac110
// name:      FUN_7101dac110
// mangled:   
// signature: undefined __cdecl FUN_7101dac110(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dac110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  lVar1 = param_1 + 0x50;
  FUN_7103776640(&local_40,lVar1,(byte ****)"set_parts_btn_attacker",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar2 = local_38;
  FUN_7103778300(0x3f800000,local_38,0x71043cf882);
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
  FUN_7103776640(&local_40,lVar1,(byte ****)"set_parts_slot",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_00",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_48;
  FUN_7103778300(0x3f800000,local_48,0x71043cf882);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_01",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_48;
  FUN_7103778300(0x3f800000,local_48,0x71043cf882);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_02",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar2 = local_48;
  FUN_7103778300(0x3f800000,local_48,0x71043cf882);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  if ((*(char *)(param_1 + 0xdd) != '\0') && (*(char *)(param_1 + 0xde) != '\0')) {
    FUN_7103776640(&local_50,lVar1,(byte ****)"set_parts_btn_rule",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar2 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x710424f975);
    *(undefined1 *)(param_1 + 0xde) = 0;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar2 != 0) {
      uVar3 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40(uVar2);
    }
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

