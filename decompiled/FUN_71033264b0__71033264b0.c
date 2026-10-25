// addr:      71033264b0
// offset:    0x33264b0
// name:      FUN_71033264b0
// mangled:   
// signature: undefined __cdecl FUN_71033264b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007103329598) */
/* WARNING: Removing unreachable block (ram,0x007103328f94) */
/* WARNING: Removing unreachable block (ram,0x007103327f74) */
/* WARNING: Removing unreachable block (ram,0x007103329c44) */

void FUN_71033264b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long **pplVar7;
  long **pplVar8;
  undefined4 uVar9;
  char cVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  long ***ppplVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  ulong *puVar29;
  ulong *puVar30;
  long ***ppplVar31;
  void *pvVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  long ****pppplVar35;
  byte ****ppppbVar36;
  long ****pppplVar37;
  byte ****ppppbVar38;
  undefined8 uVar39;
  undefined4 uVar40;
  long lVar41;
  byte *pbVar42;
  ulong *puVar43;
  ulong *puVar44;
  undefined8 *puVar45;
  char *pcVar46;
  long **pplVar47;
  ulong uVar48;
  ulong *puVar49;
  ulong *puVar50;
  ulong uVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  ulong uVar55;
  undefined1 uVar56;
  long lVar57;
  undefined8 *puVar58;
  size_t __n;
  void *pvVar59;
  long ***ppplVar60;
  long ****pppplVar61;
  long ***ppplVar62;
  long ***ppplVar63;
  long lVar64;
  long ***local_100;
  long ***local_f8;
  undefined8 local_e8;
  ulong *local_e0;
  ulong *local_d8;
  long ***local_d0;
  long ***local_c8;
  undefined8 uStack_c0;
  long ***local_b8;
  long ***local_b0;
  long ***local_a8;
  undefined4 local_6c [3];
  
  FUN_710332a150(param_1);
  lVar64 = *(long *)(DAT_710532f730 + 8);
  lVar57 = *(long *)(lVar64 + 0x1b8);
  lVar41 = *(long *)(lVar57 + 8);
  pcVar46 = *(char **)(lVar41 + 0x20);
  if ((*pcVar46 == '\f') && (iVar25 = *(int *)(pcVar46 + 1) + -1, 0 < *(int *)(pcVar46 + 1))) {
    iVar19 = 0;
    uVar51 = *(ulong *)(lVar41 + 0x48) & 0xffffffffff;
    pbVar42 = &DAT_7104742dbb;
    do {
      iVar4 = iVar25 + iVar19;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar41 + 0x18) + 0x28) + (long)*(int *)(pcVar46 + 5) +
                       (long)iVar4 * 8);
      uVar55 = *(ulong *)(*(long *)(*(long *)(lVar41 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar55 == uVar51) {
        uVar26 = puVar1[1];
        if ((int)uVar26 < 0) goto LAB_710332657c;
        pbVar42 = (byte *)(pcVar46 + (int)uVar26);
        break;
      }
      iVar15 = iVar4 + -1;
      if (uVar55 <= uVar51) {
        iVar19 = iVar4 + 1;
        iVar15 = iVar25;
      }
      iVar25 = iVar15;
    } while (iVar19 <= iVar25);
  }
  else {
LAB_710332657c:
    pbVar42 = &DAT_7104742dbb;
  }
  if ((*pbVar42 - 0xb < 2) && (iVar25 = *(int *)(pbVar42 + 1), 0 < iVar25)) {
    uVar26 = 0;
    do {
      uVar51 = FUN_71032b70b0(lVar57,uVar26);
      if (((uVar51 & 0xff00000000000000) == 0x800000000000000) && ((uVar51 & 0xffffffffff) != 0)) {
        uVar55 = FUN_71032b92a0(lVar57,uVar51);
        lVar41 = DAT_710532f730;
        if ((uVar55 & 0xffffffffff) == 0) {
LAB_71033266ec:
          iVar19 = FUN_71033182f0((long *)(param_1 + 0x38),uVar51);
          puVar49 = (ulong *)(param_1 + 0x18);
          if (-1 < iVar19) {
            if ((ulong)(long)iVar19 <
                (ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 4)) {
              puVar49 = (ulong *)(*(long *)(param_1 + 0x38) + (long)iVar19 * 0x10);
            }
          }
          if ((((*puVar49 & 0xff00000000000000) == 0x800000000000000) &&
              ((*puVar49 & 0xffffffffff) != 0)) && ((int)puVar49[1] - 1U < 2)) {
            uVar55 = FUN_71032b6c10(*(long *)(lVar64 + 0x1b8),uVar51);
            if ((int)uVar55 == -1) {
              local_b0 = (long ***)((ulong)local_b0 & 0xffffffffffffff00);
              local_b8 = (long ***)0x0;
            }
            else {
              FUN_71003a4ca0((uint *)&local_b8,"tip_text_%04d",uVar55 & 0xffffffff,param_3,param_4,
                             param_5,param_6,param_7,param_8);
            }
            bVar16 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)&local_b0);
            if (bVar16) {
              uVar55 = FUN_71032b6c10(*(long *)(lVar64 + 0x1b8),uVar51);
              uVar20 = (undefined4)uVar55;
              uVar55 = FUN_71032b71b0(*(long *)(lVar64 + 0x1b8),uVar51);
              uVar21 = (undefined4)uVar55;
              bVar16 = FUN_71032b7ea0(*(long *)(lVar64 + 0x1b8),uVar51);
              uVar22 = (uint)bVar16;
              bVar17 = FUN_71032b8f90(*(long *)(lVar64 + 0x1b8),uVar51);
              local_c8 = (long ***)0x0;
              uStack_c0 = 0;
              local_d0 = (long ***)0x0;
              bVar16 = (int)puVar49[1] == 1;
              uVar23 = (uint)bVar17;
              param_3 = &local_d0;
              FUN_71032b81b0(*(long *)(lVar64 + 0x1b8),uVar51,param_3,param_4,param_5,param_6,
                             param_7,param_8);
              ppplVar60 = local_c8;
              if (local_d0 != local_c8) {
                pplVar47 = local_d0[1];
                uVar9 = *(undefined4 *)local_d0;
                uVar56 = 1;
                uVar12 = 1;
                uVar13 = 1;
                uVar11 = 1;
                ppplVar31 = local_d0;
                uVar40 = uVar9;
                do {
                  uVar55 = 0x555555555555555;
                  switch(uVar40) {
                  case 1:
                    ppplVar62 = (long ***)
                                FUN_71032631a0(*(long *)(lVar64 + 0x168),(ulong)ppplVar31[1]);
                    if (((ulong)ppplVar62 & 0xff00000000000000) == 0xc100000000000000 &&
                        ((ulong)ppplVar62 & 0xffffffffff) != 0) {
                      iVar19 = FUN_710332a410((long *)(param_1 + 0xe0),(ulong)ppplVar62);
                      if (iVar19 < 0) {
                        puVar58 = *(undefined8 **)(param_1 + 0xe8);
LAB_7103326dbc:
                        local_b0 = (long ***)0x0;
                        local_a8 = (long ***)0x0;
                        local_b8 = ppplVar62;
                        if (puVar58 < *(undefined8 **)(param_1 + 0xf0)) {
                          puVar58[2] = 0;
                          puVar58[3] = 0;
                          *puVar58 = ppplVar62;
                          puVar58[1] = 0;
                          puVar58[1] = 0;
                          puVar58[2] = 0;
                          puVar58[3] = 0;
                          local_b0 = (long ***)0x0;
                          local_a8 = (long ***)0x0;
                          *(long *)(param_1 + 0xe8) = *(long *)(param_1 + 0xe8) + 0x20;
                        }
                        else {
                          FUN_710332a4d0((long *)(param_1 + 0xe0),&local_b8,param_3,param_4,param_5,
                                         param_6,param_7,param_8);
                          if (local_b0 != (long ***)0x0) {
                            local_a8 = local_b0;
                            FUN_710392eb40((ulong)local_b0);
                          }
                        }
                        puVar29 = (ulong *)(*(long *)(param_1 + 0xe8) + -0x20);
                      }
                      else {
                        puVar58 = *(undefined8 **)(param_1 + 0xe8);
                        if ((ulong)((long)puVar58 - *(long *)(param_1 + 0xe0) >> 5) <=
                            (ulong)(long)iVar19) goto LAB_7103326dbc;
                        puVar29 = (ulong *)(*(long *)(param_1 + 0xe0) + (long)iVar19 * 0x20);
                      }
                      uVar55 = 0x555555555555555;
                      puVar49 = (ulong *)puVar29[2];
                      uVar11 = uVar56;
                      if (puVar49 == (ulong *)puVar29[3]) {
                        pvVar59 = (void *)puVar29[1];
                        pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                        uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                        if (0x555555555555555 < uVar27) goto LAB_710332a144;
                        lVar41 = (long)puVar29[3] - (long)pvVar59 >> 4;
                        if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                          uVar48 = lVar41 * 0x5555555555555556;
                          uVar55 = uVar27;
                          if (uVar27 <= uVar48) {
                            uVar55 = uVar48;
                          }
                          if (uVar55 != 0) goto LAB_7103326f08;
                          lVar41 = 0;
                        }
                        else {
LAB_7103326f08:
                          ppplVar62 = (long ***)(uVar55 * 0x30);
                          if (ppplVar62 == (long ***)0x0) {
                            ppplVar62 = (long ***)0x1;
                          }
                          lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                  param_7,param_8);
                          if (lVar41 == 0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                              param_3 = &local_b8;
                              local_b8 = ppplVar62;
                              uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,&local_100);
                              if (((uVar27 & 1) != 0) &&
                                 (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                          param_6,param_7,param_8), lVar41 != 0))
                              goto LAB_7103326f70;
                            }
                            lVar41 = 0;
                          }
                        }
LAB_7103326f70:
                        puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                        *(undefined4 *)(puVar49 + 1) = uVar20;
                        *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                        *(uint *)(puVar49 + 2) = uVar22;
                        *(uint *)((long)puVar49 + 0x14) = uVar23;
                        *(undefined4 *)(puVar49 + 3) = uVar9;
                        puVar49[4] = (ulong)pplVar47;
                        *(bool *)(puVar49 + 5) = bVar16;
                        *puVar49 = uVar51;
                        *(undefined1 *)((long)puVar49 + 0x29) = uVar56;
                        *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                        lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                        *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                        if (0 < (long)pppplVar35) {
                          memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                                 (size_t)pppplVar35);
                          param_3 = pppplVar35;
                        }
                        puVar29[1] = (ulong)(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6);
                        puVar29[2] = (ulong)(puVar49 + 6);
                        puVar29[3] = lVar41 + uVar55 * 0x30;
                        if (pvVar59 == (void *)0x0) {
                          uVar56 = 0;
                        }
                        else {
                          FUN_710392eb40((ulong)pvVar59);
                          uVar56 = 0;
                        }
                      }
                      else {
                        uVar56 = 0;
LAB_7103327070:
                        *puVar49 = uVar51;
                        *(undefined4 *)(puVar49 + 1) = uVar20;
                        *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                        *(uint *)(puVar49 + 2) = uVar22;
                        *(uint *)((long)puVar49 + 0x14) = uVar23;
                        *(undefined4 *)(puVar49 + 3) = uVar9;
                        puVar49[4] = (ulong)pplVar47;
                        *(bool *)(puVar49 + 5) = bVar16;
                        *(undefined1 *)((long)puVar49 + 0x29) = uVar11;
                        *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                        *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                        puVar29[2] = puVar29[2] + 0x30;
                      }
                    }
                    break;
                  case 2:
                    ppplVar62 = (long ***)
                                FUN_71032b23e0(*(long *)(*(long *)(lVar64 + 0x178) + 8),
                                               (ulong)ppplVar31[1]);
                    if (((ulong)ppplVar62 & 0xff00000000000000) == 0x6900000000000000 &&
                        ((ulong)ppplVar62 & 0xffffffffff) != 0) {
                      iVar19 = FUN_710332a6b0((long *)(param_1 + 0xf8),(ulong)ppplVar62);
                      if (iVar19 < 0) {
                        puVar58 = *(undefined8 **)(param_1 + 0x100);
LAB_7103326e18:
                        local_b0 = (long ***)0x0;
                        local_a8 = (long ***)0x0;
                        local_b8 = ppplVar62;
                        if (puVar58 < *(undefined8 **)(param_1 + 0x108)) {
                          puVar58[2] = 0;
                          puVar58[3] = 0;
                          *puVar58 = ppplVar62;
                          puVar58[1] = 0;
                          puVar58[1] = 0;
                          puVar58[2] = 0;
                          puVar58[3] = 0;
                          local_b0 = (long ***)0x0;
                          local_a8 = (long ***)0x0;
                          *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 0x20;
                        }
                        else {
                          FUN_710332a770((long *)(param_1 + 0xf8),&local_b8,param_3,param_4,param_5,
                                         param_6,param_7,param_8);
                          if (local_b0 != (long ***)0x0) {
                            local_a8 = local_b0;
                            FUN_710392eb40((ulong)local_b0);
                          }
                        }
                        puVar29 = (ulong *)(*(long *)(param_1 + 0x100) + -0x20);
                      }
                      else {
                        puVar58 = *(undefined8 **)(param_1 + 0x100);
                        if ((ulong)((long)puVar58 - *(long *)(param_1 + 0xf8) >> 5) <=
                            (ulong)(long)iVar19) goto LAB_7103326e18;
                        puVar29 = (ulong *)(*(long *)(param_1 + 0xf8) + (long)iVar19 * 0x20);
                      }
                      uVar55 = 0x555555555555555;
                      puVar49 = (ulong *)puVar29[2];
                      uVar11 = uVar12;
                      if (puVar49 != (ulong *)puVar29[3]) {
                        uVar12 = 0;
                        goto LAB_7103327070;
                      }
                      pvVar59 = (void *)puVar29[1];
                      pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                      uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                      if (0x555555555555555 < uVar27) goto LAB_710332a144;
                      lVar41 = (long)puVar29[3] - (long)pvVar59 >> 4;
                      if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                        uVar48 = lVar41 * 0x5555555555555556;
                        uVar55 = uVar27;
                        if (uVar27 <= uVar48) {
                          uVar55 = uVar48;
                        }
                        if (uVar55 != 0) goto LAB_7103327130;
                        lVar41 = 0;
                      }
                      else {
LAB_7103327130:
                        ppplVar62 = (long ***)(uVar55 * 0x30);
                        if (ppplVar62 == (long ***)0x0) {
                          ppplVar62 = (long ***)0x1;
                        }
                        lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                param_7,param_8);
                        if (lVar41 == 0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                            param_3 = &local_b8;
                            local_b8 = ppplVar62;
                            uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                               (DAT_7105332f00,&local_100);
                            if (((uVar27 & 1) != 0) &&
                               (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                        param_6,param_7,param_8), lVar41 != 0))
                            goto LAB_7103327198;
                          }
                          lVar41 = 0;
                        }
                      }
