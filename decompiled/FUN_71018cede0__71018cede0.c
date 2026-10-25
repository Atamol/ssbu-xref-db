// addr:      71018cede0
// offset:    0x18cede0
// name:      FUN_71018cede0
// mangled:   
// signature: undefined __cdecl FUN_71018cede0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018cede0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  byte ***pppbVar3;
  byte ***pppbVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  byte ***pppbVar13;
  byte **ppbVar14;
  byte ***pppbVar15;
  ulong uVar16;
  long ****pppplVar17;
  long ***ppplVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long *plVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  long ****pppplVar25;
  undefined8 uVar26;
  char *pcVar27;
  byte ****ppppbVar28;
  byte bVar29;
  undefined1 uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  ulong uVar34;
  long lVar35;
  code *pcVar36;
  long lVar37;
  long *plVar38;
  byte *pbVar39;
  undefined2 uVar40;
  long *plVar41;
  uint uVar42;
  undefined8 *puVar43;
  long ***ppplVar44;
  byte **ppbVar45;
  long *plVar46;
  long *plVar47;
  undefined1 auVar48 [16];
  undefined8 local_2280;
  undefined8 local_2278;
  undefined8 local_2270;
  undefined4 local_2268;
  undefined1 local_2264;
  long *local_2260;
  undefined8 local_2230;
  undefined1 local_2228;
  undefined1 uStack_2227;
  undefined2 uStack_2226;
  undefined2 uStack_2224;
  undefined2 uStack_2222;
  undefined4 local_2220;
  undefined2 uStack_221c;
  undefined1 uStack_221a;
  undefined1 uStack_2219;
  undefined4 uStack_2218;
  undefined4 uStack_2214;
  undefined4 local_2210;
  long alStack_2200 [4];
  long *local_21e0;
  undefined1 local_21d4 [8];
  byte local_21cc [28];
  long *local_21b0;
  long alStack_21a0 [2];
  undefined8 local_218c;
  undefined1 local_2184;
  long *local_2180;
  long alStack_2170 [4];
  long *local_2150;
  undefined1 auStack_2144 [4];
  long alStack_2140 [4];
  long *local_2120;
  undefined4 local_2110;
  undefined1 uStack_1144;
  undefined4 local_1140;
  undefined1 uStack_113c;
  undefined8 local_1138;
  undefined1 uStack_1130;
  undefined4 local_10f0;
  undefined4 local_10ec;
  undefined4 uStack_10e8;
  undefined5 uStack_10e4;
  undefined1 auStack_10a0 [4096];
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  
  puVar43 = *(undefined8 **)(*DAT_7105314510 + 0x78);
  uVar30 = *(undefined1 *)(*(long *)*puVar43 + 0x5e05c);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(*(long *)*puVar43 + 0x5e054);
  *(undefined1 *)(param_1 + 0x178) = uVar30;
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(*(long *)*puVar43 + 0x5e050);
  *(undefined1 *)(param_1 + 0x179) = *(undefined1 *)(*(long *)*puVar43 + 0x5e05d);
  *(undefined1 *)(param_1 + 0x17a) = *(undefined1 *)(*(long *)*puVar43 + 0x5e060);
  if (((DAT_71053144d8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = DAT_71053050f0;
  bVar10 = FUN_71017d2010((long *)*puVar43);
  bVar29 = bVar10 & 1;
  *(byte *)(param_1 + 0x17e) = bVar29;
  if ((bVar10 & 1) == 0) {
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar11 = FUN_7103293f90(lVar19 + 0x2e0,1);
    local_2228 = 0;
    uStack_2227 = 0;
    uStack_2226 = 0;
    uStack_2224 = 0;
    uStack_2222 = 0;
    local_2220 = 0;
    uStack_221c = 0;
    uStack_221a = 0;
    uStack_2219 = 0;
    local_2230 = (undefined **)0x0;
    if (uVar11 != 0) {
      lVar35 = (long)(int)uVar11;
      if (-1 < (int)uVar11) {
        ppplVar44 = (long ***)(lVar35 << 4);
        pppbVar13 = (byte ***)
                    FUN_710392e290(0x10,ppplVar44,(long ****)param_3,param_4,param_5,param_6,param_7
                                   ,param_8);
        if (pppbVar13 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
            param_3 = (undefined **)&local_2280;
            local_2280 = (undefined **)ppplVar44;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
            if (((uVar16 & 1) != 0) &&
               (pppbVar13 = (byte ***)
                            FUN_710392e290(0x10,ppplVar44,(long ****)param_3,param_4,param_5,param_6
                                           ,param_7,param_8), pppbVar13 != (byte ***)0x0))
            goto LAB_71018cefd4;
          }
          pppbVar13 = (byte ***)0x0;
        }
LAB_71018cefd4:
        pppbVar15 = pppbVar13 + lVar35 * 2;
        local_2228 = SUB81(pppbVar13,0);
        uStack_2227 = (undefined1)((ulong)pppbVar13 >> 8);
        uStack_2226 = (undefined2)((ulong)pppbVar13 >> 0x10);
        uStack_2224 = (undefined2)((ulong)pppbVar13 >> 0x20);
        uStack_2222 = (undefined2)((ulong)pppbVar13 >> 0x30);
        local_2220 = SUB84(pppbVar15,0);
        uStack_221c = (undefined2)((ulong)pppbVar15 >> 0x20);
        uStack_221a = (undefined1)((ulong)pppbVar15 >> 0x30);
        uStack_2219 = (undefined1)((ulong)pppbVar15 >> 0x38);
        lVar37 = *(long *)(lVar19 + 0x2e8);
        uVar16 = *(ulong *)(lVar37 + 0x28);
        local_2230 = (undefined **)pppbVar13;
        if (((uVar16 & 0xff00000000000000) != 0x1e00000000000000) || ((uVar16 & 0xffffffffff) == 0))
        {
          ppbVar45 = (byte **)0x0;
          do {
            ppbVar14 = (byte **)FUN_7103293b70(*(long *)(lVar37 + 8),(uint)ppbVar45);
            if ((((ulong)ppbVar14 & 0xffffffffff) != 0 &&
                 ((ulong)ppbVar14 & 0xff00000000000000) == 0x1e00000000000000) &&
               (uVar16 = FUN_71017980f0((ulong)ppbVar14), pppbVar13 = (byte ***)local_2230,
               (uVar16 & 1) != 0)) {
              puVar7 = (ulong *)CONCAT26(uStack_2222,
                                         CONCAT24(uStack_2224,
                                                  CONCAT22(uStack_2226,
                                                           CONCAT11(uStack_2227,local_2228))));
              puVar8 = (ulong *)CONCAT17(uStack_2219,
                                         CONCAT16(uStack_221a,CONCAT24(uStack_221c,local_2220)));
              if (puVar7 < puVar8) {
                *puVar7 = (ulong)ppbVar14;
                puVar7[1] = (ulong)ppbVar45;
                lVar37 = CONCAT26(uStack_2222,
                                  CONCAT24(uStack_2224,
                                           CONCAT22(uStack_2226,CONCAT11(uStack_2227,local_2228))))
                         + 0x10;
                local_2228 = (undefined1)lVar37;
                uStack_2227 = (undefined1)((ulong)lVar37 >> 8);
                uStack_2226 = (undefined2)((ulong)lVar37 >> 0x10);
                uStack_2224 = (undefined2)((ulong)lVar37 >> 0x20);
                uStack_2222 = (undefined2)((ulong)lVar37 >> 0x30);
              }
              else {
                pppplVar17 = (long ****)((long)puVar7 - (long)local_2230);
                uVar16 = ((long)pppplVar17 >> 4) + 1;
                if (uVar16 >> 0x3c != 0) goto LAB_71018d112c;
                lVar37 = (long)puVar8 - (long)local_2230;
                if ((ulong)(lVar37 >> 4) < 0x7ffffffffffffff) {
                  uVar22 = lVar37 >> 3;
                  if (uVar16 <= uVar22) {
                    uVar16 = uVar22;
                  }
                  if (uVar16 != 0) {
                    if (uVar16 >> 0x3c == 0) goto LAB_71018cf228;
                    goto LAB_71018d1128;
                  }
LAB_71018cf288:
                  pppbVar15 = (byte ***)0x0;
                }
                else {
                  uVar16 = 0xfffffffffffffff;
LAB_71018cf228:
                  ppplVar44 = (long ***)(uVar16 * 0x10);
                  if (ppplVar44 == (long ***)0x0) {
                    ppplVar44 = (long ***)0x1;
                  }
                  pppbVar15 = (byte ***)
                              FUN_710392e290(0x10,ppplVar44,(long ****)param_3,param_4,param_5,
                                             param_6,param_7,param_8);
                  if (pppbVar15 == (byte ***)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
                      param_3 = (undefined **)&local_2280;
                      local_2280 = (undefined **)ppplVar44;
                      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
                      if (((uVar22 & 1) != 0) &&
                         (pppbVar15 = (byte ***)
                                      FUN_710392e290(0x10,ppplVar44,(long ****)param_3,param_4,
                                                     param_5,param_6,param_7,param_8),
                         pppbVar15 != (byte ***)0x0)) goto LAB_71018cf28c;
                    }
                    goto LAB_71018cf288;
                  }
                }
LAB_71018cf28c:
                pppbVar3 = pppbVar15 + ((long)pppplVar17 >> 4) * 2;
                pppbVar4 = pppbVar15 + uVar16 * 2;
                *pppbVar3 = ppbVar14;
                pppbVar3[1] = ppbVar45;
                pppbVar3 = pppbVar3 + 2;
                if (0 < (long)pppplVar17) {
                  memcpy(pppbVar15,pppbVar13,(size_t)pppplVar17);
                  param_3 = (undefined **)pppplVar17;
                }
                local_2228 = SUB81(pppbVar3,0);
                uStack_2227 = (undefined1)((ulong)pppbVar3 >> 8);
                uStack_2226 = (undefined2)((ulong)pppbVar3 >> 0x10);
                uStack_2224 = (undefined2)((ulong)pppbVar3 >> 0x20);
                uStack_2222 = (undefined2)((ulong)pppbVar3 >> 0x30);
                local_2220 = SUB84(pppbVar4,0);
                uStack_221c = (undefined2)((ulong)pppbVar4 >> 0x20);
                uStack_221a = (undefined1)((ulong)pppbVar4 >> 0x30);
                uStack_2219 = (undefined1)((ulong)pppbVar4 >> 0x38);
                local_2230 = (undefined **)pppbVar15;
                if (pppbVar13 != (byte ***)0x0) {
                  FUN_710392eb40((ulong)pppbVar13);
                }
              }
            }
            ppbVar45 = (byte **)((long)ppbVar45 + 1);
            if (lVar35 <= (long)ppbVar45) goto LAB_71018cf2e8;
            lVar37 = *(long *)(lVar19 + 0x2e8);
          } while( true );
        }
        ppbVar45 = (byte **)0x0;
        do {
          ppbVar14 = (byte **)FUN_7103293b70(*(long *)(lVar37 + 8),(uint)ppbVar45);
          if (((((ulong)ppbVar14 & 0xff00000000000000) != 0x1e00000000000000 ||
               ((ulong)ppbVar14 & 0xffffffffff) == 0) ||
               ((uVar16 ^ (ulong)ppbVar14) & 0xffffffffff) != 0) &&
             (uVar22 = FUN_71017980f0((ulong)ppbVar14), pppbVar13 = (byte ***)local_2230,
             (uVar22 & 1) != 0)) {
            puVar7 = (ulong *)CONCAT26(uStack_2222,
                                       CONCAT24(uStack_2224,
                                                CONCAT22(uStack_2226,
                                                         CONCAT11(uStack_2227,local_2228))));
            puVar8 = (ulong *)CONCAT17(uStack_2219,
                                       CONCAT16(uStack_221a,CONCAT24(uStack_221c,local_2220)));
            if (puVar7 < puVar8) {
              *puVar7 = (ulong)ppbVar14;
              puVar7[1] = (ulong)ppbVar45;
              lVar37 = CONCAT26(uStack_2222,
                                CONCAT24(uStack_2224,
                                         CONCAT22(uStack_2226,CONCAT11(uStack_2227,local_2228)))) +
                       0x10;
              local_2228 = (undefined1)lVar37;
              uStack_2227 = (undefined1)((ulong)lVar37 >> 8);
              uStack_2226 = (undefined2)((ulong)lVar37 >> 0x10);
              uStack_2224 = (undefined2)((ulong)lVar37 >> 0x20);
              uStack_2222 = (undefined2)((ulong)lVar37 >> 0x30);
            }
            else {
              pppplVar17 = (long ****)((long)puVar7 - (long)local_2230);
              uVar22 = ((long)pppplVar17 >> 4) + 1;
              if (uVar22 >> 0x3c != 0) {
LAB_71018d112c:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar37 = (long)puVar8 - (long)local_2230;
              if ((ulong)(lVar37 >> 4) < 0x7ffffffffffffff) {
                uVar34 = lVar37 >> 3;
                if (uVar22 <= uVar34) {
                  uVar22 = uVar34;
                }
                if (uVar22 != 0) {
                  if (uVar22 >> 0x3c == 0) goto LAB_71018cf0b8;
                  break;
                }
                pppbVar15 = (byte ***)0x0;
              }
              else {
                uVar22 = 0xfffffffffffffff;
LAB_71018cf0b8:
                ppplVar44 = (long ***)(uVar22 * 0x10);
                if (ppplVar44 == (long ***)0x0) {
                  ppplVar44 = (long ***)0x1;
                }
                pppbVar15 = (byte ***)
                            FUN_710392e290(0x10,ppplVar44,(long ****)param_3,param_4,param_5,param_6
                                           ,param_7,param_8);
                if (pppbVar15 == (byte ***)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
                    param_3 = (undefined **)&local_2280;
                    local_2280 = (undefined **)ppplVar44;
                    uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
                    if (((uVar34 & 1) != 0) &&
                       (pppbVar15 = (byte ***)
                                    FUN_710392e290(0x10,ppplVar44,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8),
                       pppbVar15 != (byte ***)0x0)) goto LAB_71018cf120;
                  }
                  pppbVar15 = (byte ***)0x0;
                }
              }
LAB_71018cf120:
              pppbVar3 = pppbVar15 + ((long)pppplVar17 >> 4) * 2;
              pppbVar4 = pppbVar15 + uVar22 * 2;
              *pppbVar3 = ppbVar14;
              pppbVar3[1] = ppbVar45;
              pppbVar3 = pppbVar3 + 2;
              if (0 < (long)pppplVar17) {
                memcpy(pppbVar15,pppbVar13,(size_t)pppplVar17);
                param_3 = (undefined **)pppplVar17;
              }
              local_2228 = SUB81(pppbVar3,0);
              uStack_2227 = (undefined1)((ulong)pppbVar3 >> 8);
              uStack_2226 = (undefined2)((ulong)pppbVar3 >> 0x10);
              uStack_2224 = (undefined2)((ulong)pppbVar3 >> 0x20);
              uStack_2222 = (undefined2)((ulong)pppbVar3 >> 0x30);
              local_2220 = SUB84(pppbVar4,0);
              uStack_221c = (undefined2)((ulong)pppbVar4 >> 0x20);
              uStack_221a = (undefined1)((ulong)pppbVar4 >> 0x30);
              uStack_2219 = (undefined1)((ulong)pppbVar4 >> 0x38);
              local_2230 = (undefined **)pppbVar15;
              if (pppbVar13 != (byte ***)0x0) {
                FUN_710392eb40((ulong)pppbVar13);
              }
            }
          }
          ppbVar45 = (byte **)((long)ppbVar45 + 1);
          if (lVar35 <= (long)ppbVar45) goto LAB_71018cf2e8;
          lVar37 = *(long *)(lVar19 + 0x2e8);
        } while( true );
      }
      goto LAB_71018d1128;
    }
LAB_71018cf2e8:
    uVar31 = DAT_71052391c8;
    uVar11 = DAT_71052391c4;
    pppbVar13 = (byte ***)
                CONCAT26(uStack_2222,
                         CONCAT24(uStack_2224,CONCAT22(uStack_2226,CONCAT11(uStack_2227,local_2228))
                                 ));
    if ((byte ***)local_2230 == pppbVar13) {
      uVar40 = 0;
    }
    else {
      uVar16 = (long)pppbVar13 - (long)local_2230 >> 4;
      uVar32 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
      uVar32 = uVar32 ^ uVar32 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
      DAT_71052391c0 = DAT_71052391c4;
      DAT_71052391c4 = DAT_71052391c8;
      DAT_71052391c8 = DAT_71052391cc;
      uVar6 = 0;
      uVar42 = (uint)uVar16;
      if (uVar42 != 0) {
        uVar6 = uVar32 / uVar42;
      }
      uVar22 = (ulong)(int)(uVar32 - uVar6 * uVar42);
      if (uVar16 <= uVar22) {
        DAT_71052391cc = uVar32;
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar40 = (undefined2)*(undefined4 *)(local_2230 + uVar22 * 2 + 1);
      DAT_71052391c0 = uVar11;
      DAT_71052391c4 = uVar31;
      DAT_71052391cc = uVar32;
    }
    uVar11 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
    uVar11 = uVar11 ^ uVar11 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c0 = DAT_71052391c4;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    DAT_71052391cc = uVar11;
    *(undefined2 *)(param_1 + 0x16c) = uVar40;
    *(char *)(param_1 + 0x16e) = (char)uVar11 + (char)(uVar11 / 0xc) * -0xc;
    lVar19 = *(long *)(DAT_710532f730 + 8);
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),0);
    *(char *)(param_1 + 0x170) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),1);
    *(char *)(param_1 + 0x171) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),2);
    *(char *)(param_1 + 0x172) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),3);
    *(char *)(param_1 + 0x173) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),4);
    *(char *)(param_1 + 0x174) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),5);
    *(char *)(param_1 + 0x175) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),6);
    *(char *)(param_1 + 0x176) = (char)uVar16;
    uVar16 = FUN_71032a0350(*(long *)(lVar19 + 0x308),7);
    *(char *)(param_1 + 0x177) = (char)uVar16;
    if ((byte ***)local_2230 != (byte ***)0x0) {
      uStack_2222 = (undefined2)((ulong)local_2230 >> 0x30);
      uStack_2224 = (undefined2)((ulong)local_2230 >> 0x20);
      uStack_2226 = (undefined2)((ulong)local_2230 >> 0x10);
      uStack_2227 = (undefined1)((ulong)local_2230 >> 8);
      local_2228 = SUB81(local_2230,0);
      FUN_710392eb40((ulong)local_2230);
    }
    bVar29 = *(byte *)(param_1 + 0x17e);
  }
  else {
    *(char *)(param_1 + 0x16e) = (char)*(undefined2 *)(*(long *)*puVar43 + 0x5e052);
    *(short *)(param_1 + 0x16c) = (short)*(undefined4 *)(*(long *)*puVar43 + 0x5e050);
    *(undefined1 *)(param_1 + 0x179) = *(undefined1 *)(*(long *)*puVar43 + 0x5e05d);
    *(undefined1 *)(param_1 + 0x17a) = *(undefined1 *)(*(long *)*puVar43 + 0x5e060);
    uVar30 = *(undefined1 *)(*(long *)*puVar43 + 0x5e05c);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(*(long *)*puVar43 + 0x5e054);
    *(undefined1 *)(param_1 + 0x178) = uVar30;
  }
  bVar29 = *(byte *)(param_1 + 0x17f) | bVar29;
  *(byte *)(param_1 + 0x17f) = bVar29;
  FUN_7101af9320(*(long *)(*(long *)(param_1 + 0x140) + 0x80),bVar29 != 0,param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x17f) == '\0') {
    FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  ppplVar44 = (long ***)(param_1 + 0x138);
  puVar43 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar43 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000088;
      param_3 = (undefined **)&local_2230;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      if (((uVar16 & 1) != 0) &&
         (puVar43 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar43 != (undefined8 *)0x0)) goto LAB_71018cf4d0;
    }
    puVar43 = (undefined8 *)0x0;
  }
