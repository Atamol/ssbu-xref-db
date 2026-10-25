// addr:      7101e9d5e0
// offset:    0x1e9d5e0
// name:      FUN_7101e9d5e0
// mangled:   
// signature: undefined __cdecl FUN_7101e9d5e0(undefined1[16] param_1, undefined1[16] param_2, double param_3, double param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


void FUN_7101e9d5e0(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined2 *puVar1;
  float *pfVar2;
  int *piVar3;
  byte *pbVar4;
  char cVar5;
  short sVar6;
  undefined4 uVar7;
  double dVar8;
  bool bVar9;
  ulong uVar10;
  ushort *puVar11;
  long ***ppplVar12;
  ushort *puVar13;
  long ****pppplVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  short *psVar20;
  ushort uVar21;
  int iVar22;
  uint uVar23;
  long ***ppplVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  ushort uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  char *pcVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long ****pppplVar37;
  long ***ppplVar38;
  ulong uVar39;
  long ***ppplVar40;
  long lVar41;
  float fVar42;
  undefined2 uVar43;
  undefined2 uVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  long ***local_10d8 [512];
  undefined4 local_d4;
  undefined8 local_d0;
  long ***local_c8;
  long ***local_c0;
  long ***local_b8;
  ulong local_b0;
  
  puVar16 = *(undefined8 **)(*(long *)(param_5 + 0xe0) + 0x80);
  local_c8 = (long ***)FUN_710392e290(0x10,0x200,param_7,param_8,param_9,param_10,param_11,param_12)
  ;
  if (local_c8 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (long ***)((ulong)local_d0._4_4_ << 0x20);
      local_10d8[0] = (long ***)&DAT_00000200;
      pppplVar14 = local_10d8;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar10 & 1) != 0) &&
         (local_c8 = (long ***)
                     FUN_710392e290(0x10,0x200,pppplVar14,param_8,param_9,param_10,param_11,param_12
                                   ), local_c8 != (long ***)0x0)) goto LAB_7101e9d678;
    }
    local_c8 = (long ***)0x0;
  }
