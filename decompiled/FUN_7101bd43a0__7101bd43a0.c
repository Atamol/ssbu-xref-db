// addr:      7101bd43a0
// offset:    0x1bd43a0
// name:      FUN_7101bd43a0
// mangled:   
// signature: undefined __cdecl FUN_7101bd43a0(long * * * * * * * * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bd43a0(long ********param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long ********pppppppplVar3;
  long ********pppppppplVar4;
  long *plVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long *********ppppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  undefined8 uVar14;
  undefined **ppuVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  long **pplVar18;
  long ********pppppppplVar19;
  long ****pppplVar20;
  long lVar21;
  long ******pppppplVar22;
  int *piVar23;
  long *****ppppplVar24;
  long ******pppppplVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  long ********pppppppplVar29;
  long ********pppppppplVar30;
  byte ****ppppbVar31;
  undefined1 auVar32 [16];
  long ********local_100;
  long ********local_f8;
  long ********pppppppplStack_f0;
  long ********local_e8;
  long ********local_e0;
  long ********pppppppplStack_d8;
  undefined **local_d0;
  ulong local_c8;
  undefined **local_c0;
  ulong local_b8;
  long *********local_b0;
  long *********local_a8;
  long *********local_a0;
  undefined **local_98;
  long *local_90;
  undefined **local_88;
  long *local_80;
  
  *(short *)(param_1 + 0x36) = (short)param_3;
  if (param_1[0x30] == (long *******)0x0) {
    return;
  }
  if (*(uint *)(param_1 + 0x25) < 2) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1c4) != 0) {
    return;
  }
  if (param_1[3] == param_1[2]) goto LAB_7101bd5e70;
  pppplVar17 = ***param_1[2];
  pplVar18 = pppplVar17[2][1];
  ppppbVar16 = param_4;
  if (param_2[1] == *param_2) {
    if (pplVar18 != (long **)0x0) {
      pcVar13 = "dev_count_0";
LAB_7101bd4468:
      FUN_71037780e0(&local_b0,(long)(pppplVar17 + 1),(long ****)pcVar13,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      ppppppppplVar9 = local_a8;
      if (*local_a8 == (long ********)0x0) {
        local_b0 = (long *********)&PTR_FUN_710523d9e8;
        local_a8 = (long *********)0x0;
        if (ppppppppplVar9 == (long *********)0x0) goto LAB_7101bd44b8;
      }
      else if (local_a8[1] != (long ********)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_b0);
      }
      local_a8 = (long *********)0x0;
      local_b0 = (long *********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)ppppppppplVar9);
    }
  }
  else if (pplVar18 != (long **)0x0) {
    pcVar13 = "dev_count_1";
    goto LAB_7101bd4468;
  }
LAB_7101bd44b8:
  if (0 < (int)((ulong)(param_2[1] - *param_2) >> 5) * -0x3d70a3d7 +
          (int)((ulong)((long)param_1[0x34] - (long)param_1[0x33]) >> 5) * 0x3d70a3d7) {
    if (param_1[3] == param_1[2]) goto LAB_7101bd5e70;
    pppplVar17 = ***param_1[2];
    if (pppplVar17[2][1] != (long **)0x0) {
      FUN_71037780e0(&local_b0,(long)(pppplVar17 + 1),(long ****)"dev_count_up",param_3,ppppbVar16,
                     param_5,param_6,param_7,param_8);
      ppppppppplVar9 = local_a8;
      if (*local_a8 == (long ********)0x0) {
        local_b0 = (long *********)&PTR_FUN_710523d9e8;
        local_a8 = (long *********)0x0;
        if (ppppppppplVar9 == (long *********)0x0) goto LAB_7101bd4568;
      }
      else if (local_a8[1] != (long ********)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_b0);
      }
      local_a8 = (long *********)0x0;
      local_b0 = (long *********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)ppppppppplVar9);
    }
  }
