// addr:      71000fa1c0
// offset:    0xfa1c0
// name:      FUN_71000fa1c0
// mangled:   
// signature: undefined FUN_71000fa1c0(void)


undefined8 FUN_71000fa1c0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    aiStack_78[0] = 0xc406;
    break;
  case 6:
    aiStack_78[0] = 0xa471;
    break;
  case 7:
    aiStack_78[0] = 0xc420;
    break;
  case 8:
    aiStack_78[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_78,DAT_71052adfc0);
    if ((aiStack_78[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 != 4)) {
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
        puVar11 = (ulong *)(DAT_71052ac580 + 0x30);
        uVar9 = *puVar11;
        plVar10 = (long *)param_1[0x16];
        plVar5 = param_1 + 0x15;
        if (plVar10 != plVar5) {
          uVar12 = param_1[0x3e];
          bVar1 = true;
          do {
            while (iVar3 = FUN_71001508c0(*(long *)(lVar7 + 0xb8),plVar10[2]), iVar3 == 0) {
              bVar2 = FUN_7100150680(*(long *)(lVar7 + 0xb8),plVar10[2]);
              bVar1 = (bool)(bVar1 & (uVar12 < uVar9 || !bVar2));
              plVar10 = (long *)plVar10[1];
              if (plVar10 == plVar5) goto LAB_71000fa458;
            }
            if (iVar3 == 2) {
              uVar8 = 0xc;
              aiStack_78[0] = 0x6c59;
              goto LAB_71000fa528;
            }
            plVar10 = (long *)plVar10[1];
          } while (plVar10 != plVar5);
LAB_71000fa458:
          puVar11 = (ulong *)(DAT_71052ac580 + 0x30);
          uVar9 = *puVar11;
          if (!bVar1) {
            lVar7 = param_1[0x37];
            plVar5 = FUN_71000bb680();
            if ((long)(uVar9 - lVar7) < *plVar5 * 2000) {
              return 5;
            }
            param_1[6] = (long)FUN_71000fa600;
            param_1[7] = 0;
            pcVar6 = "NexMatchJointSessionJob::ResendInvitationAsCompanion";
            goto LAB_71000fa33c;
          }
        }
        *(undefined4 *)(param_1 + 0x13) = 0;
        param_1[0x25] = uVar9;
        switch((int)param_1[0x12]) {
        case 6:
          *(undefined4 *)(param_1 + 0x46) = 7;
          param_1[8] = (long)"NexMatchJointSessionJob::StartCreateMatchmakeSession";
          param_1[6] = (long)FUN_71000fa9e0;
          param_1[7] = 0;
          return 0;
        case 7:
          *(undefined4 *)(param_1 + 0x46) = 7;
          param_1[8] = (long)"NexMatchJointSessionJob::StartJoinMatchmakeSession";
          param_1[6] = (long)FUN_71000fad70;
          param_1[7] = 0;
          return 0;
        case 8:
          *(undefined4 *)(param_1 + 0x46) = 7;
          param_1[8] = (long)"NexMatchJointSessionJob::StartRandomMatchmake";
          param_1[6] = (long)FUN_71000fb100;
          param_1[7] = 0;
          return 0;
        case 9:
        case 10:
          *(undefined4 *)(param_1 + 0x46) = 0xb;
          plVar5 = FUN_71000bb680();
          param_1[0x3c] = *puVar11 + *plVar5 * 30000;
          param_1[8] = (long)"NexMatchJointSessionJob::SendLeaveMeshCompanion";
          param_1[6] = (long)FUN_71000fb490;
          param_1[7] = 0;
          return 0;
        default:
          uVar8 = 0x1f;
          aiStack_78[0] = 0x10c08;
        }
LAB_71000fa528:
        *(undefined1 *)(param_1 + 0x26) = uVar8;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_78 | 4));
        auStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_68);
        FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_78);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71000fa294;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar8 = 6;
    }
    else {
      aiStack_78[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4))
      ;
      auStack_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_68);
      FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_78);
      uVar8 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar8;
LAB_71000fa294:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
  auStack_68[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_68);
  FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_78);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fa33c:
  param_1[8] = (long)pcVar6;
  return 0;
}

