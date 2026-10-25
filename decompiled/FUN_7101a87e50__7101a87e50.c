// addr:      7101a87e50
// offset:    0x1a87e50
// name:      FUN_7101a87e50
// mangled:   
// signature: undefined __cdecl FUN_7101a87e50(long param_1, uint param_2, long param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a87e50(long param_1,uint param_2,long param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x140);
  uVar7 = (*(long *)(*(long *)(param_1 + 8) + 0x148) - lVar4 >> 2) * -0x3333333333333333;
  uVar9 = (ulong)(int)param_2;
  if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pcVar5 = "bg_col_00";
  if ((param_2 & 1) != 0) {
    pcVar5 = "bg_col_01";
  }
  lVar3 = param_3;
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar5);
  FUN_7103776910(&local_50,param_3,(long ****)"set_txt_num",lVar3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar8 = (uint *)(lVar4 + uVar9 * 0x14);
  uVar7 = (ulong)*puVar8;
  FUN_710377a120((long)&local_50,"mnu_record_fighters_records_%02d",uVar7,param_4,param_5,param_6,
                 param_7,param_8);
  switch(puVar8[1]) {
  case 0:
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_count",uVar7,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = *(uint *)(lVar4 + uVar9 * 0x14 + 8);
    pcVar5 = "mnu_record_fighters_count";
LAB_7101a88068:
    param_4 = (ulong)uVar1;
    uVar7 = 1;
    FUN_710377a280((long)&local_60,(byte *)pcVar5,1);
LAB_7101a88074:
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "unit_count";
    break;
  case 1:
    iVar2 = *(int *)(lVar4 + uVar9 * 0x14 + 8);
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_count",uVar7,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = 2;
    param_4 = (ulong)(uint)(iVar2 / 100);
    param_5 = (long ****)(ulong)(uint)(iVar2 % 100);
    FUN_710377a280((long)&local_60,(byte *)"mnu_record_fighters_count_decimal",2);
    goto LAB_7101a88074;
  case 2:
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_percent",uVar7,param_4,param_5,param_6
                   ,param_7,param_8);
    param_4 = (ulong)*(uint *)(lVar4 + uVar9 * 0x14 + 8);
    uVar7 = 1;
    FUN_710377a280((long)&local_60,(byte *)"mnu_record_fighters_percent",1);
    goto LAB_7101a88030;
  case 3:
    iVar2 = *(int *)(lVar4 + uVar9 * 0x14 + 8);
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_percent",uVar7,param_4,param_5,param_6
                   ,param_7,param_8);
    uVar7 = 2;
    param_4 = (ulong)(uint)(iVar2 / 100);
    param_5 = (long ****)(ulong)(uint)(iVar2 % 100);
    FUN_710377a280((long)&local_60,(byte *)"mnu_record_fighters_percent_decimal",2);
LAB_7101a88030:
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "unit_percent";
    break;
  case 4:
    iVar2 = *(int *)(lVar4 + uVar9 * 0x14 + 8);
    lVar3 = (long)(iVar2 % 0x3c);
    if (0x3e6 < lVar3) {
      lVar3 = 999;
    }
    uVar6 = (long)(((iVar2 / 0x3c) % 0x3c) * 1000) + (long)(iVar2 / 0xe10) * 1000000 + lVar3;
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_time",uVar7,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = 1;
    FUN_710377a280((long)&local_60,(byte *)"mnu_record_fighters_time",1);
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "unit_time";
    param_4 = uVar6;
    break;
  case 5:
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_meter",uVar7,param_4,param_5,param_6,
                   param_7,param_8);
    param_4 = (ulong)*(uint *)(lVar4 + uVar9 * 0x14 + 8);
    uVar7 = 1;
    FUN_710377a280((long)&local_60,(byte *)"mnu_record_fighters_meter",1);
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "unit_meter";
    break;
  case 0xffffffff:
    FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_count",uVar7,param_4,param_5,param_6,
                   param_7,param_8);
    uVar1 = *(uint *)(lVar4 + uVar9 * 0x14 + 8);
    pcVar5 = "mnu_record_fighters_records_n";
    goto LAB_7101a88068;
  default:
    goto switchD_7101a87f0c_default;
  }
  FUN_7103778300(0x3f800000,lVar3,(long)pcVar5);
  uVar6 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
switchD_7101a87f0c_default:
  FUN_7103776910(&local_60,param_3,(long ****)"set_txt_unit_meter_00",uVar7,param_4,param_5,param_6,
                 param_7,param_8);
  if ((*(char *)(*(long *)(param_1 + 8) + 0x158) == '\0') &&
     (*(int *)(lVar4 + uVar9 * 0x14 + 8) == 0)) {
    FUN_710377a120((long)&local_60,"mnu_record_fighters_no_rank_bracket",uVar7,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else {
    FUN_710377a280((long)&local_60,(byte *)"mnu_record_fighters_rank",1);
  }
  switch(*(undefined4 *)(lVar4 + uVar9 * 0x14 + 0x10)) {
  case 0:
    lVar4 = *(long *)(param_3 + 8);
    pcVar5 = "lank_hi";
    break;
  case 2:
    lVar4 = *(long *)(param_3 + 8);
    pcVar5 = "lank_low";
    break;
  case 0xffffffff:
  case 1:
    lVar4 = *(long *)(param_3 + 8);
    pcVar5 = "lank_middle";
    break;
  default:
    goto switchD_7101a88234_default;
  }
  FUN_7103778300(0x3f800000,lVar4,(long)pcVar5);
switchD_7101a88234_default:
  uVar7 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  return;
}