LAB_7103327198:
                      puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                      *(undefined4 *)(puVar49 + 1) = uVar20;
                      *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                      *(uint *)(puVar49 + 2) = uVar22;
                      *(uint *)((long)puVar49 + 0x14) = uVar23;
                      *(undefined4 *)(puVar49 + 3) = uVar9;
                      puVar49[4] = (ulong)pplVar47;
                      *(bool *)(puVar49 + 5) = bVar16;
                      *puVar49 = uVar51;
                      *(undefined1 *)((long)puVar49 + 0x29) = uVar12;
                      *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                      lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                      *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                      if (0 < (long)pppplVar35) {
                        memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                               (size_t)pppplVar35);
                        param_3 = pppplVar35;
                      }
                      puVar29[1] = (ulong)(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6);
                      puVar29[2] = (ulong)(puVar49 + 6);
                      puVar29[3] = lVar41 + uVar55 * 0x30;
                      if (pvVar59 == (void *)0x0) {
                        uVar12 = 0;
                      }
                      else {
                        FUN_710392eb40((ulong)pvVar59);
                        uVar12 = 0;
                      }
                    }
                    break;
                  case 4:
                    lVar41 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x268);
                    uVar55 = FUN_710327fb30(*(long *)(lVar41 + 8),(ulong)ppplVar31[1]);
                    if ((uVar55 & 0xff00000000000000) == 0x1e00000000000000 &&
                        (uVar55 & 0xffffffffff) != 0) {
                      uVar39 = FUN_7103280000(lVar41,uVar55);
                      uVar11 = uVar13;
                      if ((int)uVar39 == 0xe) {
                        puVar49 = *(ulong **)(param_1 + 0x130);
                        uVar55 = 0x555555555555555;
                        if (puVar49 != *(ulong **)(param_1 + 0x138)) {
                          *(undefined4 *)(puVar49 + 1) = uVar20;
                          *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                          *(uint *)(puVar49 + 2) = uVar22;
                          *(uint *)((long)puVar49 + 0x14) = uVar23;
                          *(undefined4 *)(puVar49 + 3) = uVar9;
                          puVar49[4] = (ulong)pplVar47;
                          *(bool *)(puVar49 + 5) = bVar16;
                          *puVar49 = uVar51;
                          *(undefined1 *)((long)puVar49 + 0x29) = uVar13;
                          *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                          *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                          *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 0x30;
                          uVar13 = 0;
                          break;
                        }
                        pvVar59 = *(void **)(param_1 + 0x128);
                        pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                        uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                        if (0x555555555555555 < uVar27) {
                    /* WARNING: Subroutine does not return */
                          std::__vector_base_common<true>::__throw_length_error();
                        }
                        lVar41 = (long)*(ulong **)(param_1 + 0x138) - (long)pvVar59 >> 4;
                        if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                          uVar48 = lVar41 * 0x5555555555555556;
                          uVar55 = uVar27;
                          if (uVar27 <= uVar48) {
                            uVar55 = uVar48;
                          }
                          if (uVar55 != 0) goto LAB_7103327608;
                          lVar41 = 0;
                        }
                        else {
LAB_7103327608:
                          ppplVar62 = (long ***)(uVar55 * 0x30);
                          if (ppplVar62 == (long ***)0x0) {
                            ppplVar62 = (long ***)0x1;
                          }
                          lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                  param_7,param_8);
                          if (lVar41 == 0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                              param_3 = &local_b8;
                              local_b8 = ppplVar62;
                              uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,&local_100);
                              if (((uVar27 & 1) != 0) &&
                                 (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                          param_6,param_7,param_8), lVar41 != 0))
                              goto LAB_7103327670;
                            }
                            lVar41 = 0;
                          }
                        }
LAB_7103327670:
                        puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                        *(undefined4 *)(puVar49 + 1) = uVar20;
                        *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                        *(uint *)(puVar49 + 2) = uVar22;
                        *(uint *)((long)puVar49 + 0x14) = uVar23;
                        *(undefined4 *)(puVar49 + 3) = uVar9;
                        puVar49[4] = (ulong)pplVar47;
                        *(bool *)(puVar49 + 5) = bVar16;
                        *puVar49 = uVar51;
                        *(undefined1 *)((long)puVar49 + 0x29) = uVar13;
                        *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                        lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                        *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                        if (0 < (long)pppplVar35) {
                          memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                                 (size_t)pppplVar35);
                          param_3 = pppplVar35;
                        }
                        *(ulong **)(param_1 + 0x128) =
                             puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
                        *(ulong **)(param_1 + 0x130) = puVar49 + 6;
                        *(ulong *)(param_1 + 0x138) = lVar41 + uVar55 * 0x30;
                      }
                      else {
                        uVar55 = 0x555555555555555;
                        if ((int)uVar39 == 0xf) {
                          puVar49 = *(ulong **)(param_1 + 0x148);
                          if (puVar49 != *(ulong **)(param_1 + 0x150)) {
                            *(undefined4 *)(puVar49 + 1) = uVar20;
                            *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                            *(uint *)(puVar49 + 2) = uVar22;
                            *(uint *)((long)puVar49 + 0x14) = uVar23;
                            *(undefined4 *)(puVar49 + 3) = uVar9;
                            puVar49[4] = (ulong)pplVar47;
                            *(bool *)(puVar49 + 5) = bVar16;
                            *puVar49 = uVar51;
                            *(undefined1 *)((long)puVar49 + 0x29) = uVar13;
                            *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                            *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                            *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x148) + 0x30;
                            uVar13 = 0;
                            break;
                          }
                          pvVar59 = *(void **)(param_1 + 0x140);
                          pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                          uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                          if (0x555555555555555 < uVar27) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar41 = (long)*(ulong **)(param_1 + 0x150) - (long)pvVar59 >> 4;
                          if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                            uVar48 = lVar41 * 0x5555555555555556;
                            uVar55 = uVar27;
                            if (uVar27 <= uVar48) {
                              uVar55 = uVar48;
                            }
                            if (uVar55 != 0) goto LAB_7103327480;
                            lVar41 = 0;
                          }
                          else {
LAB_7103327480:
                            ppplVar62 = (long ***)(uVar55 * 0x30);
                            if (ppplVar62 == (long ***)0x0) {
                              ppplVar62 = (long ***)0x1;
                            }
                            lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                    param_7,param_8);
                            if (lVar41 == 0) {
                              if (DAT_7105332f00 != (long *)0x0) {
                                local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                                param_3 = &local_b8;
                                local_b8 = ppplVar62;
                                uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                   (DAT_7105332f00,&local_100);
                                if (((uVar27 & 1) != 0) &&
                                   (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                            param_6,param_7,param_8), lVar41 != 0))
                                goto LAB_71033274e8;
                              }
                              lVar41 = 0;
                            }
                          }
LAB_71033274e8:
                          puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                          *(undefined4 *)(puVar49 + 1) = uVar20;
                          *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                          *(uint *)(puVar49 + 2) = uVar22;
                          *(uint *)((long)puVar49 + 0x14) = uVar23;
                          *(undefined4 *)(puVar49 + 3) = uVar9;
                          puVar49[4] = (ulong)pplVar47;
                          *(bool *)(puVar49 + 5) = bVar16;
                          *puVar49 = uVar51;
                          *(undefined1 *)((long)puVar49 + 0x29) = uVar13;
                          *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                          lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8
                                         );
                          *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                          if (0 < (long)pppplVar35) {
                            memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                                   (size_t)pppplVar35);
                            param_3 = pppplVar35;
                          }
                          *(ulong **)(param_1 + 0x140) =
                               puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
                          *(ulong **)(param_1 + 0x148) = puVar49 + 6;
                          *(ulong *)(param_1 + 0x150) = lVar41 + uVar55 * 0x30;
                        }
                        else {
                          puVar49 = *(ulong **)(param_1 + 0x160);
                          if (puVar49 != *(ulong **)(param_1 + 0x168)) {
                            *(undefined4 *)(puVar49 + 1) = uVar20;
                            *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                            *(uint *)(puVar49 + 2) = uVar22;
                            *(uint *)((long)puVar49 + 0x14) = uVar23;
                            *(undefined4 *)(puVar49 + 3) = uVar9;
                            puVar49[4] = (ulong)pplVar47;
                            *(bool *)(puVar49 + 5) = bVar16;
                            *puVar49 = uVar51;
                            *(undefined1 *)((long)puVar49 + 0x29) = uVar13;
                            *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                            *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                            *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 0x30;
                            uVar13 = 0;
                            break;
                          }
                          pvVar59 = *(void **)(param_1 + 0x158);
                          pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                          uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                          if (0x555555555555555 < uVar27) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar41 = (long)*(ulong **)(param_1 + 0x168) - (long)pvVar59 >> 4;
                          if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                            uVar48 = lVar41 * 0x5555555555555556;
                            uVar55 = uVar27;
                            if (uVar27 <= uVar48) {
                              uVar55 = uVar48;
                            }
                            if (uVar55 != 0) goto LAB_7103327778;
                            lVar41 = 0;
                          }
                          else {
LAB_7103327778:
                            ppplVar62 = (long ***)(uVar55 * 0x30);
                            if (ppplVar62 == (long ***)0x0) {
                              ppplVar62 = (long ***)0x1;
                            }
                            lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                    param_7,param_8);
                            if (lVar41 == 0) {
                              if (DAT_7105332f00 != (long *)0x0) {
                                local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                                param_3 = &local_b8;
                                local_b8 = ppplVar62;
                                uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                   (DAT_7105332f00,&local_100);
                                if (((uVar27 & 1) != 0) &&
                                   (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                            param_6,param_7,param_8), lVar41 != 0))
                                goto LAB_71033277e0;
                              }
                              lVar41 = 0;
                            }
                          }
