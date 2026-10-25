// addr:      71000fec40
// offset:    0xfec40
// name:      FUN_71000fec40
// mangled:   
// signature: undefined FUN_71000fec40(void)


undefined8 FUN_71000fec40(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  char *pcVar9;
  code *pcVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uStack_70;
  undefined4 uStack_68;
  int aiStack_60 [4];
  undefined4 uStack_48;
  int iStack_44;
  
  piVar7 = (int *)&uStack_70;
  FUN_71001902d0(DAT_71052adfc0);
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar8 = DAT_71052adb38;
  if (iVar3 == 7) {
    aiStack_60[0] = 0xc420;
  }
  else if (iVar3 == 6) {
    aiStack_60[0] = 0xa471;
  }
  else if (iVar3 == 5) {
    aiStack_60[0] = 0xc406;
  }
  else {
    if (iVar3 != 8) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        *(undefined1 *)(param_1 + 0x130) = 6;
        goto LAB_71000ff0f0;
      }
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      uStack_70._0_4_ = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)&uStack_70);
      FUN_71001405b0(param_1);
      lVar12 = DAT_71052adb38;
      bVar1 = FUN_7100140e30(param_1);
      uVar5 = (ulong)((ulong)*(byte *)(lVar12 + 0x162) == 0);
      if (!bVar1) {
        uVar5 = (ulong)*(byte *)(lVar12 + 0x162);
      }
      piVar4 = FUN_71000ee2e0(*(long *)(lVar12 + 8),*(int *)(lVar12 + uVar5 * 4 + 0x180));
      if (piVar4 == (int *)0x0) {
        bVar2 = 0;
      }
      else {
        piVar11 = *(int **)(piVar4 + 4);
        piVar4 = piVar4 + 2;
        if (piVar11 == piVar4) {
          bVar2 = 0;
        }
        else if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
          do {
            piVar11 = *(int **)(piVar11 + 2);
          } while (piVar11 != piVar4);
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
          do {
            lVar12 = *(long *)(param_1 + 0xb0);
            do {
              if ((*(long *)(piVar11 + 4) == *(long *)(lVar12 + 0x10)) &&
                 (0 < *(short *)((long)piVar11 + 0x22))) goto LAB_71000fee40;
              lVar12 = *(long *)(lVar12 + 8);
            } while (lVar12 != param_1 + 0xa8);
            bVar2 = 1;
LAB_71000fee40:
            piVar11 = *(int **)(piVar11 + 2);
          } while (piVar11 != piVar4);
        }
        bVar2 = ~bVar2 & 1;
      }
      *(byte *)(param_1 + 0x265) = bVar2;
      FUN_7100150590(*(long *)(lVar8 + 0xb8));
      FUN_7100150840(*(long *)(lVar8 + 0xb8));
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(DAT_71052ac580 + 0x30);
      bVar1 = FUN_7100140e30(param_1);
      if (bVar1) {
        FUN_71000c4cc0(DAT_71052acd90,
                       *(undefined4 *)(lVar8 + 0x180 + (ulong)(*(byte *)(lVar8 + 0x162) == 0) * 4));
        plVar14 = (long *)(lVar8 + 8);
        lVar12 = *plVar14;
        bVar1 = FUN_71000edff0(lVar12,*(int *)(lVar8 + 0x180 + (ulong)*(byte *)(lVar8 + 0x162) * 4))
        ;
        if ((bVar1) &&
           (bVar1 = FUN_71000edff0(lVar12,*(int *)(lVar8 + (ulong)(*(char *)(lVar8 + 0x162) == '\0')
                                                           * 4 + 0x180)), bVar1)) {
          plVar13 = *(long **)(lVar8 + (ulong)(*(char *)(lVar8 + 0x162) == '\0') * 8 + 0x168);
          uVar5 = (**(code **)(*plVar13 + 0xe0))(plVar13);
          if ((uVar5 & 1) == 0) {
            bVar2 = 0;
          }
          else {
            bVar2 = (**(code **)(**(long **)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 8 + 0x168) +
                                0xe0))();
            bVar2 = bVar2 & 1;
          }
          *(byte *)(param_1 + 0xf5) = bVar2;
          uVar5 = (**(code **)(*plVar13 + 0xe0))(plVar13);
          if ((uVar5 & 1) == 0) {
            lVar12 = (**(code **)(*plVar13 + 0xf0))(plVar13);
            *(undefined1 *)(param_1 + 0x250) = 0;
            uVar5 = FUN_7100150d50(*(long *)(lVar8 + 0xb8),lVar12,&iStack_44);
            if ((((uVar5 & 1) != 0) &&
                (uVar5 = (**(code **)(**(long **)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 8 +
                                                 0x168) + 0xe0))(), (uVar5 & 1) != 0)) &&
               (iStack_44 == *(int *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 4 + 0x180))) {
              uVar5 = (**(code **)(*(long *)*plVar14 + 0x60))((long *)*plVar14,iStack_44,lVar12);
              lVar12 = DAT_71052ac580;
              if ((uVar5 & 1) == 0) {
                uStack_70 = 0x2000000000000;
                uStack_68 = 0;
                (**(code **)(*(long *)*plVar14 + 0x38))((long *)*plVar14,&uStack_70);
              }
              else {
                if (*(char *)(param_1 + 0x265) != '\0') {
                  (**(code **)(*plVar13 + 0xd8))
                            (&uStack_70,plVar13,
                             *(undefined4 *)
                              (lVar8 + (ulong)(*(char *)(lVar8 + 0x162) == '\0') * 4 + 0x180));
                  *(undefined1 *)(param_1 + 0xf5) = 1;
                  goto LAB_71000ff08c;
                }
                plVar13 = FUN_71000bb680();
                lVar8 = *(long *)(lVar12 + 0x30);
                lVar12 = *plVar13;
                bVar2 = *(char *)(param_1 + 0x261) + 1;
                *(byte *)(param_1 + 0x261) = bVar2;
                *(long *)(param_1 + 0x1e8) = lVar8 + lVar12 * 12000;
                if (bVar2 < 3) {
                  pcVar10 = FUN_71000ff3e0;
                  uVar6 = 0;
                  pcVar9 = "NexMatchJointSessionJob::WaitStartRetryJoinMesh";
                  goto LAB_71000ff36c;
                }
              }
              uStack_70 = CONCAT44(uStack_70._4_4_,0x6c59);
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)&uStack_70 | 4));
              uStack_48 = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)&uStack_70 | 4),(Result *)&uStack_48);
              FUN_71000bcf30((int *)(param_1 + 0x220),(int *)&uStack_70);
              FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                       (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                                      0x168));
              pcVar10 = FUN_71000f7210;
              uVar6 = 5;
              pcVar9 = "NexMatchJointSessionJob::StartLeaveMesh";
