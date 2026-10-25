// addr:      71018907e0
// offset:    0x18907e0
// name:      FUN_71018907e0
// mangled:   
// signature: undefined8 __cdecl FUN_71018907e0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71018907e0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  ushort *puVar3;
  byte bVar4;
  size_t sVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long *plVar15;
  long ***ppplVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *__dest;
  long *plVar26;
  long *plVar27;
  long lVar28;
  undefined8 uVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
  long *plVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long ***local_218 [52];
  undefined4 local_78;
  undefined4 local_6c [3];
  
  lVar28 = *(long *)(DAT_71052c4c58 + 8);
  uVar2 = (uint)param_3;
  pppplVar9 = param_3;
  ppppbVar10 = param_4;
  FUN_71017abd00(local_218);
  local_78 = 0;
  if ((~param_2 & 0xff) == 0) {
    uVar31 = 0xff;
  }
  else {
    if (0xf < (param_2 & 0xff)) goto LAB_71018916f0;
    uVar31 = (ulong)param_2 & 0xff;
    FUN_71016b6a10(local_218,(undefined8 *)(*(long *)(lVar28 + 0x88) + uVar31 * 0x340 + 0x1dc98));
    if ((param_2 & 0xff) < 8) {
      lVar28 = *(long *)(param_1 + 0x1e8);
      lVar32 = *(long *)(lVar28 + 0x80);
      bVar7 = FUN_7101891700((long)local_218,lVar32 + uVar31 * 0x1e8 + 0x950);
      if (bVar7) {
        local_78 = *(undefined4 *)(lVar32 + uVar31 * 0x1e8 + 0xaf0);
        pppplVar9 = local_218;
        FUN_7101c6cb80(*(undefined8 **)(lVar28 + 0x80),(byte)param_2,pppplVar9,ppppbVar10,param_5,
                       param_6,param_7,param_8);
      }
    }
  }
  lVar32 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
  lVar28 = lVar32 + uVar31 * 0x1e8;
  if ((param_2 & 0xff) < 8) {
    uVar12 = (uint)*(byte *)(lVar28 + 0xaf9);
    if ((uint)*(byte *)(lVar28 + 0xaf8) == (uVar2 & 0xff)) {
LAB_71018908f4:
      if (uVar12 == ((uint)param_4 & 0xff)) {
        return 2;
      }
    }
  }
  else {
    uVar12 = 0;
    if (((ulong)param_3 & 0xff) == 0) goto LAB_71018908f4;
  }
  switch(uVar2 & 0xff) {
  case 1:
    lVar28 = lVar32 + 0x4c0;
    break;
  case 2:
    lVar28 = lVar32 + 0x510;
    break;
  case 3:
    lVar28 = lVar32 + 0x560;
    break;
  case 4:
    lVar28 = lVar32 + 0x5b0;
    break;
  case 5:
    lVar28 = lVar32 + 0x600;
    break;
  default:
    goto LAB_7101890a08;
  }
  if ((((ulong)param_4 & 0xff) < (ulong)(*(long *)(lVar28 + 0x40) - *(long *)(lVar28 + 0x38) >> 1))
     && (*(char *)(*(long *)(lVar28 + 0x38) + ((ulong)param_4 & 0xff) * 2) != '\0')) {
    return 3;
  }
  if ((7 < (param_2 & 0xff)) ||
     (bVar4 = *(byte *)(lVar32 + uVar31 * 0x1e8 + 0xafc), uVar11 = (ulong)bVar4, bVar4 == 0)) {
LAB_7101890a08:
    return 0;
  }
  if ((uVar2 & 0xff) != 5) {
    if ((uVar2 & 0xff) == 1) {
      uVar13 = *(ulong *)(lVar32 + uVar31 * 0x1e8 + 0x968);
      if ((uVar13 & 0xff00000000000000) != 0xc100000000000000) {
        return 0;
      }
      if ((uVar13 & 0xffffffffff) == 0) {
        return 0;
      }
    }
    lVar28 = lVar32 + uVar31 * 0x1e8;
    FUN_7101c60880(lVar32,(ulong)param_2,(long ****)((ulong)param_3 & 0xffffffff),
                   (byte ****)((ulong)param_4 & 0xffffffff),(uint)*(byte *)(lVar28 + 0xaf8),
                   (ulong)*(byte *)(lVar28 + 0xaf9),uVar11,param_8);
    return 0;
  }
  lVar28 = *(long *)(lVar32 + 0x450) + uVar31 * 0x1e0;
  plVar8 = *(long **)(*(long *)(lVar28 + 0x100) + 8);
  if ((plVar8 == (long *)0x0) || (uVar13 = (**(code **)(*plVar8 + 0x138))(), (uVar13 & 1) != 0)) {
    FUN_710377aee0(0x3f800000,lVar28 + 0xf8);
  }
  lVar28 = *(long *)(lVar32 + 0x450) + uVar31 * 0x1e0;
  if (*(char *)(lVar28 + 0x19b) != '\0') {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar32 + 0x450) + uVar31 * 0x1e0 + 0x30),
                   0x71042c4e37);
  }
  *(undefined1 *)(lVar28 + 0x19b) = 0;
  puVar33 = *(undefined8 **)(lVar32 + 0x1b00);
  puVar35 = *(undefined8 **)(lVar32 + 0x1af8);
  lVar28 = (long)puVar33 - (long)puVar35;
  uVar36 = lVar28 >> 3;
  uVar13 = 0;
  if (lVar28 != 0) {
    uVar13 = uVar36 * 0x555 - 1;
  }
  uVar18 = *(ulong *)(lVar32 + 0x1b10);
  uVar21 = *(long *)(lVar32 + 0x1b18) + uVar18;
  if (uVar13 != uVar21) goto LAB_71018915dc;
  if (uVar18 < 0x555) {
    puVar35 = *(undefined8 **)(lVar32 + 0x1b08);
    lVar19 = (long)puVar35 - *(long *)(lVar32 + 0x1af0);
    if (uVar36 < (ulong)(lVar19 >> 3)) {
      lVar28 = FUN_710392e290(0x10,0xfff,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8);
      if (puVar35 == puVar33) {
        if (lVar28 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            local_218[0] = (long ***)0xfff;
            pppplVar9 = local_218;
            uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar13 & 1) != 0) &&
               (lVar28 = FUN_710392e290(0x10,0xfff,pppplVar9,ppppbVar10,param_5,param_6,uVar11,
                                        param_8), lVar28 != 0)) goto LAB_7101890bb4;
          }
          lVar28 = 0;
        }
