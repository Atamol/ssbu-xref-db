// addr:      71000f8ed0
// offset:    0xf8ed0
// name:      FUN_71000f8ed0
// mangled:   
// signature: undefined8 __cdecl FUN_71000f8ed0(long * param_1)


undefined8 FUN_71000f8ed0(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  int local_78 [4];
  undefined4 local_68 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    local_78[0] = 0xc406;
    break;
  case 6:
    local_78[0] = 0xa471;
    break;
  case 7:
    local_78[0] = 0xc420;
    break;
  case 8:
    local_78[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(local_78,DAT_71052adfc0);
    if ((local_78[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar3 == 4)) {
      local_78[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
      local_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
      FUN_71000bcf30((int *)(param_1 + 0x44),local_78);
      uVar8 = 4;
LAB_71000f8fa0:
      *(undefined1 *)(param_1 + 0x26) = uVar8;
LAB_71000f8fa4:
      param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
      param_1[6] = (long)FUN_71000f7210;
      param_1[7] = 0;
      return 5;
    }
    if (*(char *)((long)param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar8 = 6;
      goto LAB_71000f8fa0;
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
    plVar10 = (long *)param_1[0x16];
    plVar5 = param_1 + 0x15;
    if (plVar10 != plVar5) {
      uVar11 = *(ulong *)(DAT_71052ac580 + 0x30);
      uVar12 = param_1[0x3e];
      bVar1 = true;
      do {
        while (iVar3 = FUN_71001508c0(*(long *)(lVar7 + 0xb8),plVar10[2]), iVar3 != 0) {
          if (iVar3 == 2) {
            *(undefined1 *)(param_1 + 0x26) = 0xb;
            local_78[0] = 0x6c59;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_78 | 4));
            local_68[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
            FUN_71000bcf30((int *)(param_1 + 0x44),local_78);
            FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
            goto LAB_71000f8fa4;
          }
          plVar10 = (long *)plVar10[1];
          if (plVar10 == plVar5) goto LAB_71000f9168;
        }
        bVar2 = FUN_7100150680(*(long *)(lVar7 + 0xb8),plVar10[2]);
        bVar1 = (bool)(bVar1 & (uVar12 < uVar11 || !bVar2));
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != plVar5);
LAB_71000f9168:
      if (!bVar1) {
        lVar7 = *(long *)(DAT_71052ac580 + 0x30);
        lVar9 = param_1[0x37];
        plVar5 = FUN_71000bb680();
        if (lVar7 - lVar9 < *plVar5 * 2000) {
          return 5;
        }
        param_1[6] = (long)FUN_71000f9270;
        param_1[7] = 0;
        pcVar6 = "NexMatchJointSessionJob::ResendDestroyInvitation";
        goto LAB_71000f904c;
      }
    }
    FUN_71000f9670((long)param_1);
    *(undefined4 *)(param_1 + 0x46) = 5;
    lVar7 = DAT_71052ac580;
    plVar5 = FUN_71000bb680();
    param_1[0x3f] = *(long *)(lVar7 + 0x30) + *plVar5 * 20000;
    pcVar6 = "NexMatchJointSessionJob::SendInvitationAsCompanion";
    param_1[6] = (long)FUN_71000f7df0;
    param_1[7] = 0;
    goto LAB_71000f904c;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
  local_68[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_68);
  FUN_71000bcf30((int *)(param_1 + 0x44),local_78);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f904c:
  param_1[8] = (long)pcVar6;
  return 0;
}