LAB_7101bd4568:
  if (param_1[3] == param_1[2]) goto LAB_7101bd5e70;
  pppplVar17 = ***param_1[2];
  if (pppplVar17[2][1] == (long **)0x0) {
    return;
  }
  pppplVar17 = pppplVar17 + 1;
  FUN_7103776910(&local_98,(long)pppplVar17,(long ****)"set_text_dev_count",param_3,ppppbVar16,
                 param_5,param_6,param_7,param_8);
  if (*local_90 != 0) {
    ppppbVar16 = (byte ****)((param_2[1] - *param_2 >> 5) * -0x70a3d70a3d70a3d7);
    param_3 = (long ****)0x1;
    FUN_710377a280((long)&local_98,(byte *)"mnu_local_display_rm_n",1);
  }
  local_a8 = (long *********)0x0;
  local_a0 = (long *********)0x0;
  local_b0 = (long *********)0x0;
  puVar1 = (undefined8 *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  pppppppplVar19 = (long ********)((long)puVar2 - (long)puVar1);
  if (pppppppplVar19 != (long ********)0x0) {
    if (0x51eb851eb851eb < (ulong)(((long)pppppppplVar19 >> 5) * -0x70a3d70a3d70a3d7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    ppppppppplVar9 =
         (long *********)
         FUN_710392e290(0x10,pppppppplVar19,param_3,ppppbVar16,param_5,param_6,param_7,param_8);
    if (ppppppppplVar9 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_100 = (long ********)((ulong)local_100 & 0xffffffff00000000);
        ppppppppplVar9 = &local_e8;
        local_e8 = pppppppplVar19;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
        if (((uVar10 & 1) != 0) &&
           (ppppppppplVar9 =
                 (long *********)
                 FUN_710392e290(0x10,pppppppplVar19,(long ****)ppppppppplVar9,ppppbVar16,param_5,
                                param_6,param_7,param_8), ppppppppplVar9 != (long *********)0x0))
        goto LAB_7101bd4680;
      }
      ppppppppplVar9 = (long *********)0x0;
    }
LAB_7101bd4680:
    local_a0 = ppppppppplVar9 + ((long)pppppppplVar19 >> 5) * 4;
    local_b0 = ppppppppplVar9;
    for (; local_a8 = ppppppppplVar9, puVar1 != puVar2; puVar1 = puVar1 + 100) {
      pppppppplVar19 = (long ********)*puVar1;
      *(undefined1 *)(ppppppppplVar9 + 1) = *(undefined1 *)(puVar1 + 1);
      *ppppppppplVar9 = pppppppplVar19;
      FUN_7101bd5ec0(ppppppppplVar9 + 2,puVar1 + 2);
      FUN_7101bd60a0((long)(ppppppppplVar9 + 0x24),(long)(puVar1 + 0x24));
      *(undefined1 *)(ppppppppplVar9 + 99) = *(undefined1 *)(puVar1 + 99);
      ppppppppplVar9 = local_a8 + 100;
    }
  }
  ppuVar15 = (undefined **)&local_e8;
  local_e8 = param_1;
  FUN_7101bd6230(local_b0,local_a8,(long *)ppuVar15);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar15 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar8 = DAT_7105306480;
  if (DAT_7105306480 == 0) {
    ppppppplVar11 = param_1[0x30];
    uVar10 = ((long)param_1[0x34] - (long)param_1[0x33] >> 5) * -0x70a3d70a3d70a3d7;
    if (uVar10 < (ulong)(long)(int)((ulong)((long)ppppppplVar11[0x31] - (long)ppppppplVar11[0x30])
                                   >> 3)) {
      iVar8 = *(int *)((long)ppppppplVar11 + 0x254);
joined_r0x007101bd4800:
      if (((0 < iVar8) && (uVar27 = (long)iVar8 - 1, uVar27 <= uVar10 && uVar10 - uVar27 != 0)) &&
         (iVar8 = *(int *)(param_1[0x33] + uVar27 * 100), iVar8 != 0)) goto LAB_7101bd4754;
    }
    else if (param_1[0x2f] != (long *******)0x0) {
      iVar8 = *(int *)((long)param_1[0x2f] + 0x2a4);
      goto joined_r0x007101bd4800;
    }
LAB_7101bd4820:
    iVar8 = 0;
  }
  else {
LAB_7101bd4754:
    if (local_a8 == local_b0) goto LAB_7101bd4820;
    iVar26 = *(int *)local_b0;
    ppppppppplVar9 = local_b0;
    while (iVar26 != iVar8) {
      ppppppppplVar9 = ppppppppplVar9 + 100;
      if (local_a8 == ppppppppplVar9) goto LAB_7101bd4820;
      iVar26 = *(int *)ppppppppplVar9;
    }
    if (ppppppppplVar9 == local_a8) goto LAB_7101bd4820;
    iVar8 = (int)((ulong)((long)ppppppppplVar9 - (long)local_b0) >> 5) * -0x3d70a3d7 + 1;
  }
  if (((ulong)param_4 & 1) != 0) {
    DAT_7105306480 = 0;
  }
  iVar26 = *(int *)(param_1 + 0x37);
  bVar6 = iVar8 == iVar26;
  pppppppplVar19 = param_1 + 0x30;
  if ((iVar8 == 0) || (iVar26 < 1)) {
    if ((iVar8 == 0) && (iVar26 == 0)) {
      if (*(int *)((long)*pppppppplVar19 + 0x254) != 0) {
        ppuVar15 = (undefined **)0x0;
        FUN_7103771a80((long *)pppppppplVar19,0,0);
      }
      if (*(int *)((long)param_1[0x2f] + 0x2a4) == 0) {
        bVar6 = true;
      }
      else {
        ppppbVar16 = (byte ****)0x1;
        ppuVar15 = (undefined **)0x0;
        bVar6 = true;
        FUN_7103783c10((long *)(param_1 + 0x2f),0,0,1,param_5,param_6,param_7,param_8);
      }
    }
  }
  else {
    uVar10 = (ulong)(iVar8 - 1);
    uVar27 = ((long)local_a8 - (long)local_b0 >> 5) * -0x70a3d70a3d70a3d7;
    if (uVar27 < uVar10 || uVar27 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar28 = ((long)param_1[0x34] - (long)param_1[0x33] >> 5) * -0x70a3d70a3d70a3d7;
    uVar27 = (long)iVar26 - 1;
    if (uVar28 < uVar27 || uVar28 - uVar27 == 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    bVar6 = *(int *)(local_b0 + uVar10 * 100) == *(int *)(param_1[0x33] + uVar27 * 100);
  }
  if ((long **********)(param_1 + 0x33) != &local_b0) {
    ppuVar15 = (undefined **)local_a8;
    FUN_7101bd6db0(param_1 + 0x33,(long ****)local_b0,(long ****)local_a8,ppppbVar16,param_5,param_6
                   ,param_7,param_8);
  }
  ppppppplVar11 = param_1[0x30];
  if ((ulong)(((long)param_1[0x34] - (long)param_1[0x33] >> 5) * -0x70a3d70a3d70a3d7) <
      (ulong)(long)(int)((ulong)((long)ppppppplVar11[0x31] - (long)ppppppplVar11[0x30]) >> 3)) {
    (*(code *)(*param_1[0x2f])[0xe])(param_1[0x2f],0);
    (*(code *)(*param_1[0x2f])[0xc])(param_1[0x2f],0);
    if (param_1[3] == param_1[2]) {
LAB_7101bd5e70:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    pppplVar20 = ***param_1[2];
    if (pppplVar20[2][1] != (long **)0x0) {
      FUN_71037780e0(&local_e8,(long)(pppplVar20 + 1),(long ****)"list_ptn_normal",ppuVar15,
                     ppppbVar16,param_5,param_6,param_7,param_8);
      pppppppplVar30 = local_e0;
      if (*local_e0 == (long *******)0x0) {
        local_e8 = (long ********)&PTR_FUN_710523d9e8;
        local_e0 = (long ********)0x0;
        if (pppppppplVar30 == (long ********)0x0) goto LAB_7101bd4a98;
      }
      else if (local_e0[1] != (long *******)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_e8);
      }
      local_e0 = (long ********)0x0;
      local_e8 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)pppppppplVar30);
    }
LAB_7101bd4a98:
    ppppppplVar11 = *pppppppplVar19;
    if (0 < (int)((ulong)((long)ppppppplVar11[0x31] - (long)ppppppplVar11[0x30]) >> 3)) {
      uVar10 = 0;
LAB_7101bd4ac8:
      ppuVar15 = (undefined **)(uVar10 & 0xffffffff);
      FUN_7103771d60(&local_100,(long)ppppppplVar11,(long ****)ppuVar15,ppppbVar16,param_5,param_6,
                     param_7,param_8);
      pppppppplVar30 = local_f8;
      if (*local_f8 == (long *******)0x0) goto LAB_7101bd4db4;
      FUN_710377ad90(&local_88,(long)*local_f8,(long ****)ppuVar15,ppppbVar16,param_5,param_6,
                     param_7,param_8);
      plVar5 = local_80;
      lVar21 = *local_80;
      if (lVar21 == 0) {
joined_r0x007101bd4da8:
        local_80 = (long *)0x0;
        local_88 = &PTR_FUN_710523d9a8;
        if (plVar5 == (long *)0x0) goto LAB_7101bd4db4;
      }
      else {
        ppppppplVar11 = *pppppppplVar30;
        if (uVar10 <= (ulong)(((long)param_1[0x34] - (long)param_1[0x33] >> 5) * -0x70a3d70a3d70a3d7
                             )) {
          if (ppppppplVar11 == (long *******)0x0) {
LAB_7101bd4bd0:
            *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) | 1;
          }
          else {
            uVar7 = 1;
            (*(code *)(*ppppppplVar11)[0x3f])(ppppppplVar11,1);
            uVar27 = (*(code *)(*ppppppplVar11)[0x40])(ppppppplVar11);
            if ((uVar27 & 1) != 0) {
              uVar7 = (*(code *)(*ppppppplVar11)[0x42])(ppppppplVar11);
              uVar7 = uVar7 ^ 1;
            }
            ppuVar15 = (undefined **)0x0;
            (*(code *)(*ppppppplVar11)[0x71])(ppppppplVar11,uVar7 & 1);
            lVar21 = *plVar5;
            if (lVar21 != 0) goto LAB_7101bd4bd0;
          }
          pppppplVar22 = (*pppppppplVar19)[0x30];
          uVar27 = (long)(*pppppppplVar19)[0x31] - (long)pppppplVar22;
          if ((int)(uVar27 >> 3) <= (int)uVar10) goto joined_r0x007101bd4da8;
          if ((ulong)((long)uVar27 >> 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          ppppbVar31 = (byte ****)pppppplVar22[uVar10][0x11];
          if (ppppbVar31 != (byte ****)0x0) {
            if (param_1[3] == param_1[2]) goto LAB_7101bd5e80;
            FUN_7103776640(&local_e8,(long)(***param_1[2] + 1),ppppbVar31,ppuVar15,ppppbVar16,
                           param_5,param_6,param_7,param_8);
            ppuVar15 = (undefined **)&local_e8;
            FUN_7101bd7000((long)param_1,(int)uVar10,(long *********)ppuVar15,ppppbVar16,param_5,
                           param_6,param_7,param_8);
            pppppppplVar3 = local_e0;
            local_e8 = (long ********)&PTR_FUN_710523d988;
            local_e0 = (long ********)0x0;
            if (pppppppplVar3 != (long ********)0x0) {
              ppppppplVar11 = pppppppplVar3[3];
              pppppppplVar3[2] = (long *******)&PTR_FUN_710523d9a8;
              pppppppplVar3[3] = (long *******)0x0;
              if (ppppppplVar11 != (long *******)0x0) {
                FUN_710392eb40((ulong)ppppppplVar11);
              }
              FUN_710392eb40((ulong)pppppppplVar3);
            }
            FUN_7103776640(&local_c0,(long)pppplVar17,ppppbVar31,ppuVar15,ppppbVar16,param_5,param_6
                           ,param_7,param_8);
            uVar27 = local_b8;
            if (*(long *)(local_b8 + 8) != 0) {
              FUN_7103776640(&local_d0,(long)&local_c0,(byte ****)"set_parts_cursor_dec",ppuVar15,
                             ppppbVar16,param_5,param_6,param_7,param_8);
              uVar28 = local_c8;
              if (*(long *)(local_c8 + 8) != 0) {
                FUN_71037780e0(&local_e8,(long)&local_d0,(long ****)"select_off",ppuVar15,ppppbVar16
                               ,param_5,param_6,param_7,param_8);
                pppppppplVar3 = local_e0;
                if (*local_e0 == (long *******)0x0) {
                  local_e8 = (long ********)&PTR_FUN_710523d9e8;
                  local_e0 = (long ********)0x0;
                  if (pppppppplVar3 == (long ********)0x0) goto LAB_7101bd4d54;
                }
                else if (local_e0[1] != (long *******)0x0) {
                  FUN_710377aee0(0x3f800000,(long)&local_e8);
                }
                local_e0 = (long ********)0x0;
                local_e8 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)pppppppplVar3);
              }
LAB_7101bd4d54:
              local_d0 = &PTR_FUN_710523d988;
              local_c8 = 0;
              if (uVar28 != 0) {
                uVar12 = *(ulong *)(uVar28 + 0x18);
                *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar28 + 0x18) = 0;
                if (uVar12 != 0) {
                  FUN_710392eb40(uVar12);
                }
                FUN_710392eb40(uVar28);
              }
            }
            local_c0 = &PTR_FUN_710523d988;
            local_b8 = 0;
            if (uVar27 != 0) {
              uVar28 = *(ulong *)(uVar27 + 0x18);
              *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar27 + 0x18) = 0;
              if (uVar28 != 0) {
                FUN_710392eb40(uVar28);
              }
              FUN_710392eb40(uVar27);
            }
          }
          goto joined_r0x007101bd4da8;
        }
        if (ppppppplVar11 == (long *******)0x0) {
LAB_7101bd4d18:
          *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
          goto joined_r0x007101bd4da8;
        }
        (*(code *)(*ppppppplVar11)[0x3f])(ppppppplVar11,0);
        uVar27 = (*(code *)(*ppppppplVar11)[0x40])(ppppppplVar11);
        if ((uVar27 & 1) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = (*(code *)(*ppppppplVar11)[0x42])(ppppppplVar11);
          uVar7 = uVar7 ^ 1;
        }
        ppuVar15 = (undefined **)0x0;
        (*(code *)(*ppppppplVar11)[0x71])(ppppppplVar11,uVar7 & 1);
        lVar21 = *plVar5;
        if (lVar21 != 0) goto LAB_7101bd4d18;
      }
      local_80 = (long *)0x0;
      local_88 = &PTR_FUN_710523d9a8;
      FUN_710392eb40((ulong)plVar5);
LAB_7101bd4db4:
      local_100 = (long ********)&PTR_FUN_710523d9c8;
      local_f8 = (long ********)0x0;
      if (pppppppplVar30 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar30);
      }
      ppppppplVar11 = *pppppppplVar19;
      uVar10 = uVar10 + 1;
      if ((long)(int)((ulong)((long)ppppppplVar11[0x31] - (long)ppppppplVar11[0x30]) >> 3) <=
          (long)uVar10) goto LAB_7101bd4de0;
      goto LAB_7101bd4ac8;
    }