LAB_7101890bb4:
        puVar33 = *(undefined8 **)(lVar32 + 0x1af8);
        puVar35 = puVar33;
        if (puVar33 == *(undefined8 **)(lVar32 + 0x1af0)) {
          puVar24 = *(undefined8 **)(lVar32 + 0x1b00);
          puVar35 = *(undefined8 **)(lVar32 + 0x1b08);
          if (puVar24 < puVar35) {
            lVar17 = (long)puVar35 - (long)puVar24 >> 3;
            lVar19 = lVar17 + 2;
            if (-1 < lVar17 + 1) {
              lVar19 = lVar17 + 1;
            }
            pppplVar9 = (long ****)((long)puVar24 - (long)puVar33);
            puVar24 = puVar24 + (lVar19 >> 1);
            puVar35 = puVar24;
            if (pppplVar9 != (long ****)0x0) {
              puVar35 = (undefined8 *)((long)puVar24 - (long)pppplVar9);
              memmove(puVar35,puVar33,(size_t)pppplVar9);
              puVar24 = (undefined8 *)(*(long *)(lVar32 + 0x1b00) + (lVar19 >> 1) * 8);
            }
            *(undefined8 **)(lVar32 + 0x1af8) = puVar35;
            *(undefined8 **)(lVar32 + 0x1b00) = puVar24;
          }
          else {
            lVar19 = (long)puVar35 - (long)*(undefined8 **)(lVar32 + 0x1af0);
            uVar13 = lVar19 >> 2;
            if (lVar19 == 0) {
              uVar13 = 1;
            }
            if (uVar13 == 0) goto LAB_71018911f8;
            if (uVar13 >> 0x3d != 0) goto LAB_71018916f0;
            ppplVar16 = (long ***)(uVar13 * 8);
            if (ppplVar16 == (long ***)0x0) {
              ppplVar16 = (long ***)0x1;
            }
            lVar19 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,
                                    param_8);
            if (lVar19 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_6c[0] = 0;
                pppplVar9 = local_218;
                local_218[0] = ppplVar16;
                uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                if (((uVar36 & 1) != 0) &&
                   (lVar19 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,
                                            uVar11,param_8), lVar19 != 0)) goto LAB_71018911fc;
              }
