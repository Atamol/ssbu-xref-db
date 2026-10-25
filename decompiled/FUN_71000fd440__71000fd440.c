// addr:      71000fd440
// offset:    0xfd440
// name:      FUN_71000fd440
// mangled:   
// signature: undefined FUN_71000fd440(void)


ulong FUN_71000fd440(long param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  int aiStack_70 [4];
  undefined4 auStack_58 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_70[0] = 0xc406;
    break;
  case 6:
    aiStack_70[0] = 0xa471;
    break;
  case 7:
    aiStack_70[0] = 0xc420;
    break;
  case 8:
    aiStack_70[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_70,DAT_71052adfc0);
    if ((aiStack_70[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        uVar6 = 0x3e80000;
        if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x1e0)) {
          lVar9 = *(long *)(param_1 + 0xb0);
          if (lVar9 != param_1 + 0xa8) {
            pcVar8 = FUN_71000fd6b0;
            uVar10 = 5;
            pcVar7 = "NexMatchJointSessionJob::StartLeavePreviousMesh";
            do {
              iVar4 = FUN_71001508c0(*(long *)(lVar1 + 0xb8),*(long *)(lVar9 + 0x10));
              if ((iVar4 == 0) &&
                 (bVar3 = FUN_7100150680(*(long *)(lVar1 + 0xb8),*(long *)(lVar9 + 0x10)), bVar3)) {
                uVar6 = 0;
                goto LAB_71000fd5c0;
              }
              lVar9 = *(long *)(lVar9 + 8);
              uVar2 = 4;
            } while (lVar9 != param_1 + 0xa8);
            goto LAB_71000fd5b8;
          }
        }
        pcVar8 = FUN_71000fd6b0;
        pcVar7 = "NexMatchJointSessionJob::StartLeavePreviousMesh";
        uVar2 = 4;
        goto LAB_71000fd5b8;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar5 = 6;
    }
    else {
      aiStack_70[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4))
      ;
      auStack_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_58);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_70);
      uVar5 = 4;
    }
    uVar6 = 0;
    *(undefined1 *)(param_1 + 0x130) = uVar5;
    pcVar8 = FUN_71000f7210;
    pcVar7 = "NexMatchJointSessionJob::StartLeaveMesh";
    uVar2 = 5;
    goto LAB_71000fd5b8;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  auStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_58);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_70);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar8 = FUN_71000f70d0;
  uVar6 = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
  uVar2 = 0;
LAB_71000fd5b8:
  uVar10 = uVar2;
  *(code **)(param_1 + 0x30) = pcVar8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
LAB_71000fd5c0:
  return uVar6 | uVar10;
}