LAB_7101e9d678:
  local_c0 = local_c8 + 0x40;
  pppplVar14 = (long ****)&DAT_00001000;
  local_d0 = local_c8;
  memset(local_10d8,0,0x1000);
  lVar41 = *(long *)(*(long *)(param_5 + 0xd0) + 0x38);
  lVar25 = *(long *)(*(long *)(param_5 + 0xd0) + 0x40);
  if (0 < (int)((ulong)(lVar25 - lVar41) >> 6)) {
    uVar10 = 0;
    do {
      uVar28 = lVar25 - lVar41;
      if ((ulong)((long)uVar28 >> 6) <= uVar10) {
LAB_7101e9e28c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar17 = lVar41 + uVar10 * 0x40;
      lVar30 = *(long *)(lVar17 + 8);
      lVar17 = *(long *)(lVar17 + 0x10);
      if (0 < (int)((ulong)(lVar17 - lVar30) >> 6)) {
        uVar39 = 0;
        do {
          if ((ulong)(lVar25 - lVar41 >> 6) <= uVar10) goto LAB_7101e9e28c;
          if ((ulong)(lVar17 - lVar30 >> 6) <= uVar39) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          lVar30 = lVar30 + uVar39 * 0x40;
          if (*(int *)(lVar30 + 4) == 1) {
            puVar35 = (undefined8 *)(lVar30 + 0x10);
            bVar9 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)*puVar35);
            if (bVar9) {
              puVar11 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)*puVar35);
              if ((puVar11 == (ushort *)0x0) || (uVar21 = *puVar11, uVar21 == 0)) {
                local_10d8[0] = (long ***)((ulong)local_10d8[0] & 0xffffffffffff0000);
              }
              else {
                iVar18 = 0;
                iVar15 = 0;
                puVar13 = puVar11;
                do {
                  if ((uVar21 | 1) == 0xf) {
                    if (uVar21 == 0xe) {
                      iVar22 = (puVar13[3] >> 1) + 4;
                      uVar21 = puVar13[1];
                    }
                    else {
                      iVar22 = 3;
                      if (uVar21 != 0xf) {
                        iVar22 = 0;
                      }
                      uVar21 = puVar13[1];
                    }
                    if ((((uVar21 == 0) && (puVar13[2] == 2)) && (puVar11[iVar22 + iVar18] == 0x5f))
                       && ((puVar11[(long)(iVar22 + iVar18) + 1] | 1) == 0xf)) {
                      iVar22 = iVar22 + 1;
                    }
                  }
                  else {
                    *(ushort *)((long)local_10d8 + (long)iVar15 * 2) = uVar21;
                    iVar15 = iVar15 + 1;
                    iVar22 = 1;
                  }
                  if (0x7ff < iVar15) break;
                  iVar18 = iVar22 + iVar18;
                  puVar13 = puVar11 + iVar18;
                  uVar21 = *puVar13;
                } while (uVar21 != 0);
                *(undefined2 *)((long)local_10d8 + (long)iVar15 * 2) = 0;
                if (0 < iVar15) {
                  lVar41 = 0;
                  do {
                    ppplVar40 = local_d0;
                    if (local_d0 == local_c8) {
LAB_7101e9d85c:
                      if (local_c0 == local_c8) {
                        pppplVar37 = (long ****)((long)local_c8 - (long)local_d0);
                        if ((long)pppplVar37 < -2) goto LAB_7101e9e2a0;
                        uVar28 = ((long)pppplVar37 >> 1) + 1;
                        uVar36 = (long)local_c0 - (long)local_d0;
                        if (uVar28 <= uVar36) {
                          uVar28 = uVar36;
                        }
                        if (0x3ffffffffffffffe < (ulong)((long)uVar36 >> 1)) {
                          uVar28 = 0x7fffffffffffffff;
                        }
                        if (uVar28 == 0) {
                          ppplVar24 = (long ***)0x0;
                        }
                        else {
                          if ((long)uVar28 < 0) goto LAB_7101e9e2a8;
                          ppplVar12 = (long ***)(uVar28 * 2);
                          if (ppplVar12 == (long ***)0x0) {
                            ppplVar12 = (long ***)0x1;
                          }
                          ppplVar24 = (long ***)
                                      FUN_710392e290(0x10,ppplVar12,pppplVar14,param_8,param_9,
                                                     param_10,param_11,param_12);
                          if (ppplVar24 == (long ***)0x0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_d4 = 0;
                              pppplVar14 = &local_b8;
                              local_b8 = ppplVar12;
                              uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,&local_d4);
                              if (((uVar36 & 1) != 0) &&
                                 (ppplVar24 = (long ***)
                                              FUN_710392e290(0x10,ppplVar12,pppplVar14,param_8,
                                                             param_9,param_10,param_11,param_12),
                                 ppplVar24 != (long ***)0x0)) goto LAB_7101e9d92c;
                            }
                            ppplVar24 = (long ***)0x0;
                          }
                        }
LAB_7101e9d92c:
                        puVar1 = (undefined2 *)((long)ppplVar24 + ((long)pppplVar37 >> 1) * 2);
                        ppplVar12 = (long ***)((long)ppplVar24 + uVar28 * 2);
                        ppplVar38 = (long ***)(puVar1 + 1);
                        *puVar1 = *(undefined2 *)((long)local_10d8 + lVar41 * 2);
                        if (0 < (long)pppplVar37) {
                          memcpy(ppplVar24,ppplVar40,(size_t)pppplVar37);
                          pppplVar14 = pppplVar37;
                        }
                        local_d0 = ppplVar24;
                        local_c8 = ppplVar38;
                        local_c0 = ppplVar12;
                        if (ppplVar40 != (long ***)0x0) {
                          FUN_710392eb40((ulong)ppplVar40);
                        }
                      }
                      else {
                        *(undefined2 *)local_c8 = *(undefined2 *)((long)local_10d8 + lVar41 * 2);
                        local_c8 = (long ***)((long)local_c8 + 2);
                      }
                    }
                    else {
                      sVar6 = *(short *)local_d0;
                      ppplVar24 = local_d0;
                      while (sVar6 != *(short *)((long)local_10d8 + lVar41 * 2)) {
                        ppplVar24 = (long ***)((long)ppplVar24 + 2);
                        if (local_c8 == ppplVar24) goto LAB_7101e9d85c;
                        sVar6 = *(short *)ppplVar24;
                      }
                      if (ppplVar24 == local_c8) goto LAB_7101e9d85c;
                    }
                    lVar41 = lVar41 + 1;
                  } while (lVar41 < iVar15);
                }
              }
            }
          }
          lVar41 = *(long *)(*(long *)(param_5 + 0xd0) + 0x38);
          lVar25 = *(long *)(*(long *)(param_5 + 0xd0) + 0x40);
          uVar28 = lVar25 - lVar41;
          if ((ulong)((long)uVar28 >> 6) <= uVar10) goto LAB_7101e9e274;
          lVar17 = lVar41 + uVar10 * 0x40;
          lVar30 = *(long *)(lVar17 + 8);
          lVar17 = *(long *)(lVar17 + 0x10);
          uVar39 = uVar39 + 1;
        } while ((long)uVar39 < (long)(int)((ulong)(lVar17 - lVar30) >> 6));
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)(uVar28 >> 6));
  }
  FUN_71033794c0((long ***)"nintendo64",1,(long ****)&local_d0,param_8,param_9,param_10,param_11,
                 param_12);
  if (local_d0 != (long ***)0x0) {
    local_c8 = local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  pppplVar14 = (long ****)0x1001;
  FUN_7103775dc0(*(long **)*puVar16,0,(long ****)0x1001,param_8,param_9,param_10,param_11,param_12);
  *(undefined8 *)(param_5 + 0xe8) = 0;
  *(undefined8 *)(param_5 + 0xf0) = 0;
  lVar17 = *(long *)(param_5 + 0xd0);
  *(undefined4 *)(param_5 + 0xf8) = 0;
  *(undefined8 *)(param_5 + 0x108) = 0;
  *(undefined8 *)(param_5 + 0x100) = 0xc4070000c4700000;
  *(undefined8 *)(param_5 + 0x118) = 0;
  *(undefined8 *)(param_5 + 0x110) = 0x44ca800044700000;
  lVar41 = *(long *)(lVar17 + 0x38);
  lVar25 = *(long *)(lVar17 + 0x40);
  if (0 < (int)((ulong)(lVar25 - lVar41) >> 6)) {
    fVar46 = 0.0;
    uVar10 = 0;
    do {
      uVar28 = lVar25 - lVar41 >> 6;
      local_c8 = (long ***)0x0;
      local_c0 = (long ***)0x0;
      local_d0 = (long ***)0x0;
      if (uVar28 <= uVar10) {
LAB_7101e9e274:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar30 = lVar41 + uVar10 * 0x40;
      lVar31 = *(long *)(lVar30 + 8);
      lVar30 = *(long *)(lVar30 + 0x10);
      if ((int)((ulong)(lVar30 - lVar31) >> 6) < 1) {
        dVar47 = 0.0;
        fVar50 = 0.0;
      }
      else {
        dVar47 = 0.0;
        uVar39 = 0;
        ppplVar40 = (long ***)0x0;
        fVar50 = fVar46;
        fVar48 = fVar46;
        do {
          if ((ulong)(lVar25 - lVar41 >> 6) <= uVar10) goto LAB_7101e9e278;
          if ((ulong)(lVar30 - lVar31 >> 6) <= uVar39) goto LAB_7101e9e280;
          pfVar2 = (float *)(lVar31 + uVar39 * 0x40);
          if (pfVar2[1] == 2.8026e-45) {
            uVar32 = *(ulong *)(lVar17 + 0x58);
            uVar36 = *(ulong *)(pfVar2 + 2);
            uVar26 = uVar36 & 0xffffffffff;
            uVar28 = uVar32 - 1 & uVar32;
            if (uVar28 == 0) {
              uVar33 = uVar32 - 1 & uVar26;
            }
            else {
              uVar33 = uVar26;
              if (uVar32 <= uVar26) {
                uVar33 = 0;
                if (uVar32 != 0) {
                  uVar33 = uVar26 / uVar32;
                }
                uVar33 = uVar26 - uVar33 * uVar32;
              }
            }
            puVar16 = (undefined8 *)**(undefined8 **)(*(long *)(lVar17 + 0x50) + uVar33 * 8);
            if (uVar28 == 0) {
              while ((uVar26 != puVar16[1] || (((puVar16[2] ^ uVar36) & 0xffffffffff) != 0))) {
                puVar16 = (undefined8 *)*puVar16;
              }
            }
            else {
              while ((uVar26 != puVar16[1] || (((puVar16[2] ^ uVar36) & 0xffffffffff) != 0))) {
                puVar16 = (undefined8 *)*puVar16;
              }
            }
            uVar43 = 0;
            uVar44 = 0;
            if (*(long *)puVar16[0xe] != 0) {
              uVar7 = NEON_ucvtf((uint)*(ushort *)(*(long *)(*(long *)puVar16[0xe] + 8) + 0x4a));
              uVar43 = (undefined2)uVar7;
              uVar44 = (undefined2)((uint)uVar7 >> 0x10);
            }
            fVar49 = (float)CONCAT22(uVar44,uVar43) * *(float *)(puVar16 + 5);
joined_r0x007101e9de58:
            if (uVar39 == 0) goto LAB_7101e9df74;
LAB_7101e9de5c:
            if (*pfVar2 != 0.0) goto LAB_7101e9df74;
            if (fVar50 < fVar49) {
              fVar42 = fVar49 - fVar50;
              dVar47 = dVar47 + (double)fVar42;
              fVar50 = fVar49;
              if (local_d0 != ppplVar40) {
                ppplVar24 = local_d0;
                do {
                  lVar41 = *(long *)(*(long *)(param_5 + 0xd0) + 0x38);
                  if ((ulong)(*(long *)(*(long *)(param_5 + 0xd0) + 0x40) - lVar41 >> 6) <= uVar10)
                  goto LAB_7101e9e274;
                  lVar41 = lVar41 + uVar10 * 0x40;
                  lVar25 = *(long *)(lVar41 + 8);
                  if ((ulong)(*(long *)(lVar41 + 0x10) - lVar25 >> 6) <=
                      (ulong)(long)*(int *)ppplVar24) goto LAB_7101e9e274;
                  lVar25 = lVar25 + (long)*(int *)ppplVar24 * 0x40;
                  ppplVar24 = (long ***)((long)ppplVar24 + 4);
                  *(undefined8 *)(lVar25 + 0x28) = *(undefined8 *)(lVar25 + 0x28);
                  *(ulong *)(lVar25 + 0x20) =
                       CONCAT44((float)((ulong)*(undefined8 *)(lVar25 + 0x20) >> 0x20) -
                                fVar42 * 0.5,(int)*(undefined8 *)(lVar25 + 0x20));
                } while (ppplVar40 != ppplVar24);
              }
            }
          }
          else {
            fVar49 = fVar46;
            if (pfVar2[1] != 1.4013e-45) goto joined_r0x007101e9de58;
            uVar32 = *(ulong *)(lVar17 + 0x58);
            uVar36 = *(ulong *)(pfVar2 + 2);
            pbVar4 = *(byte **)(pfVar2 + 4);
            uVar26 = uVar36 & 0xffffffffff;
            uVar28 = uVar32 - 1 & uVar32;
            if (uVar28 == 0) {
              uVar33 = uVar32 - 1 & uVar26;
            }
            else {
              uVar33 = uVar26;
              if (uVar32 <= uVar26) {
                uVar33 = 0;
                if (uVar32 != 0) {
                  uVar33 = uVar26 / uVar32;
                }
                uVar33 = uVar26 - uVar33 * uVar32;
              }
            }
            puVar16 = (undefined8 *)**(undefined8 **)(*(long *)(lVar17 + 0x50) + uVar33 * 8);
            if (uVar28 == 0) {
              while ((uVar26 != puVar16[1] || (((puVar16[2] ^ uVar36) & 0xffffffffff) != 0))) {
                puVar16 = (undefined8 *)*puVar16;
              }
            }
            else {
              while ((uVar26 != puVar16[1] || (((puVar16[2] ^ uVar36) & 0xffffffffff) != 0))) {
                puVar16 = (undefined8 *)*puVar16;
              }
            }
            fVar45 = *(float *)(puVar16 + 5);
            cVar5 = *(char *)(puVar16 + 9);
            pppplVar14 = (long ****)&DAT_00001000;
            puVar16 = *(undefined8 **)(*(long *)(param_5 + 0xe0) + 0x80);
            memset(local_10d8,0,0x1000);
            fVar42 = SUB84(param_3,0);
            if (cVar5 == '\0') {
              puVar11 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar4);
              pppplVar14 = (long ****)&SUB_00000020;
              param_8 = (byte ****)0x0;
              FUN_71037a7bd0((undefined2 *)local_10d8,puVar11,0x20,0);
              if ((short)local_10d8[0] != 0) goto LAB_7101e9ddb0;
LAB_7101e9ddd0:
              iVar15 = 0;
            }
            else {
              puVar11 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar4);
              fVar42 = SUB84(param_3,0);
              if ((puVar11 == (ushort *)0x0) || (uVar21 = *puVar11, uVar21 == 0)) {
LAB_7101e9dd78:
                iVar15 = 0;
              }
              else {
                uVar23 = 0;
                uVar19 = 0;
                puVar13 = puVar11;
                uVar29 = uVar21;
                do {
                  if ((uVar29 | 1) == 0xf) {
                    if (uVar29 == 0xe) {
                      iVar15 = (puVar13[3] >> 1) + 4;
                    }
                    else {
                      iVar15 = 3;
                      if (uVar29 != 0xf) {
                        iVar15 = 0;
                      }
                    }
                  }
                  else {
                    iVar15 = 1;
                  }
                  uVar23 = iVar15 + uVar23;
                  uVar19 = iVar15 + uVar19;
                  puVar13 = puVar11 + uVar23;
                  uVar29 = *puVar13;
                } while (uVar29 != 0);
                if (0x7ff < uVar19) goto LAB_7101e9dd78;
                lVar41 = 0;
                iVar15 = 0;
                puVar13 = puVar11;
                do {
                  if ((uVar21 | 1) == 0xf) {
                    if (uVar21 == 0xe) {
                      iVar18 = (puVar13[3] >> 1) + 4;
                    }
                    else {
                      iVar18 = 3;
                      if (uVar21 != 0xf) {
                        iVar18 = 0;
                      }
                    }
                    pppplVar14 = (long ****)(ulong)(uint)(iVar18 << 1);
                    memcpy((void *)((long)local_10d8 + lVar41 * 2),puVar13,(size_t)pppplVar14);
                  }
                  else {
                    iVar18 = 1;
                    *(ushort *)((long)local_10d8 + lVar41 * 2) = uVar21;
                  }
                  fVar42 = SUB84(param_3,0);
                  iVar15 = iVar18 + iVar15;
                  puVar13 = puVar11 + iVar15;
                  uVar21 = *puVar13;
                  lVar41 = (long)iVar15;
                } while (uVar21 != 0);
              }
              *(undefined2 *)((long)local_10d8 + (long)iVar15 * 2) = 0;
              if ((short)local_10d8[0] == 0) goto LAB_7101e9ddd0;
LAB_7101e9ddb0:
              uVar23 = 0xffffffff;
              psVar20 = (short *)((ulong)local_10d8 | 2);
              do {
                sVar6 = *psVar20;
                uVar23 = uVar23 + 1;
                psVar20 = psVar20 + 1;
              } while (sVar6 != 0);
              if (uVar23 < *(uint *)(puVar16 + 4)) goto LAB_7101e9ddd0;
              iVar15 = 1;
              if (*(uint *)((long)puVar16 + 0x24) <= uVar23) {
                iVar15 = 2;
              }
            }
            lVar41 = puVar16[1];
            if (puVar16[2] - lVar41 == 0) {
LAB_7101e9df18:
              fVar49 = 0.0;
              goto joined_r0x007101e9de58;
            }
            uVar36 = (puVar16[2] - lVar41 >> 3) * -0x5555555555555555;
            lVar25 = 0;
            uVar28 = 0;
            pcVar34 = (char *)(lVar41 + 0x14);
            do {
              if ((*pcVar34 == '\0') && (iVar15 <= *(int *)(pcVar34 + -4))) {
                if ((int)uVar28 == -1) goto LAB_7101e9df18;
                FUN_7103776910(&local_b8,*(long *)*puVar16 + 8,
                               *(long *****)(lVar41 + (lVar25 >> 0x20) * 0x18 + 8),pppplVar14,
                               param_8,param_9,param_10,param_11,param_12);
                uVar28 = local_b0;
                if (*(long **)(local_b0 + 0x10) != (long *)0x0) {
                  param_8 = (byte ****)0x1;
                  FUN_71037a2270(*(long **)(local_b0 + 0x10),(ushort *)local_10d8,0xffffffff,1);
                }
                pppplVar14 = (long ****)(ulong)(cVar5 != '\0');
                FUN_7101e9cfe0(puVar16,*(int *)(puVar16[1] + (lVar25 >> 0x20) * 0x18),
                               (ulong)pppplVar14,param_8,param_9,param_10,param_11,param_12);
                fVar49 = SUB84(param_4,0);
                local_b8 = (long ***)&PTR_FUN_710523d9a8;
                local_b0 = 0;
                if (uVar28 != 0) {
                  FUN_710392eb40(uVar28);
                }
                fVar49 = (fVar49 - fVar42) * fVar45;
                break;
              }
              uVar28 = uVar28 + 1;
              lVar25 = lVar25 + 0x100000000;
              pcVar34 = pcVar34 + 0x18;
              fVar49 = 0.0;
            } while (uVar28 <= uVar36 && uVar36 - uVar28 != 0);
            if (uVar39 != 0) goto LAB_7101e9de5c;
LAB_7101e9df74:
            local_c8 = local_d0;
            fVar48 = (float)(dVar47 + (double)*pfVar2);
            dVar47 = dVar47 + (double)*pfVar2 + (double)fVar49;
            ppplVar40 = local_d0;
            fVar50 = fVar49;
          }
          ppplVar24 = local_d0;
          fVar49 = (float)((ulong)*(undefined8 *)(pfVar2 + 8) >> 0x20);
          param_3 = (double)(ulong)(uint)fVar49;
          pfVar2[0xe] = fVar48;
          *(undefined8 *)(pfVar2 + 10) = *(undefined8 *)(pfVar2 + 10);
          *(ulong *)(pfVar2 + 8) = CONCAT44(fVar49 + fVar50 * -0.5,(int)*(undefined8 *)(pfVar2 + 8))
          ;
          if (ppplVar40 == local_c0) {
            pppplVar37 = (long ****)((long)ppplVar40 - (long)local_d0);
            uVar36 = (long)pppplVar37 >> 2;
            uVar28 = uVar36 + 1;
            if (uVar28 >> 0x3e != 0) {
LAB_7101e9e2a0:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar36 < 0x1fffffffffffffff) {
              if (uVar28 <= (ulong)((long)pppplVar37 >> 1)) {
                uVar28 = (long)pppplVar37 >> 1;
              }
              if (uVar28 != 0) {
                if (uVar28 >> 0x3e == 0) goto LAB_7101e9e014;
                goto LAB_7101e9e2a8;
              }
LAB_7101e9e074:
              ppplVar12 = (long ***)0x0;
            }
            else {
              uVar28 = 0x3fffffffffffffff;
LAB_7101e9e014:
              ppplVar40 = (long ***)(uVar28 * 4);
              if (ppplVar40 == (long ***)0x0) {
                ppplVar40 = (long ***)0x1;
              }
              ppplVar12 = (long ***)
                          FUN_710392e290(0x10,ppplVar40,pppplVar14,param_8,param_9,param_10,param_11
                                         ,param_12);
              if (ppplVar12 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_b8 = (long ***)((ulong)local_b8 & 0xffffffff00000000);
                  pppplVar14 = local_10d8;
                  local_10d8[0] = ppplVar40;
                  uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
                  if (((uVar26 & 1) != 0) &&
                     (ppplVar12 = (long ***)
                                  FUN_710392e290(0x10,ppplVar40,pppplVar14,param_8,param_9,param_10,
                                                 param_11,param_12), ppplVar12 != (long ***)0x0))
                  goto LAB_7101e9e078;
                }
                goto LAB_7101e9e074;
              }
            }
LAB_7101e9e078:
            piVar3 = (int *)((long)ppplVar12 + uVar36 * 4);
            ppplVar38 = (long ***)((long)ppplVar12 + uVar28 * 4);
            ppplVar40 = (long ***)(piVar3 + 1);
            *piVar3 = (int)uVar39;
            if (0 < (long)pppplVar37) {
              memcpy(ppplVar12,ppplVar24,(size_t)pppplVar37);
              pppplVar14 = pppplVar37;
            }
            local_d0 = ppplVar12;
            local_c8 = ppplVar40;
            local_c0 = ppplVar38;
            if (ppplVar24 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar24);
            }
          }
          else {
            *(int *)ppplVar40 = (int)uVar39;
            ppplVar40 = (long ***)((long)local_c8 + 4);
            local_c8 = ppplVar40;
          }
          lVar17 = *(long *)(param_5 + 0xd0);
          lVar41 = *(long *)(lVar17 + 0x38);
          lVar25 = *(long *)(lVar17 + 0x40);
          uVar28 = lVar25 - lVar41 >> 6;
          if (uVar28 <= uVar10) goto LAB_7101e9e274;
          lVar30 = lVar41 + uVar10 * 0x40;
          lVar31 = *(long *)(lVar30 + 8);
          lVar30 = *(long *)(lVar30 + 0x10);
          uVar39 = uVar39 + 1;
        } while ((long)uVar39 < (long)(int)((ulong)(lVar30 - lVar31) >> 6));
      }
      if (uVar28 <= uVar10) goto LAB_7101e9e274;
      lVar41 = lVar41 + uVar10 * 0x40;
      dVar47 = dVar47 + 1080.0 + (double)fVar50;
      dVar8 = (double)NEON_ucvtf((ulong)*(uint *)(lVar41 + 4));
      param_3 = dVar47 / dVar8;
      *(double *)(lVar41 + 0x30) = param_3;
      lVar17 = *(long *)(param_5 + 0xd0);
      lVar41 = *(long *)(lVar17 + 0x38);
      lVar25 = *(long *)(lVar17 + 0x40);
      if ((ulong)(lVar25 - lVar41 >> 6) <= uVar10) goto LAB_7101e9e274;
      lVar30 = lVar41 + uVar10 * 0x40;
      lVar31 = *(long *)(lVar30 + 8);
      lVar30 = *(long *)(lVar30 + 0x10);
      if (0 < (int)((ulong)(lVar30 - lVar31) >> 6)) {
        lVar27 = 0;
        uVar28 = 0;
        do {
          if ((ulong)(lVar25 - lVar41 >> 6) <= uVar10) {
LAB_7101e9e278:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((ulong)(lVar30 - lVar31 >> 6) <= uVar28) {
LAB_7101e9e280:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          param_4 = (double)NEON_ucvtf((ulong)*(uint *)(lVar41 + uVar10 * 0x40));
          param_3 = ((double)*(float *)(lVar31 + lVar27 + 0x38) / dVar47) * dVar8 + param_4;
          *(double *)(lVar31 + lVar27 + 0x30) = param_3;
          lVar17 = *(long *)(param_5 + 0xd0);
          lVar41 = *(long *)(lVar17 + 0x38);
          lVar25 = *(long *)(lVar17 + 0x40);
          if ((ulong)(lVar25 - lVar41 >> 6) <= uVar10) goto LAB_7101e9e274;
          lVar30 = lVar41 + uVar10 * 0x40;
          lVar31 = *(long *)(lVar30 + 8);
          lVar30 = *(long *)(lVar30 + 0x10);
          uVar28 = uVar28 + 1;
          lVar27 = lVar27 + 0x40;
        } while ((long)uVar28 < (long)(int)((ulong)(lVar30 - lVar31) >> 6));
      }
      if (local_d0 != (long ***)0x0) {
        local_c8 = local_d0;
        FUN_710392eb40((ulong)local_d0);
        lVar17 = *(long *)(param_5 + 0xd0);
      }
      lVar41 = *(long *)(lVar17 + 0x38);
      lVar25 = *(long *)(lVar17 + 0x40);
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)(int)((ulong)(lVar25 - lVar41) >> 6));
  }
  if (*(uint *)(param_5 + 0xb4) < 0x13) {
    *(undefined4 *)(param_5 + (long)(int)*(uint *)(param_5 + 0xb4) * 4 + 0x68) = 1;
    return;
  }
LAB_7101e9e2a8:
                    /* WARNING: Subroutine does not return */
  abort();
}

