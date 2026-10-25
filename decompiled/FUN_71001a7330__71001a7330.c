// addr:      71001a7330
// offset:    0x1a7330
// name:      FUN_71001a7330
// mangled:   
// signature: undefined FUN_71001a7330(void)


undefined8 FUN_71001a7330(long param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  ushort uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ErrorResultVariant *this;
  undefined1 uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined **ppuStack_b8;
  undefined4 uStack_b0;
  int aiStack_90 [5];
  byte abStack_7c [4];
  int aiStack_78 [4];
  undefined4 auStack_68 [2];
  
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    bVar3 = FUN_7100193560(DAT_71052adfc0);
    uVar7 = (uint)bVar3;
    if (bVar3 < 0x20) {
      lVar8 = FUN_7100193a30(DAT_71052adfc0);
      if ((*(int *)(lVar8 + 0x38) != *(int *)(param_1 + 0xf0)) ||
         (*(uint *)(lVar8 + 0x34) <= *(uint *)(param_1 + 0xec))) {
        if (*(short *)(param_1 + 0xd6) != 0) {
          uVar23 = *(ulong *)(param_1 + 0xe0);
          this = (ErrorResultVariant *)((ulong)aiStack_78 | 4);
          uVar17 = *(ulong *)(DAT_71052ac580 + 0x30);
          uVar18 = 0;
          do {
            bVar5 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar18);
            if (((bVar5 != uVar7) &&
                (bVar5 = *(byte *)(param_1 + (ulong)bVar5 + 0x80), uVar21 = (ulong)bVar5,
                (ushort)bVar5 < *(ushort *)(param_1 + 0xa0))) &&
               (*(int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30) - 2U < 3)) {
              FUN_71000bce50((int *)&ppuStack_b8,
                             (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
              if ((int)ppuStack_b8 != 0) {
                FUN_71000bce50((int *)&ppuStack_b8,
                               (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                aiStack_78[0] = 0x643f;
                nn::err::ErrorResultVariant::ErrorResultVariant(this);
                auStack_68[0] = 0;
                nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                uVar20 = 0x12;
                if ((int)ppuStack_b8 != aiStack_78[0]) {
                  FUN_71000bce50((int *)&ppuStack_b8,
                                 (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                  aiStack_78[0] = 0x6442;
                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                  auStack_68[0] = 0;
                  nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                  uVar20 = 0x13;
                  if ((int)ppuStack_b8 != aiStack_78[0]) {
                    FUN_71000bce50((int *)&ppuStack_b8,
                                   (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                    aiStack_78[0] = 0x6443;
                    nn::err::ErrorResultVariant::ErrorResultVariant(this);
                    auStack_68[0] = 0;
                    nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                    uVar20 = 0x15;
                    if ((int)ppuStack_b8 != aiStack_78[0]) {
                      FUN_71000bce50((int *)&ppuStack_b8,
                                     (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                      aiStack_78[0] = 0x6444;
                      nn::err::ErrorResultVariant::ErrorResultVariant(this);
                      auStack_68[0] = 0;
                      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                      uVar20 = 0x16;
                      if ((int)ppuStack_b8 != aiStack_78[0]) {
                        FUN_71000bce50((int *)&ppuStack_b8,
                                       (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                        aiStack_78[0] = 0x6445;
                        nn::err::ErrorResultVariant::ErrorResultVariant(this);
                        auStack_68[0] = 0;
                        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                        uVar20 = 0x17;
                        if ((int)ppuStack_b8 != aiStack_78[0]) {
                          FUN_71000bce50((int *)&ppuStack_b8,
                                         (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                          aiStack_78[0] = 0x644a;
                          nn::err::ErrorResultVariant::ErrorResultVariant(this);
                          auStack_68[0] = 0;
                          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                          if ((int)ppuStack_b8 == aiStack_78[0]) {
                            uVar20 = 0x18;
                          }
                          else {
                            FUN_71000bce50((int *)&ppuStack_b8,
                                           (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4));
                            aiStack_78[0] = 0x6467;
                            nn::err::ErrorResultVariant::ErrorResultVariant(this);
                            auStack_68[0] = 0;
                            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                            uVar20 = 0x1a;
                            if ((int)ppuStack_b8 != aiStack_78[0]) {
                              FUN_71000bce50((int *)&ppuStack_b8,
                                             (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4))
                              ;
                              aiStack_78[0] = 0x6468;
                              nn::err::ErrorResultVariant::ErrorResultVariant(this);
                              auStack_68[0] = 0;
                              nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                              uVar20 = 0x1b;
                              if ((int)ppuStack_b8 != aiStack_78[0]) {
                                FUN_71000bce50((int *)&ppuStack_b8,
                                               (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 + 4
                                                      ));
                                aiStack_78[0] = 0x6469;
                                nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                auStack_68[0] = 0;
                                nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                                if ((int)ppuStack_b8 == aiStack_78[0]) {
                                  uVar20 = 0x1c;
                                }
                                else {
                                  FUN_71000bce50((int *)&ppuStack_b8,
                                                 (int *)(*(long *)(param_1 + 0x78) + uVar21 * 0x30 +
                                                        4));
                                  aiStack_78[0] = 0x646a;
                                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                                  auStack_68[0] = 0;
                                  nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_68);
                                  uVar20 = 0x1d;
                                  if ((int)ppuStack_b8 != aiStack_78[0]) {
                                    uVar20 = 0x11;
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
                if (uVar23 < uVar17) {
                  plVar14 = (long *)FUN_7100193580(DAT_71052adfc0);
                  bVar5 = FUN_7100193110(DAT_71052adfc0);
                  FUN_7100199a50(plVar14,(uint)bVar5,
                                 *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar18),bVar3,uVar20,
                                 *(undefined4 *)(param_1 + 0xf0));
                  lVar8 = DAT_71052ac580;
                  plVar14 = FUN_71000bb680();
                  *(long *)(param_1 + 0xe0) = *(long *)(lVar8 + 0x30) + *plVar14 * 500;
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(ushort *)(param_1 + 0xd6));
          return 5;
        }
        return 5;
      }
      uVar15 = *(ushort *)(param_1 + 0xd6);
      if (uVar15 != 0) {
        uVar18 = 0;
        do {
          bVar3 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar18);
          if (bVar3 != uVar7) {
            pbVar19 = (byte *)(param_1 + (ulong)bVar3 + 0x80);
            bVar3 = *pbVar19;
            if (((ushort)bVar3 < *(ushort *)(param_1 + 0xa0)) &&
               (*(int *)(*(long *)(param_1 + 0x78) + (ulong)bVar3 * 0x30) - 2U < 3)) {
              *pbVar19 = 0xff;
              uVar15 = *(ushort *)(param_1 + 0xd6);
            }
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < uVar15);
      }
      aiStack_78[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_78 | 4))
      ;
      ppuStack_b8 = (undefined **)((ulong)ppuStack_b8 & 0xffffffff00000000);
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_78 | 4),(Result *)&ppuStack_b8);
      if (*(short *)(param_1 + 0xd6) != 0) {
        bVar2 = false;
        lVar22 = 0;
        uVar18 = 0;
        do {
          if (*(byte *)(*(long *)(param_1 + 0xb0) + uVar18) != uVar7) {
            plVar14 = (long *)FUN_7100161fa0(DAT_71052add68);
            plVar14 = (long *)(**(code **)(*plVar14 + 0x48))
                                        (plVar14,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar18)
                                        );
            if (plVar14 == (long *)0x0) {
              plVar14 = (long *)FUN_7100161fb0(DAT_71052add68);
              plVar14 = (long *)(**(code **)(*plVar14 + 0x38))
                                          (plVar14,*(long *)(param_1 + 0xa8) + lVar22);
              if (plVar14 != (long *)0x0) {
                ppuStack_b8 = (undefined **)0x200000000000;
                uStack_b0 = 0;
                (**(code **)(*plVar14 + 0x18))(plVar14,&ppuStack_b8);
                if ((int)plVar14[9] == 5) {
                  bVar2 = (bool)(bVar2 | 0x1f < *(byte *)(plVar14 + 7));
                }
                else if ((int)plVar14[9] == 6) {
                  (**(code **)(*(long *)plVar14[0x15] + 0x30))((long *)plVar14[0x15],plVar14);
                  plVar9 = (long *)FUN_7100161fb0(DAT_71052add68);
                  (**(code **)(*plVar9 + 0x58))(plVar9,plVar14);
                  lVar10 = FUN_7100190ca0(DAT_71052adfc0);
                  FUN_7100189910(lVar10,(long)plVar14);
                  FUN_710015e730((long)plVar14);
                  FUN_710019b820((long)plVar14);
                  plVar9 = (long *)FUN_7100161fa0(DAT_71052add68);
                  (**(code **)(*plVar9 + 0x28))(plVar9,plVar14);
                  plVar14 = (long *)0x0;
                  bVar2 = true;
                  goto LAB_71001a78d0;
                }
                FUN_710015e540((long)plVar14,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar18));
                uVar11 = FUN_71001602c0(*(long *)(param_1 + 0xa8) + lVar22);
                FUN_710015e550((long)plVar14,uVar11);
                FUN_710015e7d0((int *)&ppuStack_b8,(long)plVar14);
              }
            }
LAB_71001a78d0:
            FUN_71001aca60((int *)&ppuStack_b8,lVar8,uVar7,
                           (uint)*(byte *)(*(long *)(param_1 + 0xb0) + uVar18),abStack_7c);
            FUN_71000bcf30(aiStack_78,(int *)&ppuStack_b8);
            if (aiStack_78[0] == 0) {
              if ((abStack_7c[0] != uVar7) &&
                 (bVar3 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar18), uVar17 = (ulong)bVar3,
                 (uint)abStack_7c[0] != (uint)bVar3)) {
                if ((plVar14 != (long *)0x0) && ((int)plVar14[9] == 5)) {
                  uVar17 = FUN_710019b8b0((long)plVar14);
                  if ((uVar17 & 1) != 0) goto LAB_71001a7920;
                  cVar1 = *(char *)(*(long *)(param_1 + 0xb0) + uVar18);
                  cVar4 = FUN_7100193110(DAT_71052adfc0);
                  if (cVar1 == cVar4) {
                    uVar7 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 8));
                    if ((uVar7 & 1) != 0) {
                      plVar14 = *(long **)(DAT_71052adfc0 + 8);
                      ppuStack_b8 = (undefined **)CONCAT44(ppuStack_b8._4_4_,0x6439);
                      nn::err::ErrorResultVariant::ErrorResultVariant
                                ((ErrorResultVariant *)((ulong)&ppuStack_b8 | 4));
                      auStack_68[0] = 0;
                      nn::err::ErrorResultVariant::operator=
                                ((ErrorResultVariant *)((ulong)&ppuStack_b8 | 4),
                                 (Result *)auStack_68);
                      FUN_71000bce50(aiStack_90,(int *)&ppuStack_b8);
                      FUN_710018d800(plVar14,aiStack_90);
                    }
                    goto LAB_71001a74c8;
                  }
                  (**(code **)(*(long *)plVar14[0x15] + 0x30))((long *)plVar14[0x15],plVar14);
                  plVar9 = (long *)FUN_7100161fb0(DAT_71052add68);
                  (**(code **)(*plVar9 + 0x58))(plVar9,plVar14);
                  lVar10 = FUN_7100190ca0(DAT_71052adfc0);
                  FUN_7100189910(lVar10,(long)plVar14);
                  FUN_710015e730((long)plVar14);
                  FUN_710019b820((long)plVar14);
                  plVar9 = (long *)FUN_7100161fa0(DAT_71052add68);
                  (**(code **)(*plVar9 + 0x28))(plVar9,plVar14);
                  uVar17 = (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar18);
                  plVar14 = (long *)0x0;
                  bVar2 = true;
                }
                if ((uint)uVar17 < uVar7) {
                  if (plVar14 == (long *)0x0) {
                    lVar10 = FUN_7100161fa0(DAT_71052add68);
                    uVar6 = FUN_71001671c0(lVar10);
                    if ((uint)*(ushort *)(DAT_71052add68 + 0x70) <= (uVar6 & 0xffff))
                    goto LAB_71001a7920;
                    plVar14 = (long *)FUN_7100161fa0(DAT_71052add68);
                    plVar14 = (long *)(**(code **)(*plVar14 + 0x20))();
                    uVar11 = FUN_71001602c0(*(long *)(param_1 + 0xa8) + lVar22);
                    bVar3 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar18);
                    FUN_7100160230(&ppuStack_b8,*(long *)(param_1 + 0xa8) + lVar22);
                    FUN_710015e560((long)plVar14,uVar11,bVar3,(long)&ppuStack_b8);
                    ppuStack_b8 = &PTR_FUN_7104f4a808;
                    FUN_71000b1cf0();
                    uVar17 = (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar18);
                  }
                  bVar3 = *(byte *)(param_1 + uVar17 + 0x80);
                  if (((ushort)bVar3 < *(ushort *)(param_1 + 0xa0)) &&
                     (piVar12 = (int *)(*(long *)(param_1 + 0x78) + (ulong)bVar3 * 0x30),
                     2 < *piVar12 - 2U)) {
                    if ((*(uint *)(plVar14 + 9) < 6) &&
                       ((1 << (ulong)(*(uint *)(plVar14 + 9) & 0x1f) & 0x34U) != 0))
                    goto LAB_71001a7920;
                    FUN_71000b4260(piVar12);
                    FUN_71000b40e0((undefined4 *)(*(long *)(param_1 + 0x78) + (ulong)bVar3 * 0x30));
                  }
                  plVar9 = (long *)plVar14[0x14];
                  uVar17 = FUN_71001a66a0(param_1);
                  FUN_7100187200((int *)&ppuStack_b8,plVar9);
                  if ((int)ppuStack_b8 == 0) {
                    plVar13 = (long *)FUN_7100161fb0(DAT_71052add68);
                    (**(code **)(*plVar13 + 0x20))
                              (&ppuStack_b8,plVar13,plVar14,*(long *)(param_1 + 0xa8) + lVar22);
                    *(undefined4 *)(plVar14 + 9) = 2;
                    *(char *)(param_1 + (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar18) + 0x80)
                         = (char)uVar17;
                    FUN_71000b4820((long)plVar9,0);
                  }
                }
              }
            }
            else if (plVar14 != (long *)0x0) {
              ppuStack_b8 = (undefined **)0x200000000000;
              uStack_b0 = 0;
              (**(code **)(*plVar14 + 0x18))(plVar14,&ppuStack_b8);
            }
          }
LAB_71001a7920:
          uVar18 = uVar18 + 1;
          lVar22 = lVar22 + 0x80;
        } while (uVar18 < *(ushort *)(param_1 + 0xd6));
        if (bVar2) {
          FUN_7100162430(DAT_71052add68);
        }
      }
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar8 + 0x34);
      *(undefined4 *)(*(long *)(DAT_71052adfc0 + 8) + 0xac) = 0xffffffff;
      pcVar16 = "ProcessUpdateMeshJob::CheckConnectionAll";
      *(code **)(param_1 + 0x30) = FUN_71001a5e80;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_71001a74e0;
    }
  }
  else {
    ppuStack_b8 = (undefined **)CONCAT44(ppuStack_b8._4_4_,0x6c0e);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&ppuStack_b8 | 4))
    ;
    aiStack_78[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&ppuStack_b8 | 4),(Result *)aiStack_78);
    FUN_71000bcf30((int *)(*(long *)(DAT_71052adfc0 + 8) + 0x9c),(int *)&ppuStack_b8);
  }
LAB_71001a74c8:
  *(code **)(param_1 + 0x30) = FUN_71001a65f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar16 = "ProcessUpdateMeshJob::UpdateFailed";
LAB_71001a74e0:
  *(char **)(param_1 + 0x40) = pcVar16;
  return 0;
}