LAB_71018911f8:
              lVar19 = 0;
            }
LAB_71018911fc:
            uVar36 = uVar13 + 3 >> 2;
            puVar35 = (undefined8 *)(lVar19 + uVar36 * 8);
            puVar25 = puVar35;
            if (puVar33 != puVar24) {
              uVar18 = (long)puVar24 + (-8 - (long)puVar33);
              uVar22 = uVar18 >> 3;
              uVar2 = (int)uVar22 + 1;
              uVar21 = (ulong)uVar2 & 3;
              if ((uVar2 & 3) != 0) {
                lVar17 = -uVar21;
                puVar14 = puVar33;
                do {
                  lVar17 = lVar17 + 1;
                  *puVar25 = *puVar14;
                  puVar25 = puVar25 + 1;
                  puVar14 = puVar14 + 1;
                } while (lVar17 != 0);
                puVar33 = puVar33 + uVar21;
                puVar25 = (undefined8 *)(lVar19 + (uVar36 + uVar21) * 8);
              }
              if (0x17 < uVar18) {
                do {
                  *puVar25 = *puVar33;
                  puVar25[1] = puVar33[1];
                  puVar25[2] = puVar33[2];
                  puVar14 = puVar33 + 3;
                  puVar33 = puVar33 + 4;
                  puVar25[3] = *puVar14;
                  puVar25 = puVar25 + 4;
                } while (puVar33 != puVar24);
              }
              puVar33 = *(undefined8 **)(lVar32 + 0x1af0);
              puVar25 = (undefined8 *)(lVar19 + (uVar22 + uVar36 + 1) * 8);
            }
            *(long *)(lVar32 + 0x1af0) = lVar19;
            *(undefined8 **)(lVar32 + 0x1af8) = puVar35;
            *(undefined8 **)(lVar32 + 0x1b00) = puVar25;
            *(ulong *)(lVar32 + 0x1b08) = lVar19 + uVar13 * 8;
            if (puVar33 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar33);
              puVar35 = *(undefined8 **)(lVar32 + 0x1af8);
            }
          }
        }
        puVar35[-1] = lVar28;
        puVar24 = *(undefined8 **)(lVar32 + 0x1af8);
        *(undefined8 **)(lVar32 + 0x1af8) = puVar24 + -1;
        puVar33 = *(undefined8 **)(lVar32 + 0x1b00);
        uVar29 = puVar24[-1];
        *(undefined8 **)(lVar32 + 0x1af8) = puVar24;
        if (puVar33 != *(undefined8 **)(lVar32 + 0x1b08)) goto LAB_71018915bc;
        puVar25 = *(undefined8 **)(lVar32 + 0x1af0);
        if (puVar25 <= puVar24 && (long)puVar24 - (long)puVar25 != 0) {
          lVar19 = (long)puVar24 - (long)puVar25 >> 3;
          lVar28 = lVar19 + 2;
          if (-1 < lVar19 + 1) {
            lVar28 = lVar19 + 1;
          }
          sVar5 = (long)puVar33 - (long)puVar24;
          lVar28 = lVar28 >> 1;
          puVar33 = puVar24 + -lVar28;
          goto joined_r0x0071018914a0;
        }
        lVar28 = (long)*(undefined8 **)(lVar32 + 0x1b08) - (long)puVar25;
        uVar13 = lVar28 >> 2;
        if (lVar28 == 0) {
          uVar13 = 1;
        }
        if (uVar13 == 0) goto LAB_7101891530;
        if (uVar13 >> 0x3d != 0) goto LAB_71018916f0;
        ppplVar16 = (long ***)(uVar13 * 8);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar28 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8);
        if (lVar28 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            pppplVar9 = local_218;
            local_218[0] = ppplVar16;
            uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar36 & 1) != 0) &&
               (lVar28 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,
                                        param_8), lVar28 != 0)) goto LAB_7101891534;
          }