LAB_7101bd4de0:
    if (iVar8 == *(int *)(param_1 + 0x37)) {
      if (bVar6) {
        uVar10 = (*(code *)(*param_1[0x31])[0xf])();
        ppppppplVar11 = param_1[0x30];
        if ((uVar10 & 1) == 0) {
LAB_7101bd5474:
          uVar10 = (*(code *)(*ppppppplVar11)[0xf])();
          goto joined_r0x007101bd54a4;
        }
        if (*(int *)((long)ppppppplVar11 + 0x254) != iVar8) {
          ppuVar15 = (undefined **)0x0;
          FUN_7103771a80((long *)pppppppplVar19,iVar8,0);
          ppppppplVar11 = *pppppppplVar19;
        }
        pppppplVar22 = ppppppplVar11[0x30];
        uVar10 = (long)ppppppplVar11[0x31] - (long)pppppplVar22;
        iVar26 = (int)(uVar10 >> 3);
joined_r0x007101bd53f8:
        if (iVar8 < iVar26) {
          if ((ulong)((long)uVar10 >> 3) <= (ulong)(long)iVar8) {
LAB_7101bd5e78:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((byte ****)pppppplVar22[iVar8][0x11] != (byte ****)0x0) {
            FUN_7103776640(&local_100,(long)pppplVar17,(byte ****)pppppplVar22[iVar8][0x11],ppuVar15
                           ,ppppbVar16,param_5,param_6,param_7,param_8);
            pppppppplVar30 = local_f8;
            if (local_f8[1] != (long *******)0x0) {
              FUN_71037780e0(&local_e8,(long)&local_100,(long ****)"selected_on",ppuVar15,ppppbVar16
                             ,param_5,param_6,param_7,param_8);
              pppppppplVar3 = local_e0;
              if (*local_e0 == (long *******)0x0) {
                local_e8 = (long ********)&PTR_FUN_710523d9e8;
                local_e0 = (long ********)0x0;
                if (pppppppplVar3 != (long ********)0x0) goto LAB_7101bd5ad8;
              }
              else {
                if (local_e0[1] != (long *******)0x0) {
                  FUN_710377aee0(0x3f800000,(long)&local_e8);
                }
LAB_7101bd5ad8:
                local_e0 = (long ********)0x0;
                local_e8 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)pppppppplVar3);
              }
              FUN_7103776640(&local_88,(long)&local_100,(byte ****)"set_parts_cursor_dec",ppuVar15,
                             ppppbVar16,param_5,param_6,param_7,param_8);
              plVar5 = local_80;
              if (local_80[1] != 0) {
                FUN_71037780e0(&local_e8,(long)&local_88,(long ****)"select_on",ppuVar15,ppppbVar16,
                               param_5,param_6,param_7,param_8);
                pppppppplVar3 = local_e0;
                if (*local_e0 == (long *******)0x0) {
                  local_e8 = (long ********)&PTR_FUN_710523d9e8;
                  local_e0 = (long ********)0x0;
                  if (pppppppplVar3 == (long ********)0x0) goto LAB_7101bd5b70;
                }
                else if (local_e0[1] != (long *******)0x0) {
                  FUN_710377aee0(0x3f800000,(long)&local_e8);
                }
                local_e0 = (long ********)0x0;
                local_e8 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)pppppppplVar3);
              }
LAB_7101bd5b70:
              local_88 = &PTR_FUN_710523d988;
              local_80 = (long *)0x0;
              if (plVar5 != (long *)0x0) {
                uVar10 = plVar5[3];
                plVar5[2] = (long)&PTR_FUN_710523d9a8;
                plVar5[3] = 0;
                if (uVar10 != 0) {
                  FUN_710392eb40(uVar10);
                }
                FUN_710392eb40((ulong)plVar5);
              }
            }
            local_100 = (long ********)&PTR_FUN_710523d988;
            local_f8 = (long ********)0x0;
            if (pppppppplVar30 != (long ********)0x0) {
              ppppppplVar11 = pppppppplVar30[3];
              pppppppplVar30[2] = (long *******)&PTR_FUN_710523d9a8;
              pppppppplVar30[3] = (long *******)0x0;
              if (ppppppplVar11 != (long *******)0x0) {
                FUN_710392eb40((ulong)ppppppplVar11);
              }
              FUN_710392eb40((ulong)pppppppplVar30);
            }
            ppppppplVar11 = *pppppppplVar19;
          }
        }
        ppppplVar24 = (*ppppppplVar11)[0xe];
        uVar14 = 0;
        goto LAB_7101bd5bf0;
      }
      (*(code *)(*ppppppplVar11)[0xe])(ppppppplVar11,1);
      ppuVar15 = (undefined **)0x0;
      FUN_7103771a80((long *)pppppppplVar19,iVar8,0);
    }
    else {
      (*(code *)(*ppppppplVar11)[0xe])(ppppppplVar11,1);
      ppuVar15 = (undefined **)0x0;
      FUN_7103771a80((long *)pppppppplVar19,iVar8,0);
      ppppppplVar11 = *pppppppplVar19;
      pppppplVar22 = ppppppplVar11[0x30];
      pppppplVar25 = ppppppplVar11[0x31];
      if (0 < (int)((ulong)((long)pppppplVar25 - (long)pppppplVar22) >> 3)) {
        uVar10 = 0;
        do {
          if ((long)uVar10 < (long)(int)((ulong)((long)pppppplVar25 - (long)pppppplVar22) >> 3)) {
            if ((ulong)((long)pppppplVar25 - (long)pppppplVar22 >> 3) <= uVar10)
            goto LAB_7101bd5e78;
            if ((byte ****)pppppplVar22[uVar10][0x11] != (byte ****)0x0) {
              FUN_7103776640(&local_100,(long)pppplVar17,(byte ****)pppppplVar22[uVar10][0x11],
                             ppuVar15,ppppbVar16,param_5,param_6,param_7,param_8);
              pppppppplVar30 = local_f8;
              if (local_f8[1] != (long *******)0x0) {
                FUN_71037780e0(&local_e8,(long)&local_100,(long ****)"selected_off",ppuVar15,
                               ppppbVar16,param_5,param_6,param_7,param_8);
                pppppppplVar3 = local_e0;
                if (*local_e0 == (long *******)0x0) {
                  local_e8 = (long ********)&PTR_FUN_710523d9e8;
                  local_e0 = (long ********)0x0;
                  if (pppppppplVar3 == (long ********)0x0) goto LAB_7101bd4f5c;
                }
                else if (local_e0[1] != (long *******)0x0) {
                  FUN_710377aee0(0x3f800000,(long)&local_e8);
                }
                local_e0 = (long ********)0x0;
                local_e8 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)pppppppplVar3);
              }
LAB_7101bd4f5c:
              local_100 = (long ********)&PTR_FUN_710523d988;
              local_f8 = (long ********)0x0;
              if (pppppppplVar30 != (long ********)0x0) {
                ppppppplVar11 = pppppppplVar30[3];
                pppppppplVar30[2] = (long *******)&PTR_FUN_710523d9a8;
                pppppppplVar30[3] = (long *******)0x0;
                if (ppppppplVar11 != (long *******)0x0) {
                  FUN_710392eb40((ulong)ppppppplVar11);
                }
                FUN_710392eb40((ulong)pppppppplVar30);
              }
              ppppppplVar11 = *pppppppplVar19;
            }
          }
          pppppplVar22 = ppppppplVar11[0x30];
          pppppplVar25 = ppppppplVar11[0x31];
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)(int)((ulong)((long)pppppplVar25 - (long)pppppplVar22) >> 3));
      }
      if (bVar6) {
        uVar10 = (*(code *)(*param_1[0x31])[0xf])();
        ppppppplVar11 = param_1[0x30];
        if ((uVar10 & 1) == 0) goto LAB_7101bd5474;
        pppppplVar22 = ppppppplVar11[0x30];
        uVar10 = (long)ppppppplVar11[0x31] - (long)pppppplVar22;
        iVar26 = (int)(uVar10 >> 3);
        goto joined_r0x007101bd53f8;
      }
      uVar10 = (*(code *)(*ppppppplVar11)[0xf])();
