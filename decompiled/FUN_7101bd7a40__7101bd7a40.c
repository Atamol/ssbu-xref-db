// addr:      7101bd7a40
// offset:    0x1bd7a40
// name:      FUN_7101bd7a40
// mangled:   
// signature: undefined __cdecl FUN_7101bd7a40(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bd7a40(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  bool bVar6;
  ulong uVar7;
  byte ***pppbVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  byte **ppbVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte ****ppppbVar16;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 uVar17;
  undefined8 extraout_x1_12;
  char *pcVar18;
  long ****pppplVar19;
  byte *pbVar20;
  long lVar21;
  undefined8 *puVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  undefined8 *puVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  uint uVar33;
  ulong uVar34;
  int iVar35;
  long lVar36;
  byte *pbVar37;
  char cVar38;
  byte *pbVar39;
  int iVar40;
  long *********ppppppppplVar41;
  long *plVar42;
  long *plVar43;
  undefined1 auVar44 [16];
  undefined **local_198;
  long *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122;
  undefined1 local_120;
  undefined **local_f8;
  long *local_f0;
  undefined **local_e8;
  byte ***local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined **local_a0;
  long *local_98;
  long ********local_90;
  long *local_88;
  long ********local_80 [2];
  undefined4 local_64;
  
  if ((*(long **)(param_1 + 0x180) == (long *)0x0) ||
     (uVar11 = (**(code **)(**(long **)(param_1 + 0x180) + 0x68))(), (uVar11 & 1) == 0)) {
    if ((*(long **)(param_1 + 0x178) == (long *)0x0) ||
       (uVar11 = (**(code **)(**(long **)(param_1 + 0x178) + 0x68))(), (uVar11 & 1) == 0)) {
      iVar40 = -1;
      goto joined_r0x007101bd7a8c;
    }
    iVar40 = *(int *)(*(long *)(param_1 + 0x178) + 0x2a4);
    if ((param_2 & 1) == 0) goto LAB_7101bd7ac4;
LAB_7101bd7ba8:
    plVar43 = (long *)(param_1 + 0x10);
    *(int *)(param_1 + 0x1b8) = iVar40;
    plVar32 = (long *)(param_1 + 0x18);
    if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
    lVar21 = *(long *)**(undefined8 **)*plVar43;
    plVar12 = *(long **)(param_1 + 400);
    if (*(long *)(*(long *)(lVar21 + 0x10) + 8) != 0) {
      lVar25 = plVar12[0x30];
      lVar36 = plVar12[0x31];
      if (0 < (int)((ulong)(lVar36 - lVar25) >> 3)) {
        uVar11 = 0;
        do {
          if ((long)uVar11 < (long)(int)((ulong)(lVar36 - lVar25) >> 3)) {
            if ((ulong)(lVar36 - lVar25 >> 3) <= uVar11) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            ppppbVar16 = *(byte *****)(*(long *)(lVar25 + uVar11 * 8) + 0x88);
          }
          else {
            ppppbVar16 = (byte ****)0x0;
          }
          FUN_7103776640(&local_e8,lVar21 + 8,ppppbVar16,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          pppbVar8 = local_e0;
          if ((local_e0[1] != (byte **)0x0) && (pbVar20 = local_e0[1][3], pbVar20 != (byte *)0x0)) {
            pbVar20[0x58] = pbVar20[0x58] & 0xfe;
          }
          local_e8 = &PTR_FUN_710523d988;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 != (byte ***)0x0) {
            ppbVar13 = pppbVar8[3];
            pppbVar8[2] = &PTR_FUN_710523d9a8;
            pppbVar8[3] = (byte **)0x0;
            if (ppbVar13 != (byte **)0x0) {
              FUN_710392eb40((ulong)ppbVar13);
            }
            FUN_710392eb40((ulong)pppbVar8);
          }
          plVar12 = *(long **)(param_1 + 400);
          lVar25 = plVar12[0x30];
          lVar36 = plVar12[0x31];
          uVar11 = uVar11 + 1;
        } while ((long)uVar11 < (long)(int)((ulong)(lVar36 - lVar25) >> 3));
      }
    }
    (**(code **)(*plVar12 + 0x60))(plVar12,0);
    if (iVar40 == 0) {
      puVar22 = (undefined8 *)*plVar32;
      puVar28 = (undefined8 *)*plVar43;
      if (puVar22 == puVar28) goto LAB_7101bda0b0;
      if (*(long *)(*(long *)(**(long **)*puVar28 + 0x10) + 8) != 0) {
        FUN_71037780e0(&local_e8,**(long **)*puVar28 + 8,(long ****)"type_new",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e8 = &PTR_FUN_710523d9e8;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd7fa8;
        }
        else {
          if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
LAB_7101bd7fa8:
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
        }
        puVar22 = (undefined8 *)*plVar32;
        puVar28 = (undefined8 *)*plVar43;
      }
      if (puVar22 == puVar28) goto LAB_7101bda0b0;
      if (*(long *)(*(long *)(**(long **)*puVar28 + 0x10) + 8) != 0) {
        FUN_71037780e0(&local_e8,**(long **)*puVar28 + 8,(long ****)"icon_type_new",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e8 = &PTR_FUN_710523d9e8;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd802c;
        }
        else {
          if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
LAB_7101bd802c:
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
        }
        puVar22 = (undefined8 *)*plVar32;
        puVar28 = (undefined8 *)*plVar43;
      }
      if (puVar22 == puVar28) goto LAB_7101bda0b0;
      if (*(long *)(*(long *)(**(long **)*puVar28 + 0x10) + 8) == 0) goto LAB_7101bd8460;
      FUN_71037780e0(&local_e8,**(long **)*puVar28 + 8,(long ****)"balloon_off",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      pppbVar8 = local_e0;
      if (*local_e0 == (byte **)0x0) {
        local_e8 = &PTR_FUN_710523d9e8;
        local_e0 = (byte ***)0x0;
        if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd80b0;
      }
      else {
        if (local_e0[1] != (byte **)0x0) {
          FUN_710377aee0(0x3f800000,(long)&local_e8);
        }
LAB_7101bd80b0:
        local_e0 = (byte ***)0x0;
        local_e8 = &PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)pppbVar8);
      }
      puVar22 = (undefined8 *)*plVar32;
LAB_7101bd845c:
      puVar28 = (undefined8 *)*plVar43;
    }
    else {
      lVar21 = *(long *)(param_1 + 0x198);
      uVar11 = (*(long *)(param_1 + 0x1a0) - lVar21 >> 5) * -0x70a3d70a3d70a3d7;
      uVar30 = (long)iVar40 - 1;
      if (uVar11 < uVar30 || uVar11 - uVar30 == 0) {
        return;
      }
      if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
      lVar25 = *(long *)**(undefined8 **)*plVar43;
      if (*(long *)(*(long *)(lVar25 + 0x10) + 8) == 0) {
        return;
      }
      lVar25 = lVar25 + 8;
      if (*(short *)(lVar21 + uVar30 * 800 + 0x10) == *(short *)(param_1 + 0x1b0)) {
        iVar40 = *(int *)(param_1 + 0x1b8);
        cVar38 = '\0';
        if ((0 < iVar40) && ((ulong)(long)iVar40 <= uVar11)) {
          uVar26 = (long)iVar40 - 1;
          if (uVar11 < uVar26 || uVar11 - uVar26 == 0) goto LAB_7101bda0c8;
          cVar38 = *(char *)(lVar21 + uVar26 * 800 + 0xaa);
        }
        lVar36 = lVar21 + uVar30 * 800;
        pbVar37 = (byte *)(lVar36 + 4);
        pbVar20 = (byte *)(lVar36 + 5);
        if (((*pbVar20 ^ *pbVar37) & 0x3f) == 0) {
          ppppppppplVar41 = (long *********)0x2;
        }
        else {
          lVar36 = lVar21 + uVar30 * 800;
          ppppppppplVar41 =
               (long *********)(ulong)(*(byte *)(lVar36 + 0xab) <= *(byte *)(lVar36 + 0xaa));
        }
        FUN_71037780e0(&local_e8,lVar25,(long ****)"balloon_on",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e0 = (byte ***)0x0;
          uVar17 = extraout_x1;
          if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd8280;
        }
        else {
          if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
LAB_7101bd8280:
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
          uVar17 = extraout_x1_00;
        }
        local_e0 = (byte ***)((ulong)local_e0 & 0xffffffffffffff00);
        local_e8 = (undefined **)0x0;
        pbVar27 = (byte *)(lVar21 + uVar30 * 800 + 0xa8);
        iVar40 = (int)ppppppppplVar41;
        if (((*pbVar27 == 2) && (*(char *)(lVar21 + uVar30 * 800 + 8) == '\0')) ||
           (((*pbVar20 ^ *pbVar37) & 0x3f) == 0)) {
          puVar28 = (undefined8 *)*plVar32;
          puVar22 = (undefined8 *)*plVar43;
          if (puVar28 == puVar22) goto LAB_7101bda0b0;
          if (*(long *)(*(long *)(**(long **)*puVar22 + 0x10) + 8) != 0) {
            FUN_71037780e0(&local_90,**(long **)*puVar22 + 8,(long ****)"type_lock",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              uVar17 = extraout_x1_02;
              if (plVar12 != (long *)0x0) goto LAB_7101bd88ac;
            }
            else {
              if (local_88[1] != 0) {
                FUN_710377aee0(0x3f800000,(long)&local_90);
              }
LAB_7101bd88ac:
              local_88 = (long *)0x0;
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)plVar12);
              uVar17 = extraout_x1_05;
            }
            puVar28 = (undefined8 *)*plVar32;
            puVar22 = (undefined8 *)*plVar43;
          }
          if (puVar28 == puVar22) goto LAB_7101bda0b0;
          if (*(long *)(*(long *)(**(long **)*puVar22 + 0x10) + 8) != 0) {
            FUN_71037780e0(&local_90,**(long **)*puVar22 + 8,(long ****)"room_status_info_ng",
                           param_3,param_4,param_5,param_6,param_7,param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              uVar17 = extraout_x1_06;
              if (plVar12 == (long *)0x0) goto LAB_7101bd8938;
            }
            else if (local_88[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_90);
            }
            local_88 = (long *)0x0;
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
            uVar17 = extraout_x1_07;
          }
LAB_7101bd8938:
          pbVar39 = (byte *)(lVar21 + uVar30 * 800 + 0xa9);
          bVar2 = *pbVar39;
          if (bVar2 < 4) {
            if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
            lVar36 = *(long *)**(undefined8 **)*plVar43;
            if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
              FUN_71037780e0(&local_90,lVar36 + 8,(long ****)"icon_type_melee_lock",param_3,param_4,
                             param_5,param_6,param_7,param_8);
              plVar12 = local_88;
              if (*local_88 == 0) {
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                local_88 = (long *)0x0;
                uVar17 = extraout_x1_08;
                if (plVar12 == (long *)0x0) goto LAB_7101bd8c50;
              }
              else if (local_88[1] != 0) {
                FUN_710377aee0(0x3f800000,(long)&local_90);
              }
              local_88 = (long *)0x0;
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)plVar12);
              uVar17 = extraout_x1_12;
            }
