// addr:      71019366f0
// offset:    0x19366f0
// name:      FUN_71019366f0
// mangled:   
// signature: undefined __cdecl FUN_71019366f0(long param_1, undefined8 param_2, byte * * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_71019366f0(long param_1,undefined8 param_2,byte **********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte *********pppppppppbVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  byte *********pppppppppbVar12;
  undefined8 uVar13;
  byte *********__dest;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  byte ************ppppppppppppbVar17;
  long ****pppplVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  char *pcVar26;
  byte **********ppppppppppbVar27;
  undefined4 uVar28;
  long lVar29;
  uint *puVar30;
  long lVar31;
  byte ***********pppppppppppbVar32;
  byte ***********pppppppppppbVar33;
  byte *pbVar34;
  byte **********ppppppppppbVar35;
  uint uVar36;
  byte **********ppppppppppbVar37;
  ulong uVar38;
  char cVar39;
  int iVar40;
  undefined8 *puVar41;
  byte ***********pppppppppppbVar42;
  byte *pbVar43;
  byte *******pppppppbVar44;
  undefined1 uVar45;
  uint uVar46;
  ulong uVar47;
  ulong uVar48;
  uint uVar49;
  byte **********ppppppppppbVar50;
  byte ***********pppppppppppbVar51;
  long *plVar52;
  byte bVar53;
  undefined8 *puVar54;
  byte ***********pppppppppppbVar55;
  byte ************ppppppppppppbVar56;
  int iVar57;
  byte ***********pppppppppppbVar58;
  byte ***********pppppppppppbVar59;
  undefined8 uVar60;
  byte ***********pppppppppppbVar61;
  undefined8 uVar62;
  ulong *puVar63;
  long lVar64;
  uint uVar65;
  byte ***********pppppppppppbVar66;
  ulong uVar67;
  undefined8 local_180;
  byte ***********local_178;
  byte ***********local_170;
  byte ***********local_168;
  ulong local_160 [2];
  undefined8 local_150;
  undefined8 local_148;
  byte *********local_140;
  byte *********local_138;
  byte *********local_130;
  undefined8 local_128;
  ulong local_120;
  undefined4 local_118;
  ulong local_110;
  undefined1 local_108;
  ulong local_100;
  undefined1 local_f8;
  ulong local_f0;
  undefined1 local_e8;
  ulong local_e0;
  undefined1 local_d8;
  ulong local_d0;
  undefined1 local_c8;
  ulong local_c0;
  undefined1 local_b8;
  ulong local_b0;
  byte ***********local_a8;
  long *local_a0;
  ulong local_98;
  float local_90;
  byte ***********local_88;
  char *local_80;
  byte ***********local_78;
  undefined4 local_6c [3];
  
  plVar25 = DAT_7105314510;
  lVar29 = *(long *)(*(long *)(param_1 + 200) + 0x80);
  if (*(char *)(lVar29 + 0x1b0) == '\0') {
    return;
  }
  if (*(int *)(lVar29 + 0x1a0) != 0) {
    return;
  }
  iVar57 = *(int *)(lVar29 + 0x1b4);
  if (iVar57 != 0) {
    uVar4 = *(uint *)(lVar29 + 0x1d0);
    uVar67 = (ulong)uVar4;
    puVar41 = *(undefined8 **)(*DAT_7105314510 + 0x158);
    if (iVar57 != 3) {
      if (iVar57 == 2) {
        *(undefined4 *)(param_1 + 0xb8) = 3;
        puVar54 = *(undefined8 **)(*plVar25 + 0x158);
        lVar29 = *(long *)(DAT_710532f730 + 8) + 0x160;
        if (2 < uVar4) {
          puVar15 = FUN_7103263e20(lVar29,6);
          FUN_71017be550((long *)*puVar54,uVar4,puVar15);
                    /* WARNING: Subroutine does not return */
          abort();
        }
        plVar25 = (long *)*puVar54;
        lVar31 = uVar67 * 0x3d700;
        memset((void *)(*plVar25 + lVar31),0,0x3d700);
        *(undefined4 *)(*plVar25 + lVar31 + 0x3cc28) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar31 + 0x3d6e0) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar31 + 0x3d6e2) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar31 + 0x3d6e4) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar31 + 0x3d6e6) = 0xffff;
        param_3 = (byte **********)FUN_7103263e20(lVar29,6);
        FUN_71017be550((long *)*puVar54,uVar4,(undefined1 *)param_3);
        *(undefined4 *)(*(long *)*puVar54 + lVar31 + 0x3d6d8) = 0;
        *(undefined4 *)(*(long *)*puVar54 + lVar31 + 0x3cc28) = 0;
        *(undefined1 *)(*(long *)*puVar54 + lVar31 + 0x3d68c) = 1;
        FUN_71024cb8c0(uVar4,1,(byte ****)param_3,param_4,param_5,param_6,param_7,param_8);
        *(undefined1 *)(*(long *)*puVar41 + lVar31 + 0x3d68c) =
             *(undefined1 *)
              (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 200) + 0x80) + 0x60) + 0x80) +
              0x200);
      }
      else if (iVar57 == 1) {
        *(undefined4 *)(param_1 + 0xb8) = 1;
      }
LAB_7101936cbc:
      lVar29 = *DAT_710532a860;
      *(uint *)(lVar29 + 0x1c) = uVar4;
      *(undefined1 *)(lVar29 + 0x5f3d3) = 1;
      if (uVar4 < 3) {
        uVar28 = *(undefined4 *)
                  (*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + uVar67 * 0x3d700 + 0x3cc28)
        ;
      }
      else {
        uVar28 = 0xffff;
      }
      *(undefined4 *)(lVar29 + 0x78) = uVar28;
      *(undefined4 *)(lVar29 + 0x80) = 0;
      pppppppppppbVar58 = *(byte ************)(lVar29 + 0x5f390);
      *(undefined1 *)(pppppppppppbVar58 + 0x17) = 0;
      if (pppppppppppbVar58[3] != (byte **********)0x0) {
        ppppppppppbVar37 = pppppppppppbVar58[2];
        while (ppppppppppbVar37 != (byte **********)0x0) {
          ppppppppppbVar50 = (byte **********)*ppppppppppbVar37;
          FUN_710392eb40((ulong)ppppppppppbVar37);
          ppppppppppbVar37 = ppppppppppbVar50;
        }
        ppppppppppbVar37 = pppppppppppbVar58[1];
        pppppppppppbVar58[2] = (byte **********)0x0;
        if (ppppppppppbVar37 != (byte **********)0x0) {
          uVar24 = (ulong)ppppppppppbVar37 & 3;
          if ((long)ppppppppppbVar37 - 1U < 3) {
            lVar31 = 0;
          }
          else {
            lVar29 = 0;
            do {
              lVar31 = lVar29 + 4;
              (*pppppppppppbVar58)[lVar29] = (byte *********)0x0;
              (*pppppppppppbVar58)[lVar29 + 1] = (byte *********)0x0;
              (*pppppppppppbVar58)[lVar29 + 2] = (byte *********)0x0;
              (*pppppppppppbVar58)[lVar29 + 3] = (byte *********)0x0;
              lVar29 = lVar31;
            } while ((long)ppppppppppbVar37 - uVar24 != lVar31);
          }
          if (uVar24 != 0) {
            lVar31 = lVar31 << 3;
            lVar29 = -uVar24;
            do {
              *(undefined8 *)((long)*pppppppppppbVar58 + lVar31) = 0;
              lVar31 = lVar31 + 8;
              lVar29 = lVar29 + 1;
            } while (lVar29 != 0);
          }
        }
        pppppppppppbVar58[3] = (byte **********)0x0;
      }
      pppppppppppbVar61 = pppppppppppbVar58 + 5;
      if (pppppppppppbVar58[8] != (byte **********)0x0) {
        ppppppppppbVar37 = pppppppppppbVar58[7];
        while (ppppppppppbVar37 != (byte **********)0x0) {
          ppppppppppbVar50 = (byte **********)*ppppppppppbVar37;
          pppppppppbVar12 = ppppppppppbVar37[4];
          if (pppppppppbVar12 != (byte *********)0x0) {
            ppppppppppbVar37[5] = pppppppppbVar12;
            FUN_710392eb40((ulong)pppppppppbVar12);
          }
          FUN_710392eb40((ulong)ppppppppppbVar37);
          ppppppppppbVar37 = ppppppppppbVar50;
        }
        ppppppppppbVar37 = pppppppppppbVar58[6];
        pppppppppppbVar58[7] = (byte **********)0x0;
        if (ppppppppppbVar37 != (byte **********)0x0) {
          uVar24 = (ulong)ppppppppppbVar37 & 3;
          if ((long)ppppppppppbVar37 - 1U < 3) {
            lVar31 = 0;
          }
          else {
            lVar29 = 0;
            do {
              lVar31 = lVar29 + 4;
              (*pppppppppppbVar61)[lVar29] = (byte *********)0x0;
              (*pppppppppppbVar61)[lVar29 + 1] = (byte *********)0x0;
              (*pppppppppppbVar61)[lVar29 + 2] = (byte *********)0x0;
              (*pppppppppppbVar61)[lVar29 + 3] = (byte *********)0x0;
              lVar29 = lVar31;
            } while ((long)ppppppppppbVar37 - uVar24 != lVar31);
          }
          if (uVar24 != 0) {
            lVar31 = lVar31 << 3;
            lVar29 = -uVar24;
            do {
              *(undefined8 *)((long)*pppppppppppbVar61 + lVar31) = 0;
              lVar31 = lVar31 + 8;
              lVar29 = lVar29 + 1;
            } while (lVar29 != 0);
          }
        }
        pppppppppppbVar58[8] = (byte **********)0x0;
      }
      lVar29 = *(long *)(DAT_710532f730 + 8);
      uVar24 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x161abeda7f);
      local_150._0_4_ = (uint)uVar24;
      local_150._4_4_ = (uint)(uVar24 >> 0x20);
      local_148._0_1_ = 1;
      local_140 = (byte *********)FUN_71032821b0(*(long *)(lVar29 + 0x198),0x17aa490e0b);
      local_138 = (byte *********)CONCAT71(local_138._1_7_,2);
      local_130 = (byte *********)FUN_71032821b0(*(long *)(lVar29 + 0x198),0x146fb788a7);
      local_128 = CONCAT71(local_128._1_7_,3);
      local_120 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x1429a1c171);
      local_118 = CONCAT31(local_118._1_3_,4);
      local_110 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x149f929ac1);
      local_108 = 5;
      local_100 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x166cbc8009);
      local_f8 = 6;
      local_f0 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x13c26d485c);
      local_e8 = 7;
      local_e0 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x16a40aee0d);
      local_d8 = 8;
      local_d0 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x164cb6a328);
      local_c8 = 9;
      local_c0 = FUN_71032821b0(*(long *)(lVar29 + 0x198),0x14a182eb21);
      local_b8 = 10;
      puVar63 = &local_150;
      local_a0 = (long *)0x0;
      local_98 = 0;
      local_b0 = 0;
      local_a8 = (byte ***********)0x0;
      local_90 = 1.0;
      pppppppppppbVar66 = (byte ***********)CONCAT44(local_150._4_4_,(uint)local_150);
      pppppppppppbVar59 = pppppppppppbVar58;
LAB_7101937168:
      do {
        pppppppppppbVar32 = local_a8;
        plVar25 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8);
        if (plVar25 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (byte ***********)((ulong)local_88 & 0xffffffff00000000);
            local_180 = (byte ***********)&SUB_00000020;
            param_3 = (byte **********)&local_180;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            if (((uVar24 & 1) != 0) &&
               (plVar25 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8), plVar25 != (long *)0x0))
            goto LAB_71019371c0;
          }
          plVar25 = (long *)0x0;
        }
