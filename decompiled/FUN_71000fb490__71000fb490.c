// addr:      71000fb490
// offset:    0xfb490
// name:      FUN_71000fb490
// mangled:   
// signature: undefined FUN_71000fb490(void)


/* WARNING: Removing unreachable block (ram,0x0071000fb988) */

undefined8 FUN_71000fb490(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 uVar9;
  ushort uVar10;
  short sVar11;
  long lVar12;
  ErrorResultVariant *this;
  long lVar13;
  long *plVar14;
  int aiStack_170 [4];
  int aiStack_160 [4];
  long alStack_150 [31];
  undefined4 auStack_58 [2];
  
  piVar7 = aiStack_170;
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
    if (((int)alStack_150[0] == 0) && (iVar3 = FUN_7100146ba0(DAT_71052adb38), iVar3 != 4)) {
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
        lVar5 = FUN_71001939c0(DAT_71052adfc0);
        lVar1 = DAT_71052adb38;
        if (*(char *)(lVar5 + 0x84) != '\0') {
          return 5;
        }
        if (((int)param_1[0x12] == 9) && (uVar6 = FUN_7100146e20(DAT_71052adb38), (uVar6 & 1) != 0))
        {
          lVar5 = FUN_7100193a50(DAT_71052adfc0);
          lVar13 = *(long *)(lVar5 + 8);
          if (lVar13 != lVar5) {
            lVar12 = *(long *)(DAT_71052adb38 + 0xb8);
            do {
              bVar2 = FUN_7100150680(lVar12,*(long *)(lVar13 + 0x10));
              if (((!bVar2) &&
                  (uVar6 = FUN_7100150d50(lVar12,*(long *)(lVar13 + 0x10),(undefined4 *)alStack_150)
                  , (uVar6 & 1) != 0)) &&
                 ((int)alStack_150[0] !=
                  *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180))) {
                if (*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x3c]) {
                  return 5;
                }
                break;
              }
              lVar13 = *(long *)(lVar13 + 8);
            } while (lVar13 != lVar5);
          }
        }
        FUN_7100150770(*(long *)(lVar1 + 0xb8));
        plVar14 = (long *)param_1[0x16];
        if (plVar14 != param_1 + 0x15) {
          uVar10 = 0;
          do {
            bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),plVar14[2]);
            if (bVar2) {
              uVar6 = (ulong)uVar10;
              uVar10 = uVar10 + 1;
              alStack_150[uVar6] = plVar14[2];
            }
            plVar14 = (long *)plVar14[1];
          } while (plVar14 != param_1 + 0x15);
          if (1 < uVar10) {
            FUN_710014efe0(aiStack_160,*(long *)(lVar1 + 200),(char)(int)param_1[0x12],
                           (long)alStack_150,uVar10,*(long *)(lVar1 + 0xf0),0,0);
            aiStack_170[0] = 0x4c0d;
            this = (ErrorResultVariant *)((ulong)aiStack_170 | 4);
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
            if (aiStack_160[0] != aiStack_170[0]) {
              aiStack_170[0] = 0x2c0a;
              nn::err::ErrorResultVariant::ErrorResultVariant(this);
              auStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
              if (aiStack_160[0] == aiStack_170[0]) {
                sVar11 = 0;
                uVar6 = (ulong)uVar10;
                plVar14 = alStack_150;
                do {
                  if (*plVar14 != *(long *)(lVar1 + 0xf0)) {
                    bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),*plVar14);
                    sVar11 = sVar11 + (ushort)bVar2;
                  }
                  plVar14 = plVar14 + 1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
                if (sVar11 != 0) {
                  *(undefined1 *)(param_1 + 0x26) = 10;
                  aiStack_170[0] = 0x6c57;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)aiStack_170 | 4));
                  auStack_58[0] = 0;
                  nn::err::ErrorResultVariant::operator=
                            ((ErrorResultVariant *)((ulong)aiStack_170 | 4),(Result *)auStack_58);
LAB_71000fb954:
                  FUN_71000bcf30((int *)(param_1 + 0x44),piVar7);
                  FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                           (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                                          0x168));
                  goto LAB_71000fb560;
                }
              }
              else if (aiStack_160[0] != 0) {
                piVar7 = aiStack_160;
                *(undefined1 *)(param_1 + 0x26) = 3;
                goto LAB_71000fb954;
              }
            }
          }
        }
        *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
        FUN_7100150900(*(long *)(lVar1 + 0xb8));
        FUN_7100150870(*(long *)(lVar1 + 0xb8),param_1[0x14],1);
        FUN_71001506d0(*(long *)(lVar1 + 0xb8),param_1[0x14],1);
        *(undefined4 *)(param_1 + 0x13) = 0xb;
        lVar1 = DAT_71052ac580;
        plVar14 = FUN_71000bb680();
        param_1[0x3c] = *(long *)(lVar1 + 0x30) + *plVar14 * 10000;
        pcVar8 = "NexMatchJointSessionJob::WaitUntilCompanionLeavesMesh";
        param_1[6] = (long)FUN_71000fd440;
        param_1[7] = 0;
        goto LAB_71000fb608;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar9 = 6;
    }
    else {
      alStack_150[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_150 | 4));
      aiStack_160[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)aiStack_160);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_150);
      uVar9 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar9;
LAB_71000fb560:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_150 | 4));
  aiStack_160[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)aiStack_160);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_150);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar8 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fb608:
  param_1[8] = (long)pcVar8;
  return 0;
}

