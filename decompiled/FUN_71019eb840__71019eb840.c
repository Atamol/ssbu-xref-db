// addr:      71019eb840
// offset:    0x19eb840
// name:      FUN_71019eb840
// mangled:   
// signature: undefined __cdecl FUN_71019eb840(ulong * param_1, long * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe10 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71019eb840(ulong *param_1,long *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  long ***ppplVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long *******ppppppplVar26;
  ushort *puVar27;
  undefined8 *puVar28;
  undefined1 *puVar29;
  long *plVar30;
  undefined8 extraout_x1;
  undefined **ppuVar31;
  long *********ppppppppplVar32;
  byte ****ppppbVar33;
  long ***ppplVar34;
  char *pcVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  uint uVar38;
  long ***ppplVar39;
  long ***ppplVar40;
  uint *puVar41;
  long ********pppppppplVar42;
  ulong uVar43;
  ulong *puVar44;
  undefined8 uVar45;
  ushort uVar46;
  long **pplVar47;
  char *pcVar48;
  undefined8 uVar49;
  long **pplVar50;
  long *******ppppppplVar51;
  long lVar52;
  undefined8 uVar53;
  long *plVar54;
  long *********ppppppppplVar55;
  ushort *puVar56;
  int iVar57;
  ulong uVar58;
  long ******pppppplVar59;
  long ****pppplVar60;
  ulong *puVar61;
  long ****pppplVar62;
  long lVar63;
  long *plVar64;
  ulong uVar65;
  long *****ppppplVar66;
  long ***ppplVar67;
  ulong uVar68;
  ulong uVar69;
  long *****ppppplVar70;
  ulong *puVar71;
  undefined ***pppuVar72;
  long *******ppppppplVar73;
  ulong *puVar74;
  ulong *puVar75;
  long lVar76;
  long lVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  long ******pppppplVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  long ******local_2d0;
  int local_2b0;
  undefined8 local_290;
  long ********pppppppplStack_288;
  ulong local_280;
  undefined **local_278;
  undefined8 *local_270;
  undefined **local_268;
  long *local_260;
  undefined **local_258;
  long *local_250;
  float local_248;
  float fStack_244;
  float local_240;
  float local_23c;
  ulong local_238;
  ulong local_230;
  undefined4 local_228;
  uint uStack_224;
  int local_220;
  undefined4 uStack_21c;
  ulong local_218;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  undefined2 local_1f0;
  undefined **local_1d8;
  undefined8 *local_1d0;
  undefined **local_1c8;
  undefined8 *local_1c0;
  undefined **local_1b8;
  long *local_1b0 [8];
  undefined **local_170;
  undefined8 *local_168;
  undefined **local_160;
  long *local_158;
  undefined **local_150;
  long *local_148;
  uint local_140 [2];
  undefined1 auStack_138 [64];
  ulong *local_f8;
  ulong *local_f0;
  ulong *local_e8;
  long *******local_e0;
  long *******local_d8;
  long local_d0;
  long ********local_c8;
  ulong local_c0;
  undefined **local_b8;
  long *local_b0;
  
  *(undefined1 *)((long)param_1 + 0x254) = *(undefined1 *)param_4;
  lVar76 = *(long *)(DAT_710532f730 + 8);
  cVar5 = *(char *)((long)param_4 + 1);
  local_d8 = (long *******)0x0;
  local_d0 = 0;
  local_e8 = (ulong *)0x0;
  local_f8 = (ulong *)0x0;
  local_f0 = (ulong *)0x0;
  ppplVar67 = *param_5;
  ppplVar3 = param_5[1];
  pppppppplVar42 = (long ********)((long)ppplVar3 - (long)ppplVar67);
  uVar68 = (long)pppppppplVar42 >> 3;
  ppuVar31 = (undefined **)param_3;
  ppppbVar33 = param_4;
  pppplVar62 = param_5;
  local_e0 = (long *******)&local_d8;
  if (pppppppplVar42 != (long ********)0x0) {
    if (uVar68 >> 0x3d != 0) goto LAB_71019f05e8;
    puVar19 = (ulong *)FUN_710392e290(0x10,pppppppplVar42,(long ****)param_3,param_4,param_5,param_6
                                      ,param_7,param_8);
    if (puVar19 == (ulong *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_140[0] = 0;
        ppuVar31 = (undefined **)&local_290;
        local_290 = (undefined **)pppppppplVar42;
        uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_140);
        if (((uVar20 & 1) != 0) &&
           (puVar19 = (ulong *)FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,ppppbVar33,
                                              pppplVar62,param_6,param_7,param_8),
           puVar19 != (ulong *)0x0)) goto LAB_71019eb928;
      }
      puVar19 = (ulong *)0x0;
    }