LAB_71019371c0:
        uVar24 = puVar63[1];
        plVar25[2] = *puVar63;
        plVar25[3] = uVar24;
        *plVar25 = 0;
        plVar25[1] = (long)pppppppppppbVar66;
        if ((pppppppppppbVar32 == (byte ***********)0x0) ||
           (local_90 * (float)pppppppppppbVar32 < (float)(local_98 + 1))) {
          if (pppppppppppbVar32 < (byte ***********)0x3) {
            uVar24 = 1;
          }
          else {
            uVar24 = (ulong)(((long)pppppppppppbVar32 - 1U & (ulong)pppppppppppbVar32) != 0);
          }
          pppppppppppbVar32 = (byte ***********)(uVar24 | (long)pppppppppppbVar32 << 1);
          pppppppppppbVar59 = (byte ***********)(long)((float)(local_98 + 1) / local_90);
          if (pppppppppppbVar59 <= pppppppppppbVar32) {
            pppppppppppbVar59 = pppppppppppbVar32;
          }
          if ((long)pppppppppppbVar59 - 1U == 0) {
            pppppppppppbVar59 = (byte ***********)0x2;
          }
          else if (((long)pppppppppppbVar59 - 1U & (ulong)pppppppppppbVar59) != 0) {
            pppppppppppbVar59 = (byte ***********)std::__next_prime((ulong)pppppppppppbVar59);
          }
          pppppppppppbVar32 = local_a8;
          if (local_a8 < pppppppppppbVar59) {
LAB_710193725c:
            FUN_71024d7ce0(&local_b0,(ulong)pppppppppppbVar59,(long ****)param_3,param_4,param_5,
                           param_6,param_7,param_8);
          }
          else if (pppppppppppbVar59 < local_a8) {
            pppppppppppbVar51 = (byte ***********)(long)((float)local_98 / local_90);
            if (local_a8 < (byte ***********)0x3 || ((long)local_a8 - 1U & (ulong)local_a8) != 0) {
              pppppppppppbVar51 = (byte ***********)std::__next_prime((ulong)pppppppppppbVar51);
            }
            else if ((byte ***********)0x1 < pppppppppppbVar51) {
              pppppppppppbVar51 =
                   (byte ***********)(1L << (-LZCOUNT((long)pppppppppppbVar51 + -1) & 0x3fU));
            }
            if (pppppppppppbVar51 <= pppppppppppbVar59) {
              pppppppppppbVar51 = pppppppppppbVar59;
            }
            pppppppppppbVar59 = pppppppppppbVar51;
            if (pppppppppppbVar51 < pppppppppppbVar32) goto LAB_710193725c;
          }
          pppppppppppbVar32 = local_a8;
          if (((long)local_a8 - 1U & (ulong)local_a8) == 0) {
            pppppppppppbVar59 = (byte ***********)((long)local_a8 - 1U & (ulong)pppppppppppbVar66);
          }
          else {
            pppppppppppbVar59 = pppppppppppbVar66;
            if (local_a8 <= pppppppppppbVar66) {
              uVar24 = 0;
              if (local_a8 != (byte ***********)0x0) {
                uVar24 = (ulong)pppppppppppbVar66 / (ulong)local_a8;
              }
              pppppppppppbVar59 =
                   (byte ***********)((long)pppppppppppbVar66 - uVar24 * (long)local_a8);
            }
          }
        }
        plVar52 = *(long **)(local_b0 + (long)pppppppppppbVar59 * 8);
        if (plVar52 == (long *)0x0) {
          *plVar25 = (long)local_a0;
          local_a0 = plVar25;
          *(long ***)(local_b0 + (long)pppppppppppbVar59 * 8) = &local_a0;
          if (*plVar25 != 0) {
            pppppppppppbVar66 = *(byte ************)(*plVar25 + 8);
            if (((long)pppppppppppbVar32 - 1U & (ulong)pppppppppppbVar32) == 0) {
              pppppppppppbVar66 =
                   (byte ***********)((ulong)pppppppppppbVar66 & (long)pppppppppppbVar32 - 1U);
            }
            else if (pppppppppppbVar32 <= pppppppppppbVar66) {
              uVar24 = 0;
              if (pppppppppppbVar32 != (byte ***********)0x0) {
                uVar24 = (ulong)pppppppppppbVar66 / (ulong)pppppppppppbVar32;
              }
              pppppppppppbVar66 =
                   (byte ***********)((long)pppppppppppbVar66 - uVar24 * (long)pppppppppppbVar32);
            }
            plVar52 = (long *)(local_b0 + (long)pppppppppppbVar66 * 8);
            goto LAB_7101937364;
          }
        }
        else {
          *plVar25 = *plVar52;
LAB_7101937364:
          *plVar52 = (long)plVar25;
        }
        local_98 = local_98 + 1;
LAB_7101937378:
        puVar63 = puVar63 + 2;
        if (puVar63 == &local_b0) {
          lVar31 = *(long *)(*(long *)(lVar29 + 0x228) + 8);
          pcVar26 = *(char **)(lVar31 + 0x20);
          if ((*pcVar26 != '\f') || (iVar57 = *(int *)(pcVar26 + 1) + -1, *(int *)(pcVar26 + 1) < 1)
             ) goto LAB_7101937418;
          iVar40 = 0;
          uVar24 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
          pbVar34 = &DAT_7104742dbb;
          goto LAB_71019373d4;
        }
        pppppppppppbVar66 = (byte ***********)*puVar63;
        if (local_a8 != (byte ***********)0x0) {
          uVar24 = (long)local_a8 - 1;
          if ((uVar24 & (ulong)local_a8) == 0) {
            pppppppppppbVar59 = (byte ***********)((ulong)pppppppppppbVar66 & uVar24);
          }
          else {
            pppppppppppbVar59 = pppppppppppbVar66;
            if (local_a8 <= pppppppppppbVar66) {
              uVar38 = 0;
              if (local_a8 != (byte ***********)0x0) {
                uVar38 = (ulong)pppppppppppbVar66 / (ulong)local_a8;
              }
              pppppppppppbVar59 =
                   (byte ***********)((long)pppppppppppbVar66 - uVar38 * (long)local_a8);
            }
          }
          plVar25 = *(long **)(local_b0 + (long)pppppppppppbVar59 * 8);
          if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
            if ((uVar24 & (ulong)local_a8) == 0) {
              do {
                if ((byte ***********)plVar25[1] != pppppppppppbVar66 &&
                    (byte ***********)((ulong)plVar25[1] & uVar24) != pppppppppppbVar59)
                goto LAB_7101937168;
                uVar47 = plVar25[2];
                uVar38 = (ulong)pppppppppppbVar66 & 0xffffffffff;
                if ((uVar47 & 0xff00000000000000) == 0x7100000000000000 &&
                    (uVar47 & 0xffffffffff) != 0) {
                  if ((((ulong)pppppppppppbVar66 & 0xff00000000000000) == 0x7100000000000000) &&
                     (uVar38 != 0)) {
                    uVar38 = ((ulong)pppppppppppbVar66 ^ uVar47) & 0xffffffffff;
                    goto joined_r0x00710193714c;
                  }
                }
                else {
                  if (((ulong)pppppppppppbVar66 & 0xff00000000000000) != 0x7100000000000000)
                  goto LAB_7101937378;
joined_r0x00710193714c:
                  if (uVar38 == 0) goto LAB_7101937378;
                }
                plVar25 = (long *)*plVar25;
                if (plVar25 == (long *)0x0) goto LAB_7101937168;
              } while( true );
            }
            do {
              pppppppppppbVar32 = (byte ***********)plVar25[1];
              if (pppppppppppbVar32 != pppppppppppbVar66) {
                if (local_a8 <= pppppppppppbVar32) {
                  uVar24 = 0;
                  if (local_a8 != (byte ***********)0x0) {
                    uVar24 = (ulong)pppppppppppbVar32 / (ulong)local_a8;
                  }
                  pppppppppppbVar32 =
                       (byte ***********)((long)pppppppppppbVar32 - uVar24 * (long)local_a8);
                }
                if (pppppppppppbVar32 != pppppppppppbVar59) break;
              }
              uVar38 = plVar25[2];
              uVar24 = (ulong)pppppppppppbVar66 & 0xffffffffff;
              if ((uVar38 & 0xff00000000000000) == 0x7100000000000000 &&
                  (uVar38 & 0xffffffffff) != 0) {
                if ((((ulong)pppppppppppbVar66 & 0xff00000000000000) == 0x7100000000000000) &&
                   (uVar24 != 0)) {
                  uVar24 = ((ulong)pppppppppppbVar66 ^ uVar38) & 0xffffffffff;
                  goto joined_r0x0071019370e0;
                }
              }
              else {
                if (((ulong)pppppppppppbVar66 & 0xff00000000000000) != 0x7100000000000000)
                goto LAB_7101937378;
joined_r0x0071019370e0:
                if (uVar24 == 0) goto LAB_7101937378;
              }
              plVar25 = (long *)*plVar25;
              if (plVar25 == (long *)0x0) break;
            } while( true );
          }
        }
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xb8) = 3;
    lVar29 = *(long *)(*(long *)(param_1 + 200) + 0x80);
    uVar22 = *(uint *)(lVar29 + 0x1d8);
    if (uVar22 < 3) {
      puVar54 = *(undefined8 **)(*plVar25 + 0x158);
      plVar25 = (long *)*puVar54;
      lVar31 = *plVar25;
      lVar16 = lVar31 + (ulong)uVar22 * 0x3d700;
      uVar13 = *(undefined8 *)(lVar16 + 0x3d698);
      local_140 = *(byte **********)(lVar16 + 0x3d6a0);
      local_138 = *(byte **********)(lVar16 + 0x3d6a8);
      local_150._0_4_ = (uint)*(undefined8 *)(lVar16 + 0x3d690);
      local_150._4_4_ = (uint)((ulong)*(undefined8 *)(lVar16 + 0x3d690) >> 0x20);
      local_148._0_1_ = (byte)uVar13;
      local_148._1_1_ = (undefined1)((ulong)uVar13 >> 8);
      local_148._2_2_ = (undefined2)((ulong)uVar13 >> 0x10);
      local_148._4_4_ = (undefined4)((ulong)uVar13 >> 0x20);
      local_130 = *(byte **********)(lVar16 + 0x3d6b0);
      local_128 = *(undefined8 *)(lVar16 + 0x3d6b8);
      local_120 = *(ulong *)(lVar16 + 0x3d6c0);
      local_118 = *(undefined4 *)(lVar16 + 0x3d6c8);
      local_b0 = *(ulong *)(lVar16 + 0x3d6e8);
      local_a8 = *(byte ************)(lVar16 + 0x3d6f0);
      local_a0 = (long *)CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar16 + 0x3d6f8));
      uVar13 = *(undefined8 *)(lVar16 + 0x3d688);
      local_178 = *(byte ************)(lVar16 + 0x3d6d8);
      uVar60 = *(undefined8 *)(lVar16 + 0x3d6e0);
      local_180 = *(byte ************)(lVar16 + 0x3d6d0);
      if (uVar4 < 3) {
        param_3 = (byte **********)0x3d700;
        lVar23 = lVar31 + (ulong)uVar22 * 0x3d700;
        lVar64 = uVar67 * 0x3d700;
        uVar28 = *(undefined4 *)(lVar23 + 0x3cc00);
        uVar62 = *(undefined8 *)(lVar23 + 0x3cc18);
        cVar39 = -1;
        if (*(char *)(lVar16 + 0x3cc35) != -1) {
          cVar39 = *(char *)(lVar16 + 0x3cc35) + '\x01';
        }
        memset((void *)(lVar31 + lVar64),0,0x3d700);
        *(undefined4 *)(*plVar25 + lVar64 + 0x3cc28) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar64 + 0x3d6e0) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar64 + 0x3d6e2) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar64 + 0x3d6e4) = 0xffff;
        *(undefined2 *)(*plVar25 + lVar64 + 0x3d6e6) = 0xffff;
        lVar31 = *plVar25 + lVar64;
        *(byte **********)(lVar31 + 0x3d6a8) = local_138;
        *(undefined4 *)(lVar31 + 0x3d6c8) = local_118;
        *(byte **********)(lVar31 + 0x3d6a0) = local_140;
        *(ulong *)(lVar31 + 0x3d698) =
             CONCAT44(local_148._4_4_,
                      CONCAT22(local_148._2_2_,CONCAT11(local_148._1_1_,(byte)local_148)));
        *(ulong *)(lVar31 + 0x3d690) = CONCAT44(local_150._4_4_,(uint)local_150);
        *(ulong *)(lVar31 + 0x3d6c0) = local_120;
        *(undefined8 *)(lVar31 + 0x3d6b8) = local_128;
        *(byte **********)(lVar31 + 0x3d6b0) = local_130;
        *(undefined4 *)(lVar31 + 0x3d6f8) = local_a0._0_4_;
        *(byte ************)(lVar31 + 0x3d6f0) = local_a8;
        *(ulong *)(lVar31 + 0x3d6e8) = local_b0;
        *(char *)(lVar31 + 0x3d68c) = (char)((ulong)uVar13 >> 0x20);
        *(int *)(lVar31 + 0x3d688) = (int)uVar13;
        *(undefined8 *)(lVar31 + 0x3d6e0) = uVar60;
        *(byte ************)(lVar31 + 0x3d6d8) = local_178;
        *(byte ************)(lVar31 + 0x3d6d0) = local_180;
        *(undefined8 *)(lVar31 + 0x3cc18) = uVar62;
        *(undefined4 *)(lVar31 + 0x3cc00) = uVar28;
        *(char *)(lVar31 + 0x3cc35) = cVar39;
        *(undefined4 *)(*(long *)*puVar54 + lVar64 + 0x3cc28) = 0;
        puVar30 = *(uint **)(lVar29 + 0x1b8);
        puVar3 = *(uint **)(lVar29 + 0x1c0);
        if (puVar30 == puVar3) {
          FUN_710177a5c0(0x56);
        }
        else {
          do {
            uVar19 = *puVar30;
            uVar20 = puVar30[1];
            uVar49 = uVar20 - 0x400;
            uVar22 = uVar19;
            if (uVar20 < 0x400) {
joined_r0x007101936c24:
              uVar49 = uVar20;
              if (0x13 < uVar22) goto LAB_7101939474;
            }
            else {
              uVar22 = 0xd;
              if (uVar19 != 1) {
                uVar22 = 0xffff;
              }
              uVar20 = uVar49;
              if (uVar19 != 0) goto joined_r0x007101936c24;
              uVar22 = 0xb;
            }
            if (uVar49 < 0x400) {
              lVar29 = *(long *)*puVar54 + uVar67 * 0x3d700 + (ulong)uVar22 * 0x84 +
                       (ulong)(uVar49 >> 5) * 4;
              *(uint *)(lVar29 + 0x3cc38) =
                   *(uint *)(lVar29 + 0x3cc38) | 1 << (ulong)(uVar49 & 0x1f);
            }
            puVar30 = puVar30 + 2;
          } while (puVar30 != puVar3);
          FUN_710177a5c0(0x56);
          if (2 < uVar4) goto LAB_7101939474;
        }
        *(undefined1 *)(*(long *)*puVar41 + uVar67 * 0x3d700 + 0x3d68c) =
             *(undefined1 *)
              (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 200) + 0x80) + 0x60) + 0x80) +
              0x200);
        goto LAB_7101936cbc;
      }
    }
    goto LAB_7101939474;
  }
  *(undefined4 *)(param_1 + 0xb8) = 2;
  goto LAB_7101939430;
