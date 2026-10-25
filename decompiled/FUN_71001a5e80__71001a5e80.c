// addr:      71001a5e80
// offset:    0x1a5e80
// name:      FUN_71001a5e80
// mangled:   
// signature: undefined FUN_71001a5e80(void)


undefined8 FUN_71001a5e80(long param_1)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ErrorResultVariant *this;
  undefined1 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar4 = FUN_7100193560(DAT_71052adfc0);
    plVar7 = (long *)(ulong)bVar4;
    if (bVar4 < 0x20) {
      if (*(short *)(param_1 + 0xd6) != 0) {
        uVar12 = *(ulong *)(param_1 + 0xe0);
        bVar2 = false;
        uVar11 = *(ulong *)(DAT_71052ac580 + 0x30);
        lVar16 = 0;
        uVar15 = 0;
        bVar6 = false;
        bVar5 = 0;
        this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
        do {
          uVar10 = (uint)*(byte *)(*(long *)(param_1 + 0xb0) + uVar15);
          if (uVar10 != bVar4) {
            bVar1 = *(byte *)(*(long *)(param_1 + 0xd8) + uVar15);
            if (bVar1 - 1 < 0x10) {
              bVar5 = 1;
              plVar7 = (long *)FUN_71001a6860(plVar7,uVar10,bVar1,1);
              bVar6 = true;
            }
            else {
              plVar7 = (long *)FUN_7100161fa0(DAT_71052add68);
              plVar7 = (long *)(**(code **)(*plVar7 + 0x48))
                                         (plVar7,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar15)
                                         );
              plVar8 = plVar7;
              if (plVar7 == (long *)0x0) {
                plVar7 = (long *)FUN_7100161fb0(DAT_71052add68);
                plVar8 = (long *)(**(code **)(*plVar7 + 0x38))
                                           (plVar7,*(long *)(param_1 + 0xa8) + lVar16);
                plVar7 = (long *)0x0;
                if (plVar8 != (long *)0x0) {
                  if ((int)plVar8[9] == 5) {
                    bVar2 = (bool)(bVar2 | 0x1f < *(byte *)(plVar8 + 7));
                  }
                  FUN_710015e540((long)plVar8,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar15));
                  uVar9 = FUN_71001602c0(*(long *)(param_1 + 0xa8) + lVar16);
                  FUN_710015e550((long)plVar8,uVar9);
                  plVar7 = (long *)FUN_710015e7d0(aiStack_78,(long)plVar8);
                }
              }
              bVar1 = *(byte *)(param_1 + (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar15) +
                               0x80);
              uVar14 = (ulong)bVar1;
              if ((ushort)bVar1 < *(ushort *)(param_1 + 0xa0)) {
                if (*(int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30) - 2U < 3) {
                  plVar7 = (long *)FUN_71000bce50(aiStack_78,
                                                  (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30
                                                         + 4));
                  if (aiStack_78[0] == 0) {
                    *(undefined1 *)
                     (param_1 + (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar15) + 0x80) = 0xff;
                    bVar6 = (bool)(bVar6 | plVar8 == (long *)0x0);
                    goto LAB_71001a6540;
                  }
                  FUN_71000bce50(aiStack_78,(int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4));
                  aiStack_88[0] = 0x6c05;
                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                  auStack_68[0] = 0;
                  uVar9 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                  if (aiStack_78[0] == aiStack_88[0]) {
LAB_71001a6134:
                    uVar13 = 1;
                  }
                  else {
                    FUN_71000bce50(aiStack_78,(int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4)
                                  );
                    aiStack_88[0] = 0x643f;
                    nn::err::ErrorResultVariant::ErrorResultVariant(this);
                    auStack_68[0] = 0;
                    uVar9 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                    if (aiStack_78[0] == aiStack_88[0]) {
                      uVar13 = 2;
                    }
                    else {
                      FUN_71000bce50(aiStack_78,
                                     (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4));
                      aiStack_88[0] = 0x6442;
                      nn::err::ErrorResultVariant::ErrorResultVariant(this);
                      auStack_68[0] = 0;
                      uVar9 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                      if (aiStack_78[0] == aiStack_88[0]) {
                        uVar13 = 3;
                      }
                      else {
                        FUN_71000bce50(aiStack_78,
                                       (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4));
                        aiStack_88[0] = 0x6443;
                        nn::err::ErrorResultVariant::ErrorResultVariant(this);
                        auStack_68[0] = 0;
                        uVar9 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                        uVar13 = 5;
                        if (aiStack_78[0] != aiStack_88[0]) {
                          FUN_71000bce50(aiStack_78,
                                         (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4));
                          aiStack_88[0] = 0x6444;
                          nn::err::ErrorResultVariant::ErrorResultVariant(this);
                          auStack_68[0] = 0;
                          uVar9 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                          if (aiStack_78[0] == aiStack_88[0]) {
                            uVar13 = 6;
                          }
                          else {
                            FUN_71000bce50(aiStack_78,
                                           (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4));
                            aiStack_88[0] = 0x6445;
                            nn::err::ErrorResultVariant::ErrorResultVariant(this);
                            auStack_68[0] = 0;
                            uVar9 = nn::err::ErrorResultVariant::operator=
                                              (this,(Result *)auStack_68);
                            if (aiStack_78[0] == aiStack_88[0]) {
                              uVar13 = 7;
                            }
                            else {
                              FUN_71000bce50(aiStack_78,
                                             (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4))
                              ;
                              aiStack_88[0] = 0x644a;
                              nn::err::ErrorResultVariant::ErrorResultVariant(this);
                              auStack_68[0] = 0;
                              uVar9 = nn::err::ErrorResultVariant::operator=
                                                (this,(Result *)auStack_68);
                              if (aiStack_78[0] == aiStack_88[0]) {
                                uVar13 = 8;
                              }
                              else {
                                FUN_71000bce50(aiStack_78,
                                               (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 + 4
                                                      ));
                                aiStack_88[0] = 0x6c0e;
                                nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                auStack_68[0] = 0;
                                uVar9 = nn::err::ErrorResultVariant::operator=
                                                  (this,(Result *)auStack_68);
                                uVar13 = 9;
                                if (aiStack_78[0] != aiStack_88[0]) {
                                  FUN_71000bce50(aiStack_78,
                                                 (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30 +
                                                        4));
                                  aiStack_88[0] = 0x6467;
                                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                  auStack_68[0] = 0;
                                  uVar9 = nn::err::ErrorResultVariant::operator=
                                                    (this,(Result *)auStack_68);
                                  uVar13 = 10;
                                  if (aiStack_78[0] != aiStack_88[0]) {
                                    FUN_71000bce50(aiStack_78,
                                                   (int *)(*(long *)(param_1 + 0x78) + uVar14 * 0x30
                                                          + 4));
                                    aiStack_88[0] = 0x6468;
                                    nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                    auStack_68[0] = 0;
                                    uVar9 = nn::err::ErrorResultVariant::operator=
                                                      (this,(Result *)auStack_68);
                                    uVar13 = 0xb;
                                    if (aiStack_78[0] != aiStack_88[0]) {
                                      FUN_71000bce50(aiStack_78,
                                                     (int *)(*(long *)(param_1 + 0x78) +
                                                             uVar14 * 0x30 + 4));
                                      aiStack_88[0] = 0x6469;
                                      nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                      auStack_68[0] = 0;
                                      uVar9 = nn::err::ErrorResultVariant::operator=
                                                        (this,(Result *)auStack_68);
                                      if (aiStack_78[0] == aiStack_88[0]) {
                                        uVar13 = 0xc;
                                      }
                                      else {
                                        FUN_71000bce50(aiStack_78,
                                                       (int *)(*(long *)(param_1 + 0x78) +
                                                               uVar14 * 0x30 + 4));
                                        aiStack_88[0] = 0x646a;
                                        nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                        auStack_68[0] = 0;
                                        uVar9 = nn::err::ErrorResultVariant::operator=
                                                          (this,(Result *)auStack_68);
                                        uVar13 = 0xd;
                                        if (aiStack_78[0] != aiStack_88[0]) {
                                          uVar9 = FUN_71000bce50(aiStack_78,
                                                                 (int *)(*(long *)(param_1 + 0x78) +
                                                                         uVar14 * 0x30 + 4));
                                          goto LAB_71001a6134;
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
                  plVar7 = (long *)FUN_71001a6860(uVar9,(uint)*(byte *)(*(long *)(param_1 + 0xb0) +
                                                                       uVar15),uVar13,0);
                  if (uVar12 < uVar11) {
                    plVar7 = (long *)FUN_7100193580(DAT_71052adfc0);
                    bVar5 = FUN_7100193110(DAT_71052adfc0);
                    FUN_7100199a50(plVar7,(uint)bVar5,
                                   *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar15),bVar4,uVar13,
                                   *(undefined4 *)(param_1 + 0xf0));
                    lVar3 = DAT_71052ac580;
                    plVar7 = FUN_71000bb680();
                    *(long *)(param_1 + 0xe0) = *(long *)(lVar3 + 0x30) + *plVar7 * 500;
                  }
                  bVar5 = 1;
                }
              }
              else if (plVar8 != (long *)0x0) {
                if ((int)plVar8[9] != 5) {
                  bVar6 = true;
                }
                goto LAB_71001a6540;
              }
              bVar6 = true;
            }
          }
LAB_71001a6540:
          uVar15 = uVar15 + 1;
          lVar16 = lVar16 + 0x80;
        } while (uVar15 < *(ushort *)(param_1 + 0xd6));
        if ((*(char *)(param_1 + 0xf6) != '\0') && (!(bool)(bVar5 ^ 1))) goto LAB_71001a5f68;
        if (bVar6) {
          if (bVar2) {
            FUN_7100162430(DAT_71052add68);
          }
          return 5;
        }
        if (*(ushort *)(param_1 + 0xd6) != 0) {
          uVar15 = 0;
          do {
            bVar6 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(*(long *)(param_1 + 0xb0) + uVar15));
            if (!bVar6) {
              FUN_7100192f70(DAT_71052adfc0,(uint)*(byte *)(*(long *)(param_1 + 0xb0) + uVar15));
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(ushort *)(param_1 + 0xd6));
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined1 *)(param_1 + 0xf4) = 0;
      *(undefined1 *)(param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      return 1;
    }
  }
  else {
    aiStack_78[0] = 0x6c0e;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4));
    aiStack_88[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)aiStack_88);
    FUN_71000bcf30((int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c),aiStack_78);
  }
LAB_71001a5f68:
  *(code **)(param_1 + 0x30) = FUN_71001a65f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessUpdateMeshJob::UpdateFailed";
  return 0;
}