LAB_7101bd8c50:
            FUN_7101bda0e0(param_1,uVar17,param_3,param_4,param_5,param_6,param_7,param_8);
          }
          else if (bVar2 - 5 < 3) {
            if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
            lVar36 = *(long *)**(undefined8 **)*plVar43;
            if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
              pcVar18 = "icon_type_any_lock";
LAB_7101bd8aac:
              FUN_71037780e0(&local_90,lVar36 + 8,(long ****)pcVar18,param_3,param_4,param_5,param_6
                             ,param_7,param_8);
              plVar12 = local_88;
              if (*local_88 == 0) {
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                local_88 = (long *)0x0;
                if (plVar12 == (long *)0x0) goto LAB_7101bd8c74;
              }
              else if (local_88[1] != 0) {
                FUN_710377aee0(0x3f800000,(long)&local_90);
              }
              local_88 = (long *)0x0;
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)plVar12);
            }
          }
          else if (bVar2 == 4) {
            if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
            lVar36 = *(long *)**(undefined8 **)*plVar43;
            if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
              pcVar18 = "icon_type_spirits_lock";
              goto LAB_7101bd8aac;
            }
          }
LAB_7101bd8c74:
          FUN_7103776910(&local_90,lVar25,(long ****)"set_txt_room_info_ng",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          plVar12 = local_88;
          if (*local_88 != 0) {
            if ((*pbVar27 == 2) && (*(char *)(lVar21 + uVar30 * 800 + 8) == '\0')) {
              pcVar18 = "mnu_local_rule_not_join";
            }
            else {
              if (iVar40 == 0) goto LAB_7101bd8f94;
LAB_7101bd8cb8:
              plVar12 = local_88;
              FUN_710062dc20((uint *)&local_e8,"mnu_local_status_%02d");
              pcVar18 = (char *)&local_e0;
              param_3 = ppppppppplVar41;
            }
            goto LAB_7101bd8cd4;
          }
        }
        else {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            pppplVar19 = (long ****)"room_status_info_ok";
            if (iVar40 == 1) {
              pppplVar19 = (long ****)"room_status_info_ng";
            }
            FUN_71037780e0(&local_90,lVar36 + 8,pppplVar19,param_3,param_4,param_5,param_6,param_7,
                           param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              uVar17 = extraout_x1_01;
              if (plVar12 == (long *)0x0) goto LAB_7101bd87a4;
            }
            else if (local_88[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_90);
            }
            local_88 = (long *)0x0;
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
            uVar17 = extraout_x1_03;
          }
LAB_7101bd87a4:
          pbVar39 = (byte *)(lVar21 + uVar30 * 800 + 0xa9);
          bVar2 = *pbVar39;
          if (bVar2 < 4) {
            puVar28 = (undefined8 *)*plVar32;
            puVar22 = (undefined8 *)*plVar43;
            if (puVar28 == puVar22) goto LAB_7101bda0b0;
            if (*(long *)(*(long *)(**(long **)*puVar22 + 0x10) + 8) != 0) {
              FUN_71037780e0(&local_90,**(long **)*puVar22 + 8,(long ****)"type_melee",param_3,
                             param_4,param_5,param_6,param_7,param_8);
              plVar12 = local_88;
              if (*local_88 == 0) {
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                local_88 = (long *)0x0;
                uVar17 = extraout_x1_04;
                if (plVar12 != (long *)0x0) goto LAB_7101bd8b70;
              }
              else {
                if (local_88[1] != 0) {
                  FUN_710377aee0(0x3f800000,(long)&local_90);
                }
LAB_7101bd8b70:
                local_88 = (long *)0x0;
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)plVar12);
                uVar17 = extraout_x1_09;
              }
              puVar28 = (undefined8 *)*plVar32;
              puVar22 = (undefined8 *)*plVar43;
            }
            if (puVar28 == puVar22) goto LAB_7101bda0b0;
            if (*(long *)(*(long *)(**(long **)*puVar22 + 0x10) + 8) != 0) {
              FUN_71037780e0(&local_90,**(long **)*puVar22 + 8,(long ****)"icon_type_melee",param_3,
                             param_4,param_5,param_6,param_7,param_8);
              plVar12 = local_88;
              if (*local_88 == 0) {
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                local_88 = (long *)0x0;
                uVar17 = extraout_x1_10;
                if (plVar12 == (long *)0x0) goto LAB_7101bd8bfc;
              }
              else if (local_88[1] != 0) {
                FUN_710377aee0(0x3f800000,(long)&local_90);
              }
              local_88 = (long *)0x0;
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              FUN_710392eb40((ulong)plVar12);
              uVar17 = extraout_x1_11;
            }
