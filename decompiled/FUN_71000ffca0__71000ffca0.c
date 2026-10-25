// addr:      71000ffca0
// offset:    0xffca0
// name:      FUN_71000ffca0
// mangled:   
// signature: undefined FUN_71000ffca0(void)


undefined8 FUN_71000ffca0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  ushort uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  long lVar13;
  int aiStack_160 [4];
  undefined8 uStack_150;
  undefined4 auStack_58 [2];
  
  piVar7 = aiStack_160;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    uStack_150._0_4_ = 0xc406;
    break;
  case 6:
    uStack_150._0_4_ = 0xa471;
    break;
  case 7:
    uStack_150._0_4_ = 0xc420;
    break;
  case 8:
    uStack_150._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)&uStack_150,DAT_71052adfc0);
    if (((int)uStack_150 == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar11 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
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
        if (*(uint *)(param_1 + 0x17) < 2) {
          param_1[6] = (long)FUN_7100101210;
          param_1[7] = 0;
          pcVar9 = "NexMatchJointSessionJob::WaitHostStationId";
          goto LAB_71000ffe18;
        }
        lVar10 = *(long *)(DAT_71052ac580 + 0x30);
        lVar13 = param_1[0x39];
        plVar5 = FUN_71000bb680();
        if (lVar10 - lVar13 < *plVar5 * 40000) {
          lVar10 = *(long *)(lVar11 + 8);
          bVar1 = FUN_71000edff0(lVar10,*(int *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 4 +
                                                0x180));
          if (!bVar1) {
LAB_71000fffac:
            uVar12 = 0x18;
            goto LAB_71000fffb0;
          }
          bVar1 = FUN_7100140e30((long)param_1);
          bVar2 = FUN_71000edff0(lVar10,*(int *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 4 +
                                                0x180));
          if (bVar1) {
            if (!bVar2) goto LAB_71000fffac;
            bVar2 = FUN_71000edff0(lVar10,*(int *)(lVar11 + (ulong)(*(char *)(lVar11 + 0x162) ==
                                                                   '\0') * 4 + 0x180));
          }
          if (bVar2 == false) goto LAB_71000fffac;
          uVar6 = (**(code **)(**(long **)(lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 8 + 0x168) +
                              0xe0))();
          if (((uVar6 & 1) == 0) && (*(long *)(lVar11 + 0xf0) == *(long *)(lVar11 + 0xf8)))
          goto LAB_71000fffbc;
          plVar5 = (long *)param_1[0x16];
          if (plVar5 == param_1 + 0x15) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              uVar6 = (ulong)uVar8;
              uVar8 = uVar8 + 1;
              (&uStack_150)[uVar6] = plVar5[2];
              plVar5 = (long *)plVar5[1];
            } while (plVar5 != param_1 + 0x15);
          }
          uVar6 = FUN_7100150600(*(long *)(lVar11 + 0xb8),(long)&uStack_150,uVar8);
          if (((uVar6 & 1) == 0) ||
             (lVar10 = FUN_71001939c0(DAT_71052adfc0), *(char *)(lVar10 + 0x84) != '\0')) {
            return 5;
          }
          lVar10 = FUN_7100193a50(DAT_71052adfc0);
          lVar13 = (**(code **)(**(long **)(lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 8 + 0x168) +
                               0xf0))();
          FUN_71001ae940(aiStack_160,lVar10,&uStack_150,lVar13);
          if (aiStack_160[0] == 0) {
            uVar6 = (**(code **)(**(long **)(lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 8 + 0x168)
                                + 0xe0))();
            if ((uVar6 & 1) != 0) {
              *(undefined4 *)(param_1 + 0x13) = 0x13;
              lVar11 = *(long *)(DAT_71052ac580 + 0x30);
              *(undefined1 *)((long)param_1 + 0xf9) = 0;
              param_1[0x39] = lVar11;
              param_1[8] = (long)"NexMatchJointSessionJob::WaitUntilCompanionCompletion";
              param_1[6] = (long)FUN_7100101a30;
              param_1[7] = 0;
              return 0;
            }
            param_1[0x14] = CONCAT44(uStack_150._4_4_,(int)uStack_150);
            lVar11 = DAT_71052ac580;
            plVar5 = FUN_71000bb680();
            lVar10 = *(long *)(lVar11 + 0x30);
            lVar11 = *plVar5;
            *(undefined1 *)(param_1 + 0x1f) = 0;
            param_1[8] = (long)"NexMatchJointSessionJob::SendCompletionForMigrateSession";
            param_1[6] = (long)FUN_7100101bd0;
            param_1[7] = 0;
            param_1[0x40] = lVar10 + lVar11 * 10000;
            *(undefined4 *)(param_1 + 0x46) = 0x12;
            return 0;
          }
          *(undefined1 *)(param_1 + 0x26) = 0x15;
          aiStack_160[0] = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_160 | 4));
          auStack_58[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_160 | 4),(Result *)auStack_58);
        }
        else {
          uVar12 = 0x23;
LAB_71000fffb0:
          *(undefined1 *)(param_1 + 0x26) = uVar12;
LAB_71000fffbc:
          uStack_150._0_4_ = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&uStack_150 | 4));
          aiStack_160[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)&uStack_150 | 4),(Result *)aiStack_160);
          piVar7 = (int *)&uStack_150;
        }
        FUN_71000bcf30((int *)(param_1 + 0x44),piVar7);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71000ffd70;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar12 = 6;
    }
    else {
      uStack_150._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)&uStack_150 | 4));
      aiStack_160[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&uStack_150 | 4),(Result *)aiStack_160);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)&uStack_150);
      uVar12 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar12;
LAB_71000ffd70:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_150 | 4));
  aiStack_160[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&uStack_150 | 4),(Result *)aiStack_160);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)&uStack_150);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar9 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000ffe18:
  param_1[8] = (long)pcVar9;
  return 0;
}

