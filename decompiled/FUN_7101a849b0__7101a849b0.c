// addr:      7101a849b0
// offset:    0x1a849b0
// name:      FUN_7101a849b0
// mangled:   
// signature: undefined __cdecl FUN_7101a849b0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a849b0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  void *__src;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  long ****__n;
  int iVar7;
  char *pcVar8;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long ****pppplVar9;
  byte ****ppppbVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long ***ppplVar14;
  code *pcVar15;
  uint uVar16;
  long lVar17;
  ushort *puVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  long *plVar22;
  uint uVar23;
  void *__src_00;
  uint uVar24;
  long ****__n_00;
  void *pvVar25;
  void *pvVar26;
  float fVar27;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  short local_8c;
  short local_8a;
  short local_88;
  short local_86;
  short local_84;
  short local_82;
  long ***local_78;
  ulong local_70;
  undefined4 local_64;
  
  uVar2 = *(uint *)(*(long *)(param_1 + 0x198) + 0x2a4);
  if (*(int *)(param_1 + 0x16c) != 0) goto LAB_7101a85178;
  uVar23 = 0x811c9dc5;
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x180),0);
  local_a0 = 0xffffffff;
  local_98 = 0;
  local_94._0_2_ = 0;
  if (*(char *)(param_1 + 0x274) != '\0') {
    lVar17 = *(long *)(param_1 + 0x228);
    uVar20 = (*(long *)(param_1 + 0x230) - lVar17 >> 2) * -0x71c71c71c71c71c7;
    uVar12 = (ulong)*(int *)(param_1 + 0x270);
    if (uVar20 < uVar12 || uVar20 - uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar21 = (uint *)(lVar17 + uVar12 * 0x24);
    uVar24 = *puVar21;
    local_a0 = (ulong)uVar24;
    if ((uint *)&local_a0 != puVar21) {
      uVar4 = *(ushort *)(lVar17 + uVar12 * 0x24 + 0xc);
      if (uVar4 == 0) {
        local_98 = 0;
      }
      else {
        sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0xe);
        local_94._0_2_ = uVar4;
        if (sVar5 == 0) {
          local_98 = 1;
        }
        else {
          local_94._2_2_ = sVar5;
          sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x10);
          if (sVar5 == 0) {
            local_98 = 2;
          }
          else {
            local_94._4_2_ = sVar5;
            sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x12);
            if (sVar5 == 0) {
              local_98 = 3;
            }
            else {
              local_94._6_2_ = sVar5;
              sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x14);
              if (sVar5 == 0) {
                local_98 = 4;
              }
              else {
                local_8c = sVar5;
                sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x16);
                if (sVar5 == 0) {
                  local_98 = 5;
                }
                else {
                  local_8a = sVar5;
                  sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x18);
                  if (sVar5 == 0) {
                    local_98 = 6;
                  }
                  else {
                    local_88 = sVar5;
                    sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x1a);
                    if (sVar5 == 0) {
                      local_98 = 7;
                    }
                    else {
                      local_86 = sVar5;
                      sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x1c);
                      if (sVar5 == 0) {
                        local_98 = 8;
                      }
                      else {
                        local_84 = sVar5;
                        sVar5 = *(short *)(lVar17 + uVar12 * 0x24 + 0x1e);
                        if (sVar5 == 0) {
                          local_98 = 9;
                        }
                        else {
                          local_82 = sVar5;
                          local_98 = 10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(undefined2 *)((long)&local_94 + (ulong)local_98 * 2) = 0;
      uVar11 = (uint)(ushort)local_94;
      uVar16 = uVar23;
      if ((ushort)local_94 != 0) {
        puVar18 = (ushort *)((long)&local_94 + 2);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar11;
          uVar11 = (uint)*puVar18;
          puVar18 = puVar18 + 1;
        } while (uVar11 != 0);
      }
      local_a0 = CONCAT44(uVar16,uVar24);
    }
  }
  uVar24 = *(uint *)(param_1 + 500);
  pppplVar9 = (long ****)(ulong)uVar24;
  if ((int)uVar24 < 0x500000) {
    if ((int)uVar24 < 0x250000) {
      if ((int)uVar24 < 0x200000) {
        if ((int)uVar24 < 0x150000) {
          if ((int)uVar24 < 0x100000) {
            if ((int)uVar24 < 0xfe000) {
              if ((int)uVar24 < 0x50000) {
                if ((int)uVar24 < 0x10000) {
                  iVar7 = 3;
                  if (0 < (int)uVar24) {
                    iVar7 = 0;
                  }
                }
                else {
                  iVar7 = 1;
                }
              }
              else {
                iVar7 = 2;
              }
            }
            else {
              iVar7 = 8;
            }
          }
          else {
            iVar7 = 4;
          }
        }
        else {
          iVar7 = 6;
        }
      }
      else {
        iVar7 = 5;
      }
    }
    else {
      iVar7 = 7;
    }
  }
  else {
    iVar7 = 9;
  }
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x188),iVar7,pppplVar9,param_4,param_5,param_6,
                 param_7,param_8);
  cVar3 = *(char *)(param_1 + 0x275);
  if (*(int *)(param_1 + 0x264) == 1) {
    uVar24 = 3;
  }
  else if ((*(int *)(param_1 + 0x264) != 0) || (uVar24 = *(uint *)(param_1 + 0x268), 2 < uVar24)) {
    uVar24 = 2;
  }
  FUN_71032d6810(param_1 + 0x1e8,0,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  plVar22 = *(long **)(param_1 + 0x208);
  *(uint *)(plVar22 + 0x1f) = (uint)local_a0;
  if (plVar22 + 0x1f != &local_a0) {
    if ((ushort)local_94 == 0) {
      uVar16 = 0;
    }
    else {
      *(ushort *)((long)plVar22 + 0x104) = (ushort)local_94;
      if (local_94._2_2_ == 0) {
        uVar16 = 1;
      }
      else {
        *(short *)((long)plVar22 + 0x106) = local_94._2_2_;
        if (local_94._4_2_ == 0) {
          uVar16 = 2;
        }
        else {
          *(short *)(plVar22 + 0x21) = local_94._4_2_;
          if (local_94._6_2_ == 0) {
            uVar16 = 3;
          }
          else {
            *(short *)((long)plVar22 + 0x10a) = local_94._6_2_;
            if (local_8c == 0) {
              uVar16 = 4;
            }
            else {
              *(short *)((long)plVar22 + 0x10c) = local_8c;
              if (local_8a == 0) {
                uVar16 = 5;
              }
              else {
                *(short *)((long)plVar22 + 0x10e) = local_8a;
                if (local_88 == 0) {
                  uVar16 = 6;
                }
                else {
                  *(short *)(plVar22 + 0x22) = local_88;
                  if (local_86 == 0) {
                    uVar16 = 7;
                  }
                  else {
                    *(short *)((long)plVar22 + 0x112) = local_86;
                    if (local_84 == 0) {
                      uVar16 = 8;
                    }
                    else {
                      *(short *)((long)plVar22 + 0x114) = local_84;
                      if (local_82 == 0) {
                        uVar16 = 9;
                      }
                      else {
                        *(short *)((long)plVar22 + 0x116) = local_82;
                        uVar16 = 10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined2 *)((long)plVar22 + (ulong)uVar16 * 2 + 0x104) = 0;
    *(uint *)(plVar22 + 0x20) = uVar16;
    puVar18 = (ushort *)((long)plVar22 + 0x104);
    uVar16 = (uint)*puVar18;
    if (*puVar18 != 0) {
      do {
        puVar18 = puVar18 + 1;
        uVar23 = uVar23 * 0x89 ^ uVar16;
        uVar16 = (uint)*puVar18;
      } while (uVar16 != 0);
    }
    *(uint *)((long)plVar22 + 0xfc) = uVar23;
  }
  *(uint *)((long)plVar22 + 0x11c) = uVar24;
  if (plVar22 + 0x24 != (long *)(param_1 + 0x240)) {
    __src_00 = *(void **)(param_1 + 0x240);
    pvVar26 = *(void **)(param_1 + 0x248);
    __n_00 = (long ****)((long)pvVar26 - (long)__src_00);
    uVar12 = ((long)__n_00 >> 3) * -0x5555555555555555;
    lVar17 = plVar22[0x26];
    pvVar25 = (void *)plVar22[0x24];
    lVar19 = lVar17 - (long)pvVar25 >> 3;
    if (uVar12 < (ulong)(lVar19 * -0x5555555555555555) || uVar12 + lVar19 * 0x5555555555555555 == 0)
    {
      lVar17 = plVar22[0x25] - (long)pvVar25 >> 3;
      __src = (void *)((long)__src_00 + (plVar22[0x25] - (long)pvVar25));
      if (uVar12 < (ulong)(lVar17 * -0x5555555555555555) ||
          uVar12 + lVar17 * 0x5555555555555555 == 0) {
        __src = pvVar26;
      }
      __n = (long ****)((long)__src - (long)__src_00);
      __n_00 = pppplVar9;
      if (__n != (long ****)0x0) {
        __n_00 = __n;
        memmove(pvVar25,__src_00,(size_t)__n);
      }
      if (uVar12 < (ulong)(lVar17 * -0x5555555555555555) ||
          uVar12 + lVar17 * 0x5555555555555555 == 0) {
        pvVar25 = (void *)((long)pvVar25 + ((long)__n >> 3) * 8);
      }
      else {
        __n_00 = (long ****)((long)pvVar26 - (long)__src);
        pppplVar9 = __n_00;
        if ((long)__n_00 < 1) goto LAB_7101a84fd4;
        uVar12 = (ulong)__n_00 / 0x18;
        memcpy((void *)plVar22[0x25],__src,(size_t)__n_00);
        pvVar25 = (void *)(plVar22[0x25] + uVar12 * 0x18);
      }
    }
    else {
      if (pvVar25 != (void *)0x0) {
        plVar22[0x25] = (long)pvVar25;
        FUN_710392eb40((ulong)pvVar25);
        lVar17 = 0;
        plVar22[0x24] = 0;
        plVar22[0x25] = 0;
        plVar22[0x26] = 0;
      }
      if (0xaaaaaaaaaaaaaaa < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar20 = 0xaaaaaaaaaaaaaaa;
      if (((ulong)((lVar17 >> 3) * -0x5555555555555555) < 0x555555555555555) &&
         (uVar13 = (lVar17 >> 3) * 0x5555555555555556, uVar20 = uVar12, uVar12 <= uVar13)) {
        uVar20 = uVar13;
      }
      ppplVar14 = (long ***)(uVar20 * 0x18);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar25 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,param_4,param_5,param_6,param_7,
                                       param_8);
      if (pvVar25 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          pppplVar9 = &local_78;
          local_78 = ppplVar14;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar12 & 1) != 0) &&
             (pvVar25 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,param_4,param_5,param_6,
                                               param_7,param_8), pvVar25 != (void *)0x0))
          goto LAB_7101a84ee4;
        }
        pvVar25 = (void *)0x0;
      }
LAB_7101a84ee4:
      plVar22[0x24] = (long)pvVar25;
      plVar22[0x25] = (long)pvVar25;
      plVar22[0x26] = (long)((long)pvVar25 + uVar20 * 0x18);
      if ((long)__n_00 < 1) goto LAB_7101a84fd4;
      uVar12 = (ulong)__n_00 / 0x18;
      memcpy(pvVar25,__src_00,(size_t)__n_00);
      pvVar25 = (void *)((long)pvVar25 + uVar12 * 0x18);
    }
    plVar22[0x25] = (long)pvVar25;
    pppplVar9 = __n_00;
  }
LAB_7101a84fd4:
  *(uint *)(plVar22 + 0x27) = uVar2;
  lVar19 = **(long **)plVar22[0x1a];
  lVar17 = *(long *)(lVar19 + 0x10);
  if (cVar3 == '\0') {
    pcVar8 = "name_off";
  }
  else {
    FUN_7103778300(0x3f800000,lVar17,0x710425fcde);
    if ((uint)local_a0 == 0) {
      FUN_7103776910(&local_78,lVar19 + 8,(long ****)"set_txt_all",pppplVar9,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_710377a120((long)&local_78,"mnu_record_fighters_all",pppplVar9,param_4,param_5,param_6,
                     param_7,param_8);
      uVar12 = local_70;
      local_78 = (long ***)&PTR_FUN_710523d9a8;
      local_70 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      lVar17 = *(long *)(lVar19 + 0x10);
      pcVar8 = "name_all";
    }
    else {
      ppppbVar10 = (byte ****)&local_94;
      FUN_7103776910(&local_78,lVar19 + 8,(long ****)"set_txt_nam",pppplVar9,param_4,param_5,param_6
                     ,param_7,param_8);
      pppplVar9 = (long ****)0x1;
      FUN_710377a280((long)&local_78,(byte *)"mnu_record_fighters_player_nam",1);
      uVar12 = local_70;
      local_78 = (long ***)&PTR_FUN_710523d9a8;
      local_70 = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      lVar17 = *(long *)(lVar19 + 0x10);
      pcVar8 = "name_nam";
      param_4 = ppppbVar10;
    }
  }
  FUN_7103778300(0x3f800000,lVar17,(long)pcVar8);
  FUN_7101a87640((long)plVar22,extraout_x1,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  FUN_71037760f0(*(long *)**(undefined8 **)plVar22[0x1a],0);
  param_4 = (byte ****)0x1;
  param_3 = (long ****)0x0;
  FUN_7103783c10(plVar22 + 0x1b,0,0,1,param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)plVar22[0x1b] + 0x60))((long *)plVar22[0x1b],1);
  (**(code **)(*(long *)plVar22[0x1b] + 0x70))((long *)plVar22[0x1b],1);
  (**(code **)(*(long *)plVar22[0x1e] + 0x60))((long *)plVar22[0x1e],1);
  plVar22[1] = 0;
  plVar22[2] = 0;
  *(undefined4 *)((long)plVar22 + 0xb4) = 0;
  *(undefined8 *)((long)plVar22 + 0xac) = 0;
  *(undefined8 *)((long)plVar22 + 0xa4) = 0;
  *(undefined8 *)((long)plVar22 + 0x9c) = 0;
  *(undefined8 *)((long)plVar22 + 0x94) = 0;
  *(undefined8 *)((long)plVar22 + 0x8c) = 0;
  *(undefined8 *)((long)plVar22 + 0x84) = 0;
  *(undefined8 *)((long)plVar22 + 0x7c) = 0;
  *(undefined8 *)((long)plVar22 + 0x74) = 0;
  *(undefined8 *)((long)plVar22 + 0x6c) = 0;
  plVar22[0x17] = 0xffffffff;
  *(undefined4 *)(plVar22 + 0x18) = 0xffffffff;
  *(undefined1 *)((long)plVar22 + 0xc4) = 0;
  *(undefined4 *)(plVar22 + 0xd) = 1;
  FUN_7101a87d70(plVar22);
LAB_7101a85178:
  if (*(int *)(param_1 + 0x278) < 0x1e) {
    *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    FUN_710377cc80(*(long *)(param_1 + 0x198),1);
  }
  plVar22 = *(long **)(param_1 + 0x208);
  lVar17 = *(long *)**(undefined8 **)(param_1 + 0x188);
  FUN_7101a87d70(plVar22);
  if (*plVar22 != 0) {
    pcVar15 = (code *)plVar22[1];
    uVar12 = plVar22[2] & 1;
    if (uVar12 != 0 || pcVar15 != (code *)0x0) {
      plVar1 = (long *)(*plVar22 + (plVar22[2] >> 1));
      if (uVar12 != 0) {
        pcVar15 = *(code **)(pcVar15 + *plVar1);
      }
      (*pcVar15)(plVar1,lVar17 + 0x5f8);
    }
  }
  *(int *)((long)plVar22 + 0xbc) = *(int *)((long)plVar22 + 0xbc) + 1;
  lVar17 = *(long *)(param_1 + 0x208);
  uVar23 = *(uint *)(lVar17 + 0x138);
  uVar12 = (ulong)uVar23;
  if (uVar23 != uVar2) {
    param_3 = (long ****)0x1;
    param_4 = (byte ****)0x0;
    FUN_7103783c10((long *)(param_1 + 0x198),uVar23,1,0,param_5,param_6,param_7,param_8);
    lVar17 = *(long *)(param_1 + 0x208);
    uVar12 = extraout_x1_00;
  }
  if (*(int *)(lVar17 + 0xb8) != 0) {
    return;
  }
  if (*(uint *)(lVar17 + 0xb4) < 0x13) {
    *(undefined4 *)(lVar17 + (long)(int)*(uint *)(lVar17 + 0xb4) * 4 + 0x68) = 3;
    lVar17 = DAT_710532f8b8;
    if (*(char *)(param_1 + 0x1f0) != '\0') {
      fVar27 = (float)FUN_71033112b0(0x41900000,*(long *)(DAT_710532f8c0 + 8),0x10c14641ae);
      lVar17 = *(long *)(lVar17 + 8);
      iVar7 = *(int *)(lVar17 + 100);
      iVar6 = iVar7 + -1;
      *(int *)(lVar17 + 100) = iVar6;
      uVar12 = extraout_x1_01;
      if (iVar6 == 0 || iVar7 < 1) {
        if (fVar27 <= 1.0) {
          fVar27 = 1.0;
        }
        *(undefined4 *)(lVar17 + 0x50) = 0;
        *(undefined4 *)(lVar17 + 0x54) = *(undefined4 *)(lVar17 + 0x58);
        *(undefined4 *)(lVar17 + 0x5c) = 0;
        *(undefined4 *)(lVar17 + 100) = 0;
        *(float *)(lVar17 + 0x60) = 1.0 / fVar27;
      }
    }
    if (*(char *)(param_1 + 0x1f1) != '\0') {
      FUN_71032fffb0(*(long *)(DAT_710532f840 + 8),3);
      uVar12 = extraout_x1_02;
    }
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x188),uVar12,param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) &
         (1 << (ulong)(*(uint *)(param_1 + 0x1fc) & 0x1f) ^ 0xffffffffU);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x180),1);
    if (*(uint *)(param_1 + 0x164) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x164) * 4 + 0x118) = 3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

