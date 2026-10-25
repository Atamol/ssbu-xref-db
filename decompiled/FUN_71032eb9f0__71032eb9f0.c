// addr:      71032eb9f0
// offset:    0x32eb9f0
// name:      FUN_71032eb9f0
// mangled:   
// signature: undefined __cdecl FUN_71032eb9f0(long param_1, ulong param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032eb9f0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **local_30;
  long *local_28;
  
  if ((((param_1 != 0) && (lVar4 = *(long *)(param_1 + 0x80), *(char *)(lVar4 + 0x1f2) != '\0')) &&
      ((**(long **)(lVar4 + 0x148) == 0 || ((*(long **)(lVar4 + 0x148))[1] == 0)))) &&
     ((*(uint *)(lVar4 + 0xe8) | 1) == 3)) {
    if ((param_2 & 1) == 0) {
      if (*(int *)(lVar4 + 0x1fc) == 1) {
        return;
      }
      lVar5 = **(long **)(lVar4 + 0x130);
      FUN_7103776910(&local_30,lVar5 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar1 = local_28;
      lVar3 = *local_28;
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
      }
      local_30 = &PTR_FUN_710523d9a8;
      local_28 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x71042a3672);
      uVar2 = 1;
    }
    else {
      if (*(int *)(lVar4 + 0x1fc) == 2) {
        return;
      }
      lVar5 = **(long **)(lVar4 + 0x130);
      FUN_7103776910(&local_30,lVar5 + 8,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      plVar1 = local_28;
      lVar3 = *local_28;
      if (lVar3 != 0) {
        *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
      }
      local_30 = &PTR_FUN_710523d9a8;
      local_28 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x71042917af);
      uVar2 = 2;
    }
    *(undefined4 *)(lVar4 + 0x1fc) = uVar2;
  }
  return;
}

