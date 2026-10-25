// addr:      71023fee20
// offset:    0x23fee20
// name:      FUN_71023fee20
// mangled:   
// signature: undefined __cdecl FUN_71023fee20(ulong * param_1, long * * * * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071023ff8b8) */
/* WARNING: Removing unreachable block (ram,0x0071023ff9b8) */
/* WARNING: Removing unreachable block (ram,0x0071023ff5e4) */
/* WARNING: Removing unreachable block (ram,0x0071023ff7c4) */
/* WARNING: Removing unreachable block (ram,0x0071023ff63c) */
/* WARNING: Removing unreachable block (ram,0x0071023ffab0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_71023fee20(ulong *param_1,long ****param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  uint *puVar16;
  ulong uVar17;
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
  long *********ppppppppplVar18;
  byte ****ppppbVar19;
  char *pcVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  ulong uVar25;
  char *pcVar26;
  ulong *puVar27;
  ulong *puVar28;
  ulong *puVar29;
  byte *pbVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 *puVar33;
  byte *pbVar34;
  ulong uVar35;
  byte *pbVar36;
  ulong uVar37;
  int iVar38;
  uint uVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  uint local_280 [2];
  long ********local_278;
  uint local_270;
  uint local_26c;
  uint local_268;
  ushort local_178;
  undefined8 local_170;
  undefined4 local_168;
  uint local_164;
  uint local_160;
  undefined4 uStack_15c;
  ushort local_70;
  
  if (*(char *)((long)param_1 + 0x99) != '\0') {
    FUN_71023fe4a0(param_1,(ulong)param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  *(undefined1 *)((long)param_1 + 0x99) = 0;
  lVar42 = *(long *)(DAT_710532f730 + 8);
  puVar10 = FUN_71032631a0(*(long *)(lVar42 + 0x168),0x11e4b123e6);
  FUN_71032c1dd0(&local_170,*(long *)(lVar42 + 0x288),param_2,param_4,param_5,param_6,param_7,
                 param_8);
  uVar11 = *param_1;
  if (uVar11 != 0) {
    param_1[1] = uVar11;
    FUN_710392eb40(uVar11);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  *param_1 = (ulong)local_170;
  param_1[1] = CONCAT44(local_164,local_168);
  param_1[2] = CONCAT44(uStack_15c,local_160);
  if (local_170 == (long ********)CONCAT44(local_164,local_168)) {
    return;
  }
  puVar12 = FUN_71032c4780(*(long *)(lVar42 + 0x288),(ulong)param_2);
  param_1[0x12] = (ulong)puVar12;
  lVar41 = *(long *)(lVar42 + 0x288);
  uVar7 = FUN_71032ba9a0(lVar41,(ulong)param_2);
  lVar24 = *(long *)(lVar41 + 8);
  pcVar20 = *(char **)(lVar24 + 0x20);
  if ((*pcVar20 == '\f') && (iVar38 = *(int *)(pcVar20 + 1) + -1, 0 < *(int *)(pcVar20 + 1))) {
    uVar11 = *(ulong *)(lVar41 + 0x10) & 0xffffffffff;
    iVar40 = 0;
    pbVar34 = &DAT_7104742dbb;
    do {
      iVar1 = iVar38 + iVar40;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar16 = (uint *)(*(long *)(*(long *)(lVar24 + 0x18) + 0x28) + (long)*(int *)(pcVar20 + 5) +
                        (long)iVar1 * 8);
      uVar17 = *(ulong *)(*(long *)(*(long *)(lVar24 + 0x18) + 0x20) + (ulong)*puVar16 * 8);
      if (uVar17 == uVar11) {
        uVar8 = puVar16[1];
        if ((int)uVar8 < 0) goto LAB_71023fef7c;
        pbVar34 = (byte *)(pcVar20 + (int)uVar8);
        break;
      }
      iVar5 = iVar1 + -1;
      if (uVar17 <= uVar11) {
        iVar40 = iVar1 + 1;
        iVar5 = iVar38;
      }
      iVar38 = iVar5;
    } while (iVar40 <= iVar38);
  }
  else {
LAB_71023fef7c:
    pbVar34 = &DAT_7104742dbb;
  }
  if ((*pbVar34 - 0xb < 2) && (uVar7 < *(uint *)(pbVar34 + 1))) {
    if ((*pcVar20 == '\f') && (iVar38 = *(int *)(pcVar20 + 1) + -1, 0 < *(int *)(pcVar20 + 1))) {
      uVar11 = *(ulong *)(lVar41 + 0x10) & 0xffffffffff;
      lVar41 = *(long *)(lVar24 + 0x18);
      iVar40 = 0;
      do {
        iVar1 = iVar38 + iVar40;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar16 = (uint *)(*(long *)(lVar41 + 0x28) + (long)*(int *)(pcVar20 + 5) + (long)iVar1 * 8)
        ;
        uVar17 = *(ulong *)(*(long *)(lVar41 + 0x20) + (ulong)*puVar16 * 8);
        if (uVar17 == uVar11) {
          uVar11 = (ulong)(int)puVar16[1];
          pcVar26 = "";
          lVar24 = 0;
          if ((uVar11 & 0x80000000) == 0) {
            pcVar26 = pcVar20 + uVar11;
            lVar24 = lVar41;
          }
          goto LAB_71023ff170;
        }
        iVar5 = iVar1 + -1;
        if (uVar17 <= uVar11) {
          iVar40 = iVar1 + 1;
          iVar5 = iVar38;
        }
        iVar38 = iVar5;
      } while (iVar40 <= iVar38);
      pcVar26 = "";
      lVar24 = 0;
    }
    else {
      pcVar26 = "";
      lVar24 = 0;
    }
LAB_71023ff170:
    pcVar20 = "";
    lVar41 = 0;
    if ((-1 < (int)uVar7) && (*pcVar26 == '\v')) {
      if ((int)uVar7 < *(int *)(pcVar26 + 1)) {
        pcVar20 = pcVar26 + *(int *)(pcVar26 + (long)(int)uVar7 * 4 + 5);
        lVar41 = lVar24;
      }
      else {
        lVar41 = 0;
        pcVar20 = "";
      }
    }
    if ((*pcVar20 == '\f') && (iVar38 = *(int *)(pcVar20 + 1) + -1, 0 < *(int *)(pcVar20 + 1))) {
      iVar40 = 0;
      pcVar26 = "";
      do {
        iVar1 = iVar38 + iVar40;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar16 = (uint *)(*(long *)(lVar41 + 0x28) + (long)*(int *)(pcVar20 + 5) + (long)iVar1 * 8)
        ;
        uVar11 = *(ulong *)(*(long *)(lVar41 + 0x20) + (ulong)*puVar16 * 8);
        if (uVar11 == 0xbb58144dc) {
          uVar7 = puVar16[1];
          if ((int)uVar7 < 0) goto LAB_71023ff670;
          pcVar26 = pcVar20 + (int)uVar7;
          break;
        }
        iVar5 = iVar1 + -1;
        if (uVar11 < 0xbb58144dd) {
          iVar40 = iVar1 + 1;
          iVar5 = iVar38;
        }
        iVar38 = iVar5;
      } while (iVar40 <= iVar38);
    }
    else {
LAB_71023ff670:
      pcVar26 = "";
    }
    switch(*pcVar26) {
    case '\x01':
    case '\x03':
      uVar7 = (uint)(byte)pcVar26[1];
      break;
    case '\x02':
      uVar7 = (uint)pcVar26[1];
      break;
    case '\x04':
      uVar7 = (uint)*(short *)(pcVar26 + 1);
      break;
    case '\x05':
      uVar7 = (uint)*(ushort *)(pcVar26 + 1);
      break;
    case '\x06':
    case '\a':
      uVar7 = *(uint *)(pcVar26 + 1);
      break;
    default:
      goto switchD_71023ff698_default;
    }
  }
  else {
switchD_71023ff698_default:
    uVar7 = 0;
  }
  *(char *)(param_1 + 0x13) = (char)uVar7;
  lVar24 = *(long *)(lVar42 + 0x168);
  uVar8 = FUN_71032638e0(lVar24,(ulong)puVar12);
  bVar6 = ((ulong)puVar12 & 0xffffffffff) == 0;
  uVar11 = (ulong)puVar12 & 0xff00000000000000;
  uVar17 = (ulong)puVar10 & 0xffffffffff;
  if (uVar11 != 0xc100000000000000 || bVar6) {
    uVar9 = 0xffffffff;
    if ((((ulong)puVar10 & 0xff00000000000000) == 0xc100000000000000) && (uVar17 != 0)) {
      uVar25 = param_1[0x11] & 0xffffffffff;
      uVar32 = param_1[0x11] & 0xff00000000000000;
LAB_71023ff11c:
      if ((uVar8 & 1) != 0 ||
          (uVar25 != 0 && uVar32 == 0xc100000000000000) ==
          (uVar11 == 0xc100000000000000 && ((ulong)puVar12 & 0xffffffffff) != 0))
      goto LAB_71023ff158;
LAB_71023ff0b8:
      puVar13 = FUN_71032631a0(lVar24,0x11b1ccb807);
      if (uVar11 != 0xc100000000000000 || bVar6) {
        uVar9 = 0x72;
        if ((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar13 & 0xffffffffff) != 0)) goto LAB_71023ff1c4;
      }
      else if ((((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) &&
              ((((ulong)puVar13 & 0xffffffffff) != 0 &&
               ((((ulong)puVar13 ^ (ulong)puVar12) & 0xffffffffff) == 0)))) {
        uVar9 = 0x72;
      }
      else {
LAB_71023ff1c4:
        uVar14 = FUN_71032626e0(lVar24,(ulong)puVar12);
        uVar9 = (uint)uVar14;
        if (uVar9 == 0xffffffff) goto LAB_710240006c;
        uVar7 = (uint)(byte)param_1[0x13];
      }
      param_4 = (byte ****)(ulong)(uVar7 & 0xff);
      ppppppppplVar18 = (long *********)&DAT_00000009;
      FUN_71017df5b0((undefined1 *)&local_170,uVar9,9,(ulong)param_4,param_5,param_6,param_7,param_8
                    );
      FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
      uVar11 = FUN_710353ea90((uint)local_278);
      uVar7 = (uint)uVar11;
      if (uVar7 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar7);
      }
      if (*(uint *)((long)param_1 + 0x7c) != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,*(uint *)((long)param_1 + 0x7c),ppppppppplVar18,param_4,
                       param_5,param_6,param_7,param_8);
      }
      *(uint *)((long)param_1 + 0x7c) = uVar7;
      if (uVar7 == 0xffffff) {
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        ppppbVar19 = (byte ****)(ulong)(byte)param_1[0x13];
        ppppppppplVar18 = (long *********)0xa;
        *(undefined1 *)(param_1 + 0xf) = 1;
        FUN_71017df5b0((undefined1 *)&local_170,uVar9,10,(ulong)ppppbVar19,param_5,param_6,param_7,
                       param_8);
        FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
        uVar11 = FUN_710353ea90((uint)local_278);
        uVar7 = (uint)uVar11;
        if (uVar7 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar7);
        }
        if ((uint)param_1[0x10] != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,(uint)param_1[0x10],ppppppppplVar18,ppppbVar19,param_5,
                         param_6,param_7,param_8);
        }
        param_4 = (byte ****)(ulong)(byte)param_1[0x13];
        ppppppppplVar18 = (long *********)0xb;
        *(uint *)(param_1 + 0x10) = uVar7;
        FUN_71017df5b0((undefined1 *)&local_170,uVar9,0xb,(ulong)param_4,param_5,param_6,param_7,
                       param_8);
        uVar7 = (uint)(byte)local_170;
        if ((byte)local_170 == 0) {
LAB_71023ff460:
          local_70 = 0;
          local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
        }
        else {
          uVar11 = 0;
          uVar39 = 0xffffffff;
          pbVar34 = (byte *)((ulong)&local_170 | 1);
          do {
            uVar31 = uVar7 + 0x20;
            if (0x19 < uVar7 - 0x41) {
              uVar31 = uVar7;
            }
            uVar39 = (&DAT_7104754084)[(uVar31 ^ uVar39) & 0xff] ^ uVar39 >> 8;
            uVar7 = (uint)*pbVar34;
            uVar11 = uVar11 + 0x100000000;
            pbVar34 = pbVar34 + 1;
          } while (uVar7 != 0);
          uVar11 = uVar11 & 0xff00000000 | (ulong)~uVar39;
          if (uVar11 == 0) goto LAB_71023ff460;
          lVar41 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
          lVar24 = *(long *)(lVar41 + 0x50);
          uVar32 = (ulong)*(uint *)(lVar24 + 4);
          uVar25 = 0;
          if (uVar32 != 0) {
            uVar25 = uVar11 / uVar32;
          }
          lVar24 = lVar24 + (uVar11 - uVar25 * uVar32) * 8;
          uVar7 = *(uint *)(lVar24 + 0xc);
          uVar25 = (ulong)uVar7;
          puVar21 = (ulong *)(*(long *)(lVar41 + 0x58) + (ulong)*(uint *)(lVar24 + 8) * 8);
          puVar23 = puVar21 + uVar25;
          puVar27 = puVar21;
          if (uVar7 != 0) {
            do {
              uVar32 = uVar25;
              if ((long)uVar25 < 0) {
                uVar32 = uVar25 + 1;
              }
              uVar32 = (long)uVar32 >> 1;
              puVar21 = puVar27 + uVar32 + 1;
              uVar25 = uVar25 + ~uVar32;
              if (uVar11 <= (puVar27[uVar32] & 0xffffffffff)) {
                puVar21 = puVar27;
                uVar25 = uVar32;
              }
              puVar27 = puVar21;
            } while (uVar25 != 0);
          }
          if ((puVar21 == puVar23) ||
             ((*puVar21 & 0xffffffffff) != uVar11 || 0xfffffeffffffffff < *puVar21))
          goto LAB_71023ff460;
        }
        FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
        uVar11 = FUN_710353ea90((uint)local_278);
        uVar7 = (uint)uVar11;
        if (uVar7 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar7);
        }
        if (*(uint *)((long)param_1 + 0x84) != 0xffffff) {
          FUN_7103540b10(DAT_7105332f20,*(uint *)((long)param_1 + 0x84),ppppppppplVar18,param_4,
                         param_5,param_6,param_7,param_8);
        }
        *(uint *)((long)param_1 + 0x84) = uVar7;
        lVar24 = DAT_7105332f28;
        if ((char)param_1[0xf] != '\0') {
          uVar7 = *(uint *)((long)param_1 + 0x7c);
          if (uVar7 != 0xffffff) {
            std::recursive_mutex::lock();
            FUN_71035465b0(lVar24,uVar7,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          lVar24 = DAT_7105332f28;
          uVar11 = param_1[0x10];
          if ((uint)uVar11 != 0xffffff) {
            std::recursive_mutex::lock();
            FUN_71035465b0(lVar24,(uint)uVar11,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          lVar24 = DAT_7105332f28;
          uVar7 = *(uint *)((long)param_1 + 0x84);
          if (uVar7 != 0xffffff) {
            std::recursive_mutex::lock();
            FUN_71035465b0(lVar24,uVar7,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
        }
      }
      if (uVar9 == 0x52) {
        param_4 = (byte ****)(ulong)(byte)param_1[0x13];
        *(undefined1 *)((long)param_1 + 0x9b) = 1;
        local_70 = 0;
        local_170 = (long ********)((ulong)local_170._1_7_ << 8);
        FUN_710147f330((long)&local_170,"sound/bank/fighter_voice/vc_%s_result_c%02d.nus3bank",
                       &DAT_710427ffdb,param_4,param_5,param_6,param_7,param_8);
        uVar11 = (ulong)local_70;
        local_278 = (long ********)((ulong)local_278 & 0xffffffffffffff00);
        local_178 = 0;
        if (uVar11 == 0) {
          ppppppppplVar18 = &local_278;
        }
        else {
          uVar4 = local_70 & 1;
          if (local_70 == 1) {
            uVar7 = 0;
            puVar33 = &local_170;
LAB_71023ff814:
            local_178 = (short)uVar7 + 1;
            *(undefined1 *)((long)&local_278 + (ulong)uVar7) = *(undefined1 *)puVar33;
          }
          else {
            uVar25 = 0;
            puVar33 = &local_170;
            lVar24 = (uVar11 & 1) - uVar11;
            do {
              local_178 = (short)uVar25 + 1;
              *(undefined1 *)((long)&local_278 + uVar25) = *(undefined1 *)puVar33;
              uVar11 = (ulong)local_178;
              puVar12 = (undefined1 *)((long)puVar33 + 1);
              puVar33 = (undefined8 *)((long)puVar33 + 2);
              local_178 = local_178 + 1;
              lVar24 = lVar24 + 2;
              *(undefined1 *)((long)&local_278 + uVar11) = *puVar12;
              uVar25 = (ulong)local_178;
              uVar7 = (uint)local_178;
            } while (lVar24 != 0);
            if (uVar4 != 0) goto LAB_71023ff814;
          }
          ppppppppplVar18 = (long *********)((long)&local_278 + (ulong)local_178);
        }
        *(undefined1 *)ppppppppplVar18 = 0;
        FUN_710353e8e0(local_280,(char *)&local_278);
        uVar11 = FUN_710353ea90(local_280[0]);
        uVar7 = (uint)uVar11;
        if (uVar7 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar7);
          local_70 = 0;
          local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
          FUN_710147f330((long)&local_170,"sound/bank/fighter_voice/vc_%s_result_c%02d.tonelabel",
                         &DAT_710427ffdb,(ulong)(byte)param_1[0x13],param_5,param_6,param_7,param_8)
          ;
          uVar11 = (ulong)local_70;
          local_278 = (long ********)((ulong)local_278 & 0xffffffffffffff00);
          local_178 = 0;
          if (uVar11 == 0) {
            ppppppppplVar18 = &local_278;
          }
          else {
            uVar4 = local_70 & 1;
            if (local_70 == 1) {
              uVar9 = 0;
              puVar33 = &local_170;
LAB_71023ffa10:
              local_178 = (short)uVar9 + 1;
              *(undefined1 *)((long)&local_278 + (ulong)uVar9) = *(undefined1 *)puVar33;
            }
            else {
              uVar25 = 0;
              puVar33 = &local_170;
              lVar24 = (uVar11 & 1) - uVar11;
              do {
                local_178 = (short)uVar25 + 1;
                *(undefined1 *)((long)&local_278 + uVar25) = *(undefined1 *)puVar33;
                uVar11 = (ulong)local_178;
                puVar12 = (undefined1 *)((long)puVar33 + 1);
                puVar33 = (undefined8 *)((long)puVar33 + 2);
                local_178 = local_178 + 1;
                lVar24 = lVar24 + 2;
                *(undefined1 *)((long)&local_278 + uVar11) = *puVar12;
                uVar25 = (ulong)local_178;
                uVar9 = (uint)local_178;
              } while (lVar24 != 0);
              if (uVar4 != 0) goto LAB_71023ffa10;
            }
            ppppppppplVar18 = (long *********)((long)&local_278 + (ulong)local_178);
          }
          *(undefined1 *)ppppppppplVar18 = 0;
          FUN_710353e8e0((uint *)&local_170,(char *)&local_278);
          uVar11 = FUN_710353ea90((uint)local_170);
          uVar9 = (uint)uVar11;
          if (uVar9 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,uVar9);
          }
          param_4 = (byte ****)(ulong)(byte)param_1[0x13];
          local_70 = 0;
          local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
          FUN_710147f330((long)&local_170,"sound/bank/fighter_voice/vc_%s_result_c%02d.nus3audio",
                         &DAT_710427ffdb,param_4,param_5,param_6,param_7,param_8);
          uVar11 = (ulong)local_70;
          local_278 = (long ********)((ulong)local_278 & 0xffffffffffffff00);
          local_178 = 0;
          if (uVar11 == 0) {
            ppppppppplVar18 = &local_278;
          }
          else {
            uVar4 = local_70 & 1;
            if (local_70 == 1) {
              uVar39 = 0;
              puVar33 = &local_170;
LAB_71023ffc8c:
              local_178 = (short)uVar39 + 1;
              *(undefined1 *)((long)&local_278 + (ulong)uVar39) = *(undefined1 *)puVar33;
            }
            else {
              uVar25 = 0;
              puVar33 = &local_170;
              lVar24 = (uVar11 & 1) - uVar11;
              do {
                local_178 = (short)uVar25 + 1;
                *(undefined1 *)((long)&local_278 + uVar25) = *(undefined1 *)puVar33;
                uVar11 = (ulong)local_178;
                puVar12 = (undefined1 *)((long)puVar33 + 1);
                puVar33 = (undefined8 *)((long)puVar33 + 2);
                local_178 = local_178 + 1;
                lVar24 = lVar24 + 2;
                *(undefined1 *)((long)&local_278 + uVar11) = *puVar12;
                uVar25 = (ulong)local_178;
                uVar39 = (uint)local_178;
              } while (lVar24 != 0);
              if (uVar4 != 0) goto LAB_71023ffc8c;
            }
            ppppppppplVar18 = (long *********)((long)&local_278 + (ulong)local_178);
          }
          *(undefined1 *)ppppppppplVar18 = 0;
          uVar39 = (uint)(byte)local_278;
          if ((byte)local_278 == 0) {
LAB_71023ffdb0:
            ppppppppplVar18 = (long *********)&local_170;
            local_70 = 0;
            local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
          }
          else {
            uVar11 = 0;
            uVar31 = 0xffffffff;
            pbVar34 = (byte *)((ulong)&local_278 | 1);
            do {
              uVar2 = uVar39 + 0x20;
              if (0x19 < uVar39 - 0x41) {
                uVar2 = uVar39;
              }
              uVar31 = (&DAT_7104754084)[(uVar2 ^ uVar31) & 0xff] ^ uVar31 >> 8;
              uVar39 = (uint)*pbVar34;
              uVar11 = uVar11 + 0x100000000;
              pbVar34 = pbVar34 + 1;
            } while (uVar39 != 0);
            uVar11 = uVar11 & 0xff00000000 | (ulong)~uVar31;
            if (uVar11 == 0) goto LAB_71023ffdb0;
            lVar41 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
            lVar24 = *(long *)(lVar41 + 0x50);
            uVar32 = (ulong)*(uint *)(lVar24 + 4);
            uVar25 = 0;
            if (uVar32 != 0) {
              uVar25 = uVar11 / uVar32;
            }
            lVar24 = lVar24 + (uVar11 - uVar25 * uVar32) * 8;
            uVar39 = *(uint *)(lVar24 + 0xc);
            uVar25 = (ulong)uVar39;
            puVar21 = (ulong *)(*(long *)(lVar41 + 0x58) + (ulong)*(uint *)(lVar24 + 8) * 8);
            puVar23 = puVar21 + uVar25;
            puVar27 = puVar21;
            if (uVar39 != 0) {
              do {
                uVar32 = uVar25;
                if ((long)uVar25 < 0) {
                  uVar32 = uVar25 + 1;
                }
                uVar32 = (long)uVar32 >> 1;
                puVar21 = puVar27 + uVar32 + 1;
                uVar25 = uVar25 + ~uVar32;
                if (uVar11 <= (puVar27[uVar32] & 0xffffffffff)) {
                  puVar21 = puVar27;
                  uVar25 = uVar32;
                }
                puVar27 = puVar21;
              } while (uVar25 != 0);
            }
            if ((puVar21 == puVar23) ||
               ((*puVar21 & 0xffffffffff) != uVar11 || 0xfffffeffffffffff < *puVar21))
            goto LAB_71023ffdb0;
            ppppppppplVar18 = &local_278;
          }
          FUN_710353e8e0(local_280,(char *)ppppppppplVar18);
          uVar11 = FUN_710353ea90(local_280[0]);
          uVar39 = (uint)uVar11;
          if (uVar39 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,uVar39);
          }
          lVar24 = DAT_7105332f28;
          std::recursive_mutex::lock();
          ppppppppplVar18 = (long *********)0x2;
          FUN_71035465b0(lVar24,uVar7,2,param_4,param_5,param_6,param_7,param_8);
          std::recursive_mutex::unlock();
          lVar24 = DAT_7105332f28;
          if (uVar9 != 0xffffff) {
            std::recursive_mutex::lock();
            ppppppppplVar18 = (long *********)0x2;
            FUN_71035465b0(lVar24,uVar9,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          lVar24 = DAT_7105332f28;
          if (uVar39 != 0xffffff) {
            std::recursive_mutex::lock();
            ppppppppplVar18 = (long *********)0x2;
            FUN_71035465b0(lVar24,uVar39,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          local_170 = (long ********)CONCAT35(local_170._5_3_,0x100000052);
          local_168 = uVar7;
          local_164 = uVar9;
          local_160 = uVar39;
          FUN_7102401560((long *)(param_1 + 0xc),(uint *)&local_170,ppppppppplVar18,param_4,param_5,
                         param_6,param_7,param_8);
          if (local_160 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_160,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_160 = 0xffffff;
          }
          if (local_164 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_164,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_164 = 0xffffff;
          }
          if (local_168 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_168,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_168 = 0xffffff;
          }
        }
        uVar9 = 0x52;
      }
      else {
        if (uVar9 != 0x2b) goto LAB_710240006c;
        param_4 = (byte ****)(ulong)(byte)param_1[0x13];
        *(undefined1 *)((long)param_1 + 0x9b) = 1;
        local_70 = 0;
        local_170 = (long ********)((ulong)local_170._1_7_ << 8);
        FUN_710147f330((long)&local_170,"sound/bank/fighter/se_%s_c%02d.nus3bank","Pikmin",param_4,
                       param_5,param_6,param_7,param_8);
        uVar11 = (ulong)local_70;
        local_278 = (long ********)((ulong)local_278 & 0xffffffffffffff00);
        local_178 = 0;
        if (uVar11 == 0) {
          ppppppppplVar18 = &local_278;
        }
        else {
          uVar4 = local_70 & 1;
          if (local_70 == 1) {
            uVar7 = 0;
            puVar33 = &local_170;
LAB_71023ff720:
            local_178 = (short)uVar7 + 1;
            *(undefined1 *)((long)&local_278 + (ulong)uVar7) = *(undefined1 *)puVar33;
          }
          else {
            uVar25 = 0;
            puVar33 = &local_170;
            lVar24 = (uVar11 & 1) - uVar11;
            do {
              local_178 = (short)uVar25 + 1;
              *(undefined1 *)((long)&local_278 + uVar25) = *(undefined1 *)puVar33;
              uVar11 = (ulong)local_178;
              puVar12 = (undefined1 *)((long)puVar33 + 1);
              puVar33 = (undefined8 *)((long)puVar33 + 2);
              local_178 = local_178 + 1;
              lVar24 = lVar24 + 2;
              *(undefined1 *)((long)&local_278 + uVar11) = *puVar12;
              uVar25 = (ulong)local_178;
              uVar7 = (uint)local_178;
            } while (lVar24 != 0);
            if (uVar4 != 0) goto LAB_71023ff720;
          }
          ppppppppplVar18 = (long *********)((long)&local_278 + (ulong)local_178);
        }
        *(undefined1 *)ppppppppplVar18 = 0;
        FUN_710353e8e0(local_280,(char *)&local_278);
        uVar11 = FUN_710353ea90(local_280[0]);
        uVar7 = (uint)uVar11;
        if (uVar7 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,uVar7);
          local_70 = 0;
          local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
          FUN_710147f330((long)&local_170,"sound/bank/fighter/se_%s_c%02d.tonelabel","Pikmin",
                         (ulong)(byte)param_1[0x13],param_5,param_6,param_7,param_8);
          uVar11 = (ulong)local_70;
          local_278 = (long ********)((ulong)local_278 & 0xffffffffffffff00);
          local_178 = 0;
          if (uVar11 == 0) {
            ppppppppplVar18 = &local_278;
          }
          else {
            uVar4 = local_70 & 1;
            if (local_70 == 1) {
              uVar9 = 0;
              puVar33 = &local_170;
LAB_71023ff918:
              local_178 = (short)uVar9 + 1;
              *(undefined1 *)((long)&local_278 + (ulong)uVar9) = *(undefined1 *)puVar33;
            }
            else {
              uVar25 = 0;
              puVar33 = &local_170;
              lVar24 = (uVar11 & 1) - uVar11;
              do {
                local_178 = (short)uVar25 + 1;
                *(undefined1 *)((long)&local_278 + uVar25) = *(undefined1 *)puVar33;
                uVar11 = (ulong)local_178;
                puVar12 = (undefined1 *)((long)puVar33 + 1);
                puVar33 = (undefined8 *)((long)puVar33 + 2);
                local_178 = local_178 + 1;
                lVar24 = lVar24 + 2;
                *(undefined1 *)((long)&local_278 + uVar11) = *puVar12;
                uVar25 = (ulong)local_178;
                uVar9 = (uint)local_178;
              } while (lVar24 != 0);
              if (uVar4 != 0) goto LAB_71023ff918;
            }
            ppppppppplVar18 = (long *********)((long)&local_278 + (ulong)local_178);
          }
          *(undefined1 *)ppppppppplVar18 = 0;
          FUN_710353e8e0((uint *)&local_170,(char *)&local_278);
          uVar11 = FUN_710353ea90((uint)local_170);
          uVar9 = (uint)uVar11;
          if (uVar9 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,uVar9);
          }
          param_4 = (byte ****)(ulong)(byte)param_1[0x13];
          local_70 = 0;
          local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
          FUN_710147f330((long)&local_170,"sound/bank/fighter/se_%s_c%02d.nus3audio","Pikmin",
                         param_4,param_5,param_6,param_7,param_8);
          uVar11 = (ulong)local_70;
          local_278 = (long ********)((ulong)local_278 & 0xffffffffffffff00);
          local_178 = 0;
          if (uVar11 == 0) {
            ppppppppplVar18 = &local_278;
          }
          else {
            uVar4 = local_70 & 1;
            if (local_70 == 1) {
              uVar39 = 0;
              puVar33 = &local_170;
LAB_71023ffb08:
              local_178 = (short)uVar39 + 1;
              *(undefined1 *)((long)&local_278 + (ulong)uVar39) = *(undefined1 *)puVar33;
            }
            else {
              uVar25 = 0;
              puVar33 = &local_170;
              lVar24 = (uVar11 & 1) - uVar11;
              do {
                local_178 = (short)uVar25 + 1;
                *(undefined1 *)((long)&local_278 + uVar25) = *(undefined1 *)puVar33;
                uVar11 = (ulong)local_178;
                puVar12 = (undefined1 *)((long)puVar33 + 1);
                puVar33 = (undefined8 *)((long)puVar33 + 2);
                local_178 = local_178 + 1;
                lVar24 = lVar24 + 2;
                *(undefined1 *)((long)&local_278 + uVar11) = *puVar12;
                uVar25 = (ulong)local_178;
                uVar39 = (uint)local_178;
              } while (lVar24 != 0);
              if (uVar4 != 0) goto LAB_71023ffb08;
            }
            ppppppppplVar18 = (long *********)((long)&local_278 + (ulong)local_178);
          }
          *(undefined1 *)ppppppppplVar18 = 0;
          uVar39 = (uint)(byte)local_278;
          if ((byte)local_278 == 0) {
LAB_71023ffc2c:
            ppppppppplVar18 = (long *********)&local_170;
            local_70 = 0;
            local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
          }
          else {
            uVar11 = 0;
            uVar31 = 0xffffffff;
            pbVar34 = (byte *)((ulong)&local_278 | 1);
            do {
              uVar2 = uVar39 + 0x20;
              if (0x19 < uVar39 - 0x41) {
                uVar2 = uVar39;
              }
              uVar31 = (&DAT_7104754084)[(uVar2 ^ uVar31) & 0xff] ^ uVar31 >> 8;
              uVar39 = (uint)*pbVar34;
              uVar11 = uVar11 + 0x100000000;
              pbVar34 = pbVar34 + 1;
            } while (uVar39 != 0);
            uVar11 = uVar11 & 0xff00000000 | (ulong)~uVar31;
            if (uVar11 == 0) goto LAB_71023ffc2c;
            lVar41 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
            lVar24 = *(long *)(lVar41 + 0x50);
            uVar32 = (ulong)*(uint *)(lVar24 + 4);
            uVar25 = 0;
            if (uVar32 != 0) {
              uVar25 = uVar11 / uVar32;
            }
            lVar24 = lVar24 + (uVar11 - uVar25 * uVar32) * 8;
            uVar39 = *(uint *)(lVar24 + 0xc);
            uVar25 = (ulong)uVar39;
            puVar21 = (ulong *)(*(long *)(lVar41 + 0x58) + (ulong)*(uint *)(lVar24 + 8) * 8);
            puVar23 = puVar21 + uVar25;
            puVar27 = puVar21;
            if (uVar39 != 0) {
              do {
                uVar32 = uVar25;
                if ((long)uVar25 < 0) {
                  uVar32 = uVar25 + 1;
                }
                uVar32 = (long)uVar32 >> 1;
                puVar21 = puVar27 + uVar32 + 1;
                uVar25 = uVar25 + ~uVar32;
                if (uVar11 <= (puVar27[uVar32] & 0xffffffffff)) {
                  puVar21 = puVar27;
                  uVar25 = uVar32;
                }
                puVar27 = puVar21;
              } while (uVar25 != 0);
            }
            if ((puVar21 == puVar23) ||
               ((*puVar21 & 0xffffffffff) != uVar11 || 0xfffffeffffffffff < *puVar21))
            goto LAB_71023ffc2c;
            ppppppppplVar18 = &local_278;
          }
          FUN_710353e8e0(local_280,(char *)ppppppppplVar18);
          uVar11 = FUN_710353ea90(local_280[0]);
          uVar39 = (uint)uVar11;
          if (uVar39 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,uVar39);
          }
          lVar24 = DAT_7105332f28;
          std::recursive_mutex::lock();
          ppppppppplVar18 = (long *********)0x2;
          FUN_71035465b0(lVar24,uVar7,2,param_4,param_5,param_6,param_7,param_8);
          std::recursive_mutex::unlock();
          lVar24 = DAT_7105332f28;
          if (uVar9 != 0xffffff) {
            std::recursive_mutex::lock();
            ppppppppplVar18 = (long *********)0x2;
            FUN_71035465b0(lVar24,uVar9,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          lVar24 = DAT_7105332f28;
          if (uVar39 != 0xffffff) {
            std::recursive_mutex::lock();
            ppppppppplVar18 = (long *********)0x2;
            FUN_71035465b0(lVar24,uVar39,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          local_170 = (long ********)CONCAT35(local_170._5_3_,0x10000002b);
          local_168 = uVar7;
          local_164 = uVar9;
          local_160 = uVar39;
          FUN_7102401560((long *)(param_1 + 0xc),(uint *)&local_170,ppppppppplVar18,param_4,param_5,
                         param_6,param_7,param_8);
          if (local_160 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_160,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_160 = 0xffffff;
          }
          if (local_164 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_164,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_164 = 0xffffff;
          }
          if (local_168 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_168,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_168 = 0xffffff;
          }
        }
        uVar9 = 0x2b;
      }
    }
  }
  else {
    if (((((ulong)puVar10 & 0xff00000000000000) != 0xc100000000000000) || (uVar17 == 0)) ||
       ((((ulong)puVar10 ^ (ulong)puVar12) & 0xffffffffff) != 0)) {
      uVar35 = param_1[0x11];
      uVar32 = uVar35 & 0xff00000000000000;
      uVar25 = uVar35 & 0xffffffffff;
      if ((uVar32 != 0xc100000000000000) || (uVar25 == 0)) goto LAB_71023ff11c;
      if ((uVar8 & 1) == 0 && ((uVar35 ^ (ulong)puVar12) & 0xffffffffff) != 0) goto LAB_71023ff0b8;
    }
LAB_71023ff158:
    uVar9 = 0xffffffff;
  }
LAB_710240006c:
  uVar11 = param_1[0x11];
  uVar25 = param_1[0x12];
  uVar32 = uVar11 & 0xffffffffff;
  if (((uVar25 & 0xff00000000000000) == 0xc100000000000000) && ((uVar25 & 0xffffffffff) != 0)) {
    if (((uVar11 & 0xff00000000000000) == 0xc100000000000000) && (uVar32 != 0)) {
      uVar32 = (uVar11 ^ uVar25) & 0xffffffffff;
joined_r0x007102400410:
      if (uVar32 == 0) goto LAB_7102400414;
    }
    if ((uVar8 & 1) == 0) {
      if (uVar9 == 6) {
        uVar11 = *param_1;
        uVar25 = param_1[1];
        if (uVar11 != uVar25) {
          puVar21 = param_1 + 0xd;
          do {
            uVar32 = *(ulong *)(uVar11 + 0x20);
            if (((uVar32 & 0xff00000000000000) == 0xc100000000000000 && (uVar32 & 0xffffffffff) != 0
                ) && ((((ulong)puVar10 & 0xff00000000000000) != 0xc100000000000000 || uVar17 == 0 ||
                      ((((ulong)puVar10 ^ uVar32) & 0xffffffffff) != 0)))) {
              uVar35 = param_1[0x11];
              if (((uVar35 & 0xff00000000000000) == 0xc100000000000000) &&
                 (((uVar35 & 0xffffffffff) != 0 && (((uVar35 ^ uVar32) & 0xffffffffff) == 0)))) {
                FUN_7102401730((long)param_1,0x4b,1,param_4,param_5,param_6,param_7,param_8);
              }
              else {
                uVar14 = FUN_71032626e0(*(long *)(lVar42 + 0x168),uVar32);
                uVar7 = (uint)uVar14;
                if (uVar7 != 0xffffffff) {
                  puVar27 = (ulong *)*puVar21;
                  puVar23 = puVar21;
                  if (puVar27 != (ulong *)0x0) {
                    do {
                      bVar6 = *(uint *)((long)puVar27 + 0x1c) < uVar7;
                      if (!bVar6) {
                        puVar23 = puVar27;
                      }
                      puVar27 = (ulong *)puVar27[bVar6];
                    } while (puVar27 != (ulong *)0x0);
                    if ((puVar23 != puVar21) && (*(uint *)((long)puVar23 + 0x1c) <= uVar7))
                    goto LAB_710240087c;
                  }
                  FUN_71017df5b0((undefined1 *)&local_170,uVar7,0x1e,0,param_5,param_6,param_7,
                                 param_8);
                  FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
                  uVar32 = FUN_710353ea90((uint)local_278);
                  uVar8 = (uint)uVar32;
                  if (uVar8 != 0xffffff) {
                    FUN_7103540a00(DAT_7105332f20,uVar8);
                  }
                  FUN_71017df5b0((undefined1 *)&local_170,uVar7,0x1f,0,param_5,param_6,param_7,
                                 param_8);
                  FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
                  uVar32 = FUN_710353ea90((uint)local_278);
                  uVar9 = (uint)uVar32;
                  if (uVar9 != 0xffffff) {
                    FUN_7103540a00(DAT_7105332f20,uVar9);
                  }
                  ppppppppplVar18 = (long *********)&SUB_00000020;
                  param_4 = (byte ****)0x0;
                  FUN_71017df5b0((undefined1 *)&local_170,uVar7,0x20,0,param_5,param_6,param_7,
                                 param_8);
                  uVar39 = (uint)(byte)local_170;
                  if ((byte)local_170 == 0) {
LAB_7102400778:
                    local_70 = 0;
                    local_170 = (long ********)((ulong)local_170 & 0xffffffffffffff00);
                  }
                  else {
                    uVar32 = 0;
                    uVar31 = 0xffffffff;
                    pbVar34 = (byte *)((ulong)&local_170 | 1);
                    do {
                      uVar2 = uVar39 + 0x20;
                      if (0x19 < uVar39 - 0x41) {
                        uVar2 = uVar39;
                      }
                      uVar31 = (&DAT_7104754084)[(uVar2 ^ uVar31) & 0xff] ^ uVar31 >> 8;
                      uVar39 = (uint)*pbVar34;
                      uVar32 = uVar32 + 0x100000000;
                      pbVar34 = pbVar34 + 1;
                    } while (uVar39 != 0);
                    uVar32 = uVar32 & 0xff00000000 | (ulong)~uVar31;
                    if (uVar32 == 0) goto LAB_7102400778;
                    lVar41 = **(long **)(*(long *)(DAT_7105332f28 + 0xd0) + 0x78);
                    lVar24 = *(long *)(lVar41 + 0x50);
                    uVar37 = (ulong)*(uint *)(lVar24 + 4);
                    uVar35 = 0;
                    if (uVar37 != 0) {
                      uVar35 = uVar32 / uVar37;
                    }
                    lVar24 = lVar24 + (uVar32 - uVar35 * uVar37) * 8;
                    uVar39 = *(uint *)(lVar24 + 0xc);
                    uVar35 = (ulong)uVar39;
                    puVar23 = (ulong *)(*(long *)(lVar41 + 0x58) + (ulong)*(uint *)(lVar24 + 8) * 8)
                    ;
                    puVar27 = puVar23 + uVar35;
                    puVar22 = puVar23;
                    if (uVar39 != 0) {
                      do {
                        uVar37 = uVar35;
                        if ((long)uVar35 < 0) {
                          uVar37 = uVar35 + 1;
                        }
                        uVar37 = (long)uVar37 >> 1;
                        puVar23 = puVar22 + uVar37 + 1;
                        uVar35 = uVar35 + ~uVar37;
                        if (uVar32 <= (puVar22[uVar37] & 0xffffffffff)) {
                          puVar23 = puVar22;
                          uVar35 = uVar37;
                        }
                        puVar22 = puVar23;
                      } while (uVar35 != 0);
                    }
                    if ((puVar23 == puVar27) ||
                       ((*puVar23 & 0xffffffffff) != uVar32 || 0xfffffeffffffffff < *puVar23))
                    goto LAB_7102400778;
                  }
                  FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
                  uVar32 = FUN_710353ea90((uint)local_278);
                  uVar39 = (uint)uVar32;
                  lVar24 = DAT_7105332f28;
                  if (uVar39 != 0xffffff) {
                    FUN_7103540a00(DAT_7105332f20,uVar39);
                    lVar24 = DAT_7105332f28;
                  }
                  if (uVar8 != 0xffffff) {
                    DAT_7105332f28 = lVar24;
                    std::recursive_mutex::lock();
                    ppppppppplVar18 = (long *********)0x2;
                    FUN_71035465b0(lVar24,uVar8,2,param_4,param_5,param_6,param_7,param_8);
                    std::recursive_mutex::unlock();
                    lVar24 = DAT_7105332f28;
                  }
                  if (uVar9 != 0xffffff) {
                    DAT_7105332f28 = lVar24;
                    std::recursive_mutex::lock();
                    ppppppppplVar18 = (long *********)0x2;
                    FUN_71035465b0(lVar24,uVar9,2,param_4,param_5,param_6,param_7,param_8);
                    std::recursive_mutex::unlock();
                    lVar24 = DAT_7105332f28;
                  }
                  DAT_7105332f28 = lVar24;
                  if (uVar39 != 0xffffff) {
                    std::recursive_mutex::lock();
                    ppppppppplVar18 = (long *********)0x2;
                    FUN_71035465b0(lVar24,uVar39,2,param_4,param_5,param_6,param_7,param_8);
                    std::recursive_mutex::unlock();
                  }
                  local_170._0_5_ = CONCAT14(1,uVar7);
                  local_168 = uVar8;
                  local_164 = uVar9;
                  local_160 = uVar39;
                  FUN_7102401560((long *)(param_1 + 0xc),(uint *)&local_170,ppppppppplVar18,param_4,
                                 param_5,param_6,param_7,param_8);
                  if (local_160 != 0xffffff) {
                    FUN_7103540b10(DAT_7105332f20,local_160,ppppppppplVar18,param_4,param_5,param_6,
                                   param_7,param_8);
                    local_160 = 0xffffff;
                  }
                  if (local_164 != 0xffffff) {
                    FUN_7103540b10(DAT_7105332f20,local_164,ppppppppplVar18,param_4,param_5,param_6,
                                   param_7,param_8);
                    local_164 = 0xffffff;
                  }
                  if (local_168 != 0xffffff) {
                    FUN_7103540b10(DAT_7105332f20,local_168,ppppppppplVar18,param_4,param_5,param_6,
                                   param_7,param_8);
                    local_168 = 0xffffff;
                  }
                }
              }
            }
LAB_710240087c:
            uVar11 = uVar11 + 0x150;
          } while (uVar11 != uVar25);
        }
      }
    }
    else {
      uVar14 = FUN_71032626e0(*(long *)(lVar42 + 0x168),uVar25);
      uVar11 = *param_1;
      uVar17 = param_1[1];
      if (uVar11 != uVar17) {
        puVar21 = param_1 + 0xd;
        do {
          bVar3 = *(byte *)(uVar11 + 0x3c);
          param_4 = (byte ****)(ulong)bVar3;
          puVar27 = (ulong *)*puVar21;
          puVar23 = puVar21;
          if (puVar27 == (ulong *)0x0) {
LAB_710240010c:
            uVar7 = (uint)uVar14;
            FUN_71017dfe10((byte *)&local_170,uVar7,0x16,(ulong)param_4,0,param_6,param_7,param_8);
            FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
            uVar25 = FUN_710353ea90((uint)local_278);
            uVar8 = (uint)uVar25;
            if (uVar8 != 0xffffff) {
              FUN_7103540a00(DAT_7105332f20,uVar8);
            }
            FUN_71017dfe10((byte *)&local_170,uVar7,0x17,(ulong)*(byte *)(uVar11 + 0x3c),0,param_6,
                           param_7,param_8);
            FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
            uVar25 = FUN_710353ea90((uint)local_278);
            uVar9 = (uint)uVar25;
            if (uVar9 != 0xffffff) {
              FUN_7103540a00(DAT_7105332f20,uVar9);
            }
            param_4 = (byte ****)(ulong)*(byte *)(uVar11 + 0x3c);
            ppppppppplVar18 = (long *********)&SUB_00000018;
            param_5 = (long ****)0x0;
            FUN_71017dfe10((byte *)&local_170,uVar7,0x18,(ulong)param_4,0,param_6,param_7,param_8);
            FUN_710353e8e0((uint *)&local_278,(char *)&local_170);
            uVar25 = FUN_710353ea90((uint)local_278);
            uVar7 = (uint)uVar25;
            lVar42 = DAT_7105332f28;
            if (uVar7 != 0xffffff) {
              FUN_7103540a00(DAT_7105332f20,uVar7);
              lVar42 = DAT_7105332f28;
            }
            if (uVar8 != 0xffffff) {
              DAT_7105332f28 = lVar42;
              std::recursive_mutex::lock();
              ppppppppplVar18 = (long *********)0x2;
              FUN_71035465b0(lVar42,uVar8,2,param_4,param_5,param_6,param_7,param_8);
              std::recursive_mutex::unlock();
              lVar42 = DAT_7105332f28;
            }
            if (uVar9 != 0xffffff) {
              DAT_7105332f28 = lVar42;
              std::recursive_mutex::lock();
              ppppppppplVar18 = (long *********)0x2;
              FUN_71035465b0(lVar42,uVar9,2,param_4,param_5,param_6,param_7,param_8);
              std::recursive_mutex::unlock();
              lVar42 = DAT_7105332f28;
            }
            DAT_7105332f28 = lVar42;
            if (uVar7 != 0xffffff) {
              std::recursive_mutex::lock();
              ppppppppplVar18 = (long *********)0x2;
              FUN_71035465b0(lVar42,uVar7,2,param_4,param_5,param_6,param_7,param_8);
              std::recursive_mutex::unlock();
            }
            bVar3 = *(byte *)(uVar11 + 0x3c);
            plVar15 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,param_4,param_5,
                                             param_6,param_7,param_8);
            if (plVar15 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_278 = (long ********)((ulong)local_278 & 0xffffffff00000000);
                local_170 = (long ********)&DAT_00000030;
                ppppppppplVar18 = (long *********)&local_170;
                uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_278);
                if (((uVar25 & 1) != 0) &&
                   (plVar15 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,param_4,
                                                     param_5,param_6,param_7,param_8),
                   plVar15 != (long *)0x0)) goto LAB_710240026c;
              }
              plVar15 = (long *)0x0;
            }
LAB_710240026c:
            uVar39 = (uint)bVar3;
            *(uint *)((long)plVar15 + 0x1c) = uVar39;
            *(uint *)((long)plVar15 + 0x24) = uVar8;
            *(uint *)(plVar15 + 5) = uVar9;
            *(undefined1 *)(plVar15 + 4) = 1;
            *(uint *)((long)plVar15 + 0x2c) = uVar7;
            puVar27 = (ulong *)*puVar21;
            puVar23 = puVar21;
            while (puVar22 = puVar23, puVar27 != (ulong *)0x0) {
              while (puVar22 = puVar27, uVar8 = *(uint *)((long)puVar22 + 0x1c),
                    uVar39 > uVar8 || uVar8 == bVar3) {
                if (uVar39 <= uVar8) goto LAB_7102400354;
                puVar23 = puVar22 + 1;
                puVar27 = (ulong *)*puVar23;
                if ((ulong *)*puVar23 == (ulong *)0x0) goto LAB_7102400354;
              }
              puVar23 = puVar22;
              puVar27 = (ulong *)*puVar22;
            }
LAB_7102400354:
            if (*puVar23 == 0) {
              *plVar15 = 0;
              plVar15[1] = 0;
              plVar15[2] = (long)puVar22;
              *puVar23 = (ulong)plVar15;
              if (*(ulong *)param_1[0xc] != 0) {
                param_1[0xc] = *(ulong *)param_1[0xc];
                plVar15 = (long *)*puVar23;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)param_1[0xd],plVar15);
              param_1[0xe] = param_1[0xe] + 1;
            }
            else {
              if (uVar7 != 0xffffff) {
                FUN_7103540b10(DAT_7105332f20,uVar7,ppppppppplVar18,param_4,param_5,param_6,param_7,
                               param_8);
                uVar9 = *(uint *)(plVar15 + 5);
                *(undefined4 *)((long)plVar15 + 0x2c) = 0xffffff;
              }
              if (uVar9 != 0xffffff) {
                FUN_7103540b10(DAT_7105332f20,uVar9,ppppppppplVar18,param_4,param_5,param_6,param_7,
                               param_8);
                *(undefined4 *)(plVar15 + 5) = 0xffffff;
              }
              if (*(uint *)((long)plVar15 + 0x24) != 0xffffff) {
                FUN_7103540b10(DAT_7105332f20,*(uint *)((long)plVar15 + 0x24),ppppppppplVar18,
                               param_4,param_5,param_6,param_7,param_8);
                *(undefined4 *)((long)plVar15 + 0x24) = 0xffffff;
              }
              FUN_710392eb40((ulong)plVar15);
            }
          }
          else {
            do {
              uVar7 = (uint)bVar3;
              bVar6 = *(uint *)((long)puVar27 + 0x1c) < uVar7;
              if (!bVar6) {
                puVar23 = puVar27;
              }
              puVar27 = (ulong *)puVar27[bVar6];
            } while (puVar27 != (ulong *)0x0);
            if ((puVar23 == puVar21) ||
               (uVar7 <= *(uint *)((long)puVar23 + 0x1c) &&
                *(uint *)((long)puVar23 + 0x1c) != (uint)bVar3)) goto LAB_710240010c;
          }
          uVar11 = uVar11 + 0x150;
        } while (uVar11 != uVar17);
      }
    }
  }
  else {
    if ((uVar11 & 0xff00000000000000) == 0xc100000000000000) goto joined_r0x007102400410;
LAB_7102400414:
    FUN_7102401730((long)param_1,0x4b,0,param_4,param_5,param_6,param_7,param_8);
    FUN_7102401730((long)param_1,0x4c,0,param_4,param_5,param_6,param_7,param_8);
  }
  uVar11 = *param_1;
  uVar17 = param_1[1];
  if (uVar11 != uVar17) {
    puVar21 = param_1 + 10;
    puVar23 = param_1 + 9;
    puVar27 = param_1 + 7;
    pbVar34 = (byte *)((long)&local_168 + 1);
    uVar7 = 0xffffff;
    iVar38 = 0;
    do {
      uVar8 = *(uint *)(uVar11 + 0x28);
      if (uVar8 == 0xffffffff) {
        iVar40 = *(int *)(uVar11 + 0x2c);
        if (iVar40 == -1) {
          if (*(char *)(uVar11 + 0x3e) != '\0') {
            uVar8 = *(uint *)(uVar11 + 200);
            if (uVar8 == 0) {
              uVar25 = 0;
            }
            else {
              uVar9 = 0xffffffff;
              pbVar30 = (byte *)(uVar11 + 0xcc);
              do {
                pbVar36 = pbVar30 + 1;
                bVar3 = *pbVar30;
                uVar39 = bVar3 + 0x20;
                if (0x19 < bVar3 - 0x41) {
                  uVar39 = (uint)bVar3;
                }
                uVar9 = (&DAT_7104754084)[(uVar39 ^ uVar9) & 0xff] ^ uVar9 >> 8;
                pbVar30 = pbVar36;
              } while (pbVar36 < (byte *)(uVar11 + 0xcc) + uVar8);
              uVar25 = (ulong)~uVar9;
            }
            uVar25 = uVar25 | ((long)(int)uVar8 & 0xffU) << 0x20;
            puVar28 = (ulong *)*puVar27;
            puVar22 = puVar27;
            if (puVar28 != (ulong *)0x0) {
              do {
                bVar6 = (puVar28[4] & 0xffffffffff) < uVar25;
                if (!bVar6) {
                  puVar22 = puVar28;
                }
                puVar28 = (ulong *)puVar28[bVar6];
              } while (puVar28 != (ulong *)0x0);
              if ((puVar22 != puVar27) && ((puVar22[4] & 0xffffffffff) <= uVar25))
              goto LAB_710240151c;
            }
            local_168 = local_168 & 0xffffff00;
            local_170 = (long ********)0x0;
            FUN_710062dc20((uint *)&local_170,"sound/bank/stage/%s.nus3bank");
            lVar42 = DAT_7105332f20;
            uVar8 = local_168 & 0xff;
            if ((char)local_168 == '\0') {
LAB_71024010b0:
              uVar9 = 0xffffff;
            }
            else {
              uVar32 = 0;
              uVar9 = 0xffffffff;
              pbVar30 = pbVar34;
              do {
                uVar39 = uVar8 + 0x20;
                if (0x19 < uVar8 - 0x41) {
                  uVar39 = uVar8;
                }
                uVar9 = (&DAT_7104754084)[(uVar39 ^ uVar9) & 0xff] ^ uVar9 >> 8;
                uVar8 = (uint)*pbVar30;
                uVar32 = uVar32 + 0x100000000;
                pbVar30 = pbVar30 + 1;
              } while (uVar8 != 0);
              uVar32 = uVar32 & 0xff00000000 | (ulong)~uVar9;
              if (uVar32 == 0) goto LAB_71024010b0;
              lVar24 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
              uVar37 = (ulong)*(uint *)(lVar24 + 4);
              uVar35 = 0;
              if (uVar37 != 0) {
                uVar35 = uVar32 / uVar37;
              }
              lVar24 = lVar24 + (uVar32 - uVar35 * uVar37) * 8;
              uVar8 = *(uint *)(lVar24 + 0xc);
              uVar35 = (ulong)uVar8;
              puVar22 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                                 (ulong)*(uint *)(lVar24 + 8) * 8);
              puVar28 = puVar22 + uVar35;
              puVar29 = puVar22;
              if (uVar8 != 0) {
                do {
                  uVar37 = uVar35;
                  if ((long)uVar35 < 0) {
                    uVar37 = uVar35 + 1;
                  }
                  uVar37 = (long)uVar37 >> 1;
                  puVar22 = puVar29 + uVar37 + 1;
                  uVar35 = uVar35 + ~uVar37;
                  if (uVar32 <= (puVar29[uVar37] & 0xffffffffff)) {
                    puVar22 = puVar29;
                    uVar35 = uVar37;
                  }
                  puVar29 = puVar22;
                } while (uVar35 != 0);
              }
              if (puVar22 == puVar28) goto LAB_71024010b0;
              uVar35 = *puVar22;
              uVar8 = (uint)(uVar35 >> 0x28);
              if ((uVar35 & 0xffffffffff) != uVar32 || uVar8 == 0xffffff) goto LAB_71024010b0;
              std::recursive_mutex::lock();
              puVar16 = FUN_71035404b0(lVar42,uVar35 & 0xffffff0000000000 | uVar32);
              std::recursive_mutex::unlock();
              uVar9 = uVar7;
              if (puVar16 != (uint *)0x0) {
                uVar9 = uVar8;
              }
              if ((uVar9 == 0xffffff) ||
                 (*(char *)(*(long *)(lVar42 + 8) + (ulong)uVar9 * 8 + 4) == '\0'))
              goto LAB_71024010b0;
            }
            local_168 = local_168 & 0xffffff00;
            local_170 = (long ********)0x0;
            FUN_710062dc20((uint *)&local_170,"sound/bank/stage/%s.tonelabel");
            lVar42 = DAT_7105332f20;
            uVar8 = local_168 & 0xff;
            if ((char)local_168 == '\0') {
LAB_71024011c4:
              uVar39 = 0xffffff;
            }
            else {
              uVar32 = 0;
              uVar39 = 0xffffffff;
              pbVar30 = pbVar34;
              do {
                uVar31 = uVar8 + 0x20;
                if (0x19 < uVar8 - 0x41) {
                  uVar31 = uVar8;
                }
                uVar39 = (&DAT_7104754084)[(uVar31 ^ uVar39) & 0xff] ^ uVar39 >> 8;
                uVar8 = (uint)*pbVar30;
                uVar32 = uVar32 + 0x100000000;
                pbVar30 = pbVar30 + 1;
              } while (uVar8 != 0);
              uVar32 = uVar32 & 0xff00000000 | (ulong)~uVar39;
              if (uVar32 == 0) goto LAB_71024011c4;
              lVar24 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
              uVar37 = (ulong)*(uint *)(lVar24 + 4);
              uVar35 = 0;
              if (uVar37 != 0) {
                uVar35 = uVar32 / uVar37;
              }
              lVar24 = lVar24 + (uVar32 - uVar35 * uVar37) * 8;
              uVar8 = *(uint *)(lVar24 + 0xc);
              uVar35 = (ulong)uVar8;
              puVar22 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                                 (ulong)*(uint *)(lVar24 + 8) * 8);
              puVar28 = puVar22 + uVar35;
              puVar29 = puVar22;
              if (uVar8 != 0) {
                do {
                  uVar37 = uVar35;
                  if ((long)uVar35 < 0) {
                    uVar37 = uVar35 + 1;
                  }
                  uVar37 = (long)uVar37 >> 1;
                  puVar22 = puVar29 + uVar37 + 1;
                  uVar35 = uVar35 + ~uVar37;
                  if (uVar32 <= (puVar29[uVar37] & 0xffffffffff)) {
                    puVar22 = puVar29;
                    uVar35 = uVar37;
                  }
                  puVar29 = puVar22;
                } while (uVar35 != 0);
              }
              if (puVar22 == puVar28) goto LAB_71024011c4;
              uVar35 = *puVar22;
              uVar8 = (uint)(uVar35 >> 0x28);
              if ((uVar35 & 0xffffffffff) != uVar32 || uVar8 == 0xffffff) goto LAB_71024011c4;
              std::recursive_mutex::lock();
              puVar16 = FUN_71035404b0(lVar42,uVar35 & 0xffffff0000000000 | uVar32);
              std::recursive_mutex::unlock();
              uVar39 = uVar7;
              if (puVar16 != (uint *)0x0) {
                uVar39 = uVar8;
              }
              if ((uVar39 == 0xffffff) ||
                 (*(char *)(*(long *)(lVar42 + 8) + (ulong)uVar39 * 8 + 4) == '\0'))
              goto LAB_71024011c4;
            }
            local_168 = local_168 & 0xffffff00;
            local_170 = (long ********)0x0;
            FUN_710062dc20((uint *)&local_170,"sound/bank/stage/%s.nus3audio");
            lVar42 = DAT_7105332f20;
            uVar8 = local_168 & 0xff;
            if ((char)local_168 == '\0') {
LAB_71024012d4:
              uVar31 = 0xffffff;
            }
            else {
              uVar32 = 0;
              uVar31 = 0xffffffff;
              pbVar30 = pbVar34;
              do {
                uVar2 = uVar8 + 0x20;
                if (0x19 < uVar8 - 0x41) {
                  uVar2 = uVar8;
                }
                uVar31 = (&DAT_7104754084)[(uVar2 ^ uVar31) & 0xff] ^ uVar31 >> 8;
                uVar8 = (uint)*pbVar30;
                uVar32 = uVar32 + 0x100000000;
                pbVar30 = pbVar30 + 1;
              } while (uVar8 != 0);
              uVar32 = uVar32 & 0xff00000000 | (ulong)~uVar31;
              if (uVar32 == 0) goto LAB_71024012d4;
              lVar24 = *(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x50);
              uVar37 = (ulong)*(uint *)(lVar24 + 4);
              uVar35 = 0;
              if (uVar37 != 0) {
                uVar35 = uVar32 / uVar37;
              }
              lVar24 = lVar24 + (uVar32 - uVar35 * uVar37) * 8;
              uVar8 = *(uint *)(lVar24 + 0xc);
              uVar35 = (ulong)uVar8;
              puVar22 = (ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x58) +
                                 (ulong)*(uint *)(lVar24 + 8) * 8);
              puVar28 = puVar22 + uVar35;
              puVar29 = puVar22;
              if (uVar8 != 0) {
                do {
                  uVar37 = uVar35;
                  if ((long)uVar35 < 0) {
                    uVar37 = uVar35 + 1;
                  }
                  uVar37 = (long)uVar37 >> 1;
                  puVar22 = puVar29 + uVar37 + 1;
                  uVar35 = uVar35 + ~uVar37;
                  if (uVar32 <= (puVar29[uVar37] & 0xffffffffff)) {
                    puVar22 = puVar29;
                    uVar35 = uVar37;
                  }
                  puVar29 = puVar22;
                } while (uVar35 != 0);
              }
              if (puVar22 == puVar28) goto LAB_71024012d4;
              uVar35 = *puVar22;
              uVar8 = (uint)(uVar35 >> 0x28);
              if ((uVar35 & 0xffffffffff) != uVar32 || uVar8 == 0xffffff) goto LAB_71024012d4;
              std::recursive_mutex::lock();
              puVar16 = FUN_71035404b0(lVar42,uVar35 & 0xffffff0000000000 | uVar32);
              std::recursive_mutex::unlock();
              uVar31 = uVar7;
              if (puVar16 != (uint *)0x0) {
                uVar31 = uVar8;
              }
              if ((uVar31 == 0xffffff) ||
                 (*(char *)(*(long *)(lVar42 + 8) + (ulong)uVar31 * 8 + 4) == '\0'))
              goto LAB_71024012d4;
            }
            lVar42 = DAT_7105332f28;
            if (uVar9 != 0xffffff) {
              std::recursive_mutex::lock();
              FUN_71035465b0(lVar42,uVar9,2,param_4,param_5,param_6,param_7,param_8);
              std::recursive_mutex::unlock();
              lVar42 = DAT_7105332f28;
            }
            if (uVar39 != 0xffffff) {
              DAT_7105332f28 = lVar42;
              std::recursive_mutex::lock();
              FUN_71035465b0(lVar42,uVar39,2,param_4,param_5,param_6,param_7,param_8);
              std::recursive_mutex::unlock();
              lVar42 = DAT_7105332f28;
            }
            DAT_7105332f28 = lVar42;
            if (uVar31 != 0xffffff) {
              std::recursive_mutex::lock();
              FUN_71035465b0(lVar42,uVar31,2,param_4,param_5,param_6,param_7,param_8);
              std::recursive_mutex::unlock();
            }
            uVar8 = iVar38 + 0xb000;
            local_278 = (long ********)CONCAT35(local_278._5_3_,0x100000000);
            ppppppppplVar18 = &local_278;
            local_278 = (long ********)CONCAT44(local_278._4_4_,uVar8);
            local_270 = uVar9;
            local_26c = uVar39;
            local_268 = uVar31;
            FUN_7102401c40((long *)puVar23,uVar8,(long ****)ppppppppplVar18,param_4,param_5,param_6,
                           param_7,param_8);
            if (local_268 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,local_268,ppppppppplVar18,param_4,param_5,param_6,
                             param_7,param_8);
              local_268 = 0xffffff;
            }
            if (local_26c != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,local_26c,ppppppppplVar18,param_4,param_5,param_6,
                             param_7,param_8);
              local_26c = 0xffffff;
            }
            if (local_270 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,local_270,ppppppppplVar18,param_4,param_5,param_6,
                             param_7,param_8);
              local_270 = 0xffffff;
            }
            puVar22 = puVar27;
            puVar28 = (ulong *)*puVar27;
            if ((ulong *)*puVar27 == (ulong *)0x0) {
              uVar32 = *puVar27;
              puVar29 = puVar27;
            }
            else {
              do {
                while (puVar29 = puVar28, uVar25 < (puVar29[4] & 0xffffffffff)) {
                  puVar22 = puVar29;
                  puVar28 = (ulong *)*puVar29;
                  if ((ulong *)*puVar29 == (ulong *)0x0) goto LAB_710240147c;
                }
                if (uVar25 <= (puVar29[4] & 0xffffffffff)) break;
                puVar22 = puVar29 + 1;
                puVar28 = (ulong *)*puVar22;
              } while ((ulong *)*puVar22 != (ulong *)0x0);
LAB_710240147c:
              uVar32 = *puVar22;
            }
            if (uVar32 == 0) {
              plVar15 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,param_4,param_5,
                                               param_6,param_7,param_8);
              if (plVar15 == (long *)0x0) {
                local_280[0] = 0;
                local_278 = (long ********)&DAT_00000030;
                ppppppppplVar18 = &local_278;
                (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_280);
                plVar15 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,param_4,
                                                 param_5,param_6,param_7,param_8);
              }
              plVar15[2] = (long)puVar29;
              plVar15[4] = uVar25;
              *(uint *)(plVar15 + 5) = uVar8;
              *plVar15 = 0;
              plVar15[1] = 0;
              *puVar22 = (ulong)plVar15;
              if (*(ulong *)param_1[6] != 0) {
                param_1[6] = *(ulong *)param_1[6];
                plVar15 = (long *)*puVar22;
              }
              std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                        ((long *)param_1[7],plVar15);
              param_1[8] = param_1[8] + 1;
            }
            iVar38 = iVar38 + 1;
          }
        }
        else {
          puVar28 = (ulong *)*puVar21;
          uVar8 = iVar40 + 0xa000;
          puVar22 = puVar21;
          if (puVar28 != (ulong *)0x0) {
            do {
              bVar6 = *(uint *)((long)puVar28 + 0x1c) < uVar8;
              if (!bVar6) {
                puVar22 = puVar28;
              }
              puVar28 = (ulong *)puVar28[bVar6];
            } while (puVar28 != (ulong *)0x0);
            if ((puVar22 != puVar21) && (*(uint *)((long)puVar22 + 0x1c) <= uVar8))
            goto LAB_710240151c;
          }
          ppppppppplVar18 = (long *********)&DAT_00000007;
          FUN_71017e1d70((uint *)&local_170,iVar40,(long *********)&DAT_00000007,param_4,param_5,
                         param_6,param_7,param_8);
          uVar9 = (uint)local_170;
          uVar14 = extraout_x1_05;
          if ((uint)local_170 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,(uint)local_170);
            uVar14 = extraout_x1_06;
          }
          FUN_710353f120((uint *)&local_170,uVar14,ppppppppplVar18,param_4,param_5,param_6,param_7,
                         param_8);
          ppppppppplVar18 = (long *********)&DAT_00000008;
          FUN_71017e1d70((uint *)&local_170,*(int *)(uVar11 + 0x2c),(long *********)&DAT_00000008,
                         param_4,param_5,param_6,param_7,param_8);
          uVar39 = (uint)local_170;
          uVar14 = extraout_x1_07;
          if ((uint)local_170 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,(uint)local_170);
            uVar14 = extraout_x1_08;
          }
          FUN_710353f120((uint *)&local_170,uVar14,ppppppppplVar18,param_4,param_5,param_6,param_7,
                         param_8);
          ppppppppplVar18 = (long *********)&DAT_00000009;
          FUN_71017e1d70((uint *)&local_170,*(int *)(uVar11 + 0x2c),(long *********)&DAT_00000009,
                         param_4,param_5,param_6,param_7,param_8);
          uVar31 = (uint)local_170;
          uVar14 = extraout_x1_09;
          if ((uint)local_170 != 0xffffff) {
            FUN_7103540a00(DAT_7105332f20,(uint)local_170);
            uVar14 = extraout_x1_10;
          }
          FUN_710353f120((uint *)&local_170,uVar14,ppppppppplVar18,param_4,param_5,param_6,param_7,
                         param_8);
          lVar42 = DAT_7105332f28;
          if (uVar9 != 0xffffff) {
            std::recursive_mutex::lock();
            FUN_71035465b0(lVar42,uVar9,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
            lVar42 = DAT_7105332f28;
          }
          if (uVar39 != 0xffffff) {
            DAT_7105332f28 = lVar42;
            std::recursive_mutex::lock();
            FUN_71035465b0(lVar42,uVar39,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
            lVar42 = DAT_7105332f28;
          }
          DAT_7105332f28 = lVar42;
          if (uVar31 != 0xffffff) {
            std::recursive_mutex::lock();
            FUN_71035465b0(lVar42,uVar31,2,param_4,param_5,param_6,param_7,param_8);
            std::recursive_mutex::unlock();
          }
          ppppppppplVar18 = (long *********)&local_170;
          local_170._0_5_ = CONCAT14(1,uVar8);
          local_168 = uVar9;
          local_164 = uVar39;
          local_160 = uVar31;
          FUN_7102401c40((long *)puVar23,uVar8,(long ****)ppppppppplVar18,param_4,param_5,param_6,
                         param_7,param_8);
          if (local_160 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_160,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_160 = 0xffffff;
          }
          if (local_164 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_164,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_164 = 0xffffff;
          }
          if (local_168 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,local_168,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            local_168 = 0xffffff;
          }
        }
      }
      else {
        puVar28 = (ulong *)*puVar21;
        puVar22 = puVar21;
        if (puVar28 != (ulong *)0x0) {
          do {
            bVar6 = *(uint *)((long)puVar28 + 0x1c) < uVar8;
            if (!bVar6) {
              puVar22 = puVar28;
            }
            puVar28 = (ulong *)puVar28[bVar6];
          } while (puVar28 != (ulong *)0x0);
          if ((puVar22 != puVar21) && (*(uint *)((long)puVar22 + 0x1c) <= uVar8))
          goto LAB_710240151c;
        }
        ppppppppplVar18 = (long *********)&DAT_00000004;
        FUN_71017e1080((uint *)&local_170,uVar8,4,param_4,param_5,param_6,param_7,param_8);
        uVar8 = (uint)local_170;
        uVar14 = extraout_x1;
        if ((uint)local_170 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,(uint)local_170);
          uVar14 = extraout_x1_00;
        }
        FUN_710353f120((uint *)&local_170,uVar14,ppppppppplVar18,param_4,param_5,param_6,param_7,
                       param_8);
        ppppppppplVar18 = (long *********)0x5;
        FUN_71017e1080((uint *)&local_170,*(int *)(uVar11 + 0x28),5,param_4,param_5,param_6,param_7,
                       param_8);
        uVar9 = (uint)local_170;
        uVar14 = extraout_x1_01;
        if ((uint)local_170 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,(uint)local_170);
          uVar14 = extraout_x1_02;
        }
        FUN_710353f120((uint *)&local_170,uVar14,ppppppppplVar18,param_4,param_5,param_6,param_7,
                       param_8);
        ppppppppplVar18 = (long *********)0x6;
        FUN_71017e1080((uint *)&local_170,*(int *)(uVar11 + 0x28),6,param_4,param_5,param_6,param_7,
                       param_8);
        uVar39 = (uint)local_170;
        uVar14 = extraout_x1_03;
        if ((uint)local_170 != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,(uint)local_170);
          uVar14 = extraout_x1_04;
        }
        FUN_710353f120((uint *)&local_170,uVar14,ppppppppplVar18,param_4,param_5,param_6,param_7,
                       param_8);
        lVar42 = DAT_7105332f28;
        if (uVar8 != 0xffffff) {
          std::recursive_mutex::lock();
          ppppppppplVar18 = (long *********)0x2;
          FUN_71035465b0(lVar42,uVar8,2,param_4,param_5,param_6,param_7,param_8);
          std::recursive_mutex::unlock();
          lVar42 = DAT_7105332f28;
        }
        if (uVar9 != 0xffffff) {
          DAT_7105332f28 = lVar42;
          std::recursive_mutex::lock();
          ppppppppplVar18 = (long *********)0x2;
          FUN_71035465b0(lVar42,uVar9,2,param_4,param_5,param_6,param_7,param_8);
          std::recursive_mutex::unlock();
          lVar42 = DAT_7105332f28;
        }
        DAT_7105332f28 = lVar42;
        if (uVar39 != 0xffffff) {
          std::recursive_mutex::lock();
          ppppppppplVar18 = (long *********)0x2;
          FUN_71035465b0(lVar42,uVar39,2,param_4,param_5,param_6,param_7,param_8);
          std::recursive_mutex::unlock();
        }
        uVar31 = *(uint *)(uVar11 + 0x28);
        plVar15 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,param_4,param_5,
                                         param_6,param_7,param_8);
        if (plVar15 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_278 = (long ********)((ulong)local_278 & 0xffffffff00000000);
            local_170 = (long ********)&DAT_00000030;
            ppppppppplVar18 = (long *********)&local_170;
            uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_278);
            if (((uVar25 & 1) != 0) &&
               (plVar15 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar18,param_4,
                                                 param_5,param_6,param_7,param_8),
               plVar15 != (long *)0x0)) goto LAB_7102400b50;
          }
          plVar15 = (long *)0x0;
        }
LAB_7102400b50:
        *(uint *)((long)plVar15 + 0x1c) = uVar31;
        *(uint *)((long)plVar15 + 0x24) = uVar8;
        *(uint *)(plVar15 + 5) = uVar9;
        *(undefined1 *)(plVar15 + 4) = 1;
        *(uint *)((long)plVar15 + 0x2c) = uVar39;
        puVar29 = (ulong *)*puVar21;
        puVar22 = puVar21;
        puVar28 = puVar21;
        while (puVar29 != (ulong *)0x0) {
          while (puVar28 = puVar29, uVar31 < *(uint *)((long)puVar28 + 0x1c)) {
            puVar22 = puVar28;
            puVar29 = (ulong *)*puVar28;
            if ((ulong *)*puVar28 == (ulong *)0x0) {
              uVar25 = *puVar28;
              goto joined_r0x007102400dd8;
            }
          }
          if (uVar31 <= *(uint *)((long)puVar28 + 0x1c)) break;
          puVar22 = puVar28 + 1;
          puVar29 = (ulong *)*puVar22;
        }
        uVar25 = *puVar22;
joined_r0x007102400dd8:
        if (uVar25 == 0) {
          *plVar15 = 0;
          plVar15[1] = 0;
          plVar15[2] = (long)puVar28;
          *puVar22 = (ulong)plVar15;
          if (*(ulong *)*puVar23 != 0) {
            *puVar23 = *(ulong *)*puVar23;
            plVar15 = (long *)*puVar22;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)param_1[10],plVar15);
          param_1[0xb] = param_1[0xb] + 1;
        }
        else {
          if (uVar39 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,uVar39,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            uVar9 = *(uint *)(plVar15 + 5);
            *(undefined4 *)((long)plVar15 + 0x2c) = 0xffffff;
          }
          if (uVar9 != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,uVar9,ppppppppplVar18,param_4,param_5,param_6,param_7,
                           param_8);
            *(undefined4 *)(plVar15 + 5) = 0xffffff;
          }
          if (*(uint *)((long)plVar15 + 0x24) != 0xffffff) {
            FUN_7103540b10(DAT_7105332f20,*(uint *)((long)plVar15 + 0x24),ppppppppplVar18,param_4,
                           param_5,param_6,param_7,param_8);
            *(undefined4 *)((long)plVar15 + 0x24) = 0xffffff;
          }
          FUN_710392eb40((ulong)plVar15);
        }
      }
LAB_710240151c:
      uVar11 = uVar11 + 0x150;
    } while (uVar11 != uVar17);
  }
  *(undefined1 *)((long)param_1 + 0x9a) = 1;
  return;
}