LAB_7101bd8bfc:
            FUN_7101bda0e0(param_1,uVar17,param_3,param_4,param_5,param_6,param_7,param_8);
          }
          else if (bVar2 - 5 < 3) {
            puVar28 = (undefined8 *)*plVar32;
            puVar22 = (undefined8 *)*plVar43;
            if (puVar28 == puVar22) goto LAB_7101bda0b0;
            if (*(long *)(*(long *)(**(long **)*puVar22 + 0x10) + 8) != 0) {
              FUN_71037780e0(&local_90,**(long **)*puVar22 + 8,(long ****)"type_any",param_3,param_4
                             ,param_5,param_6,param_7,param_8);
              plVar12 = local_88;
              if (*local_88 == 0) {
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                local_88 = (long *)0x0;
                if (plVar12 != (long *)0x0) goto LAB_7101bd8e8c;
              }
              else {
                if (local_88[1] != 0) {
                  FUN_710377aee0(0x3f800000,(long)&local_90);
                }
LAB_7101bd8e8c:
                local_88 = (long *)0x0;
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)plVar12);
              }
              puVar28 = (undefined8 *)*plVar32;
              puVar22 = (undefined8 *)*plVar43;
            }
            if (puVar28 == puVar22) goto LAB_7101bda0b0;
            lVar36 = **(long **)*puVar22;
            if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
              pcVar18 = "icon_type_any";
              goto LAB_7101bd8f18;
            }
          }
          else if (bVar2 == 4) {
            puVar28 = (undefined8 *)*plVar32;
            puVar22 = (undefined8 *)*plVar43;
            if (puVar28 == puVar22) goto LAB_7101bda0b0;
            if (*(long *)(*(long *)(**(long **)*puVar22 + 0x10) + 8) != 0) {
              FUN_71037780e0(&local_90,**(long **)*puVar22 + 8,(long ****)"type_spirits",param_3,
                             param_4,param_5,param_6,param_7,param_8);
              plVar12 = local_88;
              if (*local_88 == 0) {
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                local_88 = (long *)0x0;
                if (plVar12 != (long *)0x0) goto LAB_7101bd8edc;
              }
              else {
                if (local_88[1] != 0) {
                  FUN_710377aee0(0x3f800000,(long)&local_90);
                }
LAB_7101bd8edc:
                local_88 = (long *)0x0;
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)plVar12);
              }
              puVar28 = (undefined8 *)*plVar32;
              puVar22 = (undefined8 *)*plVar43;
            }
            if (puVar28 == puVar22) goto LAB_7101bda0b0;
            lVar36 = **(long **)*puVar22;
            if (*(long *)(*(long *)(lVar36 + 0x10) + 8) == 0) goto joined_r0x007101bd8c08;
            pcVar18 = "icon_type_spirits";
LAB_7101bd8f18:
            FUN_71037780e0(&local_90,lVar36 + 8,(long ****)pcVar18,param_3,param_4,param_5,param_6,
                           param_7,param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              if (plVar12 == (long *)0x0) goto joined_r0x007101bd8c08;
            }
            else if (local_88[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_90);
            }
            local_88 = (long *)0x0;
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
          }
joined_r0x007101bd8c08:
          if (iVar40 == 1) {
            FUN_7103776910(&local_90,lVar25,(long ****)"set_txt_room_info_ng",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            plVar12 = local_88;
            if (*local_88 == 0) goto LAB_7101bd8fc0;
            pcVar18 = "mnu_local_status_01";
LAB_7101bd8cd4:
            FUN_710377a120((long)&local_90,pcVar18,param_3,param_4,param_5,param_6,param_7,param_8);
          }
          else {
            FUN_7103776910(&local_90,lVar25,(long ****)"set_txt_room_info",param_3,param_4,param_5,
                           param_6,param_7,param_8);
            plVar12 = local_88;
            if (*local_88 != 0) {
              if (iVar40 != 0) goto LAB_7101bd8cb8;
LAB_7101bd8f94:
              plVar12 = local_88;
              lVar36 = lVar21 + uVar30 * 800;
              uVar10 = (uint)*(byte *)(lVar36 + 0xab) - (uint)*(byte *)(lVar36 + 0xaa);
              param_4 = (byte ****)(ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
              param_3 = (long *********)0x1;
              FUN_710377a280((long)&local_90,(byte *)"mnu_local_rule_join_limit",1);
            }
          }
        }
LAB_7101bd8fc0:
        local_90 = (long ********)&PTR_FUN_710523d9a8;
        local_88 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar12);
        }
        bVar2 = *pbVar39;
        if ((ulong)(long)(char)bVar2 < 8) {
          FUN_7103776910(&local_90,lVar25,(long ****)"set_txt_title_main",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          plVar12 = local_88;
          if (*local_88 != 0) {
            FUN_710377a120((long)&local_90,(&PTR_s_mnu_local_rule_upper_00_71050ac2a0)[(char)bVar2],
                           param_3,param_4,param_5,param_6,param_7,param_8);
          }
          local_90 = (long ********)&PTR_FUN_710523d9a8;
          local_88 = (long *)0x0;
          if (plVar12 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar12);
          }
          bVar2 = *pbVar39;
          if (3 < (ulong)(long)(char)bVar2) goto LAB_7101bd90d8;
          FUN_7103776910(&local_a0,lVar25,(long ****)"set_txt_title_sub",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          plVar12 = local_98;
          if (*local_98 == 0) {
            local_a0 = &PTR_FUN_710523d9a8;
            local_98 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
            pcVar18 = "title_line_2";
          }
          else {
            FUN_710377a120((long)&local_a0,
                           (&PTR_s_mnu_local_rule_bottom_mel_normal_71050ac2e0)[(char)bVar2],param_3
                           ,param_4,param_5,param_6,param_7,param_8);
            FUN_7103776910(&local_f8,lVar25,(long ****)"set_txt_title_sub_01",param_3,param_4,
                           param_5,param_6,param_7,param_8);
            plVar42 = local_f0;
            lVar36 = *local_f0;
            if (lVar36 == 0) {
LAB_7101bd9380:
              pcVar18 = "title_line_2";
            }
            else {
              bVar2 = *pbVar39;
              if ((1 < bVar2 - 2) && (bVar2 != 0)) {
                if (bVar2 == 1) {
                  *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 1;
                  if (*(char *)(lVar21 + uVar30 * 800 + 0xbc) == '\0') {
                    pcVar18 = "mnu_local_rule_bottom_04";
                  }
                  else {
                    pcVar18 = "mnu_local_rule_bottom_03";
                  }
                  FUN_710377a120((long)&local_f8,pcVar18,param_3,param_4,param_5,param_6,param_7,
                                 param_8);
                }
                else {
                  *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) & 0xfe;
                }
                goto LAB_7101bd9380;
              }
              *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 1;
              cVar3 = *(char *)(lVar21 + uVar30 * 800 + 0x13);
              if (cVar3 == '\x02') {
                bVar2 = *(byte *)(lVar21 + uVar30 * 800 + 0x19);
                if (bVar2 < 0xc) {
                  param_4 = (byte ****)(ulong)*(uint *)(&DAT_7104ada640 + (long)(char)bVar2 * 4);
                }
                else {
                  param_4 = (byte ****)0x96;
                }
                param_3 = (long *********)0x1;
                FUN_710377a280((long)&local_f8,(byte *)"mnu_local_rule_bottom_02",1);
                if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
                lVar36 = *(long *)**(undefined8 **)*plVar43;
                if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
                  lVar36 = lVar36 + 8;
                  pcVar18 = "icon_rule_melee_hp";
LAB_7101bda044:
                  FUN_71037780e0(&local_90,lVar36,(long ****)pcVar18,param_3,param_4,param_5,param_6
                                 ,param_7,param_8);
                  plVar14 = local_88;
                  if (*local_88 == 0) {
                    local_90 = (long ********)&PTR_FUN_710523d9e8;
                    local_88 = (long *)0x0;
                    if (plVar14 == (long *)0x0) goto LAB_7101bda094;
                  }
                  else if (local_88[1] != 0) {
                    FUN_710377aee0(0x3f800000,(long)&local_90);
                  }
                  local_88 = (long *)0x0;
                  local_90 = (long ********)&PTR_FUN_710523d9e8;
                  FUN_710392eb40((ulong)plVar14);
                }
              }
              else if (cVar3 == '\x01') {
                param_4 = (byte ****)(ulong)*(byte *)(lVar21 + uVar30 * 800 + 0x18);
                param_3 = (long *********)0x1;
                FUN_710377a280((long)&local_f8,(byte *)"mnu_local_rule_bottom_01",1);
                if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
                lVar36 = *(long *)**(undefined8 **)*plVar43;
                if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
                  lVar36 = lVar36 + 8;
                  pcVar18 = "icon_rule_melee_stock";
                  goto LAB_7101bda044;
                }
              }
              else if (cVar3 == '\0') {
                uVar9 = 0x811c9dc5;
                uVar5 = *(ushort *)(lVar21 + uVar30 * 800 + 0x16);
                local_140 = 0x1800000000;
                uStack_138 = 0x61636f6c5f756e6d;
                local_130 = 0x625f656c75725f6c;
                local_128 = 0x746f;
                local_126 = 0x5f6d6f74;
                uVar33 = 0x6d;
                local_122 = 0x3030;
                local_120 = 0;
                pbVar39 = (byte *)((long)&uStack_138 + 1);
                uVar10 = uVar9;
                do {
                  uVar10 = uVar10 * 0x89 ^ uVar33;
                  uVar33 = (uint)*pbVar39;
                  pbVar39 = pbVar39 + 1;
                } while (uVar33 != 0);
                local_140 = CONCAT44(0x18,uVar10);
                uStack_180 = 0x656c75725f6c656d;
                local_178 = 0x5f7463656c65735f;
                local_170 = 0x696e695f656d6974;
                local_168 = 0x696e6966;
                local_164 = 0x7974;
                local_162 = 0;
                uVar10 = 0x6d;
                pbVar39 = (byte *)((long)&uStack_180 + 1);
                do {
                  uVar9 = uVar9 * 0x89 ^ uVar10;
                  uVar10 = (uint)*pbVar39;
                  pbVar39 = pbVar39 + 1;
                } while (uVar10 != 0);
                local_188 = CONCAT44(0x1e,uVar9);
                if (uVar5 == 0) {
                  FUN_710377a120((long)&local_f8,(char *)&uStack_180,param_3,param_4,param_5,param_6
                                 ,param_7,param_8);
                }
                else {
                  uVar11 = (ulong)uVar5 / 0x3c;
                  uVar10 = (uint)uVar5 + (uVar5 / 0x3c) * -0x3c;
                  if (0x3e6 < uVar5 / 0x3c) {
                    uVar11 = 999;
                  }
                  uVar26 = (ulong)uVar10 & 0xffff;
                  if (0x3e6 < (uVar10 & 0xffff)) {
                    uVar26 = 999;
                  }
                  param_4 = (byte ****)
                            (((ulong)(uint)uVar5 / 0xe10) * 1000000 + uVar11 * 1000 + uVar26);
                  param_3 = (long *********)0x1;
                  FUN_710377a280((long)&local_f8,(byte *)&uStack_138,1);
                }
                if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
                lVar36 = *(long *)**(undefined8 **)*plVar43;
                if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
                  lVar36 = lVar36 + 8;
                  pcVar18 = "icon_rule_melee_time";
                  goto LAB_7101bda044;
                }
              }
