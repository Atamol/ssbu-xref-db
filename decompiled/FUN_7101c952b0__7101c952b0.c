// addr:      7101c952b0
// offset:    0x1c952b0
// name:      FUN_7101c952b0
// mangled:   
// signature: undefined __cdecl FUN_7101c952b0(long param_1, uint param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c952b0(long param_1,uint param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  byte ****ppppbVar5;
  long ****pppplVar6;
  byte **ppbVar7;
  undefined4 uVar8;
  long ****pppplVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  undefined **local_60;
  ulong local_58;
  long ***local_50;
  ulong local_48;
  
  lVar10 = *(long *)(param_1 + 8);
  pppplVar9 = (long ****)(ulong)param_2;
  lVar12 = (long)(int)param_2;
  if (*(char *)(param_1 + 0x10) != '\0') {
    ppppbVar5 = param_3;
    if (param_2 < 6) {
      FUN_7103776910(&local_50,(long)param_3,(long ****)"set_txt_filter_title_sel",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_60,(long)param_3,(long ****)"set_txt_filter_title",ppppbVar5,param_4,
                     param_5,param_6,param_7,param_8);
      pcVar11 = (&PTR_s_mnu_online_room_setting_purpose_71050adef8)[lVar12];
      FUN_710377a120((long)&local_50,pcVar11,ppppbVar5,param_4,param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_60,pcVar11,ppppbVar5,param_4,param_5,param_6,param_7,param_8);
      uVar3 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      uVar3 = local_48;
      local_50 = (long ***)&PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_7103778300(0x3f800000,(long)param_3[1],(long)(&PTR_s_icon_01_board_71050adf28)[lVar12]);
      ppppbVar5 = (byte ****)(ulong)*(byte *)(lVar10 + lVar12 + 0x138);
      param_6 = 0;
      param_4 = ppppbVar5;
      FUN_7101c8f600(lVar10,(long)param_3,(undefined1 *)ppppbVar5,ppppbVar5,pppplVar9,0,param_7,
                     param_8);
      param_5 = pppplVar9;
    }
    plVar2 = (long *)FUN_710392e290(0x10,8,(long ****)ppppbVar5,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar2 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
        local_50 = (long ***)&DAT_00000008;
        pppplVar9 = &local_50;
        uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
        if (((uVar3 & 1) != 0) &&
           (plVar2 = (long *)FUN_710392e290(0x10,8,pppplVar9,param_4,param_5,param_6,param_7,param_8
                                           ), plVar2 != (long *)0x0)) goto LAB_7101c953f0;
      }
      plVar2 = (long *)0x0;
    }
LAB_7101c953f0:
    *plVar2 = 0;
    ppbVar7 = param_3[1][1];
    if ((ppbVar7 == (byte **)0x0) || (ppbVar7[0xc] == (byte *)0x0)) {
      *plVar2 = 0;
    }
    else {
      plVar4 = (long *)FUN_7103796f20((long)ppbVar7[0xc],(long)(ppbVar7[3] + 0xb0));
      *plVar2 = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x208))(plVar4,0);
        uVar3 = (**(code **)(*plVar4 + 0x200))(plVar4);
        if ((uVar3 & 1) == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = (**(code **)(*plVar4 + 0x210))(plVar4);
          uVar1 = uVar1 ^ 1;
        }
        (**(code **)(*plVar4 + 0x388))(plVar4,uVar1 & 1,0);
      }
    }
    goto LAB_7101c95674;
  }
  ppppbVar5 = param_3;
  if (param_2 < 7) {
    FUN_7103776910(&local_50,(long)param_3,(long ****)"set_txt_filter_title_sel",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_60,(long)param_3,(long ****)"set_txt_filter_title",ppppbVar5,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar11 = (&PTR_s_mnu_online_room_setting_player_n_71050ade88)[lVar12];
    FUN_710377a120((long)&local_50,pcVar11,ppppbVar5,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_60,pcVar11,ppppbVar5,param_4,param_5,param_6,param_7,param_8);
    uVar3 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    uVar3 = local_48;
    local_50 = (long ***)&PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_7103778300(0x3f800000,(long)param_3[1],(long)(&PTR_s_icon_00_number_71050adec0)[lVar12]);
    ppppbVar5 = (byte ****)(ulong)*(byte *)(lVar10 + lVar12 + 0x110);
    param_6 = 0;
    param_4 = ppppbVar5;
    FUN_7101c91cb0(lVar10,(long)param_3,ppppbVar5,ppppbVar5,pppplVar9,0,param_7,param_8);
    param_5 = pppplVar9;
    if (param_2 != 6) goto LAB_7101c95548;
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710442248e);
    uVar8 = 1;
  }
  else {
LAB_7101c95548:
    pppplVar9 = param_5;
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710424f5fe);
    uVar8 = 0;
  }
  plVar2 = (long *)FUN_710392e290(0x10,8,(long ****)ppppbVar5,param_4,pppplVar9,param_6,param_7,
                                  param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_60 = (undefined **)((ulong)local_60 & 0xffffffff00000000);
      local_50 = (long ***)&DAT_00000008;
      pppplVar6 = &local_50;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,8,pppplVar6,param_4,pppplVar9,param_6,param_7,param_8
                                         ), plVar2 != (long *)0x0)) goto LAB_7101c955bc;
    }
    plVar2 = (long *)0x0;
  }
LAB_7101c955bc:
  *plVar2 = 0;
  ppbVar7 = param_3[1][1];
  if ((ppbVar7 == (byte **)0x0) || (ppbVar7[0xc] == (byte *)0x0)) {
    *plVar2 = 0;
  }
  else {
    plVar4 = (long *)FUN_7103796f20((long)ppbVar7[0xc],(long)(ppbVar7[3] + 0xb0));
    *plVar2 = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x208))(plVar4,uVar8);
      uVar3 = (**(code **)(*plVar4 + 0x200))(plVar4);
      if ((uVar3 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)(*plVar4 + 0x210))(plVar4);
        uVar1 = uVar1 ^ 1;
      }
      (**(code **)(*plVar4 + 0x388))(plVar4,uVar1 & 1,0);
    }
  }
LAB_7101c95674:
  FUN_710392eb40((ulong)plVar2);
  return;
}

