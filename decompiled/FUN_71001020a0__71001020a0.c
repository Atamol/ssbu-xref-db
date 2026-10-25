// addr:      71001020a0
// offset:    0x1020a0
// name:      FUN_71001020a0
// mangled:   
// signature: undefined FUN_71001020a0(void)


undefined8 FUN_71001020a0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  ulong uVar8;
  code *pcVar9;
  ushort uVar10;
  long *plVar11;
  int aiStack_170 [4];
  int aiStack_160 [4];
  long alStack_150 [31];
  undefined4 auStack_58 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_150[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_150[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_150[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_150[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_150,DAT_71052adfc0);
    if (((int)alStack_150[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 == 4)) {
      alStack_150[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_150 | 4));
      aiStack_160[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)aiStack_160);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_150);
      uVar7 = 4;
LAB_710010216c:
      *(undefined1 *)(param_1 + 0x26) = uVar7;
      param_1[6] = (long)FUN_71000f7210;
      param_1[7] = 0;
      param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)((long)param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar7 = 6;
      goto LAB_710010216c;
    }
    piVar4 = (int *)param_1[0xb];
    if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
      if (2 < *piVar4 - 2U) {
        FUN_71000b4260(piVar4);
      }
      param_1[0xb] = 0;
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      FUN_7100140910(param_1);
      return 1;
    }
    plVar11 = (long *)param_1[0x16];
    if (plVar11 == param_1 + 0x15) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),plVar11[2]);
        if (bVar2) {
          uVar8 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
          alStack_150[uVar8] = plVar11[2];
        }
        plVar11 = (long *)plVar11[1];
      } while (plVar11 != param_1 + 0x15);
    }
    FUN_710014e1f0(aiStack_160,*(long *)(lVar1 + 200),(char)(int)param_1[0x12],(long)alStack_150,
                   uVar10,*(long *)(lVar1 + 0xf0),0,0);
    if (aiStack_160[0] == 0) {
LAB_71001023ac:
      *(undefined4 *)(param_1 + 0x13) = 0x15;
      FUN_7100150900(*(long *)(lVar1 + 0xb8));
      FUN_7100150870(*(long *)(lVar1 + 0xb8),*(long *)(lVar1 + 0xf0),1);
      *(undefined4 *)(param_1 + 0x46) = 0x15;
      lVar1 = DAT_71052ac580;
      plVar11 = FUN_71000bb680();
      uVar5 = 0;
      pcVar6 = "NexMatchJointSessionJob::WaitForAnswerToCompletionInvitation";
      param_1[0x3e] = *(long *)(lVar1 + 0x30) + *plVar11 * 15000;
      pcVar9 = FUN_7100102420;
    }
    else {
      aiStack_170[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)aiStack_170 | 4));
      auStack_58[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_170 | 4),(Result *)auStack_58);
      if (aiStack_160[0] != aiStack_170[0]) goto LAB_71001023ac;
      *(undefined1 *)(param_1 + 0x26) = 3;
      FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_160);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar9 = FUN_71000f7210;
      uVar5 = 5;
      pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    param_1[6] = (long)pcVar9;
    param_1[7] = 0;
    goto LAB_7100102218;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_150 | 4));
  aiStack_160[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)aiStack_160);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_150);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar5 = 0;
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100102218:
  param_1[8] = (long)pcVar6;
  return uVar5;
}

