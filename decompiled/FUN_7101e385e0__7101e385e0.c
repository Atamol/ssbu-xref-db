// addr:      7101e385e0
// offset:    0x1e385e0
// name:      FUN_7101e385e0
// mangled:   
// signature: undefined __cdecl FUN_7101e385e0(long * * * * * * * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e385e0(long *******param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long ********pppppppplVar8;
  undefined2 uVar9;
  ulong uVar10;
  long ****pppplVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long *plVar14;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  char *pcVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long *****ppppplVar21;
  int *piVar22;
  long ***ppplVar23;
  long **pplVar24;
  ulong uVar25;
  byte *pbVar26;
  uint uVar27;
  long ******pppppplVar28;
  long ****pppplVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined4 local_180 [4];
  long local_170;
  int local_168;
  long ********local_140;
  long ***local_138;
  long ***local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_114;
  long ***local_e0;
  ulong local_d8 [8];
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  long ***local_68;
  
  iVar17 = *(int *)(param_1 + 0x10);
  if (iVar17 == 2) {
    FUN_7103376860((long)*param_1[8],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((*param_1[8] == (long *****)0x0) || ((*param_1[8])[1] == (long ****)0x0)) {
      *(undefined4 *)(param_1 + 0x10) = 3;
    }
    ppplVar23 = (**param_1[10])[0xc0];
    param_2 = extraout_x1_04;
    if ((*(char *)((long)ppplVar23 + 0x4aa) != '\0') &&
       (((*(byte *)((long)ppplVar23 + 0x1ac) >> 1 & 1) != 0 ||
        ((*(byte *)(ppplVar23 + 0x35) >> 1 & 1) != 0)))) {
      if (((param_1[0x17] == (long ******)0x0) ||
          (((((uVar10 = (*(code *)(*param_1[0x17])[4])(), (uVar10 & 1) != 0 ||
              (*(char *)(*DAT_710593b438 + 1) == '\0')) ||
             (*(int *)((long)param_1 + 0xc4) != 0x876500)) ||
            ((DAT_7106dd53a8 != '\x01' || (*(int *)(param_1 + 0x18) != DAT_7106dd53ac)))) ||
           (*(char *)(param_1 + 0x19) != '\0')))) ||
         (((param_1[0x17] == (long ******)0x0 ||
           (uVar10 = (*(code *)(*param_1[0x17])[4])(), (uVar10 & 1) != 0)) ||
          (uVar10 = (*(code *)(*param_1[0x17])[0xd])(), (uVar10 & 1) != 0)))) {
        pppppplVar28 = param_1[0x1f];
      }
      else {
        FUN_710373b540((long)(param_1 + 0x15),0);
        pppppplVar28 = param_1[0x1f];
      }
      if (((((pppppplVar28 != (long ******)0x0) &&
            (uVar10 = (*(code *)(*pppppplVar28)[4])(), (uVar10 & 1) == 0)) &&
           (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
          ((*(int *)((long)param_1 + 0x104) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
         ((((*(int *)(param_1 + 0x20) == DAT_7106dd53ac &&
            ((*(char *)(param_1 + 0x21) == '\0' && (param_1[0x1f] != (long ******)0x0)))) &&
           (uVar10 = (*(code *)(*param_1[0x1f])[4])(), (uVar10 & 1) == 0)) &&
          (uVar10 = (*(code *)(*param_1[0x1f])[0xd])(), (uVar10 & 1) == 0)))) {
        FUN_710373b540((long)(param_1 + 0x1d),0);
      }
      uVar16 = *(uint *)(param_1 + 0x14);
      if (uVar16 != 0xffffffff) {
        if (9 < uVar16) {
LAB_7101e39208:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar18 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar16 * 8 + 8);
        if ((*(int *)(lVar18 + 0xa8) == 1) || (*(char *)(lVar18 + 0xdd) != '\0')) {
          *(undefined2 *)(lVar18 + 0xdd) = 0x100;
          if (0x12 < *(uint *)(lVar18 + 0xa4)) goto LAB_7101e39208;
          *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar18 + 0xa4) * 4 + 0x58) = 2;
        }
      }
      if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                    (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                                   ), (uVar10 & 1) != 0)) &&
          (FUN_71024076d0(local_180,0xf57a523f5), local_170 != 0)) &&
         ((DAT_7106dd53a8 == '\x01' && (local_168 == DAT_7106dd53ac)))) {
        piVar22 = (int *)(local_170 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar7) {
            *piVar22 = *piVar22 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      *(undefined4 *)(param_1 + 0x10) = 3;
      return;
    }
  }
  else {
    if (iVar17 != 1) goto LAB_7101e39114;
    uVar10 = FUN_710259d3a0(*(long *)(*DAT_7105329f98 + 0x20),0,param_3,param_4,param_5,param_6,
                            param_7,param_8);
    param_2 = extraout_x1;
    if ((uVar10 & 1) != 0) {
      FUN_7103776640(&local_88,(long)(param_1 + 0xc),(byte ****)"set_part_aw_00",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      if ((*(long *)(local_80 + 8) != 0) &&
         (lVar18 = *(long *)(*(long *)(local_80 + 8) + 0x18), lVar18 != 0)) {
        *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
      }
      FUN_7103776910(&local_e0,(long)&local_88,(long ****)"set_rep_aura_00",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_d8[0];
      FUN_71037790a0(local_d8[0],1,param_3,param_4,param_5,param_6,param_7,param_8);
      local_e0 = (long ***)&PTR_FUN_710523d9a8;
      local_d8[0] = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      param_4 = (byte ****)0x1;
      param_5 = (long ****)0x1;
      param_3 = (long *********)0x0;
      FUN_71025ae6d0((long)&local_88,*(ushort *)((long)param_1 + 0x84),0,1,1,param_6,param_7,param_8
                    );
      FUN_71025af650((long)&local_88,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      pppppplVar28 = param_1[0x11];
      param_2 = extraout_x1_01;
      if (param_1[0x12] != pppppplVar28) {
        lVar18 = *(long *)(DAT_710532f730 + 8);
        uVar10 = 0;
        pbVar1 = (byte *)((long)&local_120 + 1);
        do {
          sVar5 = *(short *)((long)pppppplVar28 + uVar10 * 4);
          lVar30 = (long)sVar5;
          lVar19 = *(long *)(lVar18 + 0x1d8);
          if (lVar30 == -1) {
            uVar25 = 0xffffffff;
          }
          else {
            uVar25 = (ulong)*(ushort *)(lVar19 + lVar30 * 2 + 0x60);
          }
          uVar20 = (*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20) >> 6) * -0x3333333333333333;
          puVar2 = (undefined2 *)(*(long *)(lVar19 + 0x20) + uVar25 * 0x140);
          if (uVar20 < uVar25 || uVar20 - uVar25 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          uVar25 = uVar10;
          FUN_7103776640(&local_e0,(long)(param_1 + 0xc),(byte ****)"set_parts_atr_class_%02d",
                         uVar10,param_4,param_5,param_6,param_7,param_8);
          FUN_7103776640(&local_98,(long)&local_e0,(byte ****)"set_parts_base",uVar25,param_4,
                         param_5,param_6,param_7,param_8);
          uVar25 = local_d8[0];
          local_e0 = (long ***)&PTR_FUN_710523d988;
          local_d8[0] = 0;
          if (uVar25 != 0) {
            uVar20 = *(ulong *)(uVar25 + 0x18);
            *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar25 + 0x18) = 0;
            if (uVar20 != 0) {
              FUN_710392eb40(uVar20);
            }
            FUN_710392eb40(uVar25);
          }
          uVar13 = 0;
          if ((sVar5 != -1) && (sVar5 < 2000)) {
            lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
            uVar20 = (*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20) >> 6) *
                     -0x3333333333333333;
            uVar4 = *(ushort *)(lVar19 + lVar30 * 2 + 0x60);
            uVar25 = (ulong)uVar4;
            if ((uint)uVar4 < (uint)uVar20) {
              puVar3 = (undefined2 *)(*(long *)(lVar19 + 0x20) + uVar25 * 0x140);
              if (uVar20 < uVar25 || uVar20 - uVar25 == 0) {
                puVar3 = &DAT_7105182b08;
              }
              if (*(char *)(puVar3 + 0x2f) == '\0') {
                if (2 < *(byte *)(puVar3 + 0x36) - 1) goto LAB_7101e38854;
                uVar13 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar3 + 0x36) - 1 & 3) << 3));
              }
              else {
                uVar13 = 4;
              }
            }
            else {
LAB_7101e38854:
              uVar13 = 0;
            }
          }
          param_3 = (long *********)0x0;
          FUN_710339dde0((uint *)&local_e0,uVar13,'\0');
          uVar25 = local_90;
          uVar9 = local_118._2_2_;
          switch(*(undefined1 *)(puVar2 + 0x34)) {
          case 0:
            local_128._4_4_ = 10;
            local_120 = 0x6f6e5f7373616c63;
            uVar27 = 99;
            uVar16 = 0x811c9dc5;
            local_118 = CONCAT13(local_118._3_1_,0x656e);
            pbVar26 = pbVar1;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (uVar27 != 0);
            break;
          case 1:
            local_128._4_4_ = 10;
            local_120 = 0x6f685f7373616c63;
            uVar27 = 99;
            uVar16 = 0x811c9dc5;
            local_118 = CONCAT13(local_118._3_1_,0x6570);
            pbVar26 = pbVar1;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (uVar27 != 0);
            break;
          case 2:
            local_128._4_4_ = 9;
            local_120 = 0x63615f7373616c63;
            uVar27 = 99;
            uVar16 = 0x811c9dc5;
            local_118 = CONCAT22(uVar9,0x65);
            pbVar26 = pbVar1;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (uVar27 != 0);
            break;
          case 3:
            local_128._4_4_ = 0xc;
            local_120 = 0x656c5f7373616c63;
            local_118 = 0x646e6567;
            uVar27 = 99;
            uVar16 = 0x811c9dc5;
            local_114 = 0;
            pbVar26 = pbVar1;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (uVar27 != 0);
            break;
          default:
            local_128._4_4_ = 10;
            local_120 = 0x6f6e5f7373616c63;
            uVar27 = 99;
            uVar16 = 0x811c9dc5;
            local_118 = CONCAT13(local_118._3_1_,0x656e);
            pbVar26 = pbVar1;
            do {
              uVar16 = uVar16 * 0x89 ^ uVar27;
              uVar27 = (uint)*pbVar26;
              pbVar26 = pbVar26 + 1;
            } while (uVar27 != 0);
          }
          local_128 = CONCAT44(local_128._4_4_,uVar16);
          FUN_7103778300(0x3f800000,local_90,(long)local_d8);
          FUN_7103778300(0x3f800000,uVar25,(long)&local_120);
          local_98 = &PTR_FUN_710523d988;
          local_90 = 0;
          param_2 = extraout_x1_02;
          if (uVar25 != 0) {
            uVar20 = *(ulong *)(uVar25 + 0x18);
            *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar25 + 0x18) = 0;
            if (uVar20 != 0) {
              FUN_710392eb40(uVar20);
            }
            FUN_710392eb40(uVar25);
            param_2 = extraout_x1_03;
          }
          pppppplVar28 = param_1[0x11];
          uVar10 = (ulong)((int)uVar10 + 1);
        } while (uVar10 < (ulong)((long)param_1[0x12] - (long)pppppplVar28 >> 2));
      }
      *(undefined4 *)(param_1 + 0x10) = 2;
      if (param_1[8] != (long ******)0x0) {
        ppppplVar21 = *param_1[8];
        if (ppppplVar21 == (long *****)0x0) {
          pppplVar11 = (long ****)0x0;
        }
        else {
          pppplVar11 = *ppppplVar21;
        }
        FUN_71033743c0((long)pppplVar11,"layout_root",param_1[10]);
        ppppplVar21 = (long *****)0x0;
        if (*param_1[8] != (long *****)0x0) {
          FUN_7103375650((long *)*param_1[8],"spirit_count",&DAT_71042b2a84);
          ppppplVar21 = (long *****)0x0;
          if (*param_1[8] != (long *****)0x0) {
            FUN_7103375650((long *)*param_1[8],"num_base",&DAT_71042b2a84);
            ppppplVar21 = *param_1[8];
          }
        }
        pcVar15 = &DAT_71043cdb7b;
        param_4 = (byte ****)0x1;
        FUN_7103375650((long *)ppppplVar21,"is_aw_ready",&DAT_71043cdb7b);
        pppppplVar28 = param_1[8];
        ppppplVar21 = *pppppplVar28;
        pppplVar29 = *ppppplVar21;
        *(undefined4 *)(ppppplVar21 + 2) = 0;
        ppplVar23 = pppplVar29[2];
        *ppplVar23 = (long **)pppplVar29;
        *(undefined4 *)(ppplVar23 + 1) = 0x48;
        ppplVar23 = pppplVar29[2];
        pppplVar29[2] = ppplVar23 + 2;
        pppplVar11 = (long ****)pppplVar29[3][0x19];
        pppplVar29[2] = ppplVar23;
        if (pppplVar11 == pppplVar29) {
          pplVar24 = pppplVar29[3][8];
          if (*(uint *)((long)pplVar24 + 0xc) < 2) {
            plVar12 = pplVar24[3] +
                      ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)((long)pplVar24 + 0xb) & 0x3f)
                                     ) & 2) * 4;
            do {
              if (((int)plVar12[3] == 0x13) && (plVar14 = plVar12, plVar12[2] == 2)) break;
              piVar22 = (int *)((long)plVar12 + 0x1c);
              plVar12 = plVar12 + (long)*piVar22 * 4;
              plVar14 = &DAT_7104862960;
            } while (*piVar22 != 0);
          }
          else {
            plVar14 = pplVar24[2] + 2;
          }
          pcVar15 = "init_param";
          FUN_71038f4d40((long)pppplVar29,plVar14,"init_param");
        }
        else {
          FUN_71038f4b20((long)pppplVar29,"init_param");
          FUN_71038f4fc0((long)pppplVar29,-2);
        }
        ppplVar23 = pppplVar29[2] + -2;
        if ((ppplVar23 == (long ***)&DAT_7104862960) || (((ulong)pppplVar29[2][-1] & 0xf) != 6)) {
          pppplVar29[2] = ppplVar23;
        }
        else {
          FUN_7103377130(pppppplVar28,0,(long ****)pcVar15,param_4,param_5,param_6,param_7,param_8);
        }
        pppppplVar28 = param_1[8];
        local_68 = (long ***)
                   FUN_710392e290(0x10,0x38,(long ****)pcVar15,param_4,param_5,param_6,param_7,
                                  param_8);
        if (local_68 == (long ***)0x0) {
          local_128 = local_128 & 0xffffffff00000000;
          local_e0 = (long ***)&DAT_00000038;
          pppplVar11 = &local_e0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
          local_68 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        }
        local_68[5] = (long **)0x0;
        local_68[6] = (long **)0x0;
        *local_68 = (long **)&PTR_FUN_71050b17b8;
        local_68[2] = (long **)param_1;
        local_68[3] = (long **)FUN_7101e39250;
        local_68[4] = (long **)0x0;
        pppplVar11 = &local_68;
        *(undefined4 *)(local_68 + 1) = 0;
        FUN_7103376af0((long)pppppplVar28,(byte *)"start_effect_aura",pppplVar11,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar23 = local_68;
        local_68 = (long ***)0x0;
        if (ppplVar23 != (long ***)0x0) {
          (*(code *)(*ppplVar23)[1])();
        }
        pppppplVar28 = param_1[8];
        local_130 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        if (local_130 == (long ***)0x0) {
          local_128 = local_128 & 0xffffffff00000000;
          local_e0 = (long ***)&DAT_00000038;
          pppplVar11 = &local_e0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
          local_130 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        }
        *local_130 = (long **)&PTR_FUN_71050b17b8;
        local_130[5] = (long **)0x0;
        local_130[6] = (long **)0x0;
        local_130[2] = (long **)param_1;
        pppplVar11 = &local_130;
        local_130[3] = (long **)FUN_7101e392d0;
        local_130[4] = (long **)0x0;
        *(undefined4 *)(local_130 + 1) = 0;
        FUN_7103376af0((long)pppppplVar28,(byte *)"play_rumble_pad",pppplVar11,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar23 = local_130;
        local_130 = (long ***)0x0;
        if (ppplVar23 != (long ***)0x0) {
          (*(code *)(*ppplVar23)[1])();
        }
        pppppplVar28 = param_1[8];
        local_138 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        if (local_138 == (long ***)0x0) {
          local_128 = local_128 & 0xffffffff00000000;
          local_e0 = (long ***)&DAT_00000038;
          pppplVar11 = &local_e0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
          local_138 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        }
        *local_138 = (long **)&PTR_FUN_71050b17b8;
        local_138[5] = (long **)0x0;
        local_138[6] = (long **)0x0;
        local_138[2] = (long **)param_1;
        pppplVar11 = &local_138;
        local_138[3] = (long **)FUN_7101e39320;
        local_138[4] = (long **)0x0;
        *(undefined4 *)(local_138 + 1) = 0;
        FUN_7103376af0((long)pppppplVar28,(byte *)"play_se_production_1",pppplVar11,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar23 = local_138;
        local_138 = (long ***)0x0;
        if (ppplVar23 != (long ***)0x0) {
          (*(code *)(*ppplVar23)[1])();
        }
        pppppplVar28 = param_1[8];
        local_140 = (long ********)
                    FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        if (local_140 == (long ********)0x0) {
          local_128 = local_128 & 0xffffffff00000000;
          local_e0 = (long ***)&DAT_00000038;
          pppplVar11 = &local_e0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
          local_140 = (long ********)
                      FUN_710392e290(0x10,0x38,pppplVar11,param_4,param_5,param_6,param_7,param_8);
        }
        *local_140 = (long *******)&PTR_FUN_71050b17b8;
        local_140[5] = (long *******)0x0;
        local_140[6] = (long *******)0x0;
        local_140[2] = param_1;
        param_3 = &local_140;
        local_140[3] = (long *******)FUN_7101e39500;
        local_140[4] = (long *******)0x0;
        *(undefined4 *)(local_140 + 1) = 0;
        FUN_7103376af0((long)pppppplVar28,(byte *)"play_se_production_2",(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
        pppppppplVar8 = local_140;
        local_140 = (long ********)0x0;
        if (pppppppplVar8 != (long ********)0x0) {
          (*(code *)(*pppppppplVar8)[1])();
        }
        FUN_7103376980(*param_1[8]);
        param_2 = extraout_x1_05;
      }
      uVar10 = local_80;
      local_88 = &PTR_FUN_710523d988;
      local_80 = 0;
      if (uVar10 != 0) {
        uVar25 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar25 != 0) {
          FUN_710392eb40(uVar25);
        }
        FUN_710392eb40(uVar10);
        param_2 = extraout_x1_06;
      }
    }
  }
  iVar17 = *(int *)(param_1 + 0x10);
LAB_7101e39114:
  if (iVar17 == 4) {
    if ((param_1[0xd][1] != (long *****)0x0) &&
       (plVar12 = (long *)FUN_71037964b0((long)param_1[0xd][1],0x710428ff7d),
       param_2 = extraout_x1_07, plVar12 != (long *)0x0)) {
      auVar31 = (**(code **)(*plVar12 + 0x138))();
      param_2 = auVar31._8_8_;
      if ((auVar31._0_8_ & 1) == 0) {
        return;
      }
    }
    FUN_7103775fa0((long *)*param_1[10],param_2,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103775fa0((long *)*param_1[0xb],extraout_x1_08,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

