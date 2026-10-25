// addr:      7101cd22c0
// offset:    0x1cd22c0
// name:      FUN_7101cd22c0
// mangled:   
// signature: undefined __cdecl FUN_7101cd22c0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd22c0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  if (*(int *)(param_1 + 0xe8) != 1) {
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x100),1,(long ****)0x16fff,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x100) + 0x10),0x7104318ffb);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x100) + 0x10),0x710438cbd1);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x100),0);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0xf4) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0x200000006;
    *(undefined1 *)(param_1 + 0x131) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0xffffffff00000000;
    *(undefined8 *)(param_1 + 0xe4) = 0xffffffff00000001;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}

