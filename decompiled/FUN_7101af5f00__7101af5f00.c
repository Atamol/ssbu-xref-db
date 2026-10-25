// addr:      7101af5f00
// offset:    0x1af5f00
// name:      FUN_7101af5f00
// mangled:   
// signature: undefined __cdecl FUN_7101af5f00(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af5f00(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776640(&local_40,**(long **)(param_1 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_50,**(long **)(param_1 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_38;
  switch(param_2) {
  case 1:
    pcVar4 = "color_other";
    break;
  case 2:
    pcVar4 = "color_spirits";
    break;
  case 3:
    pcVar4 = "color_colle";
    break;
  case 4:
    pcVar4 = "color_option";
    break;
  case 5:
    pcVar4 = "color_online";
    break;
  case 6:
    pcVar4 = "color_help";
    break;
  case 7:
    FUN_7103778300(0x3f800000,local_38,0x71044124d0);
    uVar3 = local_48;
    goto LAB_7101af600c;
  default:
    pcVar4 = "color_melee";
  }
  FUN_7103778300(0x3f800000,local_38,(long)pcVar4);
  FUN_7103778300(0x3f800000,local_48,(long)pcVar4);
  uVar3 = local_48;
LAB_7101af600c:
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar3 != 0) {
    uVar2 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar3);
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar3 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

