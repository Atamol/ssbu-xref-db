// addr:      7101a19990
// offset:    0x1a19990
// name:      FUN_7101a19990
// mangled:   
// signature: undefined __cdecl FUN_7101a19990(long param_1, int param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a19990(long param_1,int param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  byte ***pppbVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long lVar9;
  short sVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined **local_78;
  ulong local_70;
  byte ***local_68;
  ulong local_60;
  undefined4 local_58;
  byte **local_50;
  ulong local_48;
  
  if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x250) + (long)param_2 * 0x10 + 8);
  if (*(char *)(lVar9 + 0x6b9) == '\0') {
    return;
  }
  if (*(int *)(lVar9 + 0x1f8) != 0) {
    if (*(int *)(param_1 + 0x16c) != 0xf) {
      return;
    }
    local_50 = (byte **)&DAT_c1ffff0000000000;
    local_68 = (byte ***)&DAT_ffffffff00000000;
    local_48 = local_48 & 0xffffffff00000000;
    local_58 = 0xffffffff;
    local_60 = 0xffffffff;
    pppbVar6 = &local_50;
    ppppbVar8 = &local_68;
LAB_7101a19a1c:
    FUN_7101a1b4a0(param_1,param_2,(ulong *)pppbVar6,ppppbVar8,param_5,param_6,param_7,param_8);
    return;
  }
  if (0xb < *(int *)(param_1 + 0x16c) - 9U) {
    return;
  }
  lVar12 = **(long **)(param_1 + 0x198);
  lVar1 = lVar12 + 8;
  switch(*(int *)(param_1 + 0x16c)) {
  case 9:
    if (0 < param_2) {
      return;
    }
    local_50 = *(byte ***)(lVar9 + 0x200);
    local_68 = &local_50;
    ppppbVar8 = &local_68;
    plVar4 = FUN_7101a1b900((long *)(param_1 + 0x290),(ulong)local_50,(long ****)ppppbVar8,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_68,lVar1,(byte ****)"set_parts_score_0",ppppbVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a1ba90((long)&local_68,(int *)(plVar4 + 5),(ulong)ppppbVar8,(ulong)param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7101a1bc20(param_1,(long)&local_68,1,(byte ****)(plVar4 + 10),param_5,param_6,param_7,
                   param_8);
    ppppbVar8 = (byte ****)(plVar4 + 8);
    pppplVar7 = (long ****)0x0;
    FUN_7101a1bc20(param_1,(long)&local_68,0,ppppbVar8,param_5,param_6,param_7,param_8);
    FUN_7103776390(&local_50,(undefined8 *)(**(long **)(param_1 + 0x1a8) + 8),pppplVar7,ppppbVar8,
                   param_5,param_6,param_7,param_8);
    if ((int)plVar4[5] == 2) {
      uVar2 = *(uint *)(plVar4 + 6);
      if (0x62 < (int)uVar2) {
        uVar2 = 99;
      }
      FUN_7103776910(&local_78,(long)&local_50,(long ****)"set_txt_lv",pppplVar7,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      FUN_710377a310((long)&local_78,2);
      uVar3 = local_70;
      local_78 = &PTR_FUN_710523d9a8;
      local_70 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_7103778630((ulong)(uint)(float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU)),local_48,
                     0x71043be120);
    }
    else {
      FUN_7103776910(&local_78,(long)&local_50,(long ****)"set_txt_lv",pppplVar7,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_78,"mel_chara_select_high_score_none",pppplVar7,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      uVar3 = local_70;
      local_78 = &PTR_FUN_710523d9a8;
      local_70 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_7103778300(0x3f800000,local_48,0x71042f7c57);
    }
    uVar3 = local_48;
    local_50 = &PTR_FUN_710523d988;
    local_48 = 0;
    if (uVar3 != 0) {
      uVar5 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar3);
    }
    goto LAB_7101a19d00;
  case 10:
    if (param_2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x160) != 1) {
      return;
    }
    local_50 = *(byte ***)(lVar9 + 0x200);
    local_68 = &local_50;
    ppppbVar8 = &local_68;
    plVar4 = FUN_7101a1b900((long *)(param_1 + 0x290),(ulong)local_50,(long ****)ppppbVar8,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_68,lVar1,(byte ****)"set_parts_score_0",ppppbVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a1be30((long)&local_68,(int *)(plVar4 + 5),(ulong)ppppbVar8,(ulong)param_4,param_5,
                   param_6,param_7,param_8);
    break;
  case 0xb:
    if (0 < param_2) {
      return;
    }
    puVar11 = *(undefined1 **)(lVar9 + 0x200);
    sVar10 = -1;
    if (((ulong)puVar11 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar11 & 0xffffffffff) != 0) {
      uVar3 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar11);
      if ((int)uVar3 == -1) {
        sVar10 = -1;
      }
      else {
        puVar13 = *(undefined8 **)(*DAT_7105314510 + 0x208);
        uVar3 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),puVar11);
        if ((int)uVar3 < 0) {
          sVar10 = 0;
        }
        else {
          sVar10 = *(short *)(*(long *)*puVar13 + (long)(int)uVar3 * 2 + 0x2390);
        }
      }
    }
    FUN_7103776910(&local_68,lVar1,(long ****)"set_txt_count",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if (sVar10 == -1) {
      FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),0x7104454478);
      uVar3 = local_60;
      if (*(long **)(local_60 + 0x10) != (long *)0x0) {
        local_50 = (byte **)((ulong)local_50 & 0xffffffff00000000);
        FUN_71037a2270(*(long **)(local_60 + 0x10),(ushort *)&local_50,0,0);
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),0x71043188fb);
      FUN_710377a280((long)&local_68,(byte *)"mel_chara_select_training_max_combo_n",1);
      uVar3 = local_60;
    }
    local_68 = (byte ***)&PTR_FUN_710523d9a8;
    local_60 = 0;
    if (uVar3 == 0) {
      return;
    }
    goto LAB_7101a19e7c;
  default:
    goto switchD_7101a19a58_caseD_c;
  case 0xd:
    local_50 = *(byte ***)(lVar9 + 0x200);
    local_68 = &local_50;
    ppppbVar8 = &local_68;
    plVar4 = FUN_7101a1b900((long *)(param_1 + 0x290),(ulong)local_50,(long ****)ppppbVar8,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_68,lVar1,(byte ****)"set_parts_score_0",ppppbVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a1c140((long)&local_68,(int *)(plVar4 + 5),(ulong)ppppbVar8,(ulong)param_4,param_5,
                   param_6,param_7,param_8);
    break;
  case 0xf:
    local_50 = *(byte ***)(lVar9 + 0x200);
    local_68 = &local_50;
    plVar4 = FUN_7101a1b900((long *)(param_1 + 0x290),(ulong)local_50,(long ****)&local_68,param_4,
                            param_5,param_6,param_7,param_8);
    pppbVar6 = (byte ***)(plVar4 + 8);
    ppppbVar8 = (byte ****)(plVar4 + 5);
    goto LAB_7101a19a1c;
  case 0x14:
    if (param_2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x160) != 1) {
      return;
    }
    local_50 = *(byte ***)(lVar9 + 0x200);
    local_68 = &local_50;
    ppppbVar8 = &local_68;
    plVar4 = FUN_7101a1b900((long *)(param_1 + 0x290),(ulong)local_50,(long ****)ppppbVar8,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_68,lVar1,(byte ****)"set_parts_score_0",ppppbVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101a1c070((long)&local_68,(int *)(plVar4 + 5),(ulong)ppppbVar8,param_4,param_5,param_6,
                   param_7,param_8);
  }
  FUN_7101a1bc20(param_1,(long)&local_68,0,(byte ****)(plVar4 + 8),param_5,param_6,param_7,param_8);
LAB_7101a19d00:
  uVar3 = local_60;
  local_68 = (byte ***)&PTR_FUN_710523d988;
  local_60 = 0;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
LAB_7101a19e7c:
    FUN_710392eb40(uVar3);
  }
switchD_7101a19a58_caseD_c:
  return;
}

