// addr:      7100109430
// offset:    0x109430
// name:      FUN_7100109430
// mangled:   
// signature: undefined FUN_7100109430(void)


undefined8 FUN_7100109430(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  char cVar7;
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
  if (*(char *)(param_1 + 0x7f) == '\0') {
    if (*(char *)(param_1 + 0x68) == '\0') {
      bVar2 = *(char *)(param_1 + 0x82) + 1;
      *(byte *)(param_1 + 0x82) = bVar2;
      if (1 < bVar2) goto LAB_710010945c;
      if (*(char *)(param_1 + 0x80) == '\0') {
        if (*(char *)(param_1 + 0x7d) == '\0') {
          if (*(char *)(param_1 + 0x7e) == '\0') {
            if (*(char *)(param_1 + 0x81) == '\0') {
              if (*(char *)(param_1 + 0x7c) == '\0') {
                aiStack_48[0] = 0x643f;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
                aiStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
                if (*param_2 != aiStack_48[0]) {
                  aiStack_58[0] = 0x6445;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
                  aiStack_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=
                            ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
                  if (*param_2 != aiStack_58[0]) {
                    aiStack_68[0] = 0x6444;
                    nn::err::ErrorResultVariant::ErrorResultVariant
                              ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                    aiStack_78[0] = 0;
                    nn::err::ErrorResultVariant::operator=
                              ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)aiStack_78);
                    if (*param_2 != aiStack_68[0]) {
                      aiStack_78[0] = 0x6443;
                      nn::err::ErrorResultVariant::ErrorResultVariant
                                ((ErrorResultVariant *)((ulong)aiStack_78 | 4));
                      auStack_38[0] = 0;
                      nn::err::ErrorResultVariant::operator=
                                ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_38)
                      ;
                      if (*param_2 != aiStack_78[0]) goto LAB_710010945c;
                    }
                  }
                }
                cVar7 = '\x01';
                *(undefined1 *)(param_1 + 0x7c) = 1;
                uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
                if ((uVar4 & 1) != 0) {
                  if (DAT_71052ac6dc != -1) {
                    cVar7 = DAT_71052ac6dc + '\x01';
                  }
                  pcVar5 = "NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh";
                  pcVar6 = FUN_71001097d0;
                  uVar3 = 0;
                  DAT_71052ac6dc = cVar7;
                  goto LAB_71001094a8;
                }
                goto LAB_7100109494;
              }
            }
            else {
              aiStack_48[0] = 0x644a;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
              aiStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
              if (*param_2 == aiStack_48[0]) {
                uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
                if ((uVar4 & 1) != 0) {
                  cVar7 = '\x01';
                  if (DAT_71052ac6da != -1) {
                    cVar7 = DAT_71052ac6da + '\x01';
                  }
                  pcVar5 = "NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh";
                  pcVar6 = FUN_71001097d0;
                  uVar3 = 0;
                  DAT_71052ac6da = cVar7;
                  goto LAB_71001094a8;
                }
                goto LAB_7100109494;
              }
            }
            goto LAB_710010945c;
          }
          uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
          if ((uVar4 & 1) != 0) {
            cVar7 = '\x01';
            if (DAT_71052ac6df != -1) {
              cVar7 = DAT_71052ac6df + '\x01';
            }
            pcVar5 = "NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh";
            pcVar6 = FUN_71001097d0;
            uVar3 = 0;
            DAT_71052ac6df = cVar7;
            goto LAB_71001094a8;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
          if ((uVar4 & 1) != 0) {
            cVar7 = '\x01';
            if (DAT_71052ac6de != -1) {
              cVar7 = DAT_71052ac6de + '\x01';
            }
            pcVar5 = "NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh";
            pcVar6 = FUN_71001097d0;
            uVar3 = 0;
            DAT_71052ac6de = cVar7;
            goto LAB_71001094a8;
          }
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_71052acd90 + 0x58))();
        if ((uVar4 & 1) != 0) {
          cVar7 = '\x01';
          if (DAT_71052ac6dd != -1) {
            cVar7 = DAT_71052ac6dd + '\x01';
          }
          pcVar5 = "NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh";
          pcVar6 = FUN_71001097d0;
          uVar3 = 0;
          DAT_71052ac6dd = cVar7;
          goto LAB_71001094a8;
        }
      }
    }
LAB_7100109494:
    pcVar6 = FUN_71001097d0;
    uVar3 = 0;
    pcVar5 = "NexMatchRandomMatchmakeJob::CleanupForRetryJoinMesh";
  }
  else {
LAB_710010945c:
    puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
    *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
    FUN_7100150b70((long *)*puVar1);
    pcVar6 = FUN_71001082f0;
    uVar3 = 5;
    pcVar5 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  }
LAB_71001094a8:
  *(code **)(param_1 + 0x30) = pcVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