LAB_71018cf4d0:
  *puVar43 = &PTR_FUN_71050af368;
  puVar43[1] = 0;
  puVar43[0xc] = 0;
  puVar43[0xd] = 0x1ffffffff;
  puVar43[2] = 0;
  puVar43[3] = 0;
  *(undefined1 *)(puVar43 + 0xb) = 0;
  puVar43[0xf] = ppplVar44;
  *(undefined1 *)(puVar43 + 0xe) = 1;
  puVar43[9] = 0;
  puVar43[10] = 0;
  pppplVar17 = (long ****)
               FUN_710392e290(0x10,0x210,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (pppplVar17 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000210;
      pppplVar17 = (long ****)&local_2230;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      if (((uVar16 & 1) != 0) &&
         (pppplVar17 = (long ****)
                       FUN_710392e290(0x10,0x210,pppplVar17,param_4,param_5,param_6,param_7,param_8)
         , pppplVar17 != (long ****)0x0)) goto LAB_71018cf558;
    }
    pppplVar17 = (long ****)0x0;
  }
LAB_71018cf558:
  pppplVar25 = (long ****)0x10c;
  *(undefined2 *)((long)pppplVar17 + 0xc) = 0;
  *(undefined4 *)(pppplVar17 + 1) = 0;
  *pppplVar17 = (long ***)&PTR_FUN_71050af250;
  *(undefined4 *)((long)pppplVar17 + 0x144) = 0;
  pppplVar17[5] = (long ***)0x0;
  pppplVar17[6] = (long ***)0x0;
  pppplVar17[2] = (long ***)pppplVar17;
  pppplVar17[0x29] = (long ***)&DAT_ffffffff;
  *(undefined4 *)(pppplVar17 + 0x2a) = 0xffffffff;
  *(undefined1 *)((long)pppplVar17 + 0x154) = 0;
  pppplVar17[3] = (long ***)0x0;
  pppplVar17[4] = (long ***)0x0;
  memset(pppplVar17 + 7,0,0x10c);
  pppplVar17[0x2b] = ppplVar44;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_00, ppplVar18 != (long ***)0x0)) goto LAB_71018cf5fc;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cf5fc:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[0x2c] = ppplVar18;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_01;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_02, ppplVar18 != (long ***)0x0)) goto LAB_71018cf664;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cf664:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[0x2d] = ppplVar18;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_03;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_04, ppplVar18 != (long ***)0x0)) goto LAB_71018cf6cc;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cf6cc:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[0x2e] = ppplVar18;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_05;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_06, ppplVar18 != (long ***)0x0)) goto LAB_71018cf734;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cf734:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(pppplVar17 + 0x34) = 0;
  pppplVar17[0x2f] = ppplVar18;
  pppplVar17[0x32] = (long ***)0x0;
  pppplVar17[0x33] = (long ***)0x0;
  pppplVar17[0x30] = (long ***)0x0;
  pppplVar17[0x31] = (long ***)0x0;
  FUN_7103776290(pppplVar17 + 0x35,extraout_x1_07,pppplVar25,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(pppplVar17 + 0x37,extraout_x1_08,pppplVar25,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(pppplVar17 + 0x39,extraout_x1_09,pppplVar25,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(pppplVar17 + 0x3b,extraout_x1_10,pppplVar25,param_4,param_5,param_6,param_7,param_8
                );
  pppplVar17[7] = (long ***)FUN_7101d42290;
  pppplVar17[8] = (long ***)0x0;
  pppplVar17[0x41] = (long ***)0x0;
  pppplVar17[0xb] = (long ***)FUN_7101d42420;
  pppplVar17[0xc] = (long ***)0x0;
  pppplVar17[0xd] = (long ***)FUN_7101d42460;
  pppplVar17[0xe] = (long ***)0x0;
  pppplVar17[0x11] = (long ***)FUN_7101d42880;
  pppplVar17[0x12] = (long ***)0x0;
  pppplVar17[0x13] = (long ***)FUN_7101d42ca0;
  pppplVar17[0x14] = (long ***)0x0;
  pppplVar17[0x17] = (long ***)FUN_7101d43050;
  pppplVar17[0x18] = (long ***)0x0;
  pppplVar17[0x1b] = (long ***)FUN_7101d43150;
  pppplVar17[0x1c] = (long ***)0x0;
  pppplVar17[9] = (long ***)FUN_7101d422a0;
  pppplVar17[10] = (long ***)0x0;
  pppplVar17[0xf] = (long ***)FUN_7101d42800;
  pppplVar17[0x10] = (long ***)0x0;
  pppplVar17[0x15] = (long ***)FUN_7101d42f80;
  pppplVar17[0x16] = (long ***)0x0;
  pppplVar17[0x19] = (long ***)FUN_7101d433d0;
  pppplVar17[0x1a] = (long ***)0x0;
  pppplVar17[0x3f] = (long ***)0x0;
  pppplVar17[0x40] = (long ***)0x0;
  pppplVar17[0x3d] = (long ***)0x0;
  pppplVar17[0x3e] = (long ***)0x0;
  pppplVar17[0x1d] = (long ***)FUN_7101d43480;
  pppplVar17[0x1e] = (long ***)0x0;
  if (0x12 < *(uint *)((long)pppplVar17 + 0x144)) goto LAB_71018d1128;
  *(undefined4 *)((long)pppplVar17 + (long)(int)*(uint *)((long)pppplVar17 + 0x144) * 4 + 0xf8) = 0;
  puVar43[0x10] = pppplVar17;
  FUN_7101d43940(pppplVar17);
  puVar43[2] = &DAT_7105333600;
  *(undefined4 *)(puVar43 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar43 + 0x6c) = DAT_7105333664;
  do {
    uVar11 = DAT_7105333650;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar9) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar11 & 1) != 0);
  puVar43[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar43;
  FUN_71032caea0((long)puVar43,extraout_x1_11,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  lVar19 = *(long *)(param_1 + 0x150);
  *(undefined8 **)(param_1 + 0x150) = puVar43;
  if (lVar19 != 0) {
    FUN_71032cad20(lVar19);
  }
  puVar43 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  if (puVar43 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000088;
      pppplVar25 = (long ****)&local_2230;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      if (((uVar16 & 1) != 0) &&
         (puVar43 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         puVar43 != (undefined8 *)0x0)) goto LAB_71018cf8f8;
    }
    puVar43 = (undefined8 *)0x0;
  }
LAB_71018cf8f8:
  *puVar43 = &PTR_FUN_71050af678;
  puVar43[1] = 0;
  puVar43[0xc] = 0;
  puVar43[0xd] = 0x1ffffffff;
  puVar43[2] = 0;
  puVar43[3] = 0;
  *(undefined1 *)(puVar43 + 0xb) = 0;
  puVar43[0xf] = ppplVar44;
  *(undefined1 *)(puVar43 + 0xe) = 1;
  puVar43[9] = 0;
  puVar43[10] = 0;
  pppplVar17 = (long ****)
               FUN_710392e290(0x10,0x2f8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  if (pppplVar17 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)0x2f8;
      pppplVar25 = (long ****)&local_2230;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      if (((uVar16 & 1) != 0) &&
         (pppplVar17 = (long ****)
                       FUN_710392e290(0x10,0x2f8,pppplVar25,param_4,param_5,param_6,param_7,param_8)
         , pppplVar17 != (long ****)0x0)) goto LAB_71018cf980;
    }
    pppplVar17 = (long ****)0x0;
  }
LAB_71018cf980:
  *pppplVar17 = (long ***)&PTR_FUN_71050af3d8;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_12;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_13, ppplVar18 != (long ***)0x0)) goto LAB_71018cf9e8;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cf9e8:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[1] = ppplVar18;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_14;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_15, ppplVar18 != (long ***)0x0)) goto LAB_71018cfa50;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cfa50:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[2] = ppplVar18;
  pppplVar17[3] = (long ***)0x0;
  FUN_71032cc410(pppplVar17 + 4,extraout_x1_16,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  FUN_71032cc410(pppplVar17 + 9,extraout_x1_17,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[0x12] = (long ***)0x0;
  pppplVar17[0x13] = (long ***)0x0;
  pppplVar17[0x10] = (long ***)0x0;
  pppplVar17[0x11] = (long ***)0x0;
  pppplVar17[0xe] = (long ***)0x0;
  pppplVar17[0xf] = (long ***)0x0;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_18;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_19, ppplVar18 != (long ***)0x0)) goto LAB_71018cfad4;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cfad4:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[0x14] = ppplVar18;
  ppplVar18 = (long ***)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_20;
  if (ppplVar18 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (ppplVar18 = (long ***)
                      FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_21, ppplVar18 != (long ***)0x0)) goto LAB_71018cfb3c;
    }
    ppplVar18 = (long ***)0x0;
  }
