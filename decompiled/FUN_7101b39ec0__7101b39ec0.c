// addr:      7101b39ec0
// offset:    0x1b39ec0
// name:      FUN_7101b39ec0
// mangled:   
// signature: undefined __cdecl FUN_7101b39ec0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b39ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  long *local_78;
  undefined **local_70;
  long *local_68;
  undefined **local_60;
  long *local_58;
  undefined **local_50;
  long *local_48;
  
  FUN_7103776910(&local_50,param_1,(long ****)"set_rep_stage",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar5 = local_48;
  FUN_7103779650((long)local_48);
  lVar6 = *local_48;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  FUN_71037799d0((long)local_48);
  FUN_7103776910(&local_60,param_1,(long ****)"set_rep_stage_battle",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  plVar4 = local_58;
  FUN_7103779650((long)local_58);
  lVar6 = *local_58;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_70,param_1,(long ****)"set_rep_stage_end",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar3 = local_68;
  FUN_7103779650((long)local_68);
  lVar6 = *local_68;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_80,param_1,(long ****)"set_rep_st_logo",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar2 = local_78;
  FUN_7103779650((long)local_78);
  lVar6 = *local_78;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_90,param_1,(long ****)"set_rep_st_mark",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  plVar1 = local_88;
  FUN_7103779650((long)local_88);
  lVar6 = *local_88;
  if (lVar6 != 0) {
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  }
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar2);
  }
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar4);
  }
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  return;
}

