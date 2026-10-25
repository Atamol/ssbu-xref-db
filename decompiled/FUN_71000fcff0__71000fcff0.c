// addr:      71000fcff0
// offset:    0xfcff0
// name:      FUN_71000fcff0
// mangled:   
// signature: undefined FUN_71000fcff0(void)


undefined8 FUN_71000fcff0(long *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ErrorResultVariant *this;
  long *plVar8;
  long lVar9;
  uint uVar10;
  int aiStack_178 [4];
  int aiStack_168 [4];
  long alStack_158 [31];
  undefined4 auStack_58 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
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
    if (((int)alStack_158[0] == 0) &&
       (iVar4 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar4 != 4)) {
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
        if (((*(char *)((long)param_1 + 0xf4) != '\0') && (*(char *)((long)param_1 + 0x234) != '\0')
            ) && (param_1[0x47] != *(long *)(DAT_71052adb38 + 0xf0))) {
          *(undefined1 *)((long)param_1 + 0x234) = 0;
          *(undefined1 *)((long)param_1 + 0xf4) = 0;
          param_1[0x14] = param_1[0x47];
          param_1[8] = (long)"NexMatchJointSessionJob::SendPreparedForMigrateSession";
          param_1[6] = (long)FUN_71000fc7d0;
          param_1[7] = 0;
          return 0;
        }
        plVar8 = (long *)param_1[0x16];
        if (plVar8 == param_1 + 0x15) {
LAB_71000fd39c:
          param_1[0x38] = *(long *)(DAT_71052ac580 + 0x30);
          param_1[6] = (long)FUN_71000fcc60;
          param_1[7] = 0;
          param_1[8] = (long)"NexMatchJointSessionJob::WaitCompanionStationPrepared";
          return 5;
        }
        uVar10 = 0;
        do {
          bVar3 = FUN_7100150680(*(long *)(lVar1 + 0xb8),plVar8[2]);
          if (((bVar3) && (iVar4 = FUN_7100150550(*(long *)(lVar1 + 0xb8),plVar8[2]), iVar4 == 0))
             && (bVar3 = FUN_7100150720(*(long *)(lVar1 + 0xb8),plVar8[2]), !bVar3)) {
            alStack_158[uVar10] = plVar8[2];
            uVar10 = uVar10 + 1;
          }
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != param_1 + 0x15);
        if (uVar10 == 0) goto LAB_71000fd39c;
        plVar8 = *(long **)(lVar1 + (ulong)((ulong)*(byte *)(lVar1 + 0x162) == 0) * 8 + 0x168);
        lVar9 = *(long *)(lVar1 + 200);
        iVar4 = *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180);
        lVar1 = param_1[0x12];
        lVar2 = param_1[0x1e];
        uVar6 = (**(code **)(*plVar8 + 0xf0))(plVar8);
        FUN_710014e550(aiStack_168,lVar9,(char)(int)lVar1,iVar4,(int)lVar2,uVar6,
                       (long)(plVar8 + 0xad),0x20,(long)alStack_158,(ushort)uVar10);
        aiStack_178[0] = 0x4c0d;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_178 | 4));
        auStack_58[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_178 | 4),(Result *)auStack_58);
        if ((aiStack_168[0] == 0) || (aiStack_168[0] == aiStack_178[0])) goto LAB_71000fd39c;
        aiStack_178[0] = 0x2c0a;
        this = (ErrorResultVariant *)((ulong)aiStack_178 | 4);
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_58[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
        if (aiStack_168[0] == aiStack_178[0]) {
          *(undefined1 *)(param_1 + 0x26) = 9;
          aiStack_178[0] = 0x6c57;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_58[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_58);
          piVar5 = aiStack_178;
        }
        else {
          piVar5 = aiStack_168;
          *(undefined1 *)(param_1 + 0x26) = 3;
        }
        FUN_71000bcf30((int *)(param_1 + 0x44),piVar5);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71000fd0c4;
      }
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
      uVar7 = 6;
    }
    else {
      alStack_158[0]._0_4_ = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)alStack_158 | 4));
      aiStack_168[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)alStack_158 | 4),(Result *)aiStack_168);
      FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_158);
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x26) = uVar7;
LAB_71000fd0c4:
    param_1[8] = (long)"NexMatchJointSessionJob::StartLeaveMesh";
    param_1[6] = (long)FUN_71000f7210;
    param_1[7] = 0;
    return 5;
  }
  *(undefined1 *)((long)param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x26) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_158 | 4));
  aiStack_168[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)alStack_158 | 4),(Result *)aiStack_168);
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_158);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71000f70d0;
  param_1[7] = 0;
  param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