LAB_71033277e0:
                          puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                          *(undefined4 *)(puVar49 + 1) = uVar20;
                          *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                          *(uint *)(puVar49 + 2) = uVar22;
                          *(uint *)((long)puVar49 + 0x14) = uVar23;
                          *(undefined4 *)(puVar49 + 3) = uVar9;
                          puVar49[4] = (ulong)pplVar47;
                          *(bool *)(puVar49 + 5) = bVar16;
                          *puVar49 = uVar51;
                          *(undefined1 *)((long)puVar49 + 0x29) = uVar13;
                          *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                          lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8
                                         );
                          *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                          if (0 < (long)pppplVar35) {
                            memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                                   (size_t)pppplVar35);
                            param_3 = pppplVar35;
                          }
                          *(ulong **)(param_1 + 0x158) =
                               puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
                          *(ulong **)(param_1 + 0x160) = puVar49 + 6;
                          *(ulong *)(param_1 + 0x168) = lVar41 + uVar55 * 0x30;
                        }
                      }
                      if (pvVar59 != (void *)0x0) {
                        FUN_710392eb40((ulong)pvVar59);
                      }
                      uVar13 = 0;
                    }
                    break;
                  case 5:
                    lVar41 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
                    uVar55 = FUN_71032a9400(lVar41,(ulong)ppplVar31[1]);
                    uVar24 = FUN_71032a7800(lVar41,uVar55 & 0xffffffffff);
                    if ((uVar24 < (uint)((int)((ulong)(*(long *)(lVar41 + 0x28) -
                                                      *(long *)(lVar41 + 0x20)) >> 6) * -0x33333333)
                        ) && (uVar27 = *(ulong *)(*(long *)(lVar41 + 0x20) + (ulong)uVar24 * 0x140 +
                                                 0x60),
                             (((uVar27 & 0xff00000000000000) == 0x2d00000000000000 &&
                              (uVar27 & 0xffffffffff) != 0) &&
                             (uVar55 & 0xff00000000000000) == 0x7f00000000000000) &&
                             (uVar55 & 0xffffffffff) != 0)) {
                      puVar29 = *(ulong **)(param_1 + 0x110);
                      puVar44 = *(ulong **)(param_1 + 0x118);
                      puVar30 = puVar29;
                      puVar49 = puVar29;
                      while ((puVar49 != puVar44 &&
                             (uVar55 = *puVar49, puVar30 = puVar49,
                             ((uVar55 & 0xff00000000000000) != 0x2d00000000000000 ||
                             (uVar55 & 0xffffffffff) == 0) ||
                             ((uVar27 ^ uVar55) & 0xffffffffff) != 0))) {
                        puVar49 = puVar49 + 4;
                        puVar30 = puVar44;
                      }
                      if (((puVar44 == puVar30) ||
                          (((ulong)((long)puVar30 - (long)puVar29) >> 0x24 & 1) != 0)) ||
                         (uVar55 = ((long)puVar30 - (long)puVar29) * 0x8000000 >> 0x20,
                         (ulong)((long)puVar44 - (long)puVar29 >> 5) <= uVar55)) {
                        if (puVar44 < *(ulong **)(param_1 + 0x120)) {
                          puVar44[2] = 0;
                          puVar44[3] = 0;
                          *puVar44 = uVar27;
                          puVar44[1] = 0;
                          lVar41 = *(long *)(param_1 + 0x118) + 0x20;
                          *(long *)(param_1 + 0x118) = lVar41;
                        }
                        else {
                          lVar41 = (long)puVar44 - (long)puVar29 >> 5;
                          uVar55 = lVar41 + 1;
                          if (uVar55 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar57 = (long)*(ulong **)(param_1 + 0x120) - (long)puVar29;
                          if ((ulong)(lVar57 >> 5) < 0x3ffffffffffffff) {
                            uVar48 = lVar57 >> 4;
                            if (uVar55 <= uVar48) {
                              uVar55 = uVar48;
                            }
                            if (uVar55 != 0) {
                              if (uVar55 >> 0x3b == 0) goto LAB_71033278e8;
                              goto LAB_710332a0fc;
                            }
                            lVar57 = 0;
                          }
                          else {
                            uVar55 = 0x7ffffffffffffff;
LAB_71033278e8:
                            ppplVar62 = (long ***)(uVar55 * 0x20);
                            if (ppplVar62 == (long ***)0x0) {
                              ppplVar62 = (long ***)0x1;
                            }
                            lVar57 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                    param_7,param_8);
                            if (lVar57 == 0) {
                              if (DAT_7105332f00 != (long *)0x0) {
                                local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                                param_3 = &local_b8;
                                local_b8 = ppplVar62;
                                uVar48 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                   (DAT_7105332f00,&local_100);
                                if (((uVar48 & 1) != 0) &&
                                   (lVar57 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                            param_6,param_7,param_8), lVar57 != 0))
                                goto LAB_7103327944;
                              }
                              lVar57 = 0;
                            }
LAB_7103327944:
                            puVar29 = *(ulong **)(param_1 + 0x110);
                            puVar44 = *(ulong **)(param_1 + 0x118);
                          }
                          puVar30 = (ulong *)(lVar57 + lVar41 * 0x20);
                          puVar49 = puVar30 + 4;
                          puVar30[2] = 0;
                          puVar30[3] = 0;
                          *puVar30 = uVar27;
                          puVar30[1] = 0;
                          if (puVar44 != puVar29) {
                            uVar27 = (long)puVar44 + (-0x20 - (long)puVar29);
                            puVar43 = puVar44;
                            puVar50 = puVar30;
                            if (((uint)uVar27 >> 5 & 1) == 0) {
                              puVar43 = puVar44 + -4;
                              puVar50 = puVar30 + -4;
                              *puVar50 = *puVar43;
                              puVar30[-2] = 0;
                              puVar30[-1] = 0;
                              puVar30[-3] = 0;
                              puVar30[-3] = puVar44[-3];
                              puVar30[-2] = puVar44[-2];
                              puVar30[-1] = puVar44[-1];
                              puVar44[-2] = 0;
                              puVar44[-1] = 0;
                              puVar44[-3] = 0;
                            }
                            if (0x1f < uVar27) {
                              lVar53 = 0;
                              do {
                                uVar39 = *(undefined8 *)((long)puVar43 + lVar53 + -0x20);
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x10) = 0;
                                *(undefined8 *)((long)puVar50 + lVar53 + -8) = 0;
                                lVar54 = lVar53 + -0x40;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x20) = uVar39;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x18) = 0;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x18) =
                                     *(undefined8 *)((long)puVar43 + lVar53 + -0x18);
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x10) =
                                     *(undefined8 *)((long)puVar43 + lVar53 + -0x10);
                                *(undefined8 *)((long)puVar50 + lVar53 + -8) =
                                     *(undefined8 *)((long)puVar43 + lVar53 + -8);
                                uVar39 = *(undefined8 *)((long)puVar43 + lVar53 + -0x40);
                                *(undefined8 *)((long)puVar43 + lVar53 + -0x10) = 0;
                                *(undefined8 *)((long)puVar43 + lVar53 + -8) = 0;
                                *(undefined8 *)((long)puVar43 + lVar53 + -0x18) = 0;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x30) = 0;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x28) = 0;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x40) = uVar39;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x38) = 0;
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x38) =
                                     *(undefined8 *)((long)puVar43 + lVar53 + -0x38);
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x30) =
                                     *(undefined8 *)((long)puVar43 + lVar53 + -0x30);
                                *(undefined8 *)((long)puVar50 + lVar53 + -0x28) =
                                     *(undefined8 *)((long)puVar43 + lVar53 + -0x28);
                                *(undefined8 *)((long)puVar43 + lVar53 + -0x38) = 0;
                                *(undefined8 *)((long)puVar43 + lVar53 + -0x30) = 0;
                                *(undefined8 *)((long)puVar43 + lVar53 + -0x28) = 0;
                                lVar53 = lVar54;
                              } while ((long)puVar29 - (long)puVar43 != lVar54);
                            }
                            puVar30 = (ulong *)(lVar57 + (lVar41 + (uVar27 >> 5 ^ 0xffffffffffffffff
                                                                   )) * 0x20);
                            puVar29 = *(ulong **)(param_1 + 0x110);
                            puVar44 = *(ulong **)(param_1 + 0x118);
                          }
                          *(ulong **)(param_1 + 0x110) = puVar30;
                          *(ulong **)(param_1 + 0x118) = puVar49;
                          *(ulong *)(param_1 + 0x120) = lVar57 + uVar55 * 0x20;
                          while (puVar49 = puVar44, puVar49 != puVar29) {
                            uVar55 = puVar49[-3];
                            puVar44 = puVar49 + -4;
                            if (uVar55 != 0) {
                              puVar49[-2] = uVar55;
                              FUN_710392eb40(uVar55);
                            }
                          }
                          if (puVar29 != (ulong *)0x0) {
                            FUN_710392eb40((ulong)puVar29);
                          }
                          lVar41 = *(long *)(param_1 + 0x118);
                        }
                        puVar29 = (ulong *)(lVar41 + -0x20);
                      }
                      else {
                        puVar29 = puVar29 + uVar55 * 4;
                      }
                      uVar55 = 0x555555555555555;
                      puVar49 = (ulong *)puVar29[2];
                      if (puVar49 != (ulong *)puVar29[3]) goto LAB_7103327070;
                      pvVar59 = (void *)puVar29[1];
                      pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                      uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                      if (0x555555555555555 < uVar27) goto LAB_710332a144;
                      lVar41 = (long)puVar29[3] - (long)pvVar59 >> 4;
                      if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                        uVar48 = lVar41 * 0x5555555555555556;
                        uVar55 = uVar27;
                        if (uVar27 <= uVar48) {
                          uVar55 = uVar48;
                        }
                        if (uVar55 != 0) goto LAB_7103327b18;
                        lVar41 = 0;
                      }
                      else {
LAB_7103327b18:
                        ppplVar62 = (long ***)(uVar55 * 0x30);
                        if (ppplVar62 == (long ***)0x0) {
                          ppplVar62 = (long ***)0x1;
                        }
                        lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                param_7,param_8);
                        if (lVar41 == 0) {
                          if (DAT_7105332f00 != (long *)0x0) {
                            local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                            param_3 = &local_b8;
                            local_b8 = ppplVar62;
                            uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                               (DAT_7105332f00,&local_100);
                            if (((uVar27 & 1) != 0) &&
                               (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                        param_6,param_7,param_8), lVar41 != 0))
                            goto LAB_7103327b80;
                          }
                          lVar41 = 0;
                        }
                      }
LAB_7103327b80:
                      puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                      *(undefined4 *)(puVar49 + 1) = uVar20;
                      *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                      *(uint *)(puVar49 + 2) = uVar22;
                      *(uint *)((long)puVar49 + 0x14) = uVar23;
                      *(undefined4 *)(puVar49 + 3) = uVar9;
                      puVar49[4] = (ulong)pplVar47;
                      *(bool *)(puVar49 + 5) = bVar16;
                      *puVar49 = uVar51;
                      *(undefined1 *)((long)puVar49 + 0x29) = uVar11;
                      *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                      lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                      *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                      if (0 < (long)pppplVar35) {
                        memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                               (size_t)pppplVar35);
                        param_3 = pppplVar35;
                      }
                      puVar29[1] = (ulong)(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6);
                      puVar29[2] = (ulong)(puVar49 + 6);
                      puVar29[3] = lVar41 + uVar55 * 0x30;
                      if (pvVar59 != (void *)0x0) {
                        FUN_710392eb40((ulong)pvVar59);
                      }
                    }
                    break;
                  case 6:
                    uVar27 = (ulong)ppplVar31[1] & 0xffffffffff;
                    if (uVar27 < 0xd1390a31c) {
                      if (uVar27 < 0xb37f2b475) {
                        if ((uVar27 == 0x8d31f7951) || (uVar27 == 0xa3d7b525e)) goto LAB_7103326bc0;
                      }
                      else if ((uVar27 == 0xb37f2b475) || (uVar27 == 0xbf4c78756))
                      goto LAB_7103326bc0;
                    }
                    else if (uVar27 < 0xf3e130387) {
                      if ((uVar27 == 0xd1390a31c) || (uVar27 == 0xdd675fe14)) goto LAB_7103326bc0;
                    }
                    else if ((uVar27 == 0xf3e130387) ||
                            ((uVar27 == 0x16162a9190 || (uVar27 == 0xfb56f72e5)))) {
LAB_7103326bc0:
                      puVar49 = *(ulong **)(param_1 + 0x178);
                      if (puVar49 == *(ulong **)(param_1 + 0x180)) {
                        pvVar59 = *(void **)(param_1 + 0x170);
                        pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                        uVar27 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                        if (0x555555555555555 < uVar27) goto LAB_710332a144;
                        lVar41 = (long)*(ulong **)(param_1 + 0x180) - (long)pvVar59 >> 4;
                        if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                          uVar48 = lVar41 * 0x5555555555555556;
                          uVar55 = uVar27;
                          if (uVar27 <= uVar48) {
                            uVar55 = uVar48;
                          }
                          if (uVar55 != 0) goto LAB_7103326c8c;
                          lVar41 = 0;
                        }
                        else {
LAB_7103326c8c:
                          ppplVar62 = (long ***)(uVar55 * 0x30);
                          if (ppplVar62 == (long ***)0x0) {
                            ppplVar62 = (long ***)0x1;
                          }
                          lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,param_6,
                                                  param_7,param_8);
                          if (lVar41 == 0) {
                            if (DAT_7105332f00 != (long *)0x0) {
                              local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                              param_3 = &local_b8;
                              local_b8 = ppplVar62;
                              uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                 (DAT_7105332f00,&local_100);
                              if (((uVar27 & 1) != 0) &&
                                 (lVar41 = FUN_710392e290(0x10,ppplVar62,param_3,param_4,param_5,
                                                          param_6,param_7,param_8), lVar41 != 0))
                              goto LAB_7103326cf4;
                            }
                            lVar41 = 0;
                          }
                        }
LAB_7103326cf4:
                        puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                        *(undefined4 *)(puVar49 + 1) = uVar20;
                        *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                        *(uint *)(puVar49 + 2) = uVar22;
                        *(uint *)((long)puVar49 + 0x14) = uVar23;
                        *(undefined4 *)(puVar49 + 3) = uVar9;
                        puVar49[4] = (ulong)pplVar47;
                        *(bool *)(puVar49 + 5) = bVar16;
                        *puVar49 = uVar51;
                        *(undefined1 *)((long)puVar49 + 0x29) = uVar11;
                        *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                        lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                        *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                        if (0 < (long)pppplVar35) {
                          memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,
                                 (size_t)pppplVar35);
                          param_3 = pppplVar35;
                        }
                        *(ulong **)(param_1 + 0x170) =
                             puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
                        *(ulong **)(param_1 + 0x178) = puVar49 + 6;
                        *(ulong *)(param_1 + 0x180) = lVar41 + uVar55 * 0x30;
                        if (pvVar59 != (void *)0x0) {
                          FUN_710392eb40((ulong)pvVar59);
                        }
                      }
                      else {
                        *(undefined4 *)(puVar49 + 1) = uVar20;
                        *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                        *(uint *)(puVar49 + 2) = uVar22;
                        *(uint *)((long)puVar49 + 0x14) = uVar23;
                        *(undefined4 *)(puVar49 + 3) = uVar9;
                        puVar49[4] = (ulong)pplVar47;
                        *(bool *)(puVar49 + 5) = bVar16;
                        *puVar49 = uVar51;
                        *(undefined1 *)((long)puVar49 + 0x29) = uVar11;
                        *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                        *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                        *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 0x30;
                      }
                    }
                  }
                  ppplVar31 = ppplVar31 + 2;
                  if (ppplVar31 == ppplVar60) goto joined_r0x007103327cf4;
                  uVar40 = *(undefined4 *)ppplVar31;
                } while( true );
              }
              puVar49 = *(ulong **)(param_1 + 0x178);
              if (puVar49 == *(ulong **)(param_1 + 0x180)) {
                pvVar59 = *(void **)(param_1 + 0x170);
                pppplVar35 = (long ****)((long)puVar49 - (long)pvVar59);
                uVar27 = 0x555555555555555;
                uVar55 = ((long)pppplVar35 >> 4) * -0x5555555555555555 + 1;
                if (0x555555555555555 < uVar55) goto LAB_710332a144;
                lVar41 = (long)*(ulong **)(param_1 + 0x180) - (long)pvVar59 >> 4;
                if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                  uVar48 = lVar41 * 0x5555555555555556;
                  uVar27 = uVar55;
                  if (uVar55 <= uVar48) {
                    uVar27 = uVar48;
                  }
                  if (uVar27 != 0) goto LAB_7103327d58;
                  lVar41 = 0;
                }
                else {
LAB_7103327d58:
                  ppplVar60 = (long ***)(uVar27 * 0x30);
                  if (ppplVar60 == (long ***)0x0) {
                    ppplVar60 = (long ***)0x1;
                  }
                  lVar41 = FUN_710392e290(0x10,ppplVar60,param_3,param_4,param_5,param_6,param_7,
                                          param_8);
                  if (lVar41 == 0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_e8 = (ulong *)((ulong)local_e8 & 0xffffffff00000000);
                      param_3 = &local_b8;
                      local_b8 = ppplVar60;
                      uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
                      if (((uVar55 & 1) != 0) &&
                         (lVar41 = FUN_710392e290(0x10,ppplVar60,param_3,param_4,param_5,param_6,
                                                  param_7,param_8), lVar41 != 0))
                      goto LAB_7103327dbc;
                    }
                    lVar41 = 0;
                  }
                }
