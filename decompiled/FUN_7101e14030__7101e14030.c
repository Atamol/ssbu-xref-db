// addr:      7101e14030
// offset:    0x1e14030
// name:      FUN_7101e14030
// mangled:   
// signature: undefined __cdecl FUN_7101e14030(long param_1)


void FUN_7101e14030(long param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  char *pcVar11;
  long *********ppppppppplVar12;
  undefined8 uVar13;
  byte ****ppppbVar14;
  long ****in_x4;
  long ****pppplVar15;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  code *pcVar19;
  undefined2 *puVar20;
  byte bVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  byte ****ppppbVar32;
  long lVar33;
  float fVar34;
  undefined **local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  ulong local_1c0 [8];
  undefined **local_180;
  ulong local_178;
  undefined **local_170;
  ulong local_168 [8];
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  byte ***local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined2 uStack_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  ushort local_d4;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  ushort local_90 [2];
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  ushort local_7c;
  
  local_90[0] = 0xffff;
  local_88 = 0x52ffff0000000000;
  local_7c = 0xffff;
  local_8c = 0;
  local_80 = 0xffffffff;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d6 = 0;
  uStack_d5 = 0;
  local_d4 = 0;
  local_a4 = 0xffffffff;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_e8 = (undefined **)
             CONCAT26(*(undefined2 *)(param_1 + 0x1ac),
                      CONCAT24(*(undefined2 *)(param_1 + 0x1aa),
                               CONCAT22(*(undefined2 *)(param_1 + 0x1a8),0xffff)));
  local_e0 = *(undefined2 *)(param_1 + 0x1ae);
  FUN_71025cae70(local_90,(long)&local_e8);
  uVar4 = local_90[0];
  lVar31 = (long)(short)local_90[0];
  FUN_71025caab0(param_1 + 0x1c0,local_90[0],local_8c);
  if (lVar31 != -1 && 1999 >= lVar31) {
    lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar2 = *(ushort *)(lVar25 + lVar31 * 2 + 0x60);
    uVar17 = (ulong)uVar2;
    uVar26 = (*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar2 < (uint)uVar26) {
      puVar1 = (undefined2 *)(*(long *)(lVar25 + 0x20) + uVar17 * 0x140);
      if (uVar26 < uVar17 || uVar26 - uVar17 == 0) {
        puVar1 = &DAT_7105182b08;
      }
      *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(puVar1 + 0x36);
      *(undefined2 *)(param_1 + 0x1da) = puVar1[0x48];
      *(undefined2 *)(param_1 + 0x1d8) = puVar1[0x35];
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = local_88;
  uVar17 = (ulong)local_80._2_2_;
  uVar26 = (ulong)local_7c;
  FUN_71025cad00(param_1 + 0x1c0,(ushort)local_80,local_80._2_2_,local_7c);
  lVar33 = *(long *)(DAT_710532f730 + 8);
  lVar25 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
  pcVar11 = (char *)(lVar25 + 0x11ac);
  if (*(short *)(param_1 + 0x1a8) == -1) {
    if (*pcVar11 != '\0') {
      *pcVar11 = '\0';
      if (*(int *)(lVar25 + 0x11b0) < 6) {
        if (*(int *)(lVar25 + 0x11b0) - 1U < 5) {
          lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
          if (lVar18 != 0) {
            lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
            lVar27 = lVar22;
            lVar29 = lVar18;
            do {
              if (0 < *(int *)(lVar29 + 0x20)) {
                lVar27 = lVar29;
              }
              lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 1) * 8);
            } while (lVar29 != 0);
            if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 2)) &&
               (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
              (**(code **)(*plVar30 + 0x1f8))(plVar30,0);
              uVar17 = 0;
              (**(code **)(*plVar30 + 0x388))(plVar30,1);
              lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
              lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
            }
            lVar25 = lVar22;
            if (lVar18 != 0) {
              do {
                if (0 < *(int *)(lVar18 + 0x20)) {
                  lVar25 = lVar18;
                }
                lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 1) * 8);
              } while (lVar18 != 0);
              if ((lVar25 != lVar22) && (*(int *)(lVar25 + 0x20) < 2)) goto LAB_7101e14518;
            }
          }
        }
      }
      else {
        lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
        if (lVar18 != 0) {
          lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
          lVar27 = lVar22;
          lVar29 = lVar18;
          do {
            if (1 < *(int *)(lVar29 + 0x20)) {
              lVar27 = lVar29;
            }
            lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 2) * 8);
          } while (lVar29 != 0);
          if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 3)) &&
             (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
            (**(code **)(*plVar30 + 0x1f8))(plVar30,0);
            uVar17 = 0;
            (**(code **)(*plVar30 + 0x388))(plVar30,1);
            lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
            lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
          }
          lVar25 = lVar22;
          if (lVar18 != 0) {
            do {
              if (1 < *(int *)(lVar18 + 0x20)) {
                lVar25 = lVar18;
              }
              lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 2) * 8);
            } while (lVar18 != 0);
            if ((lVar25 != lVar22) && (*(int *)(lVar25 + 0x20) < 3)) {
LAB_7101e14518:
              plVar30 = *(long **)(lVar25 + 0x28);
              if (plVar30 != (long *)0x0) {
                (**(code **)(*plVar30 + 0x208))(plVar30,0);
                pcVar19 = *(code **)(*plVar30 + 0x388);
                uVar13 = 1;
                goto LAB_7101e14544;
              }
            }
          }
        }
      }
    }
  }
  else if (*pcVar11 == '\0') {
    *pcVar11 = '\x01';
    if (*(int *)(lVar25 + 0x11b0) < 6) {
      if (*(int *)(lVar25 + 0x11b0) - 1U < 5) {
        lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
        if (lVar18 != 0) {
          lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
          lVar27 = lVar22;
          lVar29 = lVar18;
          do {
            if (0 < *(int *)(lVar29 + 0x20)) {
              lVar27 = lVar29;
            }
            lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 1) * 8);
          } while (lVar29 != 0);
          if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 2)) &&
             (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
            (**(code **)(*plVar30 + 0x1f8))(plVar30,1);
            uVar17 = 0;
            (**(code **)(*plVar30 + 0x388))(plVar30,0);
            lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
            lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
          }
          lVar25 = lVar22;
          if (lVar18 != 0) {
            do {
              if (0 < *(int *)(lVar18 + 0x20)) {
                lVar25 = lVar18;
              }
              lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 1) * 8);
            } while (lVar18 != 0);
            if ((lVar25 != lVar22) && (*(int *)(lVar25 + 0x20) < 2)) goto LAB_7101e14424;
          }
        }
      }
    }
    else {
      lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
      if (lVar18 != 0) {
        lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
        lVar27 = lVar22;
        lVar29 = lVar18;
        do {
          if (1 < *(int *)(lVar29 + 0x20)) {
            lVar27 = lVar29;
          }
          lVar29 = *(long *)(lVar29 + (ulong)(*(int *)(lVar29 + 0x20) < 2) * 8);
        } while (lVar29 != 0);
        if (((lVar27 != lVar22) && (*(int *)(lVar27 + 0x20) < 3)) &&
           (plVar30 = *(long **)(lVar27 + 0x28), plVar30 != (long *)0x0)) {
          (**(code **)(*plVar30 + 0x1f8))(plVar30,1);
          uVar17 = 0;
          (**(code **)(*plVar30 + 0x388))(plVar30,0);
          lVar22 = *(long *)(lVar25 + 0x2268) + 0x1b8;
          lVar18 = *(long *)(*(long *)(lVar25 + 0x2268) + 0x1b8);
        }
        lVar25 = lVar22;
        if (lVar18 != 0) {
          do {
            if (1 < *(int *)(lVar18 + 0x20)) {
              lVar25 = lVar18;
            }
            lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 2) * 8);
          } while (lVar18 != 0);
          if ((lVar25 != lVar22) && (*(int *)(lVar25 + 0x20) < 3)) {
LAB_7101e14424:
            plVar30 = *(long **)(lVar25 + 0x28);
            if (plVar30 != (long *)0x0) {
              (**(code **)(*plVar30 + 0x208))(plVar30,1);
              pcVar19 = *(code **)(*plVar30 + 0x388);
              uVar13 = 0;
LAB_7101e14544:
              uVar17 = 0;
              (*pcVar19)(plVar30,uVar13);
            }
          }
        }
      }
    }
  }
  FUN_7103776640(&local_f8,param_1 + 0x160,(byte ****)"set_parts_btn_attacker",uVar17,uVar26,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103776640(&local_108,(long)&local_f8,(byte ****)"set_parts_aw",uVar17,uVar26,in_x4,in_x5,
                 in_x6,in_x7);
  uVar17 = local_f0;
  if ((lVar31 == -1 || 1999 < lVar31) ||
     (lVar31 = *(long *)(lVar33 + 0x1d8),
     (uint)((int)((ulong)(*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20)) >> 6) * -0x33333333)
     <= (uint)*(ushort *)(lVar31 + (long)(short)uVar4 * 2 + 0x60))) {
    FUN_7103778300(0x3f800000,local_f0,0x71042c5345);
    if ((*(long *)(local_100 + 8) != 0) &&
       (lVar31 = *(long *)(*(long *)(local_100 + 8) + 0x18), lVar31 != 0)) {
      *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) & 0xfe;
    }
    FUN_7103778300(0x3f800000,local_f0,0x7104433612);
    goto LAB_7101e14818;
  }
  if ((*(long *)(local_100 + 8) != 0) &&
     (lVar31 = *(long *)(*(long *)(local_100 + 8) + 0x18), lVar31 != 0)) {
    *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) | 1;
  }
  FUN_7103778300(0x3f800000,local_f0,0x71042f882f);
  FUN_7103778300(0x3f800000,local_f0,0x71043cf964);
  ppppbVar14 = &local_108;
  pppplVar15 = (long ****)0x2;
  ppppppppplVar12 = (long *********)0x0;
  FUN_7101e16fa0(param_1,uVar4,0,(undefined ***)ppppbVar14,(long ****)0x2,in_x5,in_x6,in_x7);
  lVar31 = *(long *)(lVar33 + 0x1d8);
  lVar25 = (long)(short)uVar4 * 2;
  uVar23 = (ulong)*(ushort *)(lVar31 + lVar25 + 0x60);
  uVar26 = (*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20) >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(*(long *)(lVar31 + 0x20) + uVar23 * 0x140);
  if (uVar26 < uVar23 || uVar26 - uVar23 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  FUN_7103776640(&local_118,(long)&local_f8,(byte ****)"set_parts_super",ppppppppplVar12,ppppbVar14,
                 pppplVar15,in_x5,in_x6,in_x7);
  uVar26 = local_110;
  lVar31 = *(long *)(lVar33 + 0x1d8);
  uVar2 = *(ushort *)(lVar31 + lVar25 + 0x60);
  uVar16 = (int)((ulong)(*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20)) >> 6) * -0x33333333;
  if (((uVar2 < uVar16) && (uVar2 = *(ushort *)(lVar31 + (ulong)uVar2 * 2 + 0x1000), uVar2 < uVar16)
      ) && (*(short *)(*(long *)(lVar31 + 0x20) + (ulong)uVar2 * 0x140) != -1)) {
    FUN_7103778300(0x3f800000,local_110,0x710438b28f);
    FUN_7103778300(0x3f800000,local_110,0x710437a53a);
    plVar30 = *(long **)(param_1 + 8);
    local_e8 = (undefined **)FUN_7103238e70(0x71ffff14e11d26c7,0x13);
    if (((ulong)local_e8 & 0xffffffffff) != 0) {
      lVar31 = *plVar30;
      ppppppppplVar12 = (long *********)(long)*(int *)(lVar31 + 0x70);
      ppppbVar14 = (byte ****)(ulong)*(uint *)(lVar31 + 0x68);
      FUN_710323c4e0(lVar31,&local_e8,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
    }
    plVar30 = FUN_710323f760(*(long **)(param_1 + 8),0x71ffff14e11d26c7,(long ****)ppppppppplVar12,
                             ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
    FUN_7103776640(&local_e8,(long)&local_118,(byte ****)"set_parts_it_skill",ppppppppplVar12,
                   ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_170,(long)&local_e8,(long ****)"set_pic_icon",ppppppppplVar12,ppppbVar14,
                   pppplVar15,in_x5,in_x6,in_x7);
    uVar23 = local_168[0];
    FUN_7103778b80(local_168[0],(long)plVar30,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,in_x6,
                   in_x7);
    local_170 = &PTR_FUN_710523d9a8;
    local_168[0] = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_7103776910(&local_170,(long)&local_e8,(long ****)"set_txt_help",ppppppppplVar12,ppppbVar14,
                   pppplVar15,in_x5,in_x6,in_x7);
    FUN_710377a120((long)&local_170,"mnu_spirits_select_grade_up_99",ppppppppplVar12,ppppbVar14,
                   pppplVar15,in_x5,in_x6,in_x7);
    uVar23 = local_168[0];
    local_170 = &PTR_FUN_710523d9a8;
    local_168[0] = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    uVar23 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
    local_e8 = &PTR_FUN_710523d988;
    local_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
joined_r0x007101e149cc:
    if (uVar23 != 0) {
      uVar8 = *(ulong *)(uVar23 + 0x18);
      *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar23 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar23);
    }
  }
  else {
    if (puVar1[0x48] != 0) {
      FUN_7103778300(0x3f800000,local_110,0x710438b28f);
      FUN_7103778300(0x3f800000,local_110,0x710446392a);
      lVar31 = *(long *)(DAT_710532f730 + 8);
      ppppppppplVar12 = (long *********)(ulong)(ushort)puVar1[0x48];
      FUN_71032a0c90((uint *)&local_e8,lVar31 + 0x210,puVar1[0x48],ppppbVar14,pppplVar15,in_x5,in_x6
                     ,in_x7);
      uVar23 = FUN_71032a1630(*(long *)(lVar31 + 0x218),puVar1[0x48]);
      plVar30 = *(long **)(param_1 + 8);
      local_170 = (undefined **)FUN_7103238e70(uVar23,0x13);
      if (((ulong)local_170 & 0xffffffffff) != 0) {
        lVar31 = *plVar30;
        ppppppppplVar12 = (long *********)(long)*(int *)(lVar31 + 0x70);
        ppppbVar14 = (byte ****)(ulong)*(uint *)(lVar31 + 0x68);
        FUN_710323c4e0(lVar31,(ulong *)&local_170,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,in_x6,
                       in_x7);
      }
      plVar30 = FUN_710323f760(*(long **)(param_1 + 8),uVar23,(long ****)ppppppppplVar12,ppppbVar14,
                               pppplVar15,in_x5,in_x6,in_x7);
      FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_it_skill",ppppppppplVar12,
                     ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
      FUN_7103776910(&local_1c8,(long)&local_170,(long ****)"set_pic_icon",ppppppppplVar12,
                     ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
      uVar23 = local_1c0[0];
      FUN_7103778b80(local_1c0[0],(long)plVar30,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,in_x6,
                     in_x7);
      local_1c8 = &PTR_FUN_710523d9a8;
      local_1c0[0] = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_1c8,(long)&local_170,(long ****)"set_txt_help",ppppppppplVar12,
                     ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
      FUN_710377a120((long)&local_1c8,(char *)&local_e0,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,
                     in_x6,in_x7);
      uVar23 = local_1c0[0];
      local_1c8 = &PTR_FUN_710523d9a8;
      local_1c0[0] = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_168[0];
      local_170 = &PTR_FUN_710523d988;
      local_168[0] = 0;
      goto joined_r0x007101e149cc;
    }
    FUN_7103778300(0x3f800000,local_110,0x7104348100);
  }
  FUN_7103776640(&local_128,(long)&local_f8,(byte ****)"set_parts_lv_individual",ppppppppplVar12,
                 ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
  uVar3 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3));
  if (2 < *(byte *)(puVar1 + 0x36) - 1) {
    uVar3 = 0;
  }
  ppppppppplVar12 = (long *********)0x0;
  FUN_710339dde0((uint *)&local_170,uVar3,'\0');
  uVar23 = local_120;
  fVar34 = 1.0;
  FUN_7103778300(0x3f800000,local_120,(long)local_168);
  if (puVar1[0x35] == 0) {
    FUN_7103778300(0x3f800000,local_120,0x7104443cf1);
  }
  else {
    FUN_7103778300(0x3f800000,local_120,0x71043089e5);
    lVar31 = *(long *)(DAT_710532f730 + 8);
    ppppppppplVar12 = (long *********)(ulong)(ushort)puVar1[0x35];
    FUN_71032a0c90((uint *)&local_e8,lVar31 + 0x210,puVar1[0x35],ppppbVar14,pppplVar15,in_x5,in_x6,
                   in_x7);
    uVar8 = FUN_71032a1630(*(long *)(lVar31 + 0x218),puVar1[0x35]);
    FUN_7103776290(&local_1c8,extraout_x1,(long ****)ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,
                   in_x6,in_x7);
    switch(*(undefined1 *)(puVar1 + 0x36)) {
    case 0:
      pcVar11 = "set_parts_it_non";
      break;
    default:
      pcVar11 = "set_parts_it_offense";
      break;
    case 2:
      pcVar11 = "set_parts_it_throw";
      break;
    case 3:
      pcVar11 = "set_parts_it_defense";
    }
    FUN_7103776640(&local_180,(long)&local_128,(byte ****)pcVar11,ppppppppplVar12,ppppbVar14,
                   pppplVar15,in_x5,in_x6,in_x7);
    uVar10 = local_178;
    uVar28 = local_1c0[0];
    local_178 = 0;
    local_1c0[0] = uVar10;
    if (uVar28 != 0) {
      uVar9 = *(ulong *)(uVar28 + 0x18);
      *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar28 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar28);
    }
    local_180 = &PTR_FUN_710523d988;
    local_178 = 0;
    plVar30 = *(long **)(param_1 + 8);
    local_180 = (undefined **)FUN_7103238e70(uVar8,0x13);
    if (((ulong)local_180 & 0xffffffffff) != 0) {
      lVar31 = *plVar30;
      ppppppppplVar12 = (long *********)(long)*(int *)(lVar31 + 0x70);
      ppppbVar14 = (byte ****)(ulong)*(uint *)(lVar31 + 0x68);
      FUN_710323c4e0(lVar31,(ulong *)&local_180,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,in_x6,
                     in_x7);
    }
    plVar30 = FUN_710323f760(*(long **)(param_1 + 8),uVar8,(long ****)ppppppppplVar12,ppppbVar14,
                             pppplVar15,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_180,(long)&local_1c8,(long ****)"set_pic_icon",ppppppppplVar12,ppppbVar14,
                   pppplVar15,in_x5,in_x6,in_x7);
    uVar8 = local_178;
    FUN_7103778b80(local_178,(long)plVar30,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,in_x6,in_x7);
    local_180 = &PTR_FUN_710523d9a8;
    local_178 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_7103776910(&local_180,(long)&local_1c8,(long ****)"set_txt_help",ppppppppplVar12,ppppbVar14,
                   pppplVar15,in_x5,in_x6,in_x7);
    FUN_710377a120((long)&local_180,(char *)&local_e0,ppppppppplVar12,ppppbVar14,pppplVar15,in_x5,
                   in_x6,in_x7);
    uVar8 = local_178;
    local_180 = &PTR_FUN_710523d9a8;
    local_178 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    local_1c8 = &PTR_FUN_710523d988;
    local_1c0[0] = 0;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x1a8);
  if ((ulong)uVar2 == 0xffff) {
    ppppbVar32 = (byte ****)0x1;
    fVar34 = 0.0;
  }
  else {
    if (uVar2 >> 4 < 0x177) {
      puVar20 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar2 * 0x50 + 72000);
    }
    else {
      puVar20 = &DAT_710532a878;
      if (((ushort)(uVar2 + 0xe890) < 100) &&
         (lVar31 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar2 + 0xe890) * 0x50,
         *(short *)(lVar31 + 0x88cc8) != -1)) {
        puVar20 = (undefined2 *)(lVar31 + 0x88cc0);
      }
    }
    uVar16 = *(uint *)(puVar20 + 6);
    lVar31 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar2 = *(ushort *)(lVar31 + (long)(short)uVar4 * 2 + 0x60);
    uVar8 = (ulong)uVar2;
    uVar28 = (*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar2 < (uint)uVar28) {
      puVar20 = (undefined2 *)(*(long *)(lVar31 + 0x20) + uVar8 * 0x140);
      if (uVar28 < uVar8 || uVar28 - uVar8 == 0) {
        puVar20 = &DAT_7105182b08;
      }
      uVar5 = FUN_71025c9ac0(*(float *)(puVar20 + 0x3a),uVar16,*(uint *)(puVar20 + 0x38));
      ppppbVar32 = (byte ****)(ulong)uVar5;
      if (uVar5 == 99) goto LAB_7101e14d80;
    }
    else {
      ppppbVar32 = (byte ****)0x1;
    }
    iVar6 = FUN_71025c9e50(uVar4,(uint)ppppbVar32);
    iVar7 = FUN_71025c9e50(uVar4,(uint)ppppbVar32 + 1);
    fVar34 = 0.0;
    if (iVar7 - iVar6 != 0) {
      fVar34 = (float)(uVar16 - iVar6) / (float)(uint)(iVar7 - iVar6);
    }
  }
