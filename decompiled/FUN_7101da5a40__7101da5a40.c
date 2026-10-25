// addr:      7101da5a40
// offset:    0x1da5a40
// name:      FUN_7101da5a40
// mangled:   
// signature: undefined __cdecl FUN_7101da5a40(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101da5a40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  lVar1 = param_1 + 0x50;
  if (*(short *)(param_1 + 0x98) == -1) {
    FUN_7103776640(&local_40,lVar1,(byte ****)"set_parts_btn_attacker",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar3 = "color_edit_unset";
    uVar4 = local_38;
  }
  else {
    FUN_7103776640(&local_40,lVar1,(byte ****)"set_parts_btn_attacker",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pcVar3 = "color_edit_set";
    uVar4 = local_38;
  }
  FUN_7103778300(0x3f800000,uVar4,(long)pcVar3);
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar4);
  }
  FUN_7103776640(&local_40,lVar1,(byte ****)"set_parts_slot",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  if (*(int *)(param_1 + 0xb0) < 1) {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_00",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar3 = "color_edit_unset";
    uVar4 = local_48;
  }
  else {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_00",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar3 = "color_edit_set";
    uVar4 = local_48;
  }
  FUN_7103778300(0x3f800000,uVar4,(long)pcVar3);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar4);
  }
  if (*(int *)(param_1 + 0xb0) < 2) {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_01",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar3 = "color_edit_unset";
  }
  else {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_01",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar3 = "color_edit_set";
  }
  uVar4 = local_48;
  FUN_7103778300(0x3f800000,local_48,(long)pcVar3);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar4);
  }
  if (*(int *)(param_1 + 0xb0) < 3) {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_02",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar3 = "color_edit_unset";
  }
  else {
    FUN_7103776640(&local_50,(long)&local_40,(byte ****)"set_parts_btn_spter_02",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar3 = "color_edit_set";
  }
  uVar4 = local_48;
  FUN_7103778300(0x3f800000,local_48,(long)pcVar3);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar4);
  }
  if ((*(char *)(param_1 + 0xdd) != '\0') && (*(char *)(param_1 + 0xde) == '\0')) {
    FUN_7103776640(&local_50,lVar1,(byte ****)"set_parts_btn_rule",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar4 = local_48;
    FUN_7103778300(0x3f800000,local_48,0x71042d66be);
    *(undefined1 *)(param_1 + 0xde) = 1;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar4 != 0) {
      uVar2 = *(ulong *)(uVar4 + 0x18);
      *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar4 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar4);
    }
  }
  uVar4 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar4 != 0) {
    uVar2 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar4);
  }
  return;
}