LAB_7103327dbc:
                puVar49 = (ulong *)(lVar41 + ((long)pppplVar35 >> 4) * 0x10);
                *(undefined4 *)(puVar49 + 1) = uVar20;
                *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                *(uint *)(puVar49 + 2) = uVar22;
                *(uint *)((long)puVar49 + 0x14) = uVar23;
                *(undefined4 *)(puVar49 + 3) = 0;
                *(bool *)(puVar49 + 5) = bVar16;
                *puVar49 = uVar51;
                puVar49[4] = 0;
                *(undefined1 *)((long)puVar49 + 0x29) = 1;
                *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                lVar57 = SUB168(SEXT816((long)pppplVar35) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                if (0 < (long)pppplVar35) {
                  memcpy(puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar35
                        );
                  param_3 = pppplVar35;
                }
                *(ulong **)(param_1 + 0x170) = puVar49 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
                *(ulong **)(param_1 + 0x178) = puVar49 + 6;
                *(ulong *)(param_1 + 0x180) = lVar41 + uVar27 * 0x30;
                if (pvVar59 != (void *)0x0) {
                  FUN_710392eb40((ulong)pvVar59);
                }
              }
              else {
                *(undefined4 *)(puVar49 + 1) = uVar20;
                *(undefined4 *)((long)puVar49 + 0xc) = uVar21;
                *(uint *)(puVar49 + 2) = uVar22;
                *(uint *)((long)puVar49 + 0x14) = uVar23;
                *(undefined4 *)(puVar49 + 3) = 0;
                *(bool *)(puVar49 + 5) = bVar16;
                *puVar49 = uVar51;
                puVar49[4] = 0;
                *(undefined1 *)((long)puVar49 + 0x29) = 1;
                *(undefined2 *)((long)puVar49 + 0x2e) = local_e8._4_2_;
                *(undefined4 *)((long)puVar49 + 0x2a) = (undefined4)local_e8;
                *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 0x30;
              }
joined_r0x007103327cf4:
              if (local_d0 != (long ***)0x0) {
                local_c8 = local_d0;
                FUN_710392eb40((ulong)local_d0);
              }
            }
          }
        }
        else {
          lVar57 = *(long *)(DAT_710532f730 + 8);
          uVar55 = FUN_71032b92a0(*(long *)(lVar64 + 0x1b8),uVar51);
          uVar55 = FUN_71032b9e40(*(long *)(lVar57 + 0x3c8),uVar55);
          uVar27 = FUN_71032b9f40(*(long *)(*(long *)(lVar41 + 8) + 0x3c8),uVar55);
          if (((int)uVar27 != -1) && (*(char *)*DAT_7105314510 == '\0')) {
            puVar58 = *(undefined8 **)(**(long **)((char *)*DAT_7105314510 + 8) + 0x40);
            uVar22 = *(uint *)(puVar58 + 1);
            if (0x28 < uVar22) goto LAB_710332a0fc;
            uVar55 = FUN_71032b9f40(*(long *)(*(long *)(*(long *)(lVar41 + 8) +
                                                        (long)(int)uVar22 * 8 + 8) + 8),uVar55);
            if (((uint)uVar55 < 0x20) &&
               ((*(uint *)*puVar58 & 1 << (ulong)((uint)uVar55 & 0x1f)) != 0)) goto LAB_71033266ec;
          }
        }
      }
      uVar26 = uVar26 + 1;
      if (iVar25 <= (int)uVar26) break;
      lVar57 = *(long *)(lVar64 + 0x1b8);
    } while( true );
  }
  FUN_710332a260((long *)(param_1 + 0x128));
  FUN_710332a260((long *)(param_1 + 0x140));
  FUN_710332a260((long *)(param_1 + 0x158));
  ppppbVar38 = (byte ****)0x1;
  uVar39 = 1;
  pppplVar35 = (long ****)0x0;
  ppppbVar36 = (byte ****)0x0;
  pppplVar37 = (long ****)0x0;
  FUN_710326f6a0(&local_d0,1,(long ****)0x0,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,1,param_8);
  ppplVar31 = local_c8;
  ppplVar60 = local_d0;
  if (local_d0 != local_c8) {
    pppplVar35 = (long ****)0x0;
    uVar51 = FUN_7101797560((undefined1 *)*local_d0,4,0);
    while ((uVar51 & 1) != 0) {
      ppplVar60 = ppplVar60 + 1;
      if (ppplVar31 == ppplVar60) goto LAB_7103327f98;
      pppplVar35 = (long ****)0x0;
      uVar51 = FUN_7101797560((undefined1 *)*ppplVar60,4,0);
    }
  }
  ppplVar62 = ppplVar60;
  if (ppplVar60 != ppplVar31) {
    while (ppplVar62 = ppplVar62 + 1, ppplVar62 != ppplVar31) {
      pppplVar35 = (long ****)0x0;
      uVar51 = FUN_7101797560((undefined1 *)*ppplVar62,4,0);
      if ((uVar51 & 1) != 0) {
        *ppplVar60 = *ppplVar62;
        ppplVar60 = ppplVar60 + 1;
      }
    }
  }
  if (ppplVar60 != ppplVar31) {
    pppplVar35 = (long ****)0x0;
    local_c8 = ppplVar60;
  }