LAB_7101938278:
  uVar45 = (undefined1)plVar25[3];
LAB_7101938120:
  local_180._0_2_ = CONCAT11(uVar45,(undefined1)local_180);
  local_170 = local_178;
  lVar31 = *(long *)(*(long *)(lVar29 + 0x228) + 8);
  pcVar26 = *(char **)(lVar31 + 0x20);
  pbVar34 = &DAT_7104742dbb;
  if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))) {
    iVar40 = 0;
    uVar38 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
    do {
      iVar1 = iVar57 + iVar40;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar30 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar26 + 5) +
                        (long)iVar1 * 8);
      uVar47 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
      if (uVar47 == uVar38) {
        uVar21 = puVar30[1];
        if (-1 < (int)uVar21) {
          pbVar34 = (byte *)(pcVar26 + (int)uVar21);
        }
        break;
      }
      iVar7 = iVar1 + -1;
      if (uVar47 <= uVar38) {
        iVar40 = iVar1 + 1;
        iVar7 = iVar57;
      }
      iVar57 = iVar7;
    } while (iVar40 <= iVar57);
  }
  pppppppppppbVar33 = pppppppppppbVar55;
  if ((*pbVar34 - 0xb < 2) && (uVar19 < *(uint *)(pbVar34 + 1))) {
    param_3 = (byte **********)(uVar24 & 0xffffffff);
    FUN_710326a3e0((long *)&local_88,lVar31,uVar19);
    pcVar26 = local_80;
    pbVar34 = &DAT_7104742dbb;
    if ((*local_80 == '\f') && (iVar57 = *(int *)(local_80 + 1) + -1, 0 < *(int *)(local_80 + 1))) {
      iVar40 = 0;
      do {
        iVar1 = iVar57 + iVar40;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar30 = (uint *)((long)local_88[5] + (long)iVar1 * 8 + (long)*(int *)(local_80 + 5));
        if ((byte **********)local_88[4][*puVar30] == (byte **********)0x1043138dd7) {
          uVar21 = puVar30[1];
          if (-1 < (int)uVar21) {
            pbVar34 = (byte *)(local_80 + (int)uVar21);
          }
          break;
        }
        iVar7 = iVar1 + -1;
        if (local_88[4][*puVar30] < (byte **********)0x1043138dd8) {
          iVar40 = iVar1 + 1;
          iVar7 = iVar57;
        }
        iVar57 = iVar7;
      } while (iVar40 <= iVar57);
    }
    switch(*pbVar34) {
    case 1:
    case 3:
      uVar21 = (uint)pbVar34[1];
      break;
    case 2:
      uVar21 = (uint)(char)pbVar34[1];
      break;
    case 4:
      uVar21 = (uint)*(short *)(pbVar34 + 1);
      break;
    case 5:
      uVar21 = (uint)*(ushort *)(pbVar34 + 1);
      break;
    case 6:
    case 7:
      uVar21 = *(uint *)(pbVar34 + 1);
      break;
    default:
      goto switchD_71019382b4_default;
    }
    if (0 < (int)uVar21) {
      uVar65 = 0;
      do {
        FUN_71003a4ca0((uint *)&local_150,"connection%d",(ulong)uVar65,param_3,param_4,param_5,
                       param_6,param_7,param_8);
        pppppppppppbVar59 = local_178;
        if (local_150._4_4_ == 0) {
          uVar38 = 0;
        }
        else {
          uVar36 = 0xffffffff;
          pbVar34 = (byte *)&local_148;
          do {
            pbVar43 = pbVar34 + 1;
            bVar53 = *pbVar34;
            uVar46 = bVar53 + 0x20;
            if (0x19 < bVar53 - 0x41) {
              uVar46 = (uint)bVar53;
            }
            uVar36 = (&DAT_7104754084)[(uVar46 ^ uVar36) & 0xff] ^ uVar36 >> 8;
            pbVar34 = pbVar43;
          } while (pbVar43 < (byte *)((long)&local_148 + (ulong)local_150._4_4_));
          uVar38 = (ulong)~uVar36;
        }
        pbVar34 = &DAT_7104742dbb;
        if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1)))
        {
          ppppppppppbVar37 =
               (byte **********)(uVar38 | ((long)(int)local_150._4_4_ & 0xffU) << 0x20);
          iVar40 = 0;
          do {
            iVar1 = iVar57 + iVar40;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar1 >> 1;
            puVar30 = (uint *)((long)local_88[5] + (long)iVar1 * 8 + (long)*(int *)(pcVar26 + 5));
            if ((byte **********)local_88[4][*puVar30] == ppppppppppbVar37) {
              uVar36 = puVar30[1];
              if (-1 < (int)uVar36) {
                pbVar34 = (byte *)(pcVar26 + (int)uVar36);
              }
              break;
            }
            iVar7 = iVar1 + -1;
            if (local_88[4][*puVar30] <= ppppppppppbVar37) {
              iVar40 = iVar1 + 1;
              iVar7 = iVar57;
            }
            iVar57 = iVar7;
          } while (iVar40 <= iVar57);
        }
        switch(*pbVar34) {
        case 1:
        case 3:
          bVar53 = pbVar34[1];
          goto LAB_7101938a08;
        case 2:
          bVar53 = pbVar34[1];
          if (-1 < (char)bVar53) goto LAB_7101938a08;
          break;
        case 4:
          iVar57 = (int)*(short *)(pbVar34 + 1);
          goto joined_r0x0071019389e4;
        case 5:
          bVar53 = (byte)*(undefined2 *)(pbVar34 + 1);
LAB_7101938a08:
          if (local_170 < local_168) {
            *(byte *)local_170 = bVar53;
            local_170 = (byte ***********)((long)local_170 + 1);
          }
          else {
            ppppppppppppbVar56 = (byte ************)((long)local_170 - (long)local_178);
            pppppppppppbVar55 = (byte ***********)((long)ppppppppppppbVar56 + 1);
            if ((long)pppppppppppbVar55 < 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_168 - (long)local_178) < 0x3fffffffffffffff) {
              pppppppppppbVar33 = (byte ***********)(((long)local_168 - (long)local_178) * 2);
              if (pppppppppppbVar55 <= pppppppppppbVar33) {
                pppppppppppbVar55 = pppppppppppbVar33;
              }
              if (pppppppppppbVar55 != (byte ***********)0x0) goto LAB_7101938a60;
LAB_7101938ab4:
              pppppppppppbVar33 = (byte ***********)0x0;
            }
            else {
              pppppppppppbVar55 = (byte ***********)0x7fffffffffffffff;
LAB_7101938a60:
              pppppppppppbVar33 =
                   (byte ***********)
                   FUN_710392e290(0x10,pppppppppppbVar55,(long ****)param_3,param_4,param_5,param_6,
                                  param_7,param_8);
              if (pppppppppppbVar33 == (byte ***********)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_6c[0] = 0;
                  param_3 = (byte **********)&local_78;
                  local_78 = pppppppppppbVar55;
                  uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
                  if (((uVar38 & 1) != 0) &&
                     (pppppppppppbVar33 =
                           (byte ***********)
                           FUN_710392e290(0x10,pppppppppppbVar55,(long ****)param_3,param_4,param_5,
                                          param_6,param_7,param_8),
                     pppppppppppbVar33 != (byte ***********)0x0)) goto LAB_7101938ab8;
                }
                goto LAB_7101938ab4;
              }
            }
LAB_7101938ab8:
            pppppppppppbVar42 =
                 (byte ***********)
                 ((byte *)((long)pppppppppppbVar33 + (long)ppppppppppppbVar56) + 1);
            *(byte *)((long)pppppppppppbVar33 + (long)ppppppppppppbVar56) = bVar53;
            if (0 < (long)ppppppppppppbVar56) {
              memcpy(pppppppppppbVar33,pppppppppppbVar59,(size_t)ppppppppppppbVar56);
              param_3 = (byte **********)ppppppppppppbVar56;
            }
            local_178 = pppppppppppbVar33;
            local_170 = pppppppppppbVar42;
            local_168 = (byte ***********)((long)pppppppppppbVar33 + (long)pppppppppppbVar55);
            if (pppppppppppbVar59 != (byte ***********)0x0) {
              FUN_710392eb40((ulong)pppppppppppbVar59);
            }
          }
          break;
        case 6:
        case 7:
          iVar57 = *(int *)(pbVar34 + 1);
joined_r0x0071019389e4:
          bVar53 = (byte)iVar57;
          if (-1 < iVar57) goto LAB_7101938a08;
        }
        uVar65 = uVar65 + 1;
        pppppppppppbVar55 = local_170;
        pppppppppppbVar33 = local_178;
      } while ((int)uVar65 < (int)uVar21);
    }
  }
switchD_71019382b4_default:
  uVar6 = (undefined2)local_180;
  pppppppppppbVar59 = (byte ***********)((ulong)local_180 & 0xffff);
  ppppppppppppbVar56 = (byte ************)((long)pppppppppppbVar55 - (long)pppppppppppbVar33);
  local_150._0_4_ = CONCAT31(local_150._1_3_,cVar39);
  local_148._0_1_ = (byte)local_180;
  local_148._1_1_ = (undefined1)((ulong)local_180 >> 8);
  local_140 = (byte *********)0x0;
  local_138 = (byte *********)0x0;
  local_130 = (byte *********)0x0;
  if (ppppppppppppbVar56 == (byte ************)0x0) {
    __dest = (byte *********)0x0;
    pppppppppppbVar55 = (byte ***********)pppppppppppbVar58[6];
    ppppppppppppbVar56 = (byte ************)param_3;
    pppppppppbVar12 = (byte *********)0x0;
    if (pppppppppppbVar55 != (byte ***********)0x0) goto LAB_7101938384;
LAB_7101938450:
    pppppppppbVar12 = local_138;
    ppppppppppbVar37 =
         (byte **********)
         FUN_710392e290(0x10,0x38,(long ****)ppppppppppppbVar56,param_4,param_5,param_6,param_7,
                        param_8);
    if (ppppppppppbVar37 == (byte **********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (byte ***********)((ulong)local_78 & 0xffffffff00000000);
        local_88 = (byte ***********)&DAT_00000038;
        ppppppppppppbVar56 = &local_88;
        uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar38 & 1) != 0) &&
           (ppppppppppbVar37 =
                 (byte **********)
                 FUN_710392e290(0x10,0x38,(long ****)ppppppppppppbVar56,param_4,param_5,param_6,
                                param_7,param_8), ppppppppppbVar37 != (byte **********)0x0))
        goto LAB_71019384ac;
      }
      ppppppppppbVar37 = (byte **********)0x0;
    }
