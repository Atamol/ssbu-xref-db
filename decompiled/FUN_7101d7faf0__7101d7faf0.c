// addr:      7101d7faf0
// offset:    0x1d7faf0
// name:      FUN_7101d7faf0
// mangled:   
// signature: undefined __cdecl FUN_7101d7faf0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d7faf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x1e8);
  FUN_71037760f0(*plVar1,1);
  (**(code **)(**(long **)(param_1 + 0x210) + 0x60))(*(long **)(param_1 + 0x210),1);
  FUN_7101d81f50(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101d818b0(param_1,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,plVar1[2],0x71042d6632);
  FUN_7103778300(0x3f800000,plVar1[2],0x7104421055);
  if (*(uint *)(param_1 + 0x1d4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

