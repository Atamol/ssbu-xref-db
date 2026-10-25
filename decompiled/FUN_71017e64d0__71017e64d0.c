// addr:      71017e64d0
// offset:    0x17e64d0
// name:      FUN_71017e64d0
// mangled:   
// signature: undefined __cdecl FUN_71017e64d0(long param_1, uint param_2)


/* WARNING: Removing unreachable block (ram,0x0071017e7804) */

void FUN_71017e64d0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  long *********ppppppppplVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar13;
  ulong *puVar14;
  char *pcVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *puVar20;
  byte *pbVar21;
  ulong *puVar22;
  int iVar23;
  long lVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  long ********pppppppplVar32;
  long lVar33;
  uint local_3c0 [2];
  uint local_3b8 [2];
  uint local_3b0 [2];
  undefined1 local_3a8 [256];
  ushort local_2a8;
  ulong local_2a0;
  long ********local_298;
  long *********local_290;
  ulong local_288;
  ulong uStack_280;
  ulong local_278;
  ulong uStack_270;
  ulong local_268;
  ulong uStack_260;
  ulong local_258;
  ulong uStack_250;
  ushort local_1a0;
  uint local_198 [2];
  uint local_190 [2];
  uint local_188 [2];
  uint local_180 [2];
  uint local_178 [2];
  undefined8 local_170;
  ushort local_70;
  
  if (*(int *)(param_1 + 0x58) == 0x2d) {
    if ((DAT_710523d00c < 0xe) && ((0x7feU >> (ulong)(DAT_710523d00c & 0x1f) & 1) == 0)) {
LAB_71017e6548:
      uVar27 = *(uint *)(param_1 + 100);
    }
    else {
      uVar27 = *(uint *)(param_1 + 100);
      if (uVar27 == 0) {
        uVar27 = 1;
      }
      else if (uVar27 == 1) goto LAB_71017e6540;
    }
  }
  else {
    if (2 < *(int *)(param_1 + 0x58) - 0x48U) goto LAB_71017e6548;
LAB_71017e6540:
    uVar27 = 0;
  }
  cVar3 = *(char *)(param_1 + 0x7d);
  cVar4 = *(char *)(param_1 + 0x7f);
  if (param_2 - 0x48 < 3) {
    pppplVar12 = (long ****)(ulong)(cVar3 != '\0');
    ppppppppplVar10 = (long *********)0x0;
    ppppbVar11 = (byte ****)0x0;
    FUN_71017df420((undefined1 *)&local_170,param_2,0,0,(ulong)pppplVar12,in_x5,in_x6,in_x7);
    uVar28 = (uint)local_170 & 0xff;
    if (local_170._0_1_ == (CharInfoAccessor)0x0) {
      uVar19 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar17 = 0xffffffff;
      pbVar21 = (byte *)((ulong)&local_170 | 1);
      do {
        uVar29 = uVar28 + 0x20;
        if (0x19 < uVar28 - 0x41) {
          uVar29 = uVar28;
        }
        uVar17 = (&DAT_7104754084)[(uVar29 ^ uVar17) & 0xff] ^ uVar17 >> 8;
        uVar28 = (uint)*pbVar21;
        uVar13 = uVar13 + 0x100000000;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      uVar19 = (ulong)~uVar17;
      uVar13 = uVar13 & 0xff00000000;
    }
    uVar13 = uVar13 | uVar19;
    if (uVar13 == 0) {
LAB_71017e6790:
      uVar28 = 0xffffff;
    }
    else {
      puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar28 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar19 = (ulong)uVar28;
      puVar14 = puVar20 + uVar19;
      puVar22 = puVar20;
      if (uVar28 != 0) {
        do {
          uVar30 = uVar19;
          if ((long)uVar19 < 0) {
            uVar30 = uVar19 + 1;
          }
          uVar30 = (long)uVar30 >> 1;
          puVar20 = puVar22 + uVar30 + 1;
          uVar19 = uVar19 + ~uVar30;
          if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
            puVar20 = puVar22;
            uVar19 = uVar30;
          }
          puVar22 = puVar20;
        } while (uVar19 != 0);
      }
      if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e6790;
      uVar28 = (uint)(*puVar20 >> 0x28);
    }
    puVar7 = FUN_7103540d50(DAT_7105332f20,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                            in_x7);
    lVar24 = DAT_7105332f20;
    puVar8 = &DAT_7104471f50;
    if (puVar7 != (uint *)0x0) {
      puVar8 = puVar7;
    }
    uVar28 = *puVar8;
    uVar13 = (ulong)uVar28;
    uVar17 = param_2 * 0x2a;
    local_178[0] = uVar28;
    if (uVar28 == 0xffffff) {
      FUN_71017e2df0(param_1,(long ********)(ulong)uVar17,(long *********)local_178,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
    }
    else {
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar24,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        else {
          FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      ppppppppplVar10 = (long *********)local_178;
      FUN_71017e2df0(param_1,(long ********)(ulong)uVar17,ppppppppplVar10,ppppbVar11,pppplVar12,
                     in_x5,in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
      local_178[0] = 0xffffff;
    }
    ppppbVar11 = (byte ****)(ulong)*(uint *)(param_1 + 0x6c);
    pppplVar12 = (long ****)(ulong)*(uint *)(param_1 + 0x74);
    ppppppppplVar10 = (long *********)&DAT_00000013;
    FUN_71017dfa60((undefined1 *)&local_170,param_2,0x13,(ulong)ppppbVar11,(ulong)pppplVar12,in_x5,
                   in_x6,in_x7);
    uVar29 = (uint)local_170 & 0xff;
    if (local_170._0_1_ == (CharInfoAccessor)0x0) {
      uVar30 = 0;
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      uVar18 = 0xffffffff;
      pbVar21 = (byte *)((ulong)&local_170 | 1);
      do {
        uVar2 = uVar29 + 0x20;
        if (0x19 < uVar29 - 0x41) {
          uVar2 = uVar29;
        }
        uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar29 = (uint)*pbVar21;
        uVar19 = uVar19 + 0x100000000;
        pbVar21 = pbVar21 + 1;
      } while (uVar29 != 0);
      uVar30 = (ulong)~uVar18;
      uVar19 = uVar19 & 0xff00000000;
    }
    uVar19 = uVar19 | uVar30;
    if (uVar19 == 0) {
LAB_71017e6a98:
      uVar29 = 0xffffff;
    }
    else {
      puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar29 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar30 = (ulong)uVar29;
      puVar14 = puVar20 + uVar30;
      puVar22 = puVar20;
      if (uVar29 != 0) {
        do {
          uVar31 = uVar30;
          if ((long)uVar30 < 0) {
            uVar31 = uVar30 + 1;
          }
          uVar31 = (long)uVar31 >> 1;
          puVar20 = puVar22 + uVar31 + 1;
          uVar30 = uVar30 + ~uVar31;
          if (uVar19 <= (puVar22[uVar31] & 0xffffffffff)) {
            puVar20 = puVar22;
            uVar30 = uVar31;
          }
          puVar22 = puVar20;
        } while (uVar30 != 0);
      }
      if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar19)) goto LAB_71017e6a98;
      uVar29 = (uint)(*puVar20 >> 0x28);
    }
    puVar7 = FUN_7103540d50(DAT_7105332f20,uVar29,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                            in_x7);
    lVar24 = DAT_7105332f20;
    puVar8 = &DAT_7104471f50;
    if (puVar7 != (uint *)0x0) {
      puVar8 = puVar7;
    }
    uVar29 = *puVar8;
    uVar19 = (ulong)uVar29;
    local_170._0_4_ = uVar29;
    if (uVar29 == 0xffffff) {
      ppppppppplVar10 = (long *********)&local_170;
      FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 2),ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
    }
    else {
      if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar24,uVar29,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        else {
          FUN_71035432d0((int *)(lVar33 + uVar19 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      ppppppppplVar10 = (long *********)&local_170;
      FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 2),ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar19 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
      lVar24 = DAT_7105332f20;
      local_170._0_4_ = 0xffffff;
      if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar19 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
    }
    lVar24 = *(long *)(*DAT_710593b6a0 + 0x24d0);
    uVar19 = (ulong)*(ushort *)(param_1 + 0x68);
    uVar30 = (*(long *)(*DAT_710593b6a0 + 0x24d8) - lVar24 >> 3) * 0x4ec4ec4ec4ec4ec5;
    if (uVar30 < uVar19 || uVar30 - uVar19 == 0) {
LAB_71017e8304:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar14 = (ulong *)(lVar24 + uVar19 * 0x68);
    local_290 = (long *********)puVar14[2];
    local_2a0 = *puVar14;
    local_298 = (long ********)puVar14[1];
    uVar29 = *(uint *)(param_1 + 0x70);
    local_288 = puVar14[3];
    uStack_280 = puVar14[4];
    local_278 = puVar14[5];
    uStack_270 = puVar14[6];
    local_268 = puVar14[7];
    uStack_260 = puVar14[8];
    local_258 = puVar14[9];
    uStack_250 = puVar14[10];
    nn::mii::CharInfoAccessor::CharInfoAccessor
              ((CharInfoAccessor *)&local_170,(CharInfo *)&local_2a0);
    uVar19 = nn::mii::CharInfoAccessor::IsValid();
    if ((uVar19 & 1) != 0) {
      lVar24 = *(long *)(*DAT_710593b6a0 + 0x24d0);
      uVar30 = (*(long *)(*DAT_710593b6a0 + 0x24d8) - lVar24 >> 3) * 0x4ec4ec4ec4ec4ec5;
      uVar19 = (ulong)*(ushort *)(param_1 + 0x68);
      if (uVar30 < uVar19 || uVar30 - uVar19 == 0) goto LAB_71017e8304;
      nn::mii::CharInfoAccessor::CharInfoAccessor
                ((CharInfoAccessor *)&local_170,(CharInfo *)(lVar24 + uVar19 * 0x68));
      nn::mii::CharInfoAccessor::GetHairType();
    }
    if (uVar29 != 0) {
      local_70 = 0;
      local_170._0_4_ = (uint)local_170 & 0xffffff00;
      lVar33 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x238);
      lVar24 = *(long *)(lVar33 + 8);
      pcVar15 = *(char **)(lVar24 + 0x20);
      if ((*pcVar15 == '\f') && (iVar23 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
        uVar19 = *(ulong *)(lVar24 + 0x48) & 0xffffffffff;
        iVar26 = 0;
        pbVar21 = &DAT_7104742dbb;
        do {
          iVar1 = iVar23 + iVar26;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar8 = (uint *)(*(long *)(*(long *)(lVar24 + 0x18) + 0x28) + (long)*(int *)(pcVar15 + 5)
                           + (long)iVar1 * 8);
          uVar30 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x18) + 0x20) + (ulong)*puVar8 * 8);
          if (uVar30 == uVar19) {
            uVar18 = puVar8[1];
            if ((int)uVar18 < 0) goto LAB_71017e6d68;
            pbVar21 = (byte *)(pcVar15 + (int)uVar18);
            break;
          }
          iVar6 = iVar1 + -1;
          if (uVar30 <= uVar19) {
            iVar26 = iVar1 + 1;
            iVar6 = iVar23;
          }
          iVar23 = iVar6;
        } while (iVar26 <= iVar23);
      }
      else {
LAB_71017e6d68:
        pbVar21 = &DAT_7104742dbb;
      }
      if ((*pbVar21 - 0xb < 2) && (uVar29 < *(uint *)(pbVar21 + 1))) {
        uVar19 = FUN_71032870b0(lVar24,uVar29);
        FUN_7103287980((uint *)&local_2a0,lVar33,uVar19);
        ppppppppplVar10 = &local_298;
        FUN_710147f330((long)&local_170,"miihat/%s",ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,
                       in_x6,in_x7);
        uVar29 = (uint)local_170 & 0xff;
        if (local_170._0_1_ == (CharInfoAccessor)0x0) goto LAB_71017e6e24;
        uVar19 = 0;
        uVar18 = 0xffffffff;
        pbVar21 = (byte *)((ulong)&local_170 | 1);
        do {
          uVar2 = uVar29 + 0x20;
          if (0x19 < uVar29 - 0x41) {
            uVar2 = uVar29;
          }
          uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
          uVar29 = (uint)*pbVar21;
          uVar19 = uVar19 + 0x100000000;
          pbVar21 = pbVar21 + 1;
        } while (uVar29 != 0);
        uVar30 = (ulong)~uVar18;
        uVar19 = uVar19 & 0xff00000000;
      }
      else {
LAB_71017e6e24:
        uVar30 = 0;
        uVar19 = 0;
      }
      uVar19 = uVar19 | uVar30;
      if (uVar19 == 0) {
LAB_71017e6ea4:
        uVar29 = 0xffffff;
      }
      else {
        puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
        uVar29 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
        uVar30 = (ulong)uVar29;
        puVar14 = puVar20 + uVar30;
        puVar22 = puVar20;
        if (uVar29 != 0) {
          do {
            uVar31 = uVar30;
            if ((long)uVar30 < 0) {
              uVar31 = uVar30 + 1;
            }
            uVar31 = (long)uVar31 >> 1;
            puVar20 = puVar22 + uVar31 + 1;
            uVar30 = uVar30 + ~uVar31;
            if (uVar19 <= (puVar22[uVar31] & 0xffffffffff)) {
              puVar20 = puVar22;
              uVar30 = uVar31;
            }
            puVar22 = puVar20;
          } while (uVar30 != 0);
        }
        if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar19)) goto LAB_71017e6ea4;
        uVar29 = (uint)(*puVar20 >> 0x28);
      }
      puVar7 = FUN_7103540d50(DAT_7105332f20,uVar29,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,
                              in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      puVar8 = &DAT_7104471f50;
      if (puVar7 != (uint *)0x0) {
        puVar8 = puVar7;
      }
      uVar29 = *puVar8;
      uVar19 = (ulong)uVar29;
      local_170._0_4_ = uVar29;
      if (uVar29 == 0xffffff) {
        FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 3),(long *********)&local_170,
                       ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
      }
      else {
        if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar24,uVar29,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          else {
            FUN_71035432d0((int *)(lVar33 + uVar19 * 0x48));
            std::recursive_mutex::unlock();
          }
        }
        ppppppppplVar10 = (long *********)&local_170;
        FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 3),ppppppppplVar10,ppppbVar11,
                       pppplVar12,in_x5,in_x6,in_x7);
        lVar24 = DAT_7105332f20;
        if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar19 * 0x48),(long ****)ppppppppplVar10,
                           ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          std::recursive_mutex::unlock();
        }
        lVar24 = DAT_7105332f20;
        local_170._0_4_ = 0xffffff;
        if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar19 * 0x48),(long ****)ppppppppplVar10,
                           ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          std::recursive_mutex::unlock();
        }
      }
    }
    ppppbVar11 = (byte ****)(ulong)*(uint *)(param_1 + 0x78);
    ppppppppplVar10 = (long *********)&DAT_00000015;
    pppplVar12 = (long ****)0x0;
    FUN_71017dfa60((undefined1 *)&local_170,param_2,0x15,(ulong)ppppbVar11,0,in_x5,in_x6,in_x7);
    uVar29 = (uint)local_170 & 0xff;
    if (local_170._0_1_ == (CharInfoAccessor)0x0) {
      uVar30 = 0;
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      uVar18 = 0xffffffff;
      pbVar21 = (byte *)((ulong)&local_170 | 1);
      do {
        uVar2 = uVar29 + 0x20;
        if (0x19 < uVar29 - 0x41) {
          uVar2 = uVar29;
        }
        uVar18 = (&DAT_7104754084)[(uVar2 ^ uVar18) & 0xff] ^ uVar18 >> 8;
        uVar29 = (uint)*pbVar21;
        uVar19 = uVar19 + 0x100000000;
        pbVar21 = pbVar21 + 1;
      } while (uVar29 != 0);
      uVar30 = (ulong)~uVar18;
      uVar19 = uVar19 & 0xff00000000;
    }
    uVar19 = uVar19 | uVar30;
    if (uVar19 == 0) {
LAB_71017e7284:
      uVar29 = 0xffffff;
    }
    else {
      puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar29 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar30 = (ulong)uVar29;
      puVar14 = puVar20 + uVar30;
      puVar22 = puVar20;
      if (uVar29 != 0) {
        do {
          uVar31 = uVar30;
          if ((long)uVar30 < 0) {
            uVar31 = uVar30 + 1;
          }
          uVar31 = (long)uVar31 >> 1;
          puVar20 = puVar22 + uVar31 + 1;
          uVar30 = uVar30 + ~uVar31;
          if (uVar19 <= (puVar22[uVar31] & 0xffffffffff)) {
            puVar20 = puVar22;
            uVar30 = uVar31;
          }
          puVar22 = puVar20;
        } while (uVar30 != 0);
      }
      if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar19)) goto LAB_71017e7284;
      uVar29 = (uint)(*puVar20 >> 0x28);
    }
    puVar7 = FUN_7103540d50(DAT_7105332f20,uVar29,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                            in_x7);
    lVar24 = DAT_7105332f20;
    puVar8 = &DAT_7104471f50;
    if (puVar7 != (uint *)0x0) {
      puVar8 = puVar7;
    }
    uVar29 = *puVar8;
    uVar19 = (ulong)uVar29;
    local_170._0_4_ = uVar29;
    if (uVar29 == 0xffffff) {
      ppppppppplVar10 = (long *********)&local_170;
      FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 4),ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
    }
    else {
      if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar24,uVar29,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        else {
          FUN_71035432d0((int *)(lVar33 + uVar19 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      ppppppppplVar10 = (long *********)&local_170;
      FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 4),ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar19 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
      lVar24 = DAT_7105332f20;
      local_170._0_4_ = 0xffffff;
      if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar19 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar19 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
    }
    if (uVar28 != 0xffffff) {
LAB_71017e73d0:
      lVar24 = DAT_7105332f20;
      if ((uint)uVar13 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        if ((*(byte *)(*(long *)(lVar24 + 0x40) + uVar13 * 0x48 + 8) & 1) != 0) {
          piVar9 = (int *)(*(long *)(lVar24 + 0x40) + uVar13 * 0x48);
LAB_71017e7408:
          FUN_710353f5a0(lVar24,piVar9,(long ****)ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                         in_x7);
        }
        goto LAB_71017e740c;
      }
    }
  }
  else {
    if ((2 < param_2 - 0x4e) || (*(char *)(param_1 + 0x48) != '\x02')) {
      pppplVar12 = (long ****)(ulong)(cVar3 != '\0');
      ppppppppplVar10 = (long *********)0x0;
      ppppbVar11 = (byte ****)(ulong)uVar27;
      FUN_71017df420((undefined1 *)&local_170,param_2,0,(ulong)ppppbVar11,(ulong)pppplVar12,in_x5,
                     in_x6,in_x7);
      uVar28 = (uint)local_170 & 0xff;
      if (local_170._0_1_ == (CharInfoAccessor)0x0) {
        uVar19 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar17 = 0xffffffff;
        pbVar21 = (byte *)((ulong)&local_170 | 1);
        do {
          uVar29 = uVar28 + 0x20;
          if (0x19 < uVar28 - 0x41) {
            uVar29 = uVar28;
          }
          uVar17 = (&DAT_7104754084)[(uVar29 ^ uVar17) & 0xff] ^ uVar17 >> 8;
          uVar28 = (uint)*pbVar21;
          uVar13 = uVar13 + 0x100000000;
          pbVar21 = pbVar21 + 1;
        } while (uVar28 != 0);
        uVar19 = (ulong)~uVar17;
        uVar13 = uVar13 & 0xff00000000;
      }
      uVar13 = uVar13 | uVar19;
      if (uVar13 == 0) {
LAB_71017e689c:
        uVar28 = 0xffffff;
      }
      else {
        puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
        uVar28 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
        uVar19 = (ulong)uVar28;
        puVar14 = puVar20 + uVar19;
        puVar22 = puVar20;
        if (uVar28 != 0) {
          do {
            uVar30 = uVar19;
            if ((long)uVar19 < 0) {
              uVar30 = uVar19 + 1;
            }
            uVar30 = (long)uVar30 >> 1;
            puVar20 = puVar22 + uVar30 + 1;
            uVar19 = uVar19 + ~uVar30;
            if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
              puVar20 = puVar22;
              uVar19 = uVar30;
            }
            puVar22 = puVar20;
          } while (uVar19 != 0);
        }
        if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e689c;
        uVar28 = (uint)(*puVar20 >> 0x28);
      }
      puVar7 = FUN_7103540d50(DAT_7105332f20,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,
                              in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      puVar8 = &DAT_7104471f50;
      if (puVar7 != (uint *)0x0) {
        puVar8 = puVar7;
      }
      uVar28 = *puVar8;
      uVar13 = (ulong)uVar28;
      local_190[0] = uVar28;
      if (uVar28 == 0xffffff) {
        ppppppppplVar10 = (long *********)local_190;
        FUN_71017e2df0(param_1,(long ********)(ulong)(param_2 * 0x2a),ppppppppplVar10,ppppbVar11,
                       pppplVar12,in_x5,in_x6,in_x7);
        goto LAB_71017e7414;
      }
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar24,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        else {
          FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      ppppppppplVar10 = (long *********)local_190;
      FUN_71017e2df0(param_1,(long ********)(ulong)(param_2 * 0x2a),ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
      local_190[0] = 0xffffff;
      goto LAB_71017e73d0;
    }
    pppplVar12 = (long ****)(ulong)(cVar3 != '\0');
    ppppppppplVar10 = (long *********)0x0;
    ppppbVar11 = (byte ****)0x0;
    FUN_71017df420((undefined1 *)&local_170,param_2,0,0,(ulong)pppplVar12,in_x5,in_x6,in_x7);
    uVar28 = (uint)local_170 & 0xff;
    if (local_170._0_1_ == (CharInfoAccessor)0x0) {
      uVar19 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar17 = 0xffffffff;
      pbVar21 = (byte *)((ulong)&local_170 | 1);
      do {
        uVar29 = uVar28 + 0x20;
        if (0x19 < uVar28 - 0x41) {
          uVar29 = uVar28;
        }
        uVar17 = (&DAT_7104754084)[(uVar29 ^ uVar17) & 0xff] ^ uVar17 >> 8;
        uVar28 = (uint)*pbVar21;
        uVar13 = uVar13 + 0x100000000;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      uVar19 = (ulong)~uVar17;
      uVar13 = uVar13 & 0xff00000000;
    }
    uVar13 = uVar13 | uVar19;
    if (uVar13 == 0) {
LAB_71017e6fb4:
      uVar28 = 0xffffff;
    }
    else {
      puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar28 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar19 = (ulong)uVar28;
      puVar14 = puVar20 + uVar19;
      puVar22 = puVar20;
      if (uVar28 != 0) {
        do {
          uVar30 = uVar19;
          if ((long)uVar19 < 0) {
            uVar30 = uVar19 + 1;
          }
          uVar30 = (long)uVar30 >> 1;
          puVar20 = puVar22 + uVar30 + 1;
          uVar19 = uVar19 + ~uVar30;
          if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
            puVar20 = puVar22;
            uVar19 = uVar30;
          }
          puVar22 = puVar20;
        } while (uVar19 != 0);
      }
      if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e6fb4;
      uVar28 = (uint)(*puVar20 >> 0x28);
    }
    puVar7 = FUN_7103540d50(DAT_7105332f20,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                            in_x7);
    lVar24 = DAT_7105332f20;
    puVar8 = &DAT_7104471f50;
    if (puVar7 != (uint *)0x0) {
      puVar8 = puVar7;
    }
    uVar28 = *puVar8;
    uVar13 = (ulong)uVar28;
    uVar17 = param_2 * 0x2a;
    local_180[0] = uVar28;
    if (uVar28 == 0xffffff) {
      FUN_71017e2df0(param_1,(long ********)(ulong)uVar17,(long *********)local_180,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
    }
    else {
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar24,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        else {
          FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      ppppppppplVar10 = (long *********)local_180;
      FUN_71017e2df0(param_1,(long ********)(ulong)uVar17,ppppppppplVar10,ppppbVar11,pppplVar12,
                     in_x5,in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
      lVar24 = DAT_7105332f20;
      local_180[0] = 0xffffff;
      if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar33 = *(long *)(lVar24 + 0x40);
        if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                         ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
        }
        std::recursive_mutex::unlock();
      }
    }
    pppplVar12 = (long ****)(ulong)(cVar3 != '\0');
    ppppbVar11 = (byte ****)0x1;
    ppppppppplVar10 = (long *********)0x0;
    FUN_71017df420((undefined1 *)&local_170,param_2,0,1,(ulong)pppplVar12,in_x5,in_x6,in_x7);
    uVar28 = (uint)local_170 & 0xff;
    if (local_170._0_1_ == (CharInfoAccessor)0x0) {
      uVar19 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      uVar29 = 0xffffffff;
      pbVar21 = (byte *)((ulong)&local_170 | 1);
      do {
        uVar18 = uVar28 + 0x20;
        if (0x19 < uVar28 - 0x41) {
          uVar18 = uVar28;
        }
        uVar29 = (&DAT_7104754084)[(uVar18 ^ uVar29) & 0xff] ^ uVar29 >> 8;
        uVar28 = (uint)*pbVar21;
        uVar13 = uVar13 + 0x100000000;
        pbVar21 = pbVar21 + 1;
      } while (uVar28 != 0);
      uVar19 = (ulong)~uVar29;
      uVar13 = uVar13 & 0xff00000000;
    }
    uVar13 = uVar13 | uVar19;
    if (uVar13 == 0) {
LAB_71017e80a4:
      uVar28 = 0xffffff;
    }
    else {
      puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
      uVar28 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
      uVar19 = (ulong)uVar28;
      puVar14 = puVar20 + uVar19;
      puVar22 = puVar20;
      if (uVar28 != 0) {
        do {
          uVar30 = uVar19;
          if ((long)uVar19 < 0) {
            uVar30 = uVar19 + 1;
          }
          uVar30 = (long)uVar30 >> 1;
          puVar20 = puVar22 + uVar30 + 1;
          uVar19 = uVar19 + ~uVar30;
          if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
            puVar20 = puVar22;
            uVar19 = uVar30;
          }
          puVar22 = puVar20;
        } while (uVar19 != 0);
      }
      if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e80a4;
      uVar28 = (uint)(*puVar20 >> 0x28);
    }
    puVar7 = FUN_7103540d50(DAT_7105332f20,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                            in_x7);
    lVar24 = DAT_7105332f20;
    puVar8 = &DAT_7104471f50;
    if (puVar7 != (uint *)0x0) {
      puVar8 = puVar7;
    }
    uVar28 = *puVar8;
    uVar13 = (ulong)uVar28;
    local_188[0] = uVar28;
    if (uVar28 == 0xffffff) {
      ppppppppplVar10 = (long *********)local_188;
      FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 5),ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
      goto LAB_71017e7414;
    }
    if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar33 = *(long *)(lVar24 + 0x40);
      if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar24,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
      }
      else {
        FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
        std::recursive_mutex::unlock();
      }
    }
    ppppppppplVar10 = (long *********)local_188;
    FUN_71017e2df0(param_1,(long ********)(ulong)(uVar17 + 5),ppppppppplVar10,ppppbVar11,pppplVar12,
                   in_x5,in_x6,in_x7);
    lVar24 = DAT_7105332f20;
    if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar33 = *(long *)(lVar24 + 0x40);
      if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,ppppbVar11,
                       pppplVar12,in_x5,in_x6,in_x7);
      }
      std::recursive_mutex::unlock();
    }
    lVar24 = DAT_7105332f20;
    local_188[0] = 0xffffff;
    if (*(uint *)(DAT_7105332f20 + 0x48) <= uVar28) goto LAB_71017e7414;
    std::recursive_mutex::lock();
    if ((*(byte *)(*(long *)(lVar24 + 0x40) + uVar13 * 0x48 + 8) & 1) != 0) {
      piVar9 = (int *)(*(long *)(lVar24 + 0x40) + uVar13 * 0x48);
      goto LAB_71017e7408;
    }
