// addr:      7100111430
// offset:    0x111430
// name:      FUN_7100111430
// mangled:   
// signature: undefined FUN_7100111430(void)


undefined8 FUN_7100111430(long param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_40,DAT_71052adfc0);
  aiStack_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
  if (aiStack_40[0] != aiStack_50[0]) {
    if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x208)) {
      if (*(char *)(param_1 + 0xb3) == -3) {
        if (*(char *)(param_1 + 0xc1) != '\0') {
          pcVar7 = FUN_71001a2450;
          uVar5 = 0;
          pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
          goto LAB_71001118b0;
        }
        cVar2 = *(char *)(param_1 + 0xf0);
        if (cVar2 != '\x01') {
          if (cVar2 != '\x02') {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          else {
            cVar3 = *(char *)(param_1 + 0xf1);
          }
          if (cVar3 != '\x01') {
            if (*(char *)(param_1 + 0xf2) != '\x01') {
              if (*(char *)(param_1 + 0xf3) != '\x01') {
                if (*(char *)(param_1 + 0xf4) != '\x01') {
                  if (*(char *)(param_1 + 0xf5) != '\x01') {
                    if (*(char *)(param_1 + 0xf6) != '\x01') {
                      if (*(char *)(param_1 + 0xf7) != '\x01') {
                        if (*(char *)(param_1 + 0xf8) != '\x01') {
                          if (*(char *)(param_1 + 0xf9) != '\x01') {
                            if (*(char *)(param_1 + 0xfa) != '\x01') {
                              if (*(char *)(param_1 + 0xfb) != '\x01') {
                                if (*(char *)(param_1 + 0xfc) != '\x01') {
                                  if (*(char *)(param_1 + 0xfd) != '\x01') {
                                    if (*(char *)(param_1 + 0xfe) != '\x01') {
                                      if (*(char *)(param_1 + 0xff) != '\x01') {
                                        if (*(char *)(param_1 + 0x100) != '\x01') {
                                          if (*(char *)(param_1 + 0x101) != '\x01') {
                                            if (*(char *)(param_1 + 0x102) != '\x01') {
                                              if (*(char *)(param_1 + 0x103) != '\x01') {
                                                if (*(char *)(param_1 + 0x104) != '\x01') {
                                                  if (*(char *)(param_1 + 0x105) != '\x01') {
                                                    if (*(char *)(param_1 + 0x106) != '\x01') {
                                                      if (*(char *)(param_1 + 0x107) != '\x01') {
                                                        if (*(char *)(param_1 + 0x108) != '\x01') {
                                                          if (*(char *)(param_1 + 0x109) != '\x01')
                                                          {
                                                            if (*(char *)(param_1 + 0x10a) != '\x01'
                                                               ) {
                                                              if (*(char *)(param_1 + 0x10b) !=
                                                                  '\x01') {
                                                                if (*(char *)(param_1 + 0x10c) !=
                                                                    '\x01') {
                                                                  if (*(char *)(param_1 + 0x10d) !=
                                                                      '\x01') {
                                                                    if (*(char *)(param_1 + 0x10e)
                                                                        != '\x01') {
                                                                      if (*(char *)(param_1 + 0x10f)
                                                                          != '\x01') {
                                                                        if ((*(char *)(param_1 +
                                                                                      0x10f) !=
                                                                             '\x02') &&
                                                                           (*(char *)(param_1 +
                                                                                     0x10e) !=
                                                                            '\x02' && (*(char *)(
                                                  param_1 + 0x10d) != '\x02' &&
                                                  (*(char *)(param_1 + 0x10c) != '\x02' &&
                                                  (*(char *)(param_1 + 0x10b) != '\x02' &&
                                                  (*(char *)(param_1 + 0x10a) != '\x02' &&
                                                  (*(char *)(param_1 + 0x109) != '\x02' &&
                                                  (*(char *)(param_1 + 0x108) != '\x02' &&
                                                  (*(char *)(param_1 + 0x107) != '\x02' &&
                                                  (*(char *)(param_1 + 0x106) != '\x02' &&
                                                  (*(char *)(param_1 + 0x105) != '\x02' &&
                                                  (*(char *)(param_1 + 0x104) != '\x02' &&
                                                  (*(char *)(param_1 + 0x103) != '\x02' &&
                                                  (*(char *)(param_1 + 0x102) != '\x02' &&
                                                  (*(char *)(param_1 + 0x101) != '\x02' &&
                                                  (*(char *)(param_1 + 0x100) != '\x02' &&
                                                  (*(char *)(param_1 + 0xff) != '\x02' &&
                                                  (*(char *)(param_1 + 0xfe) != '\x02' &&
                                                  (*(char *)(param_1 + 0xfd) != '\x02' &&
                                                  (*(char *)(param_1 + 0xfc) != '\x02' &&
                                                  (*(char *)(param_1 + 0xfb) != '\x02' &&
                                                  (*(char *)(param_1 + 0xfa) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf9) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf8) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf7) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf6) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf5) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf4) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf3) != '\x02' &&
                                                  (*(char *)(param_1 + 0xf2) != '\x02' &&
                                                  (cVar3 != '\x02' && cVar2 != '\x02')))))))))))))))
                                                  )))))))))))))))) {
                                                    return 5;
                                                  }
                                                  pcVar7 = FUN_7100110da0;
                                                  uVar5 = 0;
                                                  pcVar8 = 
                                                  "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti"
                                                  ;
                                                  goto LAB_71001118b0;
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
      }
      pcVar7 = FUN_71001a2310;
      uVar5 = 0;
      pcVar8 = "NexProcessHostMigrationJob::WaitNewHostGreeting";
      goto LAB_71001118b0;
    }
    iVar1 = *(int *)(DAT_71052acd90 + 0x58);
    if (iVar1 != 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (*(int *)((long)plVar6 + 0x14) == 1) {
        FUN_71001d0a10(plVar6);
        plVar6 = *(long **)(param_1 + 0x118);
      }
      FUN_71001d1590(plVar6);
      uVar4 = FUN_710024bec0(*(long *)(DAT_71052acd90 + 0x68),*(long **)(param_1 + 0x118),iVar1,
                             *(ulong *)(param_1 + 0x170));
      if ((uVar4 & 1) != 0) {
        plVar6 = FUN_71000bb680();
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + *plVar6 * 6000;
        pcVar7 = FUN_7100111da0;
        pcVar8 = "NexProcessHostMigrationJob::NexWaitCheckOldHostDisconnection";
        uVar5 = 5;
        goto LAB_71001118b0;
      }
    }
  }
  pcVar7 = FUN_71001a1d80;
  uVar5 = 0;
  pcVar8 = "NexProcessHostMigrationJob::HostMigrationFailure";
LAB_71001118b0:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return uVar5;
}