LAB_71019384ac:
    *(char *)(ppppppppppbVar37 + 2) = cVar39;
    *(undefined2 *)(ppppppppppbVar37 + 3) = uVar6;
    ppppppppppbVar37[4] = __dest;
    ppppppppppbVar37[5] = pppppppppbVar12;
    ppppppppppbVar37[6] = pppppppppbVar12;
    local_140 = (byte *********)0x0;
    local_138 = (byte *********)0x0;
    local_130 = (byte *********)0x0;
    *ppppppppppbVar37 = (byte *********)0x0;
    ppppppppppbVar37[1] = (byte *********)pppppppppppbVar51;
    if ((pppppppppppbVar55 == (byte ***********)0x0) ||
       (*(float *)(pppppppppppbVar58 + 9) * (float)pppppppppppbVar55 <
        (float)((long)pppppppppppbVar58[8] + 1))) {
      if (pppppppppppbVar55 < (byte ***********)0x3) {
        uVar38 = 1;
      }
      else {
        uVar38 = (ulong)(((ulong)((long)pppppppppppbVar55 + -1) & (ulong)pppppppppppbVar55) != 0);
      }
      ppppppppppbVar27 = (byte **********)(uVar38 | (long)pppppppppppbVar55 << 1);
      ppppppppppbVar50 =
           (byte **********)
           (long)((float)((long)pppppppppppbVar58[8] + 1) / *(float *)(pppppppppppbVar58 + 9));
      if (ppppppppppbVar50 <= ppppppppppbVar27) {
        ppppppppppbVar50 = ppppppppppbVar27;
      }
      if ((long)ppppppppppbVar50 - 1U == 0) {
        ppppppppppbVar50 = (byte **********)0x2;
      }
      else if (((long)ppppppppppbVar50 - 1U & (ulong)ppppppppppbVar50) != 0) {
        ppppppppppbVar50 = (byte **********)std::__next_prime((ulong)ppppppppppbVar50);
      }
      ppppppppppbVar27 = pppppppppppbVar58[6];
      if (ppppppppppbVar27 < ppppppppppbVar50) {
LAB_7101938570:
        FUN_71024d85f0((ulong *)pppppppppppbVar61,(ulong)ppppppppppbVar50,
                       (long ****)ppppppppppppbVar56,param_4,param_5,param_6,param_7,param_8);
      }
      else if (ppppppppppbVar50 < ppppppppppbVar27) {
        ppppppppppbVar35 =
             (byte **********)
             (long)((float)pppppppppppbVar58[8] / *(float *)(pppppppppppbVar58 + 9));
        if (ppppppppppbVar27 < (byte **********)0x3 ||
            ((long)ppppppppppbVar27 - 1U & (ulong)ppppppppppbVar27) != 0) {
          ppppppppppbVar35 = (byte **********)std::__next_prime((ulong)ppppppppppbVar35);
        }
        else if ((byte **********)0x1 < ppppppppppbVar35) {
          ppppppppppbVar35 = (byte **********)(1L << (-LZCOUNT((long)ppppppppppbVar35 - 1) & 0x3fU))
          ;
        }
        if (ppppppppppbVar35 <= ppppppppppbVar50) {
          ppppppppppbVar35 = ppppppppppbVar50;
        }
        ppppppppppbVar50 = ppppppppppbVar35;
        if (ppppppppppbVar35 < ppppppppppbVar27) goto LAB_7101938570;
      }
      pppppppppppbVar55 = (byte ***********)pppppppppppbVar58[6];
      if (((ulong)((long)pppppppppppbVar55 + -1) & (ulong)pppppppppppbVar55) == 0) {
        pppppppppppbVar33 =
             (byte ***********)((ulong)((long)pppppppppppbVar55 + -1) & (ulong)pppppppppppbVar51);
      }
      else {
        pppppppppppbVar33 = pppppppppppbVar51;
        if (pppppppppppbVar55 <= pppppppppppbVar51) {
          uVar38 = 0;
          if (pppppppppppbVar55 != (byte ***********)0x0) {
            uVar38 = (ulong)pppppppppppbVar51 / (ulong)pppppppppppbVar55;
          }
          pppppppppppbVar33 =
               (byte ***********)((long)pppppppppppbVar51 - uVar38 * (long)pppppppppppbVar55);
        }
      }
    }
    ppppppppppbVar27 = *pppppppppppbVar61;
    ppppppppppbVar50 = (byte **********)ppppppppppbVar27[(long)pppppppppppbVar33];
    if (ppppppppppbVar50 == (byte **********)0x0) {
      *ppppppppppbVar37 = (byte *********)*pppppppppppbVar32;
      *pppppppppppbVar32 = ppppppppppbVar37;
      ppppppppppbVar27[(long)pppppppppppbVar33] = (byte *********)pppppppppppbVar32;
      if (*ppppppppppbVar37 != (byte *********)0x0) {
        pppppppppppbVar59 = (byte ***********)(*ppppppppppbVar37)[1];
        if (((ulong)((long)pppppppppppbVar55 + -1) & (ulong)pppppppppppbVar55) == 0) {
          pppppppppppbVar59 =
               (byte ***********)((ulong)pppppppppppbVar59 & (ulong)((long)pppppppppppbVar55 + -1));
        }
        else if (pppppppppppbVar55 <= pppppppppppbVar59) {
          uVar38 = 0;
          if (pppppppppppbVar55 != (byte ***********)0x0) {
            uVar38 = (ulong)pppppppppppbVar59 / (ulong)pppppppppppbVar55;
          }
          pppppppppppbVar59 =
               (byte ***********)((long)pppppppppppbVar59 - uVar38 * (long)pppppppppppbVar55);
        }
        ppppppppppbVar50 = *pppppppppppbVar61 + (long)pppppppppppbVar59;
        goto LAB_71019386a8;
      }
    }
    else {
      *ppppppppppbVar37 = *ppppppppppbVar50;
LAB_71019386a8:
      *ppppppppppbVar50 = (byte *********)ppppppppppbVar37;
    }
    pppppppppppbVar58[8] = (byte **********)((long)pppppppppppbVar58[8] + 1);
    pppppppppppbVar59 = pppppppppppbVar61;
    param_3 = (byte **********)ppppppppppppbVar56;
    __dest = local_140;
    pppppppppbVar2 = local_138;
  }
  else {
    if ((long)ppppppppppppbVar56 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    __dest = (byte *********)
             FUN_710392e290(0x10,ppppppppppppbVar56,(long ****)param_3,param_4,param_5,param_6,
                            param_7,param_8);
    if (__dest == (byte *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (byte ***********)((ulong)local_78 & 0xffffffff00000000);
        ppppppppppppbVar17 = &local_88;
        local_88 = (byte ***********)ppppppppppppbVar56;
        uVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar38 & 1) != 0) &&
           (__dest = (byte *********)
                     FUN_710392e290(0x10,ppppppppppppbVar56,(long ****)ppppppppppppbVar17,param_4,
                                    param_5,param_6,param_7,param_8), __dest != (byte *********)0x0)
           ) goto LAB_7101938340;
      }
      __dest = (byte *********)0x0;
    }
LAB_7101938340:
    pppppppppbVar2 = (byte *********)((long)__dest + (long)ppppppppppppbVar56);
    local_140 = __dest;
    local_138 = __dest;
    local_130 = pppppppppbVar2;
    memcpy(__dest,pppppppppppbVar33,(size_t)ppppppppppppbVar56);
    pppppppppppbVar55 = (byte ***********)pppppppppppbVar58[6];
    param_3 = (byte **********)ppppppppppppbVar56;
    pppppppppbVar12 = __dest;
    local_138 = pppppppppbVar2;
    if (pppppppppppbVar55 == (byte ***********)0x0) goto LAB_7101938450;
LAB_7101938384:
    __dest = pppppppppbVar12;
    pbVar34 = (byte *)((long)pppppppppppbVar55 + -1);
    if (((ulong)pbVar34 & (ulong)pppppppppppbVar55) == 0) {
      pppppppppppbVar33 = (byte ***********)((ulong)pbVar34 & (ulong)pppppppppppbVar51);
    }
    else {
      pppppppppppbVar33 = pppppppppppbVar51;
      if (pppppppppppbVar55 <= pppppppppppbVar51) {
        uVar38 = 0;
        if (pppppppppppbVar55 != (byte ***********)0x0) {
          uVar38 = (ulong)pppppppppppbVar51 / (ulong)pppppppppppbVar55;
        }
        pppppppppppbVar33 =
             (byte ***********)((long)pppppppppppbVar51 - uVar38 * (long)pppppppppppbVar55);
      }
    }
    pppppppppbVar12 = (*pppppppppppbVar61)[(long)pppppppppppbVar33];
    ppppppppppppbVar56 = (byte ************)param_3;
    if (pppppppppbVar12 == (byte *********)0x0) goto LAB_7101938450;
    pppppppppbVar2 = local_138;
    if (((ulong)pbVar34 & (ulong)pppppppppppbVar55) == 0) {
      do {
        pppppppppbVar12 = (byte *********)*pppppppppbVar12;
        if ((pppppppppbVar12 == (byte *********)0x0) ||
           ((byte ***********)pppppppppbVar12[1] != pppppppppppbVar51 &&
            (byte ***********)((ulong)pppppppppbVar12[1] & (ulong)pbVar34) != pppppppppppbVar33))
        goto LAB_7101938450;
      } while ((uint)*(byte *)(pppppppppbVar12 + 2) != (uVar20 & 0xff));
    }
    else {
      do {
        pppppppppbVar12 = (byte *********)*pppppppppbVar12;
        if (pppppppppbVar12 == (byte *********)0x0) goto LAB_7101938450;
        pppppppppppbVar42 = (byte ***********)pppppppppbVar12[1];
        if (pppppppppppbVar42 != pppppppppppbVar51) {
          if (pppppppppppbVar55 <= pppppppppppbVar42) {
            uVar38 = 0;
            if (pppppppppppbVar55 != (byte ***********)0x0) {
              uVar38 = (ulong)pppppppppppbVar42 / (ulong)pppppppppppbVar55;
            }
            pppppppppppbVar42 =
                 (byte ***********)((long)pppppppppppbVar42 - uVar38 * (long)pppppppppppbVar55);
          }
          if (pppppppppppbVar42 != pppppppppppbVar33) goto LAB_7101938450;
        }
      } while ((uint)*(byte *)(pppppppppbVar12 + 2) != (uVar20 & 0xff));
    }
  }
  local_138 = __dest;
  if (local_138 != (byte *********)0x0) {
    FUN_710392eb40((ulong)local_138);
    pppppppppbVar2 = local_138;
  }
  local_138 = pppppppppbVar2;
  if (uVar49 == 0) goto LAB_7101938b80;
  lVar31 = *(long *)(*(long *)(lVar29 + 0x228) + 8);
  pcVar26 = *(char **)(lVar31 + 0x20);
  pbVar34 = &DAT_7104742dbb;
  if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))) {
    iVar40 = 0;
    uVar38 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
    do {
      iVar1 = iVar57 + iVar40;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar30 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar26 + 5) +
                        (long)iVar1 * 8);
      uVar47 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
      if (uVar47 == uVar38) {
        uVar20 = puVar30[1];
        if (-1 < (int)uVar20) {
          pbVar34 = (byte *)(pcVar26 + (int)uVar20);
        }
        break;
      }
      iVar7 = iVar1 + -1;
      if (uVar47 <= uVar38) {
        iVar40 = iVar1 + 1;
        iVar7 = iVar57;
      }
      iVar57 = iVar7;
    } while (iVar40 <= iVar57);
  }
  if ((*pbVar34 - 0xb < 2) && (uVar19 < *(uint *)(pbVar34 + 1))) {
    param_3 = (byte **********)(uVar24 & 0xffffffff);
    FUN_710326a3e0(&local_150,lVar31,uVar19);
    pcVar26 = (char *)CONCAT44(local_148._4_4_,
                               CONCAT22(local_148._2_2_,CONCAT11(local_148._1_1_,(byte)local_148)));
    pbVar34 = &DAT_7104742dbb;
    if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))) {
      iVar40 = 0;
      do {
        iVar1 = iVar57 + iVar40;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar30 = (uint *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x28) +
                           (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
        uVar38 = *(ulong *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x20) +
                           (ulong)*puVar30 * 8);
        if (uVar38 == 0x4182694fc) {
          uVar19 = puVar30[1];
          if (-1 < (int)uVar19) {
            pbVar34 = (byte *)(pcVar26 + (int)uVar19);
          }
          break;
        }
        iVar7 = iVar1 + -1;
        if (uVar38 < 0x4182694fd) {
          iVar40 = iVar1 + 1;
          iVar7 = iVar57;
        }
        iVar57 = iVar7;
      } while (iVar40 <= iVar57);
    }
    switch(*pbVar34) {
    case 1:
    case 3:
      uVar19 = (uint)pbVar34[1];
      break;
    case 2:
      uVar19 = (uint)(char)pbVar34[1];
      break;
    case 4:
      uVar19 = (uint)*(short *)(pbVar34 + 1);
      break;
    case 5:
      uVar19 = (uint)*(ushort *)(pbVar34 + 1);
      break;
    case 6:
    case 7:
      uVar19 = *(uint *)(pbVar34 + 1);
      break;
    default:
      goto switchD_7101938b64_default;
    }
  }
  else {
switchD_7101938b64_default:
    uVar19 = 0;
  }
  *(uint *)(pppppppppppbVar58 + 0x15) = *(int *)(pppppppppppbVar58 + 0x15) + uVar19;
LAB_7101938b80:
  if (local_178 != (byte ***********)0x0) {
    local_170 = local_178;
    FUN_710392eb40((ulong)local_178);
  }