LAB_71017e740c:
    std::recursive_mutex::unlock();
  }
LAB_71017e7414:
  if (*(char *)(param_1 + 0x48) != '\x01') {
    uVar13 = FUN_710065dd70(param_2);
    if ((uVar13 & 1) != 0) {
      local_70 = 0;
      local_170._0_4_ = (uint)local_170 & 0xffffff00;
      local_298 = (long ********)0x0;
      local_290 = (long *********)0x0;
      local_2a0 = 0;
      if (param_2 < 0x76) {
        ppppppppplVar10 = (long *********)(&PTR_s_mario_7104f81e20)[(int)param_2];
        if ((param_2 == 0x72) && (cVar3 != '\0')) {
          std::string::append((char *)&local_2a0);
          std::string::append((char *)&local_2a0);
          ppppppppplVar10 = local_290;
          if ((local_2a0 & 1) == 0) {
            ppppppppplVar10 = (long *********)((ulong)&local_2a0 | 1);
          }
        }
      }
      else {
        ppppppppplVar10 = (long *********)&DAT_71042b2e2e;
      }
      FUN_710147f330((long)&local_170,"fighter/%s/finalsmash/shared",ppppppppplVar10,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
      if (((local_2a0 & 1) != 0) && (local_290 != (long *********)0x0)) {
        FUN_710392eb40((ulong)local_290);
      }
      uVar28 = (uint)local_170 & 0xff;
      if (local_170._0_1_ == (CharInfoAccessor)0x0) {
        uVar19 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar17 = 0xffffffff;
        pbVar21 = (byte *)((ulong)&local_170 | 1);
        do {
          uVar29 = uVar28 + 0x20;
          if (0x19 < uVar28 - 0x41) {
            uVar29 = uVar28;
          }
          uVar17 = (&DAT_7104754084)[(uVar29 ^ uVar17) & 0xff] ^ uVar17 >> 8;
          uVar28 = (uint)*pbVar21;
          uVar13 = uVar13 + 0x100000000;
          pbVar21 = pbVar21 + 1;
        } while (uVar28 != 0);
        uVar19 = (ulong)~uVar17;
        uVar13 = uVar13 & 0xff00000000;
      }
      uVar13 = uVar13 | uVar19;
      if (uVar13 == 0) {
LAB_71017e7638:
        uVar28 = 0xffffff;
      }
      else {
        puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
        uVar28 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
        uVar19 = (ulong)uVar28;
        puVar14 = puVar20 + uVar19;
        puVar22 = puVar20;
        if (uVar28 != 0) {
          do {
            uVar30 = uVar19;
            if ((long)uVar19 < 0) {
              uVar30 = uVar19 + 1;
            }
            uVar30 = (long)uVar30 >> 1;
            puVar20 = puVar22 + uVar30 + 1;
            uVar19 = uVar19 + ~uVar30;
            if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
              puVar20 = puVar22;
              uVar19 = uVar30;
            }
            puVar22 = puVar20;
          } while (uVar19 != 0);
        }
        if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e7638;
        uVar28 = (uint)(*puVar20 >> 0x28);
      }
      puVar7 = FUN_7103540d50(DAT_7105332f20,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,
                              in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      puVar8 = &DAT_7104471f50;
      if (puVar7 != (uint *)0x0) {
        puVar8 = puVar7;
      }
      uVar28 = *puVar8;
      uVar13 = (ulong)uVar28;
      pppppppplVar32 = (long ********)(ulong)(param_2 * 0x2a | 1);
      local_198[0] = uVar28;
      if (uVar28 == 0xffffff) {
        ppppppppplVar10 = (long *********)local_198;
        FUN_71017e2df0(param_1,pppppppplVar32,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                       in_x7);
      }
      else {
        if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar24,uVar28,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          else {
            FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
            std::recursive_mutex::unlock();
          }
        }
        ppppppppplVar10 = (long *********)local_198;
        FUN_71017e2df0(param_1,pppppppplVar32,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                       in_x7);
        lVar24 = DAT_7105332f20;
        if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                           ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          std::recursive_mutex::unlock();
        }
        lVar24 = DAT_7105332f20;
        local_198[0] = 0xffffff;
        if (uVar28 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                           ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          std::recursive_mutex::unlock();
        }
      }
      if (*(char *)(param_1 + 0x48) == '\x01') goto LAB_71017e7420;
    }
    if (cVar4 == '\0') {
      pppplVar12 = (long ****)(ulong)(cVar3 != '\0');
      ppppppppplVar10 = (long *********)&DAT_00000028;
      ppppbVar11 = (byte ****)(ulong)uVar27;
      FUN_71017df420((undefined1 *)&local_170,param_2,0x28,(ulong)ppppbVar11,(ulong)pppplVar12,in_x5
                     ,in_x6,in_x7);
      uVar27 = (uint)local_170 & 0xff;
      if (local_170._0_1_ == (CharInfoAccessor)0x0) {
        uVar19 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar28 = 0xffffffff;
        pbVar21 = (byte *)((ulong)&local_170 | 1);
        do {
          uVar17 = uVar27 + 0x20;
          if (0x19 < uVar27 - 0x41) {
            uVar17 = uVar27;
          }
          uVar28 = (&DAT_7104754084)[(uVar17 ^ uVar28) & 0xff] ^ uVar28 >> 8;
          uVar27 = (uint)*pbVar21;
          uVar13 = uVar13 + 0x100000000;
          pbVar21 = pbVar21 + 1;
        } while (uVar27 != 0);
        uVar19 = (ulong)~uVar28;
        uVar13 = uVar13 & 0xff00000000;
      }
      uVar13 = uVar13 | uVar19;
      if (uVar13 == 0) {
LAB_71017e7910:
        uVar27 = 0xffffff;
      }
      else {
        puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
        uVar27 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
        uVar19 = (ulong)uVar27;
        puVar14 = puVar20 + uVar19;
        puVar22 = puVar20;
        if (uVar27 != 0) {
          do {
            uVar30 = uVar19;
            if ((long)uVar19 < 0) {
              uVar30 = uVar19 + 1;
            }
            uVar30 = (long)uVar30 >> 1;
            puVar20 = puVar22 + uVar30 + 1;
            uVar19 = uVar19 + ~uVar30;
            if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
              puVar20 = puVar22;
              uVar19 = uVar30;
            }
            puVar22 = puVar20;
          } while (uVar19 != 0);
        }
        if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e7910;
        uVar27 = (uint)(*puVar20 >> 0x28);
      }
      puVar7 = FUN_7103540d50(DAT_7105332f20,uVar27,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,
                              in_x6,in_x7);
      lVar24 = DAT_7105332f20;
      puVar8 = &DAT_7104471f50;
      if (puVar7 != (uint *)0x0) {
        puVar8 = puVar7;
      }
      uVar27 = *puVar8;
      uVar13 = (ulong)uVar27;
      pppppppplVar32 = (long ********)(ulong)(param_2 * 0x2a + 6);
      local_3b8[0] = uVar27;
      if (uVar27 == 0xffffff) {
        ppppppppplVar10 = (long *********)local_3b8;
        FUN_71017e2df0(param_1,pppppppplVar32,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                       in_x7);
      }
      else {
        if (uVar27 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar24,uVar27,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          else {
            FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
            std::recursive_mutex::unlock();
          }
        }
        ppppppppplVar10 = (long *********)local_3b8;
        FUN_71017e2df0(param_1,pppppppplVar32,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                       in_x7);
        lVar24 = DAT_7105332f20;
        if (uVar27 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                           ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          std::recursive_mutex::unlock();
        }
        lVar24 = DAT_7105332f20;
        local_3b8[0] = 0xffffff;
        if (uVar27 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar33 = *(long *)(lVar24 + 0x40);
          if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,
                           ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
          }
          std::recursive_mutex::unlock();
        }
      }
    }
    else {
      local_1a0 = 0;
      local_2a0 = local_2a0 & 0xffffffffffffff00;
      if (param_2 != 0x52) goto LAB_71017e7420;
      local_70 = 0;
      ppppbVar11 = (byte ****)(ulong)uVar27;
      local_170._0_4_ = (uint)local_170 & 0xffffff00;
      FUN_710147f330((long)&local_170,"prebuilt:/movie/fighter/%s/c%02d",&DAT_7104453189,ppppbVar11,
                     pppplVar12,in_x5,in_x6,in_x7);
      uVar13 = (ulong)local_70;
      local_3a8[0] = 0;
      local_2a8 = 0;
      if (uVar13 == 0) {
        puVar16 = local_3a8;
      }
      else {
        uVar5 = local_70 & 1;
        if (local_70 == 1) {
          uVar27 = 0;
          puVar25 = &local_170;
LAB_71017e79f4:
          local_2a8 = (short)uVar27 + 1;
          local_3a8[uVar27] = *(undefined1 *)puVar25;
        }
        else {
          uVar19 = 0;
          puVar25 = &local_170;
          lVar24 = (uVar13 & 1) - uVar13;
          do {
            local_2a8 = (short)uVar19 + 1;
            local_3a8[uVar19] = *(undefined1 *)puVar25;
            uVar13 = (ulong)local_2a8;
            puVar16 = (undefined1 *)((long)puVar25 + 1);
            puVar25 = (undefined8 *)((long)puVar25 + 2);
            local_2a8 = local_2a8 + 1;
            lVar24 = lVar24 + 2;
            local_3a8[uVar13] = *puVar16;
            uVar19 = (ulong)local_2a8;
            uVar27 = (uint)local_2a8;
          } while (lVar24 != 0);
          if (uVar5 != 0) goto LAB_71017e79f4;
        }
        puVar16 = local_3a8 + local_2a8;
      }
      ppppppppplVar10 = (long *********)&DAT_00000100;
      *puVar16 = 0;
      memcpy(&local_2a0,local_3a8,0x100);
      lVar24 = DAT_7105332f20;
      local_1a0 = local_2a8 + 1;
      *(undefined1 *)((long)&local_2a0 + (ulong)local_2a8) = 0x2f;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x66;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x69;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x6e;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x61;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x6c;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x5f;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x30;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x31;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x2e;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x68;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x32;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x36;
      uVar13 = (ulong)local_1a0;
      local_1a0 = local_1a0 + 1;
      *(undefined1 *)((long)&local_2a0 + uVar13) = 0x34;
      *(undefined1 *)((long)&local_2a0 + (ulong)local_1a0) = 0;
      if (local_1a0 != 0) {
        uVar27 = (uint)(byte)local_2a0._0_1_;
        local_3b0[0] = 0xffffff;
        if (local_2a0._0_1_ != (CharInfo)0x0) {
          uVar13 = 0;
          uVar28 = 0xffffffff;
          pbVar21 = (byte *)((ulong)&local_2a0 | 1);
          do {
            uVar17 = uVar27 + 0x20;
            if (0x19 < uVar27 - 0x41) {
              uVar17 = uVar27;
            }
            uVar28 = (&DAT_7104754084)[(uVar17 ^ uVar28) & 0xff] ^ uVar28 >> 8;
            uVar27 = (uint)*pbVar21;
            uVar13 = uVar13 + 0x100000000;
            pbVar21 = pbVar21 + 1;
          } while (uVar27 != 0);
          uVar13 = uVar13 & 0xff00000000 | (ulong)~uVar28;
          if (uVar13 != 0) {
            lVar33 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
            uVar30 = (ulong)*(uint *)(lVar33 + 4);
            uVar19 = 0;
            if (uVar30 != 0) {
              uVar19 = uVar13 / uVar30;
            }
            lVar33 = lVar33 + (uVar13 - uVar19 * uVar30) * 8;
            uVar27 = *(uint *)(lVar33 + 0xc);
            uVar19 = (ulong)uVar27;
            puVar14 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                               (ulong)*(uint *)(lVar33 + 8) * 8);
            puVar20 = puVar14 + uVar19;
            puVar22 = puVar14;
            if (uVar27 != 0) {
              do {
                uVar30 = uVar19;
                if ((long)uVar19 < 0) {
                  uVar30 = uVar19 + 1;
                }
                uVar30 = (long)uVar30 >> 1;
                puVar14 = puVar22 + uVar30 + 1;
                uVar19 = uVar19 + ~uVar30;
                if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
                  puVar14 = puVar22;
                  uVar19 = uVar30;
                }
                puVar22 = puVar14;
              } while (uVar19 != 0);
            }
            if (puVar14 != puVar20) {
              uVar19 = *puVar14;
              uVar27 = (uint)(uVar19 >> 0x28);
              if ((uVar19 & 0xffffffffff) == uVar13 && uVar27 != 0xffffff) {
                std::recursive_mutex::lock();
                puVar8 = FUN_71035404b0(lVar24,uVar19 & 0xffffff0000000000 | uVar13);
                std::recursive_mutex::unlock();
                if ((puVar8 != (uint *)0x0) &&
                   (*(char *)(*(long *)(lVar24 + 8) + (uVar19 >> 0x28) * 8 + 4) != '\0')) {
                  ppppppppplVar10 = (long *********)local_3b0;
                  local_3b0[0] = uVar27;
                  FUN_71017e2ab0(param_1,(long ********)0xd7a,(uint *)ppppppppplVar10,ppppbVar11,
                                 pppplVar12,in_x5,in_x6,in_x7);
                  FUN_7103540b10(DAT_7105332f20,uVar27,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,
                                 in_x6,in_x7);
                  local_3b0[0] = 0xffffff;
                  goto LAB_71017e7420;
                }
              }
            }
          }
        }
        ppppppppplVar10 = (long *********)local_3b0;
        local_3b0[0] = 0xffffff;
        FUN_71017e2ab0(param_1,(long ********)0xd7a,(uint *)ppppppppplVar10,ppppbVar11,pppplVar12,
                       in_x5,in_x6,in_x7);
      }
    }
  }