LAB_7101891530:
          lVar28 = 0;
        }
LAB_7101891534:
        uVar11 = uVar13 >> 2;
        puVar14 = (undefined8 *)(lVar28 + uVar11 * 8);
        lVar19 = lVar28 + uVar13 * 8;
        puVar6 = puVar14;
        if (puVar24 != puVar33) {
          lVar17 = -8 - (long)puVar24;
          uVar36 = (long)puVar33 + (-0x10 - (long)(puVar24 + -1));
          uVar2 = ((uint)(uVar36 >> 3) & 0x1fffffff) + 1;
          uVar13 = (ulong)uVar2 & 3;
          puVar35 = puVar14;
          if ((uVar2 & 3) != 0) {
            lVar23 = -uVar13;
            puVar25 = puVar24;
            do {
              lVar23 = lVar23 + 1;
              *puVar35 = *puVar25;
              puVar35 = puVar35 + 1;
              puVar25 = puVar25 + 1;
            } while (lVar23 != 0);
            puVar24 = puVar24 + uVar13;
            puVar35 = (undefined8 *)(lVar28 + (uVar11 + uVar13) * 8);
          }
          if (0x17 < uVar36) {
            do {
              *puVar35 = *puVar24;
              puVar35[1] = puVar24[1];
              puVar35[2] = puVar24[2];
              puVar25 = puVar24 + 3;
              puVar24 = puVar24 + 4;
              puVar35[3] = *puVar25;
              puVar35 = puVar35 + 4;
            } while (puVar24 != puVar33);
          }
          lVar17 = ((ulong)((long)puVar33 + lVar17) >> 3) + 1 + uVar11;
          goto LAB_7101891370;
        }
        goto LAB_710189159c;
      }
      if (lVar28 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          local_218[0] = (long ***)0xfff;
          pppplVar9 = local_218;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar13 & 1) != 0) &&
             (lVar28 = FUN_710392e290(0x10,0xfff,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8
                                     ), lVar28 != 0)) goto LAB_7101890f68;
        }
        lVar28 = 0;
      }
LAB_7101890f68:
      plVar34 = *(long **)(lVar32 + 0x1b00);
      plVar8 = plVar34;
      if (plVar34 == *(long **)(lVar32 + 0x1b08)) {
        plVar26 = *(long **)(lVar32 + 0x1af8);
        plVar27 = *(long **)(lVar32 + 0x1af0);
        if (plVar27 <= plVar26 && (long)plVar26 - (long)plVar27 != 0) {
          lVar17 = (long)plVar26 - (long)plVar27 >> 3;
          lVar19 = lVar17 + 2;
          if (-1 < lVar17 + 1) {
            lVar19 = lVar17 + 1;
          }
          sVar5 = (long)plVar34 - (long)plVar26;
          plVar34 = plVar26 + -(lVar19 >> 1);
          plVar8 = plVar34;
          if (sVar5 != 0) {
            memmove(plVar34,plVar26,sVar5);
            plVar8 = (long *)(*(long *)(lVar32 + 0x1af8) + (lVar19 >> 1) * -8);
          }
          *(long **)(lVar32 + 0x1b00) = plVar34 + ((long)sVar5 >> 3);
          *(long **)(lVar32 + 0x1af8) = plVar8;
          plVar34[(long)sVar5 >> 3] = lVar28;
          goto LAB_71018915c0;
        }
        lVar19 = (long)*(long **)(lVar32 + 0x1b08) - (long)plVar27;
        uVar13 = lVar19 >> 2;
        if (lVar19 == 0) {
          uVar13 = 1;
        }
        if (uVar13 == 0) goto LAB_71018912cc;
        if (uVar13 >> 0x3d != 0) goto LAB_71018916f0;
        ppplVar16 = (long ***)(uVar13 * 8);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar19 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8);
        if (lVar19 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            pppplVar9 = local_218;
            local_218[0] = ppplVar16;
            uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar36 & 1) != 0) &&
               (lVar19 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,
                                        param_8), lVar19 != 0)) goto LAB_71018912d0;
          }
