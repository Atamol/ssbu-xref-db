// addr:      7100186b50
// offset:    0x186b50
// name:      FUN_7100186b50
// mangled:   
// signature: undefined FUN_7100186b50(void)


undefined8 FUN_7100186b50(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
  lVar3 = FUN_7100193a40(DAT_71052adfc0);
  uVar4 = FUN_71001adfc0(lVar3,*(int *)((long)param_1 + 100));
  if ((uVar4 & 1) == 0) {
    param_1[6] = (long)FUN_7100187090;
    param_1[7] = 0;
    pcVar7 = "ConnectStationJob::WaitForConnection";
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  else {
    piVar8 = (int *)param_1[0xd];
    if ((piVar8 != (int *)0x0) && ((char)piVar8[10] != '\0')) {
      if (2 < *piVar8 - 2U) {
        FUN_71000b4260(piVar8);
      }
      param_1[0xd] = 0;
      plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
      FUN_71001ae030(plVar5,*(int *)((long)param_1 + 100));
      lVar3 = param_1[0xe];
      *(undefined4 *)((long)param_1 + 100) = 0;
      if (lVar3 == 0) {
        return 1;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
joined_r0x007100186e38:
      if (iVar1 != 4) {
        return 1;
      }
      *(undefined4 *)(lVar3 + 0x48) = 6;
      return 1;
    }
    if (*(ulong *)(DAT_71052ac580 + 0x30) < (ulong)param_1[0xb]) {
      uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(param_1[0xe] + 0x48) == 5) {
          plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
          FUN_71001ae030(plVar5,*(int *)((long)param_1 + 100));
          *(undefined4 *)((long)param_1 + 100) = 0;
          param_1[6] = (long)FUN_7100186f80;
          param_1[7] = 0;
          pcVar7 = "ConnectStationJob::ConnectionSucceeded";
          goto LAB_7100186cfc;
        }
        cVar2 = *(char *)((long)param_1 + 0x79);
        if (cVar2 == '\0') {
          return 5;
        }
        piVar8 = (int *)param_1[0xd];
        if (piVar8 != (int *)0x0) {
          if (2 < *piVar8 - 2U) {
            if (cVar2 == '\x02') {
              if (*(int *)((long)param_1 + 0x7c) < 1) {
                if (*(int *)((long)param_1 + 0x7c) < 0) {
                  aiStack_48[0] = 0x6470;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
                  aiStack_58[0] = 0;
                  nn::err::ErrorResultVariant::operator=
                            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
                  FUN_71000bce50(aiStack_88,aiStack_48);
                  piVar6 = aiStack_88;
                }
                else {
                  aiStack_48[0] = 0x10c26;
                  nn::err::ErrorResultVariant::ErrorResultVariant
                            ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
                  aiStack_58[0] = 0;
                  nn::err::ErrorResultVariant::operator=
                            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
                  FUN_71000bce50(aiStack_98,aiStack_48);
                  piVar6 = aiStack_98;
                }
              }
              else {
                aiStack_48[0] = 0x646f;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
                aiStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
                FUN_71000bce50(aiStack_78,aiStack_48);
                piVar6 = aiStack_78;
              }
            }
            else if (cVar2 == '\x01') {
              aiStack_48[0] = 0xc25;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
              aiStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
              FUN_71000bce50(aiStack_68,aiStack_48);
              piVar6 = aiStack_68;
            }
            else {
              aiStack_48[0] = 0xc24;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
              aiStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
              FUN_71000bce50(aiStack_a8,aiStack_48);
              piVar6 = aiStack_a8;
            }
            FUN_71000b41f0(piVar8,piVar6);
          }
          param_1[0xd] = 0;
        }
        plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
        FUN_71001ae030(plVar5,*(int *)((long)param_1 + 100));
        lVar3 = param_1[0xe];
        *(undefined4 *)((long)param_1 + 100) = 0;
        if (lVar3 == 0) {
          return 1;
        }
        iVar1 = *(int *)(lVar3 + 0x48);
        goto joined_r0x007100186e38;
      }
    }
    else if (piVar8 != (int *)0x0) {
      if (2 < *piVar8 - 2U) {
        aiStack_58[0] = 0x6c0e;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_38);
        FUN_71000bce50(aiStack_48,aiStack_58);
        FUN_71000b41f0(piVar8,aiStack_48);
      }
      param_1[0xd] = 0;
    }
    plVar5 = (long *)FUN_7100193a40(DAT_71052adfc0);
    FUN_71001ae030(plVar5,*(int *)((long)param_1 + 100));
    *(undefined4 *)((long)param_1 + 100) = 0;
    param_1[6] = (long)FUN_7100186ed0;
    param_1[7] = 0;
    pcVar7 = "ConnectStationJob::ConnectionFailed";
  }
LAB_7100186cfc:
  param_1[8] = (long)pcVar7;
  return 0;
}

