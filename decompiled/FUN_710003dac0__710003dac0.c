// addr:      710003dac0
// offset:    0x3dac0
// name:      FUN_710003dac0
// mangled:   
// signature: undefined __cdecl FUN_710003dac0(long param_1, undefined8 param_2, long param_3, long param_4)


void FUN_710003dac0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_7100044b00(param_4,"Touch");
  plVar2 = FUN_710004af10(param_3,param_2,lVar1,1);
  *(long **)(param_1 + 0x50) = plVar2;
  (**(code **)(*plVar2 + 0xe0))();
  lVar1 = FUN_7100044b00(param_4,"Release");
  plVar2 = FUN_710004af10(param_3,param_2,lVar1,0);
  *(long **)(param_1 + 0x58) = plVar2;
  pcVar3 = (char *)FUN_7100044b00(param_4,"Disable");
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    plVar2 = FUN_710004af10(param_3,param_2,pcVar3,1);
    *(long **)(param_1 + 0x60) = plVar2;
  }
  plVar2 = *(long **)(param_3 + 0x18);
  lVar1 = FUN_7100044a80(param_4,"Hit");
  uVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,lVar1,1);
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) == 0) {
    lVar1 = *(long *)(param_3 + 0x30);
  }
  else {
    lVar1 = *(long *)(param_3 + 0x18) + 0xb0;
  }
  *(long *)(param_1 + 0x88) = lVar1;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_3 + 0x18);
  return;
}

