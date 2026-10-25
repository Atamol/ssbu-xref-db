// addr:      7101af9670
// offset:    0x1af9670
// name:      FUN_7101af9670
// mangled:   
// signature: undefined __cdecl FUN_7101af9670(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af9670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined **local_30;
  long *local_28;
  
  if ((*(int *)(param_1 + 0xec) == 0) &&
     (((**(long **)(param_1 + 0x158) == 0 || ((*(long **)(param_1 + 0x158))[1] == 0)) &&
      (*(int *)(param_1 + 0x1fc) != 1)))) {
    lVar4 = **(long **)(param_1 + 0x130);
    FUN_7103776910(&local_30,lVar4 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar2 = local_28;
    lVar1 = *local_28;
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
    }
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71042a3672);
    *(undefined4 *)(param_1 + 0x1fc) = 1;
  }
  lVar1 = *(long *)(*(long *)(**(long **)(param_1 + 0x128) + 0x10) + 8);
  if (((lVar1 == 0) || (plVar2 = (long *)FUN_71037964b0(lVar1,0x7104421055), plVar2 == (long *)0x0))
     || (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
    if (*(int *)(param_1 + 0x1fc) != 1) {
      lVar4 = **(long **)(param_1 + 0x130);
      FUN_7103776910(&local_30,lVar4 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar2 = local_28;
      lVar1 = *local_28;
      if (lVar1 != 0) {
        *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
      }
      local_30 = &PTR_FUN_710523d9a8;
      local_28 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar2);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71042a3672);
      *(undefined4 *)(param_1 + 0x1fc) = 1;
    }
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x128),*(byte *)(param_1 + 0x1f1));
    if (0 < *(int *)(param_1 + 0xe4)) {
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
    }
  }
  return;
}