LAB_7101e14d80:
  FUN_7103776910(&local_e8,(long)&local_128,(long ****)"set_txt_lv",ppppppppplVar12,ppppbVar14,
                 pppplVar15,in_x5,in_x6,in_x7);
  uVar13 = 1;
  FUN_710377a280((long)&local_e8,(byte *)"mnu_spirits_select_lv",1);
  uVar8 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  uStack_de = 0;
  uStack_dc = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_e8,(long)&local_128,(long ****)"set_bar_exp",uVar13,ppppbVar32,pppplVar15,
                 in_x5,in_x6,in_x7);
  plVar30 = (long *)CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
  lVar31 = *plVar30;
  if (lVar31 != 0) {
    *(undefined4 *)(lVar31 + 0x4c) = 0x3f800000;
    *(float *)(lVar31 + 0x48) = fVar34;
    *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) | 0x10;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  uStack_de = 0;
  uStack_dc = 0;
  if (plVar30 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar30);
  }
  lVar31 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776640(&local_180,(long)&local_f8,(byte ****)"set_parts_series",uVar13,ppppbVar32,
                 pppplVar15,in_x5,in_x6,in_x7);
  uVar8 = FUN_710329a390(*(long *)(*(long *)(lVar31 + 0x188) + 8),0xda9120d1c);
  uVar28 = *(ulong *)(puVar1 + 0x30);
  if ((((uVar28 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar28 & 0xffffffffff) != 0)) &&
     (((uVar8 & 0xff00000000000000) == 0x2d00000000000000 && ((uVar8 & 0xffffffffff) != 0)))) {
    if (((uVar8 ^ uVar28) & 0xffffffffff) == 0) goto LAB_7101e14f58;
LAB_7101e14e7c:
    plVar30 = *(long **)(param_1 + 8);
    local_e8 = (undefined **)FUN_7103238d60(uVar28,0x11);
    if (((ulong)local_e8 & 0xffffffffff) != 0) {
      lVar31 = *plVar30;
      ppppbVar32 = (byte ****)(ulong)*(uint *)(lVar31 + 0x68);
      FUN_710323c4e0(lVar31,&local_e8,(long *********)(long)*(int *)(lVar31 + 0x70),ppppbVar32,
                     pppplVar15,in_x5,in_x6,in_x7);
    }
    ppppppppplVar12 = (long *********)&DAT_00000011;
    plVar30 = FUN_710323f600(*(long **)(param_1 + 8),*(ulong *)(puVar1 + 0x30),
                             (long ****)&DAT_00000011,ppppbVar32,pppplVar15,in_x5,in_x6,in_x7);
    FUN_7103776910(&local_e8,(long)&local_180,(long ****)"set_rep_series",ppppppppplVar12,ppppbVar32
                   ,pppplVar15,in_x5,in_x6,in_x7);
    uVar8 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
    FUN_7103778b80(uVar8,(long)plVar30,ppppppppplVar12,ppppbVar32,pppplVar15,in_x5,in_x6,in_x7);
    local_e8 = &PTR_FUN_710523d9a8;
    local_e0 = 0;
    uStack_de = 0;
    uStack_dc = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    uVar8 = local_178;
    switch(*(undefined1 *)(puVar1 + 0x36)) {
    case 0:
      pcVar11 = "spirit_attacker_non";
      break;
    case 1:
      pcVar11 = "spirit_attacker_offense";
      break;
    case 2:
      pcVar11 = "spirit_attacker_throw";
      break;
    case 3:
      pcVar11 = "spirit_attacker_defense";
      break;
    default:
      lVar31 = *(long *)(local_178 + 8);
      goto joined_r0x007101e14f80;
    }
    FUN_7103778300(0x3f800000,local_178,(long)pcVar11);
    lVar31 = *(long *)(uVar8 + 8);
joined_r0x007101e14f80:
    if ((lVar31 != 0) && (lVar31 = *(long *)(lVar31 + 0x18), lVar31 != 0)) {
      bVar21 = *(byte *)(lVar31 + 0x58) | 1;
      goto LAB_7101e14fd8;
    }
  }
  else {
    if (((uVar8 & 0xffffffffff) != 0 && (uVar8 & 0xff00000000000000) == 0x2d00000000000000) !=
        ((uVar28 & 0xff00000000000000) == 0x2d00000000000000 && (uVar28 & 0xffffffffff) != 0))
    goto LAB_7101e14e7c;
LAB_7101e14f58:
    uVar8 = local_178;
    if ((*(long *)(local_178 + 8) != 0) &&
       (lVar31 = *(long *)(*(long *)(local_178 + 8) + 0x18), lVar31 != 0)) {
      bVar21 = *(byte *)(lVar31 + 0x58) & 0xfe;
LAB_7101e14fd8:
      *(byte *)(lVar31 + 0x58) = bVar21;
    }
  }
  lVar31 = *(long *)(lVar33 + 0x1d8);
  uVar10 = FUN_71032a9470(lVar31,uVar4);
  FUN_71032a9540((uint *)&local_e8,lVar31,uVar10);
  FUN_71003a4ca0((uint *)&local_1c8,"spi_%s",&local_e0,uVar10,ppppbVar32,pppplVar15,in_x5,in_x6,
                 in_x7);
  FUN_7103776910(&local_e8,(long)&local_f8,(long ****)"set_txt_name_attacker",uVar10,ppppbVar32,
                 pppplVar15,in_x5,in_x6,in_x7);
  FUN_710377a120((long)&local_e8,(char *)local_1c0,uVar10,ppppbVar32,pppplVar15,in_x5,in_x6,in_x7);
  uVar28 = CONCAT44(uStack_dc,CONCAT22(uStack_de,local_e0));
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = 0;
  uStack_de = 0;
  uStack_dc = 0;
  if (uVar28 != 0) {
    FUN_710392eb40(uVar28);
  }
  switch(*(undefined1 *)(puVar1 + 0x34)) {
  case 0:
    local_e8._4_4_ = 10;
    uStack_de = 0x7361;
    uStack_dc = 0x6f6e5f73;
    uStack_d8 = 0x656e;
    uVar16 = 0x811c9dc5;
    uStack_d6 = 0;
    uVar5 = 99;
    pbVar24 = (byte *)((long)&local_e0 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar5 != 0);
    break;
  case 1:
    local_e8._4_4_ = 10;
    uStack_de = 0x7361;
    uStack_dc = 0x6f685f73;
    uStack_d8 = 0x6570;
    uVar16 = 0x811c9dc5;
    uStack_d6 = 0;
    uVar5 = 99;
    pbVar24 = (byte *)((long)&local_e0 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar5 != 0);
    break;
  case 2:
    local_e8._4_4_ = 9;
    uStack_de = 0x7361;
    uStack_dc = 0x63615f73;
    uStack_d8 = 0x65;
    uVar16 = 0x811c9dc5;
    uVar5 = 99;
    pbVar24 = (byte *)((long)&local_e0 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar5 != 0);
    break;
  case 3:
    local_e8._4_4_ = 0xc;
    uStack_de = 0x7361;
    uStack_dc = 0x656c5f73;
    uVar16 = 0x811c9dc5;
    uStack_d8 = 0x6567;
    uStack_d6 = 0x6e;
    uStack_d5 = 100;
    uVar5 = 99;
    local_d4 = local_d4 & 0xff00;
    pbVar24 = (byte *)((long)&local_e0 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar5 != 0);
    break;
  default:
    local_e8._4_4_ = 10;
    uStack_de = 0x7361;
    uStack_dc = 0x6f6e5f73;
    uStack_d8 = 0x656e;
    uVar16 = 0x811c9dc5;
    uStack_d6 = 0;
    uVar5 = 99;
    pbVar24 = (byte *)((long)&local_e0 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar5 != 0);
  }
  uStack_de = 0x7361;
  local_e0 = 0x6c63;
  local_e8 = (undefined **)CONCAT44(local_e8._4_4_,uVar16);
  FUN_7103776640(&local_1d8,(long)&local_f8,(byte ****)"set_parts_class",uVar10,ppppbVar32,
                 pppplVar15,in_x5,in_x6,in_x7);
  uVar28 = local_1d0;
  FUN_7103778300(0x3f800000,local_1d0,(long)&local_e0);
  local_1d8 = &PTR_FUN_710523d988;
  local_1d0 = 0;
  if (uVar28 != 0) {
    uVar9 = *(ulong *)(uVar28 + 0x18);
    *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar28 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar28);
  }
  switch(*(undefined1 *)(puVar1 + 0x34)) {
  case 0:
    FUN_7103776640(&local_1d8,(long)&local_f8,(byte ****)"set_parts_class",uVar10,ppppbVar32,
                   pppplVar15,in_x5,in_x6,in_x7);
    pcVar11 = "color_none";
    break;
  case 1:
    FUN_7103776640(&local_1d8,(long)&local_f8,(byte ****)"set_parts_class",uVar10,ppppbVar32,
                   pppplVar15,in_x5,in_x6,in_x7);
    pcVar11 = "color_hope";
    break;
  case 2:
    FUN_7103776640(&local_1d8,(long)&local_f8,(byte ****)"set_parts_class",uVar10,ppppbVar32,
                   pppplVar15,in_x5,in_x6,in_x7);
    pcVar11 = "color_ace";
    break;
  case 3:
    FUN_7103776640(&local_1d8,(long)&local_f8,(byte ****)"set_parts_class",uVar10,ppppbVar32,
                   pppplVar15,in_x5,in_x6,in_x7);
    pcVar11 = "color_legend";
    break;
  default:
    goto switchD_7101e15290_default;
  }
  uVar28 = local_1d0;
  FUN_7103778300(0x3f800000,local_1d0,(long)pcVar11);
  local_1d8 = &PTR_FUN_710523d988;
  local_1d0 = 0;
  if (uVar28 != 0) {
    uVar10 = *(ulong *)(uVar28 + 0x18);
    *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar28 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar28);
  }
switchD_7101e15290_default:
  local_180 = &PTR_FUN_710523d988;
  local_178 = 0;
  if (uVar8 != 0) {
    uVar28 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    FUN_710392eb40(uVar8);
  }
  local_128 = &PTR_FUN_710523d988;
  local_120 = 0;
  if (uVar23 != 0) {
    uVar8 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar23);
  }
  local_118 = &PTR_FUN_710523d988;
  local_110 = 0;
  if (uVar26 != 0) {
    uVar23 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar26);
  }
LAB_7101e14818:
  uVar26 = local_100;
  local_108 = (byte ***)&PTR_FUN_710523d988;
  local_100 = 0;
  if (uVar26 != 0) {
    uVar23 = *(ulong *)(uVar26 + 0x18);
    *(undefined ***)(uVar26 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar26 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar26);
  }
  local_f8 = &PTR_FUN_710523d988;
  local_f0 = 0;
  if (uVar17 != 0) {
    uVar26 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar26 != 0) {
      FUN_710392eb40(uVar26);
    }
    FUN_710392eb40(uVar17);
  }
  return;
}

