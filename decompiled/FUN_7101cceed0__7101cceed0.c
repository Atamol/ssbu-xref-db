// addr:      7101cceed0
// offset:    0x1cceed0
// name:      FUN_7101cceed0
// mangled:   
// signature: undefined __cdecl FUN_7101cceed0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cceed0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  uint6 uVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong extraout_x1;
  char *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  ushort uVar9;
  long lVar10;
  ushort uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long local_b38 [2];
  undefined2 local_b28;
  undefined4 local_b24;
  undefined2 local_b20;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined5 uStack_ad0;
  undefined3 local_acb;
  undefined4 uStack_ac8;
  byte bStack_ac4;
  byte local_ac3 [11];
  long ********local_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined6 uStack_a68;
  undefined2 local_a62;
  undefined6 uStack_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  ulong local_9b0;
  ulong local_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined8 local_988;
  ulong local_980;
  undefined8 local_978;
  undefined6 uStack_970;
  undefined2 local_96a;
  undefined6 uStack_968;
  undefined4 local_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined1 *local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 local_8c8;
  undefined8 local_8c0;
  undefined8 local_890;
  undefined1 local_888;
  undefined1 *local_7a8;
  undefined1 *local_798;
  undefined1 *local_788;
  undefined1 *local_778;
  undefined1 *local_768;
  undefined1 *local_758;
  undefined1 *local_748;
  undefined1 *local_738;
  undefined1 *local_728;
  undefined1 *local_718;
  ulong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0xdc) != 0) goto LAB_7101cd046c;
  **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 0x10;
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x70) = 0;
  lVar14 = *(long *)(*(long *)(param_1 + 0xf0) + 0x80);
  if (*(int *)(lVar14 + 0xd8) != 1) goto LAB_7101cd046c;
  uVar16 = *(ulong *)(param_1 + 0xf8);
  FUN_710323b9e0(**(long **)(lVar14 + 0xe8),param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  *(undefined8 *)(lVar14 + 0x118) = *(undefined8 *)(lVar14 + 0x110);
  *(undefined8 *)(lVar14 + 0x130) = *(undefined8 *)(lVar14 + 0x128);
  lVar10 = DAT_710532f8f8;
  lVar15 = *(long *)(DAT_710532f8f8 + 8);
  uVar5 = FUN_710334fdc0(lVar15,uVar16);
  local_88[0] = (ulong)uVar5;
  if (extraout_x1 == 0) {
    *(undefined2 *)(lVar14 + 0x108) = 0xffff;
    goto switchD_7101ccefac_default;
  }
  uVar4 = FUN_710334c7d0(lVar15,extraout_x1,uVar5);
  *(undefined2 *)(lVar14 + 0x108) = uVar4;
  switch(uVar4) {
  case 0:
    uStack_ac8 = 0;
    bStack_ac4 = 0;
    local_b38[0] = 0;
    local_b38[1] = 0;
    local_990 = 0x13ffff0000000000;
    plVar7 = local_b38;
    local_988 = 0x5affff0000000000;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_acb = 0;
    local_b24 = 0;
    local_b20 = 0;
    local_b28 = 0;
    local_ae0 = 0;
    local_9b0 = 0;
    local_9a8 = local_9a8 & 0xffffffffffff0000;
    local_980 = local_980 & 0xffff000000000000;
    local_920 = &DAT_c1ffff0000000000;
    FUN_710334f120(*(long *)(lVar10 + 8),(int *)local_88,plVar7);
    FUN_7103776910(&local_60,**(long **)(lVar14 + 0xf0) + 8,(long ****)"set_txt_idnum",plVar7,
                   param_4,param_5,param_6,param_7,param_8);
    local_68 = 0;
    local_78 = (undefined **)0x0;
    local_70 = 0;
    if (bStack_ac4 == 0) {
      lVar10 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pbVar12 = local_ac3;
      do {
        bVar1 = *pbVar12;
        uVar5 = uVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      if ((char)bStack_ac4 < '\0') {
        if ((bStack_ac4 & 0xe0) == 0xc0) {
          pbVar12 = local_ac3 + 1;
          uVar11 = local_ac3[0] & 0x3f | (bStack_ac4 & 0x3f) << 6;
        }
        else {
          pbVar12 = local_ac3 + 2;
          uVar11 = (ushort)bStack_ac4 << 0xc | (local_ac3[0] & 0x3f) << 6 | local_ac3[1] & 0x3f;
        }
      }
      else {
        pbVar12 = local_ac3;
        uVar11 = bStack_ac4 & 0x7f;
      }
      lVar10 = 1;
      local_78 = (undefined **)(ulong)uVar11;
      if ((uVar5 != 0) && (bVar1 = *pbVar12, bVar1 != 0)) {
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0xe0) == 0xc0) {
            pbVar13 = pbVar12 + 2;
            uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
          }
          else {
            pbVar13 = pbVar12 + 3;
            uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          }
        }
        else {
          pbVar13 = pbVar12 + 1;
          uVar9 = bVar1 & 0x7f;
        }
        local_78._0_4_ = CONCAT22(uVar9,uVar11);
        uVar2 = (uint)local_78;
        local_78 = (undefined **)(ulong)(uint)local_78;
        lVar10 = 2;
        if ((1 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0xe0) == 0xc0) {
              pbVar12 = pbVar13 + 2;
              uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
            }
            else {
              pbVar12 = pbVar13 + 3;
              uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
            }
          }
          else {
            pbVar12 = pbVar13 + 1;
            uVar11 = bVar1 & 0x7f;
          }
          local_78._0_6_ = CONCAT24(uVar11,uVar2);
          uVar3 = (uint6)local_78;
          local_78 = (undefined **)(ulong)(uint6)local_78;
          lVar10 = 3;
          if ((2 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0xe0) == 0xc0) {
                pbVar13 = pbVar12 + 2;
                uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
              }
              else {
                pbVar13 = pbVar12 + 3;
                uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
              }
            }
            else {
              pbVar13 = pbVar12 + 1;
              uVar11 = bVar1 & 0x7f;
            }
            local_78 = (undefined **)CONCAT26(uVar11,uVar3);
            lVar10 = 4;
            if ((3 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
              if ((char)bVar1 < '\0') {
                if ((bVar1 & 0xe0) == 0xc0) {
                  pbVar12 = pbVar13 + 2;
                  uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                }
                else {
                  pbVar12 = pbVar13 + 3;
                  uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                }
              }
              else {
                pbVar12 = pbVar13 + 1;
                uVar11 = bVar1 & 0x7f;
              }
              local_70 = (ulong)uVar11;
              lVar10 = 5;
              if ((4 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                if ((char)bVar1 < '\0') {
                  if ((bVar1 & 0xe0) == 0xc0) {
                    pbVar13 = pbVar12 + 2;
                    uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                  }
                  else {
                    pbVar13 = pbVar12 + 3;
                    uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
                  }
                }
                else {
                  pbVar13 = pbVar12 + 1;
                  uVar9 = bVar1 & 0x7f;
                }
                local_70._0_4_ = CONCAT22(uVar9,uVar11);
                uVar2 = (uint)local_70;
                local_70 = (ulong)(uint)local_70;
                lVar10 = 6;
                if ((5 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
                  if ((char)bVar1 < '\0') {
                    if ((bVar1 & 0xe0) == 0xc0) {
                      pbVar12 = pbVar13 + 2;
                      uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                    }
                    else {
                      pbVar12 = pbVar13 + 3;
                      uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                    }
                  }
                  else {
                    pbVar12 = pbVar13 + 1;
                    uVar11 = bVar1 & 0x7f;
                  }
                  local_70._0_6_ = CONCAT24(uVar11,uVar2);
                  uVar3 = (uint6)local_70;
                  local_70 = (ulong)(uint6)local_70;
                  lVar10 = 7;
                  if ((6 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                    if ((char)bVar1 < '\0') {
                      if ((bVar1 & 0xe0) == 0xc0) {
                        uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                      }
                      else {
                        uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f
                        ;
                      }
                    }
                    else {
                      uVar11 = bVar1 & 0x7f;
                    }
                    local_70 = CONCAT26(uVar11,uVar3);
                    lVar10 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar8 = &local_78;
    *(undefined2 *)((long)&local_78 + lVar10 * 2) = 0;
    local_68 = 0;
    FUN_710377a310((long)&local_60,1);
    uVar16 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    lVar10 = **(long **)(lVar14 + 0xf0);
    FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0x10),0x710435b8f6);
    FUN_7103778300(0x3f800000,*(long *)(lVar10 + 0x10),0x710433a322);
    FUN_7103776910(&local_78,lVar10 + 8,(long ****)"set_rep_mfshot",puVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),local_b38[0],(long *********)&local_78,param_4,
                   param_5,param_6,param_7,param_8);
    uVar5 = (uint)(byte)local_980;
    if (0xb < uVar5) {
      uVar5 = 0xc;
    }
    FUN_7103778430(lVar10 + 8,"mf_clr_%02d",(ulong)uVar5,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101cd0444;
  case 1:
    local_b24 = 0;
    local_b20 = 0;
    local_b28 = 0;
    local_b38[0] = 0;
    local_b38[1] = 0;
    plVar7 = local_b38;
    uStack_ac8 = 0;
    bStack_ac4 = 0;
    local_ae0 = 0;
    local_9b8 = 0;
    local_9b0 = local_9b0 & 0xffffffffffff0000;
    local_980 = 0xd9ffff0000000000;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_acb = 0;
    FUN_710334f710(*(long *)(lVar10 + 8),(int *)local_88,plVar7);
    FUN_7103776910(&local_60,**(long **)(lVar14 + 0xf0) + 8,(long ****)"set_txt_idnum",plVar7,
                   param_4,param_5,param_6,param_7,param_8);
    local_68 = 0;
    local_78 = (undefined **)0x0;
    local_70 = 0;
    if (bStack_ac4 == 0) {
      lVar10 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pbVar12 = local_ac3;
      do {
        bVar1 = *pbVar12;
        uVar5 = uVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      if ((char)bStack_ac4 < '\0') {
        if ((bStack_ac4 & 0xe0) == 0xc0) {
          pbVar12 = local_ac3 + 1;
          uVar11 = local_ac3[0] & 0x3f | (bStack_ac4 & 0x3f) << 6;
        }
        else {
          pbVar12 = local_ac3 + 2;
          uVar11 = (ushort)bStack_ac4 << 0xc | (local_ac3[0] & 0x3f) << 6 | local_ac3[1] & 0x3f;
        }
      }
      else {
        pbVar12 = local_ac3;
        uVar11 = bStack_ac4 & 0x7f;
      }
      lVar10 = 1;
      local_78 = (undefined **)(ulong)uVar11;
      if ((uVar5 != 0) && (bVar1 = *pbVar12, bVar1 != 0)) {
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0xe0) == 0xc0) {
            pbVar13 = pbVar12 + 2;
            uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
          }
          else {
            pbVar13 = pbVar12 + 3;
            uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          }
        }
        else {
          pbVar13 = pbVar12 + 1;
          uVar9 = bVar1 & 0x7f;
        }
        local_78._0_4_ = CONCAT22(uVar9,uVar11);
        uVar2 = (uint)local_78;
        local_78 = (undefined **)(ulong)(uint)local_78;
        lVar10 = 2;
        if ((1 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0xe0) == 0xc0) {
              pbVar12 = pbVar13 + 2;
              uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
            }
            else {
              pbVar12 = pbVar13 + 3;
              uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
            }
          }
          else {
            pbVar12 = pbVar13 + 1;
            uVar11 = bVar1 & 0x7f;
          }
          local_78._0_6_ = CONCAT24(uVar11,uVar2);
          uVar3 = (uint6)local_78;
          local_78 = (undefined **)(ulong)(uint6)local_78;
          lVar10 = 3;
          if ((2 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0xe0) == 0xc0) {
                pbVar13 = pbVar12 + 2;
                uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
              }
              else {
                pbVar13 = pbVar12 + 3;
                uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
              }
            }
            else {
              pbVar13 = pbVar12 + 1;
              uVar11 = bVar1 & 0x7f;
            }
            local_78 = (undefined **)CONCAT26(uVar11,uVar3);
            lVar10 = 4;
            if ((3 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
              if ((char)bVar1 < '\0') {
                if ((bVar1 & 0xe0) == 0xc0) {
                  pbVar12 = pbVar13 + 2;
                  uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                }
                else {
                  pbVar12 = pbVar13 + 3;
                  uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                }
              }
              else {
                pbVar12 = pbVar13 + 1;
                uVar11 = bVar1 & 0x7f;
              }
              local_70 = (ulong)uVar11;
              lVar10 = 5;
              if ((4 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                if ((char)bVar1 < '\0') {
                  if ((bVar1 & 0xe0) == 0xc0) {
                    pbVar13 = pbVar12 + 2;
                    uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                  }
                  else {
                    pbVar13 = pbVar12 + 3;
                    uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
                  }
                }
                else {
                  pbVar13 = pbVar12 + 1;
                  uVar9 = bVar1 & 0x7f;
                }
                local_70._0_4_ = CONCAT22(uVar9,uVar11);
                uVar2 = (uint)local_70;
                local_70 = (ulong)(uint)local_70;
                lVar10 = 6;
                if ((5 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
                  if ((char)bVar1 < '\0') {
                    if ((bVar1 & 0xe0) == 0xc0) {
                      pbVar12 = pbVar13 + 2;
                      uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                    }
                    else {
                      pbVar12 = pbVar13 + 3;
                      uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                    }
                  }
                  else {
                    pbVar12 = pbVar13 + 1;
                    uVar11 = bVar1 & 0x7f;
                  }
                  local_70._0_6_ = CONCAT24(uVar11,uVar2);
                  uVar3 = (uint6)local_70;
                  local_70 = (ulong)(uint6)local_70;
                  lVar10 = 7;
                  if ((6 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                    if ((char)bVar1 < '\0') {
                      if ((bVar1 & 0xe0) == 0xc0) {
                        uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                      }
                      else {
                        uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f
                        ;
                      }
                    }
                    else {
                      uVar11 = bVar1 & 0x7f;
                    }
                    local_70 = CONCAT26(uVar11,uVar3);
                    lVar10 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar8 = &local_78;
    *(undefined2 *)((long)&local_78 + lVar10 * 2) = 0;
    local_68 = 0;
    FUN_710377a310((long)&local_60,1);
    uVar16 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    lVar15 = **(long **)(lVar14 + 0xf0);
    lVar10 = *(long *)(lVar15 + 0x10);
    pcVar6 = "mode_04";
    break;
  case 2:
    local_b24 = 0;
    local_b20 = 0;
    local_b28 = 0;
    uStack_ac8 = 0;
    bStack_ac4 = 0;
    local_ae0 = 0;
    local_ab8 = (long ********)0x0;
    local_b38[0] = 0;
    local_b38[1] = 0;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_acb = 0;
    FUN_710143c4d0(&local_a40);
    local_7a8 = &DAT_c1ffff0000000000;
    local_798 = &DAT_c1ffff0000000000;
    local_788 = &DAT_c1ffff0000000000;
    local_778 = &DAT_c1ffff0000000000;
    plVar7 = local_b38;
    local_768 = &DAT_c1ffff0000000000;
    local_758 = &DAT_c1ffff0000000000;
    local_748 = &DAT_c1ffff0000000000;
    local_738 = &DAT_c1ffff0000000000;
    local_728 = &DAT_c1ffff0000000000;
    local_718 = &DAT_c1ffff0000000000;
    FUN_710334e9e0(*(long *)(lVar10 + 8),(int *)local_88,plVar7);
    FUN_7103776910(&local_60,**(long **)(lVar14 + 0xf0) + 8,(long ****)"set_txt_idnum",plVar7,
                   param_4,param_5,param_6,param_7,param_8);
    local_68 = 0;
    local_78 = (undefined **)0x0;
    local_70 = 0;
    if (bStack_ac4 == 0) {
      lVar10 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pbVar12 = local_ac3;
      do {
        bVar1 = *pbVar12;
        uVar5 = uVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      if ((char)bStack_ac4 < '\0') {
        if ((bStack_ac4 & 0xe0) == 0xc0) {
          pbVar12 = local_ac3 + 1;
          uVar11 = local_ac3[0] & 0x3f | (bStack_ac4 & 0x3f) << 6;
        }
        else {
          pbVar12 = local_ac3 + 2;
          uVar11 = (ushort)bStack_ac4 << 0xc | (local_ac3[0] & 0x3f) << 6 | local_ac3[1] & 0x3f;
        }
      }
      else {
        pbVar12 = local_ac3;
        uVar11 = bStack_ac4 & 0x7f;
      }
      lVar10 = 1;
      local_78 = (undefined **)(ulong)uVar11;
      if ((uVar5 != 0) && (bVar1 = *pbVar12, bVar1 != 0)) {
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0xe0) == 0xc0) {
            pbVar13 = pbVar12 + 2;
            uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
          }
          else {
            pbVar13 = pbVar12 + 3;
            uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          }
        }
        else {
          pbVar13 = pbVar12 + 1;
          uVar9 = bVar1 & 0x7f;
        }
        local_78._0_4_ = CONCAT22(uVar9,uVar11);
        uVar2 = (uint)local_78;
        local_78 = (undefined **)(ulong)(uint)local_78;
        lVar10 = 2;
        if ((1 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0xe0) == 0xc0) {
              pbVar12 = pbVar13 + 2;
              uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
            }
            else {
              pbVar12 = pbVar13 + 3;
              uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
            }
          }
          else {
            pbVar12 = pbVar13 + 1;
            uVar11 = bVar1 & 0x7f;
          }
          local_78._0_6_ = CONCAT24(uVar11,uVar2);
          uVar3 = (uint6)local_78;
          local_78 = (undefined **)(ulong)(uint6)local_78;
          lVar10 = 3;
          if ((2 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0xe0) == 0xc0) {
                pbVar13 = pbVar12 + 2;
                uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
              }
              else {
                pbVar13 = pbVar12 + 3;
                uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
              }
            }
            else {
              pbVar13 = pbVar12 + 1;
              uVar11 = bVar1 & 0x7f;
            }
            local_78 = (undefined **)CONCAT26(uVar11,uVar3);
            lVar10 = 4;
            if ((3 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
              if ((char)bVar1 < '\0') {
                if ((bVar1 & 0xe0) == 0xc0) {
                  pbVar12 = pbVar13 + 2;
                  uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                }
                else {
                  pbVar12 = pbVar13 + 3;
                  uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                }
              }
              else {
                pbVar12 = pbVar13 + 1;
                uVar11 = bVar1 & 0x7f;
              }
              local_70 = (ulong)uVar11;
              lVar10 = 5;
              if ((4 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                if ((char)bVar1 < '\0') {
                  if ((bVar1 & 0xe0) == 0xc0) {
                    pbVar13 = pbVar12 + 2;
                    uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                  }
                  else {
                    pbVar13 = pbVar12 + 3;
                    uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
                  }
                }
                else {
                  pbVar13 = pbVar12 + 1;
                  uVar9 = bVar1 & 0x7f;
                }
                local_70._0_4_ = CONCAT22(uVar9,uVar11);
                uVar2 = (uint)local_70;
                local_70 = (ulong)(uint)local_70;
                lVar10 = 6;
                if ((5 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
                  if ((char)bVar1 < '\0') {
                    if ((bVar1 & 0xe0) == 0xc0) {
                      pbVar12 = pbVar13 + 2;
                      uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                    }
                    else {
                      pbVar12 = pbVar13 + 3;
                      uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                    }
                  }
                  else {
                    pbVar12 = pbVar13 + 1;
                    uVar11 = bVar1 & 0x7f;
                  }
                  local_70._0_6_ = CONCAT24(uVar11,uVar2);
                  uVar3 = (uint6)local_70;
                  local_70 = (ulong)(uint6)local_70;
                  lVar10 = 7;
                  if ((6 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                    if ((char)bVar1 < '\0') {
                      if ((bVar1 & 0xe0) == 0xc0) {
                        uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                      }
                      else {
                        uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f
                        ;
                      }
                    }
                    else {
                      uVar11 = bVar1 & 0x7f;
                    }
                    local_70 = CONCAT26(uVar11,uVar3);
                    lVar10 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined2 *)((long)&local_78 + lVar10 * 2) = 0;
    local_68 = 0;
    FUN_710377a310((long)&local_60,1);
    uVar16 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    lVar10 = *(long *)(**(long **)(lVar14 + 0xf0) + 0x10);
    pcVar6 = "mode_01";
    goto LAB_7101cd0370;
  case 3:
    local_b24 = 0;
    local_b20 = 0;
    local_b28 = 0;
    uStack_ac8 = 0;
    bStack_ac4 = 0;
    local_ae0 = 0;
    local_ab8 = (long ********)0x0;
    local_b38[0] = 0;
    local_b38[1] = 0;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_acb = 0;
    FUN_710143c4d0(&local_a40);
    plVar7 = local_b38;
    FUN_710334ec20(*(long *)(lVar10 + 8),(int *)local_88,plVar7);
    FUN_7103776910(&local_60,**(long **)(lVar14 + 0xf0) + 8,(long ****)"set_txt_idnum",plVar7,
                   param_4,param_5,param_6,param_7,param_8);
    local_68 = 0;
    local_78 = (undefined **)0x0;
    local_70 = 0;
    if (bStack_ac4 == 0) {
      lVar10 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pbVar12 = local_ac3;
      do {
        bVar1 = *pbVar12;
        uVar5 = uVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      if ((char)bStack_ac4 < '\0') {
        if ((bStack_ac4 & 0xe0) == 0xc0) {
          pbVar12 = local_ac3 + 1;
          uVar11 = local_ac3[0] & 0x3f | (bStack_ac4 & 0x3f) << 6;
        }
        else {
          pbVar12 = local_ac3 + 2;
          uVar11 = (ushort)bStack_ac4 << 0xc | (local_ac3[0] & 0x3f) << 6 | local_ac3[1] & 0x3f;
        }
      }
      else {
        pbVar12 = local_ac3;
        uVar11 = bStack_ac4 & 0x7f;
      }
      lVar10 = 1;
      local_78 = (undefined **)(ulong)uVar11;
      if ((uVar5 != 0) && (bVar1 = *pbVar12, bVar1 != 0)) {
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0xe0) == 0xc0) {
            pbVar13 = pbVar12 + 2;
            uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
          }
          else {
            pbVar13 = pbVar12 + 3;
            uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          }
        }
        else {
          pbVar13 = pbVar12 + 1;
          uVar9 = bVar1 & 0x7f;
        }
        local_78._0_4_ = CONCAT22(uVar9,uVar11);
        uVar2 = (uint)local_78;
        local_78 = (undefined **)(ulong)(uint)local_78;
        lVar10 = 2;
        if ((1 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0xe0) == 0xc0) {
              pbVar12 = pbVar13 + 2;
              uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
            }
            else {
              pbVar12 = pbVar13 + 3;
              uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
            }
          }
          else {
            pbVar12 = pbVar13 + 1;
            uVar11 = bVar1 & 0x7f;
          }
          local_78._0_6_ = CONCAT24(uVar11,uVar2);
          uVar3 = (uint6)local_78;
          local_78 = (undefined **)(ulong)(uint6)local_78;
          lVar10 = 3;
          if ((2 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0xe0) == 0xc0) {
                pbVar13 = pbVar12 + 2;
                uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
              }
              else {
                pbVar13 = pbVar12 + 3;
                uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
              }
            }
            else {
              pbVar13 = pbVar12 + 1;
              uVar11 = bVar1 & 0x7f;
            }
            local_78 = (undefined **)CONCAT26(uVar11,uVar3);
            lVar10 = 4;
            if ((3 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
              if ((char)bVar1 < '\0') {
                if ((bVar1 & 0xe0) == 0xc0) {
                  pbVar12 = pbVar13 + 2;
                  uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                }
                else {
                  pbVar12 = pbVar13 + 3;
                  uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                }
              }
              else {
                pbVar12 = pbVar13 + 1;
                uVar11 = bVar1 & 0x7f;
              }
              local_70 = (ulong)uVar11;
              lVar10 = 5;
              if ((4 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                if ((char)bVar1 < '\0') {
                  if ((bVar1 & 0xe0) == 0xc0) {
                    pbVar13 = pbVar12 + 2;
                    uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                  }
                  else {
                    pbVar13 = pbVar12 + 3;
                    uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
                  }
                }
                else {
                  pbVar13 = pbVar12 + 1;
                  uVar9 = bVar1 & 0x7f;
                }
                local_70._0_4_ = CONCAT22(uVar9,uVar11);
                uVar2 = (uint)local_70;
                local_70 = (ulong)(uint)local_70;
                lVar10 = 6;
                if ((5 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
                  if ((char)bVar1 < '\0') {
                    if ((bVar1 & 0xe0) == 0xc0) {
                      pbVar12 = pbVar13 + 2;
                      uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                    }
                    else {
                      pbVar12 = pbVar13 + 3;
                      uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                    }
                  }
                  else {
                    pbVar12 = pbVar13 + 1;
                    uVar11 = bVar1 & 0x7f;
                  }
                  local_70._0_6_ = CONCAT24(uVar11,uVar2);
                  uVar3 = (uint6)local_70;
                  local_70 = (ulong)(uint6)local_70;
                  lVar10 = 7;
                  if ((6 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                    if ((char)bVar1 < '\0') {
                      if ((bVar1 & 0xe0) == 0xc0) {
                        uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                      }
                      else {
                        uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f
                        ;
                      }
                    }
                    else {
                      uVar11 = bVar1 & 0x7f;
                    }
                    local_70 = CONCAT26(uVar11,uVar3);
                    lVar10 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined2 *)((long)&local_78 + lVar10 * 2) = 0;
    local_68 = 0;
    FUN_710377a310((long)&local_60,1);
    uVar16 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    lVar10 = *(long *)(**(long **)(lVar14 + 0xf0) + 0x10);
    pcVar6 = "mode_02";
LAB_7101cd0370:
    FUN_7103778300(0x3f800000,lVar10,(long)pcVar6);
    FUN_7101ccdac0(lVar14,local_b38,&local_ab8,param_4,param_5,param_6,param_7,param_8);
    goto switchD_7101ccefac_default;
  case 4:
    local_b24 = 0;
    local_b20 = 0;
    local_b28 = 0;
    uStack_ac8 = 0;
    bStack_ac4 = 0;
    local_ae0 = 0;
    uStack_a60 = 0;
    local_ab8 = (long ********)0x0;
    local_a58 = 0;
    local_b38[0] = 0;
    local_b38[1] = 0;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_acb = 0;
    local_a70 = 0;
    uStack_a68 = 0;
    local_a62 = 0;
    local_a80 = 0;
    uStack_a78 = 0;
    local_a90 = 0;
    uStack_a88 = 0;
    local_aa0 = 0;
    uStack_a98 = 0;
    local_ab0 = 0;
    uStack_aa8 = 0;
    local_9a0 = 0;
    uStack_998 = 0;
    local_9b0 = 0;
    local_9a8 = 0;
    local_9c0 = 0;
    local_9b8 = 0;
    local_9d0 = 0;
    uStack_9c8 = 0;
    local_9e0 = 0;
    uStack_9d8 = 0;
    local_9f0 = 0;
    uStack_9e8 = 0;
    local_a00 = 0;
    uStack_9f8 = 0;
    local_a10 = 0;
    uStack_a08 = 0;
    local_a20 = 0;
    uStack_a18 = 0;
    local_a30 = 0;
    uStack_a28 = 0;
    local_a40 = 0;
    uStack_a38 = 0;
    local_a50 = 0;
    uStack_a48 = 0;
    FUN_71004f5770(&local_a50);
    local_960 = 0;
    uStack_968 = 0;
    local_978 = 0;
    uStack_970 = 0;
    local_96a = 0;
    plVar7 = local_b38;
    local_990 = 0;
    local_8c0 = 0;
    local_8c8 = 0;
    local_8d0 = 0;
    local_8d8 = 0;
    local_8e0 = 0;
    local_8e8 = 0;
    local_8f0 = 0;
    local_8f8 = 0;
    local_900 = 0;
    local_908 = 0;
    local_910 = 0;
    local_918 = 0;
    local_920 = (undefined1 *)0x0;
    local_928 = 0;
    local_930 = 0;
    local_938 = 0;
    local_888 = 0;
    local_890 = 0;
    local_988 = 0;
    local_980 = 0;
    local_948 = 0;
    uStack_940 = 0;
    local_958 = 0;
    uStack_950 = 0;
    FUN_710334e6a0(*(long *)(lVar10 + 8),(int *)local_88,plVar7);
    FUN_7103776910(&local_60,**(long **)(lVar14 + 0xf0) + 8,(long ****)"set_txt_idnum",plVar7,
                   param_4,param_5,param_6,param_7,param_8);
    local_68 = 0;
    local_78 = (undefined **)0x0;
    local_70 = 0;
    if (bStack_ac4 == 0) {
      lVar10 = 0;
    }
    else {
      uVar5 = 0xffffffff;
      pbVar12 = local_ac3;
      do {
        bVar1 = *pbVar12;
        uVar5 = uVar5 + 1;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
      if ((char)bStack_ac4 < '\0') {
        if ((bStack_ac4 & 0xe0) == 0xc0) {
          pbVar12 = local_ac3 + 1;
          uVar11 = local_ac3[0] & 0x3f | (bStack_ac4 & 0x3f) << 6;
        }
        else {
          pbVar12 = local_ac3 + 2;
          uVar11 = (ushort)bStack_ac4 << 0xc | (local_ac3[0] & 0x3f) << 6 | local_ac3[1] & 0x3f;
        }
      }
      else {
        pbVar12 = local_ac3;
        uVar11 = bStack_ac4 & 0x7f;
      }
      lVar10 = 1;
      local_78 = (undefined **)(ulong)uVar11;
      if ((uVar5 != 0) && (bVar1 = *pbVar12, bVar1 != 0)) {
        if ((char)bVar1 < '\0') {
          if ((bVar1 & 0xe0) == 0xc0) {
            pbVar13 = pbVar12 + 2;
            uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
          }
          else {
            pbVar13 = pbVar12 + 3;
            uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
          }
        }
        else {
          pbVar13 = pbVar12 + 1;
          uVar9 = bVar1 & 0x7f;
        }
        local_78._0_4_ = CONCAT22(uVar9,uVar11);
        uVar2 = (uint)local_78;
        local_78 = (undefined **)(ulong)(uint)local_78;
        lVar10 = 2;
        if ((1 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0xe0) == 0xc0) {
              pbVar12 = pbVar13 + 2;
              uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
            }
            else {
              pbVar12 = pbVar13 + 3;
              uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
            }
          }
          else {
            pbVar12 = pbVar13 + 1;
            uVar11 = bVar1 & 0x7f;
          }
          local_78._0_6_ = CONCAT24(uVar11,uVar2);
          uVar3 = (uint6)local_78;
          local_78 = (undefined **)(ulong)(uint6)local_78;
          lVar10 = 3;
          if ((2 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0xe0) == 0xc0) {
                pbVar13 = pbVar12 + 2;
                uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
              }
              else {
                pbVar13 = pbVar12 + 3;
                uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
              }
            }
            else {
              pbVar13 = pbVar12 + 1;
              uVar11 = bVar1 & 0x7f;
            }
            local_78 = (undefined **)CONCAT26(uVar11,uVar3);
            lVar10 = 4;
            if ((3 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
              if ((char)bVar1 < '\0') {
                if ((bVar1 & 0xe0) == 0xc0) {
                  pbVar12 = pbVar13 + 2;
                  uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                }
                else {
                  pbVar12 = pbVar13 + 3;
                  uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                }
              }
              else {
                pbVar12 = pbVar13 + 1;
                uVar11 = bVar1 & 0x7f;
              }
              local_70 = (ulong)uVar11;
              lVar10 = 5;
              if ((4 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                if ((char)bVar1 < '\0') {
                  if ((bVar1 & 0xe0) == 0xc0) {
                    pbVar13 = pbVar12 + 2;
                    uVar9 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                  }
                  else {
                    pbVar13 = pbVar12 + 3;
                    uVar9 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f;
                  }
                }
                else {
                  pbVar13 = pbVar12 + 1;
                  uVar9 = bVar1 & 0x7f;
                }
                local_70._0_4_ = CONCAT22(uVar9,uVar11);
                uVar2 = (uint)local_70;
                local_70 = (ulong)(uint)local_70;
                lVar10 = 6;
                if ((5 < uVar5) && (bVar1 = *pbVar13, bVar1 != 0)) {
                  if ((char)bVar1 < '\0') {
                    if ((bVar1 & 0xe0) == 0xc0) {
                      pbVar12 = pbVar13 + 2;
                      uVar11 = pbVar13[1] & 0x3f | (bVar1 & 0x3f) << 6;
                    }
                    else {
                      pbVar12 = pbVar13 + 3;
                      uVar11 = (ushort)bVar1 << 0xc | (pbVar13[1] & 0x3f) << 6 | pbVar13[2] & 0x3f;
                    }
                  }
                  else {
                    pbVar12 = pbVar13 + 1;
                    uVar11 = bVar1 & 0x7f;
                  }
                  local_70._0_6_ = CONCAT24(uVar11,uVar2);
                  uVar3 = (uint6)local_70;
                  local_70 = (ulong)(uint6)local_70;
                  lVar10 = 7;
                  if ((6 < uVar5) && (bVar1 = *pbVar12, bVar1 != 0)) {
                    if ((char)bVar1 < '\0') {
                      if ((bVar1 & 0xe0) == 0xc0) {
                        uVar11 = pbVar12[1] & 0x3f | (bVar1 & 0x3f) << 6;
                      }
                      else {
                        uVar11 = (ushort)bVar1 << 0xc | (pbVar12[1] & 0x3f) << 6 | pbVar12[2] & 0x3f
                        ;
                      }
                    }
                    else {
                      uVar11 = bVar1 & 0x7f;
                    }
                    local_70 = CONCAT26(uVar11,uVar3);
                    lVar10 = 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar8 = &local_78;
    *(undefined2 *)((long)&local_78 + lVar10 * 2) = 0;
    local_68 = 0;
    FUN_710377a310((long)&local_60,1);
    uVar16 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    lVar15 = **(long **)(lVar14 + 0xf0);
    lVar10 = *(long *)(lVar15 + 0x10);
    pcVar6 = "mode_00";
    break;
  default:
    goto switchD_7101ccefac_default;
  }
  FUN_7103778300(0x3f800000,lVar10,(long)pcVar6);
  FUN_7103778300(0x3f800000,*(long *)(lVar15 + 0x10),0x71042e73fa);
  FUN_7103776910(&local_78,lVar15 + 8,(long ****)"set_rep_bgshot_l",puVar8,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),local_b38[0],(long *********)&local_78,param_4,
                 param_5,param_6,param_7,param_8);
LAB_7101cd0444:
  uVar16 = local_70;
  local_78 = &PTR_FUN_710523d9a8;
  local_70 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
switchD_7101ccefac_default:
  if (0x12 < *(uint *)(lVar14 + 0xd4)) {
LAB_7101cd04bc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar14 + 0xd4) * 4 + 0x88) = 2;
LAB_7101cd046c:
  if (*(int *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x80) + 0xd8) == 4) {
    if (0x12 < *(uint *)(param_1 + 0xd4)) goto LAB_7101cd04bc;
    lVar14 = param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4;
    *(int *)(lVar14 + 0x88) = *(int *)(lVar14 + 0x88) + 1;
  }
  return;
}

