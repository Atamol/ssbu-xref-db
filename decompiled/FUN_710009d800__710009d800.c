// addr:      710009d800
// offset:    0x9d800
// name:      FUN_710009d800
// mangled:   
// signature: undefined __cdecl FUN_710009d800(long * param_1, undefined8 param_2, undefined4 param_3, int param_4)


void FUN_710009d800(long *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  
  if (DAT_71052ab970 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(int *)((long)puVar1 + 0x1c) = param_4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_7104f4a0d0;
    puVar1[1] = param_2;
    puVar1[4] = (long)param_4 * 0x90;
    __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0x90,0x80);
    puVar1[6] = __s;
    memset(__s,0,(long)*(int *)((long)puVar1 + 0x1c) * 0x90);
    lVar2 = puVar1[1];
    *(undefined8 *)(lVar2 + 0xf10) = 0;
    *(code **)(lVar2 + 0xf18) = FUN_710009d0f0;
    *(code **)(lVar2 + 0xf20) = FUN_710009d5a0;
    *(code **)(lVar2 + 0xf30) = FUN_710009d5f0;
    *(code **)(lVar2 + 0xf38) = FUN_710009d620;
    *(code **)(lVar2 + 0xf40) = FUN_710009d670;
    *(code **)(lVar2 + 0xf48) = FUN_710009d380;
    *(code **)(lVar2 + 0xf50) = FUN_710009d420;
    *(code **)(lVar2 + 0xf58) = FUN_710009d530;
    *(undefined8 *)(lVar2 + 0xf28) = 0;
    *(code **)(lVar2 + 0xf60) = FUN_710009d750;
    DAT_71052ab970 = puVar1;
    return;
  }
  FUN_7100093660();
  return;
}