LAB_7101bda094:
              pcVar18 = "title_line_3";
            }
            local_f0 = (long *)0x0;
            local_f8 = &PTR_FUN_710523d9a8;
            if (plVar42 != (long *)0x0) {
              local_f0 = (long *)0x0;
              local_f8 = &PTR_FUN_710523d9a8;
              FUN_710392eb40((ulong)plVar42);
            }
            local_a0 = &PTR_FUN_710523d9a8;
            local_98 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
          }
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) goto LAB_7101bd93e0;
        }
        else {
LAB_7101bd90d8:
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            pcVar18 = "title_line_1";
LAB_7101bd93e0:
            FUN_71037780e0(&local_90,lVar36 + 8,(long ****)pcVar18,param_3,param_4,param_5,param_6,
                           param_7,param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              if (plVar12 == (long *)0x0) goto LAB_7101bd942c;
            }
            else if (local_88[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_90);
            }
            local_88 = (long *)0x0;
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
          }
        }
LAB_7101bd942c:
        pbVar39 = (byte *)(lVar21 + uVar30 * 800 + 0xab);
        param_3 = (long *********)(ulong)*pbVar39;
        FUN_710062dc20((uint *)&local_e8,"room_member_count_%d");
        if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
        lVar36 = *(long *)**(undefined8 **)*plVar43;
        if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
          FUN_71037780e0(&local_90,lVar36 + 8,(long ****)&local_e0,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          plVar12 = local_88;
          if (*local_88 == 0) {
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            local_88 = (long *)0x0;
            if (plVar12 == (long *)0x0) goto LAB_7101bd94d8;
          }
          else if (local_88[1] != 0) {
            FUN_710377aee0(0x3f800000,(long)&local_90);
          }
          local_88 = (long *)0x0;
          local_90 = (long ********)&PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)plVar12);
        }
LAB_7101bd94d8:
        lVar36 = *(long *)(param_1 + 0x188);
        if (0 < (int)((ulong)(*(long *)(lVar36 + 0x188) - *(long *)(lVar36 + 0x180)) >> 3)) {
          uVar10 = 0;
          do {
            FUN_7103771d60(&local_90,lVar36,(long ****)(ulong)uVar10,param_4,param_5,param_6,param_7
                           ,param_8);
            plVar12 = local_88;
            plVar42 = (long *)*local_88;
            if (plVar42 != (long *)0x0) {
              (**(code **)(*plVar42 + 0x1f8))(plVar42,0);
              uVar11 = (**(code **)(*plVar42 + 0x200))(plVar42);
              if ((uVar11 & 1) == 0) {
                uVar9 = 1;
              }
              else {
                uVar9 = (**(code **)(*plVar42 + 0x210))(plVar42);
                uVar9 = uVar9 ^ 1;
              }
              (**(code **)(*plVar42 + 0x388))(plVar42,uVar9 & 1,0);
            }
            param_3 = (long *********)&DAT_00000032;
            param_4 = (byte ****)0x0;
            FUN_7103771930(*(long *)(param_1 + 0x188),uVar10,(long ****)&DAT_00000032,(byte ****)0x0
                           ,param_5,param_6,param_7,param_8);
            local_90 = (long ********)&PTR_FUN_710523d9c8;
            local_88 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar12);
            }
            lVar36 = *(long *)(param_1 + 0x188);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 <
                   (int)((ulong)(*(long *)(lVar36 + 0x188) - *(long *)(lVar36 + 0x180)) >> 3));
        }
        if (*pbVar39 != 0) {
          lVar36 = lVar21 + uVar30 * 800;
          uVar11 = 0;
          pbVar1 = (byte *)(lVar36 + 0xaa);
          do {
            param_3 = (long *********)(uVar11 & 0xffffffff);
            FUN_710062dc20((uint *)&local_e8,"set_parts_profileicon_%02d");
            FUN_7103776640(&local_a0,lVar25,&local_e0,param_3,param_4,param_5,param_6,param_7,
                           param_8);
            plVar12 = local_98;
            if (local_98[1] != 0) {
              plVar42 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,
                                               param_7,param_8);
              if (plVar42 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_f8 = (undefined **)((ulong)local_f8 & 0xffffffff00000000);
                  local_90 = (long ********)&DAT_00000008;
                  param_3 = &local_90;
                  uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f8);
                  if (((uVar26 & 1) != 0) &&
                     (plVar42 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,
                                                       param_6,param_7,param_8),
                     plVar42 != (long *)0x0)) goto LAB_7101bd9680;
                }
                plVar42 = (long *)0x0;
              }
