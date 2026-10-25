// addr:      7101c76f30
// offset:    0x1c76f30
// name:      FUN_7101c76f30
// mangled:   
// signature: undefined __cdecl FUN_7101c76f30(long param_1, byte param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c76f30(long param_1,byte param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long ****pppplVar2;
  ulong uVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  iVar5 = (int)param_3;
  uVar3 = (ulong)param_2;
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(param_1 + 8);
  lVar6 = lVar7 + uVar3 * 0x1e0;
  if (*(int *)(lVar6 + 0x1a0) == iVar5) {
    return;
  }
  lVar1 = lVar7 + uVar3 * 0x1e0 + 0x28;
  pppplVar2 = (long ****)"balloon_off";
  if (iVar5 != 0) {
    pppplVar2 = (long ****)"balloon_on";
  }
  FUN_71037780e0(&local_50,lVar1,pppplVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710377aee0(0x3f800000,(long)&local_50);
  switch(iVar5) {
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(lVar7 + uVar3 * 0x1e0 + 0x30),0x710433a1e8);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar4 = "mnu_online_room_inside_entry";
    break;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(lVar7 + uVar3 * 0x1e0 + 0x30),0x710433a1e8);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar4 = "mnu_online_room_inside_watch";
    break;
  case 3:
    FUN_7103778300(0x3f800000,*(long *)(lVar7 + uVar3 * 0x1e0 + 0x30),0x7104412aae);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_01",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar4 = "mnu_online_room_inside_watching";
    goto LAB_7101c77104;
  case 4:
    FUN_7103778300(0x3f800000,*(long *)(lVar7 + uVar3 * 0x1e0 + 0x30),0x710434a3b3);
    FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_balloon_01",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pcVar4 = "mnu_online_room_inside_selected";
LAB_7101c77104:
    FUN_710377a120((long)&local_60,pcVar4,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101c77118;
  default:
    goto switchD_7101c76fd0_default;
  }
  FUN_710377a120((long)&local_60,pcVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_60,lVar1,(long ****)"set_txt_guide",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710337cef0(&local_60,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101c77118:
  uVar3 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
switchD_7101c76fd0_default:
  uVar3 = local_48;
  *(int *)(lVar6 + 0x1a0) = iVar5;
  local_50 = &PTR_FUN_710523d9e8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  return;
}

