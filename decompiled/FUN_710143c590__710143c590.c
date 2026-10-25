// addr:      710143c590
// offset:    0x143c590
// name:      FUN_710143c590
// mangled:   
// signature: undefined __cdecl FUN_710143c590(long param_1)


void FUN_710143c590(long param_1)

{
  uint uVar1;
  long *plVar2;
  long ****pppplVar3;
  byte ****ppppbVar4;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  code *pcVar5;
  undefined4 uVar6;
  undefined **local_1f0;
  long lStack_1e8;
  long *local_1d0;
  long ***local_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  code *pcStack_1a0;
  code *local_198;
  undefined **local_190;
  long lStack_188;
  undefined ***local_170;
  
  plVar2 = DAT_710593b218;
  local_1d0 = (long *)&local_1f0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    if (*(int *)(param_1 + 0x11c) != 1) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0xf4);
    if (*(long *)(param_1 + 0x150) == 0) {
      if (0x12 < uVar1) goto LAB_710143c6d8;
      uVar6 = 2;
    }
    else {
      if (0x12 < uVar1) {
LAB_710143c6d8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar6 = 7;
    }
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0xa8) = uVar6;
    return;
  }
  local_1f0 = &PTR_FUN_7105067b00;
  local_190 = &PTR_FUN_7105067b00;
  lStack_1e8 = param_1;
  lStack_188 = param_1;
  local_170 = &local_190;
  FUN_710143c6e0((long *)&local_190,(long *)(param_1 + 0x120));
  if (&local_190 == local_170) {
    pcVar5 = (code *)(*local_170)[4];
  }
  else {
    if (local_170 == (undefined ***)0x0) goto LAB_710143c638;
    pcVar5 = (code *)(*local_170)[5];
  }
  (*pcVar5)();
LAB_710143c638:
  ppppbVar4 = (byte ****)(param_1 + 0x11c);
  pcStack_1a0 = FUN_710143c860;
  local_198 = FUN_710143c880;
  pppplVar3 = &local_1b8;
  local_1b8 = (long ***)FUN_710143c820;
  uStack_1b0 = 0;
  local_1a8 = param_1;
  FUN_710143c890(&local_190,0x7104421a91,pppplVar3,(undefined4 *)ppppbVar4);
  FUN_71037222b0(*plVar2,(undefined4 *)&local_190,pppplVar3,ppppbVar4,in_x4,in_x5,in_x6,in_x7);
  if (&local_1f0 == (undefined ***)local_1d0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  else if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x28))();
  }
  return;
}