LAB_7101bd9680:
              *plVar42 = 0;
              lVar24 = plVar12[1];
              if ((lVar24 == 0) || (*(long *)(lVar24 + 0x60) == 0)) {
                *plVar42 = 0;
              }
              else {
                plVar12 = (long *)FUN_7103796f20(*(long *)(lVar24 + 0x60),
                                                 *(long *)(lVar24 + 0x18) + 0xb0);
                *plVar42 = (long)plVar12;
                if (plVar12 != (long *)0x0) {
                  (**(code **)(*plVar12 + 0x1f8))(plVar12,uVar11 < *pbVar1);
                  uVar26 = (**(code **)(*plVar12 + 0x200))(plVar12);
                  if ((uVar26 & 1) == 0) {
                    uVar10 = 1;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
                    uVar10 = uVar10 ^ 1;
                  }
                  param_3 = (long *********)0x0;
                  (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
                }
              }
              FUN_7103776910(&local_f8,(long)&local_a0,(long ****)"set_icn_profile",param_3,param_4,
                             param_5,param_6,param_7,param_8);
              if (*(char *)(lVar36 + 0x318) == '\0') {
                FUN_71037790a0((long)local_f0,1,param_3,param_4,param_5,param_6,param_7,param_8);
              }
              else {
                FUN_7103776910(&local_90,(long)&local_a0,(long ****)"set_icn_profile_bg",param_3,
                               param_4,param_5,param_6,param_7,param_8);
                if (uVar11 < *pbVar1) {
                  lVar24 = lVar36 + 0x60;
                  if (uVar11 != 0) {
                    uVar10 = (int)uVar11 - 1;
                    if (6 < uVar10) goto LAB_7101bda0b8;
                    lVar24 = lVar21 + uVar30 * 800 + (ulong)uVar10 * 0x48 + 0x120;
                  }
                  param_3 = (long *********)(long)*(short *)(lVar24 + 0x3c);
                  uVar26 = FUN_7101bda220(param_1,(long)&local_f8,(long ****)param_3,param_4,param_5
                                          ,param_6,param_7,param_8);
                  local_198 = &PTR_FUN_710523d9a8;
                  plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,
                                                   param_6,param_7,param_8);
                  if (plVar14 == (long *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_64 = 0;
                      local_80[0] = (long ********)&SUB_00000020;
                      param_3 = local_80;
                      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                      if (((uVar15 & 1) != 0) &&
                         (plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,
                                                           param_5,param_6,param_7,param_8),
                         plVar14 != (long *)0x0)) goto LAB_7101bd97f0;
                    }
                    plVar14 = (long *)0x0;
                  }
LAB_7101bd97f0:
                  plVar12 = local_88;
                  plVar14[2] = 0;
                  plVar14[3] = 0;
                  *plVar14 = 0;
                  plVar14[1] = 0;
                  *plVar14 = *local_88;
                  plVar14[1] = local_88[1];
                  plVar14[2] = local_88[2];
                  plVar14[3] = local_88[3];
                  local_190 = plVar14;
                  FUN_710337d450((long)&local_198,uVar26);
                  local_198 = &PTR_FUN_710523d9a8;
                  local_190 = (long *)0x0;
                  if (plVar14 != (long *)0x0) {
                    FUN_710392eb40((ulong)plVar14);
                  }
                  local_90 = (long ********)&PTR_FUN_710523d9a8;
                  local_88 = (long *)0x0;
                  if (plVar12 == (long *)0x0) goto LAB_7101bd98fc;
                }
                else {
                  param_3 = (long *********)(param_1 + 0x1c8);
                  FUN_7103779d90((long)&local_90,1,(byte *)(param_1 + 0x1c8));
                  plVar12 = local_88;
                  uVar4 = *(undefined1 *)(param_1 + 0x1cb);
                  if ((((long *)local_88[1] != (long *)0x0) &&
                      (lVar24 = FUN_71000597e0((long *)local_88[1]), lVar24 != 0)) &&
                     ((*(byte *)(lVar24 + 0x14) & 3) != 0)) {
                    *(undefined1 *)(lVar24 + 0xf) = uVar4;
                  }
                  if (((plVar12[3] != 0) && (lVar24 = *(long *)(plVar12[3] + 0x118), lVar24 != 0))
                     && ((*(byte *)(lVar24 + 0x14) & 3) != 0)) {
                    *(undefined1 *)(lVar24 + 0xf) = uVar4;
                  }
                  plVar14 = (long *)plVar12[2];
                  if ((plVar14 != (long *)0x0) &&
                     (lVar24 = (**(code **)(*plVar14 + 0x58))(plVar14,0), lVar24 != 0)) {
                    *(undefined1 *)(lVar24 + 0xf) = uVar4;
                  }
                  FUN_71037790a0((long)local_f0,1,param_3,param_4,param_5,param_6,param_7,param_8);
                }
                local_88 = (long *)0x0;
                local_90 = (long ********)&PTR_FUN_710523d9a8;
                FUN_710392eb40((ulong)plVar12);
              }
