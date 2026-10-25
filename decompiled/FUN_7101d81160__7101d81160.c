// addr:      7101d81160
// offset:    0x1d81160
// name:      FUN_7101d81160
// mangled:   
// signature: undefined __cdecl FUN_7101d81160(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d81160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)**(undefined8 **)(param_1 + 0x1e8);
  uVar1 = 1;
  *(undefined4 *)(*(long *)(*plVar2 + 0x600) + 0x10) = 0x20;
  FUN_7103771a80((long *)(param_1 + 0x478),0,1);
  (**(code **)(**(long **)(param_1 + 0x478) + 0x60))(*(long **)(param_1 + 0x478),1);
  (**(code **)(**(long **)(param_1 + 0x478) + 0x70))(*(long **)(param_1 + 0x478),1);
  FUN_7101d818b0(param_1,extraout_x1,uVar1,param_4,param_5,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,plVar2[2],0x710436c791);
  FUN_7103778300(0x3f800000,plVar2[2],0x7104421055);
  if (*(uint *)(param_1 + 0x1d4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