LAB_71018912cc:
          lVar19 = 0;
        }
LAB_71018912d0:
        uVar11 = uVar13 >> 2;
        plVar30 = (long *)(lVar19 + uVar11 * 8);
        plVar8 = plVar30;
        if (plVar26 != plVar34) {
          uVar21 = (long)plVar34 + (-8 - (long)plVar26);
          uVar18 = uVar21 >> 3;
          uVar2 = (int)uVar18 + 1;
          uVar36 = (ulong)uVar2 & 3;
          if ((uVar2 & 3) != 0) {
            lVar17 = -uVar36;
            plVar27 = plVar26;
            do {
              lVar17 = lVar17 + 1;
              *plVar8 = *plVar27;
              plVar8 = plVar8 + 1;
              plVar27 = plVar27 + 1;
            } while (lVar17 != 0);
            plVar26 = plVar26 + uVar36;
            plVar8 = (long *)(lVar19 + (uVar11 + uVar36) * 8);
          }
          if (0x17 < uVar21) {
            do {
              *plVar8 = *plVar26;
              plVar8[1] = plVar26[1];
              plVar8[2] = plVar26[2];
              plVar27 = plVar26 + 3;
              plVar26 = plVar26 + 4;
              plVar8[3] = *plVar27;
              plVar8 = plVar8 + 4;
            } while (plVar26 != plVar34);
          }
          plVar27 = *(long **)(lVar32 + 0x1af0);
          plVar8 = (long *)(lVar19 + (uVar11 + uVar18 + 1) * 8);
        }
        *(long *)(lVar32 + 0x1af0) = lVar19;
        *(long **)(lVar32 + 0x1af8) = plVar30;
        *(long **)(lVar32 + 0x1b00) = plVar8;
        *(ulong *)(lVar32 + 0x1b08) = lVar19 + uVar13 * 8;
        if (plVar27 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar27);
          plVar8 = *(long **)(lVar32 + 0x1b00);
        }
      }
      *plVar8 = lVar28;
      goto LAB_71018915c0;
    }
    uVar13 = lVar19 >> 2;
    if (lVar19 == 0) {
      uVar13 = 1;
    }
    if (uVar13 == 0) goto LAB_7101890c44;
    if (uVar13 >> 0x3d != 0) goto LAB_71018916f0;
    ppplVar16 = (long ***)(uVar13 * 8);
    if (ppplVar16 == (long ***)0x0) {
      ppplVar16 = (long ***)0x1;
    }
    plVar8 = (long *)FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,
                                    param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        pppplVar9 = local_218;
        local_218[0] = ppplVar16;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar21 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,
                                            uVar11,param_8), plVar8 != (long *)0x0))
        goto LAB_7101890c48;
      }
LAB_7101890c44:
      plVar8 = (long *)0x0;
    }
LAB_7101890c48:
    plVar34 = plVar8 + uVar13;
    lVar19 = FUN_710392e290(0x10,0xfff,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8);
    if (lVar19 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        local_218[0] = (long ***)0xfff;
        pppplVar9 = local_218;
        uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar21 & 1) != 0) &&
           (lVar19 = FUN_710392e290(0x10,0xfff,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8),
           lVar19 != 0)) goto LAB_7101890ca0;
      }
      lVar19 = 0;
    }
