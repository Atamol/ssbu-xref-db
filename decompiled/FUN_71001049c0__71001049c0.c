// addr:      71001049c0
// offset:    0x1049c0
// name:      FUN_71001049c0
// mangled:   
// signature: undefined __cdecl FUN_71001049c0(long param_1, long param_2)


void FUN_71001049c0(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  uint uVar7;
  
  if (*(int *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 4 + 0x180) == 0
     ) {
    plVar6 = *(long **)(DAT_71052adb38 + 8);
    if ((plVar6 != (long *)0x0) && (iVar1 = FUN_71000ee2c0((long)plVar6), iVar1 != 0)) {
      uVar7 = 0;
      do {
        iVar1 = FUN_71000ee290((long)plVar6,uVar7);
        if (iVar1 != 0) {
          uVar3 = FUN_71000c36b0(DAT_71052acd90);
          uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,iVar1,uVar3);
          if ((uVar4 & 1) == 0) {
            FUN_71000ee050((long)plVar6,iVar1);
          }
          else if (iVar1 != *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 +
                                    0x180)) {
            FUN_7100149290(DAT_71052adb38,iVar1);
            goto LAB_7100104a00;
          }
        }
        uVar7 = uVar7 + 1;
        uVar2 = FUN_71000ee2c0((long)plVar6);
      } while (uVar7 < uVar2);
    }
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x40) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  else {
LAB_7100104a00:
    *(code **)(param_1 + 0x30) = FUN_7100141b50;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LeaveSessionJob::LeaveBufferMatchmakeSession";
  }
  return;
}

