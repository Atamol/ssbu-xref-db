// addr:      710018c4c0
// offset:    0x18c4c0
// name:      FUN_710018c4c0
// mangled:   
// signature: undefined FUN_710018c4c0(void)


ulong FUN_710018c4c0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  int *piVar6;
  ushort uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ErrorResultVariant *pEVar13;
  int *piVar14;
  short sVar15;
  int iVar16;
  int aiStack_118 [4];
  int aiStack_108 [4];
  int aiStack_f8 [4];
  int aiStack_e8 [4];
  int aiStack_d8 [4];
  int aiStack_c8 [4];
  int aiStack_b8 [4];
  int aiStack_a8 [4];
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  undefined4 auStack_58 [2];
  
  uVar4 = FUN_710018a7d0((long)param_1);
  if ((uVar4 & 1) == 0) {
    uVar3 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 0x10));
    if (((uVar3 & 1) == 0) &&
       (uVar3 = FUN_71000b4990(*(long *)(DAT_71052adfc0 + 0x50)), (uVar3 & 1) == 0)) {
      bVar1 = FUN_7100193560(DAT_71052adfc0);
      if (0x1f < bVar1) {
        lVar9 = *(long *)(DAT_71052ac580 + 0x30);
        lVar11 = param_1[0x16];
        plVar5 = FUN_71000bb680();
        iVar16 = 0;
        if (*plVar5 != 0) {
          iVar16 = (int)((lVar9 - lVar11) / *plVar5);
        }
        if (-1 < iVar16) {
          DAT_71052ac6d7 = (undefined1)(int)param_1[0x13];
          DAT_71052ac6c8 = iVar16;
        }
        if (param_1[0xb] != 0) {
          pEVar13 = (ErrorResultVariant *)((ulong)aiStack_68 | 4);
          iVar16 = 0x643f;
          aiStack_68[0] = 0x643f;
          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
          auStack_58[0] = 0;
          nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
          if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
            piVar14 = (int *)param_1[0xb];
            if (2 < *piVar14 - 2U) {
              aiStack_68[0] = 0x643f;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
              auStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
              FUN_71000bce50(aiStack_78,aiStack_68);
              piVar6 = aiStack_78;
              iVar16 = 0x643f;
LAB_710018cce4:
              FUN_71000b41f0(piVar14,piVar6);
            }
LAB_710018ccec:
            bVar1 = FUN_7100193710();
            if ((bVar1 & 1) == 0) {
LAB_710018ccfc:
              aiStack_68[0] = iVar16;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
              auStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
              DAT_71052ac6c0 = aiStack_68[0];
              DAT_71052ac6d0 = *(undefined4 *)((long)param_1 + 0xac);
            }
          }
          else {
            iVar16 = 0x6442;
            aiStack_68[0] = 0x6442;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6442;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_88,aiStack_68);
                piVar6 = aiStack_88;
                iVar16 = 0x6442;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            pEVar13 = (ErrorResultVariant *)((ulong)aiStack_68 | 4);
            iVar16 = 0x6443;
            aiStack_68[0] = 0x6443;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6443;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_98,aiStack_68);
                piVar6 = aiStack_98;
                iVar16 = 0x6443;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            iVar16 = 0x6444;
            aiStack_68[0] = 0x6444;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6444;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_a8,aiStack_68);
                piVar6 = aiStack_a8;
                iVar16 = 0x6444;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            pEVar13 = (ErrorResultVariant *)((ulong)aiStack_68 | 4);
            iVar16 = 0x6445;
            aiStack_68[0] = 0x6445;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6445;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_b8,aiStack_68);
                piVar6 = aiStack_b8;
                iVar16 = 0x6445;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            iVar16 = 0x6467;
            aiStack_68[0] = 0x6467;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6467;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_c8,aiStack_68);
                piVar6 = aiStack_c8;
                iVar16 = 0x6467;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            pEVar13 = (ErrorResultVariant *)((ulong)aiStack_68 | 4);
            iVar16 = 0x6468;
            aiStack_68[0] = 0x6468;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6468;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_d8,aiStack_68);
                piVar6 = aiStack_d8;
                iVar16 = 0x6468;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            iVar16 = 0x6469;
            aiStack_68[0] = 0x6469;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x6469;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_e8,aiStack_68);
                piVar6 = aiStack_e8;
                iVar16 = 0x6469;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            pEVar13 = (ErrorResultVariant *)((ulong)aiStack_68 | 4);
            iVar16 = 0x646a;
            aiStack_68[0] = 0x646a;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              piVar14 = (int *)param_1[0xb];
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x646a;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_f8,aiStack_68);
                piVar6 = aiStack_f8;
                iVar16 = 0x646a;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            iVar16 = 0x644a;
            aiStack_68[0] = 0x644a;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar13);
            auStack_58[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar13,(Result *)auStack_58);
            piVar14 = (int *)param_1[0xb];
            if (*(int *)((long)param_1 + 0x9c) == aiStack_68[0]) {
              if (2 < *piVar14 - 2U) {
                aiStack_68[0] = 0x644a;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
                auStack_58[0] = 0;
                nn::err::ErrorResultVariant::operator=
                          ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
                FUN_71000bce50(aiStack_108,aiStack_68);
                piVar6 = aiStack_108;
                iVar16 = 0x644a;
                goto LAB_710018cce4;
              }
              goto LAB_710018ccec;
            }
            if (2 < *piVar14 - 2U) {
              aiStack_68[0] = 0x6439;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
              auStack_58[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_58);
              FUN_71000bce50(aiStack_118,aiStack_68);
              FUN_71000b41f0(piVar14,aiStack_118);
            }
            bVar1 = FUN_7100193710();
            if ((bVar1 & 1) == 0) {
              aiStack_68[0] = 0x6439;
              iVar16 = aiStack_68[0];
              goto LAB_710018ccfc;
            }
          }
          FUN_7100193390(DAT_71052adfc0);
          param_1[0xb] = 0;
        }
        FUN_71000b4260((undefined4 *)param_1[0xc]);
        FUN_71000b40e0((undefined4 *)param_1[0xc]);
        goto LAB_710018c4e8;
      }
      uVar7 = *(ushort *)((long)param_1 + 0x6c);
      if (uVar7 != 0) {
        lVar9 = 0;
        uVar4 = 0;
        sVar15 = 0;
        do {
          while (*(byte *)(param_1[0xf] + uVar4) != bVar1) {
            if (*(char *)(param_1[0x12] + uVar4) == '\0') {
              plVar5 = (long *)FUN_7100161fb0(DAT_71052add68);
              lVar11 = (**(code **)(*plVar5 + 0x38))(plVar5,param_1[0xe] + lVar9);
              if ((lVar11 == 0) ||
                 (bVar2 = FUN_7100190a90(DAT_71052adfc0,*(byte *)(param_1[0xf] + uVar4)), !bVar2)) {
                uVar3 = *(uint *)(DAT_71052adfc0 + 0xcc);
                if (uVar3 == 0) goto LAB_710018c8bc;
                goto LAB_710018c7f0;
              }
              uVar7 = *(ushort *)((long)param_1 + 0x6c);
              sVar15 = sVar15 + 1;
              uVar4 = uVar4 + 1;
              lVar9 = lVar9 + 0x80;
              if (uVar7 <= uVar4) goto LAB_710018c6f8;
            }
            else {
              uVar4 = uVar4 + 1;
              lVar9 = lVar9 + 0x80;
              if (uVar7 <= uVar4) goto LAB_710018c6f8;
            }
          }
          sVar15 = sVar15 + 1;
          uVar4 = uVar4 + 1;
          lVar9 = lVar9 + 0x80;
        } while (uVar4 < uVar7);
LAB_710018c6f8:
        if (sVar15 == 2) {
          uVar3 = *(uint *)(DAT_71052adfc0 + 0xcc);
          if (uVar3 != 0) {
            if (*(char *)(*(long *)(DAT_71052adfc0 + 0x20) + 0xf4) == '\0') goto LAB_710018c724;
LAB_710018c7f0:
            lVar9 = *(long *)(DAT_71052adfc0 + 0x20);
            if (*(char *)(lVar9 + 0xf4) != '\0') {
              uVar3 = *(uint *)(lVar9 + 0xf0);
            }
            if (*(uint *)((long)param_1 + 0x8c) < uVar3) {
              if (*(short *)((long)param_1 + 0x6c) != 0) {
                uVar4 = 0;
                do {
                  while (lVar11 = param_1[0x12], *(char *)(lVar11 + uVar4) != '\0') {
LAB_710018c8a8:
                    uVar4 = uVar4 + 1;
                    if (*(ushort *)((long)param_1 + 0x6c) <= uVar4) goto LAB_710018c8b8;
                  }
                  *(undefined1 *)(lVar11 + uVar4) = 1;
                  if (*(byte *)(param_1[0xf] + uVar4) != bVar1) {
                    if (*(ushort *)(lVar9 + 0xd6) != 0) {
                      lVar11 = 0;
                      lVar12 = 0;
                      do {
                        if (*(byte *)(*(long *)(lVar9 + 0xb0) + lVar11) ==
                            *(byte *)(param_1[0xf] + uVar4)) {
                          uVar8 = FUN_7100160050(*(long *)(lVar9 + 0xa8) + lVar12,
                                                 param_1[0xe] + uVar4 * 0x80);
                          if ((uVar8 & 1) != 0) {
                            *(undefined1 *)(param_1[0x12] + uVar4) = 0;
                          }
                          break;
                        }
                        lVar11 = lVar11 + 1;
                        lVar12 = lVar12 + 0x80;
                      } while ((uint)lVar11 < (uint)*(ushort *)(lVar9 + 0xd6));
                    }
                    goto LAB_710018c8a8;
                  }
                  *(undefined1 *)(lVar11 + uVar4) = 0;
                  uVar4 = uVar4 + 1;
                } while (uVar4 < *(ushort *)((long)param_1 + 0x6c));
              }
LAB_710018c8b8:
              *(uint *)((long)param_1 + 0x8c) = uVar3;
            }
          }
LAB_710018c8bc:
          uVar4 = FUN_710018b370((long)param_1);
          if ((uVar4 & 1) != 0) {
            uVar8 = 0;
            uVar10 = 0;
            uVar4 = 1;
            goto LAB_710018c544;
          }
          uVar4 = FUN_710018b870((long)param_1);
          if ((uVar4 & 1) != 0) goto LAB_710018c4e8;
          goto LAB_710018c538;
        }
      }
LAB_710018c724:
      lVar9 = FUN_71001932d0(DAT_71052adfc0);
      if (-1 < lVar9) {
        FUN_7100190cb0(DAT_71052adfc0,1);
        lVar9 = DAT_71052adfc0;
        *(undefined4 *)(DAT_71052adfc0 + 0xb4) = 0;
        lVar9 = FUN_71001939f0(lVar9);
        *(undefined1 *)(lVar9 + 0xf6) = 0;
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar8 = uVar4 & 0xffff0000;
        uVar10 = uVar4 & 0xff00;
        uVar4 = uVar4 & 0xff;
        goto LAB_710018c544;
      }
    }
LAB_710018c538:
    uVar8 = 0;
    uVar10 = 0;
    uVar4 = 5;
  }
  else {
LAB_710018c4e8:
    uVar4 = 0;
    param_1[6] = (long)FUN_710018cdc0;
    param_1[7] = 0;
    uVar8 = 0;
    uVar10 = 0;
    param_1[8] = (long)"JoinMeshJob::StartDisconnectStations";
  }
LAB_710018c544:
  return uVar8 | uVar4 | uVar10;
}