LAB_7101bd98fc:
              plVar12 = local_98;
              if (uVar11 < *pbVar1) {
                lVar24 = lVar36 + 0x60;
                if (uVar11 != 0) {
                  uVar10 = (int)uVar11 - 1;
                  if (6 < uVar10) {
LAB_7101bda0b8:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar24 = lVar21 + uVar30 * 800 + (ulong)uVar10 * 0x48 + 0x120;
                }
                if (DAT_710593b5f0 == (long *)0x0) {
                  pcVar18 = "friend_off";
                }
                else {
                  uVar26 = *(ulong *)(*DAT_710593b5f0 + 0x25998);
                  if (uVar26 == 0) {
LAB_7101bd9a40:
                    plVar14 = (long *)0x0;
                  }
                  else {
                    uVar15 = *(ulong *)(lVar24 + 0x10);
                    uVar34 = uVar26 - 1;
                    if ((uVar34 & uVar26) == 0) {
                      uVar31 = uVar34 & uVar15;
                    }
                    else {
                      uVar31 = uVar15;
                      if (uVar26 <= uVar15) {
                        uVar31 = 0;
                        if (uVar26 != 0) {
                          uVar31 = uVar15 / uVar26;
                        }
                        uVar31 = uVar15 - uVar31 * uVar26;
                      }
                    }
                    plVar29 = *(long **)(*(long *)(*DAT_710593b5f0 + 0x25990) + uVar31 * 8);
                    plVar14 = (long *)0x0;
                    if ((plVar29 != (long *)0x0) &&
                       (plVar14 = (long *)*plVar29, plVar14 != (long *)0x0)) {
                      if ((uVar34 & uVar26) == 0) {
                        do {
                          uVar26 = plVar14[1];
                          if (uVar26 != uVar15 && (uVar26 & uVar34) != uVar31) goto LAB_7101bd9a40;
                        } while (((uVar26 != uVar15) || (plVar14[2] != uVar15)) &&
                                (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0));
                      }
                      else {
                        do {
                          uVar34 = plVar14[1];
                          if (uVar34 == uVar15) {
                            if (plVar14[2] == uVar15) break;
                          }
                          else {
                            if (uVar26 <= uVar34) {
                              uVar7 = 0;
                              if (uVar26 != 0) {
                                uVar7 = uVar34 / uVar26;
                              }
                              uVar34 = uVar34 - uVar7 * uVar26;
                            }
                            if (uVar34 != uVar31) goto LAB_7101bd9a40;
                          }
                          plVar14 = (long *)*plVar14;
                        } while (plVar14 != (long *)0x0);
                      }
                    }
                  }
                  pcVar18 = "friend_off";
                  if (plVar14 != (long *)0x0) {
                    pcVar18 = "friend_on";
                  }
                }
                if (local_98[1] != 0) {
LAB_7101bd9a70:
                  FUN_71037780e0(&local_90,(long)&local_a0,(long ****)pcVar18,param_3,param_4,
                                 param_5,param_6,param_7,param_8);
                  plVar14 = local_88;
                  if (*local_88 == 0) {
                    local_90 = (long ********)&PTR_FUN_710523d9e8;
                    local_88 = (long *)0x0;
                    if (plVar14 == (long *)0x0) goto LAB_7101bd9abc;
                  }
                  else if (local_88[1] != 0) {
                    FUN_710377aee0(0x3f800000,(long)&local_90);
                  }
                  local_88 = (long *)0x0;
                  local_90 = (long ********)&PTR_FUN_710523d9e8;
                  FUN_710392eb40((ulong)plVar14);
                }
              }
              else if (local_98[1] != 0) {
                pcVar18 = "friend_off";
                goto LAB_7101bd9a70;
              }
LAB_7101bd9abc:
              uVar10 = 1;
              if (4 < *pbVar39) {
                uVar10 = 2;
              }
              param_3 = (long *********)(ulong)uVar10;
              FUN_710062dc20((uint *)&local_e8,"type_%02d");
              if (plVar12[1] != 0) {
                FUN_71037780e0(&local_90,(long)&local_a0,(long ****)&local_e0,param_3,param_4,
                               param_5,param_6,param_7,param_8);
                plVar14 = local_88;
                if (*local_88 == 0) {
                  local_90 = (long ********)&PTR_FUN_710523d9e8;
                  local_88 = (long *)0x0;
                  if (plVar14 == (long *)0x0) goto LAB_7101bd9b3c;
                }
                else if (local_88[1] != 0) {
                  FUN_710377aee0(0x3f800000,(long)&local_90);
                }
                local_88 = (long *)0x0;
                local_90 = (long ********)&PTR_FUN_710523d9e8;
                FUN_710392eb40((ulong)plVar14);
              }
LAB_7101bd9b3c:
              plVar14 = local_f0;
              local_f8 = &PTR_FUN_710523d9a8;
              local_f0 = (long *)0x0;
              if (plVar14 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar14);
              }
              if (plVar42 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar42);
              }
            }
            local_a0 = &PTR_FUN_710523d988;
            local_98 = (long *)0x0;
            if (plVar12 != (long *)0x0) {
              uVar26 = plVar12[3];
              plVar12[2] = (long)&PTR_FUN_710523d9a8;
              plVar12[3] = 0;
              if (uVar26 != 0) {
                FUN_710392eb40(uVar26);
              }
              FUN_710392eb40((ulong)plVar12);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *pbVar39);
        }
        if ((param_2 & 1) == 0) {
          FUN_7103776910(&local_90,lVar25,(long ****)"set_txt_room_sel_name",param_3,param_4,param_5
                         ,param_6,param_7,param_8);
          plVar12 = local_88;
          if (*local_88 == 0) {
            local_90 = (long ********)&PTR_FUN_710523d9a8;
            local_88 = (long *)0x0;
            if (plVar12 == (long *)0x0) goto LAB_7101bd9c0c;
          }
          else if ((long *)local_88[2] != (long *)0x0) {
            param_3 = (long *********)&DAT_ffffffff;
            param_4 = (byte ****)0x1;
            FUN_71037a2270((long *)local_88[2],(ushort *)(lVar21 + uVar30 * 800 + 0x80),0xffffffff,1
                          );
          }
          local_88 = (long *)0x0;
          local_90 = (long ********)&PTR_FUN_710523d9a8;
          FUN_710392eb40((ulong)plVar12);
        }
LAB_7101bd9c0c:
        if (*(char *)(lVar21 + uVar30 * 800 + 0xbd) == '\0') {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            lVar36 = lVar36 + 8;
            pcVar18 = "play_off";
            goto LAB_7101bd9cf8;
          }
        }
        else if (((*pbVar27 == 2) && (*(char *)(lVar21 + uVar30 * 800 + 8) == '\0')) ||
                (((*pbVar20 ^ *pbVar37) & 0x3f) == 0)) {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            lVar36 = lVar36 + 8;
            pcVar18 = "play_on_lock";
            goto LAB_7101bd9cf8;
          }
        }
        else {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            lVar36 = lVar36 + 8;
            pcVar18 = "play_on_unlock";
LAB_7101bd9cf8:
            FUN_71037780e0(&local_90,lVar36,(long ****)pcVar18,param_3,param_4,param_5,param_6,
                           param_7,param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              if (plVar12 == (long *)0x0) goto LAB_7101bd9d48;
            }
            else if (local_88[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_90);
            }
            local_88 = (long *)0x0;
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
          }
        }
LAB_7101bd9d48:
        bVar2 = *pbVar27;
        if (bVar2 == 2) {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            lVar36 = lVar36 + 8;
            pppplVar19 = (long ****)"room_status_friend_lock";
            if (*(char *)(lVar21 + uVar30 * 800 + 8) != '\0') {
              pppplVar19 = (long ****)"room_status_friend";
            }
LAB_7101bd9e20:
            FUN_71037780e0(&local_90,lVar36,pppplVar19,param_3,param_4,param_5,param_6,param_7,
                           param_8);
            plVar12 = local_88;
            if (*local_88 == 0) {
              local_90 = (long ********)&PTR_FUN_710523d9e8;
              local_88 = (long *)0x0;
              if (plVar12 == (long *)0x0) goto LAB_7101bd9e70;
            }
            else if (local_88[1] != 0) {
              FUN_710377aee0(0x3f800000,(long)&local_90);
            }
            local_88 = (long *)0x0;
            local_90 = (long ********)&PTR_FUN_710523d9e8;
            FUN_710392eb40((ulong)plVar12);
          }
        }
        else if (bVar2 == 1) {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            lVar36 = lVar36 + 8;
            pppplVar19 = (long ****)"room_status_acq";
            goto LAB_7101bd9e20;
          }
        }
        else if (bVar2 == 0) {
          if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
          lVar36 = *(long *)**(undefined8 **)*plVar43;
          if (*(long *)(*(long *)(lVar36 + 0x10) + 8) != 0) {
            lVar36 = lVar36 + 8;
            pppplVar19 = (long ****)"room_status_any";
            goto LAB_7101bd9e20;
          }
        }
