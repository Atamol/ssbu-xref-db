// addr:      71000a0af0
// offset:    0xa0af0
// name:      FUN_71000a0af0
// mangled:   
// signature: undefined __cdecl FUN_71000a0af0(long * param_1, undefined8 param_2, undefined4 param_3, int param_4)


void FUN_71000a0af0(long *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  
  if (DAT_71052ab978 != (undefined8 *)0x0) {
    FUN_7100093530();
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_1;
    *(undefined4 *)(puVar1 + 3) = param_3;
    *(int *)((long)puVar1 + 0x1c) = param_4;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = &PTR_FUN_7104f4a100;
    puVar1[1] = param_2;
    puVar1[4] = (long)param_4 * 0xa0;
    __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0xa0,0x80);
    puVar1[6] = __s;
    memset(__s,0,(long)*(int *)((long)puVar1 + 0x1c) * 0xa0);
    lVar2 = puVar1[1];
    *(undefined8 *)(lVar2 + 0xf68) = 0;
    *(code **)(lVar2 + 0xf70) = FUN_71000a0400;
    *(code **)(lVar2 + 0xf78) = FUN_71000a0890;
    *(code **)(lVar2 + 0xf88) = FUN_71000a08e0;
    *(code **)(lVar2 + 0xf90) = FUN_71000a0910;
    *(code **)(lVar2 + 0xf98) = FUN_71000a0960;
    *(code **)(lVar2 + 4000) = FUN_71000a0670;
    *(code **)(lVar2 + 0xfa8) = FUN_71000a0710;
    *(code **)(lVar2 + 0xfb0) = FUN_71000a0820;
    *(undefined8 *)(lVar2 + 0xf80) = 0;
    *(code **)(lVar2 + 0xfb8) = FUN_710009d750;
    DAT_71052ab978 = puVar1;
    return;
  }
  FUN_7100093660();
  return;
}