LAB_7101938b90:
  uVar24 = uVar24 + 1;
  if ((long)(int)uVar22 <= (long)uVar24) goto LAB_7101938ba0;
  goto LAB_71019374d4;
  while( true ) {
    iVar7 = iVar1 + -1;
    if (uVar38 <= uVar24) {
      iVar40 = iVar1 + 1;
      iVar7 = iVar57;
    }
    iVar57 = iVar7;
    if (iVar57 < iVar40) break;
LAB_71019373d4:
    iVar1 = iVar57 + iVar40;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 >> 1;
    puVar30 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) + (long)*(int *)(pcVar26 + 5) +
                      (long)iVar1 * 8);
    uVar38 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
    if (uVar38 == uVar24) {
      uVar22 = puVar30[1];
      if ((int)uVar22 < 0) {
LAB_7101937418:
        pbVar34 = &DAT_7104742dbb;
      }
      else {
        pbVar34 = (byte *)(pcVar26 + (int)uVar22);
      }
      break;
    }
  }
  if (*pbVar34 - 0xb < 2) {
    uVar22 = *(uint *)(pbVar34 + 1);
    uVar24 = local_b0;
    plVar25 = local_a0;
    if (uVar22 < 0x81) goto LAB_7101937444;
  }
  else {
    uVar22 = 0;
LAB_7101937444:
    *(undefined1 *)(pppppppppppbVar58 + 10) = 0;
    local_160[0] = 0;
    local_160[1] = 0;
    if (uVar22 != 0) {
      pppppppppppbVar66 = pppppppppppbVar58 + 2;
      uVar24 = 0;
      *(undefined4 *)(pppppppppppbVar58 + 0x15) = 0;
      pppppppppppbVar32 = pppppppppppbVar58 + 7;
LAB_71019374d4:
      lVar31 = *(long *)(*(long *)(lVar29 + 0x228) + 8);
      pcVar26 = *(char **)(lVar31 + 0x20);
      pbVar34 = &DAT_7104742dbb;
      if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))) {
        iVar40 = 0;
        uVar38 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
        do {
          iVar1 = iVar57 + iVar40;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar30 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) +
                             (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
          uVar47 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
          if (uVar47 == uVar38) {
            uVar19 = puVar30[1];
            if (-1 < (int)uVar19) {
              pbVar34 = (byte *)(pcVar26 + (int)uVar19);
            }
            break;
          }
          iVar7 = iVar1 + -1;
          if (uVar47 <= uVar38) {
            iVar40 = iVar1 + 1;
            iVar7 = iVar57;
          }
          iVar57 = iVar7;
        } while (iVar40 <= iVar57);
      }
      uVar19 = (uint)uVar24;
      if ((1 < *pbVar34 - 0xb) || (*(uint *)(pbVar34 + 1) <= uVar19))
      goto switchD_710193763c_default;
      param_3 = (byte **********)(uVar24 & 0xffffffff);
      FUN_710326a3e0(&local_150,lVar31,uVar19);
      pcVar26 = (char *)CONCAT44(local_148._4_4_,
                                 CONCAT22(local_148._2_2_,CONCAT11(local_148._1_1_,(byte)local_148))
                                );
      pbVar34 = &DAT_7104742dbb;
      if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))) {
        iVar40 = 0;
        do {
          iVar1 = iVar57 + iVar40;
          if (iVar1 < 0) {
            iVar1 = iVar1 + 1;
          }
          iVar1 = iVar1 >> 1;
          puVar30 = (uint *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x28) +
                             (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
          uVar38 = *(ulong *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x20) +
                             (ulong)*puVar30 * 8);
          if (uVar38 == 0x85585c142) {
            uVar20 = puVar30[1];
            if (-1 < (int)uVar20) {
              pbVar34 = (byte *)(pcVar26 + (int)uVar20);
            }
            break;
          }
          iVar7 = iVar1 + -1;
          if (uVar38 < 0x85585c143) {
            iVar40 = iVar1 + 1;
            iVar7 = iVar57;
          }
          iVar57 = iVar7;
        } while (iVar40 <= iVar57);
      }
      switch(*pbVar34) {
      case 1:
      case 3:
        uVar20 = (uint)pbVar34[1];
        break;
      case 2:
        uVar20 = (uint)(char)pbVar34[1];
        if ((int)uVar20 < 0) goto switchD_710193763c_default;
        break;
      case 4:
        uVar20 = (uint)*(short *)(pbVar34 + 1);
        goto joined_r0x00710193764c;
      case 5:
        uVar20 = (uint)*(ushort *)(pbVar34 + 1);
        break;
      case 6:
      case 7:
        uVar20 = *(uint *)(pbVar34 + 1);
joined_r0x00710193764c:
        if (-1 < (int)uVar20) break;
switchD_710193763c_default:
        uVar49 = 0xff;
        goto LAB_710193766c;
      default:
        goto switchD_710193763c_default;
      }
      cVar39 = (char)uVar20;
      if (cVar39 < '\0') {
        uVar20 = 0xffffffff;
      }
      uVar49 = uVar20 & 0xff;
      if (cVar39 < '\0') {
LAB_710193766c:
        lVar31 = *(long *)(*(long *)(lVar29 + 0x228) + 8);
        pcVar26 = *(char **)(lVar31 + 0x20);
        pbVar34 = &DAT_7104742dbb;
        if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1)))
        {
          iVar40 = 0;
          uVar38 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
          do {
            iVar1 = iVar57 + iVar40;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar1 >> 1;
            puVar30 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) +
                               (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
            uVar47 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
            if (uVar47 == uVar38) {
              uVar20 = puVar30[1];
              if (-1 < (int)uVar20) {
                pbVar34 = (byte *)(pcVar26 + (int)uVar20);
              }
              break;
            }
            iVar7 = iVar1 + -1;
            if (uVar47 <= uVar38) {
              iVar40 = iVar1 + 1;
              iVar7 = iVar57;
            }
            iVar57 = iVar7;
          } while (iVar40 <= iVar57);
        }
        if ((*pbVar34 - 0xb < 2) && (uVar19 < *(uint *)(pbVar34 + 1))) {
          param_3 = (byte **********)(uVar24 & 0xffffffff);
          FUN_710326a3e0(&local_150,lVar31,uVar19);
          pcVar26 = (char *)CONCAT44(local_148._4_4_,
                                     CONCAT22(local_148._2_2_,
                                              CONCAT11(local_148._1_1_,(byte)local_148)));
          pbVar34 = &DAT_7104742dbb;
          if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))
             ) {
            iVar40 = 0;
            do {
              iVar1 = iVar57 + iVar40;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              iVar1 = iVar1 >> 1;
              puVar30 = (uint *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x28) +
                                 (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
              uVar38 = *(ulong *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x20) +
                                 (ulong)*puVar30 * 8);
              if (uVar38 == 0xa99d8f5fd) {
                uVar20 = puVar30[1];
                if (-1 < (int)uVar20) {
                  pbVar34 = (byte *)(pcVar26 + (int)uVar20);
                }
                break;
              }
              iVar7 = iVar1 + -1;
              if (uVar38 < 0xa99d8f5fe) {
                iVar40 = iVar1 + 1;
                iVar7 = iVar57;
              }
              iVar57 = iVar7;
            } while (iVar40 <= iVar57);
          }
          switch(*pbVar34) {
          case 1:
          case 3:
            uVar38 = (ulong)pbVar34[1];
            break;
          case 2:
            uVar38 = (ulong)(char)pbVar34[1];
            break;
          case 4:
            uVar38 = (ulong)*(short *)(pbVar34 + 1);
            break;
          case 5:
            uVar38 = (ulong)*(ushort *)(pbVar34 + 1);
            break;
          case 6:
          case 7:
            uVar38 = (ulong)*(uint *)(pbVar34 + 1);
            break;
          default:
            goto switchD_71019377d4_default;
          }
        }
        else {
switchD_71019377d4_default:
          uVar38 = 0;
        }
        uVar20 = (uint)uVar38;
        cVar39 = (char)uVar38;
        local_150._0_4_ = CONCAT31(local_150._1_3_,cVar39);
        local_148._0_1_ = (byte)uVar24;
        local_148._1_1_ = (undefined1)(uVar24 >> 8);
        local_148._2_2_ = (undefined2)(uVar24 >> 0x10);
        pppppppppppbVar55 = (byte ***********)pppppppppppbVar58[1];
        pppppppppppbVar51 = (byte ***********)((ulong)(uint)local_150 & 0xff);
        local_150._4_4_ = uVar49;
        if (pppppppppppbVar55 == (byte ***********)0x0) {
LAB_71019378a8:
          ppppppppppbVar37 =
               (byte **********)
               FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
          if (ppppppppppbVar37 == (byte **********)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_180 = (byte ***********)((ulong)local_180 & 0xffffffff00000000);
              local_150._0_4_ = 0x20;
              local_150._4_4_ = 0;
              param_3 = (byte **********)&local_150;
              uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_180);
              if (((uVar47 & 1) != 0) &&
                 (ppppppppppbVar37 =
                       (byte **********)
                       FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), ppppppppppbVar37 != (byte **********)0x0))
              goto LAB_7101937904;
            }
            ppppppppppbVar37 = (byte **********)0x0;
          }
