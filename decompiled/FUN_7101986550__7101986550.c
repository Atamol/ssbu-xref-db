// addr:      7101986550
// offset:    0x1986550
// name:      FUN_7101986550
// mangled:   
// signature: undefined __cdecl FUN_7101986550(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101986550(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)0x0;
  FUN_7103771a80((long *)(param_1 + 0x1e0),0,0);
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(undefined8 *)(param_1 + 0x520) = 0;
  *(undefined8 *)(param_1 + 0x5a4) = 0;
  *(undefined8 *)(param_1 + 0x59c) = 0;
  *(undefined8 *)(param_1 + 0x594) = 0;
  *(undefined8 *)(param_1 + 0x58c) = 0;
  *(undefined8 *)(param_1 + 0x584) = 0;
  *(undefined8 *)(param_1 + 0x57c) = 0;
  *(undefined8 *)(param_1 + 0x574) = 0;
  *(undefined8 *)(param_1 + 0x56c) = 0;
  *(undefined8 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x5bc) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x71042b3bfd);
  FUN_710198a180(param_1,extraout_x1,ppuVar1,param_4,param_5,param_6,param_7,param_8);
  if (*(uint *)(param_1 + 0x43c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x43c) * 4 + 0x3f0) = 9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

