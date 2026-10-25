// addr:      71001497f0
// offset:    0x1497f0
// name:      FUN_71001497f0
// mangled:   
// signature: undefined8 __cdecl FUN_71001497f0(long param_1)


undefined8 FUN_71001497f0(long param_1)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  void *__src;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long local_168;
  long local_160;
  undefined4 local_158 [16];
  undefined8 local_118 [8];
  undefined8 local_d8;
  InAppScreenName aIStack_d0 [64];
  undefined8 local_90;
  long local_88;
  long lStack_80;
  int local_78 [6];
  
  plVar5 = *(long **)(DAT_71052adb38 + 8);
  cVar1 = (**(code **)(*plVar5 + 0x80))(plVar5);
  if (cVar1 != '\0') {
    uVar6 = 0;
    do {
      if (*(char *)(param_1 + 0xec) != '\0') break;
      lVar3 = (**(code **)(*plVar5 + 0x78))(plVar5,uVar6);
      FUN_7100191660(local_78,DAT_71052adfc0,lVar3);
      if (local_78[0] == 0) {
        if (*(long *)(lVar3 + 0x78) != 0 || *(long *)(lVar3 + 0x80) != 0) {
          local_88 = *(long *)(lVar3 + 0x78);
          lStack_80 = *(long *)(lVar3 + 0x80);
          uVar2 = FUN_71000bae50(lVar3);
          if (0x3e < uVar2) {
            uVar2 = 0x3f;
          }
          __src = (void *)FUN_71000bae60(lVar3);
          memcpy(aIStack_d0,__src,(ulong)uVar2);
          aIStack_d0[uVar2] = (InAppScreenName)0x0;
          bVar7 = *(byte *)(lVar3 + 0x70);
          if (bVar7 == 0xff) {
            local_118[0] = nn::oe::GetDesiredLanguage();
            local_158[0] = 0;
            uVar8 = nn::settings::operator==((LanguageCode *)local_118,(Language *)local_158);
            bVar7 = 0;
            if ((uVar8 & 1) == 0) {
              bVar7 = 1;
              local_158[0] = 1;
              uVar8 = nn::settings::operator==((LanguageCode *)local_118,(Language *)local_158);
              if ((uVar8 & 1) == 0) {
                bVar7 = 2;
                local_158[0] = 2;
                uVar8 = nn::settings::operator==((LanguageCode *)local_118,(Language *)local_158);
                if ((uVar8 & 1) == 0) {
                  bVar7 = 3;
                  local_158[0] = 3;
                  uVar8 = nn::settings::operator==((LanguageCode *)local_118,(Language *)local_158);
                  if ((uVar8 & 1) == 0) {
                    bVar7 = 4;
                    local_158[0] = 4;
                    uVar8 = nn::settings::operator==
                                      ((LanguageCode *)local_118,(Language *)local_158);
                    if ((uVar8 & 1) == 0) {
                      bVar7 = 5;
                      local_158[0] = 5;
                      uVar8 = nn::settings::operator==
                                        ((LanguageCode *)local_118,(Language *)local_158);
                      if ((uVar8 & 1) == 0) {
                        bVar7 = 6;
                        local_158[0] = 6;
                        uVar8 = nn::settings::operator==
                                          ((LanguageCode *)local_118,(Language *)local_158);
                        if ((uVar8 & 1) == 0) {
                          bVar7 = 7;
                          local_158[0] = 7;
                          uVar8 = nn::settings::operator==
                                            ((LanguageCode *)local_118,(Language *)local_158);
                          if ((uVar8 & 1) == 0) {
                            bVar7 = 8;
                            local_158[0] = 8;
                            uVar8 = nn::settings::operator==
                                              ((LanguageCode *)local_118,(Language *)local_158);
                            if ((uVar8 & 1) == 0) {
                              bVar7 = 9;
                              local_158[0] = 9;
                              uVar8 = nn::settings::operator==
                                                ((LanguageCode *)local_118,(Language *)local_158);
                              if ((uVar8 & 1) == 0) {
                                bVar7 = 10;
                                local_158[0] = 10;
                                uVar8 = nn::settings::operator==
                                                  ((LanguageCode *)local_118,(Language *)local_158);
                                if ((uVar8 & 1) == 0) {
                                  bVar7 = 0xb;
                                  local_158[0] = 0xb;
                                  uVar8 = nn::settings::operator==
                                                    ((LanguageCode *)local_118,(Language *)local_158
                                                    );
                                  if ((uVar8 & 1) == 0) {
                                    bVar7 = 0xc;
                                    local_158[0] = 0xc;
                                    uVar8 = nn::settings::operator==
                                                      ((LanguageCode *)local_118,
                                                       (Language *)local_158);
                                    if ((uVar8 & 1) == 0) {
                                      bVar7 = 0xd;
                                      local_158[0] = 0xd;
                                      uVar8 = nn::settings::operator==
                                                        ((LanguageCode *)local_118,
                                                         (Language *)local_158);
                                      if ((uVar8 & 1) == 0) {
                                        bVar7 = 0xe;
                                        local_158[0] = 0xe;
                                        uVar8 = nn::settings::operator==
                                                          ((LanguageCode *)local_118,
                                                           (Language *)local_158);
                                        if ((uVar8 & 1) == 0) {
                                          bVar7 = 1;
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
          else if (0xe < bVar7) {
            bVar7 = 1;
          }
          local_90 = nn::settings::LanguageCode::Make(bVar7);
          uVar8 = (ulong)*(byte *)(param_1 + 0xa9);
          if (0x3f < uVar8) {
            *(undefined1 *)(param_1 + 0xa9) = 0x3f;
          }
          memcpy(local_118,(void *)(param_1 + 0x58),uVar8);
          *(undefined1 *)((long)local_118 + uVar8) = 0;
          bVar7 = *(byte *)(param_1 + 0xab);
          if (0xe < bVar7) {
            bVar7 = 1;
          }
          local_d8 = nn::settings::LanguageCode::Make(bVar7);
          memcpy(local_158,(void *)(param_1 + 0xac),0x40);
          local_160 = 0;
          FUN_71000bb5d0(&local_160);
          nn::friends::AddPlayHistory
                    ((Uid *)&local_88,(PlayHistoryRegistrationKey *)local_158,
                     (InAppScreenName *)local_118,aIStack_d0);
          local_168 = 0;
          FUN_71000bb5d0(&local_168);
          lVar9 = local_168 - local_160;
          plVar4 = FUN_71000bb680();
          lVar3 = 0;
          if (*plVar4 != 0) {
            lVar3 = lVar9 / *plVar4;
          }
          *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xf0) + lVar3;
        }
      }
      uVar6 = uVar6 + 1;
      uVar2 = (**(code **)(*plVar5 + 0x80))(plVar5);
    } while ((uVar6 & 0xff) < (uVar2 & 0xff));
  }
  memset((void *)(param_1 + 0x58),0,0x51);
  memset((void *)(param_1 + 0xac),0,0x40);
  *(undefined1 *)(param_1 + 0xab) = 0xff;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  *(char **)(param_1 + 0x40) = "AddPlayHistoryJob::PrintProcessTime";
  *(code **)(param_1 + 0x30) = FUN_7100149b90;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 6;
}

