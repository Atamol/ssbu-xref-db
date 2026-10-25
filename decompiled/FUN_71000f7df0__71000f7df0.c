// addr:      71000f7df0
// offset:    0xf7df0
// name:      FUN_71000f7df0
// mangled:   
// signature: undefined FUN_71000f7df0(void)


undefined8 FUN_71000f7df0(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  char *pcVar6;
  undefined1 uVar7;
  ulong uVar8;
  ushort uVar9;
  short sVar10;
  ErrorResultVariant *this;
  long *plVar11;
  long alStack_178 [2];
  long alStack_168 [2];
  long alStack_158 [31];
  undefined4 auStack_58 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
  case 5:
    alStack_158[0]._0_4_ = 0xc406;
    break;
  case 6:
    alStack_158[0]._0_4_ = 0xa471;
    break;
  case 7:
    alStack_158[0]._0_4_ = 0xc420;
    break;
  case 8:
    alStack_158[0]._0_4_ = 0xc421;
    break;
  default:
    FUN_7100192e90((int *)alStack_158,DAT_71052adfc0);
    if (((int)alStack_158[0] == 0) && (iVar3 = FUN_7100146ba0(DAT_71052adb38), iVar3 != 4)) {
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
        if ((ulong)param_1[0x3f] < *(ulong *)(DAT_71052ac580 + 0x30)) {
          *(undefined1 *)(param_1 + 0x26) = 0x20;
          alStack_158[0]._0_4_ = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)alStack_158 | 4));
          alStack_168[0]._0_4_ = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)alStack_158 | 4),(Result *)alStack_168);
          plVar11 = alStack_158;
          goto LAB_71000f805c;
        }
        lVar5 = FUN_71001939c0(DAT_71052adfc0);
        lVar1 = DAT_71052adb38;
        if (*(char *)(lVar5 + 0x84) != '\0') {
          return 5;
        }
        FUN_7100150770(*(long *)(DAT_71052adb38 + 0xb8));
        plVar11 = (long *)param_1[0x16];
        if (plVar11 != param_1 + 0x15) {
          uVar9 = 0;
          do {
            bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),plVar11[2]);
            if (bVar2) {
              uVar8 = (ulong)uVar9;
              uVar9 = uVar9 + 1;
              alStack_158[uVar8] = plVar11[2];
            }
            plVar11 = (long *)plVar11[1];
          } while (plVar11 != param_1 + 0x15);
          if (1 < uVar9) {
            FUN_710014efa0((int *)alStack_168,*(long *)(lVar1 + 200),(char)(int)param_1[0x12],
                           (long)alStack_158,uVar9,*(long *)(lVar1 + 0xf0),0,0);
            alStack_178[0]._0_4_ = 0x4c0d;
            this = (ErrorResultVariant *)((ulong)alStack_178 | 4);
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
            if ((int)alStack_168[0] != (int)alStack_178[0]) {
              alStack_178[0]._0_4_ = 0x2c0a;
              nn::err::ErrorResultVariant::ErrorResultVariant(this);
              auStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
              if ((int)alStack_168[0] == (int)alStack_178[0]) {
                sVar10 = 0;
                uVar8 = (ulong)uVar9;
                plVar11 = alStack_158;
                do {
                  if (*plVar11 != *(long *)(lVar1 + 0xf0)) {
                    bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),*plVar11);
                    sVar10 = sVar10 + (ushort)bVar2;
                  }
                  plVar11 = plVar11 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                if (sVar10 != 0) {
                  *(undefined1 *)(param_1 + 0x26) = 8;
                  alStack_178[0]._0_4_ = 0x6c57;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)alStack_178 | 4));
                  auStack_58[0] = 0;
                  nn::err::ErrorResultVariant::operator=
                            ((ErrorResultVariant *)((ulong)alStack_178 | 4),(Result *)auStack_58);
                  plVar11 = alStack_178;
LAB_71000f805c:
                  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)plVar11);
                  FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                           (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                                          0x168));
                  goto LAB_71000f7ec4;
                }
              }
              else if ((int)alStack_168[0] != 0) {
                plVar11 = alStack_168;
                *(undefined1 *)(param_1 + 0x26) = 3;
                goto LAB_71000f805c;
              }
            }
          }
        }
        *(undefined4 *)(param_1 + 0x13) = 7;
        FUN_7100150900(*(long *)(lVar1 + 0xb8));
        FUN_7100150770(*(long *)(lVar1 + 0xb8));
        FUN_7100150870(*(long *)(lVar1 + 0xb8),param_1[0x14],1);
        FUN_71001506d0(*(long *)(lVar1 + 0xb8),param_1[0x14],1);
        lVar1 = DAT_71052ac580;
        param_1[0x37] = *(long *)(DAT_71052ac580 + 0x30);
        plVar11 = FUN_71000bb680();
        param_1[0x3e] = *(long *)(lVar1 + 0x30) + *plVar11 * 15000;
        pcVar6 = "NexMatchJointSessionJob::WaitForAnswerToInvitation";
        param_1[6] = (long)FUN_71000fa1c0;
        param_1[7] = 0;
        goto LAB_71000f7f6c;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar7 = 6;
    }
    else {
      alStack_158[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_158 | 4));
      alStack_168[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_158 | 4),(Result *)alStack_168);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_158);
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar7;
LAB_71000f7ec4:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_158 | 4));
  alStack_168[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_158 | 4),(Result *)alStack_168);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_158);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f7f6c:
  param_1[8] = (long)pcVar6;
  return 0;
}

