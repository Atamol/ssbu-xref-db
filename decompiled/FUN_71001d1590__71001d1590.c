// addr:      71001d1590
// offset:    0x1d1590
// name:      FUN_71001d1590
// mangled:   
// signature: undefined8 __cdecl FUN_71001d1590(long * param_1)


undefined8 FUN_71001d1590(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 auStack_48 [3];
  undefined4 local_24;
  
  if (*(int *)((long)param_1 + 0x14) == 0) {
    return 1;
  }
  if (*(int *)((long)param_1 + 0x14) == 1) {
    FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/CallContext.cpp",0xee,
                   0xe000000e,0);
    return 0;
  }
  local_24 = 0x80010001;
  FUN_71001b4200((undefined4 *)auStack_48,&local_24);
  FUN_71001d0f00(param_1,0,auStack_48,0);
  param_1[0x11] = 0;
  if (param_1[6] != 0) {
    lVar1 = param_1[4];
    plVar3 = (long *)param_1[5];
    lVar2 = *plVar3;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar2;
    param_1[6] = 0;
    while (plVar3 != param_1 + 4) {
      plVar4 = (long *)plVar3[1];
      FUN_71001b1870((long)plVar3);
      plVar3 = plVar4;
    }
  }
  plVar3 = (long *)param_1[10];
  if (plVar3 == (long *)0x0) goto LAB_71001d16cc;
  plVar4 = (long *)*plVar3;
  if (plVar4 == (long *)plVar3[1]) {
    plVar3[1] = (long)plVar4;
joined_r0x0071001d16b0:
    if (plVar4 != (long *)0x0) {
      plVar3[1] = (long)plVar4;
      FUN_71001b1870((long)plVar4);
    }
    FUN_71001af8a0((long)plVar3);
  }
  else {
    do {
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 8))();
        plVar3 = (long *)param_1[10];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != (long *)plVar3[1]);
    plVar3[1] = *plVar3;
    if (plVar3 != (long *)0x0) {
      plVar4 = (long *)*plVar3;
      goto joined_r0x0071001d16b0;
    }
  }
  param_1[10] = 0;
LAB_71001d16cc:
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
    param_1[0x10] = 0;
  }
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return 1;
}

