// addr:      71001a5780
// offset:    0x1a5780
// name:      FUN_71001a5780
// mangled:   
// signature: undefined FUN_71001a5780(void)


undefined8 FUN_71001a5780(long param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  ulong uVar14;
  ErrorResultVariant *this;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  int aiStack_88 [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar6 = FUN_7100193560(DAT_71052adfc0);
    plVar8 = (long *)(ulong)bVar6;
    if (bVar6 < 0x20) {
      if (*(short *)(param_1 + 0xd6) != 0) {
        uVar14 = *(ulong *)(param_1 + 0xe0);
        bVar4 = false;
        uVar12 = *(ulong *)(DAT_71052ac580 + 0x30);
        lVar18 = 0;
        uVar17 = 0;
        bVar3 = false;
        bVar2 = false;
        this = (ErrorResultVariant *)((ulong)aiStack_88 | 4);
        do {
          uVar11 = (uint)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
          if (uVar11 != bVar6) {
            cVar1 = *(char *)(*(long *)(param_1 + 0xd8) + uVar17);
            if (cVar1 == '\0') {
              plVar8 = (long *)FUN_7100161fa0(DAT_71052add68);
              plVar8 = (long *)(**(code **)(*plVar8 + 0x48))
                                         (plVar8,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar17)
                                         );
              plVar9 = plVar8;
              if (plVar8 == (long *)0x0) {
                plVar8 = (long *)FUN_7100161fb0(DAT_71052add68);
                plVar9 = (long *)(**(code **)(*plVar8 + 0x38))
                                           (plVar8,*(long *)(param_1 + 0xa8) + lVar18);
                plVar8 = (long *)0x0;
                if (plVar9 != (long *)0x0) {
                  if ((int)plVar9[9] == 5) {
                    bVar2 = (bool)(bVar2 | 0x1f < *(byte *)(plVar9 + 7));
                  }
                  FUN_710015e540((long)plVar9,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar17));
                  uVar10 = FUN_71001602c0(*(long *)(param_1 + 0xa8) + lVar18);
                  FUN_710015e550((long)plVar9,uVar10);
                  plVar8 = (long *)FUN_710015e7d0(aiStack_78,(long)plVar9);
                }
              }
              bVar7 = *(byte *)(param_1 + (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17) +
                               0x80);
              uVar16 = (ulong)bVar7;
              if ((ushort)bVar7 < *(ushort *)(param_1 + 0xa0)) {
                if (*(int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30) - 2U < 3) {
                  plVar8 = (long *)FUN_71000bce50(aiStack_78,
                                                  (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30
                                                         + 4));
                  if (aiStack_78[0] == 0) {
                    *(undefined1 *)
                     (param_1 + (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17) + 0x80) = 0xff;
                  }
                  else {
                    FUN_71000bce50(aiStack_78,(int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4)
                                  );
                    aiStack_88[0] = 0x6c05;
                    nn::err::ErrorResultVariant::ErrorResultVariant(this);
                    auStack_68[0] = 0;
                    uVar10 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                    uVar15 = 0x11;
                    if (aiStack_78[0] != aiStack_88[0]) {
                      FUN_71000bce50(aiStack_78,
                                     (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4));
                      aiStack_88[0] = 0x643f;
                      nn::err::ErrorResultVariant::ErrorResultVariant(this);
                      auStack_68[0] = 0;
                      uVar10 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                      uVar15 = 0x12;
                      if (aiStack_78[0] != aiStack_88[0]) {
                        FUN_71000bce50(aiStack_78,
                                       (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4));
                        aiStack_88[0] = 0x6442;
                        nn::err::ErrorResultVariant::ErrorResultVariant(this);
                        auStack_68[0] = 0;
                        uVar10 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                        uVar15 = 0x13;
                        if (aiStack_78[0] != aiStack_88[0]) {
                          FUN_71000bce50(aiStack_78,
                                         (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4));
                          aiStack_88[0] = 0x6443;
                          nn::err::ErrorResultVariant::ErrorResultVariant(this);
                          auStack_68[0] = 0;
                          uVar10 = nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68)
                          ;
                          uVar15 = 0x15;
                          if (aiStack_78[0] != aiStack_88[0]) {
                            FUN_71000bce50(aiStack_78,
                                           (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4));
                            aiStack_88[0] = 0x6444;
                            nn::err::ErrorResultVariant::ErrorResultVariant(this);
                            auStack_68[0] = 0;
                            uVar10 = nn::err::ErrorResultVariant::operator=
                                               (this,(Result *)auStack_68);
                            uVar15 = 0x16;
                            if (aiStack_78[0] != aiStack_88[0]) {
                              FUN_71000bce50(aiStack_78,
                                             (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4))
                              ;
                              aiStack_88[0] = 0x6445;
                              nn::err::ErrorResultVariant::ErrorResultVariant(this);
                              auStack_68[0] = 0;
                              uVar10 = nn::err::ErrorResultVariant::operator=
                                                 (this,(Result *)auStack_68);
                              uVar15 = 0x17;
                              if (aiStack_78[0] != aiStack_88[0]) {
                                FUN_71000bce50(aiStack_78,
                                               (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 + 4
                                                      ));
                                aiStack_88[0] = 0x644a;
                                nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                auStack_68[0] = 0;
                                uVar10 = nn::err::ErrorResultVariant::operator=
                                                   (this,(Result *)auStack_68);
                                if (aiStack_78[0] == aiStack_88[0]) {
                                  uVar15 = 0x18;
                                }
                                else {
                                  FUN_71000bce50(aiStack_78,
                                                 (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30 +
                                                        4));
                                  aiStack_88[0] = 0x6c0e;
                                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                  auStack_68[0] = 0;
                                  uVar10 = nn::err::ErrorResultVariant::operator=
                                                     (this,(Result *)auStack_68);
                                  uVar15 = 0x19;
                                  if (aiStack_78[0] != aiStack_88[0]) {
                                    FUN_71000bce50(aiStack_78,
                                                   (int *)(*(long *)(param_1 + 0x78) + uVar16 * 0x30
                                                          + 4));
                                    aiStack_88[0] = 0x6467;
                                    nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                    auStack_68[0] = 0;
                                    uVar10 = nn::err::ErrorResultVariant::operator=
                                                       (this,(Result *)auStack_68);
                                    uVar15 = 0x1a;
                                    if (aiStack_78[0] != aiStack_88[0]) {
                                      FUN_71000bce50(aiStack_78,
                                                     (int *)(*(long *)(param_1 + 0x78) +
                                                             uVar16 * 0x30 + 4));
                                      aiStack_88[0] = 0x6468;
                                      nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                      auStack_68[0] = 0;
                                      uVar10 = nn::err::ErrorResultVariant::operator=
                                                         (this,(Result *)auStack_68);
                                      uVar15 = 0x1b;
                                      if (aiStack_78[0] != aiStack_88[0]) {
                                        FUN_71000bce50(aiStack_78,
                                                       (int *)(*(long *)(param_1 + 0x78) +
                                                               uVar16 * 0x30 + 4));
                                        aiStack_88[0] = 0x6469;
                                        nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                        auStack_68[0] = 0;
                                        uVar10 = nn::err::ErrorResultVariant::operator=
                                                           (this,(Result *)auStack_68);
                                        if (aiStack_78[0] == aiStack_88[0]) {
                                          uVar15 = 0x1c;
                                        }
                                        else {
                                          FUN_71000bce50(aiStack_78,
                                                         (int *)(*(long *)(param_1 + 0x78) +
                                                                 uVar16 * 0x30 + 4));
                                          aiStack_88[0] = 0x646a;
                                          nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                          auStack_68[0] = 0;
                                          uVar10 = nn::err::ErrorResultVariant::operator=
                                                             (this,(Result *)auStack_68);
                                          uVar15 = 0x1d;
                                          if (aiStack_78[0] != aiStack_88[0]) {
                                            uVar15 = 0x11;
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
                    plVar8 = (long *)FUN_71001a6860(uVar10,(uint)*(byte *)(*(long *)(param_1 + 0xb0)
                                                                          + uVar17),uVar15,0);
                    if (uVar14 < uVar12) {
                      plVar8 = (long *)FUN_7100193580(DAT_71052adfc0);
                      bVar7 = FUN_7100193110(DAT_71052adfc0);
                      FUN_7100199a50(plVar8,(uint)bVar7,
                                     *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar17),bVar6,
                                     uVar15,*(undefined4 *)(param_1 + 0xf0));
                      lVar5 = DAT_71052ac580;
                      plVar8 = FUN_71000bb680();
                      *(long *)(param_1 + 0xe0) = *(long *)(lVar5 + 0x30) + *plVar8 * 500;
                    }
                  }
                }
                else {
                  bVar3 = true;
                }
              }
              else if (plVar9 == (long *)0x0) {
                bVar4 = true;
              }
              else {
                bVar3 = (bool)(bVar3 | (int)plVar9[9] != 5);
              }
            }
            else {
              plVar8 = (long *)FUN_71001a6860(plVar8,uVar11,cVar1,1);
            }
          }
          uVar17 = uVar17 + 1;
          lVar18 = lVar18 + 0x80;
        } while (uVar17 < *(ushort *)(param_1 + 0xd6));
        if (bVar2) {
          FUN_7100162430(DAT_71052add68);
        }
        if ((bVar3) || ((bVar4 && (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x68))))
           ) {
          return 5;
        }
      }
      *(code **)(param_1 + 0x30) = FUN_71001a71f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar13 = "ProcessUpdateMeshJob::SendConnectionReport";
      goto LAB_71001a5e50;
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
  *(code **)(param_1 + 0x30) = FUN_71001a65f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar13 = "ProcessUpdateMeshJob::UpdateFailed";
LAB_71001a5e50:
  *(char **)(param_1 + 0x40) = pcVar13;
  return 0;
}