joined_r0x007101bd54a4:
      if ((uVar10 & 1) != 0) goto LAB_7101bd5bf4;
      ppppppplVar11 = *pppppppplVar19;
      ppppplVar24 = (*ppppppplVar11)[0xe];
      uVar14 = 1;
LAB_7101bd5bf0:
      (*(code *)ppppplVar24)(ppppppplVar11,uVar14);
    }
LAB_7101bd5bf4:
    (*(code *)(*param_1[0x30])[0xc])(param_1[0x30],1);
    if (param_1[3] == param_1[2]) goto LAB_7101bd5e80;
    pppplVar20 = ***param_1[2];
    if (pppplVar20[2][1] != (long **)0x0) {
      FUN_7103776910(&local_e8,(long)(pppplVar20 + 1),(long ****)"cursor",ppuVar15,ppppbVar16,
                     param_5,param_6,param_7,param_8);
      pppppppplVar29 = local_e0;
      ppppppplVar11 = *local_e0;
      if (ppppppplVar11 != (long *******)0x0) {
        *(byte *)(ppppppplVar11 + 0xb) = *(byte *)(ppppppplVar11 + 0xb) | 1;
      }
      local_e8 = (long ********)&PTR_FUN_710523d9a8;
      local_e0 = (long ********)0x0;
      pppppppplVar3 = local_e0;
      goto joined_r0x007101bd5864;
    }
    if (!bVar6) goto LAB_7101bd5c74;