LAB_71000ff36c:
              *(code **)(param_1 + 0x30) = pcVar10;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(char **)(param_1 + 0x40) = pcVar9;
              return uVar6;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x250) = 0;
            if ((*(char *)(param_1 + 0x265) == '\0') ||
               (uVar5 = (**(code **)(**(long **)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 8 + 0x168
                                                ) + 0xe0))(), (uVar5 & 1) == 0)) {
              lVar8 = DAT_71052ac580;
              plVar13 = FUN_71000bb680();
              lVar8 = *(long *)(lVar8 + 0x30);
              lVar12 = *plVar13;
              bVar2 = *(char *)(param_1 + 0x261) + 1;
              *(byte *)(param_1 + 0x261) = bVar2;
              *(long *)(param_1 + 0x1e8) = lVar8 + lVar12 * 12000;
              if (bVar2 < 3) {
                *(code **)(param_1 + 0x30) = FUN_71000ff3e0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                pcVar9 = "NexMatchJointSessionJob::WaitStartRetryJoinMesh";
                goto LAB_71000fed40;
              }
              goto LAB_71000ff058;
            }
            bVar2 = FUN_71000d7ea0((long)plVar13);
            if ((bVar2 & 1) == 0) {
              (**(code **)(*plVar13 + 0xd8))
                        (&uStack_70,plVar13,
                         *(undefined4 *)
                          (lVar8 + (ulong)(*(char *)(lVar8 + 0x162) == '\0') * 4 + 0x180));
            }
          }
          goto LAB_71000ff08c;
        }