LAB_7101937904:
          *(char *)(ppppppppppbVar37 + 2) = cVar39;
          *(char *)((long)ppppppppppbVar37 + 0x14) = (char)uVar49;
          *(uint *)(ppppppppppbVar37 + 3) = uVar19;
          *ppppppppppbVar37 = (byte *********)0x0;
          ppppppppppbVar37[1] = (byte *********)pppppppppppbVar51;
          if ((pppppppppppbVar55 == (byte ***********)0x0) ||
             (*(float *)(pppppppppppbVar58 + 4) * (float)pppppppppppbVar55 <
              (float)((long)pppppppppppbVar58[3] + 1))) {
            if (pppppppppppbVar55 < (byte ***********)0x3) {
              uVar47 = 1;
            }
            else {
              uVar47 = (ulong)(((long)pppppppppppbVar55 - 1U & (ulong)pppppppppppbVar55) != 0);
            }
            ppppppppppbVar27 = (byte **********)(uVar47 | (long)pppppppppppbVar55 << 1);
            ppppppppppbVar50 =
                 (byte **********)
                 (long)((float)((long)pppppppppppbVar58[3] + 1) / *(float *)(pppppppppppbVar58 + 4))
            ;
            if (ppppppppppbVar50 <= ppppppppppbVar27) {
              ppppppppppbVar50 = ppppppppppbVar27;
            }
            if ((long)ppppppppppbVar50 - 1U == 0) {
              ppppppppppbVar50 = (byte **********)0x2;
            }
            else if (((long)ppppppppppbVar50 - 1U & (ulong)ppppppppppbVar50) != 0) {
              ppppppppppbVar50 = (byte **********)std::__next_prime((ulong)ppppppppppbVar50);
            }
            ppppppppppbVar27 = pppppppppppbVar58[1];
            if (ppppppppppbVar27 < ppppppppppbVar50) {
LAB_71019379a8:
              FUN_71024d8890((ulong *)pppppppppppbVar58,(ulong)ppppppppppbVar50,(long ****)param_3,
                             param_4,param_5,param_6,param_7,param_8);
            }
            else if (ppppppppppbVar50 < ppppppppppbVar27) {
              ppppppppppbVar35 =
                   (byte **********)
                   (long)((float)pppppppppppbVar58[3] / *(float *)(pppppppppppbVar58 + 4));
              if (ppppppppppbVar27 < (byte **********)0x3 ||
                  ((long)ppppppppppbVar27 - 1U & (ulong)ppppppppppbVar27) != 0) {
                ppppppppppbVar35 = (byte **********)std::__next_prime((ulong)ppppppppppbVar35);
              }
              else if ((byte **********)0x1 < ppppppppppbVar35) {
                ppppppppppbVar35 =
                     (byte **********)(1L << (-LZCOUNT((long)ppppppppppbVar35 - 1) & 0x3fU));
              }
              if (ppppppppppbVar35 <= ppppppppppbVar50) {
                ppppppppppbVar35 = ppppppppppbVar50;
              }
              ppppppppppbVar50 = ppppppppppbVar35;
              if (ppppppppppbVar35 < ppppppppppbVar27) goto LAB_71019379a8;
            }
            pppppppppppbVar55 = (byte ***********)pppppppppppbVar58[1];
            if (((long)pppppppppppbVar55 - 1U & (ulong)pppppppppppbVar55) == 0) {
              pppppppppppbVar59 =
                   (byte ***********)((long)pppppppppppbVar55 - 1U & (ulong)pppppppppppbVar51);
            }
            else {
              pppppppppppbVar59 = pppppppppppbVar51;
              if (pppppppppppbVar55 <= pppppppppppbVar51) {
                uVar47 = 0;
                if (pppppppppppbVar55 != (byte ***********)0x0) {
                  uVar47 = (ulong)pppppppppppbVar51 / (ulong)pppppppppppbVar55;
                }
                pppppppppppbVar59 =
                     (byte ***********)((long)pppppppppppbVar51 - uVar47 * (long)pppppppppppbVar55);
              }
            }
          }
          ppppppppppbVar27 = *pppppppppppbVar58;
          ppppppppppbVar50 = (byte **********)ppppppppppbVar27[(long)pppppppppppbVar59];
          if (ppppppppppbVar50 == (byte **********)0x0) {
            *ppppppppppbVar37 = (byte *********)*pppppppppppbVar66;
            *pppppppppppbVar66 = ppppppppppbVar37;
            ppppppppppbVar27[(long)pppppppppppbVar59] = (byte *********)pppppppppppbVar66;
            if (*ppppppppppbVar37 != (byte *********)0x0) {
              pppppppppppbVar59 = (byte ***********)(*ppppppppppbVar37)[1];
              if (((long)pppppppppppbVar55 - 1U & (ulong)pppppppppppbVar55) == 0) {
                pppppppppppbVar59 =
                     (byte ***********)((ulong)pppppppppppbVar59 & (long)pppppppppppbVar55 - 1U);
              }
              else if (pppppppppppbVar55 <= pppppppppppbVar59) {
                uVar47 = 0;
                if (pppppppppppbVar55 != (byte ***********)0x0) {
                  uVar47 = (ulong)pppppppppppbVar59 / (ulong)pppppppppppbVar55;
                }
                pppppppppppbVar59 =
                     (byte ***********)((long)pppppppppppbVar59 - uVar47 * (long)pppppppppppbVar55);
              }
              ppppppppppbVar50 = *pppppppppppbVar58 + (long)pppppppppppbVar59;
              goto LAB_7101937ac0;
            }
          }
          else {
            *ppppppppppbVar37 = *ppppppppppbVar50;
LAB_7101937ac0:
            *ppppppppppbVar50 = (byte *********)ppppppppppbVar37;
          }
          pppppppppppbVar58[3] = (byte **********)((long)pppppppppppbVar58[3] + 1);
        }
        else {
          uVar47 = (long)pppppppppppbVar55 - 1;
          if ((uVar47 & (ulong)pppppppppppbVar55) == 0) {
            pppppppppppbVar59 = (byte ***********)(uVar47 & (ulong)pppppppppppbVar51);
          }
          else {
            pppppppppppbVar59 = pppppppppppbVar51;
            if (pppppppppppbVar55 <= pppppppppppbVar51) {
              uVar48 = 0;
              if (pppppppppppbVar55 != (byte ***********)0x0) {
                uVar48 = (ulong)pppppppppppbVar51 / (ulong)pppppppppppbVar55;
              }
              pppppppppppbVar59 =
                   (byte ***********)((long)pppppppppppbVar51 - uVar48 * (long)pppppppppppbVar55);
            }
          }
          pppppppppbVar12 = (*pppppppppppbVar58)[(long)pppppppppppbVar59];
          if (pppppppppbVar12 == (byte *********)0x0) goto LAB_71019378a8;
          if ((uVar47 & (ulong)pppppppppppbVar55) == 0) {
            do {
              pppppppppbVar12 = (byte *********)*pppppppppbVar12;
              if ((pppppppppbVar12 == (byte *********)0x0) ||
                 ((byte ***********)pppppppppbVar12[1] != pppppppppppbVar51 &&
                  (byte ***********)((ulong)pppppppppbVar12[1] & uVar47) != pppppppppppbVar59))
              goto LAB_71019378a8;
            } while (*(char *)(pppppppppbVar12 + 2) != cVar39);
          }
          else {
            do {
              pppppppppbVar12 = (byte *********)*pppppppppbVar12;
              if (pppppppppbVar12 == (byte *********)0x0) goto LAB_71019378a8;
              pppppppppppbVar33 = (byte ***********)pppppppppbVar12[1];
              if (pppppppppppbVar33 != pppppppppppbVar51) {
                if (pppppppppppbVar55 <= pppppppppppbVar33) {
                  uVar47 = 0;
                  if (pppppppppppbVar55 != (byte ***********)0x0) {
                    uVar47 = (ulong)pppppppppppbVar33 / (ulong)pppppppppppbVar55;
                  }
                  pppppppppppbVar33 =
                       (byte ***********)
                       ((long)pppppppppppbVar33 - uVar47 * (long)pppppppppppbVar55);
                }
                if (pppppppppppbVar33 != pppppppppppbVar59) goto LAB_71019378a8;
              }
            } while (*(char *)(pppppppppbVar12 + 2) != cVar39);
          }
        }
        local_178 = (byte ***********)0x0;
        local_170 = (byte ***********)0x0;
        local_168 = (byte ***********)0x0;
        lVar31 = *(long *)(*(long *)(lVar29 + 0x228) + 8);
        pcVar26 = *(char **)(lVar31 + 0x20);
        pbVar34 = &DAT_7104742dbb;
        if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1)))
        {
          iVar40 = 0;
          uVar47 = *(ulong *)(lVar31 + 0x48) & 0xffffffffff;
          do {
            iVar1 = iVar57 + iVar40;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar1 >> 1;
            puVar30 = (uint *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x28) +
                               (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
            uVar48 = *(ulong *)(*(long *)(*(long *)(lVar31 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
            if (uVar48 == uVar47) {
              uVar21 = puVar30[1];
              if (-1 < (int)uVar21) {
                pbVar34 = (byte *)(pcVar26 + (int)uVar21);
              }
              break;
            }
            iVar7 = iVar1 + -1;
            if (uVar48 <= uVar47) {
              iVar40 = iVar1 + 1;
              iVar7 = iVar57;
            }
            iVar57 = iVar7;
          } while (iVar40 <= iVar57);
        }
        if ((*pbVar34 - 0xb < 2) && (uVar19 < *(uint *)(pbVar34 + 1))) {
          FUN_710326a3e0(&local_150,lVar31,uVar19);
          pcVar26 = (char *)CONCAT44(local_148._4_4_,
                                     CONCAT22(local_148._2_2_,
                                              CONCAT11(local_148._1_1_,(byte)local_148)));
          pbVar34 = &DAT_7104742dbb;
          if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))
             ) {
            iVar40 = 0;
            do {
              iVar1 = iVar57 + iVar40;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              iVar1 = iVar1 >> 1;
              puVar30 = (uint *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x28) +
                                 (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
              uVar47 = *(ulong *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x20) +
                                 (ulong)*puVar30 * 8);
              if (uVar47 == 0x5faa31c69) {
                uVar21 = puVar30[1];
                if (-1 < (int)uVar21) {
                  pbVar34 = (byte *)(pcVar26 + (int)uVar21);
                }
                break;
              }
              iVar7 = iVar1 + -1;
              if (uVar47 < 0x5faa31c6a) {
                iVar40 = iVar1 + 1;
                iVar7 = iVar57;
              }
              iVar57 = iVar7;
            } while (iVar40 <= iVar57);
          }
          switch(*pbVar34) {
          case 1:
          case 3:
            uVar21 = (uint)pbVar34[1];
            break;
          case 2:
            uVar21 = (uint)(char)pbVar34[1];
            break;
          case 4:
            uVar21 = (uint)*(short *)(pbVar34 + 1);
            break;
          case 5:
            uVar21 = (uint)*(ushort *)(pbVar34 + 1);
            break;
          case 6:
          case 7:
            uVar21 = *(uint *)(pbVar34 + 1);
            break;
          default:
            goto switchD_7101937c54_default;
          }
        }
        else {
switchD_7101937c54_default:
          uVar21 = 0;
        }
        local_180 = (byte ***********)CONCAT71(local_180._1_7_,(byte)uVar21);
        bVar53 = (byte)uVar21;
        if ((uVar21 & 0xff) <= (uint)*(byte *)(pppppppppppbVar58 + 10)) {
          bVar53 = *(byte *)(pppppppppppbVar58 + 10);
        }
        *(byte *)(pppppppppppbVar58 + 10) = bVar53;
        lVar31 = *(long *)(DAT_710532f730 + 8);
        pppppppppppbVar59 = (byte ***********)pppppppppppbVar58[1];
        pppppppppppbVar51 = (byte ***********)(uVar38 & 0xff);
        if (((ulong)((long)pppppppppppbVar59 + -1) & (ulong)pppppppppppbVar59) == 0) {
          pppppppppbVar12 =
               (*pppppppppppbVar58)
               [(ulong)((long)pppppppppppbVar59 + -1) & (ulong)pppppppppppbVar51];
          do {
            do {
              pppppppppbVar12 = (byte *********)*pppppppppbVar12;
            } while ((byte ***********)pppppppppbVar12[1] != pppppppppppbVar51);
          } while ((uint)*(byte *)(pppppppppbVar12 + 2) != (uVar20 & 0xff));
        }
        else {
          pppppppppppbVar55 = pppppppppppbVar51;
          if (pppppppppppbVar59 <= pppppppppppbVar51) {
            uVar38 = 0;
            if (pppppppppppbVar59 != (byte ***********)0x0) {
              uVar38 = (ulong)pppppppppppbVar51 / (ulong)pppppppppppbVar59;
            }
            pppppppppppbVar55 =
                 (byte ***********)((long)pppppppppppbVar51 - uVar38 * (long)pppppppppppbVar59);
          }
          pppppppppbVar12 = (*pppppppppppbVar58)[(long)pppppppppppbVar55];
          do {
            do {
              pppppppppbVar12 = (byte *********)*pppppppppbVar12;
            } while ((byte ***********)pppppppppbVar12[1] != pppppppppppbVar51);
          } while ((uint)*(byte *)(pppppppppbVar12 + 2) != (uVar20 & 0xff));
        }
        uVar21 = *(uint *)(pppppppppbVar12 + 3);
        param_3 = (byte **********)(ulong)uVar21;
        lVar16 = *(long *)(*(long *)(lVar31 + 0x228) + 8);
        pcVar26 = *(char **)(lVar16 + 0x20);
        pbVar34 = &DAT_7104742dbb;
        if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1)))
        {
          iVar40 = 0;
          uVar38 = *(ulong *)(lVar16 + 0x48) & 0xffffffffff;
          do {
            iVar1 = iVar57 + iVar40;
            if (iVar1 < 0) {
              iVar1 = iVar1 + 1;
            }
            iVar1 = iVar1 >> 1;
            puVar30 = (uint *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x28) +
                               (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
            uVar47 = *(ulong *)(*(long *)(*(long *)(lVar16 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
            if (uVar47 == uVar38) {
              uVar65 = puVar30[1];
              if (-1 < (int)uVar65) {
                pbVar34 = (byte *)(pcVar26 + (int)uVar65);
              }
              break;
            }
            iVar7 = iVar1 + -1;
            if (uVar47 <= uVar38) {
              iVar40 = iVar1 + 1;
              iVar7 = iVar57;
            }
            iVar57 = iVar7;
          } while (iVar40 <= iVar57);
        }
        if ((*pbVar34 - 0xb < 2) && (uVar21 < *(uint *)(pbVar34 + 1))) {
          FUN_710326a3e0(&local_150,lVar16,uVar21);
          pcVar26 = (char *)CONCAT44(local_148._4_4_,
                                     CONCAT22(local_148._2_2_,
                                              CONCAT11(local_148._1_1_,(byte)local_148)));
          if ((*pcVar26 == '\f') && (iVar57 = *(int *)(pcVar26 + 1) + -1, 0 < *(int *)(pcVar26 + 1))
             ) {
            lVar16 = CONCAT44(local_150._4_4_,(uint)local_150);
            iVar40 = 0;
            do {
              iVar1 = iVar57 + iVar40;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              iVar1 = iVar1 >> 1;
              puVar30 = (uint *)(*(long *)(lVar16 + 0x28) + (long)*(int *)(pcVar26 + 5) +
                                (long)iVar1 * 8);
              uVar38 = *(ulong *)(*(long *)(lVar16 + 0x20) + (ulong)*puVar30 * 8);
              if (uVar38 == 0x12e9690c29) {
                uVar21 = puVar30[1];
                if (-1 < (int)uVar21) {
                  pbVar34 = (byte *)(pcVar26 + (int)uVar21);
                  goto LAB_7101937e60;
                }
                break;
              }
              iVar7 = iVar1 + -1;
              if (uVar38 < 0x12e9690c2a) {
                iVar40 = iVar1 + 1;
                iVar7 = iVar57;
              }
              iVar57 = iVar7;
            } while (iVar40 <= iVar57);
          }
          lVar16 = 0;
          pbVar34 = &DAT_7104742dbb;
LAB_7101937e60:
          if (*pbVar34 == 9) {
            uVar38 = *(ulong *)(*(long *)(lVar16 + 0x20) + (long)*(int *)(pbVar34 + 1) * 8);
          }
          else {
            uVar38 = 0;
          }
          uVar13 = FUN_7102486c70(uVar38);
          uVar11 = (ushort)uVar13;
        }
        else {
          uVar11 = 0;
        }
        pppppppppppbVar59 = (byte ***********)FUN_71032a1630(*(long *)(lVar31 + 0x218),uVar11);
        pppppppppppbVar55 = local_178;
        if (local_a8 == (byte ***********)0x0) {
LAB_710193811c:
          uVar45 = 0;
        }
        else {
          uVar38 = (long)local_a8 - 1;
          if ((uVar38 & (ulong)local_a8) == 0) {
            pppppppppppbVar33 = (byte ***********)(uVar38 & (ulong)pppppppppppbVar59);
          }
          else {
            pppppppppppbVar33 = pppppppppppbVar59;
            if (local_a8 <= pppppppppppbVar59) {
              uVar47 = 0;
              if (local_a8 != (byte ***********)0x0) {
                uVar47 = (ulong)pppppppppppbVar59 / (ulong)local_a8;
              }
              pppppppppppbVar33 =
                   (byte ***********)((long)pppppppppppbVar59 - uVar47 * (long)local_a8);
            }
          }
          plVar25 = *(long **)(local_b0 + (long)pppppppppppbVar33 * 8);
          if ((plVar25 == (long *)0x0) || (plVar25 = (long *)*plVar25, plVar25 == (long *)0x0))
          goto LAB_710193811c;
          bVar8 = ((ulong)pppppppppppbVar59 & 0xffffffffff) != 0;
          bVar9 = ((ulong)pppppppppppbVar59 & 0xff00000000000000) != 0x7100000000000000;
          if ((uVar38 & (ulong)local_a8) == 0) {
            if (!bVar9 && bVar8) {
              if (bVar9 || !bVar8) {
                do {
                  if (pppppppppppbVar59 != (byte ***********)plVar25[1] &&
                      (byte ***********)((ulong)plVar25[1] & uVar38) != pppppppppppbVar33)
                  goto LAB_710193811c;
                  plVar25 = (long *)*plVar25;
                  uVar45 = 0;
                } while (plVar25 != (long *)0x0);
              }
              else {
                do {
                  pppppppppppbVar42 = (byte ***********)plVar25[1];
                  if (pppppppppppbVar59 != pppppppppppbVar42 &&
                      (byte ***********)((ulong)pppppppppppbVar42 & uVar38) != pppppppppppbVar33)
                  goto LAB_710193811c;
                  if ((((pppppppppppbVar59 == pppppppppppbVar42) &&
                       (uVar47 = plVar25[2], (uVar47 & 0xff00000000000000) == 0x7100000000000000))
                      && ((uVar47 & 0xffffffffff) != 0)) &&
                     ((((ulong)pppppppppppbVar59 ^ uVar47) & 0xffffffffff) == 0))
                  goto LAB_7101938278;
                  plVar25 = (long *)*plVar25;
                  uVar45 = 0;
                } while (plVar25 != (long *)0x0);
              }
            }
            else if (bVar9 || !bVar8) {
              do {
                pppppppppppbVar42 = (byte ***********)plVar25[1];
                if (pppppppppppbVar59 != pppppppppppbVar42 &&
                    (byte ***********)((ulong)pppppppppppbVar42 & uVar38) != pppppppppppbVar33)
                goto LAB_710193811c;
                if ((pppppppppppbVar59 == pppppppppppbVar42) &&
                   (((plVar25[2] & 0xff00000000000000U) != 0x7100000000000000 ||
                    ((plVar25[2] & 0xffffffffffU) == 0)))) goto LAB_7101938278;
                plVar25 = (long *)*plVar25;
                uVar45 = 0;
              } while (plVar25 != (long *)0x0);
            }
            else {
              do {
                pppppppppppbVar42 = (byte ***********)plVar25[1];
                if (pppppppppppbVar59 != pppppppppppbVar42 &&
                    (byte ***********)((ulong)pppppppppppbVar42 & uVar38) != pppppppppppbVar33)
                goto LAB_710193811c;
                if ((pppppppppppbVar59 == pppppppppppbVar42) &&
                   (((uVar47 = plVar25[2], (uVar47 & 0xff00000000000000) != 0x7100000000000000 ||
                     ((uVar47 & 0xffffffffff) == 0)) ||
                    ((((ulong)pppppppppppbVar59 ^ uVar47) & 0xffffffffff) == 0))))
                goto LAB_7101938278;
                plVar25 = (long *)*plVar25;
                uVar45 = 0;
              } while (plVar25 != (long *)0x0);
            }
          }
          else {
            if (!bVar9 && bVar8) {
              do {
                pppppppppppbVar42 = (byte ***********)plVar25[1];
                if (pppppppppppbVar59 == pppppppppppbVar42) {
                  uVar38 = plVar25[2];
                  if ((((uVar38 & 0xffffffffff) != 0) &&
                      ((uVar38 & 0xff00000000000000) == 0x7100000000000000)) &&
                     ((((ulong)pppppppppppbVar59 ^ uVar38) & 0xffffffffff) == 0))
                  goto LAB_7101938278;
                }
                else {
                  if (local_a8 <= pppppppppppbVar42) {
                    uVar38 = 0;
                    if (local_a8 != (byte ***********)0x0) {
                      uVar38 = (ulong)pppppppppppbVar42 / (ulong)local_a8;
                    }
                    pppppppppppbVar42 =
                         (byte ***********)((long)pppppppppppbVar42 - uVar38 * (long)local_a8);
                  }
                  if (pppppppppppbVar42 != pppppppppppbVar33) break;
                }
                plVar25 = (long *)*plVar25;
              } while (plVar25 != (long *)0x0);
              goto LAB_710193811c;
            }
            if (!bVar9 && bVar8) {
              do {
                pppppppppppbVar42 = (byte ***********)plVar25[1];
                if (pppppppppppbVar59 == pppppppppppbVar42) {
                  uVar38 = plVar25[2];
                  if (((uVar38 & 0xff00000000000000) != 0x7100000000000000 ||
                      (uVar38 & 0xffffffffff) == 0) ||
                      (((ulong)pppppppppppbVar59 ^ uVar38) & 0xffffffffff) == 0)
                  goto LAB_7101938278;
                }
                else {
                  if (local_a8 <= pppppppppppbVar42) {
                    uVar38 = 0;
                    if (local_a8 != (byte ***********)0x0) {
                      uVar38 = (ulong)pppppppppppbVar42 / (ulong)local_a8;
                    }
                    pppppppppppbVar42 =
                         (byte ***********)((long)pppppppppppbVar42 - uVar38 * (long)local_a8);
                  }
                  if (pppppppppppbVar42 != pppppppppppbVar33) goto LAB_710193811c;
                }
                plVar25 = (long *)*plVar25;
                uVar45 = 0;
              } while (plVar25 != (long *)0x0);
            }
            else {
              do {
                pppppppppppbVar42 = (byte ***********)plVar25[1];
                if (pppppppppppbVar59 == pppppppppppbVar42) {
                  if ((plVar25[2] & 0xff00000000000000U) != 0x7100000000000000 ||
                      (plVar25[2] & 0xffffffffffU) == 0) goto LAB_7101938278;
                }
                else {
                  if (local_a8 <= pppppppppppbVar42) {
                    uVar38 = 0;
                    if (local_a8 != (byte ***********)0x0) {
                      uVar38 = (ulong)pppppppppppbVar42 / (ulong)local_a8;
                    }
                    pppppppppppbVar42 =
                         (byte ***********)((long)pppppppppppbVar42 - uVar38 * (long)local_a8);
                  }
                  if (pppppppppppbVar42 != pppppppppppbVar33) goto LAB_710193811c;
                }
                plVar25 = (long *)*plVar25;
                uVar45 = 0;
              } while (plVar25 != (long *)0x0);
            }
          }
        }
        goto LAB_7101938120;
      }
      uVar38 = (ulong)(long)(char)uVar20 >> 6;
      uVar47 = 1L << ((long)(char)uVar20 & 0x3fU);
      if ((local_160[uVar38] & uVar47) == 0) {
        local_160[uVar38] = local_160[uVar38] | uVar47;
        goto LAB_710193766c;
      }
      goto LAB_7101938b90;
    }
LAB_7101938ba0:
    pppppppppppbVar61 = pppppppppppbVar58 + 0xe;
    *pppppppppppbVar61 = (byte **********)0x0;
    *(undefined4 *)((long)pppppppppppbVar58 + 0xa4) = 0;
    pppppppppppbVar58[0x10] = (byte **********)0x1;
    pppppppppppbVar58[0x11] = (byte **********)0x0;
    pppppppppppbVar58[0x12] = (byte **********)0x1;
    pppppppppppbVar58[0x13] = (byte **********)0x0;
    pppppppppppbVar58[0xf] = (byte **********)0x0;
    pppppppppppbVar58[0xc] = pppppppppppbVar58[0xb];
    ppppppppppbVar37 =
         (byte **********)
         FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (ppppppppppbVar37 == (byte **********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_180 = (byte ***********)((ulong)local_180 & 0xffffffff00000000);
        local_150._0_4_ = 0x10;
        local_150._4_4_ = 0;
        param_3 = (byte **********)&local_150;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_180);
        if (((uVar24 & 1) != 0) &&
           (ppppppppppbVar37 =
                 (byte **********)
                 FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               ), ppppppppppbVar37 != (byte **********)0x0)) goto LAB_7101938c1c;
      }
      ppppppppppbVar37 = (byte **********)0x0;
    }
