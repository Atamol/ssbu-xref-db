// addr:      7100100820
// offset:    0x100820
// name:      FUN_7100100820
// mangled:   
// signature: undefined FUN_7100100820(void)


undefined8 FUN_7100100820(long *param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  ErrorResultVariant *pEVar14;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  long alStack_60 [2];
  undefined4 auStack_48 [2];
  
  iVar5 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  if (iVar5 == 7) {
    alStack_60[0]._0_4_ = 0xc420;
LAB_71001008ac:
    *(undefined1 *)((long)param_1 + 0xfa) = 1;
    *(undefined1 *)(param_1 + 0x26) = 3;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)alStack_60 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)alStack_60 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x44),(int *)alStack_60);
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71000f70d0;
    param_1[7] = 0;
    param_1[8] = (long)"NexMatchJointSessionJob::ProcessFailure";
    return 0;
  }
  if (iVar5 == 6) {
    alStack_60[0]._0_4_ = 0xa471;
    goto LAB_71001008ac;
  }
  if (iVar5 == 5) {
    alStack_60[0]._0_4_ = 0xc406;
    goto LAB_71001008ac;
  }
  if (iVar5 == 8) {
    alStack_60[0]._0_4_ = 0xc421;
    goto LAB_71001008ac;
  }
  piVar6 = (int *)param_1[0xb];
  if ((piVar6 != (int *)0x0) && ((char)piVar6[10] != '\0')) {
    if (2 < *piVar6 - 2U) {
      FUN_71000b4260(piVar6);
    }
    param_1[0xb] = 0;
    FUN_71000d8f90(*(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8
                            + 0x168));
    FUN_7100140910(param_1);
    return 1;
  }
  bVar4 = FUN_71001929a0((long)DAT_71052adfc0);
  if (!bVar4) {
    if (((*(char *)((long)param_1 + 0xfb) != '\0') || ((char)param_1[0x22] != '\0')) ||
       (*(char *)((long)param_1 + 0x111) != '\0')) {
      FUN_7100192a60((int *)alStack_60,(long)DAT_71052adfc0);
    }
    bVar4 = FUN_7100140e30((long)param_1);
    if ((((bVar4) && ((char)param_1[0x4a] != '\0')) ||
        ((bVar4 = FUN_7100140060((long)param_1), bVar4 && ((char)param_1[0x48] != '\0')))) &&
       (FUN_7100192a60((int *)alStack_60,(long)DAT_71052adfc0), (char)param_1[0x4c] != '\x02')) {
      *(undefined1 *)(param_1 + 0x4c) = 0;
    }
  }
  bVar4 = FUN_71001929a0((long)DAT_71052adfc0);
  if (!bVar4) {
    return 5;
  }
  FUN_71001929d0((int *)alStack_60,(long)DAT_71052adfc0);
  if ((int)alStack_60[0] == 0) {
    bVar4 = FUN_7100140e30((long)param_1);
    if (bVar4) {
      *(undefined1 *)((long)param_1 + 0xfc) = 1;
    }
    FUN_71001507a0(*(long *)(lVar2 + 0xb8),*(long *)(lVar2 + 0xf0),1);
    param_1[8] = (long)"NexMatchJointSessionJob::WaitCompanionStation";
    param_1[6] = (long)FUN_71000ffca0;
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0x11;
    return 0;
  }
  aiStack_70[0] = 0x643f;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
  aiStack_80[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)aiStack_80);
  if ((int)alStack_60[0] == aiStack_70[0]) {
LAB_7100100b78:
    bVar1 = (char)param_1[0x4c] + 1;
    *(byte *)(param_1 + 0x4c) = bVar1;
    if (bVar1 < 2) {
      *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
      FUN_71001902d0(DAT_71052adfc0);
      bVar4 = FUN_7100140e30((long)param_1);
      if (((!bVar4) || ((char)param_1[0x4a] == '\0')) ||
         (uVar7 = (**(code **)(**(long **)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168) +
                              0xe0))(), (uVar7 & 1) == 0)) {
        lVar2 = DAT_71052ac580;
        lVar3 = param_1[0x22];
        plVar8 = FUN_71000bb680();
        lVar11 = *(long *)(lVar2 + 0x30);
        lVar12 = *plVar8;
        lVar2 = 3000;
        if ((char)lVar3 != '\0') {
          lVar2 = 12000;
        }
        param_1[6] = (long)FUN_71000ff3e0;
        param_1[7] = 0;
        param_1[0x3d] = lVar11 + lVar12 * lVar2;
        param_1[8] = (long)"NexMatchJointSessionJob::WaitStartRetryJoinMesh";
        return 5;
      }
      pcVar10 = FUN_71000fec40;
      pcVar13 = "NexMatchJointSessionJob::MeshRestart";
      goto LAB_7100100f04;
    }
  }
  else {
    aiStack_80[0] = 0x6445;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_80 | 4));
    aiStack_90[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_80 | 4),(Result *)aiStack_90);
    if ((int)alStack_60[0] == aiStack_80[0]) goto LAB_7100100b78;
    aiStack_90[0] = 0x6444;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_90 | 4));
    aiStack_a0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_90 | 4),(Result *)aiStack_a0);
    if ((int)alStack_60[0] == aiStack_90[0]) goto LAB_7100100b78;
    aiStack_a0[0] = 0x6443;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a0 | 4));
    aiStack_b0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_a0 | 4),(Result *)aiStack_b0);
    if ((int)alStack_60[0] == aiStack_a0[0]) goto LAB_7100100b78;
    aiStack_b0[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
    aiStack_c0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
    if ((int)alStack_60[0] == aiStack_b0[0]) goto LAB_7100100b78;
    aiStack_c0[0] = 0x644a;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_c0 | 4));
    aiStack_d0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_c0 | 4),(Result *)aiStack_d0);
    if ((int)alStack_60[0] == aiStack_c0[0]) goto LAB_7100100b78;
    aiStack_d0[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_d0 | 4));
    auStack_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_d0 | 4),(Result *)auStack_48);
    if (((int)alStack_60[0] == aiStack_d0[0]) && (*(char *)((long)param_1 + 0xfb) == '\0'))
    goto LAB_7100100b78;
  }
  if (*(char *)((long)param_1 + 0xfb) == '\0') {
    aiStack_70[0] = 0x6c05;
    pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
    aiStack_80[0] = 0;
    nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
    if ((int)alStack_60[0] == aiStack_70[0]) {
      uVar9 = 0x27;
    }
    else {
      aiStack_70[0] = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
      aiStack_80[0] = 0;
      nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
      if ((int)alStack_60[0] == aiStack_70[0]) {
        uVar9 = 0x28;
      }
      else {
        aiStack_70[0] = 0x6439;
        pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
        nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
        aiStack_80[0] = 0;
        nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
        if ((int)alStack_60[0] == aiStack_70[0]) {
          uVar9 = 0x29;
        }
        else {
          aiStack_70[0] = 0x643f;
          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
          aiStack_80[0] = 0;
          nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
          if ((int)alStack_60[0] == aiStack_70[0]) {
            uVar9 = 0x2a;
          }
          else {
            aiStack_70[0] = 0x6442;
            pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
            aiStack_80[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
            if ((int)alStack_60[0] == aiStack_70[0]) {
LAB_7100100e04:
              uVar9 = 0x2b;
            }
            else {
              aiStack_70[0] = 0x6445;
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
              aiStack_80[0] = 0;
              nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
              if ((int)alStack_60[0] == aiStack_70[0]) {
LAB_7100100e3c:
                uVar9 = 0x2c;
              }
              else {
                aiStack_70[0] = 0x6443;
                pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                aiStack_80[0] = 0;
                nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                if ((int)alStack_60[0] == aiStack_70[0]) {
LAB_7100100e7c:
                  uVar9 = 0x2d;
                }
                else {
                  aiStack_70[0] = 0x6444;
                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                  aiStack_80[0] = 0;
                  nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                  if ((int)alStack_60[0] != aiStack_70[0]) {
                    aiStack_70[0] = 0x6467;
                    pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                    aiStack_80[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                    if ((int)alStack_60[0] == aiStack_70[0]) goto LAB_7100100e04;
                    aiStack_70[0] = 0x646a;
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                    aiStack_80[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                    if ((int)alStack_60[0] == aiStack_70[0]) goto LAB_7100100e3c;
                    aiStack_70[0] = 0x6468;
                    pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                    aiStack_80[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                    if ((int)alStack_60[0] == aiStack_70[0]) goto LAB_7100100e7c;
                    aiStack_70[0] = 0x6469;
                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                    aiStack_80[0] = 0;
                    nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                    if ((int)alStack_60[0] != aiStack_70[0]) {
                      aiStack_70[0] = 0x644a;
                      pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                      nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                      aiStack_80[0] = 0;
                      nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                      if ((int)alStack_60[0] == aiStack_70[0]) {
                        uVar9 = 0x2f;
                      }
                      else {
                        aiStack_70[0] = 0x6838;
                        nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                        aiStack_80[0] = 0;
                        nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                        if ((int)alStack_60[0] == aiStack_70[0]) {
                          uVar9 = 0x30;
                        }
                        else {
                          aiStack_70[0] = 0x6c3d;
                          pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                          aiStack_80[0] = 0;
                          nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                          if ((int)alStack_60[0] == aiStack_70[0]) {
                            uVar9 = 0x31;
                          }
                          else {
                            aiStack_70[0] = 0x6846;
                            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                            aiStack_80[0] = 0;
                            nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                            if ((int)alStack_60[0] == aiStack_70[0]) {
                              uVar9 = 0x32;
                            }
                            else {
                              aiStack_70[0] = 0x6847;
                              pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                              aiStack_80[0] = 0;
                              nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80);
                              if ((int)alStack_60[0] == aiStack_70[0]) {
                                uVar9 = 0x33;
                              }
                              else {
                                aiStack_70[0] = 0x6848;
                                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                                aiStack_80[0] = 0;
                                nn::err::ErrorResultVariant::operator=(pEVar14,(Result *)aiStack_80)
                                ;
                                if ((int)alStack_60[0] == aiStack_70[0]) {
                                  uVar9 = 0x34;
                                }
                                else {
                                  aiStack_70[0] = 0x6849;
                                  pEVar14 = (ErrorResultVariant *)((ulong)aiStack_70 | 4);
                                  nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                                  aiStack_80[0] = 0;
                                  nn::err::ErrorResultVariant::operator=
                                            (pEVar14,(Result *)aiStack_80);
                                  if ((int)alStack_60[0] == aiStack_70[0]) {
                                    uVar9 = 0x35;
                                  }
                                  else {
                                    aiStack_70[0] = 0x10c3e;
                                    nn::err::ErrorResultVariant::ErrorResultVariant(pEVar14);
                                    aiStack_80[0] = 0;
                                    nn::err::ErrorResultVariant::operator=
                                              (pEVar14,(Result *)aiStack_80);
                                    if ((int)alStack_60[0] == aiStack_70[0]) {
                                      uVar9 = 0x36;
                                    }
                                    else {
                                      aiStack_70[0] = 0x10c26;
                                      nn::err::ErrorResultVariant::ErrorResultVariant
                                                ((ErrorResultVariant *)((ulong)aiStack_70 | 4));
                                      aiStack_80[0] = 0;
                                      nn::err::ErrorResultVariant::operator=
                                                ((ErrorResultVariant *)((ulong)aiStack_70 | 4),
                                                 (Result *)aiStack_80);
                                      if ((int)alStack_60[0] == aiStack_70[0]) {
                                        uVar9 = 0x37;
                                      }
                                      else {
                                        uVar9 = 0x1c;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      goto LAB_7100100eb8;
                    }
                  }
                  uVar9 = 0x2e;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    uVar9 = 6;
  }
LAB_7100100eb8:
  *(undefined1 *)(param_1 + 0x26) = uVar9;
  plVar8 = alStack_60;
  if (*(char *)((long)param_1 + 0xfb) != '\0') {
    plVar8 = param_1 + 0x20;
  }
  FUN_71000bcf30((int *)(param_1 + 0x44),(int *)plVar8);
  FUN_71000d8f90(*(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                          0x168));
  pcVar10 = FUN_71000f7210;
  pcVar13 = "NexMatchJointSessionJob::StartLeaveMesh";
LAB_7100100f04:
  param_1[6] = (long)pcVar10;
  param_1[7] = 0;
  param_1[8] = (long)pcVar13;
  return 5;
}