LAB_71019eb928:
    local_e8 = puVar19 + uVar68;
    local_f0 = puVar19;
  }
  local_f8 = local_f0;
  if (ppplVar67 != ppplVar3) {
    do {
      uVar68 = FUN_7103262cc0(*(long *)(lVar76 + 0x168),(ulong)*ppplVar67);
      switch(uVar68 & 0xffffffff) {
      case 0:
      case 4:
        pplVar50 = *ppplVar67;
        uVar15 = FUN_7103263a30(*(long *)(lVar76 + 0x168),(ulong)pplVar50);
        puVar19 = local_f8;
        if (((uVar15 ^ 0xffffffff) & 10) == 0) {
          if (local_f0 == local_e8) {
            ppppppppplVar32 = (long *********)((long)local_f0 - (long)local_f8);
            uVar68 = ((long)ppppppppplVar32 >> 3) + 1;
            if (uVar68 >> 0x3d != 0) goto LAB_71019f05e0;
            if ((ulong)((long)local_e8 - (long)local_f8 >> 3) < 0xfffffffffffffff) {
              uVar20 = (long)local_e8 - (long)local_f8 >> 2;
              if (uVar68 <= uVar20) {
                uVar68 = uVar20;
              }
              if (uVar68 != 0) {
                if (uVar68 >> 0x3d == 0) goto LAB_71019ebc80;
                goto LAB_71019f05e8;
              }
              puVar21 = (ulong *)0x0;
            }
            else {
              uVar68 = 0x1fffffffffffffff;
LAB_71019ebc80:
              pppppppplVar42 = (long ********)(uVar68 * 8);
              if (pppppppplVar42 == (long ********)0x0) {
                pppppppplVar42 = (long ********)0x1;
              }
              puVar21 = (ulong *)FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,ppppbVar33,
                                                pppplVar62,param_6,param_7,param_8);
              if (puVar21 == (ulong *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_140[0] = 0;
                  ppuVar31 = (undefined **)&local_290;
                  local_290 = (undefined **)pppppppplVar42;
                  uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_140);
                  if (((uVar20 & 1) != 0) &&
                     (puVar21 = (ulong *)FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,
                                                        ppppbVar33,pppplVar62,param_6,param_7,
                                                        param_8), puVar21 != (ulong *)0x0))
                  goto LAB_71019ebce4;
                }
                puVar21 = (ulong *)0x0;
              }
LAB_71019ebce4:
              pplVar50 = *ppplVar67;
            }
            puVar71 = puVar21 + ((long)ppppppppplVar32 >> 3);
            *puVar71 = (ulong)pplVar50;
            puVar44 = puVar21 + uVar68;
            if (0 < (long)ppppppppplVar32) {
              memcpy(puVar21,puVar19,(size_t)ppppppppplVar32);
              ppuVar31 = (undefined **)ppppppppplVar32;
            }
joined_r0x0071019ebf04:
            local_f8 = puVar21;
            local_e8 = puVar44;
            local_f0 = puVar71 + 1;
            if (puVar19 != (ulong *)0x0) {
              FUN_710392eb40((ulong)puVar19);
            }
          }
          else {
            *local_f0 = (ulong)pplVar50;
LAB_71019ebe0c:
            local_f0 = local_f0 + 1;
          }
        }
        break;
      case 1:
        ppppplVar70 = (long *****)*ppplVar67;
        ppppplVar66 = (long *****)FUN_7103263030(*(long *)(lVar76 + 0x168),(ulong)ppppplVar70);
        ppppppplVar73 = (long *******)&local_d8;
        ppppppplVar26 = (long *******)&local_d8;
        if (local_d8 == (long *******)0x0) {
LAB_71019ebb38:
          pppppplVar59 = *ppppppplVar26;
        }
        else {
          ppppppplVar51 = local_d8;
          do {
            while (ppppppplVar73 = ppppppplVar51,
                  ((ulong)ppppppplVar73[4] & 0xff0000ffffffffff) <=
                  ((ulong)ppppplVar70 & 0xff0000ffffffffff)) {
              if (((ulong)ppppplVar70 & 0xff0000ffffffffff) <=
                  ((ulong)ppppppplVar73[4] & 0xff0000ffffffffff)) goto LAB_71019ebb38;
              ppppppplVar26 = ppppppplVar73 + 1;
              ppppppplVar51 = (long *******)*ppppppplVar26;
              if ((long *******)*ppppppplVar26 == (long *******)0x0) goto LAB_71019ebb38;
            }
            ppppppplVar51 = (long *******)*ppppppplVar73;
            ppppppplVar26 = ppppppplVar73;
          } while ((long *******)*ppppppplVar73 != (long *******)0x0);
          pppppplVar59 = *ppppppplVar73;
        }
        if (pppppplVar59 == (long ******)0x0) {
          pppppplVar59 = (long ******)
                         FUN_710392e290(0x10,0x30,(long ****)ppuVar31,ppppbVar33,pppplVar62,param_6,
                                        param_7,param_8);
          if (pppppplVar59 == (long ******)0x0) {
            local_140[0] = 0;
            local_290 = (undefined **)&DAT_00000030;
            ppuVar31 = (undefined **)&local_290;
            (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_140);
            pppppplVar59 = (long ******)
                           FUN_710392e290(0x10,0x30,(long ****)ppuVar31,ppppbVar33,pppplVar62,
                                          param_6,param_7,param_8);
          }
          pppppplVar59[4] = ppppplVar70;
          pppppplVar59[5] = ppppplVar66;
          pppppplVar59[2] = (long *****)ppppppplVar73;
          *pppppplVar59 = (long *****)0x0;
          pppppplVar59[1] = (long *****)0x0;
          *ppppppplVar26 = pppppplVar59;
          if ((long *******)*local_e0 != (long *******)0x0) {
            pppppplVar59 = *ppppppplVar26;
            local_e0 = (long *******)*local_e0;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)local_d8,(long *)pppppplVar59);
          local_d0 = local_d0 + 1;
        }
        break;
      case 2:
        if (cVar5 != '\0') {
          pplVar50 = *ppplVar67;
          uVar68 = FUN_7103263030(*(long *)(lVar76 + 0x168),(ulong)pplVar50);
          ppplVar40 = *param_5;
          ppplVar34 = param_5[1];
          if (ppplVar40 != ppplVar34) {
            bVar9 = (uVar68 & 0xffffffffff) == 0;
            bVar10 = (uVar68 & 0xff00000000000000) != 0xc100000000000000;
            if ((!bVar10) && ((uVar68 & 0xffffffffff) != 0)) {
              if (!bVar9) {
                do {
                  pplVar47 = *ppplVar40;
                  if ((((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000 &&
                      ((ulong)pplVar47 & 0xffffffffff) != 0) &&
                      ((uVar68 ^ (ulong)pplVar47) & 0xffffffffff) == 0) goto LAB_71019ebde4;
                  ppplVar40 = ppplVar40 + 1;
                } while (ppplVar34 != ppplVar40);
              }
              break;
            }
            pplVar47 = *ppplVar40;
            bVar11 = ((ulong)pplVar47 & 0xffffffffff) != 0;
            bVar12 = ((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000;
            if (bVar10 || bVar9) {
              if (bVar12 && bVar11) {
                ppplVar40 = ppplVar40 + 1;
                do {
                  if (ppplVar34 == ppplVar40) goto switchD_71019eb990_default;
                  ppplVar39 = ppplVar40 + 1;
                  pplVar47 = *ppplVar40;
                } while ((((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000) &&
                        (ppplVar40 = ppplVar39, ((ulong)pplVar47 & 0xffffffffff) != 0));
LAB_71019ebde0:
                ppplVar40 = ppplVar39 + -1;
              }
            }
            else if (bVar12 && bVar11) {
              while (ppplVar39 = ppplVar40 + 1, ((uVar68 ^ (ulong)pplVar47) & 0xffffffffff) != 0) {
                if (ppplVar34 == ppplVar39) goto switchD_71019eb990_default;
                pplVar47 = *ppplVar39;
                ppplVar40 = ppplVar39;
                if ((((ulong)pplVar47 & 0xff00000000000000) != 0xc100000000000000) ||
                   (((ulong)pplVar47 & 0xffffffffff) == 0)) break;
              }
            }
          }
LAB_71019ebde4:
          puVar19 = local_f8;
          if (ppplVar34 != ppplVar40) {
            if (local_f0 != local_e8) {
              *local_f0 = (ulong)pplVar50;
              goto LAB_71019ebe0c;
            }
            ppppppppplVar32 = (long *********)((long)local_f0 - (long)local_f8);
            uVar68 = ((long)ppppppppplVar32 >> 3) + 1;
            if (uVar68 >> 0x3d != 0) {
LAB_71019f05e0:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_e8 - (long)local_f8 >> 3) < 0xfffffffffffffff) {
              uVar20 = (long)local_e8 - (long)local_f8 >> 2;
              if (uVar68 <= uVar20) {
                uVar68 = uVar20;
              }
              if (uVar68 != 0) {
                if (uVar68 >> 0x3d == 0) goto LAB_71019ebe68;
                goto LAB_71019f05e8;
              }
              puVar21 = (ulong *)0x0;
            }
            else {
              uVar68 = 0x1fffffffffffffff;
LAB_71019ebe68:
              pppppppplVar42 = (long ********)(uVar68 * 8);
              if (pppppppplVar42 == (long ********)0x0) {
                pppppppplVar42 = (long ********)0x1;
              }
              puVar21 = (ulong *)FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,ppppbVar33,
                                                pppplVar62,param_6,param_7,param_8);
              if (puVar21 == (ulong *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_140[0] = 0;
                  ppuVar31 = (undefined **)&local_290;
                  local_290 = (undefined **)pppppppplVar42;
                  uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_140);
                  if (((uVar20 & 1) != 0) &&
                     (puVar21 = (ulong *)FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,
                                                        ppppbVar33,pppplVar62,param_6,param_7,
                                                        param_8), puVar21 != (ulong *)0x0))
                  goto LAB_71019ebecc;
                }
                puVar21 = (ulong *)0x0;
              }
LAB_71019ebecc:
              pplVar50 = *ppplVar67;
            }
            puVar71 = puVar21 + ((long)ppppppppplVar32 >> 3);
            *puVar71 = (ulong)pplVar50;
            puVar44 = puVar21 + uVar68;
            if (0 < (long)ppppppppplVar32) {
              memcpy(puVar21,puVar19,(size_t)ppppppppplVar32);
              ppuVar31 = (undefined **)ppppppppplVar32;
            }
            goto joined_r0x0071019ebf04;
          }
        }
        break;
      case 3:
        if (cVar5 == '\0') {
          pplVar50 = *ppplVar67;
          uVar68 = FUN_7103263030(*(long *)(lVar76 + 0x168),(ulong)pplVar50);
          ppplVar40 = *param_5;
          ppplVar34 = param_5[1];
          if (ppplVar40 != ppplVar34) {
            bVar9 = (uVar68 & 0xffffffffff) == 0;
            bVar10 = (uVar68 & 0xff00000000000000) != 0xc100000000000000;
            if ((!bVar10) && ((uVar68 & 0xffffffffff) != 0)) {
              if (!bVar9) {
                do {
                  pplVar47 = *ppplVar40;
                  if ((((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000 &&
                      ((ulong)pplVar47 & 0xffffffffff) != 0) &&
                      ((uVar68 ^ (ulong)pplVar47) & 0xffffffffff) == 0) goto LAB_71019ebde4;
                  ppplVar40 = ppplVar40 + 1;
                } while (ppplVar34 != ppplVar40);
              }
              break;
            }
            pplVar47 = *ppplVar40;
            bVar11 = ((ulong)pplVar47 & 0xffffffffff) != 0;
            bVar12 = ((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000;
            if (bVar10 || bVar9) {
              if (bVar12 && bVar11) {
                ppplVar40 = ppplVar40 + 1;
                do {
                  if (ppplVar34 == ppplVar40) goto switchD_71019eb990_default;
                  ppplVar39 = ppplVar40 + 1;
                  pplVar47 = *ppplVar40;
                } while ((((ulong)pplVar47 & 0xff00000000000000) == 0xc100000000000000) &&
                        (ppplVar40 = ppplVar39, ((ulong)pplVar47 & 0xffffffffff) != 0));
                goto LAB_71019ebde0;
              }
            }
            else if (bVar12 && bVar11) {
              while (ppplVar39 = ppplVar40 + 1, ((uVar68 ^ (ulong)pplVar47) & 0xffffffffff) != 0) {
                if (ppplVar34 == ppplVar39) goto switchD_71019eb990_default;
                pplVar47 = *ppplVar39;
                ppplVar40 = ppplVar39;
                if ((((ulong)pplVar47 & 0xff00000000000000) != 0xc100000000000000) ||
                   (((ulong)pplVar47 & 0xffffffffff) == 0)) break;
              }
            }
          }
          goto LAB_71019ebde4;
        }
      }
switchD_71019eb990_default:
      ppplVar67 = ppplVar67 + 1;
    } while (ppplVar67 != ppplVar3);
    uVar68 = (long)param_5[1] - (long)*param_5 >> 3;
  }
  puVar21 = local_f0;
  puVar19 = local_f8;
  cVar6 = *(char *)param_4;
  lVar63 = *param_2;
  if (((DAT_710532f4d0 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_710532f4d0), iVar18 != 0)) {
    DAT_710532f4a0 = 0xffffff;
    ppuVar31 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d0);
  }
  plVar64 = (long *)(lVar63 + 0x10);
  plVar54 = (long *)*plVar64;
  plVar30 = plVar64;
  if (plVar54 == (long *)0x0) {
LAB_71019ebfa0:
    puVar41 = &DAT_710532f4a0;
  }
  else {
    do {
      bVar9 = (plVar54[4] & 0xfffffffffeU) < 0x2875a6d936;
      if (!bVar9) {
        plVar30 = plVar54;
      }
      plVar54 = (long *)plVar54[bVar9];
    } while (plVar54 != (long *)0x0);
    if ((plVar30 == plVar64) || (0x2875a6d936 < (plVar30[4] & 0xffffffffffU))) goto LAB_71019ebfa0;
    puVar41 = (uint *)(plVar30 + 5);
  }
  uVar15 = *puVar41;
  uVar68 = uVar68 - ((long)puVar21 - (long)puVar19 >> 3);
  puVar19 = param_1 + 0x34;
  local_140[0] = uVar15;
  if (uVar15 == 0xffffff) {
    FUN_7103720c30((long)puVar19,local_140,(long *********)ppuVar31,ppppbVar33,pppplVar62,param_6,
                   param_7,param_8);
  }
  else {
    FUN_7103540a00(DAT_7105332f20,uVar15);
    FUN_7103720c30((long)puVar19,local_140,(long *********)ppuVar31,ppppbVar33,pppplVar62,param_6,
                   param_7,param_8);
    FUN_7103540b10(DAT_7105332f20,uVar15,(long *********)ppuVar31,ppppbVar33,pppplVar62,param_6,
                   param_7,param_8);
    local_140[0] = 0xffffff;
  }
  pcVar48 = (char *)param_1[0x35];
  if (*pcVar48 == '\f') {
    puVar21 = &DAT_71044651b8;
    if (cVar6 != '\0') {
      puVar21 = &DAT_71044655b8;
    }
    iVar18 = *(int *)(pcVar48 + 1) + -1;
    if (*(int *)(pcVar48 + 1) < 1) goto LAB_71019ec0b4;
    uVar20 = *puVar19;
    iVar57 = 0;
    pcVar35 = "";
    do {
      iVar1 = iVar18 + iVar57;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar41 = (uint *)(*(long *)(uVar20 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8);
      uVar58 = *(ulong *)(*(long *)(uVar20 + 0x20) + (ulong)*puVar41 * 8);
      if (uVar58 == (*puVar21 & 0xffffffffff)) {
        uVar15 = puVar41[1];
        if ((int)uVar15 < 0) goto LAB_71019ec0b4;
        pcVar35 = pcVar48 + (int)uVar15;
        goto LAB_71019ec0c0;
      }
      iVar8 = iVar1 + -1;
      if (uVar58 <= (*puVar21 & 0xffffffffff)) {
        iVar57 = iVar1 + 1;
        iVar8 = iVar18;
      }
      iVar18 = iVar8;
    } while (iVar57 <= iVar18);
    uVar20 = 0;
  }
  else {
LAB_71019ec0b4:
    uVar20 = 0;
    pcVar35 = "";
  }
LAB_71019ec0c0:
  uVar15 = (uint)uVar68;
  pcVar48 = "";
  uVar58 = 0;
  if ((0 < (int)uVar15) && (*pcVar35 == '\v')) {
    if (*(int *)(pcVar35 + 1) < (int)uVar15) {
      pcVar48 = "";
      uVar58 = 0;
    }
    else {
      pcVar48 = pcVar35 + *(int *)(pcVar35 + (long)(int)(uVar15 * 4 + -4) + 5);
      uVar58 = uVar20;
    }
  }
  if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
    iVar57 = 0;
    pcVar35 = "";
    do {
      iVar1 = iVar18 + iVar57;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8);
      uVar20 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
      if (uVar20 == 0x9fffcce2f) {
        uVar16 = puVar41[1];
        if ((int)uVar16 < 0) goto LAB_71019ec1a0;
        pcVar35 = pcVar48 + (int)uVar16;
        break;
      }
      iVar8 = iVar1 + -1;
      if (uVar20 < 0x9fffcce30) {
        iVar57 = iVar1 + 1;
        iVar8 = iVar18;
      }
      iVar18 = iVar8;
    } while (iVar57 <= iVar18);
  }
  else {
LAB_71019ec1a0:
    pcVar35 = "";
  }
  switch(*pcVar35) {
  case '\x01':
  case '\x03':
    uVar16 = (uint)(byte)pcVar35[1];
    break;
  case '\x02':
    if ((int)pcVar35[1] != uVar15) goto LAB_71019ed7e4;
    goto LAB_71019ec228;
  case '\x04':
    uVar16 = (uint)*(short *)(pcVar35 + 1);
    break;
  case '\x05':
    uVar16 = (uint)*(ushort *)(pcVar35 + 1);
    break;
  case '\x06':
  case '\a':
    uVar16 = *(uint *)(pcVar35 + 1);
    break;
  default:
    if (uVar15 == 0) goto LAB_71019ec228;
    goto LAB_71019ed7e4;
  }
  if (uVar16 == uVar15) {
LAB_71019ec228:
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",0,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ec31c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ec31c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)((long)param_1 + 0x1d4) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",1,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ec46c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ec46c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x3b) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",2,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ec5bc;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ec5bc:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)((long)param_1 + 0x1dc) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",3,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ec70c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ec70c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x3c) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",4,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ec85c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ec85c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)((long)param_1 + 0x1e4) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",5,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ec9ac;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ec9ac:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x3d) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",6,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ecafc;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ecafc:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)((long)param_1 + 0x1ec) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",7,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ecc4c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ecc4c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x3e) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",8,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ecd9c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ecd9c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)((long)param_1 + 500) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",9,ppuVar31,ppppbVar33,pppplVar62,param_6,param_7
                   ,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019eceec;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019eceec:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x3f) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",10,ppuVar31,ppppbVar33,pppplVar62,param_6,
                   param_7,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed03c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed03c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)((long)param_1 + 0x1fc) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",0xb,ppuVar31,ppppbVar33,pppplVar62,param_6,
                   param_7,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed18c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed18c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(uint *)(param_1 + 0x40) = uVar16;
    FUN_71003a4ca0((uint *)&local_290,"row%02d_num",0xc,ppuVar31,ppppbVar33,pppplVar62,param_6,
                   param_7,param_8);
    if (local_290._4_4_ == 0) {
      uVar20 = 0;
    }
    else {
      uVar16 = 0xffffffff;
      ppppppppplVar32 = &pppppppplStack_288;
      do {
        ppppppppplVar55 = (long *********)((long)ppppppppplVar32 + 1);
        bVar4 = *(byte *)ppppppppplVar32;
        uVar38 = bVar4 + 0x20;
        if (0x19 < bVar4 - 0x41) {
          uVar38 = (uint)bVar4;
        }
        uVar16 = (&DAT_7104754084)[(uVar38 ^ uVar16) & 0xff] ^ uVar16 >> 8;
        ppppppppplVar32 = ppppppppplVar55;
      } while (ppppppppplVar55 <
               (long *********)((long)&pppppppplStack_288 + (ulong)local_290._4_4_));
      uVar20 = (ulong)~uVar16;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      uVar20 = uVar20 | ((long)(int)local_290._4_4_ & 0xffU) << 0x20;
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar65 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar65 == uVar20) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed2d8;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar65 <= uVar20) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed2d8:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    iVar18 = *(int *)((long)param_1 + 0x1d4);
    uVar38 = (uint)(0 < iVar18);
    *(uint *)((long)param_1 + 0x204) = uVar16;
    *(uint *)(param_1 + 0x41) = (uint)(0 < iVar18);
    if (0 < (int)param_1[0x3b]) {
      uVar38 = 1;
      if (0 < iVar18) {
        uVar38 = 2;
      }
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < *(int *)((long)param_1 + 0x1dc)) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < (int)param_1[0x3c]) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < *(int *)((long)param_1 + 0x1e4)) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < (int)param_1[0x3d]) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < *(int *)((long)param_1 + 0x1ec)) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < (int)param_1[0x3e]) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < *(int *)((long)param_1 + 500)) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < (int)param_1[0x3f]) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if (0 < *(int *)((long)param_1 + 0x1fc)) {
      uVar38 = uVar38 + 1;
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if ((0 < (int)param_1[0x40]) || (0 < (int)uVar16)) {
      if (0 < (int)param_1[0x40]) {
        uVar38 = uVar38 + 1;
      }
      if (0 < (int)uVar16) {
        uVar38 = uVar38 + 1;
      }
      *(uint *)(param_1 + 0x41) = uVar38;
    }
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar20 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar20 == 0x96b6a7543) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed4c8;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar20 < 0x96b6a7544) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed4c8:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 6;
    }
    *(uint *)(param_1 + 0x3a) = uVar16;
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar20 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar20 == 0x8096fccf3) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed5b0;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar20 < 0x8096fccf4) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed5b0:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(float *)((long)param_1 + 0x20c) = (float)(int)uVar16;
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar20 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar20 == 0x87e68fc65) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed69c;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar20 < 0x87e68fc66) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed69c:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0;
    }
    *(float *)(param_1 + 0x42) = (float)(int)uVar16;
    if ((*pcVar48 == '\f') && (iVar18 = *(int *)(pcVar48 + 1) + -1, 0 < *(int *)(pcVar48 + 1))) {
      iVar57 = 0;
      pcVar35 = "";
      do {
        iVar1 = iVar18 + iVar57;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar41 = (uint *)(*(long *)(uVar58 + 0x28) + (long)*(int *)(pcVar48 + 5) + (long)iVar1 * 8)
        ;
        uVar20 = *(ulong *)(*(long *)(uVar58 + 0x20) + (ulong)*puVar41 * 8);
        if (uVar20 == 0x6590acad0) {
          uVar16 = puVar41[1];
          if ((int)uVar16 < 0) goto LAB_71019ed788;
          pcVar35 = pcVar48 + (int)uVar16;
          break;
        }
        iVar8 = iVar1 + -1;
        if (uVar20 < 0x6590acad1) {
          iVar57 = iVar1 + 1;
          iVar8 = iVar18;
        }
        iVar18 = iVar8;
      } while (iVar57 <= iVar18);
    }
    else {
LAB_71019ed788:
      pcVar35 = "";
    }
    switch(*pcVar35) {
    case '\x01':
    case '\x03':
      uVar16 = (uint)(byte)pcVar35[1];
      break;
    case '\x02':
      uVar16 = (uint)pcVar35[1];
      break;
    case '\x04':
      uVar16 = (uint)*(short *)(pcVar35 + 1);
      break;
    case '\x05':
      uVar16 = (uint)*(ushort *)(pcVar35 + 1);
      break;
    case '\x06':
    case '\a':
      uVar16 = *(uint *)(pcVar35 + 1);
      break;
    default:
      uVar16 = 0xffffffff;
    }
    *(uint *)((long)param_1 + 0x214) = uVar16;
  }
