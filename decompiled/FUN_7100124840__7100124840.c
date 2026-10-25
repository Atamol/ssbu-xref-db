// addr:      7100124840
// offset:    0x124840
// name:      FUN_7100124840
// mangled:   
// signature: ulong __cdecl FUN_7100124840(long param_1)


ulong FUN_7100124840(long param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  char *pcVar8;
  long lVar9;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  FUN_7100192e90(local_40,DAT_71052adfc0);
  local_50[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
  if (local_40[0] == local_50[0]) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar6 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a1d80;
    pcVar8 = "LanProcessHostMigrationJob::HostMigrationFailure";
  }
  else if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x1a8)) {
    uVar5 = 0x640000;
    if (*(char *)(param_1 + 0xc4) == '\0') {
LAB_7100124ba0:
      uVar6 = 4;
      goto LAB_7100124b88;
    }
    if ((*(char *)(param_1 + 0xb3) == -3) && (cVar1 = *(char *)(param_1 + 0xf0), cVar1 != '\x01')) {
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
                                    if ((*(char *)(param_1 + 0xff) == '\x02') ||
                                       (*(char *)(param_1 + 0xfe) == '\x02' ||
                                        (*(char *)(param_1 + 0xfd) == '\x02' ||
                                        (*(char *)(param_1 + 0xfc) == '\x02' ||
                                        (*(char *)(param_1 + 0xfb) == '\x02' ||
                                        (*(char *)(param_1 + 0xfa) == '\x02' ||
                                        (*(char *)(param_1 + 0xf9) == '\x02' ||
                                        (*(char *)(param_1 + 0xf8) == '\x02' ||
                                        (*(char *)(param_1 + 0xf7) == '\x02' ||
                                        (*(char *)(param_1 + 0xf6) == '\x02' ||
                                        (*(char *)(param_1 + 0xf5) == '\x02' ||
                                        (*(char *)(param_1 + 0xf4) == '\x02' ||
                                        (*(char *)(param_1 + 0xf3) == '\x02' ||
                                        (*(char *)(param_1 + 0xf2) == '\x02' ||
                                        (cVar2 == '\x02' || cVar1 == '\x02'))))))))))))))) {
                                      *(undefined8 *)(param_1 + 0x38) = 0;
                                      uVar6 = 0;
                                      *(code **)(param_1 + 0x30) = FUN_7100124bb0;
                                      pcVar8 = 
                                      "LanProcessHostMigrationJob::LanPrepareForBecomingHostMulti";
                                      goto LAB_7100124b84;
                                    }
                                    goto LAB_7100124ba0;
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
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar6 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001a2310;
    pcVar8 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
  }
  else {
    lVar9 = *(long *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    FUN_71000b40e0((int *)(param_1 + 0x118));
    iVar3 = FUN_710011be40(lVar9);
    FUN_710011b2f0(local_40,lVar9,(int *)(param_1 + 0x118),iVar3);
    if (local_40[0] == 0) {
      if (*(char *)(param_1 + 0xc4) == '\0') {
        pcVar7 = FUN_71001254c0;
        pcVar8 = "LanProcessHostMigrationJob::LanWaitCheckOldHostDisconnection";
      }
      else {
        plVar4 = FUN_71000bb680();
        pcVar8 = "LanProcessHostMigrationJob::LanWaitCheckOldHostDisconnection";
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + *plVar4 * 2000;
        pcVar7 = FUN_71001254c0;
      }
    }
    else {
      pcVar7 = FUN_71001a1d80;
      pcVar8 = "LanProcessHostMigrationJob::HostMigrationFailure";
    }
    *(code **)(param_1 + 0x30) = pcVar7;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar6 = 5;
  }
LAB_7100124b84:
  uVar5 = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
LAB_7100124b88:
  return uVar5 | uVar6;
}

