// addr:      71000fc2f0
// offset:    0xfc2f0
// name:      FUN_71000fc2f0
// mangled:   
// signature: undefined FUN_71000fc2f0(void)


undefined8 FUN_71000fc2f0(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  ulong uVar10;
  short sVar11;
  ErrorResultVariant *this;
  long *plVar12;
  long lVar13;
  ushort uVar14;
  int aiStack_188 [4];
  int aiStack_178 [4];
  long alStack_168 [31];
  undefined4 auStack_70 [4];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
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
    if (((int)alStack_168[0] == 0) && (iVar4 = FUN_7100146ba0(DAT_71052adb38), iVar4 != 4)) {
      if (*(char *)((long)param_1 + 0xfb) == '\0') {
        piVar5 = (int *)param_1[0xb];
        if ((piVar5 != (int *)0x0) && ((char)piVar5[10] != '\0')) {
          if (2 < *piVar5 - 2U) {
            FUN_71000b4260(piVar5);
          }
          param_1[0xb] = 0;
          FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                   (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
          FUN_7100140910(param_1);
          return 1;
        }
        *(undefined4 *)(param_1 + 0x46) = 8;
        lVar2 = DAT_71052adb38;
        if (((*(char *)((long)param_1 + 0xf4) != '\0') && (*(char *)((long)param_1 + 0x234) != '\0')
            ) && (param_1[0x47] != *(long *)(DAT_71052adb38 + 0xf0))) {
          *(undefined1 *)((long)param_1 + 0x234) = 0;
          *(undefined1 *)((long)param_1 + 0xf4) = 0;
          param_1[0x14] = param_1[0x47];
          param_1[6] = (long)FUN_71000fc7d0;
          param_1[7] = 0;
          pcVar8 = "NexMatchJointSessionJob::SendPreparedForMigrateSession";
          goto LAB_71000fc46c;
        }
        lVar6 = FUN_71001939c0(DAT_71052adfc0);
        if (*(char *)(lVar6 + 0x84) != '\0') {
          return 5;
        }
        FUN_7100150770(*(long *)(lVar2 + 0xb8));
        plVar12 = (long *)param_1[0x16];
        if (plVar12 != param_1 + 0x15) {
          uVar14 = 0;
          do {
            bVar3 = FUN_7100150680(*(long *)(lVar2 + 0xb8),plVar12[2]);
            if (bVar3) {
              uVar10 = (ulong)uVar14;
              uVar14 = uVar14 + 1;
              alStack_168[uVar10] = plVar12[2];
            }
            plVar12 = (long *)plVar12[1];
          } while (plVar12 != param_1 + 0x15);
          if (1 < uVar14) {
            plVar12 = *(long **)(lVar2 + (ulong)((ulong)*(byte *)(lVar2 + 0x162) == 0) * 8 + 0x168);
            iVar4 = *(int *)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 4 + 0x180);
            lVar13 = *(long *)(lVar2 + 200);
            lVar6 = param_1[0x12];
            lVar1 = param_1[0x1e];
            uVar7 = (**(code **)(*plVar12 + 0xf0))(plVar12);
            FUN_710014e550(aiStack_178,lVar13,(char)(int)lVar6,iVar4,(int)lVar1,uVar7,
                           (long)(plVar12 + 0xad),0x20,(long)alStack_168,uVar14);
            aiStack_188[0] = 0x4c0d;
            this = (ErrorResultVariant *)((ulong)aiStack_188 | 4);
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_70[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_70);
            if (aiStack_178[0] != aiStack_188[0]) {
              aiStack_188[0] = 0x2c0a;
              nn::err::ErrorResultVariant::ErrorResultVariant(this);
              auStack_70[0] = 0;
              nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_70);
              if (aiStack_178[0] == aiStack_188[0]) {
                sVar11 = 0;
                uVar10 = (ulong)uVar14;
                plVar12 = alStack_168;
                do {
                  if (*plVar12 != *(long *)(lVar2 + 0xf0)) {
                    bVar3 = FUN_7100150680(*(long *)(lVar2 + 0xb8),*plVar12);
                    sVar11 = sVar11 + (ushort)bVar3;
                  }
                  plVar12 = plVar12 + 1;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
                if (sVar11 == 0) goto LAB_71000fc640;
                *(undefined1 *)(param_1 + 0x26) = 9;
                aiStack_188[0] = 0x6c57;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_188 | 4));
                auStack_70[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_188 | 4),(Result *)auStack_70);
                piVar5 = aiStack_188;
              }
              else {
                if (aiStack_178[0] == 0) goto LAB_71000fc640;
                piVar5 = aiStack_178;
                *(undefined1 *)(param_1 + 0x26) = 3;
              }
              FUN_71000bcf30((int *)(param_1 + 0x44),piVar5);
              FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                       (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                                      0x168));
              goto LAB_71000fc3c4;
            }
          }
        }
LAB_71000fc640:
        FUN_7100150410(*(long *)(lVar2 + 0xb8));
        FUN_7100150770(*(long *)(lVar2 + 0xb8));
        FUN_7100150440(*(long *)(lVar2 + 0xb8),*(long *)(lVar2 + 0xf0),1);
        FUN_71001506d0(*(long *)(lVar2 + 0xb8),*(long *)(lVar2 + 0xf0),1);
        lVar2 = DAT_71052ac580;
        param_1[0x38] = *(long *)(DAT_71052ac580 + 0x30);
        plVar12 = FUN_71000bb680();
        param_1[0x3e] = *(long *)(lVar2 + 0x30) + *plVar12 * 15000;
        pcVar8 = "NexMatchJointSessionJob::WaitCompanionStationPrepared";
        param_1[6] = (long)FUN_71000fcc60;
        param_1[7] = 0;
        goto LAB_71000fc46c;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar9 = 6;
    }
    else {
      alStack_168[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_168 | 4));
      aiStack_178[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_168 | 4),(Result *)aiStack_178);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_168);
      uVar9 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar9;
LAB_71000fc3c4:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_168 | 4));
  aiStack_178[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_168 | 4),(Result *)aiStack_178);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_168);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  pcVar8 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fc46c:
  param_1[8] = (long)pcVar8;
  return 0;
}

