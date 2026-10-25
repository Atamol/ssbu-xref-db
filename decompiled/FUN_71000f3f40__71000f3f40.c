// addr:      71000f3f40
// offset:    0xf3f40
// name:      FUN_71000f3f40
// mangled:   
// signature: undefined FUN_71000f3f40(void)


undefined8 FUN_71000f3f40(long param_1,int *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  char cVar9;
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_71000bcf30((int *)(param_1 + 0x120),param_2);
  bVar2 = FUN_71001936e0(DAT_71052adfc0);
  if ((bVar2 & 1) != 0) {
    lVar4 = FUN_7100192f60(DAT_71052adfc0);
    uVar3 = FUN_7100151fe0(lVar4);
    if ((uVar3 & 1) != 0) {
      FUN_7100152020(lVar4);
    }
  }
  bVar2 = *(char *)(param_1 + 0x11f) + 1;
  *(byte *)(param_1 + 0x11f) = bVar2;
  if ((1 < bVar2) || (*(char *)(param_1 + 0x11c) != '\0')) goto LAB_71000f3fb4;
  if (*(char *)(param_1 + 0x11d) == '\0') {
    if (*(char *)(param_1 + 0x11a) == '\0') {
      if (*(char *)(param_1 + 0x11b) == '\0') {
        if (*(char *)(param_1 + 0x11e) == '\0') {
          if (*(char *)(param_1 + 0x119) == '\0') {
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
                            ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)auStack_38);
                  if (*param_2 != aiStack_78[0]) goto LAB_71000f3fb4;
                }
              }
            }
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x119) = 1;
            uVar6 = (**(code **)(*DAT_71052acd90 + 0x58))();
            if ((uVar6 & 1) != 0) {
              if (DAT_71052ac6dc != -1) {
                cVar9 = DAT_71052ac6dc + '\x01';
              }
              pcVar7 = "NexMatchJoinSessionJob::CleanupForRetryJoinMesh";
              pcVar8 = FUN_71000f4300;
              uVar5 = 0;
              DAT_71052ac6dc = cVar9;
              goto LAB_71000f3fe0;
            }
            goto LAB_71000f42e4;
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
            uVar6 = (**(code **)(*DAT_71052acd90 + 0x58))();
            if ((uVar6 & 1) != 0) {
              cVar9 = '\x01';
              if (DAT_71052ac6da != -1) {
                cVar9 = DAT_71052ac6da + '\x01';
              }
              pcVar7 = "NexMatchJoinSessionJob::CleanupForRetryJoinMesh";
              pcVar8 = FUN_71000f4300;
              uVar5 = 0;
              DAT_71052ac6da = cVar9;
              goto LAB_71000f3fe0;
            }
            goto LAB_71000f42e4;
          }
        }
LAB_71000f3fb4:
        puVar1 = (undefined8 *)(DAT_71052adb38 + 0xb8);
        *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
        FUN_7100150b70((long *)*puVar1);
        pcVar8 = FUN_710013f360;
        uVar5 = 5;
        pcVar7 = "NexMatchJoinSessionJob::MeshCleanup";
        goto LAB_71000f3fe0;
      }
      uVar6 = (**(code **)(*DAT_71052acd90 + 0x58))();
      if ((uVar6 & 1) != 0) {
        cVar9 = '\x01';
        if (DAT_71052ac6df != -1) {
          cVar9 = DAT_71052ac6df + '\x01';
        }
        pcVar7 = "NexMatchJoinSessionJob::CleanupForRetryJoinMesh";
        pcVar8 = FUN_71000f4300;
        uVar5 = 0;
        DAT_71052ac6df = cVar9;
        goto LAB_71000f3fe0;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_71052acd90 + 0x58))();
      if ((uVar6 & 1) != 0) {
        cVar9 = '\x01';
        if (DAT_71052ac6de != -1) {
          cVar9 = DAT_71052ac6de + '\x01';
        }
        pcVar7 = "NexMatchJoinSessionJob::CleanupForRetryJoinMesh";
        pcVar8 = FUN_71000f4300;
        uVar5 = 0;
        DAT_71052ac6de = cVar9;
        goto LAB_71000f3fe0;
      }
    }
  }
  else {
    uVar6 = (**(code **)(*DAT_71052acd90 + 0x58))();
    if ((uVar6 & 1) != 0) {
      cVar9 = '\x01';
      if (DAT_71052ac6dd != -1) {
        cVar9 = DAT_71052ac6dd + '\x01';
      }
      pcVar7 = "NexMatchJoinSessionJob::CleanupForRetryJoinMesh";
      pcVar8 = FUN_71000f4300;
      uVar5 = 0;
      DAT_71052ac6dd = cVar9;
      goto LAB_71000f3fe0;
    }
  }
LAB_71000f42e4:
  pcVar8 = FUN_71000f4300;
  uVar5 = 0;
  pcVar7 = "NexMatchJoinSessionJob::CleanupForRetryJoinMesh";
LAB_71000f3fe0:
  *(code **)(param_1 + 0x30) = pcVar8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar5;
}

