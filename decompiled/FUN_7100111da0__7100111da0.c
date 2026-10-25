// addr:      7100111da0
// offset:    0x111da0
// name:      FUN_7100111da0
// mangled:   
// signature: undefined FUN_7100111da0(void)


undefined8 FUN_7100111da0(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  char *pcVar8;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  FUN_7100192e90(aiStack_38,DAT_71052adfc0);
  aiStack_48[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
  if (aiStack_38[0] == aiStack_48[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100111e14:
    pcVar7 = FUN_71001a1d80;
    pcVar8 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_71001121ac;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_7100112188;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar7 = FUN_71001a2450;
    pcVar8 = "NexProcessHostMigrationJob::WaitNewHostFinished";
    goto LAB_71001121ac;
  }
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      cVar2 = *(char *)(param_1 + 0xf1);
    }
    else {
      cVar2 = *(char *)(param_1 + 0xf1);
    }
    if (cVar2 != '\x01') {
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
                                                    if (*(char *)(param_1 + 0x109) != '\x01') {
                                                      if (*(char *)(param_1 + 0x10a) != '\x01') {
                                                        if (*(char *)(param_1 + 0x10b) != '\x01') {
                                                          if (*(char *)(param_1 + 0x10c) != '\x01')
                                                          {
                                                            if (*(char *)(param_1 + 0x10d) != '\x01'
                                                               ) {
                                                              if (*(char *)(param_1 + 0x10e) !=
                                                                  '\x01') {
                                                                if (*(char *)(param_1 + 0x10f) !=
                                                                    '\x01') {
                                                                  if (*(char *)(param_1 + 0x10f) ==
                                                                      '\x02') {
                                                                    plVar5 = *(long **)(param_1 +
                                                                                       0x118);
                                                                    bVar3 = *(int *)((long)plVar5 +
                                                                                    0x14) == 1;
joined_r0x0071001121d8:
                                                                    if (bVar3) {
                                                                      FUN_71001d0a10(plVar5);
                                                                    }
                                                                  }
                                                                  else {
                                                                    plVar5 = *(long **)(param_1 +
                                                                                       0x118);
                                                                    bVar3 = *(int *)((long)plVar5 +
                                                                                    0x14) == 1;
                                                                    if (*(char *)(param_1 + 0x10e)
                                                                        == '\x02' ||
                                                                        (*(char *)(param_1 + 0x10d)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x10c)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x10b)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x10a)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x109)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x108)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x107)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x106)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x105)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x104)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x103)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x102)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x101)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0x100)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xff)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xfe)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xfd)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xfc)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xfb)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xfa)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf9)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf8)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf7)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf6)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf5)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf4)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf3)
                                                                         == '\x02' ||
                                                                        (*(char *)(param_1 + 0xf2)
                                                                         == '\x02' ||
                                                                        (cVar2 == '\x02' ||
                                                                        cVar1 == '\x02')))))))))))))
                                                                        )))))))))))))))))
                                                                    goto joined_r0x0071001121d8;
                                                                    if (bVar3) {
                                                                      return 5;
                                                                    }
                                                                    pcVar7 = FUN_710170d030;
                                                                    if ((int)plVar5[0xb] < 0) {
                                                                      pcVar7 = (code *)0x0;
                                                                    }
                                                                    if (pcVar7 != (code *)0x0) {
                                                                      lVar6 = FUN_71001f16c0(*(long 
                                                  *)(*(long *)(param_1 + 0x170) + 8) + 0x10);
                                                  if ((((lVar6 != 0) &&
                                                       (bVar4 = FUN_71001a35c0(param_1,lVar6),
                                                       lVar6 = DAT_71052ac580, bVar4 < 0x20)) &&
                                                      (*(byte *)(param_1 + 0x86) == bVar4)) &&
                                                     ((*(ulong *)(DAT_71052ac580 + 0x30) <
                                                       *(ulong *)(param_1 + 0x210) &&
                                                      (*(ulong *)(DAT_71052ac580 + 0x30) <
                                                       *(ulong *)(param_1 + 0x58))))) {
                                                    plVar5 = FUN_71000bb680();
                                                    pcVar8 = 
                                                  "NexProcessHostMigrationJob::NexCheckOldHostDisconnection"
                                                  ;
                                                  *(long *)(param_1 + 0x208) =
                                                       *(long *)(lVar6 + 0x30) + *plVar5 * 6000;
                                                  pcVar7 = FUN_7100111430;
                                                  goto LAB_71001121ac;
                                                  }
                                                  goto LAB_7100111e14;
                                                  }
                                                  }
                                                  pcVar7 = FUN_7100110da0;
                                                  pcVar8 = 
                                                  "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti"
                                                  ;
                                                  goto LAB_71001121ac;
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
LAB_7100112188:
  if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
    FUN_71001d0a10(*(long **)(param_1 + 0x118));
  }
  pcVar7 = FUN_71001a2310;
  pcVar8 = "NexProcessHostMigrationJob::WaitNewHostGreeting";
LAB_71001121ac:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return 0;
}