LAB_7101890ca0:
    plVar26 = plVar8 + uVar36;
    plVar27 = plVar8;
    if (uVar36 == uVar13) {
      if (lVar28 < 1) {
        uVar13 = lVar28 >> 2;
        if (lVar28 == 0) {
          uVar13 = 1;
        }
        if (uVar13 == 0) {
          plVar27 = (long *)0x0;
        }
        else {
          if (uVar13 >> 0x3d != 0) {
LAB_71018916f0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          ppplVar16 = (long ***)(uVar13 * 8);
          if (ppplVar16 == (long ***)0x0) {
            ppplVar16 = (long ***)0x1;
          }
          plVar27 = (long *)FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,
                                           uVar11,param_8);
          if (plVar27 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              pppplVar9 = local_218;
              local_218[0] = ppplVar16;
              uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar36 & 1) != 0) &&
                 (plVar27 = (long *)FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,
                                                   param_6,uVar11,param_8), plVar27 != (long *)0x0))
              goto LAB_7101891380;
            }
            plVar27 = (long *)0x0;
          }
        }
LAB_7101891380:
        plVar26 = plVar27 + (uVar13 >> 2);
        plVar34 = plVar27 + uVar13;
        if ((plVar8 != (long *)0x0) && (plVar8 != (long *)0x0)) {
          FUN_710392eb40((ulong)plVar8);
        }
      }
      else {
        uVar13 = uVar36 + 2;
        if (-1 < (long)(uVar36 + 1)) {
          uVar13 = uVar36 + 1;
        }
        plVar26 = (long *)((long)plVar26 + (uVar13 & 0x3ffffffffffffffe) * -4);
      }
    }
    plVar8 = plVar26 + 1;
    *plVar26 = lVar19;
    plVar30 = *(long **)(lVar32 + 0x1b00);
    if (plVar30 != *(long **)(lVar32 + 0x1af8)) {
      do {
        __dest = plVar26;
        if (plVar26 == plVar27) {
          if (plVar8 < plVar34) {
            lVar28 = (long)plVar34 - (long)plVar8 >> 3;
            uVar13 = lVar28 + 2;
            if (-1 < lVar28 + 1) {
              uVar13 = lVar28 + 1;
            }
            pppplVar9 = (long ****)((long)plVar8 - (long)plVar26);
            plVar8 = (long *)((long)plVar8 + (uVar13 & 0x3ffffffffffffffe) * 4);
            __dest = plVar8;
            if (pppplVar9 != (long ****)0x0) {
              __dest = (long *)((long)plVar8 - (long)pppplVar9);
              memmove(__dest,plVar26,(size_t)pppplVar9);
            }
          }
          else {
            uVar13 = (long)plVar34 - (long)plVar27 >> 2;
            if ((long)plVar34 - (long)plVar27 == 0) {
              uVar13 = 1;
            }
            if (uVar13 == 0) {
LAB_7101890dc4:
              plVar27 = (long *)0x0;
            }
            else {
              if (uVar13 >> 0x3d != 0) goto LAB_71018916f0;
              ppplVar16 = (long ***)(uVar13 * 8);
              if (ppplVar16 == (long ***)0x0) {
                ppplVar16 = (long ***)0x1;
              }
              plVar27 = (long *)FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,
                                               uVar11,param_8);
              if (plVar27 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_6c[0] = 0;
                  pppplVar9 = local_218;
                  local_218[0] = ppplVar16;
                  uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                  if (((uVar36 & 1) != 0) &&
                     (plVar27 = (long *)FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,
                                                       param_6,uVar11,param_8),
                     plVar27 != (long *)0x0)) goto LAB_7101890dc8;
                }
                goto LAB_7101890dc4;
              }
            }
LAB_7101890dc8:
            plVar34 = plVar27 + uVar13;
            uVar13 = uVar13 + 3 >> 2;
            __dest = plVar27 + uVar13;
            plVar20 = __dest;
            if (plVar26 != plVar8) {
              uVar18 = (long)plVar8 + (-8 - (long)plVar26);
              uVar21 = uVar18 >> 3;
              uVar2 = (int)uVar21 + 1;
              uVar36 = (ulong)uVar2 & 3;
              plVar15 = __dest;
              plVar20 = plVar26;
              if ((uVar2 & 3) != 0) {
                lVar28 = -uVar36;
                plVar20 = __dest;
                plVar15 = plVar26;
                do {
                  lVar28 = lVar28 + 1;
                  *plVar20 = *plVar15;
                  plVar20 = plVar20 + 1;
                  plVar15 = plVar15 + 1;
                } while (lVar28 != 0);
                plVar15 = plVar27 + uVar13 + uVar36;
                plVar20 = plVar26 + uVar36;
              }
              if (0x17 < uVar18) {
                uVar36 = (long)plVar8 + (-0x20 - (long)plVar20);
                if (((uint)uVar36 >> 5 & 1) == 0) {
                  *plVar15 = *plVar20;
                  plVar15[1] = plVar20[1];
                  plVar15[2] = plVar20[2];
                  plVar15[3] = plVar20[3];
                  plVar15 = plVar15 + 4;
                  plVar20 = plVar20 + 4;
                }
                if (0x1f < uVar36) {
                  do {
                    *plVar15 = *plVar20;
                    plVar15[1] = plVar20[1];
                    plVar15[2] = plVar20[2];
                    plVar15[3] = plVar20[3];
                    plVar15[4] = plVar20[4];
                    plVar15[5] = plVar20[5];
                    plVar15[6] = plVar20[6];
                    plVar1 = plVar20 + 7;
                    plVar20 = plVar20 + 8;
                    plVar15[7] = *plVar1;
                    plVar15 = plVar15 + 8;
                  } while (plVar20 != plVar8);
                }
              }
              plVar20 = plVar27 + uVar21 + uVar13 + 1;
            }
            plVar8 = plVar20;
            if (plVar26 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar26);
            }
          }
        }
        plVar30 = plVar30 + -1;
        plVar26 = __dest + -1;
        *plVar26 = *plVar30;
      } while (plVar30 != *(long **)(lVar32 + 0x1af8));
    }
    uVar11 = *(ulong *)(lVar32 + 0x1af0);
    *(long **)(lVar32 + 0x1af0) = plVar27;
    *(long **)(lVar32 + 0x1af8) = plVar26;
    *(long **)(lVar32 + 0x1b00) = plVar8;
    *(long **)(lVar32 + 0x1b08) = plVar34;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  else {
    *(ulong *)(lVar32 + 0x1b10) = uVar18 - 0x555;
    puVar24 = puVar35 + 1;
    uVar29 = *puVar35;
    puVar14 = *(undefined8 **)(lVar32 + 0x1b08);
    *(undefined8 **)(lVar32 + 0x1af8) = puVar24;
    if (puVar14 == puVar33) {
      puVar25 = *(undefined8 **)(lVar32 + 0x1af0);
      if (puVar24 < puVar25 || (long)puVar24 - (long)puVar25 == 0) {
        uVar13 = (long)puVar14 - (long)puVar25 >> 2;
        if ((long)puVar14 - (long)puVar25 == 0) {
          uVar13 = 1;
        }
        if (uVar13 == 0) goto LAB_7101890ff0;
        if (uVar13 >> 0x3d != 0) goto LAB_71018916f0;
        ppplVar16 = (long ***)(uVar13 * 8);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar28 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,param_8);
        if (lVar28 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            pppplVar9 = local_218;
            local_218[0] = ppplVar16;
            uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar36 & 1) != 0) &&
               (lVar28 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar10,param_5,param_6,uVar11,
                                        param_8), lVar28 != 0)) goto LAB_7101890ff4;
          }
