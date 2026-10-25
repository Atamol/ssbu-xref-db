// addr:      7101a823b0
// offset:    0x1a823b0
// name:      FUN_7101a823b0
// mangled:   
// signature: undefined __cdecl FUN_7101a823b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a823b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 extraout_x1;
  long ****pppplVar2;
  
  FUN_7101a86030(param_1,param_2,param_3,(ushort *)param_4,param_5,param_6,param_7,param_8);
  pppplVar2 = (long ****)&DAT_00001000;
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x180),0,(long ****)&DAT_00001000,param_4,
                 param_5,param_6,param_7,param_8);
  pcVar1 = "toggle_btn_on";
  if (*(int *)(param_1 + 0x264) != 0) {
    pcVar1 = "toggle_btn_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x180) + 0x10),(long)pcVar1);
  pcVar1 = "name_btn_off";
  if (*(char *)(param_1 + 0x275) != '\0') {
    pcVar1 = "name_btn_on";
  }
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x180) + 0x10),(long)pcVar1);
  FUN_7103778630(0,*(long *)(**(long **)(param_1 + 0x180) + 0x10),0x71042d6312);
  FUN_7103778630(0,*(long *)(**(long **)(param_1 + 0x180) + 0x10),0x710425fcde);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x180) + 0x10),0x7104421055);
  FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),extraout_x1,pppplVar2,param_4,param_5,param_6,param_7
                 ,param_8);
  if (*(uint *)(param_1 + 0x164) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x164) * 4 + 0x118) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

