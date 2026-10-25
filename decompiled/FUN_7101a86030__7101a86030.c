// addr:      7101a86030
// offset:    0x1a86030
// name:      FUN_7101a86030
// mangled:   
// signature: undefined __cdecl FUN_7101a86030(long param_1, undefined8 param_2, undefined8 param_3, ushort * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a86030(long param_1,undefined8 param_2,undefined8 param_3,ushort *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined8 *puVar2;
  long ****pppplVar3;
  ushort uVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined8 extraout_x1;
  char *pcVar9;
  long lVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  ushort *puVar13;
  byte ****ppppbVar14;
  long ****pppplVar15;
  undefined4 uVar16;
  ulong uVar17;
  long ***ppplVar18;
  undefined8 *puVar19;
  long ***ppplVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  int iVar27;
  ulong uVar28;
  uint *puVar29;
  int iVar30;
  int iVar31;
  long *plVar32;
  bool bVar33;
  uint uVar34;
  ulong uVar35;
  void *__src;
  size_t __n;
  undefined8 local_120;
  ulong local_118;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined8 local_a8;
  uint local_a0;
  ushort local_9c [14];
  undefined **local_80;
  ulong local_78;
  undefined4 local_6c [3];
  
  FUN_7103776640(&local_80,**(long **)(param_1 + 0x180) + 8,(byte ****)"set_parts_btn_toggle",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  iVar27 = *(int *)(param_1 + 0x268);
  if (iVar27 == 2) {
    pcVar8 = "disable";
LAB_7101a860b4:
    FUN_7103778300(0x3f800000,local_78,(long)pcVar8);
  }
  else {
    if (iVar27 == 1) {
      pcVar8 = "spirits_off";
      goto LAB_7101a860b4;
    }
    if (iVar27 == 0) {
      pcVar8 = "spirits_on";
      goto LAB_7101a860b4;
    }
  }
  local_a8 = 0xffffffff;
  local_a0 = 0;
  local_9c[0] = 0;
  if (*(char *)(param_1 + 0x274) != '\0') {
    lVar22 = *(long *)(param_1 + 0x228);
    uVar28 = (*(long *)(param_1 + 0x230) - lVar22 >> 2) * -0x71c71c71c71c71c7;
    uVar17 = (ulong)*(int *)(param_1 + 0x270);
    if (uVar28 < uVar17 || uVar28 - uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar29 = (uint *)(lVar22 + uVar17 * 0x24);
    uVar34 = *puVar29;
    local_a8 = (ulong)uVar34;
    if ((uint *)&local_a8 != puVar29) {
      uVar4 = *(ushort *)(lVar22 + uVar17 * 0x24 + 0xc);
      if (uVar4 == 0) {
        local_a0 = 0;
      }
      else {
        sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0xe);
        local_9c[0] = uVar4;
        if (sVar5 == 0) {
          local_a0 = 1;
        }
        else {
          local_9c[1] = sVar5;
          sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x10);
          if (sVar5 == 0) {
            local_a0 = 2;
          }
          else {
            local_9c[2] = sVar5;
            sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x12);
            if (sVar5 == 0) {
              local_a0 = 3;
            }
            else {
              local_9c[3] = sVar5;
              sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x14);
              if (sVar5 == 0) {
                local_a0 = 4;
              }
              else {
                local_9c[4] = sVar5;
                sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x16);
                if (sVar5 == 0) {
                  local_a0 = 5;
                }
                else {
                  local_9c[5] = sVar5;
                  sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x18);
                  if (sVar5 == 0) {
                    local_a0 = 6;
                  }
                  else {
                    local_9c[6] = sVar5;
                    sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x1a);
                    if (sVar5 == 0) {
                      local_a0 = 7;
                    }
                    else {
                      local_9c[7] = sVar5;
                      sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x1c);
                      if (sVar5 == 0) {
                        local_a0 = 8;
                      }
                      else {
                        local_9c[8] = sVar5;
                        sVar5 = *(short *)(lVar22 + uVar17 * 0x24 + 0x1e);
                        if (sVar5 == 0) {
                          local_a0 = 9;
                        }
                        else {
                          local_9c[9] = sVar5;
                          local_a0 = 10;
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
      local_9c[local_a0] = 0;
      uVar26 = (uint)local_9c[0];
      uVar21 = 0x811c9dc5;
      if (local_9c[0] != 0) {
        puVar13 = local_9c;
        do {
          puVar13 = puVar13 + 1;
          uVar21 = uVar21 * 0x89 ^ uVar26;
          uVar26 = (uint)*puVar13;
        } while (uVar26 != 0);
      }
      local_a8 = CONCAT44(uVar21,uVar34);
    }
  }
  FUN_7103776640(&local_b8,**(long **)(param_1 + 0x180) + 8,(byte ****)"set_part_name",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  if ((uint)local_a8 == 0) {
    FUN_7103778300(0x3f800000,local_b0,0x710425eddc);
  }
  else {
    puVar13 = local_9c;
    FUN_7103776910(&local_120,(long)&local_b8,(long ****)"set_txt_name_nam",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    param_3 = 1;
    FUN_710377a280((long)&local_120,(byte *)"mnu_record_fighters_nam",1);
    FUN_7103778300(0x3f800000,local_b0,0x710424ef46);
    uVar17 = local_118;
    local_120 = &PTR_FUN_710523d9a8;
    local_118 = 0;
    param_4 = puVar13;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
      param_4 = puVar13;
    }
  }
  FUN_7103776640(&local_c8,**(long **)(param_1 + 0x180) + 8,(byte ****)"set_part_btn_num",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_d8,(long)&local_c8,(long ****)"set_txt_records_num",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_d8,"mnu_record_fighters_records_%02d",
                 (ulong)*(uint *)(param_1 + 0x26c),param_4,param_5,param_6,param_7,param_8);
  ppppbVar14 = (byte ****)(ulong)*(uint *)(param_1 + 0x26c);
  pcVar8 = "mnu_record_fighters_help_records_%02d";
  lVar22 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  FUN_710176bcc0((uint *)&local_120,extraout_x1,"mnu_record_fighters_help_records_%02d",ppppbVar14,
                 param_5,param_6,param_7,param_8);
  FUN_7101af53d0(*(long *)(lVar22 + 0x80),(uint *)&local_120,(undefined **)pcVar8,ppppbVar14,param_5
                 ,param_6,param_7,param_8);
  if (0x27 < *(uint *)(param_1 + 0x26c)) {
LAB_7101a86980:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  switch((&DAT_7104544420)[(int)*(uint *)(param_1 + 0x26c)]) {
  case 0:
  case 1:
    lVar22 = *(long *)(**(long **)(param_1 + 0x180) + 0x10);
    pcVar9 = "unit_count";
    break;
  case 2:
  case 3:
    lVar22 = *(long *)(**(long **)(param_1 + 0x180) + 0x10);
    pcVar9 = "unit_percent";
    break;
  case 4:
    lVar22 = *(long *)(**(long **)(param_1 + 0x180) + 0x10);
    pcVar9 = "unit_time";
    break;
  case 5:
    lVar22 = *(long *)(**(long **)(param_1 + 0x180) + 0x10);
    pcVar9 = "unit_meter";
    break;
  default:
    lVar22 = *(long *)(**(long **)(param_1 + 0x180) + 0x10);
    pcVar9 = "unit";
  }
  FUN_7103778300(0x3f800000,lVar22,(long)pcVar9);
  lVar22 = *(long *)(param_1 + 0x248);
  uVar17 = *(ulong *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x264) == 1) {
    uVar34 = 3;
  }
  else if ((*(int *)(param_1 + 0x264) != 0) || (uVar34 = *(uint *)(param_1 + 0x268), 2 < uVar34)) {
    uVar34 = 2;
  }
  plVar23 = *(long **)(DAT_7105324ee0 + 8);
  *(ulong *)(param_1 + 0x248) = uVar17;
  uVar21 = *(uint *)(param_1 + 0x26c);
  uVar28 = uVar17;
  uVar6 = uVar17;
  if (*(char *)*DAT_7105314510 != '\0') goto LAB_7101a86874;
  uVar28 = plVar23[1] - *plVar23 >> 3;
  if ((ulong)(((long)(*(long *)(param_1 + 0x250) - uVar17) >> 3) * -0x5555555555555555) < uVar28) {
    if (0xaaaaaaaaaaaaaaa < uVar28) goto LAB_7101a86980;
    ppplVar18 = (long ***)(uVar28 * 0x18);
    if (ppplVar18 == (long ***)0x0) {
      ppplVar18 = (long ***)0x1;
    }
    lVar10 = FUN_710392e290(0x10,ppplVar18,(long ****)pcVar8,ppppbVar14,param_5,param_6,param_7,
                            param_8);
    if (lVar10 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6c[0] = 0;
        pppplVar11 = (long ****)&local_120;
        local_120 = (undefined **)ppplVar18;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
        if (((uVar6 & 1) != 0) &&
           (lVar10 = FUN_710392e290(0x10,ppplVar18,pppplVar11,ppppbVar14,param_5,param_6,param_7,
                                    param_8), lVar10 != 0)) goto LAB_7101a86548;
      }
      lVar10 = 0;
    }
LAB_7101a86548:
    *(long *)(param_1 + 0x240) = lVar10;
    *(long *)(param_1 + 0x248) = lVar10;
    *(ulong *)(param_1 + 0x250) = lVar10 + uVar28 * 0x18;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
  }
  pppplVar11 = (long ****)*plVar23;
  pppplVar3 = (long ****)plVar23[1];
  if (pppplVar11 != pppplVar3) {
    uVar28 = (ulong)uVar34;
    if (2 < uVar34) {
      uVar28 = 3;
    }
    do {
      ppplVar18 = *pppplVar11;
      ppppbVar14 = (byte ****)(ulong)uVar34;
      pppplVar15 = (long ****)(ulong)uVar21;
      pppplVar12 = pppplVar11;
      uVar6 = FUN_7101a89b20((long)plVar23,(uint *)&local_a8,pppplVar11,uVar34,uVar21);
      if (*(char *)*DAT_7105314510 == '\0') {
        puVar19 = (undefined8 *)(**(long **)((char *)*DAT_7105314510 + 0x58) + 8);
        puVar2 = puVar19 + (local_a8 & 0xffffffff);
        if (0x3c < (uint)local_a8) {
          puVar2 = puVar19;
        }
        if ((uint)local_a8 == 0xffffffff) {
          puVar2 = puVar19;
        }
        plVar32 = (long *)*puVar2;
        uVar35 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                (undefined1 *)*pppplVar11);
        uVar7 = uVar35 & 0xffffffff;
        if (0x61 < (uint)uVar35) {
          uVar7 = 0x62;
        }
        bVar33 = 0 < *(int *)(*(long *)**(undefined8 **)
                                         (**(long **)(*plVar32 + uVar7 * 8) + uVar28 * 8) + 0x30);
      }
      else {
        bVar33 = false;
      }
      puVar19 = *(undefined8 **)(param_1 + 0x248);
      if (puVar19 == *(undefined8 **)(param_1 + 0x250)) {
        __src = *(void **)(param_1 + 0x240);
        __n = (long)puVar19 - (long)__src;
        uVar35 = 0xaaaaaaaaaaaaaaa;
        uVar7 = ((long)__n >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (long)*(undefined8 **)(param_1 + 0x250) - (long)__src >> 3;
        if ((ulong)(lVar10 * -0x5555555555555555) < 0x555555555555555) {
          uVar24 = lVar10 * 0x5555555555555556;
          uVar35 = uVar7;
          if (uVar7 <= uVar24) {
            uVar35 = uVar24;
          }
          if (uVar35 != 0) goto LAB_7101a866f8;
LAB_7101a86754:
          lVar10 = 0;
        }
        else {
LAB_7101a866f8:
          ppplVar20 = (long ***)(uVar35 * 0x18);
          if (ppplVar20 == (long ***)0x0) {
            ppplVar20 = (long ***)0x1;
          }
          lVar10 = FUN_710392e290(0x10,ppplVar20,pppplVar12,ppppbVar14,pppplVar15,param_6,param_7,
                                  param_8);
          if (lVar10 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              pppplVar12 = (long ****)&local_120;
              local_120 = (undefined **)ppplVar20;
              uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar7 & 1) != 0) &&
                 (lVar10 = FUN_710392e290(0x10,ppplVar20,pppplVar12,ppppbVar14,pppplVar15,param_6,
                                          param_7,param_8), lVar10 != 0)) goto LAB_7101a86758;
            }
            goto LAB_7101a86754;
          }
        }
LAB_7101a86758:
        puVar19 = (undefined8 *)(lVar10 + ((long)__n >> 3) * 8);
        *puVar19 = ppplVar18;
        *(int *)(puVar19 + 1) = (int)uVar6;
        *(undefined4 *)((long)puVar19 + 0xc) = 0;
        *(bool *)(puVar19 + 2) = bVar33;
        *(uint *)((long)puVar19 + 0x11) = (uint)local_120;
        lVar25 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        *(undefined2 *)((long)puVar19 + 0x15) = local_120._4_2_;
        *(undefined1 *)((long)puVar19 + 0x17) = local_120._6_1_;
        if (0 < (long)__n) {
          memcpy(puVar19 + ((lVar25 >> 2) - (lVar25 >> 0x3f)) * 3,__src,__n);
        }
        *(undefined8 **)(param_1 + 0x240) = puVar19 + ((lVar25 >> 2) - (lVar25 >> 0x3f)) * 3;
        *(undefined8 **)(param_1 + 0x248) = puVar19 + 3;
        *(ulong *)(param_1 + 0x250) = lVar10 + uVar35 * 0x18;
        if (__src != (void *)0x0) {
          FUN_710392eb40((ulong)__src);
        }
      }
      else {
        *puVar19 = ppplVar18;
        *(int *)(puVar19 + 1) = (int)uVar6;
        *(undefined4 *)((long)puVar19 + 0xc) = 0;
        *(bool *)(puVar19 + 2) = bVar33;
        *(undefined1 *)((long)puVar19 + 0x17) = local_120._6_1_;
        *(undefined2 *)((long)puVar19 + 0x15) = local_120._4_2_;
        *(uint *)((long)puVar19 + 0x11) = (uint)local_120;
        *(long *)(param_1 + 0x248) = *(long *)(param_1 + 0x248) + 0x18;
      }
      pppplVar11 = pppplVar11 + 1;
    } while (pppplVar3 != pppplVar11);
  }
  local_120 = (undefined **)FUN_7101a88fd0;
  FUN_7101a89060(*(undefined8 **)(param_1 + 0x240),*(undefined8 **)(param_1 + 0x248),&local_120);
  uVar28 = *(ulong *)(param_1 + 0x240);
  uVar6 = *(ulong *)(param_1 + 0x248);
  if (uVar28 != uVar6) {
    iVar27 = 1;
    iVar30 = 1;
    iVar31 = 0;
    do {
      piVar1 = (int *)(uVar28 + 8);
      if (*piVar1 != iVar31) {
        iVar30 = iVar27;
      }
      iVar27 = iVar27 + 1;
      *(int *)(uVar28 + 0xc) = iVar30;
      uVar28 = uVar28 + 0x18;
      iVar31 = *piVar1;
    } while (uVar6 != uVar28);
    uVar28 = *(ulong *)(param_1 + 0x240);
    uVar6 = *(ulong *)(param_1 + 0x248);
  }
LAB_7101a86874:
  lVar10 = ((long)(uVar6 - uVar28) >> 3) * -0x5555555555555555;
  if (lVar10 + ((long)(lVar22 - uVar17) >> 3) * 0x5555555555555555 != 0) {
    FUN_7103783690((long *)(param_1 + 0x198),(int)lVar10);
  }
  uVar16 = 0x1e;
  if (*(int *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x180) + 0x600) + 0x4a0) < 0x10) {
    uVar16 = 0;
  }
  *(undefined4 *)(param_1 + 0x278) = uVar16;
  FUN_710377cc80(*(long *)(param_1 + 0x198),1);
  uVar17 = local_d0;
  local_d8 = &PTR_FUN_710523d9a8;
  local_d0 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_c0;
  local_c8 = &PTR_FUN_710523d988;
  local_c0 = 0;
  if (uVar17 != 0) {
    uVar28 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_b0;
  local_b8 = &PTR_FUN_710523d988;
  local_b0 = 0;
  if (uVar17 != 0) {
    uVar28 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar17 != 0) {
    uVar28 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    FUN_710392eb40(uVar17);
  }
  return;
}

