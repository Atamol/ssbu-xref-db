// addr:      71000f8600
// offset:    0xf8600
// name:      FUN_71000f8600
// mangled:   
// signature: undefined FUN_71000f8600(void)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_71000f8600(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  undefined1 uVar7;
  long *plVar8;
  ulong uVar9;
  ushort uVar10;
  short sVar11;
  ErrorResultVariant *this;
  int aiStack_170 [4];
  long alStack_160 [2];
  long alStack_150 [31];
  undefined4 auStack_58 [2];
  
  plVar6 = (long *)aiStack_170;
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
    if (((int)alStack_150[0] == 0) &&
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
        if ((ulong)param_1[0x3f] < *(ulong *)(DAT_71052ac580 + 0x30)) {
          *(undefined1 *)(param_1 + 0x26) = 0x20;
          alStack_150[0]._0_4_ = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)alStack_150 | 4));
          alStack_160[0]._0_4_ = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)alStack_160);
          plVar6 = alStack_150;
        }
        else {
          FUN_7100150770(*(long *)(DAT_71052adb38 + 0xb8));
          lVar5 = FUN_71001939c0(DAT_71052adfc0);
          if (*(char *)(lVar5 + 0x84) != '\0') {
            return 5;
          }
          if (*(uint *)(param_1 + 0x17) < 2) {
LAB_71000f8950:
            *(undefined4 *)(param_1 + 0x13) = 9;
            FUN_7100150770(*(long *)(lVar1 + 0xb8));
            FUN_7100150900(*(long *)(lVar1 + 0xb8));
            FUN_7100150870(*(long *)(lVar1 + 0xb8),param_1[0x14],1);
            FUN_71001506d0(*(long *)(lVar1 + 0xb8),param_1[0x14],1);
            lVar1 = DAT_71052ac580;
            param_1[0x37] = *(long *)(DAT_71052ac580 + 0x30);
            plVar6 = FUN_71000bb680();
            param_1[0x3e] = *(long *)(lVar1 + 0x30) + *plVar6 * 15000;
            param_1[8] = (long)"NexMatchJointSessionJob::WaitForAnswerToDestroyInvitation";
            param_1[6] = (long)FUN_71000f8ed0;
            param_1[7] = 0;
            return 0;
          }
          plVar8 = (long *)param_1[0x16];
          if (plVar8 == param_1 + 0x15) {
            uVar10 = 0;
          }
          else {
            uVar10 = 0;
            do {
              uVar9 = (ulong)uVar10;
              uVar10 = uVar10 + 1;
              alStack_150[uVar9] = plVar8[2];
              plVar8 = (long *)plVar8[1];
            } while (plVar8 != param_1 + 0x15);
          }
          FUN_710014efc0((int *)alStack_160,*(long *)(lVar1 + 200),(char)(int)param_1[0x12],
                         (long)alStack_150,uVar10,*(long *)(lVar1 + 0xf0),0,0);
          aiStack_170[0] = 0x4c0d;
          this = (ErrorResultVariant *)((ulong)aiStack_170 | 4);
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_58[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
          if ((int)alStack_160[0] == aiStack_170[0]) goto LAB_71000f8950;
          aiStack_170[0] = 0x2c0a;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_58[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
          if ((int)alStack_160[0] == aiStack_170[0]) {
            if (uVar10 == 0) goto LAB_71000f8950;
            sVar11 = 0;
            uVar9 = (ulong)uVar10;
            plVar8 = alStack_150;
            do {
              if (*plVar8 != *(long *)(lVar1 + 0xf0)) {
                bVar2 = FUN_7100150680(*(long *)(lVar1 + 0xb8),*plVar8);
                sVar11 = sVar11 + (ushort)bVar2;
              }
              plVar8 = plVar8 + 1;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
            if (sVar11 == 0) goto LAB_71000f8950;
            *(undefined1 *)(param_1 + 0x26) = 7;
            aiStack_170[0] = 0x6c57;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_170 | 4));
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_170 | 4),(Result *)auStack_58);
          }
          else {
            if ((int)alStack_160[0] == 0) goto LAB_71000f8950;
            plVar6 = alStack_160;
            *(undefined1 *)(param_1 + 0x26) = 3;
          }
        }
        FUN_71000bcf30((int *)(param_1 + 0x44),(int *)plVar6);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71000f86d0;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar7 = 6;
    }
    else {
      alStack_150[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_150 | 4));
      alStack_160[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)alStack_160);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_150);
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar7;
LAB_71000f86d0:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_150 | 4));
  alStack_160[0]._0_4_ = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_150 | 4),(Result *)alStack_160);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_150);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