LAB_71019ed7e4:
  ppppppplVar73 = **param_3;
  uVar20 = *param_1;
  uVar58 = (ulong)(int)uVar15;
  if ((ulong)(((long)(param_1[2] - uVar20) >> 4) * 0x2e8ba2e8ba2e8ba3) < uVar58) {
    if (0x1745d1745d1745d < uVar58) {
LAB_71019f05e8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar65 = param_1[1];
    lVar63 = (long)(uVar65 - uVar20) >> 4;
    pppppppplVar42 = (long ********)(uVar58 * 0xb0);
    if ((uVar68 & 0xffffffff) == 0) {
      pppppppplVar42 = (long ********)0x1;
    }
    lVar22 = FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,ppppbVar33,pppplVar62,param_6,
                            param_7,param_8);
    if (lVar22 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_140[0] = 0;
        ppuVar31 = (undefined **)&local_290;
        local_290 = (undefined **)pppppppplVar42;
        uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_140);
        if (((uVar68 & 1) != 0) &&
           (lVar22 = FUN_710392e290(0x10,pppppppplVar42,(long ****)ppuVar31,ppppbVar33,pppplVar62,
                                    param_6,param_7,param_8), lVar22 != 0)) goto LAB_71019ed8b4;
      }
      lVar22 = 0;
    }
LAB_71019ed8b4:
    uVar43 = lVar22 + lVar63 * 0x10;
    uVar68 = lVar22 + uVar58 * 0xb0;
    if (uVar65 == uVar20) {
      *param_1 = uVar43;
      param_1[1] = uVar43;
      param_1[2] = uVar68;
    }
    else {
      uVar58 = lVar22 + lVar63 * 0x10;
      lVar77 = 0;
      do {
        lVar52 = uVar65 + lVar77;
        lVar2 = uVar58 + lVar77;
        *(undefined8 *)(lVar2 + -0xa8) = *(undefined8 *)(lVar52 + -0xa8);
        uVar36 = *(undefined8 *)(lVar52 + -0xb0);
        *(undefined8 *)(lVar2 + -0xa0) = *(undefined8 *)(lVar52 + -0xa0);
        *(undefined ***)(lVar2 + -0x98) = &PTR_FUN_710523d988;
        *(undefined8 *)(lVar2 + -0xb0) = uVar36;
        *(undefined8 *)(lVar2 + -0x90) = 0;
        if (uVar65 == uVar58) {
          *(undefined ***)(lVar2 + -0x88) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(lVar2 + -0x80) = 0;
          *(undefined ***)(lVar2 + -0x78) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(lVar2 + -0x70) = 0;
        }
        else {
          uVar36 = *(undefined8 *)(lVar52 + -0x90);
          *(undefined8 *)(lVar52 + -0x90) = 0;
          uVar69 = *(ulong *)(lVar2 + -0x90);
          *(undefined8 *)(lVar2 + -0x90) = uVar36;
          if (uVar69 != 0) {
            uVar23 = *(ulong *)(uVar69 + 0x18);
            *(undefined ***)(uVar69 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar69 + 0x18) = 0;
            if (uVar23 != 0) {
              FUN_710392eb40(uVar23);
            }
            FUN_710392eb40(uVar69);
          }
          *(undefined ***)(lVar2 + -0x88) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(lVar2 + -0x80) = 0;
          uVar36 = *(undefined8 *)(lVar52 + -0x80);
          *(undefined8 *)(lVar52 + -0x80) = 0;
          uVar69 = *(ulong *)(lVar2 + -0x80);
          *(undefined8 *)(lVar2 + -0x80) = uVar36;
          if (uVar69 != 0) {
            FUN_710392eb40(uVar69);
          }
          *(undefined ***)(lVar2 + -0x78) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(lVar2 + -0x70) = 0;
          uVar36 = *(undefined8 *)(lVar52 + -0x70);
          *(undefined8 *)(lVar52 + -0x70) = 0;
          uVar69 = *(ulong *)(lVar2 + -0x70);
          *(undefined8 *)(lVar2 + -0x70) = uVar36;
          if (uVar69 != 0) {
            FUN_710392eb40(uVar69);
          }
        }
        uVar36 = *(undefined8 *)(lVar52 + -0x68);
        uVar45 = *(undefined8 *)(lVar52 + -0x60);
        lVar77 = lVar77 + -0xb0;
        uVar49 = *(undefined8 *)(lVar52 + -0x50);
        *(undefined8 *)(lVar2 + -0x58) = *(undefined8 *)(lVar52 + -0x58);
        *(undefined8 *)(lVar2 + -0x50) = uVar49;
        *(undefined8 *)(lVar2 + -0x68) = uVar36;
        *(undefined8 *)(lVar2 + -0x60) = uVar45;
        uVar36 = *(undefined8 *)(lVar52 + -0x48);
        uVar45 = *(undefined8 *)(lVar52 + -0x40);
        uVar49 = *(undefined8 *)(lVar52 + -0x30);
        *(undefined8 *)(lVar2 + -0x38) = *(undefined8 *)(lVar52 + -0x38);
        *(undefined8 *)(lVar2 + -0x30) = uVar49;
        *(undefined8 *)(lVar2 + -0x48) = uVar36;
        *(undefined8 *)(lVar2 + -0x40) = uVar45;
        uVar49 = *(undefined8 *)(lVar52 + -0x18);
        uVar36 = *(undefined8 *)(lVar52 + -0x28);
        uVar45 = *(undefined8 *)(lVar52 + -0x20);
        *(undefined2 *)(lVar2 + -0x10) = *(undefined2 *)(lVar52 + -0x10);
        *(undefined8 *)(lVar2 + -0x20) = uVar45;
        *(undefined8 *)(lVar2 + -0x18) = uVar49;
        *(undefined8 *)(lVar2 + -0x28) = uVar36;
      } while (uVar20 - uVar65 != lVar77);
      uVar65 = *param_1;
      uVar20 = param_1[1];
      *param_1 = lVar22 + lVar63 * 0x10 + lVar77;
      param_1[1] = uVar43;
      param_1[2] = uVar68;
      while (uVar20 != uVar65) {
        uVar68 = *(ulong *)(uVar20 - 0x70);
        *(undefined ***)(uVar20 - 0x78) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar20 - 0x70) = 0;
        if (uVar68 != 0) {
          FUN_710392eb40(uVar68);
        }
        uVar68 = *(ulong *)(uVar20 - 0x80);
        *(undefined ***)(uVar20 - 0x88) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar20 - 0x80) = 0;
        if (uVar68 != 0) {
          FUN_710392eb40(uVar68);
        }
        uVar68 = *(ulong *)(uVar20 - 0x90);
        uVar58 = uVar20 - 0xb0;
        *(undefined ***)(uVar20 - 0x98) = &PTR_FUN_710523d988;
        *(undefined8 *)(uVar20 - 0x90) = 0;
        uVar20 = uVar58;
        if (uVar68 != 0) {
          uVar58 = *(ulong *)(uVar68 + 0x18);
          *(undefined ***)(uVar68 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar68 + 0x18) = 0;
          if (uVar58 != 0) {
            FUN_710392eb40(uVar58);
          }
          FUN_710392eb40(uVar68);
        }
      }
    }
    if (uVar65 != 0) {
      FUN_710392eb40(uVar65);
    }
  }
  puVar19 = param_1 + 4;
  ppppppplVar73 = ppppppplVar73 + 1;
  FUN_71019f05f0((undefined8 *)*puVar19);
  *puVar19 = 0;
  param_1[5] = 0;
  param_1[3] = (ulong)puVar19;
  lVar63 = *(long *)(lVar76 + 0x168);
  puVar24 = FUN_71032631a0(lVar63,0xfd5f7fa78);
  puVar25 = FUN_71032631a0(lVar63,0x14ca4126b0);
  FUN_71003a4ca0(local_140,"window_size_%02d",(ulong)(uint)param_1[0x3a],ppuVar31,ppppbVar33,
                 pppplVar62,param_6,param_7,param_8);
  uVar15 = 0;
  do {
    uVar68 = (ulong)uVar15;
    FUN_7103776640(&local_290,(long)ppppppplVar73,(byte ****)"set_parts_chr_s_%02d",uVar68,
                   ppppbVar33,pppplVar62,param_6,param_7,param_8);
    pppppppplVar42 = pppppppplStack_288;
    FUN_7103778300(0x3f800000,(long)pppppppplStack_288,(long)auStack_138);
    FUN_7103778300(0x3f800000,(long)pppppppplVar42,0x71042b4086);
    FUN_7103778300(0x3f800000,(long)pppppppplVar42,0x710431894d);
    FUN_7103778300(0x3f800000,(long)pppppppplVar42,0x7104307eea);
    FUN_7103778300(0x3f800000,(long)pppppppplVar42,0x710424ee8f);
    FUN_7103776640(&local_1b8,(long)&local_290,(byte ****)"set_lct_hd",uVar68,ppppbVar33,pppplVar62,
                   param_6,param_7,param_8);
    plVar30 = local_1b0[0];
    pcVar48 = "bg_set_ch";
    if (*(char *)((long)param_4 + 3) != '\0') {
      pcVar48 = "bg_set_hd";
    }
    FUN_7103778300(0x3f800000,(long)local_1b0[0],(long)pcVar48);
    local_1b8 = &PTR_FUN_710523d988;
    local_1b0[0] = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      uVar20 = plVar30[3];
      plVar30[2] = (long)&PTR_FUN_710523d9a8;
      plVar30[3] = 0;
      if (uVar20 != 0) {
        FUN_710392eb40(uVar20);
      }
      FUN_710392eb40((ulong)plVar30);
    }
    if (*(char *)((long)param_1 + 0x254) == '\0') {
      FUN_7103778300(0x3f800000,(long)pppppppplVar42,0x71042a2940);
    }
    else {
      pcVar48 = "compe_bg_on";
      if (*(char *)((long)param_4 + 2) != '\0') {
        pcVar48 = "compe_bg_hd_on";
      }
      FUN_7103778300(0x3f800000,(long)pppppppplVar42,(long)pcVar48);
      uVar68 = (ulong)uVar15;
      FUN_7103776640(&local_1b8,(long)ppppppplVar73,(byte ****)"set_parts_chr_bg_s_%02d",uVar68,
                     ppppbVar33,pppplVar62,param_6,param_7,param_8);
      plVar30 = local_1b0[0];
      FUN_7103778300(0x3f800000,(long)local_1b0[0],(long)auStack_138);
      local_1b8 = &PTR_FUN_710523d988;
      local_1b0[0] = (long *)0x0;
      if (plVar30 != (long *)0x0) {
        uVar20 = plVar30[3];
        plVar30[2] = (long)&PTR_FUN_710523d9a8;
        plVar30[3] = 0;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
        FUN_710392eb40((ulong)plVar30);
      }
    }
    FUN_7103776910(&local_1b8,(long)&local_290,(long ****)"set_txt_name_l",uVar68,ppppbVar33,
                   pppplVar62,param_6,param_7,param_8);
    plVar30 = local_1b0[0];
    if (local_1b0[0][2] != 0) {
      *(undefined1 *)(local_1b0[0][2] + 0x27d) = 1;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0[0] = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar30);
    }
    FUN_7103776910(&local_1b8,(long)&local_290,(long ****)"set_txt_name_s",uVar68,ppppbVar33,
                   pppplVar62,param_6,param_7,param_8);
    plVar30 = local_1b0[0];
    if (local_1b0[0][2] != 0) {
      *(undefined1 *)(local_1b0[0][2] + 0x27d) = 1;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0[0] = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar30);
    }
    local_290 = &PTR_FUN_710523d988;
    pppppppplStack_288 = (long ********)0x0;
    if (pppppppplVar42 != (long ********)0x0) {
      ppppppplVar26 = pppppppplVar42[3];
      pppppppplVar42[2] = (long *******)&PTR_FUN_710523d9a8;
      pppppppplVar42[3] = (long *******)0x0;
      if (ppppppplVar26 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar26);
      }
      FUN_710392eb40((ulong)pppppppplVar42);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x5b);
  pppppplVar59 = ***param_3;
  (*(code *)(*pppppplVar59[0x8b])[0xb])(*(float *)(pppppplVar59 + 200) * 0.0,0);
  ppppplVar70 = pppppplVar59[0x8d];
  for (ppppplVar66 = pppppplVar59[0x8c]; ppppplVar66 != ppppplVar70; ppppplVar66 = ppppplVar66 + 1)
  {
    pppplVar60 = *ppppplVar66;
    uVar20 = (*(code *)(*pppplVar60)[8])(pppplVar60);
    if ((uVar20 & 1) != 0) {
      (*(code *)(*pppplVar60)[4])(pppplVar60);
    }
  }
  FUN_7103776910(&local_290,(long)ppppppplVar73,(long ****)"set_chr_area",uVar68,ppppbVar33,
                 pppplVar62,param_6,param_7,param_8);
  pppppppplVar42 = pppppppplStack_288;
  ppppppplVar26 = *pppppppplStack_288;
  if (ppppppplVar26 == (long *******)0x0) {
    local_2d0 = _ConstantZero;
    fVar89 = 0.0;
    fVar78 = 0.0;
  }
  else {
    fVar84 = *(float *)(ppppppplVar26 + 6);
    local_2d0 = ppppppplVar26[6];
    fVar78 = ABS(*(float *)(ppppppplVar26 + 10) * *(float *)(ppppppplVar26 + 9));
    fVar89 = ABS(*(float *)((long)ppppppplVar26 + 0x54) * *(float *)((long)ppppppplVar26 + 0x4c));
    bVar4 = *(byte *)((long)ppppppplVar26 + 0x5b) & 3;
    if (bVar4 == 2) {
      fVar84 = fVar84 - fVar78 * 0.5;
LAB_71019ede50:
      local_2d0 = (long ******)CONCAT44((int)((ulong)local_2d0 >> 0x20),fVar84);
    }
    else if (bVar4 == 1) {
      fVar84 = fVar84 + fVar78 * 0.5;
      goto LAB_71019ede50;
    }
    bVar4 = *(byte *)((long)ppppppplVar26 + 0x5b) >> 2 & 3;
    fVar84 = (float)((ulong)local_2d0 >> 0x20);
    if (bVar4 == 2) {
      fVar84 = fVar89 * 0.5 + fVar84;
    }
    else {
      if (bVar4 != 1) goto LAB_71019ede88;
      fVar84 = fVar84 - fVar89 * 0.5;
    }
    local_2d0 = (long ******)CONCAT44(fVar84,(int)local_2d0);
  }