LAB_7101890ff0:
          lVar28 = 0;
        }
LAB_7101890ff4:
        uVar11 = uVar13 >> 2;
        puVar14 = (undefined8 *)(lVar28 + uVar11 * 8);
        lVar19 = lVar28 + uVar13 * 8;
        puVar6 = puVar14;
        if (puVar24 != puVar33) {
          uVar36 = (long)puVar33 + (-0x10 - (long)puVar35);
          lVar17 = -8 - (long)puVar24;
          uVar2 = ((uint)(uVar36 >> 3) & 0x1fffffff) + 1;
          uVar13 = (ulong)uVar2 & 3;
          puVar25 = puVar14;
          if ((uVar2 & 3) != 0) {
            lVar23 = -uVar13;
            do {
              lVar23 = lVar23 + 1;
              *puVar25 = *puVar24;
              puVar25 = puVar25 + 1;
              puVar24 = puVar24 + 1;
            } while (lVar23 != 0);
            puVar24 = puVar35 + uVar13 + 1;
            puVar25 = (undefined8 *)(lVar28 + (uVar11 + uVar13) * 8);
          }
          if (0x17 < uVar36) {
            do {
              *puVar25 = *puVar24;
              puVar25[1] = puVar24[1];
              puVar25[2] = puVar24[2];
              puVar35 = puVar24 + 3;
              puVar24 = puVar24 + 4;
              puVar25[3] = *puVar35;
              puVar25 = puVar25 + 4;
            } while (puVar24 != puVar33);
          }
          lVar17 = ((ulong)((long)puVar33 + lVar17) >> 3) + 1 + uVar11;
LAB_7101891370:
          puVar25 = *(undefined8 **)(lVar32 + 0x1af0);
          puVar6 = (undefined8 *)(lVar28 + lVar17 * 8);
        }