LAB_7101bd9e70:
        FUN_7103776910(&local_a0,lVar25,(long ****)"set_txt_balloon_00",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        plVar12 = local_98;
        if (*local_98 != 0) {
          param_3 = (long *********)(ulong)*pbVar27;
          FUN_710062dc20((uint *)&local_e8,"mnu_local_status_range_%02d");
          FUN_710377a120((long)&local_a0,(char *)&local_e0,param_3,param_4,param_5,param_6,param_7,
                         param_8);
        }
        if ((param_2 & 1) == 0) {
          uVar11 = (**(code **)(**(long **)(param_1 + 0x178) + 0x68))();
          if ((uVar11 & 1) == 0) {
            uVar11 = (**(code **)(**(long **)(param_1 + 0x180) + 0x68))();
            if ((uVar11 & 1) != 0) {
              (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),1);
            }
          }
          else {
            (**(code **)(**(long **)(param_1 + 0x178) + 0x70))(*(long **)(param_1 + 0x178),1);
          }
          *(undefined4 *)(param_1 + 0x1c0) = 0;
          if ((cVar38 != *(char *)(lVar21 + uVar30 * 800 + 0xaa)) ||
             (*(int *)(param_1 + 0x1bc) != 0)) {
            if ((undefined8 *)*plVar32 == (undefined8 *)*plVar43) goto LAB_7101bda0b0;
            lVar21 = *(long *)**(undefined8 **)*plVar43;
            if (*(long *)(*(long *)(lVar21 + 0x10) + 8) != 0) {
              FUN_7103776910(&local_90,lVar21 + 8,(long ****)"room_bg_name_hige",param_3,param_4,
                             param_5,param_6,param_7,param_8);
              plVar32 = local_88;
              lVar21 = *local_88;
              if (lVar21 != 0) {
                *(byte *)(lVar21 + 0x58) = *(byte *)(lVar21 + 0x58) & 0xfe;
              }
              local_90 = (long ********)&PTR_FUN_710523d9a8;
              local_88 = (long *)0x0;
              if (plVar32 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar32);
              }
            }
          }
        }
        local_a0 = &PTR_FUN_710523d9a8;
        local_98 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar12);
        }
        goto LAB_7101bd7b0c;
      }
      FUN_71037780e0(&local_e8,lVar25,(long ****)"type_new",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      pppbVar8 = local_e0;
      if (*local_e0 == (byte **)0x0) {
        local_e8 = &PTR_FUN_710523d9e8;
        local_e0 = (byte ***)0x0;
        if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd81b4;
      }
      else {
        if (local_e0[1] != (byte **)0x0) {
          FUN_710377aee0(0x3f800000,(long)&local_e8);
        }
LAB_7101bd81b4:
        local_e0 = (byte ***)0x0;
        local_e8 = &PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)pppbVar8);
      }
      puVar22 = (undefined8 *)*plVar32;
      puVar28 = (undefined8 *)*plVar43;
      if (puVar22 == puVar28) goto LAB_7101bda0b0;
      if (*(long *)(*(long *)(**(long **)*puVar28 + 0x10) + 8) != 0) {
        FUN_71037780e0(&local_e8,**(long **)*puVar28 + 8,(long ****)"icon_type_new",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e8 = &PTR_FUN_710523d9e8;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd83cc;
        }
        else {
          if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
LAB_7101bd83cc:
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
        }
        puVar22 = (undefined8 *)*plVar32;
        puVar28 = (undefined8 *)*plVar43;
      }
      if (puVar22 == puVar28) goto LAB_7101bda0b0;
      if (*(long *)(*(long *)(**(long **)*puVar28 + 0x10) + 8) != 0) {
        FUN_71037780e0(&local_e8,**(long **)*puVar28 + 8,(long ****)"balloon_off",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e8 = &PTR_FUN_710523d9e8;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd8450;
        }
        else {
          if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
LAB_7101bd8450:
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
        }
        puVar22 = (undefined8 *)*plVar32;
        goto LAB_7101bd845c;
      }
    }
LAB_7101bd8460:
    if (puVar22 != puVar28) {
      if (*(long *)(*(long *)(**(long **)*puVar28 + 0x10) + 8) == 0) {
        return;
      }
      FUN_71037780e0(&local_e8,**(long **)*puVar28 + 8,(long ****)"play_off",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      pppbVar8 = local_e0;
      if (*local_e0 == (byte **)0x0) {
        if (local_e0 == (byte ***)0x0) {
          return;
        }
      }
      else if (local_e0[1] != (byte **)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_e8);
      }
      local_e0 = (byte ***)0x0;
      local_e8 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)pppbVar8);
      return;
    }
LAB_7101bda0b0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  iVar40 = *(int *)(*(long *)(param_1 + 0x180) + 0x254);
joined_r0x007101bd7a8c:
  if ((param_2 & 1) != 0) goto LAB_7101bd7ba8;
LAB_7101bd7ac4:
  if (*(int *)(param_1 + 0x1c0) == -1) {
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) goto LAB_7101bda0bc;
    lVar21 = **(long **)**(undefined8 **)(param_1 + 0x10);
    if (*(long *)(*(long *)(lVar21 + 0x10) + 8) != 0) {
      FUN_7103776910(&local_e8,lVar21 + 8,(long ****)"room_bg_name_hige",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      pppbVar8 = local_e0;
      if (*local_e0 == (byte **)0x0) {
        local_e8 = &PTR_FUN_710523d9a8;
        local_e0 = (byte ***)0x0;
        if (pppbVar8 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar8);
        }
      }
      else {
        pbVar20 = (*local_e0)[0xb];
        local_e8 = &PTR_FUN_710523d9a8;
        local_e0 = (byte ***)0x0;
        if (pppbVar8 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar8);
        }
        if (((ulong)pbVar20 & 1) != 0) goto LAB_7101bd7b00;
      }
    }
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101bda0bc:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar21 = **(long **)**(undefined8 **)(param_1 + 0x10);
    if (*(long *)(*(long *)(lVar21 + 0x10) + 8) != 0) {
      FUN_7103776910(&local_e8,lVar21 + 8,(long ****)"room_bg_name_hige",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      pppbVar8 = local_e0;
      ppbVar13 = *local_e0;
      if (ppbVar13 != (byte **)0x0) {
        *(byte *)(ppbVar13 + 0xb) = *(byte *)(ppbVar13 + 0xb) | 1;
      }
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0 = (byte ***)0x0;
      if (pppbVar8 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar8);
      }
    }
  }
  else {
    param_3 = (long *********)0x0;
    FUN_7103771a80((long *)(param_1 + 0x188),*(int *)(param_1 + 0x1c0),0);
    (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  }
LAB_7101bd7b00:
  if (*(int *)(param_1 + 0x1b8) != iVar40) goto LAB_7101bd7ba8;
LAB_7101bd7b0c:
  iVar40 = *(int *)(param_1 + 0x1b4);
  uVar11 = (**(code **)(**(long **)(param_1 + 0x178) + 0x78))();
  if ((uVar11 & 1) == 0) {
    uVar11 = (**(code **)(**(long **)(param_1 + 0x180) + 0x78))();
    if ((uVar11 & 1) != 0) {
      uVar11 = (**(code **)(**(long **)(param_1 + 0x188) + 0x78))();
      if ((uVar11 & 1) != 0) goto LAB_7101bd7eb0;
      iVar35 = *(int *)(param_1 + 0x1b8);
      if (0 < iVar35) {
        if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10))
        goto LAB_7101bda0c4;
        lVar21 = *(long *)(*(long *)**(undefined8 **)**(undefined8 **)(param_1 + 0x10) + 0x600);
        if (((**(uint **)(DAT_710593b988 + 8) >> (ulong)(*(uint *)(lVar21 + 0x494) & 0x1f) < 2) &&
            (*(char *)(lVar21 + 0x4aa) != '\0')) && ((*(byte *)(lVar21 + 0x1a4) >> 1 & 1) != 0))
        goto LAB_7101bd7b54;
      }
    }
LAB_7101bd7eb8:
    iVar35 = -1;
  }
  else {
    uVar11 = (**(code **)(**(long **)(param_1 + 0x188) + 0x78))();
    if ((uVar11 & 1) != 0) {
LAB_7101bd7eb0:
      *(undefined4 *)(param_1 + 0x1b4) = 2;
      goto LAB_7101bd7eb8;
    }
    iVar35 = *(int *)(param_1 + 0x1b8);
    if ((iVar35 < 1) || (*(int *)(*(long *)(param_1 + 0x178) + 0x2b8) != 4)) goto LAB_7101bd7eb8;
LAB_7101bd7b54:
    uVar30 = (*(long *)(param_1 + 0x1a0) - *(long *)(param_1 + 0x198) >> 5) * -0x70a3d70a3d70a3d7;
    uVar11 = (long)iVar35 - 1;
    if (uVar30 < uVar11 || uVar30 - uVar11 == 0) {
LAB_7101bda0c8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (*(short *)(*(long *)(param_1 + 0x198) + uVar11 * 800 + 0x10) != *(short *)(param_1 + 0x1b0))
    goto LAB_7101bd7eb8;
    iVar35 = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 2;
  }
  if (iVar40 == *(int *)(param_1 + 0x1b4)) {
    return;
  }
  if (-1 < iVar35) {
    param_3 = (long *********)0x0;
    FUN_7103771a80((long *)(param_1 + 0x188),iVar35,0);
    if (*(int *)(param_1 + 0x1bc) == iVar35) {
      if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) goto LAB_7101bda0c4;
      lVar21 = **(long **)**(undefined8 **)(param_1 + 0x10);
      if (*(long *)(*(long *)(lVar21 + 0x10) + 8) != 0) {
        FUN_71037780e0(&local_e8,lVar21 + 8,(long ****)"room_member_name_on",param_3,param_4,param_5
                       ,param_6,param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e8 = &PTR_FUN_710523d9e8;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 == (byte ***)0x0) goto LAB_7101bd84f8;
        }
        else if (local_e0[1] != (byte **)0x0) {
          FUN_710377aee0(0x3f800000,(long)&local_e8);
        }
        local_e0 = (byte ***)0x0;
        local_e8 = &PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)pppbVar8);
      }
    }
  }