LAB_71019ede88:
  local_290 = &PTR_FUN_710523d9a8;
  pppppppplStack_288 = (long ********)0x0;
  if (pppppppplVar42 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar42);
  }
  FUN_7103776640(&local_1b8,(long)ppppppplVar73,(byte ****)"set_parts_chr_s_00",uVar68,ppppbVar33,
                 pppplVar62,param_6,param_7,param_8);
  FUN_7103776910(&local_290,(long)&local_1b8,(long ****)&DAT_71044641f6,uVar68,ppppbVar33,pppplVar62
                 ,param_6,param_7,param_8);
  pppppppplVar42 = pppppppplStack_288;
  ppppppplVar26 = *pppppppplStack_288;
  if (ppppppplVar26 == (long *******)0x0) {
    fVar79 = 0.0;
    fVar84 = 0.0;
    pppppplVar59 = _ConstantZero;
  }
  else {
    fVar86 = *(float *)(ppppppplVar26 + 6);
    fVar84 = ABS(*(float *)((long)ppppppplVar26 + 0x54) * *(float *)((long)ppppppplVar26 + 0x4c));
    fVar79 = ABS(*(float *)(ppppppplVar26 + 10) * *(float *)(ppppppplVar26 + 9));
    pppppplVar59 = ppppppplVar26[6];
    bVar4 = *(byte *)((long)ppppppplVar26 + 0x5b) & 3;
    if (bVar4 == 2) {
      fVar86 = fVar86 - fVar79 * 0.5;
LAB_71019edf6c:
      pppppplVar59 = (long ******)CONCAT44((int)((ulong)pppppplVar59 >> 0x20),fVar86);
    }
    else if (bVar4 == 1) {
      fVar86 = fVar86 + fVar79 * 0.5;
      goto LAB_71019edf6c;
    }
    bVar4 = *(byte *)((long)ppppppplVar26 + 0x5b) >> 2 & 3;
    fVar86 = (float)((ulong)pppppplVar59 >> 0x20);
    if (bVar4 == 2) {
      fVar86 = fVar84 * 0.5 + fVar86;
    }
    else {
      if (bVar4 != 1) goto LAB_71019edfa4;
      fVar86 = fVar86 - fVar84 * 0.5;
    }
    pppppplVar59 = (long ******)CONCAT44(fVar86,(int)pppppplVar59);
  }
LAB_71019edfa4:
  fVar86 = (float)((ulong)pppppplVar59 >> 0x20);
  local_290 = &PTR_FUN_710523d9a8;
  pppppppplStack_288 = (long ********)0x0;
  if (pppppppplVar42 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar42);
  }
  plVar30 = local_1b0[0];
  fVar93 = (float)((ulong)local_2d0 >> 0x20);
  local_1b8 = &PTR_FUN_710523d988;
  local_1b0[0] = (long *)0x0;
  if (plVar30 != (long *)0x0) {
    uVar68 = plVar30[3];
    plVar30[2] = (long)&PTR_FUN_710523d9a8;
    plVar30[3] = 0;
    if (uVar68 != 0) {
      FUN_710392eb40(uVar68);
    }
    FUN_710392eb40((ulong)plVar30);
  }
  fVar80 = SUB84(local_2d0,0) - fVar78 * 0.5;
  fVar91 = (SUB84(pppppplVar59,0) + fVar79 * 0.5) - (SUB84(pppppplVar59,0) - fVar79 * 0.5);
  fVar85 = *(float *)((long)param_1 + 0x20c);
  fVar92 = (fVar86 + fVar84 * 0.5) - (fVar86 - fVar84 * 0.5);
  fVar79 = fVar93 + fVar89 * 0.5;
  fVar86 = *(float *)(param_1 + 0x42);
  iVar18 = *(int *)((long)param_1 + 0x1d4);
  iVar57 = (int)param_1[0x41];
  fVar84 = fVar91 * (float)iVar18 + fVar85 * (float)(iVar18 + -1);
  if (iVar18 + -1 == 0 || iVar18 < 1) {
    fVar84 = fVar91 * (float)iVar18;
  }
  ppplVar67 = *param_5;
  ppplVar3 = param_5[1];
  fVar88 = fVar92 * (float)iVar57;
  if (1 < iVar57) {
    fVar88 = fVar92 * (float)iVar57 + fVar86 * (float)(iVar57 + -1);
  }
  if (ppplVar67 == ppplVar3) {
    uVar15 = 0;
  }
  else {
    bVar9 = ((ulong)puVar25 & 0xffffffffff) != 0;
    fVar78 = (SUB84(local_2d0,0) + fVar78 * 0.5) - fVar80;
    bVar10 = ((ulong)puVar25 & 0xff00000000000000) == 0xc100000000000000;
    bVar11 = ((ulong)puVar24 & 0xffffffffff) != 0;
    bVar12 = ((ulong)puVar24 & 0xff00000000000000) == 0xc100000000000000;
    puVar21 = param_1 + 4;
    fVar79 = fVar79 - ((fVar79 - (fVar93 - fVar89 * 0.5)) - fVar88) * 0.5;
    fVar89 = fVar80 + (fVar78 - fVar84) * 0.5;
    uVar36 = 0;
    lVar63 = 0;
    uVar15 = 0;
    local_2b0 = 0;
    do {
      if (local_f8 == local_f0) {
LAB_71019ee3d4:
        fVar93 = fVar79 - fVar92 * 0.5;
        fVar84 = fVar91 * 0.5 + fVar89;
        FUN_7103776910(&local_150,(long)ppppppplVar73,(long ****)"set_parts_chr_s_%02d",
                       (ulong)uVar15,ppppbVar33,pppplVar62,param_6,param_7,param_8);
        lVar22 = *local_148;
        if (lVar22 != 0) {
          *(float *)(lVar22 + 0x30) = fVar84;
          *(float *)(lVar22 + 0x34) = fVar93;
          *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
        }
        FUN_7103776910(&local_160,(long)ppppppplVar73,(long ****)"set_parts_chr_bg_s_%02d",
                       (ulong)uVar15,ppppbVar33,pppplVar62,param_6,param_7,param_8);
        lVar22 = *local_158;
        if (lVar22 != 0) {
          *(float *)(lVar22 + 0x30) = fVar84;
          *(float *)(lVar22 + 0x34) = fVar93;
          *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
          lVar22 = *local_158;
          if (lVar22 != 0) {
            *(float *)(lVar22 + 0x50) = fVar91;
            *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
            *(float *)(lVar22 + 0x54) = fVar92;
          }
        }
        FUN_7103776640(&local_170,(long)ppppppplVar73,(byte ****)"set_parts_chr_s_%02d",
                       (ulong)uVar15,ppppbVar33,pppplVar62,param_6,param_7,param_8);
        pplVar50 = *ppplVar67;
        uVar16 = FUN_7103263540(*(long *)(lVar76 + 0x168),(ulong)pplVar50,0,ppppbVar33,pppplVar62,
                                param_6,param_7,param_8);
        FUN_7103262310((uint *)&local_290,*(long *)(lVar76 + 0x168),(ulong)pplVar50);
        ppppppppplVar32 = &pppppppplStack_288;
        FUN_71003a4ca0((uint *)&local_1b8,"nam_chr3_%02d_%s",(ulong)uVar16,&pppppppplStack_288,
                       ppppbVar33,pppplVar62,param_6,param_7,param_8);
        bVar13 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)local_1b0);
        pcVar48 = "name_line1";
        if (bVar13) {
          puVar27 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)local_1b0);
          if (puVar27 != (ushort *)0x0) {
            uVar46 = *puVar27;
            if (uVar46 != 0) {
              uVar16 = 0;
              iVar18 = 1;
              puVar56 = puVar27;
              do {
                if ((uVar46 | 1) == 0xf) {
                  if (uVar46 == 0xe) {
                    iVar57 = (puVar56[3] >> 1) + 4;
                  }
                  else {
                    iVar57 = 3;
                    if (uVar46 != 0xf) {
                      iVar57 = 0;
                    }
                  }
                }
                else {
                  iVar57 = 1;
                  if (uVar46 == 10) {
                    iVar18 = iVar18 + 1;
                  }
                }
                uVar16 = iVar57 + uVar16;
                puVar56 = puVar27 + uVar16;
                uVar46 = *puVar56;
              } while (uVar46 != 0);
              pcVar48 = "name_line2";
              if (iVar18 != 2) {
                pcVar48 = "name_line1";
              }
              goto LAB_71019ee58c;
            }
          }
          pcVar48 = "name_line1";
        }
LAB_71019ee58c:
        FUN_7103778300(0x3f800000,(long)local_168,(long)pcVar48);
        pplVar50 = *ppplVar67;
        bVar13 = ((ulong)pplVar50 & 0xffffffffff) == 0;
        uVar68 = (ulong)pplVar50 & 0xffffffffff;
        bVar14 = ((ulong)pplVar50 & 0xff00000000000000) != 0xc100000000000000;
        if ((bVar9 && bVar10) && (!bVar13 && !bVar14)) {
          if ((((ulong)puVar25 ^ (ulong)pplVar50) & 0xffffffffff) != 0) goto LAB_71019ee5e8;
        }
        else if ((bVar10 && bVar9) == (bVar13 || bVar14)) {
LAB_71019ee5e8:
          FUN_7103776910(&local_1c8,(long)&local_170,(long ****)"set_rep_chara",ppppppppplVar32,
                         ppppbVar33,pppplVar62,param_6,param_7,param_8);
          ppppbVar33 = (byte ****)&DAT_00000007;
          ppppppppplVar32 = (long *********)0x0;
          plVar30 = FUN_710323f330(param_2,(ulong)*ppplVar67,0,7,pppplVar62,param_6,param_7,param_8)
          ;
          puVar37 = local_1c0;
          FUN_7103778b80((long)local_1c0,(long)plVar30,ppppppppplVar32,ppppbVar33,pppplVar62,param_6
                         ,param_7,param_8);
          FUN_7103776910(&local_1d8,(long)&local_170,(long ****)"set_rep_chara_2",ppppppppplVar32,
                         ppppbVar33,pppplVar62,param_6,param_7,param_8);
          ppppbVar33 = (byte ****)&DAT_00000007;
          ppppppppplVar32 = (long *********)0x0;
          plVar30 = FUN_710323f330(param_2,(ulong)*ppplVar67,0,7,pppplVar62,param_6,param_7,param_8)
          ;
          puVar28 = local_1d0;
          FUN_7103778b80((long)local_1d0,(long)plVar30,ppppppppplVar32,ppppbVar33,pppplVar62,param_6
                         ,param_7,param_8);
          uVar16 = *(uint *)((long)param_1 + 0x214);
          if (uVar16 != 0xffffffff) {
            uVar17 = FUN_7103280ec0(*(long *)(lVar76 + 0x2a8),(ulong)*ppplVar67,0,ppppbVar33,
                                    pppplVar62,param_6,param_7,param_8);
            local_290 = (undefined **)0x120a180191;
            pppppppplStack_288 = (long ********)0x12e5da6aaf;
            local_b8 = (undefined **)0x127d1f3107;
            uVar38 = 0;
            if (uVar16 < 2) {
              uVar38 = uVar16;
            }
            uVar68 = -(ulong)(uVar38 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar38 << 3;
            uVar58 = 0;
            local_b0 = (long *)0x1292dd5a39;
            uVar20 = *(ulong *)((long)&local_b8 + uVar68);
            local_c8 = (long ********)0xf40ccb477;
            local_c0 = 0xfe6bbbfc3;
            lVar22 = *(long *)(*(long *)(lVar76 + 0x2a8) + 8);
            ppppppppplVar32 = *(long **********)((long)&local_c8 + uVar68);
            auVar81 = FUN_710326ad60(ZEXT816(0),lVar22,uVar17,*(ulong *)((long)&local_290 + uVar68))
            ;
            auVar82._8_8_ = 0;
            auVar82._0_8_ = uVar58;
            auVar82 = FUN_710326ad60(auVar82 << 0x40,lVar22,uVar17,uVar20);
            auVar83._8_8_ = uVar36;
            auVar83._0_8_ = 0x3f800000;
            auVar83 = FUN_710326ad60(auVar83,lVar22,uVar17,(ulong)ppppppppplVar32);
            puVar28 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,pppplVar62,
                                     param_6,param_7,param_8);
            if (puVar28 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                local_290 = (undefined **)&SUB_00000020;
                ppppppppplVar32 = (long *********)&local_290;
                uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
                if (((uVar68 & 1) != 0) &&
                   (puVar28 = (undefined8 *)
                              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                             pppplVar62,param_6,param_7,param_8),
                   puVar28 != (undefined8 *)0x0)) goto LAB_71019ee7ac;
              }
              puVar28 = (undefined8 *)0x0;
            }
LAB_71019ee7ac:
            puVar28[2] = 0;
            puVar28[3] = 0;
            *puVar28 = 0;
            puVar28[1] = 0;
            *puVar28 = *puVar37;
            puVar28[1] = puVar37[1];
            pppppppplVar42 = (long ********)CONCAT44(auVar82._0_4_,auVar81._0_4_);
            puVar28[2] = local_1c0[2];
            puVar28[3] = local_1c0[3];
            pppppppplStack_288 = (long ********)0x0;
            local_290 = (undefined **)pppppppplVar42;
            FUN_7103779770(auVar83._0_4_,(long)puVar28,&local_290);
            if (puVar28 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar28);
            }
            puVar37 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,pppplVar62,
                                     param_6,param_7,param_8);
            if (puVar37 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                local_290 = (undefined **)&SUB_00000020;
                ppppppppplVar32 = (long *********)&local_290;
                uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
                if (((uVar68 & 1) != 0) &&
                   (puVar37 = (undefined8 *)
                              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                             pppplVar62,param_6,param_7,param_8),
                   puVar37 != (undefined8 *)0x0)) goto LAB_71019ee87c;
              }
              puVar37 = (undefined8 *)0x0;
            }
