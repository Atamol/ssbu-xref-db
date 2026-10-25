// addr:      7101cd5110
// offset:    0x1cd5110
// name:      FUN_7101cd5110
// mangled:   
// signature: undefined __cdecl FUN_7101cd5110(long * * * * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd5110(long ****param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  undefined8 extraout_x1;
  long lVar3;
  undefined4 uVar4;
  
  if (*(int *)((long)param_1 + 0x164) == 0) {
    (*(code *)(*param_1[0x4b])[0xe])(param_1[0x4b],0);
    (*(code *)(*param_1[0x4c])[0xe])(param_1[0x4c],0);
    (*(code *)(*param_1[0x4e])[0xe])(param_1[0x4e],0);
    (*(code *)(*param_1[0x50])[0xe])(param_1[0x50],0);
    *(undefined4 *)(param_1[0x54] + 0x1e) = 0xfffffffe;
    FUN_7103778300(0x3f800000,(long)param_1[0x2f],0x71042921b0);
  }
  FUN_71032d6350((long)(param_1 + 0x53));
  if (0 < *(int *)(param_1[0x54] + 0x17)) {
    iVar2 = *(int *)(param_1[0x54] + 0x1e);
    if (iVar2 == -2) {
      return;
    }
    if (iVar2 == 0) {
      if (0x11 < *(int *)((long)param_1 + 0x15c)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0x15c) + 1;
      *(uint *)((long)param_1 + 0x15c) = uVar1;
      if (0x12 < uVar1) goto LAB_7101cd52cc;
      lVar3 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar4 = 10;
    }
    else {
      if (iVar2 != 1) {
        FUN_71032d6200((long)(param_1 + 0x53),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        return;
      }
      if (0x11 < *(int *)((long)param_1 + 0x15c)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0x15c) + 1;
      *(uint *)((long)param_1 + 0x15c) = uVar1;
      if (0x12 < uVar1) goto LAB_7101cd52cc;
      lVar3 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar4 = 0xb;
    }
LAB_7101cd52b8:
    *(undefined4 *)(lVar3 + 0x110) = uVar4;
    return;
  }
  if (param_1[0x52] != (long ***)0x0) {
    *(undefined1 *)((long)param_1[0x52][1] + 0x4aa) = 1;
  }
  FUN_7103778300(0x3f800000,(long)param_1[0x2f],0x71042b4521);
  FUN_7101cd5a10(param_1);
  uVar1 = *(uint *)((long)param_1 + 0x15c);
  if (*(int *)(param_1 + 0x51) == 0) {
    if (uVar1 < 0x13) {
      *(undefined4 *)((long)param_1 + (long)(int)uVar1 * 4 + 0x110) = 5;
      if (0x11 < *(int *)((long)param_1 + 0x15c)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0x15c) + 1;
      *(uint *)((long)param_1 + 0x15c) = uVar1;
      if (uVar1 < 0x13) {
        lVar3 = (long)param_1 + (long)(int)uVar1 * 4;
        uVar4 = 8;
        goto LAB_7101cd52b8;
      }
    }
  }
  else if (uVar1 < 0x13) {
    lVar3 = (long)param_1 + (long)(int)uVar1 * 4;
    uVar4 = 7;
    goto LAB_7101cd52b8;
  }
LAB_7101cd52cc:
                    /* WARNING: Subroutine does not return */
  abort();
}