LAB_710189159c:
        puVar33 = puVar6;
        *(long *)(lVar32 + 0x1af0) = lVar28;
        *(undefined8 **)(lVar32 + 0x1af8) = puVar14;
        *(undefined8 **)(lVar32 + 0x1b00) = puVar33;
        *(long *)(lVar32 + 0x1b08) = lVar19;
        if (puVar25 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar25);
          puVar33 = *(undefined8 **)(lVar32 + 0x1b00);
        }
      }
      else {
        lVar19 = (long)puVar24 - (long)puVar25 >> 3;
        lVar28 = lVar19 + 2;
        if (-1 < lVar19 + 1) {
          lVar28 = lVar19 + 1;
        }
        sVar5 = (long)puVar14 - (long)puVar24;
        lVar28 = lVar28 >> 1;
        puVar33 = puVar24 + -lVar28;
joined_r0x0071018914a0:
        puVar35 = puVar33;
        if (sVar5 != 0) {
          memmove(puVar33,puVar24,sVar5);
          puVar35 = (undefined8 *)(*(long *)(lVar32 + 0x1af8) + lVar28 * -8);
        }
        puVar33 = puVar33 + ((long)sVar5 >> 3);
        *(undefined8 **)(lVar32 + 0x1b00) = puVar33;
        *(undefined8 **)(lVar32 + 0x1af8) = puVar35;
      }
    }
LAB_71018915bc:
    *puVar33 = uVar29;
LAB_71018915c0:
    *(long *)(lVar32 + 0x1b00) = *(long *)(lVar32 + 0x1b00) + 8;
  }
  uVar21 = *(long *)(lVar32 + 0x1b10) + *(long *)(lVar32 + 0x1b18);
  puVar35 = *(undefined8 **)(lVar32 + 0x1af8);
LAB_71018915dc:
  puVar3 = (ushort *)(puVar35[uVar21 / 0x555] + (uVar21 % 0x555) * 3);
  *(char *)(puVar3 + 1) = (char)param_4;
  *puVar3 = (ushort)uVar31 | 0x500;
  *(long *)(lVar32 + 0x1b18) = *(long *)(lVar32 + 0x1b18) + 1;
  return 0;
}

