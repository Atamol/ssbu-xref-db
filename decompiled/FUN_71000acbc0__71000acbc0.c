// addr:      71000acbc0
// offset:    0xacbc0
// name:      FUN_71000acbc0
// mangled:   
// signature: undefined __cdecl FUN_71000acbc0(long * param_1, long param_2, undefined4 param_3)


void FUN_71000acbc0(long *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  if (DAT_71052ab980 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 4) = param_3;
    puVar1[5] = 0;
    puVar1[2] = &DAT_3f8000003f800000;
    puVar1[3] = param_2;
    *puVar1 = &PTR_FUN_7104f4a1b8;
    puVar1[1] = &DAT_3f8000003f800000;
    *(undefined8 *)(param_2 + 0xeb8) = 0;
    *(code **)(param_2 + 0xec0) = FUN_71000ac910;
    *(undefined8 *)(param_2 + 0xed0) = 0;
    *(undefined8 *)(param_2 + 0xec8) = 0;
    *(code **)(param_2 + 0xed8) = FUN_71000aca90;
    *(code **)(param_2 + 0xee0) = FUN_71000acaf0;
    *(code **)(param_2 + 0xee8) = FUN_71000acb40;
    *(undefined8 *)(param_2 + 0xf00) = 0;
    *(undefined8 *)(param_2 + 0xef8) = 0;
    *(undefined8 *)(param_2 + 0xef0) = 0;
    *(code **)(param_2 + 0xf08) = FUN_710009d750;
    DAT_71052ab980 = puVar1;
    return;
  }
  FUN_7100093660();
  return;
}

