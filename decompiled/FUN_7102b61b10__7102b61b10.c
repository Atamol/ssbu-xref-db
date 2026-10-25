// addr:      7102b61b10
// offset:    0x2b61b10
// name:      FUN_7102b61b10
// mangled:   
// signature: undefined __cdecl FUN_7102b61b10(long * param_1, undefined8 param_2)


void FUN_7102b61b10(long *param_1,undefined8 param_2)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  char *pcVar1;
  long ****pppplVar2;
  undefined8 in_x5;
  long ***in_x6;
  long ***in_x7;
  int local_1b8;
  undefined1 local_1b4;
  int local_174;
  undefined1 local_170;
  int local_130;
  undefined1 local_12c;
  int local_ec;
  undefined1 local_e8;
  long ********local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  pcVar1 = "Misc_DonutLanding";
  local_1b8 = 0;
  local_1b4 = 0;
  local_174 = 0;
  local_170 = 0;
  local_130 = 0;
  local_12c = 0;
  local_ec = 0;
  local_e8 = 0;
  FUN_710176bcc0((uint *)&local_a8,param_2,"%s_%s","Misc_DonutLanding",&DAT_710427ec1e,in_x5,in_x6,
                 in_x7);
  FUN_7102b63c80(&local_1b8,"stc_%s_set");
  FUN_710176bcc0((uint *)&local_a8,extraout_x1,"%s_%s","Misc_DonutLanding",&DAT_7104431287,in_x5,
                 in_x6,in_x7);
  FUN_7102b63c80(&local_174,"stc_%s_set");
  FUN_710176bcc0((uint *)&local_a8,extraout_x1_00,"%s_%s","Misc_DonutLanding",&DAT_7104452a5d,in_x5,
                 in_x6,in_x7);
  FUN_7102b63c80(&local_130,"stc_%s_set");
  pppplVar2 = (long ****)&DAT_71042c2f41;
  FUN_710176bcc0((uint *)&local_a8,extraout_x1_01,"%s_%s","Misc_DonutLanding",&DAT_71042c2f41,in_x5,
                 in_x6,in_x7);
  FUN_7102b63c80(&local_ec,"stc_%s_set");
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (long ********)0x0;
  uStack_a0 = 0;
  FUN_7102b61160(param_1,(long)&local_1b8,&local_a8,(byte ****)pcVar1,pppplVar2,in_x5,in_x6,in_x7);
  return;
}

