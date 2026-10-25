// addr:      7100124370
// offset:    0x124370
// name:      FUN_7100124370
// mangled:   
// signature: undefined FUN_7100124370(void)


undefined8 FUN_7100124370(long param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  byte bVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  char *pcVar22;
  long *plVar23;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  plVar23 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar18 = FUN_710011b3c0((long)plVar23);
  if (((uVar18 & 1) == 0) || (*(int *)(param_1 + 0x118) == 1)) {
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    aiStack_50[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    if ((aiStack_40[0] != aiStack_50[0]) &&
       (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
    FUN_710011b450(aiStack_40,(long)plVar23);
    pcVar21 = FUN_71001a1d80;
    uVar19 = 5;
    pcVar22 = "LanProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100124678;
  }
  if ((*(char *)(param_1 + 0xb3) == -3) && (cVar1 = *(char *)(param_1 + 0xf0), cVar1 != '\x01')) {
    if (cVar1 != '\x02') {
      cVar2 = *(char *)(param_1 + 0xf1);
    }
    else {
      cVar2 = *(char *)(param_1 + 0xf1);
    }
    if (cVar2 != '\x01') {
      cVar3 = *(char *)(param_1 + 0xf2);
      if (cVar3 != '\x01') {
        cVar4 = *(char *)(param_1 + 0xf3);
        if (cVar4 != '\x01') {
          cVar5 = *(char *)(param_1 + 0xf4);
          if (cVar5 != '\x01') {
            cVar6 = *(char *)(param_1 + 0xf5);
            if (cVar6 != '\x01') {
              cVar7 = *(char *)(param_1 + 0xf6);
              if (cVar7 != '\x01') {
                cVar8 = *(char *)(param_1 + 0xf7);
                if (cVar8 != '\x01') {
                  cVar9 = *(char *)(param_1 + 0xf8);
                  if (cVar9 != '\x01') {
                    cVar10 = *(char *)(param_1 + 0xf9);
                    if (cVar10 != '\x01') {
                      cVar11 = *(char *)(param_1 + 0xfa);
                      if (cVar11 != '\x01') {
                        cVar12 = *(char *)(param_1 + 0xfb);
                        if (cVar12 != '\x01') {
                          cVar13 = *(char *)(param_1 + 0xfc);
                          if (cVar13 != '\x01') {
                            cVar14 = *(char *)(param_1 + 0xfd);
                            if (cVar14 != '\x01') {
                              cVar15 = *(char *)(param_1 + 0xfe);
                              if (cVar15 != '\x01') {
                                cVar16 = *(char *)(param_1 + 0xff);
                                if (cVar16 != '\x01') {
                                  lVar20 = (**(code **)(*plVar23 + 0xf0))(plVar23);
                                  if (lVar20 != -1) {
                                    lVar20 = (**(code **)(*plVar23 + 0xf0))(plVar23);
                                    bVar17 = FUN_71001a35c0(param_1,lVar20);
                                    lVar20 = DAT_71052ac580;
                                    if ((0x1f < bVar17) || (bVar17 != *(byte *)(param_1 + 0x86))) {
                                      pcVar21 = FUN_71001a1d80;
                                      uVar19 = 0;
                                      pcVar22 = "LanProcessHostMigrationJob::HostMigrationFailure";
                                      goto LAB_7100124678;
                                    }
                                    if ((cVar16 != '\x02' &&
                                        (cVar15 != '\x02' &&
                                        (cVar14 != '\x02' &&
                                        (cVar13 != '\x02' &&
                                        (cVar12 != '\x02' &&
                                        (cVar11 != '\x02' &&
                                        (cVar10 != '\x02' &&
                                        (cVar9 != '\x02' &&
                                        (cVar8 != '\x02' &&
                                        (cVar7 != '\x02' &&
                                        (cVar6 != '\x02' &&
                                        (cVar5 != '\x02' &&
                                        (cVar4 != '\x02' &&
                                        (cVar3 != '\x02' && (cVar2 != '\x02' && cVar1 != '\x02')))))
                                        )))))))))) && *(char *)(param_1 + 0x1a0) == '\0') {
                                      plVar23 = FUN_71000bb680();
                                      *(long *)(param_1 + 0x1a8) =
                                           *(long *)(lVar20 + 0x30) + *plVar23 * 2000;
                                      pcVar21 = FUN_7100124840;
                                      pcVar22 = 
                                      "LanProcessHostMigrationJob::LanCheckOldHostDisconnection";
                                      uVar19 = 5;
                                      goto LAB_7100124678;
                                    }
                                  }
                                  pcVar21 = FUN_7100124bb0;
                                  uVar19 = 0;
                                  pcVar22 = 
                                  "LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti";
                                  goto LAB_7100124678;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar21 = FUN_71001a2310;
  uVar19 = 0;
  pcVar22 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
LAB_7100124678:
  *(code **)(param_1 + 0x30) = pcVar21;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar22;
  return uVar19;
}

