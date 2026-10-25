// addr:      710003b1e0
// offset:    0x3b1e0
// name:      FUN_710003b1e0
// mangled:   
// signature: undefined __cdecl FUN_710003b1e0(long * param_1, undefined8 param_2, undefined8 * param_3, long param_4)


void FUN_710003b1e0(long *param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  
  (**(code **)(*param_1 + 0x108))(param_1,param_3);
  if (((DAT_71052ab3b0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_71052ab3b0), iVar1 != 0)) {
    if (((DAT_710593baf0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593baf0), iVar1 != 0)) {
      DAT_710593baf8 = 0;
      __cxa_guard_release(&DAT_710593baf0);
    }
    DAT_71052ab3a8 = &DAT_710593baf8;
    __cxa_guard_release(&DAT_71052ab3b0);
  }
  if (param_3 != (undefined8 *)0x0) {
    for (puVar2 = (undefined8 *)(**(code **)*param_3)(param_3); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      puVar6 = param_3;
      if ((undefined8 **)puVar2 == &DAT_71052ab3a8) goto LAB_710003b258;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_710003b258:
  lVar3 = FUN_7100044b00(param_4,"OnOff");
  plVar4 = FUN_710004fc50((long)puVar6,param_2,lVar3,1);
  param_1[9] = (long)plVar4;
  (**(code **)(*plVar4 + 0xe0))();
  lVar3 = FUN_7100044b00(param_4,"Down");
  plVar4 = FUN_710004fc50((long)puVar6,param_2,lVar3,0);
  param_1[10] = (long)plVar4;
  pcVar5 = (char *)FUN_7100044b00(param_4,"Disable");
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    plVar4 = FUN_710004fc50((long)puVar6,param_2,pcVar5,0);
    param_1[0xc] = (long)plVar4;
  }
  plVar4 = (long *)param_3[3];
  lVar3 = FUN_7100044a80(param_4,"Hit");
  lVar3 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar3,1);
  param_1[0xd] = lVar3;
  if (*(long *)(param_3[3] + 0x18) == 0) {
    lVar3 = param_3[6];
  }
  else {
    lVar3 = param_3[3] + 0xb0;
  }
  param_1[0x11] = lVar3;
  return;
}

