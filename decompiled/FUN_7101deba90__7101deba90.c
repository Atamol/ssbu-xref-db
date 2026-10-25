// addr:      7101deba90
// offset:    0x1deba90
// name:      FUN_7101deba90
// mangled:   
// signature: undefined __cdecl FUN_7101deba90(long param_1, long * param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * * param_7, ulong param_8)


void FUN_7101deba90(long param_1,long *param_2,ushort param_3,byte ****param_4,long ****param_5,
                   ulong param_6,long ****param_7,ulong param_8)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  uint auStack_d0 [18];
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  ulong local_70 [8];
  
  uVar3 = 0;
  *(int *)(param_1 + 0x5e4) = (int)param_4;
  FUN_7101de7f20(param_1,param_2,0,param_4,param_5,param_6,param_7,param_8);
  switch(*(undefined4 *)(param_1 + 0x5e4)) {
  case 1:
    lVar4 = *(long *)(DAT_710532f730 + 8);
    if (param_2[1] - *param_2 == 8) {
      FUN_7103776910(&local_88,param_1 + 0x10,(long ****)"set_txt_help",uVar3,param_4,param_5,
                     param_6,param_7,param_8);
      lVar4 = *(long *)(lVar4 + 0x1d8);
      uVar1 = FUN_71032a9470(lVar4,param_3);
      FUN_71032a9540((uint *)&local_78,lVar4,uVar1);
      FUN_71003a4ca0(auStack_d0,"spi_%s",local_70,uVar1,param_4,param_5,param_6,param_7,param_8);
      pcVar2 = "mnu_spirits_recall_return_and_recall_2";
    }
    else {
      FUN_7103776910(&local_88,param_1 + 0x10,(long ****)"set_txt_help",uVar3,param_4,param_5,
                     param_6,param_7,param_8);
      lVar4 = *(long *)(lVar4 + 0x1d8);
      uVar1 = FUN_71032a9470(lVar4,param_3);
      FUN_71032a9540((uint *)&local_78,lVar4,uVar1);
      FUN_71003a4ca0(auStack_d0,"spi_%s",local_70,uVar1,param_4,param_5,param_6,param_7,param_8);
      pcVar2 = "mnu_spirits_recall_return_and_recall";
    }
    FUN_710377a280((long)&local_88,(byte *)pcVar2,1);
    uVar1 = local_80;
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = 0;
    if (uVar1 == 0) {
      return;
    }
    goto LAB_7101debbf8;
  case 2:
    FUN_7103776910(&local_78,param_1 + 0x10,(long ****)"set_txt_help",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar2 = "mnu_spirits_recall_do_not_return";
    break;
  case 3:
    FUN_7103776910(&local_78,param_1 + 0x10,(long ****)"set_txt_help",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar2 = "mnu_spirits_recall_spirit_set_dissection";
    break;
  case 4:
    FUN_7103776910(&local_78,param_1 + 0x10,(long ****)"set_txt_help",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar2 = "mnu_spirits_recall_attacker_set_dissection";
    break;
  case 5:
    FUN_7103776910(&local_78,param_1 + 0x10,(long ****)"set_txt_help",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar2 = "mnu_spirits_recall_supporter_set_dissection";
    break;
  default:
    goto switchD_7101debadc_default;
  }
  FUN_710377a120((long)&local_78,pcVar2,uVar3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_70[0];
  local_78 = &PTR_FUN_710523d9a8;
  local_70[0] = 0;
  if (uVar1 != 0) {
LAB_7101debbf8:
    FUN_710392eb40(uVar1);
  }
switchD_7101debadc_default:
  return;
}

