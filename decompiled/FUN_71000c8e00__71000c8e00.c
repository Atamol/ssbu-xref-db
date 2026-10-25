// addr:      71000c8e00
// offset:    0xc8e00
// name:      FUN_71000c8e00
// mangled:   
// signature: undefined FUN_71000c8e00(void)


undefined8 FUN_71000c8e00(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  ulong uStack_28;
  
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    *(code **)(param_1 + 0x30) = FUN_71000c8da0;
    pcVar5 = "NatDetectionJob::StepEnd";
    goto LAB_71000c8fe0;
  }
  uStack_28 = 0;
  FUN_71000bb5d0(&uStack_28);
  if (*(ulong *)(param_1 + 0x70) < uStack_28) {
    pcVar4 = *(code **)(**(long **)(param_1 + 0x68) + 0x40);
LAB_71000c8e64:
    uVar2 = (*pcVar4)();
    pcVar5 = "NatDetectionJob::StepRetry";
    pcVar4 = FUN_71000c90a0;
    if ((uVar2 & 1) == 0) {
      pcVar5 = "NatDetectionJob::StepEnd";
      pcVar4 = FUN_71000c8da0;
    }
    *(code **)(param_1 + 0x30) = pcVar4;
    goto LAB_71000c8fe0;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    *(undefined1 *)(param_1 + 0x80) = 1;
    FUN_71000bb5d0((undefined8 *)(param_1 + 0x88));
    uVar2 = FUN_71000c8490(*(long *)(param_1 + 0x68));
    if ((uVar2 & 1) != 0) goto LAB_71000c8eb0;
LAB_71000c8f3c:
    plVar3 = FUN_71000bb680();
    lVar6 = *plVar3;
    lVar7 = 0x14;
  }
  else {
    uVar2 = FUN_71000c8490(*(long *)(param_1 + 0x68));
    if ((uVar2 & 1) == 0) goto LAB_71000c8f3c;
LAB_71000c8eb0:
    uVar2 = FUN_71000c85f0(*(long *)(param_1 + 0x68));
    if ((uVar2 & 1) != 0) {
      if (*(char *)(param_1 + 0x81) == '\0') {
        lVar6 = *(long *)(param_1 + 0x68);
        *(undefined1 *)(param_1 + 0x81) = 1;
        uStack_28 = 0;
        FUN_71000bb5d0(&uStack_28);
        lVar7 = uStack_28 - *(long *)(param_1 + 0x88);
        plVar3 = FUN_71000bb680();
        uVar1 = 0;
        if (*plVar3 != 0) {
          uVar1 = (undefined4)(lVar7 / *plVar3);
        }
        *(undefined4 *)(lVar6 + 0x5fc) = uVar1;
      }
      uVar2 = (**(code **)(**(long **)(param_1 + 0x68) + 0x28))();
      if ((uVar2 & 1) != 0) {
        pcVar4 = *(code **)(**(long **)(param_1 + 0x68) + 0x40);
        goto LAB_71000c8e64;
      }
      uVar2 = (**(code **)(**(long **)(param_1 + 0x68) + 0x30))();
      if ((uVar2 & 1) != 0) {
        uStack_28 = 0;
        FUN_71000bb5d0(&uStack_28);
        lVar7 = *(long *)(param_1 + 0x70) - uStack_28;
        plVar3 = FUN_71000bb680();
        lVar6 = 0;
        if (*plVar3 != 0) {
          lVar6 = lVar7 / *plVar3;
        }
        if (1000 < lVar6) {
          plVar3 = FUN_71000bb680();
          lVar6 = *plVar3;
          uStack_28 = 0;
          FUN_71000bb5d0(&uStack_28);
          *(ulong *)(param_1 + 0x70) = uStack_28 + lVar6 * 1000;
        }
      }
    }
    plVar3 = FUN_71000bb680();
    lVar6 = *plVar3;
    lVar7 = 100;
  }
  uStack_28 = 0;
  FUN_71000bb5d0(&uStack_28);
  *(code **)(param_1 + 0x30) = FUN_71000c9000;
  pcVar5 = "NatDetectionJob::StepWait";
  *(ulong *)(param_1 + 0x78) = uStack_28 + lVar6 * lVar7;
LAB_71000c8fe0:
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

