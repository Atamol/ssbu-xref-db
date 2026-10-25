// addr:      7101aa3710
// offset:    0x1aa3710
// name:      FUN_7101aa3710
// mangled:   
// signature: undefined __cdecl FUN_7101aa3710(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101aa3710(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  PosixTime *pPVar6;
  long lVar7;
  long *plVar8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  ulong local_60;
  CalendarTime local_58 [8];
  PosixTime local_50 [8];
  ushort local_48 [4];
  
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 5) <= (ulong)(long)param_2) {
    return;
  }
  lVar3 = *(long *)(param_1 + 8) + (long)param_2 * 0x20;
  plVar8 = (long *)(lVar3 + 0x10);
  lVar7 = *plVar8;
  if (lVar7 == 0) {
    uVar4 = 0;
    local_60 = 0;
  }
  else {
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x20) & 0xfff | ((ulong)*(byte *)(lVar7 + 0x22) & 0xf) << 0xc
            | ((ulong)*(byte *)(lVar7 + 0x23) & 0x1f) << 0x10;
    local_60 = (ulong)*(ushort *)(lVar7 + 0x28) & 0xfff |
               ((ulong)*(byte *)(lVar7 + 0x2a) & 0xf) << 0xc |
               ((ulong)*(byte *)(lVar7 + 0x2b) & 0x1f) << 0x10 |
               ((ulong)*(byte *)(lVar7 + 0x2c) & 0x1f) << 0x15 |
               ((ulong)*(byte *)(lVar7 + 0x2d) & 0x3f) << 0x1a |
               (ulong)(*(byte *)(lVar7 + 0x2e) & 0x3f) << 0x20 | 0x4000000000000000;
  }
  lVar7 = param_3;
  FUN_7103776910(&local_70,param_3,(long ****)"set_txt_day",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_80,param_3,(long ****)"set_txt_honbun",lVar7,param_4,param_5,param_6,param_7
                 ,param_8);
  FUN_7103776910(&local_90,param_3,(long ****)"set_txt_receive",lVar7,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_a0,param_3,(byte ****)"set_parts_new",lVar7,param_4,param_5,param_6,param_7,
                 param_8);
  uVar1 = local_98;
  FUN_7103778300(0x3f800000,local_98,0x71043cd335);
  pPVar6 = (PosixTime *)((uVar4 & 0xfff) * 1000000 + (uVar4 >> 0xc & 0xf) * 1000 + (uVar4 >> 0x10));
  FUN_710377a310((long)&local_70,1);
  bVar2 = FUN_71037419c0((uint *)&local_60,(undefined8 *)local_48);
  if (bVar2) {
    pPVar6 = local_50;
    nn::time::ToCalendarTime(local_58,(CalendarAdditionalInfo *)0x0,pPVar6);
  }
  lVar7 = *plVar8;
  pcVar5 = (char *)0x0;
  if (lVar7 != 0) {
    pcVar5 = (char *)(lVar7 + 0x50);
  }
  FUN_710377a120((long)&local_80,pcVar5,pPVar6,param_4,param_5,param_6,param_7,param_8);
  switch(*(undefined4 *)(lVar3 + 4)) {
  case 1:
  case 6:
    FUN_710377a280((long)&local_90,(byte *)"mnu_present_deadline_date",2);
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "present";
    break;
  case 2:
    if (*(long **)(local_88 + 0x10) != (long *)0x0) {
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_71037a2270(*(long **)(local_88 + 0x10),local_48,0,0);
    }
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "received";
    break;
  case 3:
    if (*(long **)(local_88 + 0x10) != (long *)0x0) {
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_71037a2270(*(long **)(local_88 + 0x10),local_48,0,0);
    }
    lVar3 = *(long *)(param_3 + 8);
    pcVar5 = "expired";
    break;
  default:
    goto switchD_7101aa38f0_caseD_4;
  }
  FUN_7103778300(0x3f800000,lVar3,(long)pcVar5);
switchD_7101aa38f0_caseD_4:
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar1 != 0) {
    uVar4 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar1);
  }
  uVar4 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar4 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  uVar4 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  return;
}