LAB_7101bd5874:
    uVar10 = (*(code *)(*param_1[0x31])[0xf])();
    if ((uVar10 & 1) != 0) {
      if ((*pppppppplVar19 == (long *******)0x0) ||
         (uVar10 = (*(code *)(**pppppppplVar19)[0xd])(), (uVar10 & 1) == 0)) {
        if ((param_1[0x2f] == (long *******)0x0) ||
           (uVar10 = (*(code *)(*param_1[0x2f])[0xd])(), (uVar10 & 1) == 0)) goto LAB_7101bd5c88;
        piVar23 = (int *)((long)param_1[0x2f] + 0x2a4);
      }
      else {
        piVar23 = (int *)((long)*pppppppplVar19 + 0x254);
      }
      if (0 < *piVar23) {
        ppppppplVar11 = param_1[0x33];
        uVar27 = ((long)param_1[0x34] - (long)ppppppplVar11 >> 5) * -0x70a3d70a3d70a3d7;
        uVar10 = (long)*piVar23 - 1;
        if (uVar27 < uVar10 || uVar27 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        iVar8 = *(int *)((long)param_1[0x31] + 0x254);
        if (*(char *)(ppppppplVar11 + uVar10 * 100 + 99) == '\0') {
          if (param_1[3] == param_1[2]) goto LAB_7101bd5e80;
          pppplVar17 = ***param_1[2];
          if (pppplVar17[2][1] != (long **)0x0) {
            FUN_71037780e0(&local_e8,(long)(pppplVar17 + 1),(long ****)"room_member_name_off",
                           ppuVar15,ppppbVar16,param_5,param_6,param_7,param_8);
            pppppppplVar19 = local_e0;
            if (*local_e0 == (long *******)0x0) {
              local_e8 = (long ********)&PTR_FUN_710523d9e8;
              local_e0 = (long ********)0x0;
              if (pppppppplVar19 == (long ********)0x0) goto LAB_7101bd5aa0;
            }
            else {
              if (local_e0[1] != (long *******)0x0) {
                FUN_710377aee0(0x3f800000,(long)&local_e8);
              }
              local_e8 = (long ********)&PTR_FUN_710523d9e8;
              local_e0 = (long ********)0x0;
            }
LAB_7101bd5a98:
            FUN_710392eb40((ulong)pppppppplVar19);
          }
        }
        else {
          if ((*(short *)(ppppppplVar11 + uVar10 * 100 + 2) == *(short *)(param_1 + 0x36)) &&
             (uVar7 = (uint)*(byte *)((long)ppppppplVar11 + uVar10 * 800 + 0xaa),
             (int)uVar7 <= iVar8)) {
            iVar8 = uVar7 - 1;
          }
          if (iVar8 == 0) {
            lVar21 = uVar10 * 100 + 0xc;
          }
          else {
            if (6 < iVar8 - 1U) goto LAB_7101bd5e90;
            lVar21 = uVar10 * 100 + (ulong)(iVar8 - 1U) * 9 + 0x24;
          }
          FUN_7103776910(&local_100,(long)pppplVar17,(long ****)"set_txt_room_sel_name",ppuVar15,
                         ppppbVar16,param_5,param_6,param_7,param_8);
          pppppppplVar19 = local_f8;
          if (local_f8[2] != (long *******)0x0) {
            ppuVar15 = (undefined **)&DAT_ffffffff;
            ppppbVar16 = (byte ****)0x1;
            FUN_71037a2270((long *)local_f8[2],(ushort *)(ppppppplVar11 + lVar21 + 4),0xffffffff,1);
          }
          if (param_1[3] == param_1[2]) goto LAB_7101bd5e80;
          pppplVar17 = ***param_1[2];
          if (pppplVar17[2][1] != (long **)0x0) {
            FUN_71037780e0(&local_e8,(long)(pppplVar17 + 1),(long ****)"room_member_name_on",
                           ppuVar15,ppppbVar16,param_5,param_6,param_7,param_8);
            pppppppplVar30 = local_e0;
            if (*local_e0 == (long *******)0x0) {
              local_e8 = (long ********)&PTR_FUN_710523d9e8;
              local_e0 = (long ********)0x0;
              if (pppppppplVar30 == (long ********)0x0) goto LAB_7101bd5a88;
            }
            else if (local_e0[1] != (long *******)0x0) {
              FUN_710377aee0(0x3f800000,(long)&local_e8);
            }
            local_e0 = (long ********)0x0;
            local_e8 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)pppppppplVar30);
          }
LAB_7101bd5a88:
          local_100 = (long ********)&PTR_FUN_710523d9a8;
          local_f8 = (long ********)0x0;
          if (pppppppplVar19 != (long ********)0x0) goto LAB_7101bd5a98;
        }
LAB_7101bd5aa0:
        if (iVar8 != *(int *)((long)param_1[0x31] + 0x254)) {
          ppuVar15 = (undefined **)0x1;
          FUN_7103771a80((long *)(param_1 + 0x31),iVar8,1);
        }
        *(int *)((long)param_1 + 0x1bc) = iVar8;
      }
    }
  }
  else {
    (*(code *)(*ppppppplVar11)[0xe])(ppppppplVar11,0);
    (*(code *)(*param_1[0x30])[0xc])(param_1[0x30],0);
    if (param_1[3] == param_1[2]) goto LAB_7101bd5e70;
    pppplVar20 = ***param_1[2];
    if (pppplVar20[2][1] != (long **)0x0) {
      FUN_71037780e0(&local_e8,(long)(pppplVar20 + 1),(long ****)"list_ptn_scroll",ppuVar15,
                     ppppbVar16,param_5,param_6,param_7,param_8);
      pppppppplVar30 = local_e0;
      if (*local_e0 == (long *******)0x0) {
        local_e8 = (long ********)&PTR_FUN_710523d9e8;
        local_e0 = (long ********)0x0;
        if (pppppppplVar30 == (long ********)0x0) goto LAB_7101bd4fec;
      }
      else if (local_e0[1] != (long *******)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_e8);
      }
      local_e0 = (long ********)0x0;
      local_e8 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)pppppppplVar30);
    }