LAB_71000ff048:
        *(undefined1 *)(param_1 + 0x130) = 0x18;
LAB_71000ff058:
        uStack_70._0_4_ = 0x6c59;
LAB_71000ff060:
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&uStack_70 | 4));
        uStack_48 = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&uStack_70 | 4),(Result *)&uStack_48);
      }
      else {
        FUN_71000c4cc0(DAT_71052acd90,
                       *(undefined4 *)(lVar8 + 0x180 + (ulong)*(byte *)(lVar8 + 0x162) * 4));
        *(undefined1 *)(param_1 + 0x240) = 0;
        bVar1 = FUN_71000edff0(*(long *)(lVar8 + 8),
                               *(int *)(lVar8 + 0x180 + (ulong)*(byte *)(lVar8 + 0x162) * 4));
        if (!bVar1) goto LAB_71000ff048;
        plVar13 = *(long **)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 8 + 0x168);
        bVar2 = (**(code **)(*plVar13 + 0xe0))(plVar13);
        *(byte *)(param_1 + 0xf5) = bVar2 & 1;
        if ((bVar2 & 1) == 0) {
          *(undefined1 *)(param_1 + 0xf4) = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
        }
        else if (*(char *)(param_1 + 0xf4) == '\0') {
          lVar12 = *(long *)(param_1 + 0xb0);
          if (lVar12 != param_1 + 0xa8) {
            do {
              if (*(long *)(param_1 + 0xa0) == *(long *)(lVar12 + 0x10)) {
                *(undefined1 *)(param_1 + 0xf5) = 0;
                goto LAB_71000ff08c;
              }
              lVar12 = *(long *)(lVar12 + 8);
            } while (lVar12 != param_1 + 0xa8);
          }
          *(undefined1 *)(param_1 + 0xf4) = 1;
          *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar8 + 0xf0);
          bVar2 = FUN_71000d7ea0((long)plVar13);
          if ((bVar2 & 1) == 0) {
            (**(code **)(*plVar13 + 0xd8))
                      (&uStack_70,plVar13,
                       *(undefined4 *)(lVar8 + (ulong)*(byte *)(lVar8 + 0x162) * 4 + 0x180));
            FUN_71000bcf30(aiStack_60,(int *)&uStack_70);
            if (aiStack_60[0] != 0) {
              *(undefined1 *)(param_1 + 0x130) = 0x17;
              uStack_70._0_4_ = 0xac5a;
              goto LAB_71000ff060;
            }
          }
        }
LAB_71000ff08c:
        (**(code **)(**(long **)(lVar8 + 8) + 0x20))(&uStack_70,*(long **)(lVar8 + 8),plVar13);
        FUN_71000bcf30(aiStack_60,(int *)&uStack_70);
        if (aiStack_60[0] == 0) {
          *(undefined1 *)(param_1 + 0x262) = 0;
          *(undefined2 *)(param_1 + 0x110) = 0;
          if (*(char *)(param_1 + 0xf5) == '\0') {
            *(code **)(param_1 + 0x30) = FUN_71000ff630;
            *(undefined8 *)(param_1 + 0x38) = 0;
            pcVar9 = "NexMatchJointSessionJob::StartGetNextMeshHostStationLocation";
          }
          else {
            *(undefined4 *)(param_1 + 0x230) = 0xf;
            pcVar9 = "NexMatchJointSessionJob::StartCreateNextMesh";
            *(code **)(param_1 + 0x30) = FUN_71000ff840;
            *(undefined8 *)(param_1 + 0x38) = 0;
          }
          goto LAB_71000fed40;
        }
        piVar7 = aiStack_60;
        *(undefined1 *)(param_1 + 0x130) = 0x1a;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),piVar7);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
LAB_71000ff0f0:
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    aiStack_60[0] = 0xc421;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
  uStack_70 = (ulong)uStack_70._4_4_ << 0x20;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)&uStack_70);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_60);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar9 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fed40:
  *(char **)(param_1 + 0x40) = pcVar9;
  return 0;
}

