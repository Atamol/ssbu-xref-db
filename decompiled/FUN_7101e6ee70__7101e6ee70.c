// addr:      7101e6ee70
// offset:    0x1e6ee70
// name:      FUN_7101e6ee70
// mangled:   
// signature: undefined __cdecl FUN_7101e6ee70(float param_1, long param_2, uint param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x007101e6f294) */

void FUN_7101e6ee70(float param_1,long param_2,uint param_3,undefined8 param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  undefined2 *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  char *pcVar8;
  long lVar9;
  byte bVar10;
  long ****pppplVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ushort *puVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  long lVar28;
  uint local_218;
  int local_214;
  undefined8 local_210;
  uint local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 local_188;
  byte local_180 [64];
  uint local_140 [2];
  byte local_138 [64];
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_b0;
  undefined4 local_ac;
  byte local_a8 [72];
  
  uVar19 = param_3 >> 8 & 0xff;
  pcVar1 = (char *)(param_2 + 0x2db);
  bVar4 = (param_3 & 0xff) == 0;
  if (*(char *)(param_2 + 0x2db) == '\0') {
    if (bVar4) {
      return;
    }
  }
  else {
    if ((!bVar4) && (*(byte *)(param_2 + 0x2dc) == uVar19)) {
      return;
    }
    FUN_7101e6fd70(param_2 + 0x208,*(byte *)(param_2 + 0x2dc),0,param_5,param_6,param_7,param_8,
                   param_9);
    if ((param_3 & 0xff) == 0) goto LAB_7101e6f38c;
  }
  lVar9 = param_2 + 0x208;
  pppplVar11 = (long ****)0x1;
  bVar10 = (byte)(param_3 >> 8);
  FUN_7101e6fd70(lVar9,bVar10,1,param_5,param_6,param_7,param_8,param_9);
  if (*(char *)(param_2 + 0x298) == '\0') {
    FUN_710377aee0(0x3f800000,param_2 + 600);
    *(undefined1 *)(param_2 + 0x298) = 1;
  }
  uVar25 = 0x2dffff0000000000;
  uVar26 = uVar25;
  if (uVar19 < 4) {
    lVar28 = *(long *)(param_2 + (ulong)uVar19 * 8 + 0x210);
    uVar26 = 0x2dffff0000000000;
    if (lVar28 == 0) goto LAB_7101e6f2ac;
    if (*(char *)(lVar28 + 0xf9) == '\0') {
      uVar16 = *(ulong *)(lVar28 + 0xf0) & 0xd200000000000000;
      uVar17 = *(ulong *)(lVar28 + 0xf0) & 0xffffffffff;
      uVar26 = uVar17 | uVar16 | 0x2dffff0000000000;
      if (((uVar16 | 0x2d00000000000000) == 0x2d00000000000000) && (uVar17 != 0)) {
        plVar27 = *(long **)(param_2 + 0x2b0);
        FUN_710327cd40((uint *)&local_f8,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318),uVar26);
        pppplVar11 = (long ****)&local_f0;
        FUN_71003a4ca0(&local_218,"cam_shop%d_dialog_%s",(ulong)*(byte *)(param_2 + 0x2a8),
                       pppplVar11,param_5,param_6,param_7,param_8,param_9);
        FUN_710377a120(*plVar27 + 0x10,(char *)&local_210,pppplVar11,param_5,param_6,param_7,param_8
                       ,param_9);
        lVar28 = *(long *)(*(long *)(*plVar27 + 0x18) + 0x10);
        iVar12 = 0;
        if (lVar28 != 0) {
          puVar18 = *(ushort **)(lVar28 + 0xd8);
          if ((puVar18 == (ushort *)0x0) || (uVar6 = *puVar18, uVar6 == 0)) {
            iVar12 = 0;
          }
          else {
            uVar19 = 0;
            iVar12 = 0;
            puVar24 = puVar18;
            do {
              if ((uVar6 | 1) == 0xf) {
                if (uVar6 == 0xe) {
                  iVar20 = 0;
                  iVar22 = (puVar24[3] >> 1) + 4;
                }
                else {
                  iVar20 = 0;
                  iVar22 = 3;
                  if (uVar6 != 0xf) {
                    iVar22 = 0;
                  }
                }
              }
              else {
                iVar20 = 1;
                iVar22 = 1;
              }
              uVar19 = iVar22 + uVar19;
              puVar24 = puVar18 + uVar19;
              iVar12 = iVar20 + iVar12;
              uVar6 = *puVar24;
            } while (uVar6 != 0);
          }
        }
        *(int *)(plVar27 + 2) = iVar12;
        FUN_7101e94ba0(*(long **)(param_2 + 0x2b0),0,pppplVar11,param_5,param_6,param_7,param_8,
                       param_9);
      }
      goto LAB_7101e6f2ac;
    }
    uVar6 = FUN_7101e70990(lVar9,bVar10);
    if (uVar6 != 0xffff) {
      if (*(char *)(lVar28 + 0xfa) == '\0') {
        lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        lVar28 = (long)((ulong)uVar6 << 0x30) >> 0x2f;
        uVar17 = (ulong)*(ushort *)(lVar13 + lVar28 + 0x60);
        local_138[0] = 0;
        local_140[0] = 0;
        local_140[1] = 0;
        uVar26 = (*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20) >> 6) * -0x3333333333333333;
        puVar2 = (undefined2 *)(*(long *)(lVar13 + 0x20) + uVar17 * 0x140);
        if (uVar26 < uVar17 || uVar26 - uVar17 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        pcVar8 = "";
        if ((ulong)(long)*(char *)(puVar2 + 0x34) < 4) {
          pcVar8 = (&PTR_s_cam_shop_d_dialog_spirits_grade__71050b1e90)[*(char *)(puVar2 + 0x34)];
        }
        FUN_71003a4ca0((uint *)&local_f8,pcVar8,(ulong)*(byte *)(param_2 + 0x2a8),pppplVar11,param_5
                       ,param_6,param_7,param_8,param_9);
        for (uVar26 = 0; *(byte *)((long)&local_f0 + uVar26) != 0; uVar26 = uVar26 + 2) {
          local_138[uVar26] = *(byte *)((long)&local_f0 + uVar26);
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          bVar10 = *(byte *)((long)&local_f0 + uVar26 + 1);
          if (bVar10 == 0) {
            uVar26 = uVar26 + 1;
            break;
          }
          local_138[uVar26 + 1] = bVar10;
        }
        local_138[uVar26 & 0xffffffff] = 0;
        bVar10 = local_138[0];
        uVar19 = 0x811c9dc5;
        local_140[1] = (int)uVar26;
        uVar23 = (uint)local_138[0];
        local_140[0] = uVar19;
        if (uVar23 != 0) {
          pbVar14 = local_138;
          do {
            pbVar14 = pbVar14 + 1;
            local_140[0] = local_140[0] * 0x89 ^ uVar23;
            uVar23 = (uint)*pbVar14;
          } while (uVar23 != 0);
        }
        local_180[0] = 0;
        local_188 = 0;
        lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar7 = *(ushort *)(lVar13 + lVar28 + 0x60);
        uVar23 = uVar19;
        if (((uint)uVar7 <
             (uint)((int)((ulong)(*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20)) >> 6) *
                   -0x33333333)) &&
           (*(char *)(*(long *)(lVar13 + 0x20) + (ulong)uVar7 * 0x140 + 0x5e) == '\0')) {
          FUN_71003a4ca0((uint *)&local_f8,"cam_shop%d_dialog_spirits_att",
                         (ulong)*(byte *)(param_2 + 0x2a8),pppplVar11,param_5,param_6,param_7,
                         param_8,param_9);
          uVar26 = 0;
          while( true ) {
            if (*(byte *)((long)&local_f0 + uVar26) == 0) break;
            local_180[uVar26] = *(byte *)((long)&local_f0 + uVar26);
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            bVar3 = *(byte *)((long)&local_f0 + uVar26 + 1);
            if (bVar3 == 0) {
              uVar26 = uVar26 + 1;
              break;
            }
            local_180[uVar26 + 1] = bVar3;
            uVar26 = uVar26 + 2;
          }
          local_180[uVar26 & 0xffffffff] = 0;
          local_188._4_4_ = (int)uVar26;
          uVar23 = 0x811c9dc5;
          uVar21 = (uint)local_180[0];
          if (uVar21 != 0) {
            pbVar14 = local_180;
            uVar23 = uVar19;
            do {
              pbVar14 = pbVar14 + 1;
              uVar23 = uVar23 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar14;
            } while (uVar21 != 0);
          }
        }
        else {
          uVar26 = FUN_71032a1630(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar2[0x35]);
          uVar17 = uVar26 & 0xffffffffff;
          if (uVar17 < 0x149f929ac1) {
            if (uVar17 == 0x13c26d485c) {
              pcVar8 = "cam_shop%d_dialog_spirits_skill_etc";
            }
            else if (uVar17 == 0x1429a1c171) {
              pcVar8 = "cam_shop%d_dialog_spirits_skill_heal";
            }
            else {
              if (uVar17 != 0x146fb788a7) goto LAB_7101e6f5c8;
              pcVar8 = "cam_shop%d_dialog_spirits_skill_mov";
            }
          }
          else if (uVar17 < 0x166cbc8009) {
            if (uVar17 == 0x149f929ac1) {
              pcVar8 = "cam_shop%d_dialog_spirits_skill_item";
            }
            else if (uVar17 == 0x161abeda7f) {
              pcVar8 = "cam_shop%d_dialog_spirits_skill_atk";
            }
            else {
LAB_7101e6f5c8:
              bVar4 = (uVar26 & 0xffffffffff) == 0;
              bVar5 = (uVar26 & 0xff00000000000000) != 0x7100000000000000;
              if ((bVar5) || ((uVar26 & 0xffffffffff) == 0)) {
                if (!bVar5 && !bVar4) {
                  uVar26 = uVar26 & 0xffffffffff;
                  if (uVar26 < 0x1713945e8e) {
                    if (uVar26 < 0x14a182eb21) {
                      if (uVar26 == 0x132797909b) goto LAB_7101e6fd58;
                      if (uVar26 == 0x136e70f986) goto LAB_7101e6f824;
                    }
                    else {
                      if (uVar26 == 0x14a182eb21) goto LAB_7101e6fd28;
                      if (uVar26 == 0x164cb6a328) goto LAB_7101e6fd34;
                      if (uVar26 == 0x16a40aee0d) goto LAB_7101e6f714;
                    }
                  }
                  else if (uVar26 < 0x1872c0169a) {
                    if (uVar26 == 0x1713945e8e) goto LAB_7101e6fd64;
                    if (uVar26 == 0x172bf1ded9) goto LAB_7101e6f88c;
                  }
                  else {
                    if (uVar26 == 0x1872c0169a) goto LAB_7101e6fd40;
                    if (uVar26 == 0x1d7837f9cd) goto LAB_7101e6fd4c;
                    if (uVar26 == 0x1ef8a9e952) goto LAB_7101e6f7c4;
                  }
                }
                puVar15 = &UNK_7104545be0;
              }
              else if (bVar4) {
LAB_7101e6f858:
                puVar15 = &DAT_7104545be8;
              }
              else {
                uVar26 = uVar26 & 0xffffffffff;
                if (uVar26 < 0x1713945e8e) {
                  if (uVar26 < 0x14a182eb21) {
                    if (uVar26 == 0x132797909b) {
LAB_7101e6fd58:
                      puVar15 = &UNK_7104545ba8;
                    }
                    else {
                      if (uVar26 != 0x136e70f986) goto LAB_7101e6f858;
LAB_7101e6f824:
                      puVar15 = &UNK_7104545bc0;
                    }
                  }
                  else if (uVar26 == 0x14a182eb21) {
LAB_7101e6fd28:
                    puVar15 = &UNK_7104545bb8;
                  }
                  else if (uVar26 == 0x164cb6a328) {
LAB_7101e6fd34:
                    puVar15 = &UNK_7104545b98;
                  }
                  else {
                    if (uVar26 != 0x16a40aee0d) goto LAB_7101e6f858;
LAB_7101e6f714:
                    puVar15 = &UNK_7104545b90;
                  }
                }
                else if (uVar26 < 0x1872c0169a) {
                  if (uVar26 == 0x1713945e8e) {
LAB_7101e6fd64:
                    puVar15 = &UNK_7104545ba0;
                  }
                  else {
                    if (uVar26 != 0x172bf1ded9) goto LAB_7101e6f858;
LAB_7101e6f88c:
                    puVar15 = &UNK_7104545bd8;
                  }
                }
                else if (uVar26 == 0x1872c0169a) {
LAB_7101e6fd40:
                  puVar15 = &UNK_7104545bb0;
                }
                else if (uVar26 == 0x1d7837f9cd) {
LAB_7101e6fd4c:
                  puVar15 = &UNK_7104545bd0;
                }
                else {
                  if (uVar26 != 0x1ef8a9e952) goto LAB_7101e6f858;
LAB_7101e6f7c4:
                  puVar15 = &UNK_7104545bc8;
                }
              }
              pcVar8 = "";
              if (puVar15 != &DAT_7104545be8) {
                pcVar8 = "cam_shop%d_dialog_spirits_skill_stg";
              }
            }
          }
          else if (uVar17 == 0x166cbc8009) {
            pcVar8 = "cam_shop%d_dialog_spirits_skill_stat";
          }
          else {
            if (uVar17 != 0x17aa490e0b) goto LAB_7101e6f5c8;
            pcVar8 = "cam_shop%d_dialog_spirits_skill_def";
          }
          FUN_71003a4ca0((uint *)&local_f8,pcVar8,(ulong)*(byte *)(param_2 + 0x2a8),pppplVar11,
                         param_5,param_6,param_7,param_8,param_9);
          uVar26 = 0;
          while( true ) {
            if (*(byte *)((long)&local_f0 + uVar26) == 0) break;
            local_180[uVar26] = *(byte *)((long)&local_f0 + uVar26);
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            bVar3 = *(byte *)((long)&local_f0 + uVar26 + 1);
            if (bVar3 == 0) {
              uVar26 = uVar26 + 1;
              break;
            }
            local_180[uVar26 + 1] = bVar3;
            uVar26 = uVar26 + 2;
          }
          local_180[uVar26 & 0xffffffff] = 0;
          local_188._4_4_ = (int)uVar26;
          uVar21 = (uint)local_180[0];
          if (uVar21 != 0) {
            pbVar14 = local_180;
            do {
              pbVar14 = pbVar14 + 1;
              uVar23 = uVar23 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar14;
            } while (uVar21 != 0);
          }
        }
        local_188 = CONCAT44(local_188._4_4_,uVar23);
        local_f8 = (ulong)local_f8._4_4_ << 0x20;
        if (bVar10 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          do {
            *(byte *)((long)&local_f0 + uVar26) = bVar10;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = 0x3f;
              break;
            }
            bVar10 = local_138[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (bVar10 != 0);
        }
        *(undefined1 *)((long)&local_f0 + (uVar26 & 0xffffffff)) = 0;
        local_f8 = uVar26 << 0x20;
        uVar21 = (uint)(byte)local_f0;
        uVar23 = uVar19;
        if (uVar21 != 0) {
          pbVar14 = (byte *)((long)&local_f0 + 1);
          do {
            uVar23 = uVar23 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar21 != 0);
        }
        local_f8 = CONCAT44((int)uVar26,uVar23);
        local_b0 = 0;
        if (local_180[0] == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          bVar10 = local_180[0];
          do {
            local_a8[uVar26] = bVar10;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = 0x3f;
              break;
            }
            bVar10 = local_180[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (bVar10 != 0);
        }
        local_a8[uVar26 & 0xffffffff] = 0;
        bVar10 = local_a8[0];
        local_ac = (int)uVar26;
        uVar23 = (uint)local_a8[0];
        local_b0 = uVar19;
        if (uVar23 != 0) {
          pbVar14 = local_a8;
          do {
            pbVar14 = pbVar14 + 1;
            local_b0 = local_b0 * 0x89 ^ uVar23;
            uVar23 = (uint)*pbVar14;
          } while (uVar23 != 0);
        }
        if ((byte)local_f0 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          do {
            *(byte *)((long)&local_210 + uVar26) = (byte)local_f0;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = 0x3f;
              break;
            }
            local_f0._0_1_ = *(byte *)((long)&local_f0 + uVar26 + 1);
            uVar26 = uVar26 + 1;
          } while ((byte)local_f0 != 0);
        }
        *(undefined1 *)((long)&local_210 + (uVar26 & 0xffffffff)) = 0;
        uVar23 = (uint)(byte)local_210;
        local_214 = (int)uVar26;
        local_218 = uVar19;
        if ((byte)local_210 != 0) {
          pbVar14 = (byte *)((long)&local_210 + 1);
          do {
            local_218 = local_218 * 0x89 ^ uVar23;
            uVar23 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar23 != 0);
        }
        local_1d0 = 0;
        if (bVar10 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          do {
            *(byte *)((long)&local_1c8 + uVar26) = bVar10;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = 0x3f;
              break;
            }
            bVar10 = local_a8[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (bVar10 != 0);
        }
        *(undefined1 *)((long)&local_1c8 + (uVar26 & 0xffffffff)) = 0;
        uVar23 = (uint)(byte)local_1c8;
        local_1cc = (int)uVar26;
        if ((byte)local_1c8 != 0) {
          pbVar14 = (byte *)((long)&local_1c8 + 1);
          do {
            uVar19 = uVar19 * 0x89 ^ uVar23;
            uVar23 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar23 != 0);
        }
        plVar27 = *(long **)(param_2 + 0x2b0);
        local_1d0 = uVar19;
        if ((int)uVar26 == 0) goto LAB_7101e6fb98;
LAB_7101e6fc40:
        param_5 = (byte ****)&local_210;
        param_6 = (long ****)&local_1c8;
        pppplVar11 = (long ****)0x2;
        FUN_7101e94890(plVar27,(byte *)"cam_shop_dialog_2line",2,param_5,param_6,param_7,param_8,
                       param_9);
      }
      else {
        FUN_71003a4ca0(local_140,"cam_shop%d_dialog_spirits_sp",(ulong)*(byte *)(param_2 + 0x2a8),
                       pppplVar11,param_5,param_6,param_7,param_8,param_9);
        local_f8 = local_f8 & 0xffffffff00000000;
        for (uVar26 = 0; local_138[uVar26] != 0; uVar26 = uVar26 + 2) {
          *(byte *)((long)&local_f0 + uVar26) = local_138[uVar26];
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          if (local_138[uVar26 + 1] == 0) {
            uVar26 = uVar26 + 1;
            break;
          }
          *(byte *)((long)&local_f0 + uVar26 + 1) = local_138[uVar26 + 1];
        }
        local_218 = 0x811c9dc5;
        *(undefined1 *)((long)&local_f0 + (uVar26 & 0xffffffff)) = 0;
        local_f8 = uVar26 << 0x20;
        uVar23 = (uint)(byte)local_f0;
        uVar19 = local_218;
        if (uVar23 != 0) {
          pbVar14 = (byte *)((long)&local_f0 + 1);
          do {
            uVar19 = uVar19 * 0x89 ^ uVar23;
            uVar23 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar23 != 0);
        }
        local_f8 = CONCAT44((int)uVar26,uVar19);
        local_a8[0] = 0;
        local_b0 = 0x811c9dc5;
        local_ac = 0;
        if ((byte)local_f0 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          do {
            *(byte *)((long)&local_210 + uVar26) = (byte)local_f0;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = 0x3f;
              break;
            }
            local_f0._0_1_ = *(byte *)((long)&local_f0 + uVar26 + 1);
            uVar26 = uVar26 + 1;
          } while ((byte)local_f0 != 0);
        }
        *(undefined1 *)((long)&local_210 + (uVar26 & 0xffffffff)) = 0;
        uVar19 = (uint)(byte)local_210;
        local_214 = (int)uVar26;
        if ((byte)local_210 != 0) {
          pbVar14 = (byte *)((long)&local_210 + 1);
          do {
            local_218 = local_218 * 0x89 ^ uVar19;
            uVar19 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar19 != 0);
        }
        local_1c8._0_1_ = 0;
        local_1d0 = 0x811c9dc5;
        local_1cc = 0;
        plVar27 = *(long **)(param_2 + 0x2b0);
LAB_7101e6fb98:
        param_5 = (byte ****)&local_210;
        if (local_214 == 0) goto LAB_7101e6fc40;
        FUN_710377a120(*plVar27 + 0x10,(char *)param_5,pppplVar11,param_5,param_6,param_7,param_8,
                       param_9);
        lVar28 = *(long *)(*(long *)(*plVar27 + 0x18) + 0x10);
        iVar12 = 0;
        if (lVar28 == 0) {
LAB_7101e6fc38:
          *(int *)(plVar27 + 2) = iVar12;
        }
        else {
          puVar18 = *(ushort **)(lVar28 + 0xd8);
          if ((puVar18 != (ushort *)0x0) && (uVar7 = *puVar18, uVar7 != 0)) {
            uVar19 = 0;
            iVar12 = 0;
            puVar24 = puVar18;
            do {
              if ((uVar7 | 1) == 0xf) {
                if (uVar7 == 0xe) {
                  iVar20 = 0;
                  iVar22 = (puVar24[3] >> 1) + 4;
                }
                else {
                  iVar20 = 0;
                  iVar22 = 3;
                  if (uVar7 != 0xf) {
                    iVar22 = 0;
                  }
                }
              }
              else {
                iVar20 = 1;
                iVar22 = 1;
              }
              uVar19 = iVar22 + uVar19;
              puVar24 = puVar18 + uVar19;
              iVar12 = iVar20 + iVar12;
              uVar7 = *puVar24;
            } while (uVar7 != 0);
            goto LAB_7101e6fc38;
          }
          *(undefined4 *)(plVar27 + 2) = 0;
        }
      }
      FUN_7101e94ba0(*(long **)(param_2 + 0x2b0),0,pppplVar11,param_5,param_6,param_7,param_8,
                     param_9);
    }
    if (*pcVar1 == '\0') {
      FUN_7101e70a60(param_2 + 0x238,uVar6,*(long **)(param_2 + 0x230),param_5,param_6,param_7,
                     param_8,param_9);
      FUN_7101e70a60(param_2 + 0x248,uVar6,*(long **)(param_2 + 0x230),param_5,param_6,param_7,
                     param_8,param_9);
      goto LAB_7101e6f38c;
    }
    bVar10 = *(byte *)(param_2 + 0x2dc);
    if (((ulong)bVar10 < 4) &&
       (lVar28 = *(long *)(param_2 + (ulong)bVar10 * 8 + 0x210), lVar28 != 0)) {
      if (*(char *)(lVar28 + 0xf9) == '\0') {
        uVar25 = *(ulong *)(lVar28 + 0xf0) & 0xffffffffff |
                 *(ulong *)(lVar28 + 0xf0) & 0xd200000000000000 | 0x2dffff0000000000;
        goto LAB_7101e6fcfc;
      }
      uVar7 = FUN_7101e70990(lVar9,bVar10);
      FUN_7101e70a60(param_2 + 0x248,uVar7,*(long **)(param_2 + 0x230),param_5,param_6,param_7,
                     param_8,param_9);
    }
    else {
LAB_7101e6fcfc:
      local_f8 = *(ulong *)(param_2 + 0x2a0);
      FUN_7101e70e20(param_2 + 0x248,uVar25,&local_f8,param_5,param_6,param_7,param_8,param_9);
    }
    FUN_7101e70a60(param_2 + 0x238,uVar6,*(long **)(param_2 + 0x230),param_5,param_6,param_7,param_8
                   ,param_9);
  }
  else {
LAB_7101e6f2ac:
    if (*pcVar1 == '\0') {
      local_f8 = *(long *)(param_2 + 0x2a0);
      FUN_7101e70e20(param_2 + 0x238,uVar26,&local_f8,param_5,param_6,param_7,param_8,param_9);
      local_f8 = *(long *)(param_2 + 0x2a0);
      FUN_7101e70e20(param_2 + 0x248,uVar26,&local_f8,param_5,param_6,param_7,param_8,param_9);
      goto LAB_7101e6f38c;
    }
    bVar10 = *(byte *)(param_2 + 0x2dc);
    if (((ulong)bVar10 < 4) &&
       (lVar28 = *(long *)(param_2 + (ulong)bVar10 * 8 + 0x210), lVar28 != 0)) {
      if (*(char *)(lVar28 + 0xf9) == '\0') {
        uVar25 = *(ulong *)(lVar28 + 0xf0) & 0xffffffffff |
                 *(ulong *)(lVar28 + 0xf0) & 0xd200000000000000 | 0x2dffff0000000000;
        goto LAB_7101e6f33c;
      }
      uVar6 = FUN_7101e70990(lVar9,bVar10);
      FUN_7101e70a60(param_2 + 0x248,uVar6,*(long **)(param_2 + 0x230),param_5,param_6,param_7,
                     param_8,param_9);
    }
    else {
LAB_7101e6f33c:
      local_f8 = *(long *)(param_2 + 0x2a0);
      FUN_7101e70e20(param_2 + 0x248,uVar25,&local_f8,param_5,param_6,param_7,param_8,param_9);
    }
    local_f8 = *(ulong *)(param_2 + 0x2a0);
    FUN_7101e70e20(param_2 + 0x238,uVar26,&local_f8,param_5,param_6,param_7,param_8,param_9);
  }
  if (param_1 <= 0.0) {
    lVar9 = param_2 + 0x288;
  }
  else {
    lVar9 = param_2 + 0x278;
  }
  FUN_710377aee0(0x3f800000,lVar9);
LAB_7101e6f38c:
  *(short *)pcVar1 = (short)param_3;
  return;
}