LAB_7101938c1c:
    *(byte *)ppppppppppbVar37 = (byte)uVar4;
    ppppppppppbVar37[1] = *(byte **********)(*DAT_7105314510 + 0x158);
    ppppppppppbVar50 = pppppppppppbVar58[0x16];
    pppppppppppbVar58[0x16] = ppppppppppbVar37;
    if (ppppppppppbVar50 != (byte **********)0x0) {
      FUN_710392eb40((ulong)ppppppppppbVar50);
      ppppppppppbVar37 = pppppppppppbVar58[0x16];
    }
    if (2 < (ulong)*(byte *)ppppppppppbVar37) goto LAB_7101939474;
    ppppppppppbVar50 = pppppppppppbVar58[2];
    uVar22 = *(uint *)(pppppppppppbVar58 + 0x15);
    if (*(uint *)(**ppppppppppbVar37[1] + (ulong)*(byte *)ppppppppppbVar37 * 0x7ae0 + 0x7ad6) <=
        *(uint *)(pppppppppppbVar58 + 0x15)) {
      uVar22 = *(uint *)(**ppppppppppbVar37[1] + (ulong)*(byte *)ppppppppppbVar37 * 0x7ae0 + 0x7ad6)
      ;
    }
    *(uint *)(pppppppppppbVar58 + 0x14) = uVar22;
    *(undefined4 *)((long)pppppppppppbVar58 + 0xa4) = 0;
    if (ppppppppppbVar50 == (byte **********)0x0) {
      bVar53 = 0;
      *(undefined1 *)(pppppppppppbVar58 + 0x17) = 1;
      *pppppppppppbVar61 = (byte **********)0x0;
      pppppppppppbVar58[0xf] = (byte **********)0x0;
    }
    else {
      bVar8 = false;
      do {
        while (uVar24 = *(ulong *)((long)ppppppppppbVar50 + 0x14), (uVar24 & 0xff) == 0) {
LAB_710193914c:
          ppppppppppbVar50 = (byte **********)*ppppppppppbVar50;
          if (ppppppppppbVar50 == (byte **********)0x0) goto LAB_7101939154;
        }
        ppppppppppbVar37 = pppppppppppbVar58[0x16];
        bVar53 = *(byte *)(ppppppppppbVar50 + 2);
        ppppppppppbVar27 = (byte **********)(ulong)bVar53;
        uVar22 = (uint)(uVar24 >> 0x20);
        uVar13 = FUN_71032617c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228),uVar22);
        uVar38 = (ulong)*(byte *)ppppppppppbVar37;
        if (2 < uVar38) goto LAB_7101939474;
        if ((char)uVar13 < '\0') {
          bVar9 = false;
        }
        else {
          bVar9 = (*(uint *)((long)**ppppppppppbVar37[1] +
                            (ulong)(((uint)uVar13 & 0xff) >> 4) * 4 + uVar38 * 0x3d700 + 0x3d690) &
                  1 << (ulong)(((uint)uVar13 & 0xf) << 1)) != 0;
        }
        ppppppppppbVar37 = pppppppppppbVar58[0x16];
        uVar13 = FUN_71032617c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228),uVar22);
        uVar38 = (ulong)*(byte *)ppppppppppbVar37;
        if (2 < uVar38) goto LAB_7101939474;
        uVar19 = (uint)uVar13 & 0xff;
        uVar20 = uVar19 << 1;
        if ((uVar20 | 1) < 0x100) {
          bVar10 = (*(uint *)((long)**ppppppppppbVar37[1] +
                             (ulong)(uVar19 >> 4) * 4 + uVar38 * 0x3d700 + 0x3d690) &
                   1 << (ulong)(uVar20 & 0x1f | 1)) != 0;
        }
        else {
          bVar10 = false;
        }
        cVar39 = (char)uVar24;
        if (((~(uint)uVar24 & 0xff) == 0) || (0x7f < (ulong)(long)cVar39)) {
LAB_710193902c:
          if (!bVar9 && bVar10) {
            ppppppppppbVar37 = pppppppppppbVar58[0x16];
            uVar13 = FUN_71032617c0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228),uVar22);
            uVar38 = (ulong)*(byte *)ppppppppppbVar37;
            if (2 < uVar38) goto LAB_7101939474;
            uVar22 = (uint)uVar13 & 0xff;
            uVar19 = uVar22 << 1;
            if ((uVar19 | 1) < 0x100) {
              pppppppbVar44 = **ppppppppppbVar37[1];
              lVar29 = (ulong)(uVar22 >> 4) * 4 + uVar38 * 0x3d700;
              *(uint *)((long)pppppppbVar44 + lVar29 + 0x3d690) =
                   *(uint *)((long)pppppppbVar44 + lVar29 + 0x3d690) &
                   (1 << (ulong)(uVar19 & 0x1f | 1) ^ 0xffffffffU);
            }
            if (((~(uint)uVar24 & 0xff) == 0) || (0x7f < (ulong)(long)cVar39)) {
              bVar8 = true;
            }
            else {
              uVar38 = (ulong)(long)cVar39 >> 3 & 0x1ffffffffffffff8;
              bVar8 = true;
              *(ulong *)((long)pppppppppppbVar58 + uVar38 + 0x90) =
                   *(ulong *)((long)pppppppppppbVar58 + uVar38 + 0x90) &
                   (1L << (uVar24 & 0x3f) ^ 0xffffffffffffffffU);
            }
          }
        }
        else {
          uVar38 = (ulong)(long)cVar39 >> 6;
          uVar47 = 1L << (uVar24 & 0x3f);
          pppppppppppbVar66 = pppppppppppbVar58 + uVar38 + 0x10;
          if (bVar9) {
            ppppppppppbVar37 = (byte **********)((ulong)*pppppppppppbVar66 | uVar47);
          }
          else {
            ppppppppppbVar37 =
                 (byte **********)((ulong)*pppppppppppbVar66 & (uVar47 ^ 0xffffffffffffffff));
          }
          pppppppppppbVar59 = pppppppppppbVar58 + uVar38 + 0x12;
          *pppppppppppbVar66 = ppppppppppbVar37;
          if (bVar10) {
            *pppppppppppbVar59 = (byte **********)((ulong)*pppppppppppbVar59 | uVar47);
            goto LAB_710193902c;
          }
          *pppppppppppbVar59 =
               (byte **********)((ulong)*pppppppppppbVar59 & (uVar47 ^ 0xffffffffffffffff));
        }
        if (!bVar9) goto LAB_710193914c;
        ppppppppppbVar37 = pppppppppppbVar58[1];
        if (((long)ppppppppppbVar37 - 1U & (ulong)ppppppppppbVar37) == 0) {
          pppppppppbVar12 =
               (*pppppppppppbVar58)[(long)ppppppppppbVar37 - 1U & (ulong)ppppppppppbVar27];
          do {
            do {
              pppppppppbVar12 = (byte *********)*pppppppppbVar12;
            } while ((byte **********)pppppppppbVar12[1] != ppppppppppbVar27);
          } while (*(byte *)(pppppppppbVar12 + 2) != bVar53);
        }
        else {
          ppppppppppbVar35 = ppppppppppbVar27;
          if (ppppppppppbVar37 <= ppppppppppbVar27) {
            uVar24 = 0;
            if (ppppppppppbVar37 != (byte **********)0x0) {
              uVar24 = (ulong)ppppppppppbVar27 / (ulong)ppppppppppbVar37;
            }
            ppppppppppbVar35 =
                 (byte **********)((long)ppppppppppbVar27 - uVar24 * (long)ppppppppppbVar37);
          }
          pppppppppbVar12 = (*pppppppppppbVar58)[(long)ppppppppppbVar35];
          do {
            do {
              pppppppppbVar12 = (byte *********)*pppppppppbVar12;
            } while ((byte **********)pppppppppbVar12[1] != ppppppppppbVar27);
          } while (*(byte *)(pppppppppbVar12 + 2) != bVar53);
        }
        uVar22 = *(uint *)(pppppppppbVar12 + 3);
        param_3 = (byte **********)(ulong)uVar22;
        lVar29 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x228) + 8);
        pcVar26 = *(char **)(lVar29 + 0x20);
        pbVar34 = &DAT_7104742dbb;
        if (*pcVar26 == '\f') {
          iVar57 = *(int *)(pcVar26 + 1) + -1;
          if (0 < *(int *)(pcVar26 + 1)) {
            iVar40 = 0;
            uVar24 = *(ulong *)(lVar29 + 0x48) & 0xffffffffff;
            do {
              iVar1 = iVar57 + iVar40;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              iVar1 = iVar1 >> 1;
              puVar30 = (uint *)(*(long *)(*(long *)(lVar29 + 0x18) + 0x28) +
                                 (long)*(int *)(pcVar26 + 5) + (long)iVar1 * 8);
              uVar38 = *(ulong *)(*(long *)(*(long *)(lVar29 + 0x18) + 0x20) + (ulong)*puVar30 * 8);
              if (uVar38 == uVar24) {
                uVar19 = puVar30[1];
                if (-1 < (int)uVar19) {
                  pbVar34 = (byte *)(pcVar26 + (int)uVar19);
                  goto LAB_7101938d9c;
                }
                break;
              }
              iVar7 = iVar1 + -1;
              if (uVar38 <= uVar24) {
                iVar40 = iVar1 + 1;
                iVar7 = iVar57;
              }
              iVar57 = iVar7;
            } while (iVar40 <= iVar57);
          }
          pbVar34 = &DAT_7104742dbb;
        }