LAB_71018cfb3c:
  FUN_7103773200(ppplVar18,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  pppplVar17[0x44] = (long ***)(pppplVar17 + 0x3e);
  pppplVar17[0x15] = ppplVar18;
  pppplVar17[0x16] = (long ***)pppplVar17;
  pppplVar17[0x19] = (long ***)0x0;
  pppplVar17[0x1a] = (long ***)0x0;
  *(undefined4 *)(pppplVar17 + 0x3c) = 0xffffffff;
  *(undefined1 *)((long)pppplVar17 + 0x1e4) = 0;
  pppplVar17[0x1b] = (long ***)0x0;
  pppplVar17[0x43] = (long ***)0x0;
  pppplVar17[0x42] = (long ***)0x0;
  pppplVar17[0x41] = (long ***)0x0;
  *(undefined2 *)(pppplVar17 + 0x45) = 0;
  *(undefined1 *)((long)pppplVar17 + 0x22a) = 0;
  pppplVar17[0x17] = (long ***)0x0;
  pppplVar17[0x18] = (long ***)0x0;
  pppplVar17[0x3a] = (long ***)0x0;
  pppplVar17[0x3b] = (long ***)&DAT_ffffffff;
  pppplVar17[0x38] = (long ***)0x0;
  pppplVar17[0x39] = (long ***)0x0;
  pppplVar17[0x36] = (long ***)0x0;
  pppplVar17[0x37] = (long ***)0x0;
  pppplVar17[0x34] = (long ***)0x0;
  pppplVar17[0x35] = (long ***)0x0;
  pppplVar17[0x32] = (long ***)0x0;
  pppplVar17[0x33] = (long ***)0x0;
  pppplVar17[0x30] = (long ***)0x0;
  pppplVar17[0x31] = (long ***)0x0;
  pppplVar17[0x2e] = (long ***)0x0;
  pppplVar17[0x2f] = (long ***)0x0;
  pppplVar17[0x2c] = (long ***)0x0;
  pppplVar17[0x2d] = (long ***)0x0;
  pppplVar17[0x2a] = (long ***)0x0;
  pppplVar17[0x2b] = (long ***)0x0;
  pppplVar17[0x28] = (long ***)0x0;
  pppplVar17[0x29] = (long ***)0x0;
  pppplVar17[0x26] = (long ***)0x0;
  pppplVar17[0x27] = (long ***)0x0;
  pppplVar17[0x24] = (long ***)0x0;
  pppplVar17[0x25] = (long ***)0x0;
  pppplVar17[0x22] = (long ***)0x0;
  pppplVar17[0x23] = (long ***)0x0;
  pppplVar17[0x20] = (long ***)0x0;
  pppplVar17[0x21] = (long ***)0x0;
  pppplVar17[0x1e] = (long ***)0x0;
  pppplVar17[0x1f] = (long ***)0x0;
  pppplVar17[0x1c] = (long ***)0x0;
  pppplVar17[0x1d] = (long ***)0x0;
  pppplVar17[0x3f] = (long ***)0x0;
  pppplVar17[0x40] = (long ***)0x0;
  pppplVar17[0x3d] = ppplVar44;
  pppplVar17[0x3e] = (long ***)0x0;
  *(undefined8 *)((long)pppplVar17 + 0x22c) = 4;
  *(undefined4 *)((long)pppplVar17 + 0x234) = 4;
  *(undefined4 *)(pppplVar17 + 0x53) = 0;
  pppplVar17[0x52] = (long ***)0x0;
  pppplVar17[0x51] = (long ***)0x0;
  pppplVar17[0x50] = (long ***)0x0;
  pppplVar17[0x4f] = (long ***)0x0;
  pppplVar17[0x4e] = (long ***)0x0;
  pppplVar17[0x4d] = (long ***)0x0;
  pppplVar17[0x4c] = (long ***)0x0;
  pppplVar17[0x4b] = (long ***)0x0;
  pppplVar17[0x4a] = (long ***)0x0;
  pppplVar17[0x49] = (long ***)0x0;
  pppplVar17[0x48] = (long ***)0x0;
  pppplVar17[0x47] = (long ***)0x0;
  *(undefined8 *)((long)pppplVar17 + 0x29c) = 4;
  FUN_7103776290(pppplVar17 + 0x55,extraout_x1_22,pppplVar25,param_4,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(pppplVar17 + 0x57) = 0;
  pppplVar17[0x58] = (long ***)0x0;
  *(undefined1 *)(pppplVar17 + 0x5a) = 0;
  *(undefined1 *)((long)pppplVar17 + 0x2d9) = 0;
  *(undefined8 *)((long)pppplVar17 + 0x2eb) = 0;
  *(undefined8 *)((long)pppplVar17 + 0x2dc) = 0;
  *(undefined8 *)((long)pppplVar17 + 0x2e4) = 0;
  pppplVar17[0x1d] = (long ***)FUN_7101d47de0;
  pppplVar17[0x1e] = (long ***)0x0;
  pppplVar17[0x1f] = (long ***)FUN_7101d47f00;
  pppplVar17[0x20] = (long ***)0x0;
  pppplVar17[0x23] = (long ***)FUN_7101d481c0;
  pppplVar17[0x24] = (long ***)0x0;
  pppplVar17[0x25] = (long ***)FUN_7101d483e0;
  pppplVar17[0x26] = (long ***)0x0;
  pppplVar17[0x29] = (long ***)FUN_7101d48970;
  pppplVar17[0x2a] = (long ***)0x0;
  pppplVar17[0x2b] = (long ***)FUN_7101d48ed0;
  pppplVar17[0x2c] = (long ***)0x0;
  pppplVar17[0x1b] = (long ***)FUN_7101d47dd0;
  pppplVar17[0x1c] = (long ***)0x0;
  pppplVar17[0x21] = (long ***)FUN_7101d47f80;
  pppplVar17[0x22] = (long ***)0x0;
  pppplVar17[0x27] = (long ***)FUN_7101d48600;
  pppplVar17[0x28] = (long ***)0x0;
  pppplVar17[0x2d] = (long ***)FUN_7101d492d0;
  pppplVar17[0x2e] = (long ***)0x0;
  pppplVar17[0x2f] = (long ***)FUN_7101d49350;
  pppplVar17[0x30] = (long ***)0x0;
  if (0x12 < *(uint *)((long)pppplVar17 + 0x1d4)) goto LAB_71018d1128;
  *(undefined4 *)((long)pppplVar17 + (long)(int)*(uint *)((long)pppplVar17 + 0x1d4) * 4 + 0x188) = 0
  ;
  puVar43[0x10] = pppplVar17;
  FUN_7101d4b6b0(pppplVar17);
  puVar43[2] = &DAT_7105333600;
  *(undefined4 *)(puVar43 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar43 + 0x6c) = DAT_7105333664;
  do {
    uVar11 = DAT_7105333650;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar9) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar11 & 1) != 0);
  puVar43[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar43;
  FUN_71032caea0((long)puVar43,extraout_x1_23,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  lVar19 = *(long *)(param_1 + 0x158);
  *(undefined8 **)(param_1 + 0x158) = puVar43;
  if (lVar19 != 0) {
    FUN_71032cad20(lVar19);
  }
  puVar43 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  if (puVar43 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000088;
      pppplVar25 = (long ****)&local_2230;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      if (((uVar16 & 1) != 0) &&
         (puVar43 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         puVar43 != (undefined8 *)0x0)) goto LAB_71018cfd98;
    }
    puVar43 = (undefined8 *)0x0;
  }
LAB_71018cfd98:
  *puVar43 = &PTR_FUN_71050af3a0;
  puVar43[1] = 0;
  puVar43[0xc] = 0;
  puVar43[0xd] = 0x1ffffffff;
  puVar43[2] = 0;
  puVar43[3] = 0;
  *(undefined1 *)(puVar43 + 0xb) = 0;
  puVar43[0xf] = ppplVar44;
  *(undefined1 *)(puVar43 + 0xe) = 1;
  puVar43[9] = 0;
  puVar43[10] = 0;
  lVar19 = FUN_710392e290(0x10,0x150,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  if (lVar19 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000150;
      pppplVar25 = (long ****)&local_2230;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      if (((uVar16 & 1) != 0) &&
         (lVar19 = FUN_710392e290(0x10,0x150,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         lVar19 != 0)) goto LAB_71018cfe20;
    }
    lVar19 = 0;
  }
LAB_71018cfe20:
  *(undefined4 *)(lVar19 + 0xf0) = 0xffffffff;
  *(undefined8 *)(lVar19 + 0x10) = 0;
  *(undefined8 *)(lVar19 + 0x18) = 0;
  *(undefined1 *)(lVar19 + 0xf4) = 0;
  *(long ****)(lVar19 + 0xf8) = ppplVar44;
  *(undefined2 *)(lVar19 + 0x104) = 0;
  *(undefined4 *)(lVar19 + 0x100) = 0;
  *(long *)lVar19 = lVar19;
  *(undefined8 *)(lVar19 + 8) = 0;
  *(undefined8 *)(lVar19 + 0xe0) = 0;
  *(undefined8 *)(lVar19 + 0xe8) = 0xffffffff;
  *(undefined8 *)(lVar19 + 0xd0) = 0;
  *(undefined8 *)(lVar19 + 0xd8) = 0;
  *(undefined8 *)(lVar19 + 0xc0) = 0;
  *(undefined8 *)(lVar19 + 200) = 0;
  *(undefined8 *)(lVar19 + 0xb0) = 0;
  *(undefined8 *)(lVar19 + 0xb8) = 0;
  *(undefined8 *)(lVar19 + 0xa0) = 0;
  *(undefined8 *)(lVar19 + 0xa8) = 0;
  *(undefined8 *)(lVar19 + 0x90) = 0;
  *(undefined8 *)(lVar19 + 0x98) = 0;
  *(undefined8 *)(lVar19 + 0x80) = 0;
  *(undefined8 *)(lVar19 + 0x88) = 0;
  *(undefined8 *)(lVar19 + 0x70) = 0;
  *(undefined8 *)(lVar19 + 0x78) = 0;
  *(undefined8 *)(lVar19 + 0x60) = 0;
  *(undefined8 *)(lVar19 + 0x68) = 0;
  *(undefined8 *)(lVar19 + 0x50) = 0;
  *(undefined8 *)(lVar19 + 0x58) = 0;
  *(undefined8 *)(lVar19 + 0x40) = 0;
  *(undefined8 *)(lVar19 + 0x48) = 0;
  *(undefined8 *)(lVar19 + 0x30) = 0;
  *(undefined8 *)(lVar19 + 0x38) = 0;
  *(undefined8 *)(lVar19 + 0x20) = 0;
  *(undefined8 *)(lVar19 + 0x28) = 0;
  puVar20 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  uVar26 = extraout_x1_24;
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2280 = (undefined **)((ulong)local_2280 & 0xffffffff00000000);
      local_2230 = (undefined **)&DAT_00000008;
      pppplVar25 = (long ****)&local_2230;
      auVar48 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2280);
      uVar26 = auVar48._8_8_;
      if (((auVar48._0_8_ & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar25,param_4,param_5,param_6,param_7,param_8),
         uVar26 = extraout_x1_25, puVar20 != (undefined8 *)0x0)) goto LAB_71018cfecc;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_71018cfecc:
  FUN_7103773200(puVar20,uVar26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(lVar19 + 0x108) = puVar20;
  puVar20 = (undefined8 *)(lVar19 + 0x110);
  FUN_7103776290(puVar20,extraout_x1_26,pppplVar25,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(lVar19 + 0x140) = 0x1ffffffff;
  *(undefined8 *)(lVar19 + 0x130) = 0;
  *(undefined8 *)(lVar19 + 0x138) = 0;
  *(undefined4 *)(lVar19 + 0x148) = 1;
  *(code **)(lVar19 + 0x28) = FUN_7101d47160;
  *(undefined8 *)(lVar19 + 0x30) = 0;
  *(code **)(lVar19 + 0x38) = FUN_7101d47170;
  *(undefined8 *)(lVar19 + 0x40) = 0;
  *(code **)(lVar19 + 0x58) = FUN_7101d472d0;
  *(undefined8 *)(lVar19 + 0x60) = 0;
  *(code **)(lVar19 + 0x68) = FUN_7101d47820;
  *(undefined8 *)(lVar19 + 0x70) = 0;
  *(code **)(lVar19 + 0x48) = FUN_7101d471d0;
  *(undefined8 *)(lVar19 + 0x50) = 0;
  *(code **)(lVar19 + 0x78) = FUN_7101d47910;
  *(undefined8 *)(lVar19 + 0x80) = 0;
  *(undefined8 *)(lVar19 + 0x120) = 0;
  *(undefined8 *)(lVar19 + 0x128) = 0;
  *(code **)(lVar19 + 0x88) = FUN_7101d47980;
  *(undefined8 *)(lVar19 + 0x90) = 0;
  if (0x12 < *(uint *)(lVar19 + 0xe4)) goto LAB_71018d1128;
  *(undefined4 *)(lVar19 + (long)(int)*(uint *)(lVar19 + 0xe4) * 4 + 0x98) = 0;
  puVar43[0x10] = lVar19;
  if (*(char *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80) + 0x244) == '\0') {
    if ((*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x6585) != '\x01') ||
       (*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + 0x6586) != '\x01'))
    goto LAB_71018cfffc;
LAB_71018cfff4:
    uVar30 = 0;
  }
  else {
    uVar16 = FUN_7101739120(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xb0),0x232f);
    if ((((uint)uVar16 & 0xff) == 1) &&
       (uVar16 = FUN_7101739120(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xb0),0x2336),
       ((uint)uVar16 & 0xff) == 1)) goto LAB_71018cfff4;