LAB_71019ee87c:
            puVar28 = local_1d0;
            puVar37[2] = 0;
            puVar37[3] = 0;
            *puVar37 = 0;
            puVar37[1] = 0;
            *puVar37 = *local_1d0;
            puVar37[1] = local_1d0[1];
            puVar37[2] = local_1d0[2];
            puVar37[3] = local_1d0[3];
            pppppppplStack_288 = (long ********)0x0;
            local_290 = (undefined **)pppppppplVar42;
            FUN_7103779770(auVar83._0_4_,(long)puVar37,&local_290);
            if (puVar37 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar37);
            }
          }
          local_1d8 = &PTR_FUN_710523d9a8;
          local_1d0 = (undefined8 *)0x0;
          if (puVar28 != (undefined8 *)0x0) {
            FUN_710392eb40((ulong)puVar28);
          }
          puVar28 = local_1c0;
          local_1c8 = &PTR_FUN_710523d9a8;
          local_1c0 = (undefined8 *)0x0;
          if (puVar28 != (undefined8 *)0x0) {
            FUN_710392eb40((ulong)puVar28);
          }
          pplVar50 = *ppplVar67;
          uVar68 = (ulong)pplVar50 & 0xffffffffff;
        }
        uVar20 = (ulong)pplVar50 & 0xff00000000000000;
        if ((uVar20 == 0xc100000000000000) && (uVar68 != 0)) {
          uVar20 = 0xc100000000000000;
          if ((bVar10 && bVar9) &&
             (uVar20 = 0xc100000000000000, (((ulong)puVar25 ^ (ulong)pplVar50) & 0xffffffffff) == 0)
             ) goto LAB_71019ee970;
LAB_71019ee938:
          if ((!bVar11 || !bVar12) || (uVar68 == 0 || uVar20 != 0xc100000000000000)) {
            if ((bVar12 && bVar11) != (uVar68 == 0 || uVar20 != 0xc100000000000000))
            goto LAB_71019eea0c;
LAB_71019ee9a8:
            FUN_7103776910(&local_290,(long)&local_170,(long ****)"set_txt_name_l",ppppppppplVar32,
                           ppppbVar33,pppplVar62,param_6,param_7,param_8);
            pcVar48 = "set_txt_name_s";
            goto LAB_71019ee9cc;
          }
          if ((((ulong)puVar24 ^ (ulong)pplVar50) & 0xffffffffff) != 0) goto LAB_71019ee9a8;
        }
        else {
          if (bVar10 && bVar9) goto LAB_71019ee938;
LAB_71019ee970:
          FUN_7103776910(&local_290,(long)&local_170,(long ****)"set_txt_all_l",ppppppppplVar32,
                         ppppbVar33,pppplVar62,param_6,param_7,param_8);
          pcVar48 = "set_txt_all_s";
LAB_71019ee9cc:
          FUN_7103776910(&local_b8,(long)&local_170,(long ****)pcVar48,ppppppppplVar32,ppppbVar33,
                         pppplVar62,param_6,param_7,param_8);
          FUN_710377a120((long)&local_290,(char *)local_1b0,ppppppppplVar32,ppppbVar33,pppplVar62,
                         param_6,param_7,param_8);
          FUN_710377a120((long)&local_b8,(char *)local_1b0,ppppppppplVar32,ppppbVar33,pppplVar62,
                         param_6,param_7,param_8);
          plVar30 = local_b0;
          local_b8 = &PTR_FUN_710523d9a8;
          local_b0 = (long *)0x0;
          if (plVar30 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar30);
          }
          pppppppplVar42 = pppppppplStack_288;
          local_290 = &PTR_FUN_710523d9a8;
          pppppppplStack_288 = (long ********)0x0;
          if (pppppppplVar42 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar42);
          }
        }
LAB_71019eea0c:
        FUN_7103776910(&local_b8,(long)&local_170,(long ****)&DAT_71044641f6,ppppppppplVar32,
                       ppppbVar33,pppplVar62,param_6,param_7,param_8);
        FUN_71019eb6b0(&local_290,extraout_x1,(long ****)ppppppppplVar32,ppppbVar33,pppplVar62,
                       param_6,param_7,param_8);
        local_290 = (undefined **)*ppplVar67;
        local_280 = FUN_7103263f80(*(long *)(lVar76 + 0x168),(ulong)*ppplVar67);
        *local_270 = *local_168;
        local_270[1] = local_168[1];
        if (local_270 != local_168) {
          *(undefined8 *)local_270[3] = *(undefined8 *)local_168[3];
          *(undefined8 *)(local_270[3] + 8) = *(undefined8 *)(local_168[3] + 8);
          *(undefined8 *)(local_270[3] + 0x10) = *(undefined8 *)(local_168[3] + 0x10);
          *(undefined8 *)(local_270[3] + 0x18) = *(undefined8 *)(local_168[3] + 0x18);
        }
        *local_260 = *local_148;
        local_260[1] = local_148[1];
        local_260[2] = local_148[2];
        local_260[3] = local_148[3];
        *local_250 = *local_158;
        local_250[1] = local_158[1];
        local_250[2] = local_158[2];
        local_250[3] = local_158[3];
        lVar22 = *local_b0;
        if (lVar22 == 0) {
          fVar93 = 0.0;
          fVar84 = 0.0;
          fVar88 = (float)((ulong)_ConstantZero >> 0x20);
          pppppplVar59 = _ConstantZero;
        }
        else {
          fVar88 = *(float *)(lVar22 + 0x30);
          pppppplVar87 = *(long *******)(lVar22 + 0x30);
          fVar93 = ABS(*(float *)(lVar22 + 0x50) * *(float *)(lVar22 + 0x48));
          fVar84 = ABS(*(float *)(lVar22 + 0x54) * *(float *)(lVar22 + 0x4c));
          bVar4 = *(byte *)(lVar22 + 0x5b) & 3;
          if (bVar4 == 2) {
            fVar88 = fVar88 - fVar93 * 0.5;
LAB_71019eeba0:
            pppppplVar87 = (long ******)CONCAT44((int)((ulong)pppppplVar87 >> 0x20),fVar88);
          }
          else if (bVar4 == 1) {
            fVar88 = fVar88 + fVar93 * 0.5;
            goto LAB_71019eeba0;
          }
          bVar4 = *(byte *)(lVar22 + 0x5b) >> 2 & 3;
          fVar88 = (float)((ulong)pppppplVar87 >> 0x20);
          if (bVar4 == 2) {
            fVar88 = fVar84 * 0.5 + fVar88;
LAB_71019eebd4:
            pppppplVar87 = (long ******)CONCAT44(fVar88,(int)pppppplVar87);
          }
          else if (bVar4 == 1) {
            fVar88 = fVar88 - fVar84 * 0.5;
            goto LAB_71019eebd4;
          }
          lVar22 = *(long *)(lVar22 + 0x18);
          if (lVar22 == 0) {
            fVar88 = (float)((ulong)pppppplVar87 >> 0x20);
            pppppplVar59 = pppppplVar87;
          }
          else {
            do {
              fVar90 = SUB84(pppppplVar87,0) + *(float *)(lVar22 + 0x30);
              pppppplVar59 = (long ******)(ulong)(uint)fVar90;
              fVar88 = (float)((ulong)pppppplVar87 >> 0x20) + *(float *)(lVar22 + 0x34);
              pppppplVar87 = (long ******)CONCAT44(fVar88,fVar90);
              lVar22 = *(long *)(lVar22 + 0x18);
            } while (lVar22 != 0);
          }
        }
        fVar90 = SUB84(pppppplVar59,0) + 960.0;
        uVar38 = (uint)lVar63;
        local_248 = (fVar90 - fVar93 * 0.5) + -960.0;
        fStack_244 = fVar90 + fVar93 * 0.5 + -960.0;
        local_23c = (fVar84 * 0.5 - (540.0 - fVar88)) + 540.0;
        local_240 = 540.0 - ((540.0 - fVar88) + fVar84 * 0.5);
        local_220 = local_2b0;
        uStack_224 = uVar38;
        uVar16 = FUN_7103263a30(*(long *)(lVar76 + 0x168),(ulong)*ppplVar67);
        uVar16 = uVar16 >> 1 & 1;
        local_1f0 = CONCAT11((char)uVar16,(undefined1)local_1f0);
        if (cVar5 == '\0') {
          lVar22 = *(long *)(lVar76 + 0x168);
          pplVar50 = *ppplVar67;
          puVar29 = FUN_71032631a0(lVar22,0x11b1ccb807);
          bVar13 = ((ulong)pplVar50 & 0xffffffffff) == 0;
          uVar68 = (ulong)pplVar50 & 0xff00000000000000;
          if (((uVar68 != 0xc100000000000000 || bVar13) ||
              (((ulong)puVar29 & 0xff00000000000000) != 0xc100000000000000)) ||
             (((ulong)puVar29 & 0xffffffffff) == 0)) {
            if ((((ulong)puVar29 & 0xffffffffff) != 0 &&
                ((ulong)puVar29 & 0xff00000000000000) == 0xc100000000000000) !=
                (uVar68 == 0xc100000000000000 && ((ulong)pplVar50 & 0xffffffffff) != 0))
            goto LAB_71019eed08;
LAB_71019eee6c:
            puVar29 = FUN_71032631a0(lVar22,0x1280f1c82e);
            puVar71 = (ulong *)*puVar19;
            puVar44 = puVar19;
            puVar61 = puVar19;
            if (puVar71 == (ulong *)0x0) {
LAB_71019ef014:
              uVar68 = *puVar44;
            }
            else {
              puVar44 = puVar21;
              puVar74 = puVar71;
              do {
                while (puVar61 = puVar74,
                      (puVar61[4] & 0xff0000ffffffffff) <= ((ulong)puVar29 & 0xff0000ffffffffff)) {
                  if (((ulong)puVar29 & 0xff0000ffffffffff) <= (puVar61[4] & 0xff0000ffffffffff))
                  goto LAB_71019ef014;
                  puVar44 = puVar61 + 1;
                  puVar74 = (ulong *)*puVar44;
                  if ((ulong *)*puVar44 == (ulong *)0x0) goto LAB_71019ef014;
                }
                puVar44 = puVar61;
                puVar74 = (ulong *)*puVar61;
              } while ((ulong *)*puVar61 != (ulong *)0x0);
              uVar68 = *puVar61;
            }
            if (uVar68 == 0) {
              plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                               pppplVar62,param_6,param_7,param_8);
              if (plVar30 == (long *)0x0) {
                local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                local_c8 = (long ********)&DAT_00000030;
                ppppppppplVar32 = &local_c8;
                (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
              }
              plVar30[4] = (long)puVar29;
              *(uint *)(plVar30 + 5) = uVar15;
              plVar30[2] = (long)puVar61;
              *plVar30 = 0;
              plVar30[1] = 0;
              *puVar44 = (ulong)plVar30;
              if (*(ulong *)param_1[3] != 0) {
                param_1[3] = *(ulong *)param_1[3];
                plVar30 = (long *)*puVar44;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)param_1[4],plVar30);
              puVar71 = (ulong *)param_1[4];
              param_1[5] = param_1[5] + 1;
              lVar22 = *(long *)(lVar76 + 0x168);
            }
            puVar29 = FUN_71032631a0(lVar22,0x14ef73f367);
            puVar61 = puVar19;
            puVar44 = puVar19;
            if (puVar71 == (ulong *)0x0) {
LAB_71019ef144:
              uVar68 = *puVar61;
              puVar75 = puVar61;
            }
            else {
              puVar61 = puVar21;
              puVar74 = puVar71;
              do {
                while (puVar75 = puVar74, puVar44 = puVar75,
                      (puVar75[4] & 0xff0000ffffffffff) <= ((ulong)puVar29 & 0xff0000ffffffffff)) {
                  if (((ulong)puVar29 & 0xff0000ffffffffff) <= (puVar75[4] & 0xff0000ffffffffff))
                  goto LAB_71019ef144;
                  puVar61 = puVar75 + 1;
                  puVar74 = (ulong *)*puVar61;
                  if ((ulong *)*puVar61 == (ulong *)0x0) goto LAB_71019ef144;
                }
                puVar61 = puVar75;
                puVar74 = (ulong *)*puVar75;
              } while ((ulong *)*puVar75 != (ulong *)0x0);
              uVar68 = *puVar75;
            }
            if (uVar68 == 0) {
              plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                               pppplVar62,param_6,param_7,param_8);
              if (plVar30 == (long *)0x0) {
                local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                local_c8 = (long ********)&DAT_00000030;
                ppppppppplVar32 = &local_c8;
                (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
              }
              plVar30[4] = (long)puVar29;
              *(uint *)(plVar30 + 5) = uVar15;
              plVar30[2] = (long)puVar44;
              *plVar30 = 0;
              plVar30[1] = 0;
              *puVar75 = (ulong)plVar30;
              if (*(ulong *)param_1[3] != 0) {
                param_1[3] = *(ulong *)param_1[3];
                plVar30 = (long *)*puVar75;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)param_1[4],plVar30);
              puVar71 = (ulong *)param_1[4];
              param_1[5] = param_1[5] + 1;
              lVar22 = *(long *)(lVar76 + 0x168);
            }
            puVar29 = FUN_71032631a0(lVar22,0x12915a4ff6);
            puVar61 = puVar19;
            puVar44 = puVar19;
            if (puVar71 == (ulong *)0x0) {
LAB_71019ef260:
              uVar68 = *puVar61;
              puVar74 = puVar61;
            }
            else {
              puVar61 = puVar21;
              do {
                while (puVar74 = puVar71, puVar44 = puVar74,
                      (puVar74[4] & 0xff0000ffffffffff) <= ((ulong)puVar29 & 0xff0000ffffffffff)) {
                  if (((ulong)puVar29 & 0xff0000ffffffffff) <= (puVar74[4] & 0xff0000ffffffffff))
                  goto LAB_71019ef260;
                  puVar61 = puVar74 + 1;
                  puVar71 = (ulong *)*puVar61;
                  if ((ulong *)*puVar61 == (ulong *)0x0) goto LAB_71019ef260;
                }
                puVar61 = puVar74;
                puVar71 = (ulong *)*puVar74;
              } while ((ulong *)*puVar74 != (ulong *)0x0);
              uVar68 = *puVar74;
            }
            if (uVar68 == 0) {
              plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                               pppplVar62,param_6,param_7,param_8);
              if (plVar30 == (long *)0x0) {
                local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                local_c8 = (long ********)&DAT_00000030;
                ppppppppplVar32 = &local_c8;
                (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
              }
              plVar30[4] = (long)puVar29;
              *(uint *)(plVar30 + 5) = uVar15;
              plVar30[2] = (long)puVar44;
              *plVar30 = 0;
              plVar30[1] = 0;
              *puVar74 = (ulong)plVar30;
              if (*(ulong *)param_1[3] != 0) {
                param_1[3] = *(ulong *)param_1[3];
                plVar30 = (long *)*puVar74;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)param_1[4],plVar30);
              param_1[5] = param_1[5] + 1;
            }
            bVar13 = true;
            cVar6 = local_1f0._1_1_;
          }
          else {
            if ((((ulong)puVar29 ^ (ulong)pplVar50) & 0xffffffffff) == 0) goto LAB_71019eee6c;
LAB_71019eed08:
            puVar29 = FUN_71032631a0(lVar22,0xfd03198f0);
            if ((((ulong)puVar29 & 0xff00000000000000) == 0xc100000000000000) &&
               (((ulong)puVar29 & 0xffffffffff) != 0)) {
              if ((uVar68 == 0xc100000000000000 && !bVar13) &&
                 ((((ulong)pplVar50 ^ (ulong)puVar29) & 0xffffffffff) == 0)) goto LAB_71019eef9c;
LAB_71019eed44:
              if (local_d8 != (long *******)0x0) {
                uVar68 = (ulong)pplVar50 & 0xff0000ffffffffff;
                ppppppplVar26 = (long *******)&local_d8;
                ppppppplVar51 = local_d8;
                do {
                  bVar13 = ((ulong)ppppppplVar51[4] & 0xff0000ffffffffff) < uVar68;
                  if (!bVar13) {
                    ppppppplVar26 = ppppppplVar51;
                  }
                  ppppppplVar51 = (long *******)ppppppplVar51[bVar13];
                } while (ppppppplVar51 != (long *******)0x0);
                if ((long ********)ppppppplVar26 == &local_d8) goto LAB_71019ef0b0;
                if (uVar68 < ((ulong)ppppppplVar26[4] & 0xff0000ffffffffff)) goto LAB_71019ef560;
                pppppppplVar42 = (long ********)ppppppplVar26[5];
                puVar71 = local_f8;
                if (local_f8 != local_f0) {
                  bVar13 = ((ulong)pppppppplVar42 & 0xff00000000000000) != 0xc100000000000000;
                  puVar44 = local_f8;
                  if (bVar13 || ((ulong)pppppppplVar42 & 0xffffffffff) == 0) {
                    uVar7 = (*local_f8 & 0xffffffffff) != 0 &&
                            (*local_f8 & 0xff00000000000000) == 0xc100000000000000;
                    while ((bool)uVar7 == (bVar13 || ((ulong)pppppppplVar42 & 0xffffffffff) == 0)) {
                      puVar71 = (ulong *)((long)puVar71 + 8);
                      if (local_f0 == puVar71) goto LAB_71019ef560;
                      uVar7 = (*puVar71 & 0xffffffffff) != 0 &&
                              (*puVar71 & 0xff00000000000000) == 0xc100000000000000;
                    }
                  }
                  else {
                    do {
                      uVar68 = *puVar44;
                      puVar71 = puVar44;
                      if (((uVar68 & 0xff00000000000000) == 0xc100000000000000 &&
                          (uVar68 & 0xffffffffff) != 0) &&
                          ((uVar68 ^ (ulong)pppppppplVar42) & 0xffffffffff) == 0) break;
                      puVar44 = puVar44 + 1;
                      puVar71 = local_f0;
                    } while (local_f0 != puVar44);
                  }
                }
                if (local_f0 == puVar71) goto LAB_71019ef560;
                puVar71 = puVar19;
                puVar44 = puVar19;
                pppppppplStack_288 = pppppppplVar42;
                if ((ulong *)*puVar19 != (ulong *)0x0) {
                  puVar61 = (ulong *)*puVar19;
                  puVar44 = puVar21;
                  do {
                    while (puVar71 = puVar61,
                          (puVar71[4] & 0xff0000ffffffffff) <=
                          ((ulong)pppppppplVar42 & 0xff0000ffffffffff)) {
                      if (((ulong)pppppppplVar42 & 0xff0000ffffffffff) <=
                          (puVar71[4] & 0xff0000ffffffffff)) goto LAB_71019ee260;
                      puVar44 = puVar71 + 1;
                      puVar61 = (ulong *)*puVar44;
                      if ((ulong *)*puVar44 == (ulong *)0x0) goto LAB_71019ee260;
                    }
                    puVar61 = (ulong *)*puVar71;
                    puVar44 = puVar71;
                  } while ((ulong *)*puVar71 != (ulong *)0x0);
                  if (*puVar71 == 0) goto LAB_71019ee268;
                  goto LAB_71019ef560;
                }
LAB_71019ee260:
                if (*puVar44 != 0) goto LAB_71019ef560;
LAB_71019ee268:
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
                if (plVar30 == (long *)0x0) {
                  local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                  local_c8 = (long ********)&DAT_00000030;
                  ppppppppplVar32 = &local_c8;
                  (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                  plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8);
                }
                plVar30[4] = (long)pppppppplVar42;
                *(uint *)(plVar30 + 5) = uVar15;
                plVar30[2] = (long)puVar71;
                *plVar30 = 0;
                plVar30[1] = 0;
                *puVar44 = (ulong)plVar30;
                if (*(ulong *)param_1[3] != 0) {
                  param_1[3] = *(ulong *)param_1[3];
                  plVar30 = (long *)*puVar44;
                }
                goto LAB_71019ef5f4;
              }
LAB_71019ef0b0:
joined_r0x0071019ef0bc:
              bVar13 = false;
              cVar6 = local_1f0._1_1_;
            }
            else {
              if ((uVar68 == 0xc100000000000000) && (((ulong)pplVar50 & 0xffffffffff) != 0))
              goto LAB_71019eed44;
LAB_71019eef9c:
              puVar29 = FUN_71032631a0(lVar22,0x13fdfdfb2b);
              puVar71 = (ulong *)*puVar19;
              puVar61 = puVar19;
              puVar44 = puVar19;
              if (puVar71 == (ulong *)0x0) {
LAB_71019ef320:
                uVar68 = *puVar61;
                puVar75 = puVar61;
              }
              else {
                puVar61 = puVar21;
                puVar74 = puVar71;
                do {
                  while (puVar75 = puVar74, puVar44 = puVar75,
                        (puVar75[4] & 0xff0000ffffffffff) <= ((ulong)puVar29 & 0xff0000ffffffffff))
                  {
                    if (((ulong)puVar29 & 0xff0000ffffffffff) <= (puVar75[4] & 0xff0000ffffffffff))
                    goto LAB_71019ef320;
                    puVar61 = puVar75 + 1;
                    puVar74 = (ulong *)*puVar61;
                    if ((ulong *)*puVar61 == (ulong *)0x0) goto LAB_71019ef320;
                  }
                  puVar61 = puVar75;
                  puVar74 = (ulong *)*puVar75;
                } while ((ulong *)*puVar75 != (ulong *)0x0);
                uVar68 = *puVar75;
              }
              if (uVar68 == 0) {
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
                if (plVar30 == (long *)0x0) {
                  local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                  local_c8 = (long ********)&DAT_00000030;
                  ppppppppplVar32 = &local_c8;
                  (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                  plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8);
                }
                plVar30[4] = (long)puVar29;
                *(uint *)(plVar30 + 5) = uVar15;
                plVar30[2] = (long)puVar44;
                *plVar30 = 0;
                plVar30[1] = 0;
                *puVar75 = (ulong)plVar30;
                if (*(ulong *)param_1[3] != 0) {
                  param_1[3] = *(ulong *)param_1[3];
                  plVar30 = (long *)*puVar75;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)param_1[4],plVar30);
                puVar71 = (ulong *)param_1[4];
                param_1[5] = param_1[5] + 1;
                lVar22 = *(long *)(lVar76 + 0x168);
              }
              puVar29 = FUN_71032631a0(lVar22,0x15d7061f77);
              puVar61 = puVar19;
              puVar44 = puVar19;
              if (puVar71 == (ulong *)0x0) {
LAB_71019ef438:
                uVar68 = *puVar61;
                puVar75 = puVar61;
              }
              else {
                puVar61 = puVar21;
                puVar74 = puVar71;
                do {
                  while (puVar75 = puVar74, puVar44 = puVar75,
                        (puVar75[4] & 0xff0000ffffffffff) <= ((ulong)puVar29 & 0xff0000ffffffffff))
                  {
                    if (((ulong)puVar29 & 0xff0000ffffffffff) <= (puVar75[4] & 0xff0000ffffffffff))
                    goto LAB_71019ef438;
                    puVar61 = puVar75 + 1;
                    puVar74 = (ulong *)*puVar61;
                    if ((ulong *)*puVar61 == (ulong *)0x0) goto LAB_71019ef438;
                  }
                  puVar61 = puVar75;
                  puVar74 = (ulong *)*puVar75;
                } while ((ulong *)*puVar75 != (ulong *)0x0);
                uVar68 = *puVar75;
              }
              if (uVar68 == 0) {
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
                if (plVar30 == (long *)0x0) {
                  local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                  local_c8 = (long ********)&DAT_00000030;
                  ppppppppplVar32 = &local_c8;
                  (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                  plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8);
                }
                plVar30[4] = (long)puVar29;
                *(uint *)(plVar30 + 5) = uVar15;
                plVar30[2] = (long)puVar44;
                *plVar30 = 0;
                plVar30[1] = 0;
                *puVar75 = (ulong)plVar30;
                if (*(ulong *)param_1[3] != 0) {
                  param_1[3] = *(ulong *)param_1[3];
                  plVar30 = (long *)*puVar75;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)param_1[4],plVar30);
                puVar71 = (ulong *)param_1[4];
                param_1[5] = param_1[5] + 1;
                lVar22 = *(long *)(lVar76 + 0x168);
              }
              puVar29 = FUN_71032631a0(lVar22,0x1257ab1d87);
              puVar61 = puVar19;
              puVar44 = puVar19;
              if (puVar71 == (ulong *)0x0) {
LAB_71019ef554:
                uVar68 = *puVar61;
                puVar74 = puVar61;
              }
              else {
                puVar61 = puVar21;
                do {
                  while (puVar74 = puVar71, puVar44 = puVar74,
                        (puVar74[4] & 0xff0000ffffffffff) <= ((ulong)puVar29 & 0xff0000ffffffffff))
                  {
                    if (((ulong)puVar29 & 0xff0000ffffffffff) <= (puVar74[4] & 0xff0000ffffffffff))
                    goto LAB_71019ef554;
                    puVar61 = puVar74 + 1;
                    puVar71 = (ulong *)*puVar61;
                    if ((ulong *)*puVar61 == (ulong *)0x0) goto LAB_71019ef554;
                  }
                  puVar61 = puVar74;
                  puVar71 = (ulong *)*puVar74;
                } while ((ulong *)*puVar74 != (ulong *)0x0);
                uVar68 = *puVar74;
              }
              if (uVar68 == 0) {
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
                if (plVar30 == (long *)0x0) {
                  local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                  local_c8 = (long ********)&DAT_00000030;
                  ppppppppplVar32 = &local_c8;
                  (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                  plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8);
                }
                plVar30[4] = (long)puVar29;
                *(uint *)(plVar30 + 5) = uVar15;
                plVar30[2] = (long)puVar44;
                *plVar30 = 0;
                plVar30[1] = 0;
                *puVar74 = (ulong)plVar30;
                if (*(ulong *)param_1[3] != 0) {
                  param_1[3] = *(ulong *)param_1[3];
                  plVar30 = (long *)*puVar74;
                }
LAB_71019ef5f4:
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)param_1[4],plVar30);
                param_1[5] = param_1[5] + 1;
                goto joined_r0x0071019ef0bc;
              }