LAB_7101938d9c:
        if ((*pbVar34 - 0xb < 2) && (uVar22 < *(uint *)(pbVar34 + 1))) {
          FUN_710326a3e0(&local_150,lVar29,uVar22);
          pcVar5 = (char *)CONCAT44(local_148._4_4_,
                                    CONCAT22(local_148._2_2_,
                                             CONCAT11(local_148._1_1_,(byte)local_148)));
          pcVar26 = "";
          if (*pcVar5 == '\f') {
            iVar57 = *(int *)(pcVar5 + 1) + -1;
            if (0 < *(int *)(pcVar5 + 1)) {
              iVar40 = 0;
              do {
                iVar1 = iVar57 + iVar40;
                if (iVar1 < 0) {
                  iVar1 = iVar1 + 1;
                }
                iVar1 = iVar1 >> 1;
                puVar30 = (uint *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x28) +
                                   (long)*(int *)(pcVar5 + 5) + (long)iVar1 * 8);
                uVar24 = *(ulong *)(*(long *)(CONCAT44(local_150._4_4_,(uint)local_150) + 0x20) +
                                   (ulong)*puVar30 * 8);
                if (uVar24 == 0x4182694fc) {
                  uVar22 = puVar30[1];
                  if (-1 < (int)uVar22) {
                    pcVar26 = pcVar5 + (int)uVar22;
                    goto LAB_7101938e5c;
                  }
                  break;
                }
                iVar7 = iVar1 + -1;
                if (uVar24 < 0x4182694fd) {
                  iVar40 = iVar1 + 1;
                  iVar7 = iVar57;
                }
                iVar57 = iVar7;
              } while (iVar40 <= iVar57);
            }
            pcVar26 = "";
          }
LAB_7101938e5c:
          switch(*pcVar26) {
          case '\x01':
          case '\x03':
            uVar22 = (uint)(byte)pcVar26[1];
            break;
          case '\x02':
            uVar22 = (uint)pcVar26[1];
            break;
          case '\x04':
            uVar22 = (uint)*(short *)(pcVar26 + 1);
            break;
          case '\x05':
            uVar22 = (uint)*(ushort *)(pcVar26 + 1);
            break;
          case '\x06':
          case '\a':
            uVar22 = *(uint *)(pcVar26 + 1);
            break;
          default:
            goto switchD_7101938e7c_default;
          }
        }
        else {
switchD_7101938e7c_default:
          uVar22 = 0;
        }
        *(uint *)((long)pppppppppppbVar58 + 0xa4) =
             *(int *)((long)pppppppppppbVar58 + 0xa4) + uVar22;
        ppppppppppbVar50 = (byte **********)*ppppppppppbVar50;
      } while (ppppppppppbVar50 != (byte **********)0x0);
LAB_7101939154:
      *(undefined1 *)(pppppppppppbVar58 + 0x17) = 1;
      if (bVar8) {
        plVar25 = (long *)(*DAT_7105314508 + 0x5b4dd8);
        plVar52 = (long *)(*DAT_7105314508 + 0x5b4de8);
        if (*plVar52 == 0) {
          plVar14 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8);
          if (plVar14 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_180 = (byte ***********)((ulong)local_180 & 0xffffffff00000000);
              local_150._0_4_ = 0x18;
              local_150._4_4_ = 0;
              param_3 = (byte **********)&local_150;
              uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_180);
              if (((uVar24 & 1) != 0) &&
                 (plVar14 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                   param_6,param_7,param_8), plVar14 != (long *)0x0)
                 ) goto LAB_710193921c;
            }
            plVar14 = (long *)0x0;
          }
LAB_710193921c:
          *(undefined1 *)(plVar14 + 2) = 0;
          plVar14[1] = (long)plVar25;
          lVar29 = *plVar25;
          *plVar14 = lVar29;
          *(long **)(lVar29 + 8) = plVar14;
          *plVar25 = (long)plVar14;
          *plVar52 = *plVar52 + 1;
        }
        else {
          *(byte *)(*plVar25 + 0x10) = *(byte *)(*plVar25 + 0x10) & 1;
        }
        lVar29 = *(long *)(DAT_710532f7d8 + 8);
        std::mutex::lock();
        *(uint *)(lVar29 + 0xe8) = *(uint *)(lVar29 + 0xe8) | 2;
        *(undefined2 *)(lVar29 + 0xf1) = 0x101;
        *(undefined1 *)(lVar29 + 0xf5) = 0;
        *(undefined1 *)(*(long *)(*(long *)(lVar29 + 0xa0) + 0x80) + 0x1cc) =
             *(undefined1 *)(lVar29 + 0xf4);
        *(undefined4 *)(lVar29 + 0xec) = 0xffffffff;
        *(undefined8 *)(lVar29 + 0xf8) = 0x8ffff0000000000;
        *(undefined4 *)(lVar29 + 0x100) = 7;
        std::mutex::unlock();
      }
      ppppppppppbVar37 = pppppppppppbVar58[2];
      *pppppppppppbVar61 = (byte **********)0x0;
      pppppppppppbVar58[0xf] = (byte **********)0x0;
      if (ppppppppppbVar37 == (byte **********)0x0) {
        bVar53 = 0;
      }
      else {
        do {
          if (*(char *)((long)ppppppppppbVar37 + 0x14) == '\0') {
            bVar53 = *(byte *)(ppppppppppbVar37 + 2);
            goto LAB_71019392d0;
          }
          ppppppppppbVar37 = (byte **********)*ppppppppppbVar37;
        } while (ppppppppppbVar37 != (byte **********)0x0);
        bVar53 = 0;
      }
    }
LAB_71019392d0:
    local_88 = (byte ***********)0x0;
    local_80 = (char *)0x0;
    local_180 = pppppppppppbVar58;
    local_178 = pppppppppppbVar61;
    pppppppppbVar12 =
         (byte *********)
         FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (pppppppppbVar12 == (byte *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_78 = (byte ***********)((ulong)local_78 & 0xffffffff00000000);
        local_150._0_4_ = 0x28;
        local_150._4_4_ = 0;
        pppplVar18 = (long ****)&local_150;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
        if (((uVar24 & 1) != 0) &&
           (pppppppppbVar12 =
                 (byte *********)
                 FUN_710392e290(0x10,0x28,pppplVar18,param_4,param_5,param_6,param_7,param_8),
           pppppppppbVar12 != (byte *********)0x0)) goto LAB_710193932c;
      }
      pppppppppbVar12 = (byte *********)0x0;
    }
LAB_710193932c:
    *pppppppppbVar12 = (byte ********)&PTR_FUN_71050c05c8;
    pppppppppbVar12[1] = (byte ********)pppppppppppbVar58;
    pppppppppbVar12[2] = (byte ********)&local_150;
    pppppppppbVar12[3] = (byte ********)&local_88;
    pppppppppbVar12[4] = (byte ********)&local_180;
    local_130 = pppppppppbVar12;
    FUN_71024d81e0(pppppppppbVar12 + 1,bVar53);
    if ((byte *********)&local_150 == local_130) {
      pppppppbVar44 = (*local_130)[4];
LAB_7101939388:
      (*(code *)pppppppbVar44)();
    }
    else if (local_130 != (byte *********)0x0) {
      pppppppbVar44 = (*local_130)[5];
      goto LAB_7101939388;
    }
    FUN_71024d8040((long)pppppppppppbVar58,(long)pppppppppppbVar61,
                   (long ****)(pppppppppppbVar58 + 0xb),param_4,param_5,param_6,param_7,param_8);
    uVar24 = local_b0;
    plVar25 = local_a0;
  }
  while (plVar25 != (long *)0x0) {
    plVar52 = (long *)*plVar25;
    local_b0 = uVar24;
    FUN_710392eb40((ulong)plVar25);
    uVar24 = local_b0;
    plVar25 = plVar52;
  }
  local_b0 = 0;
  if (uVar24 != 0) {
    FUN_710392eb40(uVar24);
  }
  plVar25 = DAT_710532a860;
  uVar28 = 0xffff;
  if (uVar4 < 3) {
    uVar28 = *(undefined4 *)(*(long *)*puVar41 + uVar67 * 0x3d700 + 0x3cc28);
  }
  lVar29 = *DAT_710532a860;
  if (*(int *)(lVar29 + 0x7c) == 0xffff) {
    *(undefined4 *)(lVar29 + 0x7c) = uVar28;
    lVar29 = *plVar25;
  }
  *(undefined8 *)(lVar29 + 0x5f3c8) = 0;
LAB_7101939430:
  if (*(uint *)(param_1 + 0xa4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xa4) * 4 + 0x58) = 2;
    return;
  }
LAB_7101939474:
                    /* WARNING: Subroutine does not return */
  abort();
}