LAB_7103327f98:
  ppplVar60 = local_c8;
  if (local_d0 != local_c8) {
    plVar2 = (long *)(param_1 + 0xe0);
    puVar49 = (ulong *)(param_1 + 0xe8);
    plVar3 = (long *)(param_1 + 400);
    ppplVar31 = local_d0;
    do {
      ppplVar62 = (long ***)*ppplVar31;
      iVar25 = FUN_710332a410(plVar2,(ulong)ppplVar62);
      if (iVar25 < 0) {
        puVar58 = (undefined8 *)*puVar49;
LAB_7103328034:
        local_b0 = (long ***)0x0;
        local_a8 = (long ***)0x0;
        local_b8 = ppplVar62;
        if (puVar58 < *(undefined8 **)(param_1 + 0xf0)) {
          puVar58[2] = 0;
          puVar58[3] = 0;
          *puVar58 = ppplVar62;
          puVar58[1] = 0;
          puVar58[1] = 0;
          puVar58[2] = 0;
          puVar58[3] = 0;
          local_a8 = (long ***)0x0;
          local_b0 = (long ***)0x0;
          *puVar49 = *puVar49 + 0x20;
        }
        else {
          FUN_710332a4d0(plVar2,&local_b8,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,param_8
                        );
          if (local_b0 != (long ***)0x0) {
            local_a8 = local_b0;
            FUN_710392eb40((ulong)local_b0);
          }
        }
        ppplVar62 = (long ***)*ppplVar31;
        lVar41 = *puVar49 - 0x20;
      }
      else {
        puVar58 = (undefined8 *)*puVar49;
        if ((ulong)((long)puVar58 - *plVar2 >> 5) <= (ulong)(long)iVar25) goto LAB_7103328034;
        lVar41 = *plVar2 + (long)iVar25 * 0x20;
      }
      lVar57 = *(long *)(lVar64 + 0x168);
      puVar28 = FUN_71032631a0(lVar57,0xfd5f7fa78);
      if ((((((ulong)ppplVar62 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)ppplVar62 & 0xffffffffff) != 0)) &&
          (((ulong)puVar28 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar28 & 0xffffffffff) != 0)) {
        puVar58 = *(undefined8 **)(lVar41 + 8);
        puVar33 = *(undefined8 **)(lVar41 + 0x10);
        bVar16 = puVar58 == puVar33;
        if ((((ulong)puVar28 ^ (ulong)ppplVar62) & 0xffffffffff) == 0) goto LAB_71033282b4;
LAB_7103328118:
        local_e0 = (ulong *)0x0;
        local_d8 = (ulong *)0x0;
        local_e8 = (ulong *)0x0;
        pplVar47 = *ppplVar31;
        bVar17 = (bool)(bVar16 ^ 1);
        puVar28 = FUN_71032631a0(lVar57,0x11b1ccb807);
        if (((((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000) &&
            (((ulong)pplVar47 & 0xffffffffff) != 0)) &&
           ((((ulong)puVar28 & 0xff00000000000000) == 0xc100000000000000 &&
            (((ulong)puVar28 & 0xffffffffff) != 0)))) {
          if ((((ulong)puVar28 ^ (ulong)pplVar47) & 0xffffffffff) == 0) goto LAB_7103328314;
LAB_7103328188:
          bVar18 = FUN_71032648e0(lVar64 + 0x160,(ulong)pplVar47);
          if (bVar18) {
            ppplVar62 = (long ***)FUN_71032631a0(lVar57,0x13b28d453e);
            puVar28 = FUN_71032631a0(lVar57,0x13b3e567a6);
            puVar29 = (ulong *)FUN_710392e290(0x10,0x10,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                              uVar39,param_8);
            if (puVar29 == (ulong *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                local_b8 = (long ***)&DAT_00000010;
                pppplVar35 = &local_b8;
                uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                if (((uVar51 & 1) != 0) &&
                   (puVar29 = (ulong *)FUN_710392e290(0x10,0x10,pppplVar35,ppppbVar36,pppplVar37,
                                                      ppppbVar38,uVar39,param_8),
                   puVar29 != (ulong *)0x0)) goto LAB_7103328228;
              }
              puVar29 = (ulong *)0x0;
            }
LAB_7103328228:
            *puVar29 = (ulong)ppplVar62;
            puVar29[1] = (ulong)puVar28;
            iVar25 = FUN_710332a410(plVar2,(ulong)ppplVar62);
            if (iVar25 < 0) {
              puVar58 = (undefined8 *)*puVar49;
LAB_7103328574:
              local_b0 = (long ***)0x0;
              local_a8 = (long ***)0x0;
              local_b8 = ppplVar62;
              if (puVar58 < *(undefined8 **)(param_1 + 0xf0)) {
                puVar58[2] = 0;
                puVar58[3] = 0;
                *puVar58 = ppplVar62;
                puVar58[1] = 0;
                puVar58[1] = 0;
                puVar58[2] = 0;
                puVar58[3] = 0;
                local_a8 = (long ***)0x0;
                local_b0 = (long ***)0x0;
                *puVar49 = *puVar49 + 0x20;
              }
              else {
                FUN_710332a4d0(plVar2,&local_b8,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,
                               param_8);
                if (local_b0 != (long ***)0x0) {
                  local_a8 = local_b0;
                  FUN_710392eb40((ulong)local_b0);
                }
              }
              lVar57 = *puVar49 - 0x20;
            }
            else {
              puVar58 = (undefined8 *)*puVar49;
              if ((ulong)((long)puVar58 - *plVar2 >> 5) <= (ulong)(long)iVar25) goto LAB_7103328574;
              lVar57 = *plVar2 + (long)iVar25 * 0x20;
            }
            puVar44 = local_e8;
            bVar17 = (bool)(bVar16 ^ 1);
            if (*(long *)(lVar57 + 8) != *(long *)(lVar57 + 0x10)) {
              if (local_e0 == local_d8) {
                pppplVar61 = (long ****)((long)local_e0 - (long)local_e8);
                uVar51 = ((long)pppplVar61 >> 3) + 1;
                if (uVar51 >> 0x3d != 0) goto LAB_710332a0f4;
                if ((ulong)((long)local_d8 - (long)local_e8 >> 3) < 0xfffffffffffffff) {
                  uVar55 = (long)local_d8 - (long)local_e8 >> 2;
                  if (uVar51 <= uVar55) {
                    uVar51 = uVar55;
                  }
                  if (uVar51 != 0) {
                    if (uVar51 >> 0x3d == 0) goto LAB_7103328678;
                    goto LAB_710332a0fc;
                  }
LAB_71033286d8:
                  puVar30 = (ulong *)0x0;
                }
                else {
                  uVar51 = 0x1fffffffffffffff;
LAB_7103328678:
                  ppplVar62 = (long ***)(uVar51 * 8);
                  if (ppplVar62 == (long ***)0x0) {
                    ppplVar62 = (long ***)0x1;
                  }
                  puVar30 = (ulong *)FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,
                                                    ppppbVar38,uVar39,param_8);
                  if (puVar30 == (ulong *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                      pppplVar35 = &local_b8;
                      local_b8 = ppplVar62;
                      uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                      if (((uVar55 & 1) != 0) &&
                         (puVar30 = (ulong *)FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,
                                                            pppplVar37,ppppbVar38,uVar39,param_8),
                         puVar30 != (ulong *)0x0)) goto LAB_71033286dc;
                    }
                    goto LAB_71033286d8;
                  }
                }
LAB_71033286dc:
                puVar43 = puVar30 + ((long)pppplVar61 >> 3);
                *puVar43 = *puVar29;
                if (0 < (long)pppplVar61) {
                  memcpy(puVar30,puVar44,(size_t)pppplVar61);
                  pppplVar35 = pppplVar61;
                }
                local_e8 = puVar30;
                local_e0 = puVar43 + 1;
                local_d8 = puVar30 + uVar51;
                if (puVar44 != (ulong *)0x0) {
                  FUN_710392eb40((ulong)puVar44);
                }
              }
              else {
                *local_e0 = *puVar29;
                local_e0 = local_e0 + 1;
              }
              bVar17 = true;
            }
            ppplVar62 = (long ***)puVar29[1];
            iVar25 = FUN_710332a410(plVar2,(ulong)ppplVar62);
            if (iVar25 < 0) {
              puVar58 = (undefined8 *)*puVar49;
LAB_7103328768:
              local_a8 = (long ***)0x0;
              local_b0 = (long ***)0x0;
              local_b8 = ppplVar62;
              if (puVar58 < *(undefined8 **)(param_1 + 0xf0)) {
                puVar58[2] = 0;
                puVar58[3] = 0;
                *puVar58 = ppplVar62;
                puVar58[1] = 0;
                puVar58[1] = 0;
                puVar58[2] = 0;
                puVar58[3] = 0;
                local_a8 = (long ***)0x0;
                local_b0 = (long ***)0x0;
                *puVar49 = *puVar49 + 0x20;
              }
              else {
                FUN_710332a4d0(plVar2,&local_b8,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,
                               param_8);
                if (local_b0 != (long ***)0x0) {
                  local_a8 = local_b0;
                  FUN_710392eb40((ulong)local_b0);
                }
              }
              lVar57 = *puVar49 - 0x20;
            }
            else {
              puVar58 = (undefined8 *)*puVar49;
              if ((ulong)((long)puVar58 - *plVar2 >> 5) <= (ulong)(long)iVar25) goto LAB_7103328768;
              lVar57 = *plVar2 + (long)iVar25 * 0x20;
            }
            puVar44 = local_e8;
            if (*(long *)(lVar57 + 8) != *(long *)(lVar57 + 0x10)) {
              if (local_e0 == local_d8) {
                pppplVar61 = (long ****)((long)local_e0 - (long)local_e8);
                uVar51 = ((long)pppplVar61 >> 3) + 1;
                if (uVar51 >> 0x3d != 0) {
LAB_710332a0f4:
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                if ((ulong)((long)local_d8 - (long)local_e8 >> 3) < 0xfffffffffffffff) {
                  uVar55 = (long)local_d8 - (long)local_e8 >> 2;
                  if (uVar51 <= uVar55) {
                    uVar51 = uVar55;
                  }
                  if (uVar51 != 0) {
                    if (uVar51 >> 0x3d == 0) goto LAB_7103328870;
                    goto LAB_710332a0fc;
                  }
LAB_71033288d0:
                  puVar30 = (ulong *)0x0;
                }
                else {
                  uVar51 = 0x1fffffffffffffff;
LAB_7103328870:
                  ppplVar62 = (long ***)(uVar51 * 8);
                  if (ppplVar62 == (long ***)0x0) {
                    ppplVar62 = (long ***)0x1;
                  }
                  puVar30 = (ulong *)FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,
                                                    ppppbVar38,uVar39,param_8);
                  if (puVar30 == (ulong *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                      pppplVar35 = &local_b8;
                      local_b8 = ppplVar62;
                      uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                      if (((uVar55 & 1) != 0) &&
                         (puVar30 = (ulong *)FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,
                                                            pppplVar37,ppppbVar38,uVar39,param_8),
                         puVar30 != (ulong *)0x0)) goto LAB_71033288d4;
                    }
                    goto LAB_71033288d0;
                  }
                }
LAB_71033288d4:
                puVar43 = puVar30 + ((long)pppplVar61 >> 3);
                *puVar43 = puVar29[1];
                if (0 < (long)pppplVar61) {
                  memcpy(puVar30,puVar44,(size_t)pppplVar61);
                  pppplVar35 = pppplVar61;
                }
                local_e8 = puVar30;
                local_e0 = puVar43 + 1;
                local_d8 = puVar30 + uVar51;
                if (puVar44 != (ulong *)0x0) {
                  FUN_710392eb40((ulong)puVar44);
                }
                bVar17 = true;
              }
              else {
                *local_e0 = puVar29[1];
                local_e0 = local_e0 + 1;
                bVar17 = true;
              }
            }
            FUN_710392eb40((ulong)puVar29);
          }
        }
        else {
          if ((((ulong)puVar28 & 0xffffffffff) != 0 &&
              ((ulong)puVar28 & 0xff00000000000000) == 0xc100000000000000) !=
              (((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000 &&
              ((ulong)pplVar47 & 0xffffffffff) != 0)) goto LAB_7103328188;
LAB_7103328314:
          ppppbVar38 = (byte ****)0x1;
          uVar39 = 1;
          pppplVar35 = (long ****)0x0;
          ppppbVar36 = (byte ****)0x0;
          pppplVar37 = (long ****)0x0;
          FUN_710326f6a0(&local_100,0,(long ****)0x0,(byte ****)0x0,(long ****)0x0,(byte ****)0x1,1,
                         param_8);
          ppplVar14 = local_f8;
          for (ppplVar62 = local_100; ppplVar62 != ppplVar14; ppplVar62 = ppplVar62 + 1) {
            ppplVar63 = (long ***)*ppplVar62;
            uVar26 = FUN_71032632a0(*(long *)(lVar64 + 0x168),(ulong)ppplVar63);
            if ((uVar26 & 1) != 0) {
              iVar25 = FUN_710332a410(plVar2,(ulong)ppplVar63);
              if (iVar25 < 0) {
                puVar58 = (undefined8 *)*puVar49;
LAB_7103328394:
                local_b0 = (long ***)0x0;
                local_a8 = (long ***)0x0;
                local_b8 = ppplVar63;
                if (puVar58 < *(undefined8 **)(param_1 + 0xf0)) {
                  puVar58[2] = 0;
                  puVar58[3] = 0;
                  *puVar58 = ppplVar63;
                  puVar58[1] = 0;
                  puVar58[1] = 0;
                  puVar58[2] = 0;
                  puVar58[3] = 0;
                  local_a8 = (long ***)0x0;
                  local_b0 = (long ***)0x0;
                  *puVar49 = *puVar49 + 0x20;
                }
                else {
                  FUN_710332a4d0(plVar2,&local_b8,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39
                                 ,param_8);
                  if (local_b0 != (long ***)0x0) {
                    local_a8 = local_b0;
                    FUN_710392eb40((ulong)local_b0);
                  }
                }
                lVar57 = *puVar49 - 0x20;
              }
              else {
                puVar58 = (undefined8 *)*puVar49;
                if ((ulong)((long)puVar58 - *plVar2 >> 5) <= (ulong)(long)iVar25)
                goto LAB_7103328394;
                lVar57 = *plVar2 + (long)iVar25 * 0x20;
              }
              puVar29 = local_e8;
              if (*(long *)(lVar57 + 8) != *(long *)(lVar57 + 0x10)) {
                if (local_e0 == local_d8) {
                  pppplVar61 = (long ****)((long)local_e0 - (long)local_e8);
                  uVar51 = ((long)pppplVar61 >> 3) + 1;
                  if (uVar51 >> 0x3d != 0) goto LAB_710332a0f4;
                  if ((ulong)((long)local_d8 - (long)local_e8 >> 3) < 0xfffffffffffffff) {
                    uVar55 = (long)local_d8 - (long)local_e8 >> 2;
                    if (uVar51 <= uVar55) {
                      uVar51 = uVar55;
                    }
                    if (uVar51 != 0) {
                      if (uVar51 >> 0x3d == 0) goto LAB_7103328490;
                      goto LAB_710332a0fc;
                    }
LAB_71033284f0:
                    puVar44 = (ulong *)0x0;
                  }
                  else {
                    uVar51 = 0x1fffffffffffffff;
LAB_7103328490:
                    ppplVar63 = (long ***)(uVar51 * 8);
                    if (ppplVar63 == (long ***)0x0) {
                      ppplVar63 = (long ***)0x1;
                    }
                    puVar44 = (ulong *)FUN_710392e290(0x10,ppplVar63,pppplVar35,ppppbVar36,
                                                      pppplVar37,ppppbVar38,uVar39,param_8);
                    if (puVar44 == (ulong *)0x0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_6c[0] = 0;
                        pppplVar35 = &local_b8;
                        local_b8 = ppplVar63;
                        uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                        if (((uVar55 & 1) != 0) &&
                           (puVar44 = (ulong *)FUN_710392e290(0x10,ppplVar63,pppplVar35,ppppbVar36,
                                                              pppplVar37,ppppbVar38,uVar39,param_8),
                           puVar44 != (ulong *)0x0)) goto LAB_71033284f4;
                      }
                      goto LAB_71033284f0;
                    }
                  }
LAB_71033284f4:
                  puVar30 = puVar44 + ((long)pppplVar61 >> 3);
                  *puVar30 = (ulong)*ppplVar62;
                  if (0 < (long)pppplVar61) {
                    memcpy(puVar44,puVar29,(size_t)pppplVar61);
                    pppplVar35 = pppplVar61;
                  }
                  local_e8 = puVar44;
                  local_e0 = puVar30 + 1;
                  local_d8 = puVar44 + uVar51;
                  if (puVar29 != (ulong *)0x0) {
                    FUN_710392eb40((ulong)puVar29);
                  }
                }
                else {
                  *local_e0 = (ulong)*ppplVar62;
                  local_e0 = local_e0 + 1;
                }
                bVar17 = true;
              }
            }
          }
          if (local_100 != (long ***)0x0) {
            local_f8 = local_100;
            FUN_710392eb40((ulong)local_100);
          }
        }
        puVar58 = *(undefined8 **)(lVar41 + 8);
        puVar33 = *(undefined8 **)(lVar41 + 0x10);
        puVar29 = local_e8;
        puVar44 = local_e0;
        if (puVar58 != puVar33) {
          local_b0 = (long ***)*ppplVar31;
          pppplVar35 = &local_b8;
          local_b8 = (long ***)0x1;
          FUN_710332a950(puVar58,puVar33,(long)pppplVar35);
          puVar33 = *(undefined8 **)(lVar41 + 0x10);
          for (puVar58 = *(undefined8 **)(lVar41 + 8); puVar29 = local_e8, puVar44 = local_e0,
              puVar58 != puVar33; puVar58 = puVar58 + 6) {
            puVar34 = *(undefined8 **)(param_1 + 400);
            if (puVar34 == *(undefined8 **)(param_1 + 0x198)) {
              pvVar59 = *(void **)(param_1 + 0x188);
              pppplVar61 = (long ****)((long)puVar34 - (long)pvVar59);
              uVar55 = 0x555555555555555;
              uVar51 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar51) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar41 = (long)*(undefined8 **)(param_1 + 0x198) - (long)pvVar59 >> 4;
              if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                uVar27 = lVar41 * 0x5555555555555556;
                uVar55 = uVar51;
                if (uVar51 <= uVar27) {
                  uVar55 = uVar27;
                }
                if (uVar55 != 0) goto LAB_71033289f8;
LAB_7103328a54:
                lVar41 = 0;
              }
              else {
LAB_71033289f8:
                ppplVar62 = (long ***)(uVar55 * 0x30);
                if (ppplVar62 == (long ***)0x0) {
                  ppplVar62 = (long ***)0x1;
                }
                lVar41 = FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                        uVar39,param_8);
                if (lVar41 == 0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                    pppplVar35 = &local_b8;
                    local_b8 = ppplVar62;
                    uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                    if (((uVar51 & 1) != 0) &&
                       (lVar41 = FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,
                                                ppppbVar38,uVar39,param_8), lVar41 != 0))
                    goto LAB_7103328a58;
                  }
                  goto LAB_7103328a54;
                }
              }
LAB_7103328a58:
              puVar34 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
              uVar5 = puVar58[1];
              *puVar34 = *puVar58;
              puVar34[1] = uVar5;
              uVar6 = puVar58[3];
              uVar5 = puVar58[4];
              uVar52 = puVar58[5];
              puVar34[2] = puVar58[2];
              puVar34[3] = uVar6;
              puVar34[4] = uVar5;
              puVar34[5] = uVar52;
              lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              if (0 < (long)pppplVar61) {
                memcpy(puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
                pppplVar35 = pppplVar61;
              }
              *(undefined8 **)(param_1 + 0x188) = puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
              *(undefined8 **)(param_1 + 400) = puVar34 + 6;
              *(ulong *)(param_1 + 0x198) = lVar41 + uVar55 * 0x30;
              if (pvVar59 != (void *)0x0) {
                FUN_710392eb40((ulong)pvVar59);
              }
            }
            else {
              uVar5 = puVar58[1];
              *puVar34 = *puVar58;
              puVar34[1] = uVar5;
              uVar5 = puVar58[2];
              uVar6 = puVar58[3];
              uVar52 = puVar58[5];
              puVar34[4] = puVar58[4];
              puVar34[5] = uVar52;
              puVar34[2] = uVar5;
              puVar34[3] = uVar6;
              *plVar3 = *plVar3 + 0x30;
            }
          }
        }
        for (; puVar30 = local_e0, puVar29 != local_e0; puVar29 = puVar29 + 1) {
          ppplVar62 = (long ***)*puVar29;
          local_e0 = puVar44;
          iVar25 = FUN_710332a410(plVar2,(ulong)ppplVar62);
          if (iVar25 < 0) {
            puVar44 = (ulong *)*puVar49;
LAB_7103328b38:
            local_a8 = (long ***)0x0;
            local_b0 = (long ***)0x0;
            if (puVar44 < *(ulong **)(param_1 + 0xf0)) {
              puVar44[2] = 0;
              puVar44[3] = 0;
              *puVar44 = (ulong)ppplVar62;
              puVar44[1] = 0;
              puVar44[1] = 0;
              puVar44[2] = 0;
              puVar44[3] = 0;
              local_a8 = (long ***)0x0;
              *puVar49 = *puVar49 + 0x20;
            }
            else {
              local_b8 = ppplVar62;
              FUN_710332a4d0(plVar2,&local_b8,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,
                             param_8);
              if (local_b0 != (long ***)0x0) {
                local_a8 = local_b0;
                FUN_710392eb40((ulong)local_b0);
              }
            }
            lVar41 = *puVar49 - 0x20;
          }
          else {
            puVar44 = (ulong *)*puVar49;
            if ((ulong)((long)puVar44 - *plVar2 >> 5) <= (ulong)(long)iVar25) goto LAB_7103328b38;
            lVar41 = *plVar2 + (long)iVar25 * 0x20;
          }
          local_b0 = (long ***)*ppplVar31;
          pppplVar35 = &local_b8;
          local_b8 = (long ***)0x1;
          FUN_710332b850(*(undefined8 **)(lVar41 + 8),*(undefined8 **)(lVar41 + 0x10),
                         (long)pppplVar35);
          puVar33 = *(undefined8 **)(lVar41 + 0x10);
          for (puVar58 = *(undefined8 **)(lVar41 + 8); puVar58 != puVar33; puVar58 = puVar58 + 6) {
            puVar34 = *(undefined8 **)(param_1 + 400);
            if (puVar34 == *(undefined8 **)(param_1 + 0x198)) {
              pvVar59 = *(void **)(param_1 + 0x188);
              pppplVar61 = (long ****)((long)puVar34 - (long)pvVar59);
              uVar55 = 0x555555555555555;
              uVar51 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
              if (0x555555555555555 < uVar51) goto LAB_710332a0dc;
              lVar41 = (long)*(undefined8 **)(param_1 + 0x198) - (long)pvVar59 >> 4;
              if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                uVar27 = lVar41 * 0x5555555555555556;
                uVar55 = uVar51;
                if (uVar51 <= uVar27) {
                  uVar55 = uVar27;
                }
                if (uVar55 != 0) goto LAB_7103328c74;
LAB_7103328cd0:
                lVar41 = 0;
              }
              else {
LAB_7103328c74:
                ppplVar62 = (long ***)(uVar55 * 0x30);
                if (ppplVar62 == (long ***)0x0) {
                  ppplVar62 = (long ***)0x1;
                }
                lVar41 = FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                        uVar39,param_8);
                if (lVar41 == 0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                    pppplVar35 = &local_b8;
                    local_b8 = ppplVar62;
                    uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                    if (((uVar51 & 1) != 0) &&
                       (lVar41 = FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,
                                                ppppbVar38,uVar39,param_8), lVar41 != 0))
                    goto LAB_7103328cd4;
                  }
                  goto LAB_7103328cd0;
                }
              }