LAB_71018cfffc:
    uVar30 = 1;
  }
  *(undefined1 *)(lVar19 + 0x103) = uVar30;
  FUN_71032cbf30((undefined8 *)(lVar19 + 0x108),**(long **)(lVar19 + 0xf8),(ulong *)&DAT_7104545660,
                 (byte ****)0x1,param_5,param_6,param_7,param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)(lVar19 + 0x108),0);
  lVar35 = **(long **)(lVar19 + 0x108);
  if ((undefined8 *)(lVar35 + 8) != puVar20) {
    **(undefined8 **)(lVar19 + 0x118) = **(undefined8 **)(lVar35 + 0x10);
    *(undefined8 *)(*(long *)(lVar19 + 0x118) + 8) = *(undefined8 *)(*(long *)(lVar35 + 0x10) + 8);
    lVar37 = *(long *)(lVar35 + 0x10);
    lVar35 = *(long *)(lVar19 + 0x118);
    if (lVar35 != lVar37) {
      **(undefined8 **)(lVar35 + 0x18) = **(undefined8 **)(lVar37 + 0x18);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar37 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar37 + 0x18) + 0x18);
    }
  }
  local_2228 = 1;
  uStack_2227 = 1;
  uStack_2218 = 0;
  uStack_2214 = 0x41f00000;
  local_2220 = 1;
  uStack_221c = 1;
  uStack_221a = 1;
  plVar23 = (long *)(lVar19 + 0x120);
  local_2230 = (undefined **)0x0;
  uStack_2222 = 0;
  uStack_2226 = 0;
  uStack_2224 = 0;
  local_2210 = 0;
  local_21e0 = (long *)0x0;
  local_21b0 = (long *)0x0;
  local_2180 = (long *)0x0;
  local_2150 = (long *)0x0;
  local_2120 = (long *)0x0;
  local_2110 = 0;
  local_2280 = (undefined **)&DAT_71051860d0;
  local_2260 = &local_2280;
  FUN_7101989a30(&local_2280,alStack_2170);
  if (&local_2280 == local_2260) {
    pcVar36 = *(code **)(*local_2260 + 0x20);
LAB_71018d014c:
    (*pcVar36)();
  }
  else if (local_2260 != (long *)0x0) {
    pcVar36 = *(code **)(*local_2260 + 0x28);
    goto LAB_71018d014c;
  }
  ppppbVar28 = (byte ****)&local_2230;
  *(undefined4 *)(lVar19 + 0x140) = 0;
  plVar24 = (long *)(lVar19 + 0x128);
  FUN_7103770b30(plVar23,puVar20,(long ****)"selector_00",ppppbVar28,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar23,0,"set_parts_btn_00",ppppbVar28,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar23,1,"set_parts_btn_01",ppppbVar28,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar23,2,"set_footer_area",ppppbVar28,param_5,param_6,param_7,param_8);
  plVar21 = *(long **)(lVar19 + 0x120);
  plVar38 = (long *)plVar21[0x37];
  if (plVar38 != (long *)0x0) {
    plVar46 = plVar21 + 0x37;
    plVar47 = plVar46;
    plVar41 = plVar38;
    do {
      bVar9 = (int)plVar41[4] < 0;
      if (!bVar9) {
        plVar47 = plVar41;
      }
      plVar41 = (long *)plVar41[bVar9];
    } while (plVar41 != (long *)0x0);
    if (((plVar47 != plVar46) && ((int)plVar47[4] < 1)) &&
       (plVar47 = (long *)plVar47[5], plVar47 != (long *)0x0)) {
      (**(code **)(*plVar47 + 0x1f8))(plVar47,1);
      (**(code **)(*plVar47 + 0x388))(plVar47,0,0);
      plVar21 = (long *)*plVar23;
      plVar38 = (long *)plVar21[0x37];
      plVar46 = plVar21 + 0x37;
    }
    plVar47 = plVar46;
    plVar41 = plVar38;
    if (plVar38 != (long *)0x0) {
      do {
        if (0 < (int)plVar41[4]) {
          plVar47 = plVar41;
        }
        plVar1 = plVar41 + ((int)plVar41[4] < 1);
        plVar41 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
      if (((plVar47 != plVar46) && ((int)plVar47[4] < 2)) &&
         (plVar47 = (long *)plVar47[5], plVar47 != (long *)0x0)) {
        (**(code **)(*plVar47 + 0x1f8))(plVar47,1);
        (**(code **)(*plVar47 + 0x388))(plVar47,0,0);
        plVar21 = (long *)*plVar23;
        plVar38 = (long *)plVar21[0x37];
        plVar46 = plVar21 + 0x37;
      }
      plVar47 = plVar46;
      if (plVar38 != (long *)0x0) {
        do {
          if (1 < (int)plVar38[4]) {
            plVar47 = plVar38;
          }
          plVar38 = (long *)plVar38[(int)plVar38[4] < 2];
        } while (plVar38 != (long *)0x0);
        if (((plVar47 != plVar46) && ((int)plVar47[4] < 3)) &&
           (plVar38 = (long *)plVar47[5], plVar38 != (long *)0x0)) {
          (**(code **)(*plVar38 + 0x1f8))(plVar38,1);
          (**(code **)(*plVar38 + 0x388))(plVar38,0,0);
          plVar21 = (long *)*plVar23;
        }
      }
    }
  }
  (**(code **)(*plVar21 + 0x60))(plVar21,0);
  uVar26 = 1;
  FUN_7103771a80(plVar23,*(int *)(lVar19 + 0x140),1);
  *(uint *)(lVar19 + 0x144) = *(byte *)(lVar19 + 0x104) ^ 1;
  FUN_7103776640(&local_80,(long)puVar20,(byte ****)"set_parts_btn_00_sub",uVar26,ppppbVar28,param_5
                 ,param_6,param_7,param_8);
  ppppbVar28 = (byte ****)&local_2230;
  FUN_7103770b30(plVar24,&local_80,(long ****)"selector_0",ppppbVar28,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar24,0,"set_parts_sub_btn_00",ppppbVar28,param_5,param_6,param_7,param_8);
  pcVar27 = "set_parts_sub_btn_01";
  FUN_71037717d0(plVar24,1,"set_parts_sub_btn_01",ppppbVar28,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_sub_btn_00",pcVar27,ppppbVar28,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_2280,(long)&local_90,(long ****)"set_txt_00",pcVar27,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_2280,"mnu_opt_online_receive",pcVar27,ppppbVar28,param_5,param_6,
                 param_7,param_8);
  uVar16 = (ulong)local_2278;
  local_2280 = &PTR_FUN_710523d9a8;
  local_2278 = (long *)0x0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_sub_btn_01",pcVar27,ppppbVar28,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_2280,(long)&local_90,(long ****)"set_txt_00",pcVar27,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_2280,"mnu_opt_online_not_receive",pcVar27,ppppbVar28,param_5,param_6,
                 param_7,param_8);
  uVar16 = (ulong)local_2278;
  local_2280 = &PTR_FUN_710523d9a8;
  local_2278 = (long *)0x0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  plVar23 = (long *)*plVar24;
  plVar21 = (long *)plVar23[0x37];
  if (plVar21 != (long *)0x0) {
    plVar38 = plVar23 + 0x37;
    plVar46 = plVar38;
    plVar47 = plVar21;
    do {
      bVar9 = (int)plVar47[4] < 0;
      if (!bVar9) {
        plVar46 = plVar47;
      }
      plVar47 = (long *)plVar47[bVar9];
    } while (plVar47 != (long *)0x0);
    if (((plVar46 != plVar38) && ((int)plVar46[4] < 1)) &&
       (plVar46 = (long *)plVar46[5], plVar46 != (long *)0x0)) {
      (**(code **)(*plVar46 + 0x1f8))(plVar46,1);
      (**(code **)(*plVar46 + 0x388))(plVar46,0,0);
      plVar23 = (long *)*plVar24;
      plVar21 = (long *)plVar23[0x37];
      plVar38 = plVar23 + 0x37;
    }
    plVar46 = plVar38;
    plVar47 = plVar21;
    if (plVar21 != (long *)0x0) {
      do {
        if (0 < (int)plVar47[4]) {
          plVar46 = plVar47;
        }
        plVar41 = plVar47 + ((int)plVar47[4] < 1);
        plVar47 = (long *)*plVar41;
      } while ((long *)*plVar41 != (long *)0x0);
      if (((plVar46 != plVar38) && ((int)plVar46[4] < 2)) &&
         (plVar46 = (long *)plVar46[5], plVar46 != (long *)0x0)) {
        (**(code **)(*plVar46 + 0x1f8))(plVar46,1);
        (**(code **)(*plVar46 + 0x388))(plVar46,0,0);
        plVar23 = (long *)*plVar24;
        plVar21 = (long *)plVar23[0x37];
        plVar38 = plVar23 + 0x37;
      }
      plVar46 = plVar38;
      plVar47 = plVar21;
      if (plVar21 != (long *)0x0) {
        do {
          bVar9 = (int)plVar47[4] < 0;
          if (!bVar9) {
            plVar46 = plVar47;
          }
          plVar41 = plVar47 + bVar9;
          plVar47 = (long *)*plVar41;
        } while ((long *)*plVar41 != (long *)0x0);
        if (((plVar46 != plVar38) && ((int)plVar46[4] < 1)) &&
           (plVar46 = (long *)plVar46[5], plVar46 != (long *)0x0)) {
          (**(code **)(*plVar46 + 0x208))(plVar46,0);
          (**(code **)(*plVar46 + 0x388))(plVar46,1,0);
          plVar23 = (long *)*plVar24;
          plVar21 = (long *)plVar23[0x37];
          plVar38 = plVar23 + 0x37;
        }
        plVar46 = plVar38;
        if (plVar21 != (long *)0x0) {
          do {
            if (0 < (int)plVar21[4]) {
              plVar46 = plVar21;
            }
            plVar21 = (long *)plVar21[(int)plVar21[4] < 1];
          } while (plVar21 != (long *)0x0);
          if (((plVar46 != plVar38) && ((int)plVar46[4] < 2)) &&
             (plVar21 = (long *)plVar46[5], plVar21 != (long *)0x0)) {
            (**(code **)(*plVar21 + 0x208))(plVar21,0);
            (**(code **)(*plVar21 + 0x388))(plVar21,1,0);
            plVar23 = (long *)*plVar24;
          }
        }
      }
    }
  }
  (**(code **)(*plVar23 + 0x60))(plVar23,0);
  iVar12 = *(int *)(lVar19 + 0x144);
  FUN_7103771d60(&local_2280,*(long *)(lVar19 + 0x128),(long ****)0x0,ppppbVar28,param_5,param_6,
                 param_7,param_8);
  plVar23 = local_2278;
  plVar21 = (long *)*local_2278;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x2f0))(plVar21,iVar12 == 0,0);
  }
  local_2280 = &PTR_FUN_710523d9c8;
  local_2278 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar23);
  }
  uVar26 = 1;
  FUN_7103771d60(&local_2280,*plVar24,(long ****)0x1,ppppbVar28,param_5,param_6,param_7,param_8);
  plVar23 = local_2278;
  plVar24 = (long *)*local_2278;
  if (plVar24 != (long *)0x0) {
    uVar26 = 0;
    (**(code **)(*plVar24 + 0x2f0))(plVar24,iVar12 == 1);
  }
  plVar24 = (long *)(lVar19 + 0x130);
  local_2280 = &PTR_FUN_710523d9c8;
  local_2278 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar23);
  }
  *(bool *)(lVar19 + 0x104) = iVar12 == 0;
  *(uint *)(lVar19 + 0x148) = *(byte *)(lVar19 + 0x105) ^ 1;
  FUN_7103776640(&local_2280,(long)puVar20,(byte ****)"set_parts_btn_01_sub",uVar26,ppppbVar28,
                 param_5,param_6,param_7,param_8);
  ppppbVar28 = (byte ****)&local_2230;
  FUN_7103770b30(plVar24,&local_2280,(long ****)"selector_0",ppppbVar28,param_5,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar24,0,"set_parts_sub_btn_00",ppppbVar28,param_5,param_6,param_7,param_8);
  pcVar27 = "set_parts_sub_btn_01";
  FUN_71037717d0(plVar24,1,"set_parts_sub_btn_01",ppppbVar28,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,(long)&local_2280,(byte ****)"set_parts_sub_btn_00",pcVar27,ppppbVar28,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_a0,(long ****)"set_txt_00",pcVar27,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_90,"mnu_opt_online_recommend_use",pcVar27,ppppbVar28,param_5,param_6,
                 param_7,param_8);
  uVar16 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103776640(&local_a0,(long)&local_2280,(byte ****)"set_parts_sub_btn_01",pcVar27,ppppbVar28,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_a0,(long ****)"set_txt_00",pcVar27,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_90,"mnu_opt_online_recommend_not_use",pcVar27,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  uVar16 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  plVar21 = (long *)*plVar24;
  plVar38 = (long *)plVar21[0x37];
  plVar23 = (long *)(lVar19 + 0x138);
  if (plVar38 != (long *)0x0) {
    plVar46 = plVar21 + 0x37;
    plVar47 = plVar46;
    plVar41 = plVar38;
    do {
      bVar9 = (int)plVar41[4] < 0;
      if (!bVar9) {
        plVar47 = plVar41;
      }
      plVar41 = (long *)plVar41[bVar9];
    } while (plVar41 != (long *)0x0);
    if (((plVar47 != plVar46) && ((int)plVar47[4] < 1)) &&
       (plVar47 = (long *)plVar47[5], plVar47 != (long *)0x0)) {
      (**(code **)(*plVar47 + 0x1f8))(plVar47,1);
      pcVar27 = (char *)0x0;
      (**(code **)(*plVar47 + 0x388))(plVar47,0);
      plVar21 = (long *)*plVar24;
      plVar38 = (long *)plVar21[0x37];
      plVar46 = plVar21 + 0x37;
    }
    plVar47 = plVar46;
    plVar41 = plVar38;
    if (plVar38 != (long *)0x0) {
      do {
        if (0 < (int)plVar41[4]) {
          plVar47 = plVar41;
        }
        plVar1 = plVar41 + ((int)plVar41[4] < 1);
        plVar41 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
      if (((plVar47 != plVar46) && ((int)plVar47[4] < 2)) &&
         (plVar47 = (long *)plVar47[5], plVar47 != (long *)0x0)) {
        (**(code **)(*plVar47 + 0x1f8))(plVar47,1);
        pcVar27 = (char *)0x0;
        (**(code **)(*plVar47 + 0x388))(plVar47,0);
        plVar21 = (long *)*plVar24;
        plVar38 = (long *)plVar21[0x37];
        plVar46 = plVar21 + 0x37;
      }
      plVar47 = plVar46;
      plVar41 = plVar38;
      if (plVar38 != (long *)0x0) {
        do {
          bVar9 = (int)plVar41[4] < 0;
          if (!bVar9) {
            plVar47 = plVar41;
          }
          plVar1 = plVar41 + bVar9;
          plVar41 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
        if (((plVar47 != plVar46) && ((int)plVar47[4] < 1)) &&
           (plVar47 = (long *)plVar47[5], plVar47 != (long *)0x0)) {
          (**(code **)(*plVar47 + 0x208))(plVar47,0);
          pcVar27 = (char *)0x0;
          (**(code **)(*plVar47 + 0x388))(plVar47,1);
          plVar21 = (long *)*plVar24;
          plVar38 = (long *)plVar21[0x37];
          plVar46 = plVar21 + 0x37;
        }
        plVar47 = plVar46;
        if (plVar38 != (long *)0x0) {
          do {
            if (0 < (int)plVar38[4]) {
              plVar47 = plVar38;
            }
            plVar38 = (long *)plVar38[(int)plVar38[4] < 1];
          } while (plVar38 != (long *)0x0);
          if (((plVar47 != plVar46) && ((int)plVar47[4] < 2)) &&
             (plVar38 = (long *)plVar47[5], plVar38 != (long *)0x0)) {
            (**(code **)(*plVar38 + 0x208))(plVar38,0);
            pcVar27 = (char *)0x0;
            (**(code **)(*plVar38 + 0x388))(plVar38,1);
            plVar21 = (long *)*plVar24;
          }
        }
      }
    }
  }
  (**(code **)(*plVar21 + 0x60))(plVar21,0);
  FUN_7101d47990(lVar19,*(int *)(lVar19 + 0x148),pcVar27,ppppbVar28,param_5,param_6,param_7,param_8)
  ;
  ppppbVar28 = (byte ****)&local_2230;
  FUN_7103770b30(plVar23,puVar20,(long ****)"selector_01",ppppbVar28,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar23,0,"set_parts_btn_02",ppppbVar28,param_5,param_6,param_7,param_8);
  uVar26 = 1;
  FUN_7103771a80(plVar23,0,1);
  plVar24 = *(long **)(lVar19 + 0x138);
  plVar21 = (long *)plVar24[0x37];
  if (plVar21 != (long *)0x0) {
    plVar38 = plVar24 + 0x37;
    do {
      bVar9 = (int)plVar21[4] < 0;
      if (!bVar9) {
        plVar38 = plVar21;
      }
      plVar21 = (long *)plVar21[bVar9];
    } while (plVar21 != (long *)0x0);
    if (((plVar38 != plVar24 + 0x37) && ((int)plVar38[4] < 1)) &&
       (plVar21 = (long *)plVar38[5], plVar21 != (long *)0x0)) {
      (**(code **)(*plVar21 + 0x1f8))(plVar21,1);
      uVar26 = 0;
      (**(code **)(*plVar21 + 0x388))(plVar21,0);
      plVar24 = (long *)*plVar23;
    }
  }
  (**(code **)(*plVar24 + 0x60))(plVar24,0);
  uVar16 = (ulong)local_2278;
  local_2280 = &PTR_FUN_710523d988;
  local_2278 = (long *)0x0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  uVar16 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  if (alStack_2140 == local_2120) {
    pcVar36 = *(code **)(*local_2120 + 0x20);
LAB_71018d0b8c:
    (*pcVar36)();
  }
  else if (local_2120 != (long *)0x0) {
    pcVar36 = *(code **)(*local_2120 + 0x28);
    goto LAB_71018d0b8c;
  }
  if (alStack_2170 == local_2150) {
    pcVar36 = *(code **)(*local_2150 + 0x20);
LAB_71018d0bbc:
    (*pcVar36)();
  }
  else if (local_2150 != (long *)0x0) {
    pcVar36 = *(code **)(*local_2150 + 0x28);
    goto LAB_71018d0bbc;
  }
  if (alStack_21a0 == local_2180) {
    pcVar36 = *(code **)(*local_2180 + 0x20);
LAB_71018d0bec:
    (*pcVar36)();
  }
  else if (local_2180 != (long *)0x0) {
    pcVar36 = *(code **)(*local_2180 + 0x28);
    goto LAB_71018d0bec;
  }
  if ((long *)(local_21d4 + 4) == local_21b0) {
    pcVar36 = *(code **)(*local_21b0 + 0x20);
LAB_71018d0c1c:
    (*pcVar36)();
  }
  else if (local_21b0 != (long *)0x0) {
    pcVar36 = *(code **)(*local_21b0 + 0x28);
    goto LAB_71018d0c1c;
  }
  if (alStack_2200 == local_21e0) {
    pcVar36 = *(code **)(*local_21e0 + 0x20);
LAB_71018d0c4c:
    (*pcVar36)();
  }
  else if (local_21e0 != (long *)0x0) {
    pcVar36 = *(code **)(*local_21e0 + 0x28);
    goto LAB_71018d0c4c;
  }
  FUN_7103776640(&local_2230,(long)puVar20,(byte ****)"set_parts_btn_00",uVar26,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  uVar16 = CONCAT26(uStack_2222,
                    CONCAT24(uStack_2224,CONCAT22(uStack_2226,CONCAT11(uStack_2227,local_2228))));
  FUN_7103778300(0x3f800000,uVar16,0x71042b45ef);
  local_2230 = &PTR_FUN_710523d988;
  local_2228 = 0;
  uStack_2227 = 0;
  uStack_2226 = 0;
  uStack_2224 = 0;
  uStack_2222 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103776640(&local_2230,(long)puVar20,(byte ****)"set_parts_btn_01",uVar26,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  uVar16 = CONCAT26(uStack_2222,
                    CONCAT24(uStack_2224,CONCAT22(uStack_2226,CONCAT11(uStack_2227,local_2228))));
  FUN_7103778300(0x3f800000,uVar16,0x71042b45ef);
  local_2230 = &PTR_FUN_710523d988;
  local_2228 = 0;
  uStack_2227 = 0;
  uStack_2226 = 0;
  uStack_2224 = 0;
  uStack_2222 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
  }
  pcVar27 = "off_plt_menu_lyt_00";
  if (*(char *)(*(long *)(DAT_710532f7f0 + 8) + 0x35) != '\0') {
    pcVar27 = "on_plt_menu_lyt_00";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar19 + 0x118),(long)pcVar27);
  FUN_7103778630(0,*(long *)(lVar19 + 0x118),0x7104401836);
  pppplVar17 = (long ****)0x1001;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar19 + 0x108),0,(long ****)0x1001,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  puVar43[2] = &DAT_7105333600;
  *(undefined4 *)(puVar43 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar43 + 0x6c) = DAT_7105333664;
  do {
    uVar11 = DAT_7105333650;
    cVar5 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar9) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar11 & 1) != 0);
  puVar43[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar43;
  FUN_71032caea0((long)puVar43,extraout_x1_27,pppplVar17,ppppbVar28,param_5,param_6,param_7,param_8)
  ;
  lVar19 = *(long *)(param_1 + 0x160);
  *(undefined8 **)(param_1 + 0x160) = puVar43;
  if (lVar19 != 0) {
    FUN_71032cad20(lVar19);
  }
  local_2230 = (undefined **)0x0;
  uStack_2227 = 1;
  uStack_2224 = 0;
  uStack_2222 = 0;
  local_2220 = 1;
  uStack_2214 = uStack_2214 & 0xffffff00;
  uStack_221c = 0;
  uStack_221a = 0;
  uStack_2219 = 0;
  uStack_2218 = 0;
  local_21cc[0] = 0;
  local_21d4 = (undefined1  [8])0x0;
  local_2184 = 0;
  local_218c = 0;
  memset(auStack_2144,0,0x1000);
  uStack_1144 = 1;
  local_1140 = 0;
  uStack_113c = 1;
  uStack_1130 = 0;
  local_1138 = 0;
  local_10f0 = 0x20;
  memset(auStack_10a0,0,0x1000);
  uStack_10e4 = 0;
  local_10ec = 0;
  uStack_10e8 = 0;
  local_2228 = 1;
  FUN_7103394f60((uint *)&local_2280,uVar2);
  for (uVar16 = 0; *(byte *)((long)&local_2278 + uVar16) != 0; uVar16 = uVar16 + 2) {
    local_21cc[uVar16] = *(byte *)((long)&local_2278 + uVar16);
    if (0x3e < (int)uVar16 + 1U) {
      uVar16 = (ulong)((int)uVar16 + 1);
      break;
    }
    bVar29 = *(byte *)((long)&local_2278 + uVar16 + 1);
    if (bVar29 == 0) {
      uVar16 = uVar16 + 1;
      break;
    }
    local_21cc[uVar16 + 1] = bVar29;
  }
  uVar11 = 0x811c9dc5;
  local_21cc[uVar16 & 0xffffffff] = 0;
  local_21d4._4_4_ = (int)uVar16;
  uVar31 = (uint)local_21cc[0];
  local_21d4._0_4_ = uVar11;
  if (local_21cc[0] != 0) {
    pbVar39 = local_21cc;
    do {
      pbVar39 = pbVar39 + 1;
      local_21d4._0_4_ = local_21d4._0_4_ * 0x89 ^ uVar31;
      uVar31 = (uint)*pbVar39;
    } while (uVar31 != 0);
  }
  FUN_7103395260((uint *)&local_2280,uVar2);
  for (uVar16 = 0; *(char *)((long)&local_2278 + uVar16) != '\0'; uVar16 = uVar16 + 2) {
    *(char *)((long)&uStack_2214 + uVar16) = *(char *)((long)&local_2278 + uVar16);
    if (0x3e < (int)uVar16 + 1U) {
      uVar16 = (ulong)((int)uVar16 + 1);
      break;
    }
    cVar5 = *(char *)((long)&local_2278 + uVar16 + 1);
    if (cVar5 == '\0') {
      uVar16 = uVar16 + 1;
      break;
    }
    *(char *)((long)&uStack_2214 + uVar16 + 1) = cVar5;
  }
  *(undefined1 *)((long)&uStack_2214 + (uVar16 & 0xffffffff)) = 0;
  uStack_2218 = (int)uVar16;
  uVar32 = uStack_2214 & 0xff;
  uVar31 = uVar11;
  if ((char)uStack_2214 != '\0') {
    pbVar39 = (byte *)((long)&uStack_2214 + 1);
    do {
      uVar31 = uVar31 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar39;
      pbVar39 = pbVar39 + 1;
    } while (uVar32 != 0);
  }
  uStack_221c = (undefined2)uVar31;
  uStack_221a = (undefined1)(uVar31 >> 0x10);
  uStack_2219 = (undefined1)(uVar31 >> 0x18);
  local_10ec = 1;
  uVar2 = (uVar2 & 0x7f000000) + 0xfe000000;
  uVar31 = uVar2 >> 0x18;
  uVar32 = uVar31 - 1;
  uVar33 = 0;
  local_2184 = 0;
  local_218c = 0x811c9dc5;
  if ((uVar32 & 0xff) < 5) {
    uVar33 = *(undefined4 *)(&DAT_7104544730 + (long)(char)uVar32 * 4);
  }
  local_2230 = (undefined **)CONCAT44(uVar33,(int)local_2230);
  pppplVar17 = (long ****)0x1;
  ppppbVar28 = (byte ****)0x1;
  FUN_7101af8570(*(long *)(param_1 + 0x140),(int *)&local_2230,1,1,param_5,param_6,param_7,param_8);
  local_2278 = (long *)0x5f74706f5f756e6d;
  local_2270 = 0x745f656e696c6e6f;
  uVar32 = 0x6d;
  local_2268 = 0x656c7469;
  lVar19 = 9;
  local_2264 = 0;
  do {
    uVar11 = uVar11 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_2280 + lVar19);
    lVar19 = lVar19 + 1;
  } while (uVar32 != 0);
  local_2280 = (undefined **)CONCAT44(0x14,uVar11);
  FUN_7101af90b0(*(long *)(*(long *)(param_1 + 0x140) + 0x80),(uint *)&local_2280,pppplVar17,
                 ppppbVar28,param_5,param_6,param_7,param_8);
  if (uVar31 < 7) {
    uVar16 = (ulong)*(uint *)(&DAT_7104544710 + (long)(char)(uVar2 >> 0x18) * 4);
  }
  else {
    uVar16 = 0xffffffff;
  }
  FUN_7101af2070(*(long **)(*(long *)(param_1 + 0x148) + 0x80),uVar16,pppplVar17,ppppbVar28,param_5,
                 param_6,param_7,param_8);
  bVar9 = FUN_710337af50(0x4dffff1c294a7bf4);
  uVar2 = *(uint *)(param_1 + 0x124);
  if (bVar9) {
    if (0x12 < uVar2) {
LAB_71018d1128:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar33 = 2;
  }
  else {
    if (0x12 < uVar2) goto LAB_71018d1128;
    uVar33 = 3;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0xd8) = uVar33;
  return;
}

