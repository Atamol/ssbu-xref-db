// addr:      7100102420
// offset:    0x102420
// name:      FUN_7100102420
// mangled:   
// signature: undefined FUN_7100102420(void)


undefined8 FUN_7100102420(long *param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 uVar8;
  long *plVar9;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar5) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar5 = FUN_7100146ba0(DAT_71052adb38), lVar3 = DAT_71052adb38, iVar5 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        piVar6 = (int *)param_1[0xb];
        if ((piVar6 != (int *)0x0) && ((char)piVar6[10] != '\0')) {
          if (2 < *piVar6 - 2U) {
            FUN_71000b4260(piVar6);
          }
          param_1[0xb] = 0;
          FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                   (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
          FUN_7100140910(param_1);
          return 1;
        }
        if ((ulong)param_1[0x3e] < *(ulong *)(DAT_71052ac580 + 0x30)) {
          *(undefined1 *)(param_1 + 0x26) = 0x38;
          aiStack_50[0] = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
          FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_50);
          FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                   (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
          goto LAB_71001024ec;
        }
        plVar9 = (long *)param_1[0x16];
        plVar1 = param_1 + 0x15;
        if (plVar9 != plVar1) {
          bVar2 = true;
          do {
            while (iVar5 = FUN_71001508c0(*(long *)(lVar3 + 0xb8),plVar9[2]), iVar5 != 0) {
              plVar9 = (long *)plVar9[1];
              if (plVar9 == plVar1) goto LAB_7100102700;
            }
            bVar4 = FUN_7100150680(*(long *)(lVar3 + 0xb8),plVar9[2]);
            bVar2 = (bool)(bVar2 & !bVar4);
            plVar9 = (long *)plVar9[1];
          } while (plVar9 != plVar1);
LAB_7100102700:
          if (!bVar2) {
            return 5;
          }
        }
        *(undefined1 *)((long)param_1 + 0xf9) = 1;
        pcVar7 = "NexMatchJointSessionJob::WaitHostStationId";
        param_1[6] = (long)FUN_7100101210;
        param_1[7] = 0;
        goto LAB_7100102594;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar8 = 6;
    }
    else {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_50);
      uVar8 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar8;
LAB_71001024ec:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100102594:
  param_1[8] = (long)pcVar7;
  return 0;
}