LAB_7103328cd4:
              puVar34 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
              uVar5 = puVar58[1];
              *puVar34 = *puVar58;
              puVar34[1] = uVar5;
              uVar6 = puVar58[3];
              uVar5 = puVar58[4];
              uVar52 = puVar58[5];
              puVar34[2] = puVar58[2];
              puVar34[3] = uVar6;
              puVar34[4] = uVar5;
              puVar34[5] = uVar52;
              lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
              if (0 < (long)pppplVar61) {
                memcpy(puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
                pppplVar35 = pppplVar61;
              }
              *(undefined8 **)(param_1 + 0x188) = puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
              *(undefined8 **)(param_1 + 400) = puVar34 + 6;
              *(ulong *)(param_1 + 0x198) = lVar41 + uVar55 * 0x30;
              if (pvVar59 != (void *)0x0) {
                FUN_710392eb40((ulong)pvVar59);
              }
            }
            else {
              uVar5 = puVar58[1];
              *puVar34 = *puVar58;
              puVar34[1] = uVar5;
              uVar5 = puVar58[2];
              uVar6 = puVar58[3];
              uVar52 = puVar58[5];
              puVar34[4] = puVar58[4];
              puVar34[5] = uVar52;
              puVar34[2] = uVar5;
              puVar34[3] = uVar6;
              *plVar3 = *plVar3 + 0x30;
            }
          }
          puVar44 = local_e0;
          local_e0 = puVar30;
        }
        local_e0 = puVar44;
        if (bVar17) {
          puVar29 = *(ulong **)(param_1 + 0x1f0);
          if (puVar29 == *(ulong **)(param_1 + 0x1f8)) {
            pvVar59 = *(void **)(param_1 + 0x1e8);
            pppplVar61 = (long ****)((long)puVar29 - (long)pvVar59);
            uVar51 = ((long)pppplVar61 >> 3) + 1;
            if (uVar51 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar41 = (long)*(ulong **)(param_1 + 0x1f8) - (long)pvVar59;
            if ((ulong)(lVar41 >> 3) < 0xfffffffffffffff) {
              uVar55 = lVar41 >> 2;
              if (uVar51 <= uVar55) {
                uVar51 = uVar55;
              }
              if (uVar51 != 0) {
                if (uVar51 >> 0x3d == 0) goto LAB_7103328dfc;
                goto LAB_710332a0fc;
              }
              pvVar32 = (void *)0x0;
            }
            else {
              uVar51 = 0x1fffffffffffffff;
LAB_7103328dfc:
              ppplVar62 = (long ***)(uVar51 * 8);
              if (ppplVar62 == (long ***)0x0) {
                ppplVar62 = (long ***)0x1;
              }
              pvVar32 = (void *)FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,
                                               ppppbVar38,uVar39,param_8);
              if (pvVar32 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                  pppplVar35 = &local_b8;
                  local_b8 = ppplVar62;
                  uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                  if (((uVar55 & 1) != 0) &&
                     (pvVar32 = (void *)FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,
                                                       pppplVar37,ppppbVar38,uVar39,param_8),
                     pvVar32 != (void *)0x0)) goto LAB_7103328e64;
                }
                pvVar32 = (void *)0x0;
              }
            }
LAB_7103328e64:
            puVar29 = (ulong *)((long)pvVar32 + ((long)pppplVar61 >> 3) * 8);
            *puVar29 = (ulong)*ppplVar31;
            if (0 < (long)pppplVar61) {
              memcpy(pvVar32,pvVar59,(size_t)pppplVar61);
              pppplVar35 = pppplVar61;
            }
            *(void **)(param_1 + 0x1e8) = pvVar32;
            *(ulong **)(param_1 + 0x1f0) = puVar29 + 1;
            *(void **)(param_1 + 0x1f8) = (void *)((long)pvVar32 + uVar51 * 8);
            if (pvVar59 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar59);
            }
          }
          else {
            *puVar29 = (ulong)*ppplVar31;
            *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 8;
          }
        }
        if (local_e8 != (ulong *)0x0) {
          local_e0 = local_e8;
          FUN_710392eb40((ulong)local_e8);
        }
      }
      else {
        puVar58 = *(undefined8 **)(lVar41 + 8);
        puVar33 = *(undefined8 **)(lVar41 + 0x10);
        bVar16 = puVar58 == puVar33;
        if ((((ulong)puVar28 & 0xffffffffff) != 0 &&
            ((ulong)puVar28 & 0xff00000000000000) == 0xc100000000000000) !=
            (((ulong)ppplVar62 & 0xff00000000000000) == 0xc100000000000000 &&
            ((ulong)ppplVar62 & 0xffffffffff) != 0)) goto LAB_7103328118;
LAB_71033282b4:
        if (!bVar16) {
          pppplVar35 = &local_b8;
          local_b8 = (long ***)FUN_710332c750;
          FUN_710332c770(puVar58,puVar33,pppplVar35);
        }
      }
      ppplVar31 = ppplVar31 + 1;
    } while (ppplVar31 != ppplVar60);
  }
  puVar33 = *(undefined8 **)(param_1 + 0x188);
  puVar34 = *(undefined8 **)(param_1 + 400);
  puVar58 = puVar33;
  if (puVar33 != puVar34) {
    cVar10 = *(char *)((long)puVar33 + 0x29);
    while (cVar10 != '\0') {
      if (puVar34 == puVar58 + 6) goto LAB_7103328fb0;
      cVar10 = *(char *)((long)puVar58 + 0x59);
      puVar58 = puVar58 + 6;
    }
  }
  if ((puVar58 != puVar34) && (puVar45 = puVar58 + 6, puVar45 != puVar34)) {
    do {
      if (*(char *)((long)puVar45 + 0x29) != '\0') {
        uVar5 = puVar45[1];
        *puVar58 = *puVar45;
        puVar58[1] = uVar5;
        uVar52 = puVar45[4];
        uVar5 = puVar45[2];
        uVar6 = puVar45[3];
        *(undefined2 *)(puVar58 + 5) = *(undefined2 *)(puVar45 + 5);
        puVar58[3] = uVar6;
        puVar58[4] = uVar52;
        puVar58[2] = uVar5;
        puVar58 = puVar58 + 6;
      }
      puVar45 = puVar45 + 6;
    } while (puVar34 != puVar45);
    puVar33 = *(undefined8 **)(param_1 + 0x188);
    puVar34 = *(undefined8 **)(param_1 + 400);
  }
  if (puVar34 != puVar58) {
    pppplVar35 = (long ****)0x0;
    *(undefined8 **)(param_1 + 400) = puVar58;
    puVar34 = puVar58;
  }
LAB_7103328fb0:
  if (puVar33 != puVar34) {
    FUN_710332d710(puVar33,puVar34);
    puVar28 = FUN_71032631a0(*(long *)(lVar64 + 0x168),0x14ca4126b0);
    puVar58 = *(undefined8 **)(param_1 + 0x1f0);
    if (puVar58 < *(undefined8 **)(param_1 + 0x1f8)) {
      *puVar58 = puVar28;
      *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 8;
    }
    else {
      pvVar59 = *(void **)(param_1 + 0x1e8);
      __n = (long)puVar58 - (long)pvVar59;
      uVar51 = ((long)__n >> 3) + 1;
      if (uVar51 >> 0x3d != 0) goto LAB_710332a144;
      lVar41 = (long)*(undefined8 **)(param_1 + 0x1f8) - (long)pvVar59;
      if ((ulong)(lVar41 >> 3) < 0xfffffffffffffff) {
        uVar55 = lVar41 >> 2;
        if (uVar51 <= uVar55) {
          uVar51 = uVar55;
        }
        if (uVar51 != 0) {
          if (uVar51 >> 0x3d != 0) goto LAB_710332a0fc;
          goto LAB_7103329054;
        }
LAB_71033290b4:
        pvVar32 = (void *)0x0;
      }
      else {
        uVar51 = 0x1fffffffffffffff;
LAB_7103329054:
        ppplVar60 = (long ***)(uVar51 * 8);
        if (ppplVar60 == (long ***)0x0) {
          ppplVar60 = (long ***)0x1;
        }
        pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                         uVar39,param_8);
        if (pvVar32 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8 = (ulong *)((ulong)local_e8 & 0xffffffff00000000);
            pppplVar35 = &local_b8;
            local_b8 = ppplVar60;
            uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e8);
            if (((uVar55 & 1) != 0) &&
               (pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,
                                                 ppppbVar38,uVar39,param_8), pvVar32 != (void *)0x0)
               ) goto LAB_71033290b8;
          }
          goto LAB_71033290b4;
        }
      }
LAB_71033290b8:
      puVar58 = (undefined8 *)((long)pvVar32 + ((long)__n >> 3) * 8);
      *puVar58 = puVar28;
      if (0 < (long)__n) {
        memcpy(pvVar32,pvVar59,__n);
      }
      *(void **)(param_1 + 0x1e8) = pvVar32;
      *(undefined8 **)(param_1 + 0x1f0) = puVar58 + 1;
      *(void **)(param_1 + 0x1f8) = (void *)((long)pvVar32 + uVar51 * 8);
      if (pvVar59 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar59);
      }
    }
  }
  pppplVar35 = (long ****)0x1;
  ppppbVar36 = (byte ****)0x1;
  FUN_7103271490(&local_e8,1,(long ****)0x1,(byte ****)0x1,pppplVar37,ppppbVar38,uVar39,param_8);
  puVar49 = local_e0;
  if (local_e8 != local_e0) {
    puVar29 = local_e8;
    do {
      ppplVar60 = (long ***)*puVar29;
      iVar25 = FUN_710332a6b0((long *)(param_1 + 0xf8),(ulong)ppplVar60);
      if (iVar25 < 0) {
        puVar58 = *(undefined8 **)(param_1 + 0x100);
LAB_7103329184:
        local_b0 = (long ***)0x0;
        local_a8 = (long ***)0x0;
        local_b8 = ppplVar60;
        if (puVar58 < *(undefined8 **)(param_1 + 0x108)) {
          puVar58[2] = 0;
          puVar58[3] = 0;
          *puVar58 = ppplVar60;
          puVar58[1] = 0;
          puVar58[1] = 0;
          puVar58[2] = 0;
          puVar58[3] = 0;
          local_b0 = (long ***)0x0;
          local_a8 = (long ***)0x0;
          *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 0x20;
        }
        else {
          FUN_710332a770((long *)(param_1 + 0xf8),&local_b8,pppplVar35,ppppbVar36,pppplVar37,
                         ppppbVar38,uVar39,param_8);
          if (local_b0 != (long ***)0x0) {
            local_a8 = local_b0;
            FUN_710392eb40((ulong)local_b0);
          }
        }
        lVar41 = *(long *)(param_1 + 0x100) + -0x20;
      }
      else {
        puVar58 = *(undefined8 **)(param_1 + 0x100);
        if ((ulong)((long)puVar58 - *(long *)(param_1 + 0xf8) >> 5) <= (ulong)(long)iVar25)
        goto LAB_7103329184;
        lVar41 = *(long *)(param_1 + 0xf8) + (long)iVar25 * 0x20;
      }
      if (*(undefined8 **)(lVar41 + 8) != *(undefined8 **)(lVar41 + 0x10)) {
        local_b0 = (long ***)*puVar29;
        pppplVar35 = &local_b8;
        local_b8 = (long ***)0x2;
        FUN_710332e0d0(*(undefined8 **)(lVar41 + 8),*(undefined8 **)(lVar41 + 0x10),(long)pppplVar35
                      );
        puVar33 = *(undefined8 **)(lVar41 + 0x10);
        for (puVar58 = *(undefined8 **)(lVar41 + 8); puVar58 != puVar33; puVar58 = puVar58 + 6) {
          puVar34 = *(undefined8 **)(param_1 + 0x1a8);
          if (puVar34 == *(undefined8 **)(param_1 + 0x1b0)) {
            pvVar59 = *(void **)(param_1 + 0x1a0);
            pppplVar61 = (long ****)((long)puVar34 - (long)pvVar59);
            uVar55 = 0x555555555555555;
            uVar51 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
            if (0x555555555555555 < uVar51) goto LAB_710332a0dc;
            lVar41 = (long)*(undefined8 **)(param_1 + 0x1b0) - (long)pvVar59 >> 4;
            if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
              uVar27 = lVar41 * 0x5555555555555556;
              uVar55 = uVar51;
              if (uVar51 <= uVar27) {
                uVar55 = uVar27;
              }
              if (uVar55 != 0) goto LAB_71033292bc;
LAB_7103329318:
              lVar41 = 0;
            }
            else {
LAB_71033292bc:
              ppplVar60 = (long ***)(uVar55 * 0x30);
              if (ppplVar60 == (long ***)0x0) {
                ppplVar60 = (long ***)0x1;
              }
              lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                      uVar39,param_8);
              if (lVar41 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                  pppplVar35 = &local_b8;
                  local_b8 = ppplVar60;
                  uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                  if (((uVar51 & 1) != 0) &&
                     (lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,
                                              ppppbVar38,uVar39,param_8), lVar41 != 0))
                  goto LAB_710332931c;
                }
                goto LAB_7103329318;
              }
            }
LAB_710332931c:
            puVar34 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
            uVar5 = puVar58[1];
            *puVar34 = *puVar58;
            puVar34[1] = uVar5;
            uVar6 = puVar58[3];
            uVar5 = puVar58[4];
            uVar52 = puVar58[5];
            puVar34[2] = puVar58[2];
            puVar34[3] = uVar6;
            puVar34[4] = uVar5;
            puVar34[5] = uVar52;
            lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
            if (0 < (long)pppplVar61) {
              memcpy(puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
              pppplVar35 = pppplVar61;
            }
            *(undefined8 **)(param_1 + 0x1a0) = puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
            *(undefined8 **)(param_1 + 0x1a8) = puVar34 + 6;
            *(ulong *)(param_1 + 0x1b0) = lVar41 + uVar55 * 0x30;
            if (pvVar59 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar59);
            }
          }
          else {
            uVar5 = puVar58[1];
            *puVar34 = *puVar58;
            puVar34[1] = uVar5;
            uVar5 = puVar58[2];
            uVar6 = puVar58[3];
            uVar52 = puVar58[5];
            puVar34[4] = puVar58[4];
            puVar34[5] = uVar52;
            puVar34[2] = uVar5;
            puVar34[3] = uVar6;
            *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a8) + 0x30;
          }
        }
        puVar44 = *(ulong **)(param_1 + 0x208);
        if (puVar44 == *(ulong **)(param_1 + 0x210)) {
          pvVar59 = *(void **)(param_1 + 0x200);
          pppplVar61 = (long ****)((long)puVar44 - (long)pvVar59);
          uVar51 = ((long)pppplVar61 >> 3) + 1;
          if (uVar51 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar41 = (long)*(ulong **)(param_1 + 0x210) - (long)pvVar59;
          if ((ulong)(lVar41 >> 3) < 0xfffffffffffffff) {
            uVar55 = lVar41 >> 2;
            if (uVar51 <= uVar55) {
              uVar51 = uVar55;
            }
            if (uVar51 != 0) {
              if (uVar51 >> 0x3d == 0) goto LAB_7103329414;
              goto LAB_710332a0fc;
            }
LAB_7103329474:
            pvVar32 = (void *)0x0;
          }
          else {
            uVar51 = 0x1fffffffffffffff;
LAB_7103329414:
            ppplVar60 = (long ***)(uVar51 * 8);
            if (ppplVar60 == (long ***)0x0) {
              ppplVar60 = (long ***)0x1;
            }
            pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,
                                             ppppbVar38,uVar39,param_8);
            if (pvVar32 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
                pppplVar35 = &local_b8;
                local_b8 = ppplVar60;
                uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
                if (((uVar55 & 1) != 0) &&
                   (pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37
                                                     ,ppppbVar38,uVar39,param_8),
                   pvVar32 != (void *)0x0)) goto LAB_7103329478;
              }
              goto LAB_7103329474;
            }
          }