LAB_71019ef560:
              bVar13 = false;
              cVar6 = local_1f0._1_1_;
            }
          }
          if (cVar6 != '\0') goto LAB_71019ef614;
        }
        else {
          bVar13 = false;
          if (uVar16 != 0) {
LAB_71019ef614:
            pplVar50 = *ppplVar67;
            lVar22 = *(long *)(lVar76 + 0x168);
            uVar16 = FUN_7103263a30(lVar22,(ulong)pplVar50);
            if ((~uVar16 & 6) == 0) {
              pppppppplVar42 = (long ********)FUN_7103263030(lVar22,(ulong)pplVar50);
              puVar71 = puVar19;
              puVar44 = puVar19;
              if ((ulong *)*puVar19 == (ulong *)0x0) {
LAB_71019ef6a4:
                uVar68 = *puVar44;
              }
              else {
                puVar61 = (ulong *)*puVar19;
                puVar44 = puVar21;
                do {
                  while (puVar71 = puVar61,
                        (puVar71[4] & 0xff0000ffffffffff) <=
                        ((ulong)pppppppplVar42 & 0xff0000ffffffffff)) {
                    if (((ulong)pppppppplVar42 & 0xff0000ffffffffff) <=
                        (puVar71[4] & 0xff0000ffffffffff)) goto LAB_71019ef6a4;
                    puVar44 = puVar71 + 1;
                    puVar61 = (ulong *)*puVar44;
                    if ((ulong *)*puVar44 == (ulong *)0x0) goto LAB_71019ef6a4;
                  }
                  puVar61 = (ulong *)*puVar71;
                  puVar44 = puVar71;
                } while ((ulong *)*puVar71 != (ulong *)0x0);
                uVar68 = *puVar71;
              }
              pppppppplStack_288 = pppppppplVar42;
              if (uVar68 == 0) {
                plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                 pppplVar62,param_6,param_7,param_8);
                if (plVar30 == (long *)0x0) {
                  local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                  local_c8 = (long ********)&DAT_00000030;
                  ppppppppplVar32 = &local_c8;
                  (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                  plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8);
                }
                plVar30[4] = (long)pppppppplVar42;
                *(uint *)(plVar30 + 5) = uVar15;
                plVar30[2] = (long)puVar71;
                *plVar30 = 0;
                plVar30[1] = 0;
                *puVar44 = (ulong)plVar30;
                if (*(ulong *)param_1[3] != 0) {
                  param_1[3] = *(ulong *)param_1[3];
                  plVar30 = (long *)*puVar44;
                }
                std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                          ((long *)param_1[4],plVar30);
                param_1[5] = param_1[5] + 1;
              }
            }
          }
        }
        puVar71 = (ulong *)param_1[1];
        if (puVar71 == (ulong *)param_1[2]) {
          lVar22 = (long)((long)puVar71 - *param_1) >> 4;
          uVar20 = 0x1745d1745d1745d;
          uVar68 = lVar22 * 0x2e8ba2e8ba2e8ba3 + 1;
          if (0x1745d1745d1745d < uVar68) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar77 = (long)((long)param_1[2] - *param_1) >> 4;
          if ((ulong)(lVar77 * 0x2e8ba2e8ba2e8ba3) < 0xba2e8ba2e8ba2e) {
            uVar58 = lVar77 * 0x5d1745d1745d1746;
            uVar20 = uVar68;
            if (uVar68 <= uVar58) {
              uVar20 = uVar58;
            }
            if (uVar20 != 0) goto LAB_71019ef984;
LAB_71019ef9e4:
            lVar77 = 0;
          }
          else {
LAB_71019ef984:
            pppppppplVar42 = (long ********)(uVar20 * 0xb0);
            if (pppppppplVar42 == (long ********)0x0) {
              pppppppplVar42 = (long ********)0x1;
            }
            lVar77 = FUN_710392e290(0x10,pppppppplVar42,(long ****)ppppppppplVar32,ppppbVar33,
                                    pppplVar62,param_6,param_7,param_8);
            if (lVar77 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
                ppppppppplVar32 = &local_c8;
                local_c8 = pppppppplVar42;
                uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
                if (((uVar68 & 1) != 0) &&
                   (lVar77 = FUN_710392e290(0x10,pppppppplVar42,(long ****)ppppppppplVar32,
                                            ppppbVar33,pppplVar62,param_6,param_7,param_8),
                   lVar77 != 0)) goto LAB_71019ef9e8;
              }
              goto LAB_71019ef9e4;
            }
          }
