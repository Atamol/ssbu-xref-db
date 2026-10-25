// addr:      7101af8900
// offset:    0x1af8900
// name:      FUN_7101af8900
// mangled:   
// signature: undefined __cdecl FUN_7101af8900(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af8900(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  switch((param_2 & 0x7f000000) + 0xfe000000 >> 0x18) {
  case 1:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 2) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 2;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_spirits";
    uVar4 = local_38;
    break;
  case 2:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 1) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 1;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_other";
    uVar4 = local_38;
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 3) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 3;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_colle";
    uVar4 = local_38;
    break;
  case 4:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 4) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 4;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_option";
    uVar4 = local_38;
    break;
  case 5:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 5) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 5;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_online";
    uVar4 = local_38;
    break;
  case 6:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 6) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 6;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_help";
    uVar4 = local_38;
    break;
  default:
    lVar3 = *(long *)(param_1 + 0x80);
    if (*(int *)(lVar3 + 0xc4) == 0) {
      return;
    }
    *(undefined4 *)(lVar3 + 0xc4) = 0;
    FUN_7103776640(&local_40,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"btn_back",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_50,**(long **)(lVar3 + 0xb8) + 8,(byte ****)"set_parts_txt_head_00",
                   param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar5 = "color_melee";
    uVar4 = local_38;
  }
  FUN_7103778300(0x3f800000,uVar4,(long)pcVar5);
  uVar2 = local_48;
  FUN_7103778300(0x3f800000,local_48,(long)pcVar5);
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    FUN_710392eb40(uVar2);
  }
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