LAB_7101bd84f8:
  (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),1);
  auVar44 = (**(code **)(**(long **)(param_1 + 0x178) + 0x68))();
  if ((auVar44._0_8_ & 1) == 0) {
    uVar11 = (**(code **)(**(long **)(param_1 + 0x180) + 0x68))();
    if ((uVar11 & 1) == 0) goto LAB_7101bd8d78;
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
LAB_7101bda0c4:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar21 = **(long **)**(undefined8 **)(param_1 + 0x10);
    if (*(long *)(*(long *)(lVar21 + 0x10) + 8) != 0) {
      lVar25 = *(long *)(*(long *)(param_1 + 0x180) + 0x180);
      iVar40 = *(int *)(param_1 + 0x1b8);
      uVar11 = *(long *)(*(long *)(param_1 + 0x180) + 0x188) - lVar25;
      if (iVar40 < (int)(uVar11 >> 3)) {
        if ((ulong)((long)uVar11 >> 3) <= (ulong)(long)iVar40) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        ppppbVar16 = *(byte *****)(*(long *)(lVar25 + (long)iVar40 * 8) + 0x88);
      }
      else {
        ppppbVar16 = (byte ****)0x0;
      }
      FUN_7103776640(&local_90,lVar21 + 8,ppppbVar16,param_3,param_4,param_5,param_6,param_7,param_8
                    );
      plVar32 = local_88;
      if (local_88[1] != 0) {
        FUN_71037780e0(&local_e8,(long)&local_90,(long ****)"selected_on",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        pppbVar8 = local_e0;
        if (*local_e0 == (byte **)0x0) {
          local_e8 = &PTR_FUN_710523d9e8;
          local_e0 = (byte ***)0x0;
          if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd8af4;
        }
        else {
          if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
LAB_7101bd8af4:
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
        }
        FUN_7103776640(&local_a0,(long)&local_90,(byte ****)"set_parts_cursor_dec",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        plVar43 = local_98;
        if (local_98[1] != 0) {
          FUN_71037780e0(&local_e8,(long)&local_a0,(long ****)"select_on",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          pppbVar8 = local_e0;
          if (*local_e0 == (byte **)0x0) {
            local_e8 = &PTR_FUN_710523d9e8;
            local_e0 = (byte ***)0x0;
            if (pppbVar8 == (byte ***)0x0) goto LAB_7101bd8d04;
          }
          else if (local_e0[1] != (byte **)0x0) {
            FUN_710377aee0(0x3f800000,(long)&local_e8);
          }
          local_e0 = (byte ***)0x0;
          local_e8 = &PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar8);
        }
LAB_7101bd8d04:
        local_a0 = &PTR_FUN_710523d988;
        local_98 = (long *)0x0;
        if (plVar43 != (long *)0x0) {
          uVar11 = plVar43[3];
          plVar43[2] = (long)&PTR_FUN_710523d9a8;
          plVar43[3] = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40((ulong)plVar43);
        }
      }
      local_90 = (long ********)&PTR_FUN_710523d988;
      local_88 = (long *)0x0;
      if (plVar32 != (long *)0x0) {
        uVar11 = plVar32[3];
        plVar32[2] = (long)&PTR_FUN_710523d9a8;
        plVar32[3] = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40((ulong)plVar32);
      }
    }
    (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),0);
    goto LAB_7101bd8d78;
  }
  lVar21 = *(long *)(param_1 + 0x178);
  iVar40 = *(int *)(lVar21 + 0x2c8);
  if ((iVar40 < 0) || (*(int *)(lVar21 + 0x2c0) <= iVar40)) {
    FUN_7103776290(&local_90,auVar44._8_8_,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  else {
    FUN_7103776390(&local_90,
                   (undefined8 *)(*(long *)(*(long *)(lVar21 + 0x168) + (long)iVar40 * 8) + 8),
                   (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (local_88[1] != 0) {
    FUN_71037780e0(&local_e8,(long)&local_90,(long ****)"selected_on",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    pppbVar8 = local_e0;
    if (*local_e0 == (byte **)0x0) {
      local_e8 = &PTR_FUN_710523d9e8;
      local_e0 = (byte ***)0x0;
      if (pppbVar8 != (byte ***)0x0) goto LAB_7101bd862c;
    }
    else {
      if (local_e0[1] != (byte **)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_e8);
      }
LAB_7101bd862c:
      local_e0 = (byte ***)0x0;
      local_e8 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)pppbVar8);
    }
    FUN_7103776640(&local_a0,(long)&local_90,(byte ****)"set_parts_cursor_dec",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    plVar32 = local_98;
    if (local_98[1] != 0) {
      FUN_71037780e0(&local_e8,(long)&local_a0,(long ****)"select_on",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      pppbVar8 = local_e0;
      if (*local_e0 == (byte **)0x0) {
        local_e8 = &PTR_FUN_710523d9e8;
        local_e0 = (byte ***)0x0;
        if (pppbVar8 == (byte ***)0x0) goto LAB_7101bd8710;
      }
      else if (local_e0[1] != (byte **)0x0) {
        FUN_710377aee0(0x3f800000,(long)&local_e8);
      }
      local_e0 = (byte ***)0x0;
      local_e8 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)pppbVar8);
    }
LAB_7101bd8710:
    local_a0 = &PTR_FUN_710523d988;
    local_98 = (long *)0x0;
    if (plVar32 != (long *)0x0) {
      uVar11 = plVar32[3];
      plVar32[2] = (long)&PTR_FUN_710523d9a8;
      plVar32[3] = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)plVar32);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x178) + 0x70))(*(long **)(param_1 + 0x178),0);
  plVar32 = local_88;
  local_90 = (long ********)&PTR_FUN_710523d988;
  local_88 = (long *)0x0;
  if (plVar32 != (long *)0x0) {
    uVar11 = plVar32[3];
    plVar32[2] = (long)&PTR_FUN_710523d9a8;
    plVar32[3] = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40((ulong)plVar32);
  }
LAB_7101bd8d78:
  lVar21 = *(long *)(DAT_710532f8d0 + 8);
  if ((ulong)(*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40) >> 3) < 2) {
    uVar11 = 0;
    cVar38 = *(char *)(lVar21 + 0x191);
  }
  else {
    uVar11 = *(ulong *)(*(long *)(lVar21 + 0x40) + 8);
    cVar38 = *(char *)(lVar21 + 0x191);
  }
  if ((((cVar38 == '\0') &&
       (uVar30 = FUN_7103313f20(lVar21,uVar11,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8), (uVar30 & 1) != 0)) &&
      (FUN_71024076d0((undefined4 *)&local_e8,uVar11), local_d8 != 0)) &&
     ((DAT_7106dd53a8 == '\x01' && ((int)local_d0 == DAT_7106dd53ac)))) {
    piVar23 = (int *)(local_d8 + 0x38);
    do {
      cVar38 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar6) {
        *piVar23 = *piVar23 + -1;
        cVar38 = ExclusiveMonitorsStatus();
      }
    } while (cVar38 != '\0');
  }
  return;
}

