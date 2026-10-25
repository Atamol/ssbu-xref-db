// addr:      710003b0c0
// offset:    0x3b0c0
// name:      FUN_710003b0c0
// mangled:   
// signature: undefined __cdecl FUN_710003b0c0(long * param_1, undefined8 param_2, long param_3, long param_4)


void FUN_710003b0c0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  
  (**(code **)(*param_1 + 0x108))(param_1,param_3);
  lVar1 = FUN_7100044b00(param_4,"OnOff");
  plVar2 = FUN_710004af10(param_3,param_2,lVar1,1);
  param_1[9] = (long)plVar2;
  (**(code **)(*plVar2 + 0xe0))();
  lVar1 = FUN_7100044b00(param_4,"Down");
  plVar2 = FUN_710004af10(param_3,param_2,lVar1,0);
  param_1[10] = (long)plVar2;
  pcVar3 = (char *)FUN_7100044b00(param_4,"Disable");
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    plVar2 = FUN_710004af10(param_3,param_2,pcVar3,0);
    param_1[0xc] = (long)plVar2;
  }
  plVar2 = *(long **)(param_3 + 0x18);
  lVar1 = FUN_7100044a80(param_4,"Hit");
  lVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,lVar1,1);
  param_1[0xd] = lVar1;
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) == 0) {
    lVar1 = *(long *)(param_3 + 0x30);
  }
  else {
    lVar1 = *(long *)(param_3 + 0x18) + 0xb0;
  }
  param_1[0x11] = lVar1;
  return;
}