LAB_71019ef9e8:
          puVar71 = (ulong *)(lVar77 + lVar22 * 0x10);
          puVar71[1] = (ulong)pppppppplStack_288;
          puVar71[2] = local_280;
          *puVar71 = (ulong)local_290;
          FUN_7103776390(puVar71 + 3,&local_278,(long ****)ppppppppplVar32,ppppbVar33,pppplVar62,
                         param_6,param_7,param_8);
          puVar71[5] = (ulong)&PTR_FUN_710523d9a8;
          plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                           pppplVar62,param_6,param_7,param_8);
          if (plVar30 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
              local_c8 = (long ********)&SUB_00000020;
              ppppppppplVar32 = &local_c8;
              uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
              if (((uVar68 & 1) != 0) &&
                 (plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8),
                 plVar30 != (long *)0x0)) goto LAB_71019efa68;
            }
            plVar30 = (long *)0x0;
          }
LAB_71019efa68:
          plVar30[2] = 0;
          plVar30[3] = 0;
          *plVar30 = 0;
          plVar30[1] = 0;
          puVar71[6] = (ulong)plVar30;
          if ((undefined ***)(puVar71 + 5) != &local_268) {
            *plVar30 = *local_260;
            lVar52 = lVar77 + lVar22 * 0x10;
            plVar30[1] = local_260[1];
            *(long *)(*(long *)(lVar52 + 0x30) + 0x10) = local_260[2];
            *(long *)(*(long *)(lVar52 + 0x30) + 0x18) = local_260[3];
          }
          lVar52 = lVar77 + lVar22 * 0x10;
          pppuVar72 = (undefined ***)(lVar52 + 0x38);
          *pppuVar72 = &PTR_FUN_710523d9a8;
          plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                           pppplVar62,param_6,param_7,param_8);
          if (plVar30 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
              local_c8 = (long ********)&SUB_00000020;
              ppppppppplVar32 = &local_c8;
              uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
              if (((uVar68 & 1) != 0) &&
                 (plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8),
                 plVar30 != (long *)0x0)) goto LAB_71019efb1c;
            }
            plVar30 = (long *)0x0;
          }
LAB_71019efb1c:
          plVar30[2] = 0;
          plVar30[3] = 0;
          *plVar30 = 0;
          plVar30[1] = 0;
          *(long **)(lVar52 + 0x40) = plVar30;
          if (pppuVar72 != &local_258) {
            *plVar30 = *local_250;
            lVar52 = lVar77 + lVar22 * 0x10;
            plVar30[1] = local_250[1];
            *(long *)(*(long *)(lVar52 + 0x40) + 0x10) = local_250[2];
            *(long *)(*(long *)(lVar52 + 0x40) + 0x18) = local_250[3];
          }
          lVar22 = lVar77 + lVar22 * 0x10;
          *(ulong *)(lVar22 + 0x58) = local_238;
          *(ulong *)(lVar22 + 0x60) = local_230;
          *(ulong *)(lVar22 + 0x48) = CONCAT44(fStack_244,local_248);
          *(ulong *)(lVar22 + 0x50) = CONCAT44(local_23c,local_240);
          *(ulong *)(lVar22 + 0x78) = local_218;
          *(ulong *)(lVar22 + 0x80) = local_210;
          *(ulong *)(lVar22 + 0x68) = CONCAT44(uStack_224,local_228);
          *(ulong *)(lVar22 + 0x70) = CONCAT44(uStack_21c,local_220);
          *(undefined2 *)(lVar22 + 0xa0) = local_1f0;
          *(ulong *)(lVar22 + 0x90) = local_200;
          *(ulong *)(lVar22 + 0x98) = local_1f8;
          *(ulong *)(lVar22 + 0x88) = local_208;
          puVar61 = (ulong *)*param_1;
          puVar74 = (ulong *)param_1[1];
          puVar44 = puVar71 + 0x16;
          puVar75 = puVar61;
          if (puVar74 != puVar61) {
            lVar22 = 0;
            do {
              *(undefined8 *)((long)puVar71 + lVar22 + -0xa8) =
                   *(undefined8 *)((long)puVar74 + lVar22 + -0xa8);
              uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0xa0);
              *(undefined8 *)((long)puVar71 + lVar22 + -0xb0) =
                   *(undefined8 *)((long)puVar74 + lVar22 + -0xb0);
              *(undefined8 *)((long)puVar71 + lVar22 + -0x90) = 0;
              *(undefined8 *)((long)puVar71 + lVar22 + -0xa0) = uVar45;
              *(undefined ***)((long)puVar71 + lVar22 + -0x98) = &PTR_FUN_710523d988;
              if (puVar74 == puVar71) {
                *(undefined ***)((long)puVar71 + lVar22 + -0x88) = &PTR_FUN_710523d9a8;
                *(undefined8 *)((long)puVar71 + lVar22 + -0x80) = 0;
                *(undefined ***)((long)puVar71 + lVar22 + -0x78) = &PTR_FUN_710523d9a8;
                *(undefined8 *)((long)puVar71 + lVar22 + -0x70) = 0;
              }
              else {
                uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0x90);
                *(undefined8 *)((long)puVar74 + lVar22 + -0x90) = 0;
                uVar68 = *(ulong *)((long)puVar71 + lVar22 + -0x90);
                *(undefined8 *)((long)puVar71 + lVar22 + -0x90) = uVar45;
                if (uVar68 != 0) {
                  uVar58 = *(ulong *)(uVar68 + 0x18);
                  *(undefined ***)(uVar68 + 0x10) = &PTR_FUN_710523d9a8;
                  *(undefined8 *)(uVar68 + 0x18) = 0;
                  if (uVar58 != 0) {
                    FUN_710392eb40(uVar58);
                  }
                  FUN_710392eb40(uVar68);
                }
                *(undefined ***)((long)puVar71 + lVar22 + -0x88) = &PTR_FUN_710523d9a8;
                *(undefined8 *)((long)puVar71 + lVar22 + -0x80) = 0;
                uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0x80);
                *(undefined8 *)((long)puVar74 + lVar22 + -0x80) = 0;
                uVar68 = *(ulong *)((long)puVar71 + lVar22 + -0x80);
                *(undefined8 *)((long)puVar71 + lVar22 + -0x80) = uVar45;
                if (uVar68 != 0) {
                  FUN_710392eb40(uVar68);
                }
                *(undefined ***)((long)puVar71 + lVar22 + -0x78) = &PTR_FUN_710523d9a8;
                *(undefined8 *)((long)puVar71 + lVar22 + -0x70) = 0;
                uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0x70);
                *(undefined8 *)((long)puVar74 + lVar22 + -0x70) = 0;
                uVar68 = *(ulong *)((long)puVar71 + lVar22 + -0x70);
                *(undefined8 *)((long)puVar71 + lVar22 + -0x70) = uVar45;
                if (uVar68 != 0) {
                  FUN_710392eb40(uVar68);
                }
              }
              uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0x68);
              uVar49 = *(undefined8 *)((long)puVar74 + lVar22 + -0x60);
              lVar52 = lVar22 + -0xb0;
              uVar53 = *(undefined8 *)((long)puVar74 + lVar22 + -0x50);
              *(undefined8 *)((long)puVar71 + lVar22 + -0x58) =
                   *(undefined8 *)((long)puVar74 + lVar22 + -0x58);
              *(undefined8 *)((long)puVar71 + lVar22 + -0x50) = uVar53;
              *(undefined8 *)((long)puVar71 + lVar22 + -0x68) = uVar45;
              *(undefined8 *)((long)puVar71 + lVar22 + -0x60) = uVar49;
              uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0x48);
              uVar49 = *(undefined8 *)((long)puVar74 + lVar22 + -0x40);
              uVar53 = *(undefined8 *)((long)puVar74 + lVar22 + -0x30);
              *(undefined8 *)((long)puVar71 + lVar22 + -0x38) =
                   *(undefined8 *)((long)puVar74 + lVar22 + -0x38);
              *(undefined8 *)((long)puVar71 + lVar22 + -0x30) = uVar53;
              *(undefined8 *)((long)puVar71 + lVar22 + -0x48) = uVar45;
              *(undefined8 *)((long)puVar71 + lVar22 + -0x40) = uVar49;
              uVar53 = *(undefined8 *)((long)puVar74 + lVar22 + -0x18);
              uVar45 = *(undefined8 *)((long)puVar74 + lVar22 + -0x28);
              uVar49 = *(undefined8 *)((long)puVar74 + lVar22 + -0x20);
              *(undefined2 *)((long)puVar71 + lVar22 + -0x10) =
                   *(undefined2 *)((long)puVar74 + lVar22 + -0x10);
              *(undefined8 *)((long)puVar71 + lVar22 + -0x20) = uVar49;
              *(undefined8 *)((long)puVar71 + lVar22 + -0x18) = uVar53;
              *(undefined8 *)((long)puVar71 + lVar22 + -0x28) = uVar45;
              lVar22 = lVar52;
            } while ((long)puVar61 - (long)puVar74 != lVar52);
            puVar61 = (ulong *)*param_1;
            puVar71 = (ulong *)((long)puVar71 + lVar52);
            puVar75 = (ulong *)param_1[1];
          }
          *param_1 = (ulong)puVar71;
          param_1[1] = (ulong)puVar44;
          param_1[2] = lVar77 + uVar20 * 0xb0;
          while (puVar75 != puVar61) {
            uVar68 = puVar75[-0xe];
            puVar75[-0xf] = (ulong)&PTR_FUN_710523d9a8;
            puVar75[-0xe] = 0;
            if (uVar68 != 0) {
              FUN_710392eb40(uVar68);
            }
            uVar68 = puVar75[-0x10];
            puVar75[-0x11] = (ulong)&PTR_FUN_710523d9a8;
            puVar75[-0x10] = 0;
            if (uVar68 != 0) {
              FUN_710392eb40(uVar68);
            }
            uVar68 = puVar75[-0x12];
            puVar71 = puVar75 + -0x16;
            puVar75[-0x13] = (ulong)&PTR_FUN_710523d988;
            puVar75[-0x12] = 0;
            puVar75 = puVar71;
            if (uVar68 != 0) {
              uVar20 = *(ulong *)(uVar68 + 0x18);
              *(undefined ***)(uVar68 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar68 + 0x18) = 0;
              if (uVar20 != 0) {
                FUN_710392eb40(uVar20);
              }
              FUN_710392eb40(uVar68);
            }
          }
          if (puVar61 != (ulong *)0x0) {
            FUN_710392eb40((ulong)puVar61);
          }
        }
        else {
          puVar71[1] = (ulong)pppppppplStack_288;
          puVar71[2] = local_280;
          *puVar71 = (ulong)local_290;
          FUN_7103776390(puVar71 + 3,&local_278,(long ****)ppppppppplVar32,ppppbVar33,pppplVar62,
                         param_6,param_7,param_8);
          puVar71[5] = (ulong)&PTR_FUN_710523d9a8;
          plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                           pppplVar62,param_6,param_7,param_8);
          if (plVar30 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
              local_c8 = (long ********)&SUB_00000020;
              ppppppppplVar32 = &local_c8;
              uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
              if (((uVar68 & 1) != 0) &&
                 (plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8),
                 plVar30 != (long *)0x0)) goto LAB_71019ef7cc;
            }
            plVar30 = (long *)0x0;
          }
LAB_71019ef7cc:
          plVar30[2] = 0;
          plVar30[3] = 0;
          *plVar30 = 0;
          plVar30[1] = 0;
          puVar71[6] = (ulong)plVar30;
          if (puVar71 != &local_290) {
            *plVar30 = *local_260;
            *(long *)(puVar71[6] + 8) = local_260[1];
            *(long *)(puVar71[6] + 0x10) = local_260[2];
            *(long *)(puVar71[6] + 0x18) = local_260[3];
          }
          puVar71[7] = (ulong)&PTR_FUN_710523d9a8;
          plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                           pppplVar62,param_6,param_7,param_8);
          if (plVar30 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
              local_c8 = (long ********)&SUB_00000020;
              ppppppppplVar32 = &local_c8;
              uVar68 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
              if (((uVar68 & 1) != 0) &&
                 (plVar30 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar32,ppppbVar33,
                                                   pppplVar62,param_6,param_7,param_8),
                 plVar30 != (long *)0x0)) goto LAB_71019ef874;
            }
            plVar30 = (long *)0x0;
          }
