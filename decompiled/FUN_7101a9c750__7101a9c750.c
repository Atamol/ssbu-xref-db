// addr:      7101a9c750
// offset:    0x1a9c750
// name:      FUN_7101a9c750
// mangled:   
// signature: undefined __cdecl FUN_7101a9c750(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a9c750(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  long local_28;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    *(undefined1 *)(param_1 + 0x29a) = 0;
    (**(code **)(**(long **)(param_1 + 0x1f8) + 0x70))(*(long **)(param_1 + 0x1f8),0);
    (**(code **)(**(long **)(param_1 + 0x200) + 0x70))(*(long **)(param_1 + 0x200),1);
                    /* WARNING: Could not recover jumptable at 0x007101a9c8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x200) + 0x60))(*(long **)(param_1 + 0x200),1);
    return;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x1f8) + 0x78))();
  if ((uVar3 & 1) != 0) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1f0) + 0x10),0x7104308012);
    if (0x12 < *(uint *)(param_1 + 0x1d4)) goto LAB_7101a9ca00;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 3;
  }
  lVar5 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x1f0) + 0x600);
  if ((*(char *)(lVar5 + 0x4aa) != '\0') && ((*(byte *)(lVar5 + 0x1ac) >> 1 & 1) != 0)) {
    if (0x12 < *(uint *)(param_1 + 0x1d4)) goto LAB_7101a9ca00;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 6;
  }
  plVar4 = *(long **)(param_1 + 0x200);
  if (*(int *)((long)plVar4 + 0x25c) == 0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,0);
    if (0x11 < *(int *)(param_1 + 0x1d4)) {
      return;
    }
    uVar1 = *(int *)(param_1 + 0x1d4) + 1;
    *(uint *)(param_1 + 0x1d4) = uVar1;
    if (0x12 < uVar1) goto LAB_7101a9ca00;
    lVar5 = param_1 + (long)(int)uVar1 * 4;
    uVar6 = 7;
  }
  else {
    if (*(int *)((long)plVar4 + 0x25c) != 1) {
      return;
    }
    piVar8 = (int *)**(undefined8 **)(*DAT_7105314510 + 0x68);
    iVar2 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_28);
    if (iVar2 == 0) {
      lVar5 = 0;
      iVar2 = 0;
      do {
        plVar4 = (long *)(*(long *)(piVar8 + 2) + 0x10dd8 + lVar5);
        lVar5 = lVar5 + 8;
        uVar7 = (local_28 - *plVar4) * 1000000000;
        uVar3 = ((long)uVar7 >> 0x20) * 0xed75ed55 + ((uVar7 & 0xfffffe00) * 0xed75ed55 >> 0x20);
        if (((long)(uVar7 + ((long)uVar7 >> 0x20) * -0x63a000da + ((long)uVar3 >> 0x20) +
                   ((long)((uVar7 & 0xfffffe00) * -0x63a000da + (uVar3 & 0xffffffff)) >> 0x20)) >>
            0x29) - ((long)uVar7 >> 0x3f) < (long)*piVar8) {
          iVar2 = iVar2 + 1;
        }
      } while (lVar5 != 0xf0);
      if (iVar2 != 0) {
        (**(code **)(**(long **)(param_1 + 0x200) + 0x60))(*(long **)(param_1 + 0x200),0);
        if (0x11 < *(int *)(param_1 + 0x1d4)) {
          return;
        }
        uVar1 = *(int *)(param_1 + 0x1d4) + 1;
        *(uint *)(param_1 + 0x1d4) = uVar1;
        if (0x12 < uVar1) goto LAB_7101a9ca00;
        lVar5 = param_1 + (long)(int)uVar1 * 4;
        uVar6 = 0xb;
        goto LAB_7101a9c9ec;
      }
    }
    iVar2 = FUN_7101685520(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80),0xcc,param_3,param_4,
                           param_5,param_6,param_7,param_8);
    if (iVar2 == 0) {
      (**(code **)(**(long **)(param_1 + 0x200) + 0x60))(*(long **)(param_1 + 0x200),0);
      if (0x12 < *(uint *)(param_1 + 0x1d4)) goto LAB_7101a9ca00;
      lVar5 = param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4;
      uVar6 = 0xe;
    }
    else {
      if (iVar2 != 0x40000001) {
        return;
      }
      (**(code **)(**(long **)(param_1 + 0x200) + 0x60))(*(long **)(param_1 + 0x200),0);
      if (0x12 < *(uint *)(param_1 + 0x1d4)) {
LAB_7101a9ca00:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4;
      uVar6 = 10;
    }
  }
LAB_7101a9c9ec:
  *(undefined4 *)(lVar5 + 0x188) = uVar6;
  return;
}

