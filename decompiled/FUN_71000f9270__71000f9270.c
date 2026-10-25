// addr:      71000f9270
// offset:    0xf9270
// name:      FUN_71000f9270
// mangled:   
// signature: undefined8 __cdecl FUN_71000f9270(long * param_1)


undefined8 FUN_71000f9270(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 uVar7;
  ushort uVar8;
  ErrorResultVariant *this;
  ushort uVar9;
  long *plVar10;
  int local_280 [4];
  int local_270 [4];
  long local_260 [31];
  long local_168 [31];
  undefined4 local_70 [4];
  
  piVar6 = local_280;
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    local_168[0]._0_4_ = 0xc406;
    break;
  case 6:
    local_168[0]._0_4_ = 0xa471;
    break;
  case 7:
    local_168[0]._0_4_ = 0xc420;
    break;
  case 8:
    local_168[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)local_168,DAT_71052adfc0);
    if (((int)local_168[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 != 4)) {
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
        plVar10 = (long *)param_1[0x16];
        if (plVar10 == param_1 + 0x15) {
LAB_71000f95fc:
          param_1[0x37] = *(long *)(DAT_71052ac580 + 0x30);
          param_1[6] = (long)FUN_71000f8ed0;
          param_1[7] = 0;
          param_1[8] = (long)"NexMatchJointSessionJob::WaitForAnswerToDestroyInvitation";
          return 5;
        }
        uVar9 = 0;
        uVar8 = 0;
        do {
          local_270[0] = CONCAT31(local_270[0]._1_3_,0xfd);
          uVar5 = FUN_7100150de0(*(long *)(lVar1 + 0xb8),plVar10[2],(undefined1 *)local_270);
          if ((uVar5 & 1) != 0) {
            bVar2 = FUN_7100190a90(DAT_71052adfc0,(byte)local_270[0]);
            if (bVar2) {
              local_168[uVar9] = plVar10[2];
              uVar9 = uVar9 + 1;
              iVar3 = FUN_71001508c0(*(long *)(lVar1 + 0xb8),plVar10[2]);
              bVar2 = FUN_7100150720(*(long *)(lVar1 + 0xb8),plVar10[2]);
              if ((iVar3 == 0) && (!bVar2)) {
                uVar5 = (ulong)uVar8;
                uVar8 = uVar8 + 1;
                local_260[uVar5] = plVar10[2];
              }
            }
          }
          plVar10 = (long *)plVar10[1];
        } while (plVar10 != param_1 + 0x15);
        if (uVar8 == 0) goto LAB_71000f95fc;
        FUN_710014efc0(local_270,*(long *)(lVar1 + 200),(char)(int)param_1[0x12],(long)local_168,
                       uVar9,*(long *)(lVar1 + 0xf0),(long)local_260,uVar8);
        local_280[0] = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_280 | 4));
        local_70[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_280 | 4),(Result *)local_70);
        if ((local_270[0] == 0) || (local_270[0] == local_280[0])) goto LAB_71000f95fc;
        local_280[0] = 0x2c0a;
        this = (ErrorResultVariant *)((ulong)local_280 | 4);
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        local_70[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_70);
        if (local_270[0] == local_280[0]) {
          *(undefined1 *)(param_1 + 0x26) = 7;
          local_280[0] = 0x6c57;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          local_70[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)local_70);
        }
        else {
          piVar6 = local_270;
          *(undefined1 *)(param_1 + 0x26) = 3;
        }
        FUN_71000bcf30((int *)(param_1 + 0x44),piVar6);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71000f9344;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar7 = 6;
    }
    else {
      local_168[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_168 | 4));
      local_260[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_168 | 4),(Result *)local_260);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)local_168);
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar7;
LAB_71000f9344:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_168 | 4));
  local_260[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_168 | 4),(Result *)local_260);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)local_168);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