LAB_7103329478:
          puVar44 = (ulong *)((long)pvVar32 + ((long)pppplVar61 >> 3) * 8);
          *puVar44 = *puVar29;
          if (0 < (long)pppplVar61) {
            memcpy(pvVar32,pvVar59,(size_t)pppplVar61);
            pppplVar35 = pppplVar61;
          }
          *(void **)(param_1 + 0x200) = pvVar32;
          *(ulong **)(param_1 + 0x208) = puVar44 + 1;
          *(void **)(param_1 + 0x210) = (void *)((long)pvVar32 + uVar51 * 8);
          if (pvVar59 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar59);
          }
        }
        else {
          *puVar44 = *puVar29;
          *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + 8;
        }
      }
      puVar29 = puVar29 + 1;
    } while (puVar29 != puVar49);
  }
  puVar33 = *(undefined8 **)(param_1 + 0x1a0);
  puVar34 = *(undefined8 **)(param_1 + 0x1a8);
  puVar58 = puVar33;
  if (puVar33 != puVar34) {
    cVar10 = *(char *)((long)puVar33 + 0x29);
    while (cVar10 != '\0') {
      if (puVar34 == puVar58 + 6) goto LAB_71033295b4;
      cVar10 = *(char *)((long)puVar58 + 0x59);
      puVar58 = puVar58 + 6;
    }
  }
  if ((puVar58 != puVar34) && (puVar45 = puVar58 + 6, puVar45 != puVar34)) {
    do {
      if (*(char *)((long)puVar45 + 0x29) != '\0') {
        uVar5 = puVar45[1];
        *puVar58 = *puVar45;
        puVar58[1] = uVar5;
        uVar52 = puVar45[4];
        uVar5 = puVar45[2];
        uVar6 = puVar45[3];
        *(undefined2 *)(puVar58 + 5) = *(undefined2 *)(puVar45 + 5);
        puVar58[3] = uVar6;
        puVar58[4] = uVar52;
        puVar58[2] = uVar5;
        puVar58 = puVar58 + 6;
      }
      puVar45 = puVar45 + 6;
    } while (puVar34 != puVar45);
    puVar33 = *(undefined8 **)(param_1 + 0x1a0);
    puVar34 = *(undefined8 **)(param_1 + 0x1a8);
  }
  if (puVar34 != puVar58) {
    pppplVar35 = (long ****)0x0;
    *(undefined8 **)(param_1 + 0x1a8) = puVar58;
    puVar34 = puVar58;
  }
LAB_71033295b4:
  if (puVar33 == puVar34) goto LAB_710332970c;
  FUN_710332ec70(puVar33,puVar34);
  uVar51 = FUN_71032b23e0(*(long *)(*(long *)(lVar64 + 0x178) + 8),0x14bebd6a0c);
  puVar49 = *(ulong **)(param_1 + 0x208);
  if (puVar49 < *(ulong **)(param_1 + 0x210)) {
    *puVar49 = uVar51;
    *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + 8;
    goto LAB_710332970c;
  }
  pvVar59 = *(void **)(param_1 + 0x200);
  pppplVar61 = (long ****)((long)puVar49 - (long)pvVar59);
  uVar55 = ((long)pppplVar61 >> 3) + 1;
  if (uVar55 >> 0x3d != 0) {
LAB_710332a144:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar41 = (long)*(ulong **)(param_1 + 0x210) - (long)pvVar59;
  if ((ulong)(lVar41 >> 3) < 0xfffffffffffffff) {
    uVar27 = lVar41 >> 2;
    if (uVar55 <= uVar27) {
      uVar55 = uVar27;
    }
    if (uVar55 != 0) {
      if (uVar55 >> 0x3d != 0) {
LAB_710332a0fc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_7103329664;
    }
LAB_71033296c4:
    pvVar32 = (void *)0x0;
  }
  else {
    uVar55 = 0x1fffffffffffffff;
LAB_7103329664:
    ppplVar60 = (long ***)(uVar55 * 8);
    if (ppplVar60 == (long ***)0x0) {
      ppplVar60 = (long ***)0x1;
    }
    pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                     uVar39,param_8);
    if (pvVar32 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
        pppplVar35 = &local_b8;
        local_b8 = ppplVar60;
        uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
        if (((uVar27 & 1) != 0) &&
           (pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,
                                             ppppbVar38,uVar39,param_8), pvVar32 != (void *)0x0))
        goto LAB_71033296c8;
      }
      goto LAB_71033296c4;
    }
  }
LAB_71033296c8:
  puVar49 = (ulong *)((long)pvVar32 + ((long)pppplVar61 >> 3) * 8);
  *puVar49 = uVar51;
  if (0 < (long)pppplVar61) {
    memcpy(pvVar32,pvVar59,(size_t)pppplVar61);
    pppplVar35 = pppplVar61;
  }
  *(ulong **)(param_1 + 0x208) = puVar49 + 1;
  *(void **)(param_1 + 0x200) = pvVar32;
  *(void **)(param_1 + 0x210) = (void *)((long)pvVar32 + uVar55 * 8);
  if (pvVar59 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar59);
  }
LAB_710332970c:
  puVar34 = *(undefined8 **)(param_1 + 0x160);
  puVar33 = (undefined8 *)(param_1 + 0x1b8);
  for (puVar58 = *(undefined8 **)(param_1 + 0x158); puVar58 != puVar34; puVar58 = puVar58 + 6) {
    puVar45 = *(undefined8 **)(param_1 + 0x1c0);
    if (puVar45 == *(undefined8 **)(param_1 + 0x1c8)) {
      pvVar59 = (void *)*puVar33;
      pppplVar61 = (long ****)((long)puVar45 - (long)pvVar59);
      uVar55 = 0x555555555555555;
      uVar51 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar51) goto LAB_710332a0dc;
      lVar41 = (long)*(undefined8 **)(param_1 + 0x1c8) - (long)pvVar59 >> 4;
      if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar27 = lVar41 * 0x5555555555555556;
        uVar55 = uVar51;
        if (uVar51 <= uVar27) {
          uVar55 = uVar27;
        }
        if (uVar55 != 0) goto LAB_71033297ac;
LAB_7103329808:
        lVar41 = 0;
      }
      else {
LAB_71033297ac:
        ppplVar60 = (long ***)(uVar55 * 0x30);
        if (ppplVar60 == (long ***)0x0) {
          ppplVar60 = (long ***)0x1;
        }
        lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,
                                param_8);
        if (lVar41 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
            pppplVar35 = &local_b8;
            local_b8 = ppplVar60;
            uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
            if (((uVar51 & 1) != 0) &&
               (lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                        uVar39,param_8), lVar41 != 0)) goto LAB_710332980c;
          }
          goto LAB_7103329808;
        }
      }
LAB_710332980c:
      puVar45 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
      uVar5 = puVar58[1];
      *puVar45 = *puVar58;
      puVar45[1] = uVar5;
      uVar6 = puVar58[3];
      uVar5 = puVar58[4];
      uVar52 = puVar58[5];
      puVar45[2] = puVar58[2];
      puVar45[3] = uVar6;
      puVar45[4] = uVar5;
      puVar45[5] = uVar52;
      lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      if (0 < (long)pppplVar61) {
        memcpy(puVar45 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
        pppplVar35 = pppplVar61;
      }
      *(ulong *)(param_1 + 0x1c8) = lVar41 + uVar55 * 0x30;
      *(undefined8 **)(param_1 + 0x1b8) = puVar45 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
      *(undefined8 **)(param_1 + 0x1c0) = puVar45 + 6;
      if (pvVar59 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar59);
      }
    }
    else {
      uVar5 = puVar58[1];
      *puVar45 = *puVar58;
      puVar45[1] = uVar5;
      uVar5 = puVar58[2];
      uVar6 = puVar58[3];
      uVar52 = puVar58[5];
      puVar45[4] = puVar58[4];
      puVar45[5] = uVar52;
      puVar45[2] = uVar5;
      puVar45[3] = uVar6;
      *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + 0x30;
    }
  }
  puVar34 = *(undefined8 **)(param_1 + 0x148);
  for (puVar58 = *(undefined8 **)(param_1 + 0x140); puVar58 != puVar34; puVar58 = puVar58 + 6) {
    uVar51 = 0x555555555555555;
    puVar45 = *(undefined8 **)(param_1 + 0x1c0);
    if (puVar45 == *(undefined8 **)(param_1 + 0x1c8)) {
      pvVar59 = (void *)*puVar33;
      pppplVar61 = (long ****)((long)puVar45 - (long)pvVar59);
      uVar55 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar55) goto LAB_710332a0dc;
      lVar41 = (long)*(undefined8 **)(param_1 + 0x1c8) - (long)pvVar59 >> 4;
      if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar27 = lVar41 * 0x5555555555555556;
        uVar51 = uVar55;
        if (uVar55 <= uVar27) {
          uVar51 = uVar27;
        }
        if (uVar51 != 0) goto LAB_7103329930;
LAB_710332998c:
        lVar41 = 0;
      }
      else {
LAB_7103329930:
        ppplVar60 = (long ***)(uVar51 * 0x30);
        if (ppplVar60 == (long ***)0x0) {
          ppplVar60 = (long ***)0x1;
        }
        lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,
                                param_8);
        if (lVar41 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
            pppplVar35 = &local_b8;
            local_b8 = ppplVar60;
            uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
            if (((uVar55 & 1) != 0) &&
               (lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                        uVar39,param_8), lVar41 != 0)) goto LAB_7103329990;
          }
          goto LAB_710332998c;
        }
      }
