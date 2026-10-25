// addr:      7102b62a60
// offset:    0x2b62a60
// name:      FUN_7102b62a60
// mangled:   
// signature: undefined __cdecl FUN_7102b62a60(long * param_1, undefined8 param_2, int param_3, ulong param_4, undefined8 param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102b62a60(long *param_1,undefined8 param_2,int param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  long ****pppplVar4;
  undefined *puVar5;
  int local_1a8;
  undefined1 local_1a4;
  int local_164;
  undefined1 local_160;
  int local_120;
  undefined1 local_11c;
  int local_dc;
  undefined1 local_d8;
  long ********local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_1a8 = 0;
  local_1a4 = 0;
  local_164 = 0;
  pcVar3 = "Ground";
  if ((int)param_2 != 1) {
    pcVar3 = "Island";
  }
  local_160 = 0;
  pppplVar4 = (long ****)(param_4 & 0xffffffff);
  pcVar1 = "Island";
  if ((int)param_2 != 0) {
    pcVar1 = pcVar3;
  }
  local_120 = 0;
  local_11c = 0;
  local_dc = 0;
  puVar2 = &DAT_710426e064;
  if (param_3 != 1) {
    puVar2 = &DAT_710439b3be;
  }
  local_d8 = 0;
  puVar5 = &DAT_71042b2c92;
  if (param_3 != 2) {
    puVar5 = puVar2;
  }
  FUN_710176bcc0((uint *)&local_98,param_2,"Land_%s_%02d_%s",pcVar1,pppplVar4,puVar5,param_7,param_8
                );
  pcVar3 = "Railed";
  FUN_7102b63800(&local_1a8,0,&uStack_90,(byte *)"Railed",pppplVar4,puVar5,param_7,param_8);
  FUN_7102b63800(&local_164,1,&uStack_90,(byte *)"Railed",pppplVar4,puVar5,param_7,param_8);
  FUN_7102b63800(&local_120,2,&uStack_90,(byte *)"Railed",pppplVar4,puVar5,param_7,param_8);
  FUN_7102b63800(&local_dc,3,&uStack_90,(byte *)"Railed",pppplVar4,puVar5,param_7,param_8);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (long ********)0x0;
  uStack_90 = 0;
  FUN_7102b61160(param_1,(long)&local_1a8,&local_98,(byte ****)pcVar3,pppplVar4,puVar5,param_7,
                 param_8);
  return;
}

