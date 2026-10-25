// addr:      7101e66160
// offset:    0x1e66160
// name:      FUN_7101e66160
// mangled:   
// signature: undefined __cdecl FUN_7101e66160(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e66160(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  long *plVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  long ****pppplVar5;
  undefined **local_48;
  undefined **local_40;
  long ***local_38;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x1d4) != 0) {
    if (((*(long *)(param_1 + 0x220) != 0) &&
        (plVar2 = *(long **)(*(long *)(*(long *)(param_1 + 0x220) + 8) + 8), plVar2 != (long *)0x0))
       && (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) == 0)) {
      return;
    }
    if (*(int *)(param_1 + 0x1cc) < 1) {
      return;
    }
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
    return;
  }
  if (*(char *)(param_1 + 0x228) != '\0') {
    return;
  }
  FUN_71037780e0(&local_48,param_1 + 0x208,(long ****)"menu_in",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pppuVar4 = (undefined ***)
             FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppuVar4 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_38 = (long ***)&DAT_00000010;
      pppplVar5 = &local_38;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar3 & 1) != 0) &&
         (pppuVar4 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         pppuVar4 != (undefined ***)0x0)) goto LAB_7101e6622c;
    }
    pppuVar4 = (undefined ***)0x0;
  }
LAB_7101e6622c:
  ppuVar1 = local_40;
  *pppuVar4 = &PTR_FUN_710523d9e8;
  pppuVar4[1] = (undefined **)0x0;
  if (&local_48 != pppuVar4) {
    local_40 = (undefined **)0x0;
    pppuVar4[1] = ppuVar1;
  }
  plVar2 = *(long **)(param_1 + 0x220);
  *(undefined ****)(param_1 + 0x220) = pppuVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  ppuVar1 = local_40;
  local_48 = &PTR_FUN_710523d9e8;
  local_40 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar1);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x220));
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}