LAB_7103329990:
      puVar45 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
      uVar5 = puVar58[1];
      *puVar45 = *puVar58;
      puVar45[1] = uVar5;
      uVar6 = puVar58[3];
      uVar5 = puVar58[4];
      uVar52 = puVar58[5];
      puVar45[2] = puVar58[2];
      puVar45[3] = uVar6;
      puVar45[4] = uVar5;
      puVar45[5] = uVar52;
      lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      if (0 < (long)pppplVar61) {
        memcpy(puVar45 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
        pppplVar35 = pppplVar61;
      }
      *(undefined8 **)(param_1 + 0x1b8) = puVar45 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
      *(undefined8 **)(param_1 + 0x1c0) = puVar45 + 6;
      *(ulong *)(param_1 + 0x1c8) = lVar41 + uVar51 * 0x30;
      if (pvVar59 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar59);
      }
    }
    else {
      uVar5 = puVar58[1];
      *puVar45 = *puVar58;
      puVar45[1] = uVar5;
      uVar5 = puVar58[2];
      uVar6 = puVar58[3];
      uVar52 = puVar58[5];
      puVar45[4] = puVar58[4];
      puVar45[5] = uVar52;
      puVar45[2] = uVar5;
      puVar45[3] = uVar6;
      *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + 0x30;
    }
  }
  puVar34 = *(undefined8 **)(param_1 + 0x130);
  plVar2 = (long *)(param_1 + 0x1c0);
  for (puVar58 = *(undefined8 **)(param_1 + 0x128); puVar58 != puVar34; puVar58 = puVar58 + 6) {
    uVar51 = 0x555555555555555;
    puVar45 = *(undefined8 **)(param_1 + 0x1c0);
    if (puVar45 == *(undefined8 **)(param_1 + 0x1c8)) {
      pvVar59 = (void *)*puVar33;
      pppplVar61 = (long ****)((long)puVar45 - (long)pvVar59);
      uVar55 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
      if (0x555555555555555 < uVar55) {
LAB_710332a0dc:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar41 = (long)*(undefined8 **)(param_1 + 0x1c8) - (long)pvVar59 >> 4;
      if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar27 = lVar41 * 0x5555555555555556;
        uVar51 = uVar55;
        if (uVar55 <= uVar27) {
          uVar51 = uVar27;
        }
        if (uVar51 != 0) goto LAB_7103329ab4;
LAB_7103329b10:
        lVar41 = 0;
      }
      else {
LAB_7103329ab4:
        ppplVar60 = (long ***)(uVar51 * 0x30);
        if (ppplVar60 == (long ***)0x0) {
          ppplVar60 = (long ***)0x1;
        }
        lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,uVar39,
                                param_8);
        if (lVar41 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
            pppplVar35 = &local_b8;
            local_b8 = ppplVar60;
            uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
            if (((uVar55 & 1) != 0) &&
               (lVar41 = FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                        uVar39,param_8), lVar41 != 0)) goto LAB_7103329b14;
          }
          goto LAB_7103329b10;
        }
      }
LAB_7103329b14:
      puVar45 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
      uVar5 = puVar58[1];
      *puVar45 = *puVar58;
      puVar45[1] = uVar5;
      uVar6 = puVar58[3];
      uVar5 = puVar58[4];
      uVar52 = puVar58[5];
      puVar45[2] = puVar58[2];
      puVar45[3] = uVar6;
      puVar45[4] = uVar5;
      puVar45[5] = uVar52;
      lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      if (0 < (long)pppplVar61) {
        memcpy(puVar45 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
        pppplVar35 = pppplVar61;
      }
      *(undefined8 **)(param_1 + 0x1b8) = puVar45 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
      *(undefined8 **)(param_1 + 0x1c0) = puVar45 + 6;
      *(ulong *)(param_1 + 0x1c8) = lVar41 + uVar51 * 0x30;
      if (pvVar59 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar59);
      }
    }
    else {
      uVar5 = puVar58[1];
      *puVar45 = *puVar58;
      puVar45[1] = uVar5;
      uVar5 = puVar58[2];
      uVar6 = puVar58[3];
      uVar52 = puVar58[5];
      puVar45[4] = puVar58[4];
      puVar45[5] = uVar52;
      puVar45[2] = uVar5;
      puVar45[3] = uVar6;
      *plVar2 = *plVar2 + 0x30;
    }
  }
  puVar33 = (undefined8 *)*puVar33;
  puVar58 = (undefined8 *)*plVar2;
  if (puVar33 != puVar58) {
    cVar10 = *(char *)((long)puVar33 + 0x29);
    while (cVar10 != '\0') {
      if (puVar58 == puVar33 + 6) goto LAB_7103329c58;
      cVar10 = *(char *)((long)puVar33 + 0x59);
      puVar33 = puVar33 + 6;
    }
  }
  if ((puVar33 != puVar58) && (puVar34 = puVar33 + 6, puVar34 != puVar58)) {
    do {
      if (*(char *)((long)puVar34 + 0x29) != '\0') {
        uVar5 = puVar34[1];
        *puVar33 = *puVar34;
        puVar33[1] = uVar5;
        uVar52 = puVar34[4];
        uVar5 = puVar34[2];
        uVar6 = puVar34[3];
        *(undefined2 *)(puVar33 + 5) = *(undefined2 *)(puVar34 + 5);
        puVar33[3] = uVar6;
        puVar33[4] = uVar52;
        puVar33[2] = uVar5;
        puVar33 = puVar33 + 6;
      }
      puVar34 = puVar34 + 6;
    } while (puVar58 != puVar34);
    puVar58 = (undefined8 *)*plVar2;
  }
  if (puVar58 != puVar33) {
    pppplVar35 = (long ****)0x0;
    *plVar2 = (long)puVar33;
  }
LAB_7103329c58:
  FUN_710332f630(*(undefined8 **)(param_1 + 0x158),*(undefined8 **)(param_1 + 0x160));
  FUN_710332fff0(*(undefined8 **)(param_1 + 0x140),*(undefined8 **)(param_1 + 0x148));
  FUN_71033309b0(*(undefined8 **)(param_1 + 0x128),*(undefined8 **)(param_1 + 0x130));
  FUN_7103331370(*(undefined8 **)(param_1 + 0x1b8),*(undefined8 **)(param_1 + 0x1c0));
  puVar58 = *(undefined8 **)(param_1 + 0x110);
  puVar33 = *(undefined8 **)(param_1 + 0x118);
  if (puVar58 != puVar33) {
    do {
      if (puVar58[1] != puVar58[2]) {
        local_b0 = (long ***)0x0;
        local_a8 = (long ***)0x0;
        local_b8 = (long ***)0x0;
        ppplVar60 = (long ***)(puVar58[2] - puVar58[1]);
        if (ppplVar60 == (long ***)0x0) {
          ppplVar31 = (long ***)0x0;
        }
        else {
          if (0x555555555555555 < (ulong)(((long)ppplVar60 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          ppplVar31 = (long ***)
                      FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                     uVar39,param_8);
          if (ppplVar31 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              pppplVar35 = &local_100;
              local_100 = ppplVar60;
              uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar51 & 1) != 0) &&
                 (ppplVar31 = (long ***)
                              FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,
                                             ppppbVar38,uVar39,param_8), ppplVar31 != (long ***)0x0)
                 ) goto LAB_7103329d38;
            }
            ppplVar31 = (long ***)0x0;
          }
LAB_7103329d38:
          local_a8 = ppplVar31 + ((long)ppplVar60 >> 4) * 2;
          pppplVar35 = (long ****)(puVar58[2] - (long)puVar58[1]);
          local_b8 = ppplVar31;
          local_b0 = ppplVar31;
          if (0 < (long)pppplVar35) {
            uVar51 = (ulong)pppplVar35 / 0x30;
            memcpy(ppplVar31,(void *)puVar58[1],(size_t)pppplVar35);
            local_b0 = ppplVar31 + uVar51 * 6;
          }
        }
        FUN_7103331d30(ppplVar31,local_b0);
        ppplVar31 = local_b0;
        for (ppplVar60 = local_b8; ppplVar60 != ppplVar31; ppplVar60 = ppplVar60 + 6) {
          puVar34 = *(undefined8 **)(param_1 + 0x1d8);
          if (puVar34 == *(undefined8 **)(param_1 + 0x1e0)) {
            pvVar59 = *(void **)(param_1 + 0x1d0);
            pppplVar61 = (long ****)((long)puVar34 - (long)pvVar59);
            uVar55 = 0x555555555555555;
            uVar51 = ((long)pppplVar61 >> 4) * -0x5555555555555555 + 1;
            if (0x555555555555555 < uVar51) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar41 = (long)*(undefined8 **)(param_1 + 0x1e0) - (long)pvVar59 >> 4;
            if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
              uVar27 = lVar41 * 0x5555555555555556;
              uVar55 = uVar51;
              if (uVar51 <= uVar27) {
                uVar55 = uVar27;
              }
              if (uVar55 != 0) goto LAB_7103329e1c;
LAB_7103329e78:
              lVar41 = 0;
            }
            else {
LAB_7103329e1c:
              ppplVar62 = (long ***)(uVar55 * 0x30);
              if (ppplVar62 == (long ***)0x0) {
                ppplVar62 = (long ***)0x1;
              }
              lVar41 = FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,ppppbVar38,
                                      uVar39,param_8);
              if (lVar41 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_6c[0] = 0;
                  pppplVar35 = &local_100;
                  local_100 = ppplVar62;
                  uVar51 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                  if (((uVar51 & 1) != 0) &&
                     (lVar41 = FUN_710392e290(0x10,ppplVar62,pppplVar35,ppppbVar36,pppplVar37,
                                              ppppbVar38,uVar39,param_8), lVar41 != 0))
                  goto LAB_7103329e7c;
                }
                goto LAB_7103329e78;
              }
            }
LAB_7103329e7c:
            puVar34 = (undefined8 *)(lVar41 + ((long)pppplVar61 >> 4) * 0x10);
            pplVar47 = ppplVar60[1];
            *puVar34 = *ppplVar60;
            puVar34[1] = pplVar47;
            pplVar7 = ppplVar60[3];
            pplVar47 = ppplVar60[4];
            pplVar8 = ppplVar60[5];
            puVar34[2] = ppplVar60[2];
            puVar34[3] = pplVar7;
            puVar34[4] = pplVar47;
            puVar34[5] = pplVar8;
            lVar57 = SUB168(SEXT816((long)pppplVar61) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
            if (0 < (long)pppplVar61) {
              memcpy(puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6,pvVar59,(size_t)pppplVar61);
              pppplVar35 = pppplVar61;
            }
            *(undefined8 **)(param_1 + 0x1d0) = puVar34 + ((lVar57 >> 3) - (lVar57 >> 0x3f)) * 6;
            *(undefined8 **)(param_1 + 0x1d8) = puVar34 + 6;
            *(ulong *)(param_1 + 0x1e0) = lVar41 + uVar55 * 0x30;
            if (pvVar59 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar59);
            }
          }
          else {
            pplVar47 = ppplVar60[1];
            *puVar34 = *ppplVar60;
            puVar34[1] = pplVar47;
            pplVar47 = ppplVar60[2];
            pplVar7 = ppplVar60[3];
            pplVar8 = ppplVar60[5];
            puVar34[4] = ppplVar60[4];
            puVar34[5] = pplVar8;
            puVar34[2] = pplVar47;
            puVar34[3] = pplVar7;
            *(long *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1d8) + 0x30;
          }
        }
        puVar34 = *(undefined8 **)(param_1 + 0x220);
        if (puVar34 == *(undefined8 **)(param_1 + 0x228)) {
          pvVar59 = *(void **)(param_1 + 0x218);
          pppplVar61 = (long ****)((long)puVar34 - (long)pvVar59);
          uVar51 = ((long)pppplVar61 >> 3) + 1;
          if (uVar51 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar41 = (long)*(undefined8 **)(param_1 + 0x228) - (long)pvVar59;
          if ((ulong)(lVar41 >> 3) < 0xfffffffffffffff) {
            uVar55 = lVar41 >> 2;
            if (uVar51 <= uVar55) {
              uVar51 = uVar55;
            }
            if (uVar51 != 0) {
              if (uVar51 >> 0x3d == 0) goto LAB_7103329f78;
              goto LAB_710332a0fc;
            }
LAB_7103329fd8:
            pvVar32 = (void *)0x0;
          }
          else {
            uVar51 = 0x1fffffffffffffff;
LAB_7103329f78:
            ppplVar60 = (long ***)(uVar51 * 8);
            if (ppplVar60 == (long ***)0x0) {
              ppplVar60 = (long ***)0x1;
            }
            pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37,
                                             ppppbVar38,uVar39,param_8);
            if (pvVar32 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c[0] = 0;
                pppplVar35 = &local_100;
                local_100 = ppplVar60;
                uVar55 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                if (((uVar55 & 1) != 0) &&
                   (pvVar32 = (void *)FUN_710392e290(0x10,ppplVar60,pppplVar35,ppppbVar36,pppplVar37
                                                     ,ppppbVar38,uVar39,param_8),
                   pvVar32 != (void *)0x0)) goto LAB_7103329fdc;
              }
              goto LAB_7103329fd8;
            }
          }
LAB_7103329fdc:
          puVar34 = (undefined8 *)((long)pvVar32 + ((long)pppplVar61 >> 3) * 8);
          *puVar34 = *puVar58;
          if (0 < (long)pppplVar61) {
            memcpy(pvVar32,pvVar59,(size_t)pppplVar61);
            pppplVar35 = pppplVar61;
          }
          *(void **)(param_1 + 0x218) = pvVar32;
          *(undefined8 **)(param_1 + 0x220) = puVar34 + 1;
          *(void **)(param_1 + 0x228) = (void *)((long)pvVar32 + uVar51 * 8);
          if (pvVar59 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar59);
          }
        }
        else {
          *puVar34 = *puVar58;
          *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 8;
        }
        if (local_b8 != (long ***)0x0) {
          local_b0 = local_b8;
          FUN_710392eb40((ulong)local_b8);
        }
      }
      puVar58 = puVar58 + 4;
    } while (puVar58 != puVar33);
  }
  if (*(undefined8 **)(param_1 + 0x1d0) != *(undefined8 **)(param_1 + 0x1d8)) {
    FUN_71033326f0(*(undefined8 **)(param_1 + 0x1d0),*(undefined8 **)(param_1 + 0x1d8));
  }
  if (*(undefined8 **)(param_1 + 0x170) != *(undefined8 **)(param_1 + 0x178)) {
    local_b8 = (long ***)FUN_710332c750;
    FUN_710332c770(*(undefined8 **)(param_1 + 0x170),*(undefined8 **)(param_1 + 0x178),&local_b8);
  }
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (local_e8 != (ulong *)0x0) {
    local_e0 = local_e8;
    FUN_710392eb40((ulong)local_e8);
  }
  if (local_d0 != (long ***)0x0) {
    local_c8 = local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  return;
}

