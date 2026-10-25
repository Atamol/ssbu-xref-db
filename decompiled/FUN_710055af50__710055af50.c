// addr:      710055af50
// offset:    0x55af50
// name:      FUN_710055af50
// mangled:   
// signature: undefined __cdecl FUN_710055af50(long param_1, undefined8 param_2, long * * * * param_3, char * param_4, string * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710055b97c) */

void FUN_710055af50(long param_1,undefined8 param_2,long ****param_3,char *param_4,string *param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long ****pppplVar13;
  byte *pbVar14;
  char *pcVar15;
  ulong uVar16;
  ulong *puVar17;
  size_t sVar18;
  ulong uVar19;
  long ***ppplVar20;
  byte *pbVar21;
  char *pcVar22;
  byte *pbVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  uint uVar27;
  ulong *puVar28;
  uint uVar29;
  long lVar30;
  long ****pppplVar31;
  long ***ppplVar32;
  ulong uVar33;
  uint uVar34;
  byte *pbVar35;
  void *__src;
  long lVar36;
  size_t __n;
  ulong uVar37;
  ulong *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  long ***local_a8;
  long ****local_a0;
  char *local_98;
  long ***local_90;
  long ****local_88;
  byte *local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  iVar7 = nn::ec::ShopServiceAccessor::AsyncResponse::GetSize(*(ulong **)(param_1 + 0x100));
  if (iVar7 == 0) {
    pppplVar31 = (long ****)0x0;
    pcVar8 = (char *)FUN_710392e290(0x10,1,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                                    param_7,param_8);
    if (pcVar8 == (char *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a8 = (long ***)((ulong)local_a8 & 0xffffffff00000000);
        pppplVar13 = &local_90;
        local_90 = (long ***)0x1;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
        if (((uVar9 & 1) != 0) &&
           (pcVar8 = (char *)FUN_710392e290(0x10,1,pppplVar13,(byte ****)param_4,(long ****)param_5,
                                            param_6,param_7,param_8), pcVar8 != (char *)0x0))
        goto LAB_710055aff0;
      }
      pcVar8 = (char *)0x0;
    }
LAB_710055aff0:
    iVar7 = nn::ec::ShopServiceAccessor::AsyncResponse::Get
                      (*(void **)(param_1 + 0x100),(ulong)pcVar8);
    if (iVar7 == 0) {
      *pcVar8 = '\0';
      local_b0 = (ulong *)0x0;
      local_c0 = (ulong *)0x0;
      if (((pcVar8 == (char *)0x0) || (*pcVar8 != '\0')) || (*pcVar8 != '{')) {
        plVar10 = (long *)0x0;
        bVar5 = false;
        local_b8 = (ulong *)0x0;
        bVar6 = true;
      }
      else {
        plVar10 = (long *)FUN_710392e290(0x10,0x68,pppplVar31,(byte ****)param_4,(long ****)param_5,
                                         param_6,param_7,param_8);
        if (plVar10 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_a8 = (long ***)((ulong)local_a8 & 0xffffffff00000000);
            local_90 = (long ***)&DAT_00000068;
            pppplVar31 = &local_90;
            uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
            if (((uVar9 & 1) != 0) &&
               (plVar10 = (long *)FUN_710392e290(0x10,0x68,pppplVar31,(byte ****)param_4,
                                                 (long ****)param_5,param_6,param_7,param_8),
               plVar10 != (long *)0x0)) goto LAB_710055b090;
          }
          plVar10 = (long *)0x0;
        }
LAB_710055b090:
        pppplVar31 = (long ****)0x0;
        *plVar10 = (long)&PTR_FUN_7104f76b10;
        plVar10[0xb] = 0;
        plVar10[0xc] = 0;
        plVar10[4] = 0;
        plVar10[9] = 0;
        plVar10[10] = 0;
        plVar10[7] = 0;
        plVar10[8] = 0;
        plVar10[5] = 0;
        plVar10[6] = 0;
        FUN_710055bf40((long)plVar10,(long)pcVar8,(long ****)0x0,(byte ****)param_4,param_5,param_6,
                       param_7,param_8);
        uVar3 = *(uint *)(param_1 + 0x114);
        bVar6 = plVar10 == (long *)0x0;
        local_b8 = (ulong *)0x0;
        if (((plVar10 != (long *)0x0) &&
            (lVar11 = FUN_710055c7c0((long)plVar10,"aoc_items"), lVar11 != 0)) &&
           (*(int *)(lVar11 + 0x18) == 2)) {
          uVar9 = *(long *)(lVar11 + 0x40) - *(long *)(lVar11 + 0x38);
          uVar34 = (uint)(uVar9 >> 3);
          if (uVar34 != 0) {
            pbVar21 = (byte *)((ulong)&local_90 | 1);
            uVar37 = 0;
            pcVar22 = (char *)((ulong)&local_a8 | 1);
            do {
              if (((((uVar37 < (ulong)(*(long *)(lVar11 + 0x40) - *(long *)(lVar11 + 0x38) >> 3)) &&
                    (lVar36 = *(long *)(*(long *)(lVar11 + 0x38) + uVar37 * 8), lVar36 != 0)) &&
                   (lVar12 = FUN_710055c7c0(lVar36,"item_tags"), lVar12 != 0)) &&
                  ((*(int *)(lVar12 + 0x18) == 2 &&
                   (plVar2 = *(long **)(lVar12 + 0x38),
                   (int)((ulong)((long)*(long **)(lVar12 + 0x40) - (long)plVar2) >> 3) != 0 &&
                   *(long **)(lVar12 + 0x40) != plVar2)))) && (lVar12 = *plVar2, lVar12 != 0)) {
                pbVar14 = *(byte **)(lVar12 + 0x58);
                for (pbVar35 = *(byte **)(lVar12 + 0x50); pbVar35 != pbVar14;
                    pbVar35 = pbVar35 + 0x30) {
                  uVar33 = (ulong)(*pbVar35 >> 1);
                  if ((*pbVar35 & 1) != 0) {
                    uVar33 = *(ulong *)(pbVar35 + 8);
                  }
                  if (uVar33 == 5) {
                    pppplVar31 = (long ****)0xffffffffffffffff;
                    param_4 = "value";
                    param_5 = (string *)0x5;
                    iVar7 = std::string::compare
                                      ((ulong)pbVar35,0,(char *)0xffffffffffffffff,0x710426e693);
                    if (iVar7 == 0) {
                      if ((pbVar35[0x18] & 1) == 0) {
                        pbVar35 = pbVar35 + 0x19;
                      }
                      else {
                        pbVar35 = *(byte **)(pbVar35 + 0x28);
                      }
                      goto LAB_710055b2ac;
                    }
                  }
                }
                pbVar35 = &DAT_7104867c2e;
LAB_710055b2ac:
                local_88 = (long ****)0x0;
                local_80 = (byte *)0x0;
                local_90 = (long ***)0x0;
                pppplVar13 = (long ****)strlen((char *)pbVar35);
                if ((long ****)0xffffffffffffffef < pppplVar13) {
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (pppplVar13 < (long ****)0x17) {
                  local_90 = (long ***)CONCAT71(local_90._1_7_,(char)((int)pppplVar13 << 1));
                  pbVar14 = pbVar21;
                  if (pppplVar13 != (long ****)0x0) goto LAB_710055b35c;
                }
                else {
                  ppplVar32 = (long ***)((ulong)(pppplVar13 + 2) & 0xfffffffffffffff0);
                  ppplVar20 = ppplVar32;
                  if (((ulong)(pppplVar13 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar20 = (long ***)0x1;
                  }
                  pbVar14 = (byte *)FUN_710392e290(0x10,ppplVar20,pppplVar31,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8);
                  if (pbVar14 == (byte *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
                      pppplVar31 = &local_a8;
                      local_a8 = ppplVar20;
                      uVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
                      if (((uVar33 & 1) != 0) &&
                         (pbVar14 = (byte *)FUN_710392e290(0x10,ppplVar20,pppplVar31,
                                                           (byte ****)param_4,(long ****)param_5,
                                                           param_6,param_7,param_8),
                         pbVar14 != (byte *)0x0)) goto LAB_710055b350;
                    }
                    pbVar14 = (byte *)0x0;
                  }
LAB_710055b350:
                  local_90 = (long ***)((ulong)ppplVar32 | 1);
                  local_88 = pppplVar13;
                  local_80 = pbVar14;
LAB_710055b35c:
                  pppplVar31 = pppplVar13;
                  memcpy(pbVar14,pbVar35,(size_t)pppplVar13);
                }
                pbVar14[(long)pppplVar13] = 0;
                pbVar35 = *(byte **)(lVar36 + 0x50);
                pbVar14 = *(byte **)(lVar36 + 0x58);
                if (pbVar35 != pbVar14) {
                  do {
                    uVar33 = (ulong)(*pbVar35 >> 1);
                    if ((*pbVar35 & 1) != 0) {
                      uVar33 = *(ulong *)(pbVar35 + 8);
                    }
                    if (uVar33 == 6) {
                      param_5 = (string *)0x6;
                      pppplVar31 = (long ****)0xffffffffffffffff;
                      param_4 = "ns_uid";
                      iVar7 = std::string::compare
                                        ((ulong)pbVar35,0,(char *)0xffffffffffffffff,0x710440093f);
                      if (iVar7 == 0) {
                        if ((pbVar35[0x18] & 1) == 0) {
                          pbVar35 = pbVar35 + 0x19;
                        }
                        else {
                          pbVar35 = *(byte **)(pbVar35 + 0x28);
                        }
                        goto LAB_710055b3d0;
                      }
                    }
                    pbVar35 = pbVar35 + 0x30;
                  } while (pbVar35 != pbVar14);
                }
                pbVar35 = &DAT_7104867c2e;
LAB_710055b3d0:
                local_a0 = (long ****)0x0;
                local_98 = (char *)0x0;
                local_a8 = (long ***)0x0;
                pppplVar13 = (long ****)strlen((char *)pbVar35);
                if ((long ****)0xffffffffffffffef < pppplVar13) {
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (pppplVar13 < (long ****)0x17) {
                  local_a8 = (long ***)CONCAT71(local_a8._1_7_,(char)((int)pppplVar13 << 1));
                  pcVar15 = pcVar22;
                  if (pppplVar13 != (long ****)0x0) goto LAB_710055b47c;
                }
                else {
                  ppplVar32 = (long ***)((ulong)(pppplVar13 + 2) & 0xfffffffffffffff0);
                  ppplVar20 = ppplVar32;
                  if (((ulong)(pppplVar13 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar20 = (long ***)0x1;
                  }
                  pcVar15 = (char *)FUN_710392e290(0x10,ppplVar20,pppplVar31,(byte ****)param_4,
                                                   (long ****)param_5,param_6,param_7,param_8);
                  if (pcVar15 == (char *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_6c[0] = 0;
                      pppplVar31 = &local_78;
                      local_78 = ppplVar20;
                      uVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                      if (((uVar33 & 1) != 0) &&
                         (pcVar15 = (char *)FUN_710392e290(0x10,ppplVar20,pppplVar31,
                                                           (byte ****)param_4,(long ****)param_5,
                                                           param_6,param_7,param_8),
                         pcVar15 != (char *)0x0)) goto LAB_710055b470;
                    }
                    pcVar15 = (char *)0x0;
                  }
LAB_710055b470:
                  local_a8 = (long ***)((ulong)ppplVar32 | 1);
                  local_a0 = pppplVar13;
                  local_98 = pcVar15;
LAB_710055b47c:
                  pppplVar31 = pppplVar13;
                  memcpy(pcVar15,pbVar35,(size_t)pppplVar13);
                }
                pcVar15[(long)pppplVar13] = '\0';
                pppplVar13 = (long ****)((ulong)local_90 >> 1 & 0x7f);
                pbVar35 = pbVar21;
                if (((ulong)local_90 & 1) != 0) {
                  pppplVar13 = local_88;
                  pbVar35 = local_80;
                }
                if ((int)pppplVar13 == 0) {
                  uVar33 = 0;
                }
                else {
                  uVar27 = 0xffffffff;
                  pbVar14 = pbVar35;
                  do {
                    pbVar23 = pbVar14 + 1;
                    bVar4 = *pbVar14;
                    uVar29 = bVar4 + 0x20;
                    if (0x19 < bVar4 - 0x41) {
                      uVar29 = (uint)bVar4;
                    }
                    uVar27 = (&DAT_7104754084)[(uVar29 ^ uVar27) & 0xff] ^ uVar27 >> 8;
                    pbVar14 = pbVar23;
                  } while (pbVar23 < pbVar35 + ((ulong)pppplVar13 & 0xffffffff));
                  uVar33 = (ulong)~uVar27;
                }
                uVar33 = uVar33 | ((ulong)pppplVar13 & 0xff) << 0x20;
                pcVar15 = pcVar22;
                if (((ulong)local_a8 & 1) != 0) {
                  pcVar15 = local_98;
                }
                uVar16 = atol(pcVar15);
                if (local_b8 == local_b0) {
                  pppplVar13 = (long ****)((long)local_b8 - (long)local_c0);
                  uVar24 = ((long)pppplVar13 >> 4) + 1;
                  if (uVar24 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  if ((ulong)((long)local_b0 - (long)local_c0 >> 4) < 0x7ffffffffffffff) {
                    uVar19 = (long)local_b0 - (long)local_c0 >> 3;
                    if (uVar24 <= uVar19) {
                      uVar24 = uVar19;
                    }
                    if (uVar24 != 0) {
                      if (uVar24 >> 0x3c == 0) goto LAB_710055b5bc;
                      goto LAB_710055bb5c;
                    }
                    puVar17 = (ulong *)0x0;
                  }
                  else {
                    uVar24 = 0xfffffffffffffff;
LAB_710055b5bc:
                    ppplVar20 = (long ***)(uVar24 * 0x10);
                    if (ppplVar20 == (long ***)0x0) {
                      ppplVar20 = (long ***)0x1;
                    }
                    puVar17 = (ulong *)FUN_710392e290(0x10,ppplVar20,pppplVar31,(byte ****)param_4,
                                                      (long ****)param_5,param_6,param_7,param_8);
                    if (puVar17 == (ulong *)0x0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_6c[0] = 0;
                        pppplVar31 = &local_78;
                        local_78 = ppplVar20;
                        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                        if (((uVar19 & 1) != 0) &&
                           (puVar17 = (ulong *)FUN_710392e290(0x10,ppplVar20,pppplVar31,
                                                              (byte ****)param_4,(long ****)param_5,
                                                              param_6,param_7,param_8),
                           puVar17 != (ulong *)0x0)) goto LAB_710055b628;
                      }
                      puVar17 = (ulong *)0x0;
                    }
                  }
LAB_710055b628:
                  local_b8 = puVar17 + ((long)pppplVar13 >> 4) * 2;
                  local_b0 = puVar17 + uVar24 * 2;
                  *local_b8 = uVar33;
                  local_b8[1] = uVar16;
                  local_b8 = local_b8 + 2;
                  if (0 < (long)pppplVar13) {
                    memcpy(puVar17,local_c0,(size_t)pppplVar13);
                    pppplVar31 = pppplVar13;
                  }
                  if (local_c0 != (ulong *)0x0) {
                    FUN_710392eb40((ulong)local_c0);
                  }
                }
                else {
                  *local_b8 = uVar33;
                  local_b8[1] = uVar16;
                  local_b8 = local_b8 + 2;
                  puVar17 = local_c0;
                }
                local_c0 = puVar17;
                if ((((ulong)local_a8 & 1) != 0) && (local_98 != (char *)0x0)) {
                  FUN_710392eb40((ulong)local_98);
                }
                if ((((ulong)local_90 & 1) != 0) && (local_80 != (byte *)0x0)) {
                  FUN_710392eb40((ulong)local_80);
                }
              }
              do {
                uVar37 = uVar37 + 1;
                if ((uVar9 >> 3 & 0xffffffff) <= uVar37) goto LAB_710055bb3c;
              } while (*(int *)(lVar11 + 0x18) != 2);
            } while( true );
          }
LAB_710055bb3c:
          if (uVar3 <= uVar34) {
            bVar5 = true;
            goto LAB_710055b158;
          }
        }
        bVar5 = false;
      }
LAB_710055b158:
      lVar11 = (long)local_b8 - (long)local_c0;
      if (0 < lVar11) {
        __src = *(void **)(param_1 + 0x120);
        puVar17 = *(ulong **)(param_1 + 0x128);
        lVar36 = lVar11 >> 4;
        lVar12 = (long)puVar17 - (long)__src >> 4;
        plVar2 = (long *)(param_1 + 0x128);
        if (*(long *)(param_1 + 0x130) - (long)puVar17 >> 4 < lVar36) {
          uVar9 = lVar12 + lVar36;
          if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar36 = *(long *)(param_1 + 0x130) - (long)__src;
          if ((ulong)(lVar36 >> 4) < 0x7ffffffffffffff) {
            uVar37 = lVar36 >> 3;
            if (uVar9 <= uVar37) {
              uVar9 = uVar37;
            }
            if (uVar9 != 0) {
              if (uVar9 >> 0x3c != 0) goto LAB_710055bb5c;
              goto LAB_710055b754;
            }
            uVar9 = 0;
            lVar36 = 0;
          }
          else {
            uVar9 = 0xfffffffffffffff;
LAB_710055b754:
            ppplVar20 = (long ***)(uVar9 * 0x10);
            if (ppplVar20 == (long ***)0x0) {
              ppplVar20 = (long ***)0x1;
            }
            lVar36 = FUN_710392e290(0x10,ppplVar20,pppplVar31,(byte ****)param_4,(long ****)param_5,
                                    param_6,param_7,param_8);
            if (lVar36 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_a8 = (long ***)((ulong)local_a8 & 0xffffffff00000000);
                pppplVar31 = &local_90;
                local_90 = ppplVar20;
                uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
                if (((uVar37 & 1) != 0) &&
                   (lVar36 = FUN_710392e290(0x10,ppplVar20,pppplVar31,(byte ****)param_4,
                                            (long ****)param_5,param_6,param_7,param_8), lVar36 != 0
                   )) goto LAB_710055b7c4;
              }
              lVar36 = 0;
            }
          }
LAB_710055b7c4:
          puVar26 = (ulong *)(lVar36 + lVar12 * 0x10);
          puVar28 = puVar26;
          if (local_c0 != local_b8) {
            uVar33 = lVar11 - 0x10U >> 4;
            uVar3 = (int)uVar33 + 1;
            uVar37 = (ulong)uVar3 & 7;
            puVar25 = puVar26;
            puVar28 = local_c0;
            if ((uVar3 & 7) != 0) {
              lVar30 = -uVar37;
              puVar28 = puVar26;
              puVar25 = local_c0;
              do {
                uVar16 = puVar25[1];
                *puVar28 = *puVar25;
                puVar28[1] = uVar16;
                lVar30 = lVar30 + 1;
                puVar28 = puVar28 + 2;
                puVar25 = puVar25 + 2;
              } while (lVar30 != 0);
              puVar25 = (ulong *)(lVar36 + (lVar12 + uVar37) * 0x10);
              puVar28 = local_c0 + uVar37 * 2;
            }
            if (0x6f < lVar11 - 0x10U) {
              do {
                uVar37 = puVar28[1];
                *puVar25 = *puVar28;
                puVar25[1] = uVar37;
                uVar37 = puVar28[3];
                puVar25[2] = puVar28[2];
                puVar25[3] = uVar37;
                uVar37 = puVar28[5];
                puVar25[4] = puVar28[4];
                puVar25[5] = uVar37;
                uVar37 = puVar28[7];
                puVar25[6] = puVar28[6];
                puVar25[7] = uVar37;
                uVar37 = puVar28[9];
                puVar25[8] = puVar28[8];
                puVar25[9] = uVar37;
                uVar37 = puVar28[0xb];
                puVar25[10] = puVar28[10];
                puVar25[0xb] = uVar37;
                uVar37 = puVar28[0xd];
                puVar25[0xc] = puVar28[0xc];
                puVar25[0xd] = uVar37;
                puVar1 = puVar28 + 0xe;
                uVar37 = puVar28[0xf];
                puVar28 = puVar28 + 0x10;
                puVar25[0xe] = *puVar1;
                puVar25[0xf] = uVar37;
                puVar25 = puVar25 + 0x10;
              } while (puVar28 != local_b8);
            }
            __src = *(void **)(param_1 + 0x120);
            puVar28 = (ulong *)(lVar36 + (lVar12 + uVar33 + 1) * 0x10);
          }
          sVar18 = (long)puVar17 - (long)__src;
          if (0 < (long)sVar18) {
            memcpy((void *)((long)puVar26 - sVar18),__src,sVar18);
          }
          __n = *plVar2 - (long)puVar17;
          if (0 < (long)__n) {
            memcpy(puVar28,puVar17,__n);
            puVar28 = (ulong *)((long)puVar28 + __n);
          }
          *(void **)(param_1 + 0x120) = (void *)((long)puVar26 - sVar18);
          *(ulong **)(param_1 + 0x128) = puVar28;
          *(ulong *)(param_1 + 0x130) = lVar36 + uVar9 * 0x10;
          if (__src != (void *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
        else if (lVar36 < 1) {
          puVar26 = puVar17 + lVar36 * -2;
          sVar18 = lVar36 * -0x10;
          lVar11 = (long)sVar18 >> 4;
          if (puVar26 < puVar17) {
            uVar9 = (long)puVar17 + ~(ulong)__src + (-lVar12 - lVar11) * 0x10;
            uVar3 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
            uVar37 = (ulong)uVar3 & 3;
            puVar28 = puVar17;
            if ((uVar3 & 3) != 0) {
              lVar36 = -uVar37;
              do {
                uVar33 = puVar26[1];
                *puVar28 = *puVar26;
                puVar28[1] = uVar33;
                puVar28 = (ulong *)(*plVar2 + 0x10);
                lVar36 = lVar36 + 1;
                *plVar2 = (long)puVar28;
                puVar26 = puVar26 + 2;
              } while (lVar36 != 0);
              puVar26 = (ulong *)((long)__src + (lVar11 + lVar12 + uVar37) * 0x10);
            }
            if (0x2f < uVar9) {
              do {
                uVar9 = puVar26[1];
                *puVar28 = *puVar26;
                puVar28[1] = uVar9;
                lVar36 = *plVar2;
                *plVar2 = lVar36 + 0x10;
                uVar9 = puVar26[3];
                *(ulong *)(lVar36 + 0x10) = puVar26[2];
                *(ulong *)(lVar36 + 0x18) = uVar9;
                lVar36 = *plVar2;
                *plVar2 = lVar36 + 0x10;
                uVar9 = puVar26[5];
                *(ulong *)(lVar36 + 0x10) = puVar26[4];
                *(ulong *)(lVar36 + 0x18) = uVar9;
                lVar36 = *plVar2;
                *plVar2 = lVar36 + 0x10;
                puVar28 = puVar26 + 6;
                uVar9 = puVar26[7];
                puVar26 = puVar26 + 8;
                *(ulong *)(lVar36 + 0x10) = *puVar28;
                *(ulong *)(lVar36 + 0x18) = uVar9;
                puVar28 = (ulong *)(*plVar2 + 0x10);
                *plVar2 = (long)puVar28;
              } while (puVar26 < puVar17);
            }
          }
          if (sVar18 != 0) {
            memmove(puVar17 + lVar11 * -2,puVar17,sVar18);
          }
          if ((long)local_b8 - (long)local_c0 != 0) {
            memmove(puVar17,local_c0,(long)local_b8 - (long)local_c0);
          }
        }
        else if (local_c0 != local_b8) {
          uVar37 = (long)local_b8 + (-0x10 - (long)local_c0);
          uVar3 = ((uint)(uVar37 >> 4) & 0xfffffff) + 1;
          uVar9 = (ulong)uVar3 & 3;
          puVar26 = local_c0;
          if ((uVar3 & 3) != 0) {
            lVar11 = -uVar9;
            do {
              uVar33 = puVar26[1];
              *puVar17 = *puVar26;
              puVar17[1] = uVar33;
              puVar17 = (ulong *)(*plVar2 + 0x10);
              lVar11 = lVar11 + 1;
              *plVar2 = (long)puVar17;
              puVar26 = puVar26 + 2;
            } while (lVar11 != 0);
            puVar26 = local_c0 + uVar9 * 2;
          }
          if (0x2f < uVar37) {
            do {
              uVar9 = puVar26[1];
              *puVar17 = *puVar26;
              puVar17[1] = uVar9;
              lVar11 = *plVar2;
              *plVar2 = lVar11 + 0x10;
              uVar9 = puVar26[3];
              *(ulong *)(lVar11 + 0x10) = puVar26[2];
              *(ulong *)(lVar11 + 0x18) = uVar9;
              lVar11 = *plVar2;
              *plVar2 = lVar11 + 0x10;
              uVar9 = puVar26[5];
              *(ulong *)(lVar11 + 0x10) = puVar26[4];
              *(ulong *)(lVar11 + 0x18) = uVar9;
              lVar11 = *plVar2;
              *plVar2 = lVar11 + 0x10;
              puVar17 = puVar26 + 6;
              uVar9 = puVar26[7];
              puVar26 = puVar26 + 8;
              *(ulong *)(lVar11 + 0x10) = *puVar17;
              *(ulong *)(lVar11 + 0x18) = uVar9;
              puVar17 = (ulong *)(*plVar2 + 0x10);
              *plVar2 = (long)puVar17;
            } while (puVar26 != local_b8);
          }
        }
      }
      if (!bVar6) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      if (local_c0 != (ulong *)0x0) {
        FUN_710392eb40((ulong)local_c0);
      }
      if ((bVar5) &&
         (uVar3 = *(int *)(param_1 + 0x11c) + *(int *)(param_1 + 0x114),
         *(uint *)(param_1 + 0x11c) = uVar3, uVar3 < *(uint *)(param_1 + 0x118))) {
        if (*(uint *)(param_1 + 0xe4) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 3;
          if (pcVar8 == (char *)0x0) {
            return;
          }
          FUN_710392eb40((ulong)pcVar8);
          return;
        }
        goto LAB_710055bb5c;
      }
    }
    if (pcVar8 != (char *)0x0) {
      FUN_710392eb40((ulong)pcVar8);
    }
  }
  if (*(uint *)(param_1 + 0xe4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 6;
    return;
  }
LAB_710055bb5c:
                    /* WARNING: Subroutine does not return */
  abort();
}