LAB_71017e7420:
  local_70 = 0;
  local_170._0_4_ = (uint)local_170 & 0xffffff00;
  if ((param_2 != 0x52) || (*(char *)(param_1 + 0x7d) != '\0')) goto LAB_71017e7438;
  if (*(int *)(param_1 + 0x58) == 0x2d) {
    if ((DAT_710523d00c < 0xe) && ((0x7feU >> (ulong)(DAT_710523d00c & 0x1f) & 1) == 0)) {
LAB_71017e76c8:
      ppppbVar11 = (byte ****)(ulong)*(uint *)(param_1 + 100);
    }
    else {
      uVar27 = *(uint *)(param_1 + 100);
      ppppbVar11 = (byte ****)(ulong)uVar27;
      if (uVar27 == 0) {
        ppppbVar11 = (byte ****)0x1;
      }
      else if (uVar27 == 1) goto LAB_71017e75b0;
    }
  }
  else {
    if (2 < *(int *)(param_1 + 0x58) - 0x48U) goto LAB_71017e76c8;
LAB_71017e75b0:
    ppppbVar11 = (byte ****)0x0;
  }
  local_1a0 = 0;
  local_2a0 = local_2a0 & 0xffffffffffffff00;
  FUN_710147f330((long)&local_2a0,"fighter/%s/append/c%02d",&DAT_7104453189,ppppbVar11,pppplVar12,
                 in_x5,in_x6,in_x7);
  ppppppppplVar10 = (long *********)&DAT_00000100;
  memcpy(&local_170,&local_2a0,0x100);
  local_70 = local_1a0;
  if (local_1a0 == 0) goto LAB_71017e7438;
  uVar27 = (uint)local_170 & 0xff;
  if (local_170._0_1_ == (CharInfoAccessor)0x0) {
    uVar19 = 0;
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar28 = 0xffffffff;
    pbVar21 = (byte *)((ulong)&local_170 | 1);
    do {
      uVar17 = uVar27 + 0x20;
      if (0x19 < uVar27 - 0x41) {
        uVar17 = uVar27;
      }
      uVar28 = (&DAT_7104754084)[(uVar17 ^ uVar28) & 0xff] ^ uVar28 >> 8;
      uVar27 = (uint)*pbVar21;
      uVar13 = uVar13 + 0x100000000;
      pbVar21 = pbVar21 + 1;
    } while (uVar27 != 0);
    uVar19 = (ulong)~uVar28;
    uVar13 = uVar13 & 0xff00000000;
  }
  uVar13 = uVar13 | uVar19;
  if (uVar13 == 0) {
LAB_71017e7da0:
    uVar27 = 0xffffff;
  }
  else {
    puVar20 = *(ulong **)(**(long **)(DAT_7105332f20 + 0x78) + 0x70);
    uVar27 = *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 0xc);
    uVar19 = (ulong)uVar27;
    puVar14 = puVar20 + uVar19;
    puVar22 = puVar20;
    if (uVar27 != 0) {
      do {
        uVar30 = uVar19;
        if ((long)uVar19 < 0) {
          uVar30 = uVar19 + 1;
        }
        uVar30 = (long)uVar30 >> 1;
        puVar20 = puVar22 + uVar30 + 1;
        uVar19 = uVar19 + ~uVar30;
        if (uVar13 <= (puVar22[uVar30] & 0xffffffffff)) {
          puVar20 = puVar22;
          uVar19 = uVar30;
        }
        puVar22 = puVar20;
      } while (uVar19 != 0);
    }
    if ((puVar20 == puVar14) || ((*puVar20 & 0xffffffffff) != uVar13)) goto LAB_71017e7da0;
    uVar27 = (uint)(*puVar20 >> 0x28);
  }
  puVar7 = FUN_7103540d50(DAT_7105332f20,uVar27,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                          in_x7);
  lVar24 = DAT_7105332f20;
  puVar8 = &DAT_7104471f50;
  if (puVar7 != (uint *)0x0) {
    puVar8 = puVar7;
  }
  uVar27 = *puVar8;
  uVar13 = (ulong)uVar27;
  local_3c0[0] = uVar27;
  if (uVar27 == 0xffffff) {
    ppppppppplVar10 = (long *********)local_3c0;
    FUN_71017e2df0(param_1,(long ********)0xd7b,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                   in_x7);
  }
  else {
    if (uVar27 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar33 = *(long *)(lVar24 + 0x40);
      if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar24,uVar27,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7);
      }
      else {
        FUN_71035432d0((int *)(lVar33 + uVar13 * 0x48));
        std::recursive_mutex::unlock();
      }
    }
    ppppppppplVar10 = (long *********)local_3c0;
    FUN_71017e2df0(param_1,(long ********)0xd7b,ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,
                   in_x7);
    lVar24 = DAT_7105332f20;
    if (uVar27 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar33 = *(long *)(lVar24 + 0x40);
      if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,ppppbVar11,
                       pppplVar12,in_x5,in_x6,in_x7);
      }
      std::recursive_mutex::unlock();
    }
    lVar24 = DAT_7105332f20;
    local_3c0[0] = 0xffffff;
    if (uVar27 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar33 = *(long *)(lVar24 + 0x40);
      if ((*(byte *)(lVar33 + uVar13 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar24,(int *)(lVar33 + uVar13 * 0x48),(long ****)ppppppppplVar10,ppppbVar11,
                       pppplVar12,in_x5,in_x6,in_x7);
      }
      std::recursive_mutex::unlock();
    }
  }
LAB_71017e7438:
  FUN_71017e4900(param_1,param_2,(long ****)ppppppppplVar10,ppppbVar11,pppplVar12,in_x5,in_x6,in_x7)
  ;
  return;
}