LAB_7101bd4fec:
    pppppppplVar30 = param_1 + 0x2f;
    FUN_7103783690((long *)pppppppplVar30,
                   (int)((ulong)((long)param_1[0x34] - (long)param_1[0x33]) >> 5) * -0x3d70a3d7 + 1)
    ;
    ppppppplVar11 = param_1[0x2f];
    local_e0 = (long ********)0x0;
    pppppppplStack_d8 = (long ********)0x0;
    local_e8 = (long ********)0x0;
    FUN_71019bb740((ulong *)&local_e8,(long)ppppppplVar11[0x2e] - (long)ppppppplVar11[0x2d] >> 3,
                   (long ****)ppuVar15,ppppbVar16,param_5,param_6,param_7,param_8);
    pppppplVar25 = ppppppplVar11[0x2e];
    pppppppplVar3 = local_e0;
    for (pppppplVar22 = ppppppplVar11[0x2d]; pppppppplVar29 = local_e8, local_e0 = pppppppplVar3,
        pppppplVar22 != pppppplVar25; pppppplVar22 = pppppplVar22 + 1) {
      if (pppppppplVar3 == pppppppplStack_d8) {
        FUN_71019bb8f0((long *)&local_e8,*pppppplVar22 + 1,(long ****)ppuVar15,ppppbVar16,param_5,
                       param_6,param_7,param_8);
      }
      else {
        FUN_7103776390(pppppppplVar3,*pppppplVar22 + 1,(long ****)ppuVar15,ppppbVar16,param_5,
                       param_6,param_7,param_8);
        local_e0 = local_e0 + 2;
      }
      pppppppplVar3 = local_e0;
    }
    for (; pppppppplVar29 != pppppppplVar3; pppppppplVar29 = pppppppplVar29 + 2) {
      if (pppppppplVar29[1][1] != (long ******)0x0) {
        FUN_7103776640(&local_88,(long)pppppppplVar29,(byte ****)"set_parts_cursor_dec",ppuVar15,
                       ppppbVar16,param_5,param_6,param_7,param_8);
        plVar5 = local_80;
        if (local_80[1] != 0) {
          FUN_71037780e0(&local_100,(long)&local_88,(long ****)"select_off",ppuVar15,ppppbVar16,
                         param_5,param_6,param_7,param_8);
          pppppppplVar4 = local_f8;
          if (*local_f8 == (long *******)0x0) {
            local_100 = (long ********)&PTR_FUN_710523d9e8;
            local_f8 = (long ********)0x0;
            if (pppppppplVar4 == (long ********)0x0) goto LAB_7101bd5120;
          }
          else if (local_f8[1] != (long *******)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_100);
          }
          local_f8 = (long ********)0x0;
          local_100 = (long ********)&PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppppppplVar4);
        }