LAB_71019ef874:
          plVar30[2] = 0;
          plVar30[3] = 0;
          *plVar30 = 0;
          plVar30[1] = 0;
          puVar71[8] = (ulong)plVar30;
          if (puVar71 != &local_290) {
            *plVar30 = *local_250;
            *(long *)(puVar71[8] + 8) = local_250[1];
            *(long *)(puVar71[8] + 0x10) = local_250[2];
            *(long *)(puVar71[8] + 0x18) = local_250[3];
          }
          puVar71[0xb] = local_238;
          puVar71[0xc] = local_230;
          puVar71[9] = CONCAT44(fStack_244,local_248);
          puVar71[10] = CONCAT44(local_23c,local_240);
          puVar71[0xf] = local_218;
          puVar71[0x10] = local_210;
          puVar71[0xd] = CONCAT44(uStack_224,local_228);
          puVar71[0xe] = CONCAT44(uStack_21c,local_220);
          *(undefined2 *)(puVar71 + 0x14) = local_1f0;
          puVar71[0x12] = local_200;
          puVar71[0x13] = local_1f8;
          puVar71[0x11] = local_208;
          param_1[1] = param_1[1] + 0xb0;
        }
        pplVar50 = *ppplVar67;
        puVar71 = puVar19;
        puVar44 = puVar19;
        if ((ulong *)*puVar19 == (ulong *)0x0) {
LAB_71019efdbc:
          uVar68 = *puVar44;
        }
        else {
          uVar68 = (ulong)pplVar50 & 0xff0000ffffffffff;
          puVar61 = (ulong *)*puVar19;
          puVar44 = puVar21;
          do {
            while (puVar71 = puVar61, (puVar71[4] & 0xff0000ffffffffff) <= uVar68) {
              if (uVar68 <= (puVar71[4] & 0xff0000ffffffffff)) goto LAB_71019efdbc;
              puVar44 = puVar71 + 1;
              puVar61 = (ulong *)*puVar44;
              if ((ulong *)*puVar44 == (ulong *)0x0) goto LAB_71019efdbc;
            }
            puVar61 = (ulong *)*puVar71;
            puVar44 = puVar71;
          } while ((ulong *)*puVar71 != (ulong *)0x0);
          uVar68 = *puVar71;
        }
        if (uVar68 == 0) {
          plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                           pppplVar62,param_6,param_7,param_8);
          if (plVar30 == (long *)0x0) {
            local_1c8 = (undefined **)((ulong)local_1c8 & 0xffffffff00000000);
            local_c8 = (long ********)&DAT_00000030;
            ppppppppplVar32 = &local_c8;
            (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1c8);
            plVar30 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar32,ppppbVar33,
                                             pppplVar62,param_6,param_7,param_8);
          }
          plVar30[4] = (long)pplVar50;
          *(uint *)(plVar30 + 5) = uVar15;
          plVar30[2] = (long)puVar71;
          *plVar30 = 0;
          plVar30[1] = 0;
          *puVar44 = (ulong)plVar30;
          if (*(ulong *)param_1[3] != 0) {
            param_1[3] = *(ulong *)param_1[3];
            plVar30 = (long *)*puVar44;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)param_1[4],plVar30);
          param_1[5] = param_1[5] + 1;
        }
        puVar28 = local_168;
        if (bVar13 || (local_1f0._1_1_ != '\0' ||
                      (((ulong)pppppppplStack_288 & 0xff00000000000000) != 0xc100000000000000 ||
                      ((ulong)pppppppplStack_288 & 0xffffffffff) == 0))) {
          FUN_7103778300(0x3f800000,(long)local_168,0x71044122df);
        }
        else {
          FUN_7103778300(0x3f800000,(long)local_168,0x710426f9dd);
          FUN_7103776910(&local_c8,(long)&local_170,(long ****)"set_rep_dash_chara",ppppppppplVar32,
                         ppppbVar33,pppplVar62,param_6,param_7,param_8);
          ppppbVar33 = (byte ****)&DAT_00000007;
          ppppppppplVar32 = (long *********)0x0;
          plVar30 = FUN_710323f330(param_2,(ulong)pppppppplStack_288,0,7,pppplVar62,param_6,param_7,
                                   param_8);
          uVar68 = local_c0;
          FUN_7103778b80(local_c0,(long)plVar30,ppppppppplVar32,ppppbVar33,pppplVar62,param_6,
                         param_7,param_8);
          local_c8 = (long ********)&PTR_FUN_710523d9a8;
          local_c0 = 0;
          if (uVar68 != 0) {
            FUN_710392eb40(uVar68);
          }
        }
        pplVar50 = *ppplVar67;
        if ((((ulong)pplVar50 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)pplVar50 & 0xffffffffff) != 0)) {
          if ((bVar12 && bVar11) && ((((ulong)puVar24 ^ (ulong)pplVar50) & 0xffffffffff) == 0)) {
LAB_71019f0118:
            param_1[7] = (ulong)pppppppplStack_288;
            param_1[8] = local_280;
            param_1[6] = (ulong)local_290;
            if ((undefined ***)(param_1 + 9) != &local_278) {
              *(undefined8 *)param_1[10] = *local_270;
              *(undefined8 *)(param_1[10] + 8) = local_270[1];
              puVar37 = (undefined8 *)param_1[10];
              if (puVar37 != local_270) {
                *(undefined8 *)puVar37[3] = *(undefined8 *)local_270[3];
                *(undefined8 *)(puVar37[3] + 8) = *(undefined8 *)(local_270[3] + 8);
                *(undefined8 *)(puVar37[3] + 0x10) = *(undefined8 *)(local_270[3] + 0x10);
                *(undefined8 *)(puVar37[3] + 0x18) = *(undefined8 *)(local_270[3] + 0x18);
              }
            }
            if ((undefined ***)(param_1 + 0xb) != &local_268) {
              *(long *)param_1[0xc] = *local_260;
              *(long *)(param_1[0xc] + 8) = local_260[1];
              *(long *)(param_1[0xc] + 0x10) = local_260[2];
              *(long *)(param_1[0xc] + 0x18) = local_260[3];
            }
            if ((undefined ***)(param_1 + 0xd) != &local_258) {
              *(long *)param_1[0xe] = *local_250;
              *(long *)(param_1[0xe] + 8) = local_250[1];
              *(long *)(param_1[0xe] + 0x10) = local_250[2];
              *(long *)(param_1[0xe] + 0x18) = local_250[3];
            }
            param_1[0xf] = CONCAT44(fStack_244,local_248);
            param_1[0x10] = CONCAT44(local_23c,local_240);
            param_1[0x13] = CONCAT44(uStack_224,local_228);
            *(int *)(param_1 + 0x14) = local_220;
            param_1[0x12] = local_230;
            param_1[0x17] = local_208;
            param_1[0x16] = local_210;
            param_1[0x19] = local_1f8;
            param_1[0x18] = local_200;
            *(undefined2 *)(param_1 + 0x1a) = local_1f0;
            pcVar48 = "name_off";
          }
          else {
            if ((bVar10 && bVar9) && ((((ulong)puVar25 ^ (ulong)pplVar50) & 0xffffffffff) == 0))
            goto LAB_71019eff78;
LAB_71019eff58:
            pcVar48 = "name_on";
          }
        }
        else {
          if (!bVar12 || !bVar11) goto LAB_71019f0118;
          if (bVar10 && bVar9) goto LAB_71019eff58;
LAB_71019eff78:
          param_1[7] = (ulong)pppppppplStack_288;
          param_1[8] = local_280;
          param_1[6] = (ulong)local_290;
          if ((undefined ***)(param_1 + 9) != &local_278) {
            *(undefined8 *)param_1[10] = *local_270;
            *(undefined8 *)(param_1[10] + 8) = local_270[1];
            puVar37 = (undefined8 *)param_1[10];
            if (puVar37 != local_270) {
              *(undefined8 *)puVar37[3] = *(undefined8 *)local_270[3];
              *(undefined8 *)(puVar37[3] + 8) = *(undefined8 *)(local_270[3] + 8);
              *(undefined8 *)(puVar37[3] + 0x10) = *(undefined8 *)(local_270[3] + 0x10);
              *(undefined8 *)(puVar37[3] + 0x18) = *(undefined8 *)(local_270[3] + 0x18);
            }
          }
          if ((undefined ***)(param_1 + 0xb) != &local_268) {
            *(long *)param_1[0xc] = *local_260;
            *(long *)(param_1[0xc] + 8) = local_260[1];
            *(long *)(param_1[0xc] + 0x10) = local_260[2];
            *(long *)(param_1[0xc] + 0x18) = local_260[3];
          }
          if ((undefined ***)(param_1 + 0xd) != &local_258) {
            *(long *)param_1[0xe] = *local_250;
            *(long *)(param_1[0xe] + 8) = local_250[1];
            *(long *)(param_1[0xe] + 0x10) = local_250[2];
            *(long *)(param_1[0xe] + 0x18) = local_250[3];
          }
          param_1[0xf] = CONCAT44(fStack_244,local_248);
          param_1[0x10] = CONCAT44(local_23c,local_240);
          param_1[0x13] = CONCAT44(uStack_224,local_228);
          *(int *)(param_1 + 0x14) = local_220;
          param_1[0x12] = local_230;
          param_1[0x17] = local_208;
          param_1[0x16] = local_210;
          param_1[0x19] = local_1f8;
          param_1[0x18] = local_200;
          pcVar48 = "name_all";
          *(undefined2 *)(param_1 + 0x1a) = local_1f0;
        }
        FUN_7103778300(0x3f800000,(long)puVar28,(long)pcVar48);
        FUN_7103778300(0x3f800000,(long)local_270,0x71043f0423);
        plVar30 = local_250;
        local_2b0 = local_2b0 + 1;
        iVar18 = 0xd;
        if (uVar38 < 0xd) {
          iVar18 = *(int *)((long)param_1 + (long)(int)uVar38 * 4 + 0x1d4);
        }
        if (local_2b0 < iVar18) {
          fVar89 = fVar91 + fVar85 + fVar89;
        }
        else {
          lVar63 = (long)(int)uVar38 + 1;
          if ((uint)lVar63 < 0xd) {
            iVar18 = *(int *)((long)param_1 + lVar63 * 4 + 0x1d4);
            fVar89 = fVar91 * (float)iVar18;
            if (1 < iVar18) {
              fVar89 = fVar89 + *(float *)((long)param_1 + 0x20c) * (float)(iVar18 + -1);
            }
            fVar89 = fVar80 + (fVar78 - fVar89) * 0.5;
            local_2b0 = 0;
            fVar79 = fVar79 - (fVar92 + fVar86);
          }
          else {
            local_2b0 = 0;
          }
        }
        local_258 = &PTR_FUN_710523d9a8;
        local_250 = (long *)0x0;
        if (plVar30 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar30);
        }
        plVar30 = local_260;
        local_268 = &PTR_FUN_710523d9a8;
        local_260 = (long *)0x0;
        if (plVar30 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar30);
        }
        puVar37 = local_270;
        local_278 = &PTR_FUN_710523d988;
        local_270 = (undefined8 *)0x0;
        if (puVar37 != (undefined8 *)0x0) {
          uVar68 = puVar37[3];
          puVar37[2] = &PTR_FUN_710523d9a8;
          puVar37[3] = 0;
          if (uVar68 != 0) {
            FUN_710392eb40(uVar68);
          }
          FUN_710392eb40((ulong)puVar37);
        }
        plVar30 = local_b0;
        local_b8 = &PTR_FUN_710523d9a8;
        local_b0 = (long *)0x0;
        if (plVar30 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar30);
        }
        local_170 = &PTR_FUN_710523d988;
        local_168 = (undefined8 *)0x0;
        if (puVar28 != (undefined8 *)0x0) {
          uVar68 = puVar28[3];
          puVar28[2] = &PTR_FUN_710523d9a8;
          puVar28[3] = 0;
          if (uVar68 != 0) {
            FUN_710392eb40(uVar68);
          }
          FUN_710392eb40((ulong)puVar28);
        }
        plVar30 = local_158;
        local_160 = &PTR_FUN_710523d9a8;
        local_158 = (long *)0x0;
        if (plVar30 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar30);
        }
        plVar30 = local_148;
        uVar15 = uVar15 + 1;
        local_150 = &PTR_FUN_710523d9a8;
        local_148 = (long *)0x0;
        if (plVar30 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar30);
        }
      }
      else {
        pplVar50 = *ppplVar67;
        bVar13 = ((ulong)pplVar50 & 0xff00000000000000) != 0xc100000000000000;
        puVar71 = local_f8;
        if (bVar13 || ((ulong)pplVar50 & 0xffffffffff) == 0) {
          uVar7 = (*local_f8 & 0xffffffffff) != 0 &&
                  (*local_f8 & 0xff00000000000000) == 0xc100000000000000;
          puVar44 = local_f8;
          while ((bool)uVar7 == (bVar13 || ((ulong)pplVar50 & 0xffffffffff) == 0)) {
            puVar44 = (ulong *)((long)puVar44 + 8);
            if (local_f0 == puVar44) goto LAB_71019ee3d4;
            uVar7 = (*puVar44 & 0xffffffffff) != 0 &&
                    (*puVar44 & 0xff00000000000000) == 0xc100000000000000;
          }
        }
        else {
          do {
            uVar68 = *puVar71;
            puVar44 = puVar71;
            if (((uVar68 & 0xff00000000000000) == 0xc100000000000000 && (uVar68 & 0xffffffffff) != 0
                ) && ((uVar68 ^ (ulong)pplVar50) & 0xffffffffff) == 0) break;
            puVar71 = puVar71 + 1;
            puVar44 = local_f0;
          } while (local_f0 != puVar71);
        }
        if (local_f0 == puVar44) goto LAB_71019ee3d4;
      }
      ppplVar67 = ppplVar67 + 1;
    } while (ppplVar67 != ppplVar3);
    if (0x5a < (int)uVar15) goto LAB_71019f04d8;
  }
  do {
    FUN_7103776910(&local_290,(long)ppppppplVar73,(long ****)"set_parts_chr_s_%02d",(ulong)uVar15,
                   ppppbVar33,pppplVar62,param_6,param_7,param_8);
    pppppppplVar42 = pppppppplStack_288;
    ppppppplVar26 = *pppppppplStack_288;
    if (ppppppplVar26 != (long *******)0x0) {
      *(byte *)(ppppppplVar26 + 0xb) = *(byte *)(ppppppplVar26 + 0xb) & 0xfe;
    }
    FUN_7103776910(&local_1b8,(long)ppppppplVar73,(long ****)"set_parts_chr_bg_s_%02d",(ulong)uVar15
                   ,ppppbVar33,pppplVar62,param_6,param_7,param_8);
    plVar30 = local_1b0[0];
    lVar76 = *local_1b0[0];
    if (lVar76 != 0) {
      *(byte *)(lVar76 + 0x58) = *(byte *)(lVar76 + 0x58) & 0xfe;
    }
    local_1b8 = &PTR_FUN_710523d9a8;
    local_1b0[0] = (long *)0x0;
    if (plVar30 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar30);
    }
    local_290 = &PTR_FUN_710523d9a8;
    pppppppplStack_288 = (long ********)0x0;
    if (pppppppplVar42 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar42);
    }
    bVar9 = (int)uVar15 < 0x5a;
    uVar15 = uVar15 + 1;
  } while (bVar9);
LAB_71019f04d8:
  pppppplVar59 = ***param_3;
  (*(code *)(*pppppplVar59[0x8b])[0xb])(*(float *)(pppppplVar59 + 200) * 0.0,0);
  ppppplVar70 = pppppplVar59[0x8d];
  for (ppppplVar66 = pppppplVar59[0x8c]; ppppplVar66 != ppppplVar70; ppppplVar66 = ppppplVar66 + 1)
  {
    pppplVar62 = *ppppplVar66;
    uVar68 = (*(code *)(*pppplVar62)[8])(pppplVar62);
    if ((uVar68 & 1) != 0) {
      (*(code *)(*pppplVar62)[4])(pppplVar62);
    }
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (local_f8 != (ulong *)0x0) {
    local_f0 = local_f8;
    FUN_710392eb40((ulong)local_f8);
  }
  FUN_71019f0630(local_d8);
  return;
}

