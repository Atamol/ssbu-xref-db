// addr:      7101990790
// offset:    0x1990790
// name:      FUN_7101990790
// mangled:   
// signature: undefined __cdecl FUN_7101990790(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101990790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)((long)param_1 + 0x134) == 0) {
    if (*(char *)((long)param_1 + 0x184) != '\0') {
      FUN_710377aee0(0x3f800000,(long)(param_1 + 0x31));
      *(undefined1 *)((long)param_1 + 0x184) = 0;
    }
    FUN_7103778300(0x3f800000,param_1[2],0x71043bdf6b);
    FUN_7103778300(0x3f800000,param_1[2],0x710424f74c);
    uVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x30);
      uVar2 = (long)iVar1 + 1;
      *(int *)(param_1 + 0x30) = (int)uVar2;
      if (iVar1 < -1) {
        lVar3 = param_1[0x2d];
        uVar4 = param_1[0x2e] - lVar3 >> 3;
LAB_7101990888:
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      else {
        lVar3 = param_1[0x2d];
        uVar4 = param_1[0x2e] - lVar3 >> 3;
        if (uVar4 <= uVar2) goto LAB_7101990888;
      }
      if (uVar4 <= (ulong)(long)(int)uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar4 = (ulong)uVar5;
      FUN_7101990940((long)param_1,*(ulong *)(lVar3 + (long)(int)uVar2 * 8),uVar4,param_4,param_5,
                     param_6,param_7,param_8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xd);
    FUN_7103776640(&local_40,(long)(param_1 + 1),(byte ****)"set_bg_00",uVar4,param_4,param_5,
                   param_6,param_7,param_8);
    uVar2 = local_38;
    FUN_7103778300(0x3f800000,local_38,0x710434a3dd);
    local_40 = &PTR_FUN_710523d988;
    local_38 = 0;
    if (uVar2 != 0) {
      uVar4 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar2);
    }
  }
  else if ((*(long **)(param_1[0x32] + 8) == (long *)0x0) ||
          (uVar2 = (**(code **)(**(long **)(param_1[0x32] + 8) + 0x138))(), (uVar2 & 1) != 0)) {
    *(undefined1 *)(*(long *)(**(long **)*param_1 + 0x600) + 0x4aa) = 1;
    if (0x12 < *(uint *)((long)param_1 + 300)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 300) * 4 + 0xe0) = 2;
  }
  return;
}