LAB_7101bd5120:
        local_88 = &PTR_FUN_710523d988;
        local_80 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          uVar10 = plVar5[3];
          plVar5[2] = (long)&PTR_FUN_710523d9a8;
          plVar5[3] = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40((ulong)plVar5);
        }
      }
    }
    if (iVar8 == *(int *)(param_1 + 0x37)) {
      if (bVar6) {
        auVar32 = (*(code *)(*param_1[0x31])[0xf])();
        uVar14 = auVar32._8_8_;
        ppppppplVar11 = param_1[0x2f];
        if ((auVar32._0_8_ & 1) == 0) {
          uVar10 = (*(code *)(*ppppppplVar11)[0xf])();
          if ((uVar10 & 1) == 0) {
            (*(code *)(**pppppppplVar30)[0xe])(*pppppppplVar30,1);
          }
        }
        else {
          if (*(int *)((long)ppppppplVar11 + 0x2a4) != iVar8) {
            ppppbVar16 = (byte ****)0x1;
            ppuVar15 = (undefined **)0x0;
            FUN_7103783c10((long *)pppppppplVar30,iVar8,0,1,param_5,param_6,param_7,param_8);
            ppppppplVar11 = *pppppppplVar30;
            uVar14 = extraout_x1;
          }
          iVar8 = *(int *)(ppppppplVar11 + 0x59);
          if ((iVar8 < 0) || (*(int *)(ppppppplVar11 + 0x58) <= iVar8)) {
            FUN_7103776290(&local_88,uVar14,(long ****)ppuVar15,ppppbVar16,param_5,param_6,param_7,
                           param_8);
          }
          else {
            FUN_7103776390(&local_88,ppppppplVar11[0x2d][iVar8] + 1,(long ****)ppuVar15,ppppbVar16,
                           param_5,param_6,param_7,param_8);
          }
          if (local_80[1] != 0) {
            FUN_71037780e0(&local_100,(long)&local_88,(long ****)"selected_on",ppuVar15,ppppbVar16,
                           param_5,param_6,param_7,param_8);
            pppppppplVar3 = local_f8;
            if (*local_f8 == (long *******)0x0) {
              local_100 = (long ********)&PTR_FUN_710523d9e8;
              local_f8 = (long ********)0x0;
              if (pppppppplVar3 != (long ********)0x0) goto LAB_7101bd55b4;
            }
            else {
              if (local_f8[1] != (long *******)0x0) {
                FUN_710377aee0(0x3f800000,(long)&local_100);
              }
LAB_7101bd55b4:
              local_f8 = (long ********)0x0;
              local_100 = (long ********)&PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)pppppppplVar3);
            }
            FUN_7103776640(&local_c0,(long)&local_88,(byte ****)"set_parts_cursor_dec",ppuVar15,
                           ppppbVar16,param_5,param_6,param_7,param_8);
            uVar10 = local_b8;
            if (*(long *)(local_b8 + 8) != 0) {
              FUN_71037780e0(&local_100,(long)&local_c0,(long ****)"select_on",ppuVar15,ppppbVar16,
                             param_5,param_6,param_7,param_8);
              pppppppplVar3 = local_f8;
              if (*local_f8 == (long *******)0x0) {
                local_100 = (long ********)&PTR_FUN_710523d9e8;
                local_f8 = (long ********)0x0;
                if (pppppppplVar3 == (long ********)0x0) goto LAB_7101bd56b4;
              }
              else if (local_f8[1] != (long *******)0x0) {
                FUN_710377aee0(0x3f800000,(long)&local_100);
              }
              local_f8 = (long ********)0x0;
              local_100 = (long ********)&PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)pppppppplVar3);
            }
LAB_7101bd56b4:
            local_c0 = &PTR_FUN_710523d988;
            local_b8 = 0;
            if (uVar10 != 0) {
              uVar27 = *(ulong *)(uVar10 + 0x18);
              *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)(uVar10 + 0x18) = 0;
              if (uVar27 != 0) {
                FUN_710392eb40(uVar27);
              }
              FUN_710392eb40(uVar10);
            }
          }
          (*(code *)(**pppppppplVar30)[0xe])(*pppppppplVar30,0);
          plVar5 = local_80;
          local_88 = &PTR_FUN_710523d988;
          local_80 = (long *)0x0;
          if (plVar5 != (long *)0x0) {
            uVar10 = plVar5[3];
            plVar5[2] = (long)&PTR_FUN_710523d9a8;
            plVar5[3] = 0;
            if (uVar10 != 0) {
              FUN_710392eb40(uVar10);
            }
            FUN_710392eb40((ulong)plVar5);
          }
        }
      }
      else {
        ppppbVar16 = (byte ****)0x1;
        ppuVar15 = (undefined **)0x0;
        FUN_7103783c10((long *)pppppppplVar30,iVar8,0,1,param_5,param_6,param_7,param_8);
      }
    }
    else {
      ppppbVar16 = (byte ****)0x1;
      ppuVar15 = (undefined **)0x0;
      FUN_7103783c10((long *)pppppppplVar30,iVar8,0,1,param_5,param_6,param_7,param_8);
      ppppppplVar11 = *pppppppplVar30;
      local_f8 = (long ********)0x0;
      pppppppplStack_f0 = (long ********)0x0;
      local_100 = (long ********)0x0;
      FUN_71019bb740((ulong *)&local_100,(long)ppppppplVar11[0x2e] - (long)ppppppplVar11[0x2d] >> 3,
                     (long ****)ppuVar15,ppppbVar16,param_5,param_6,param_7,param_8);
      pppppplVar25 = ppppppplVar11[0x2e];
      pppppppplVar3 = local_f8;
      for (pppppplVar22 = ppppppplVar11[0x2d]; pppppppplVar29 = local_100, local_f8 = pppppppplVar3,
          pppppplVar22 != pppppplVar25; pppppplVar22 = pppppplVar22 + 1) {
        if (pppppppplVar3 == pppppppplStack_f0) {
          FUN_71019bb8f0((long *)&local_100,*pppppplVar22 + 1,(long ****)ppuVar15,ppppbVar16,param_5
                         ,param_6,param_7,param_8);
        }
        else {
          FUN_7103776390(pppppppplVar3,*pppppplVar22 + 1,(long ****)ppuVar15,ppppbVar16,param_5,
                         param_6,param_7,param_8);
          local_f8 = local_f8 + 2;
        }
        pppppppplVar3 = local_f8;
      }
      for (; pppppppplVar29 != pppppppplVar3; pppppppplVar29 = pppppppplVar29 + 2) {
        if (pppppppplVar29[1][1] != (long ******)0x0) {
          FUN_71037780e0(&local_88,(long)pppppppplVar29,(long ****)"selected_off",ppuVar15,
                         ppppbVar16,param_5,param_6,param_7,param_8);
          plVar5 = local_80;
          if (*local_80 == 0) {
            local_88 = &PTR_FUN_710523d9e8;
            local_80 = (long *)0x0;
            if (plVar5 == (long *)0x0) goto LAB_7101bd52fc;
          }
          else if (local_80[1] != 0) {
            FUN_710377aee0(0x3f800000,(long)&local_88);
          }
          local_80 = (long *)0x0;
          local_88 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)plVar5);
        }
