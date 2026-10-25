// addr:      71001001a0
// offset:    0x1001a0
// name:      FUN_71001001a0
// mangled:   
// signature: undefined FUN_71001001a0(void)


undefined8 FUN_71001001a0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  long lVar12;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar7 = DAT_71052adb38;
  if (iVar3 == 7) {
    uVar10 = 0xc420;
LAB_7100100228:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    aiStack_58[0] = uVar10;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4));
    aiStack_68[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
    FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_58);
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71000f70d0;
    param_1[7] = 0;
    param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
    return 0;
  }
  if (iVar3 == 6) {
    uVar10 = 0xa471;
    goto LAB_7100100228;
  }
  if (iVar3 == 5) {
    uVar10 = 0xc406;
    goto LAB_7100100228;
  }
  if (iVar3 == 8) {
    uVar10 = 0xc421;
    goto LAB_7100100228;
  }
  piVar4 = (int *)param_1[0xb];
  if ((piVar4 != (int *)0x0) && ((char)piVar4[10] != '\0')) {
    if (2 < *piVar4 - 2U) {
      FUN_71000b4260(piVar4);
    }
    param_1[0xb] = 0;
    FUN_71000d8f90(*(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8
                            + 0x168));
    FUN_7100140910(param_1);
    return 1;
  }
  bVar2 = FUN_7100140e30((long)param_1);
  uVar5 = (ulong)((ulong)*(byte *)(DAT_71052adb38 + 0x162) == 0);
  if (!bVar2) {
    uVar5 = (ulong)*(byte *)(DAT_71052adb38 + 0x162);
  }
  plVar11 = *(long **)(DAT_71052adb38 + uVar5 * 8 + 0x168);
  uVar5 = (**(code **)(*plVar11 + 0xa8))(plVar11,param_1 + 0x27);
  if ((uVar5 & 1) == 0) {
    return 5;
  }
  if (*(char *)((long)param_1 + 0xfb) == '\0') {
    piVar4 = (int *)((long)param_1 + 100);
    FUN_71000bce50(aiStack_58,piVar4);
    if (aiStack_58[0] == 0) {
      aiStack_58[0] = 0;
      aiStack_58[1] = 0x20000;
      aiStack_58[2] = 0;
      FUN_7100160990();
      lVar7 = FUN_71001602c0((long)(param_1 + 0x27));
      if (lVar7 != 0) {
        lVar12 = (**(code **)(*plVar11 + 0xf0))(plVar11);
        if (lVar12 != lVar7) {
          FUN_7100140e30((long)param_1);
          (**(code **)(*plVar11 + 0xf8))(plVar11,lVar7);
        }
        param_1[8] = (long)"NexMatchJointSessionJob::StartJoinNextMesh";
        param_1[6] = (long)FUN_7100100640;
        param_1[7] = 0;
        *(undefined4 *)(param_1 + 0x46) = 0x10;
        return 0;
      }
      *(undefined1 *)(param_1 + 0x26) = 0x1d;
LAB_7100100564:
      aiStack_58[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4))
      ;
      aiStack_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
    }
    else {
      FUN_71000bce50(aiStack_58,piVar4);
      aiStack_68[0] = 0x6c4b;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_68 | 4))
      ;
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
      if (aiStack_58[0] == aiStack_68[0]) {
        lVar12 = *(long *)(lVar7 + 8);
        bVar1 = *(char *)((long)param_1 + 0x261) + 1;
        *(byte *)((long)param_1 + 0x261) = bVar1;
        if (bVar1 < 3) {
          bVar2 = FUN_7100140e30((long)param_1);
          if (bVar2) {
            bVar2 = FUN_71000edff0(lVar12,*(int *)(lVar7 + (ulong)(*(byte *)(lVar7 + 0x162) == 0) *
                                                           4 + 0x180));
            lVar12 = DAT_71052ac580;
            if (bVar2) {
              if ((char)param_1[0x4a] == '\0') {
                plVar11 = FUN_71000bb680();
                lVar7 = *plVar11;
                lVar9 = 12000;
              }
              else {
                uVar5 = (**(code **)(**(long **)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 8 + 0x168
                                                ) + 0xe0))();
                lVar12 = DAT_71052ac580;
                if ((uVar5 & 1) != 0) {
                  pcVar6 = FUN_71000fec40;
                  pcVar8 = "NexMatchJointSessionJob::MeshRestart";
                  goto LAB_71001005b4;
                }
                plVar11 = FUN_71000bb680();
                lVar7 = *plVar11;
                lVar9 = 3000;
              }
              lVar7 = lVar7 * lVar9;
              lVar12 = *(long *)(lVar12 + 0x30);
LAB_7100100610:
              param_1[0x3d] = lVar7 + lVar12;
              param_1[6] = (long)FUN_71000ff3e0;
              param_1[7] = 0;
              param_1[8] = (long)"NexMatchJointSessionJob::WaitStartRetryJoinMesh";
              return 5;
            }
          }
          else {
            bVar2 = FUN_71000edff0(lVar12,*(int *)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 4 +
                                                  0x180));
            lVar7 = DAT_71052ac580;
            if (bVar2) {
              lVar12 = param_1[0x48];
              plVar11 = FUN_71000bb680();
              if ((char)lVar12 == '\0') {
                lVar12 = 12000;
              }
              else {
                lVar12 = 3000;
              }
              lVar12 = *plVar11 * lVar12;
              lVar7 = *(long *)(lVar7 + 0x30);
              goto LAB_7100100610;
            }
          }
          *(undefined1 *)(param_1 + 0x26) = 0x18;
        }
        else {
        }
        goto LAB_7100100564;
      }
      *(undefined1 *)(param_1 + 0x26) = 0x1d;
      FUN_71000bce50(aiStack_58,piVar4);
    }
    FUN_71000bcf30((int *)(param_1 + 0x44),aiStack_58);
    FUN_71000d8f90(*(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8
                            + 0x168));
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x44),(int *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 0x26) = 6;
  }
  pcVar6 = FUN_71000f7210;
  pcVar8 = "NexMatchJointSessionJob::StartLeaveMesh";
LAB_71001005b4:
  param_1[6] = (long)pcVar6;
  param_1[7] = 0;
  param_1[8] = (long)pcVar8;
  return 5;
}

