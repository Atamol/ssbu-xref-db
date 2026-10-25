// addr:      71000fcc60
// offset:    0xfcc60
// name:      FUN_71000fcc60
// mangled:   
// signature: undefined FUN_71000fcc60(void)


undefined8 FUN_71000fcc60(long *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  ushort uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long alStack_168 [31];
  undefined4 auStack_70 [4];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_168[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_168[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_168[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_168[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_168,DAT_71052adfc0);
    if (((int)alStack_168[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 == 4)) {
      alStack_168[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_168 | 4));
      auStack_70[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_168 | 4),(Result *)auStack_70);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_168);
      uVar8 = 4;
LAB_71000fcd30:
      *(undefined1 *)(param_1 + 0x26) = uVar8;
      param_1[6] = (long)FUN_71000f7210;
      param_1[7] = 0;
      param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)((long)param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar8 = 6;
      goto LAB_71000fcd30;
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
    if (((*(char *)((long)param_1 + 0xf4) != '\0') && (*(char *)((long)param_1 + 0x234) != '\0')) &&
       (param_1[0x47] != *(long *)(DAT_71052adb38 + 0xf0))) {
      *(undefined1 *)((long)param_1 + 0x234) = 0;
      *(undefined1 *)((long)param_1 + 0xf4) = 0;
      param_1[0x14] = param_1[0x47];
      param_1[8] = (long)"NexMatchJointSessionJob::SendPreparedForMigrateSession";
      param_1[6] = (long)FUN_71000fc7d0;
      param_1[7] = 0;
      return 0;
    }
    plVar13 = (long *)param_1[0x16];
    uVar12 = param_1[0x3e];
    uVar11 = *(ulong *)(DAT_71052ac580 + 0x30);
    lVar5 = *(long *)(DAT_71052adb38 + 0xb8);
    if (plVar13 == param_1 + 0x15) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        bVar1 = FUN_7100150680(lVar5,plVar13[2]);
        if ((bVar1) && (iVar3 = FUN_7100150550(*(long *)(lVar7 + 0xb8),plVar13[2]), iVar3 != 1)) {
          uVar9 = (ulong)uVar10;
          uVar10 = uVar10 + 1;
          alStack_168[uVar9] = plVar13[2];
        }
        plVar13 = (long *)plVar13[1];
        lVar5 = *(long *)(lVar7 + 0xb8);
      } while (plVar13 != param_1 + 0x15);
    }
    bVar2 = FUN_7100150480(lVar5,(long)alStack_168,uVar10);
    if ((uVar12 < uVar11) || (bVar2 != 1)) {
      param_1[8] = (long)"NexMatchJointSessionJob::SendLeaveMeshCompanion";
      param_1[6] = (long)FUN_71000fb490;
      param_1[7] = 0;
      lVar7 = DAT_71052ac580;
      plVar13 = FUN_71000bb680();
      param_1[0x3c] = *(long *)(lVar7 + 0x30) + *plVar13 * 30000;
      *(undefined4 *)(param_1 + 0x46) = 0xb;
      return 0;
    }
    lVar7 = *(long *)(DAT_71052ac580 + 0x30);
    lVar5 = param_1[0x38];
    plVar13 = FUN_71000bb680();
    if (lVar7 - lVar5 < *plVar13 * 2000) {
      return 5;
    }
    param_1[6] = (long)FUN_71000fcff0;
    param_1[7] = 0;
    pcVar6 = "NexMatchJointSessionJob::ResendNextSessionId";
    goto LAB_71000fcddc;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_168 | 4));
  auStack_70[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_168 | 4),(Result *)auStack_70);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_168);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fcddc:
  param_1[8] = (long)pcVar6;
  return 0;
}