LAB_7101bd52fc:
      }
      if (bVar6) {
        auVar32 = (*(code *)(*param_1[0x31])[0xf])();
        if ((auVar32._0_8_ & 1) == 0) goto LAB_7101bd5354;
        ppppppplVar11 = *pppppppplVar30;
        iVar8 = *(int *)(ppppppplVar11 + 0x59);
        if ((iVar8 < 0) || (*(int *)(ppppppplVar11 + 0x58) <= iVar8)) {
          FUN_7103776290(&local_c0,auVar32._8_8_,(long ****)ppuVar15,ppppbVar16,param_5,param_6,
                         param_7,param_8);
        }
        else {
          FUN_7103776390(&local_c0,ppppppplVar11[0x2d][iVar8] + 1,(long ****)ppuVar15,ppppbVar16,
                         param_5,param_6,param_7,param_8);
        }
        if (*(long *)(local_b8 + 8) != 0) {
          FUN_71037780e0(&local_88,(long)&local_c0,(long ****)"selected_on",ppuVar15,ppppbVar16,
                         param_5,param_6,param_7,param_8);
          plVar5 = local_80;
          if (*local_80 == 0) {
            local_88 = &PTR_FUN_710523d9e8;
            local_80 = (long *)0x0;
            if (plVar5 != (long *)0x0) goto LAB_7101bd5630;
          }
          else {
            if (local_80[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_88);
            }
LAB_7101bd5630:
            local_80 = (long *)0x0;
            local_88 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar5);
          }
          FUN_7103776640(&local_d0,(long)&local_c0,(byte ****)"set_parts_cursor_dec",ppuVar15,
                         ppppbVar16,param_5,param_6,param_7,param_8);
          uVar10 = local_c8;
          if (*(long *)(local_c8 + 8) != 0) {
            FUN_71037780e0(&local_88,(long)&local_d0,(long ****)"select_on",ppuVar15,ppppbVar16,
                           param_5,param_6,param_7,param_8);
            plVar5 = local_80;
            if (*local_80 == 0) {
              local_88 = &PTR_FUN_710523d9e8;
              local_80 = (long *)0x0;
              if (plVar5 == (long *)0x0) goto LAB_7101bd574c;
            }
            else if (local_80[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_88);
            }
            local_80 = (long *)0x0;
            local_88 = &PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar5);
          }
LAB_7101bd574c:
          local_d0 = &PTR_FUN_710523d988;
          local_c8 = 0;
          if (uVar10 != 0) {
            uVar27 = *(ulong *)(uVar10 + 0x18);
            *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar10 + 0x18) = 0;
            if (uVar27 != 0) {
              FUN_710392eb40(uVar27);
            }
            FUN_710392eb40(uVar10);
          }
        }
        (*(code *)(**pppppppplVar30)[0xe])(*pppppppplVar30,0);
        uVar10 = local_b8;
        local_c0 = &PTR_FUN_710523d988;
        local_b8 = 0;
        pppppppplVar3 = local_100;
        if (uVar10 != 0) {
          uVar27 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar27 != 0) {
            FUN_710392eb40(uVar27);
          }
          FUN_710392eb40(uVar10);
          pppppppplVar3 = local_100;
        }
      }
      else {
LAB_7101bd5354:
        uVar10 = (*(code *)(**pppppppplVar30)[0xf])();
        pppppppplVar3 = local_100;
        if ((uVar10 & 1) == 0) {
          (*(code *)(**pppppppplVar30)[0xe])(*pppppppplVar30,1);
          pppppppplVar3 = local_100;
        }
      }
      local_100 = pppppppplVar3;
      pppppppplVar29 = local_f8;
      if (pppppppplVar3 != (long ********)0x0) {
        while (pppppppplVar29 != pppppppplVar3) {
          pppppppplVar29 = pppppppplVar29 + -2;
          (*(code *)**pppppppplVar29)(pppppppplVar29);
        }
        local_f8 = pppppppplVar3;
        if (local_100 != (long ********)0x0) {
          FUN_710392eb40((ulong)local_100);
        }
      }
    }
    (*(code *)(**pppppppplVar30)[0xc])(*pppppppplVar30,1);
    pppppppplVar3 = local_e8;
    pppppppplVar30 = local_e0;
    if (local_e8 != (long ********)0x0) {
      while (pppppppplVar29 = local_e8, pppppppplVar30 != pppppppplVar3) {
        pppppppplVar30 = pppppppplVar30 + -2;
        (*(code *)**pppppppplVar30)(pppppppplVar30);
      }
joined_r0x007101bd5864:
      local_e0 = pppppppplVar3;
      if (pppppppplVar29 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar29);
      }
    }
    if (bVar6) goto LAB_7101bd5874;
LAB_7101bd5c74:
    (*(code *)(*param_1[0x31])[0xe])(param_1[0x31],0);
  }
LAB_7101bd5c88:
  ppppppplVar11 = param_1[0x31];
  (*(code *)(*ppppppplVar11)[0xc])(ppppppplVar11,1);
  (*(code *)(*param_1[0x32])[0xc])(param_1[0x32],1);
  FUN_7101bd7a40((long)param_1,1,(long *********)ppuVar15,ppppbVar16,param_5,param_6,param_7,param_8
                );
  uVar10 = (*(code *)(*param_1[0x31])[0xf])();
  if ((uVar10 & 1) == 0) {
    if (param_1[3] == param_1[2]) {
LAB_7101bd5e80:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    pppplVar17 = ***param_1[2];
    if (pppplVar17[2][1] != (long **)0x0) {
      FUN_71037780e0(&local_e8,(long)(pppplVar17 + 1),(long ****)"room_member_name_off",ppuVar15,
                     ppppbVar16,param_5,param_6,param_7,param_8);
      pppppppplVar19 = local_e0;
      if (*local_e0 == (long *******)0x0) {
        local_e8 = (long ********)&PTR_FUN_710523d9e8;
        local_e0 = (long ********)0x0;
        if (pppppppplVar19 == (long ********)0x0) goto LAB_7101bd5d54;
      }
      else if (local_e0[1] != (long *******)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_e8);
      }
      local_e0 = (long ********)0x0;
      local_e8 = (long ********)&PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)pppppppplVar19);
    }
  }
LAB_7101bd5d54:
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  if (*(int *)(param_1 + 0x2c) == -1) {
    (*(code *)(*param_1[0x30])[0xc])(param_1[0x30],0);
    (*(code *)(*param_1[0x2f])[0xc])(param_1[0x2f],0);
    param_1[0xd] = (long *******)0x0;
    param_1[0xe] = (long *******)0x0;
    *(undefined8 *)((long)param_1 + 0x11c) = 0;
    *(undefined8 *)((long)param_1 + 0x114) = 0;
    *(undefined8 *)((long)param_1 + 0x10c) = 0;
    *(undefined8 *)((long)param_1 + 0x104) = 0;
    param_1[0x25] = (long *******)&DAT_ffffffff;
    *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x124) = 0;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    *(undefined8 *)((long)param_1 + 0xec) = 0;
    *(undefined8 *)((long)param_1 + 0xe4) = 0;
    *(undefined8 *)((long)param_1 + 0xdc) = 0;
    *(undefined1 *)((long)param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x1b) = 2;
  }
  else {
    if (0x12 < *(uint *)((long)param_1 + 0x124)) {
LAB_7101bd5e90:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x124) * 4 + 0xd8) = 3;
  }
  if (local_b0 != (long *********)0x0) {
    local_a8 = local_b0;
    FUN_710392eb40((ulong)local_b0);
  }
  plVar5 = local_90;
  local_98 = &PTR_FUN_710523d9a8;
  local_90 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  return;
}

