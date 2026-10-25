// addr:      7101de00e0
// offset:    0x1de00e0
// name:      FUN_7101de00e0
// mangled:   
// signature: undefined __cdecl FUN_7101de00e0(long * * param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101de00e0(long **param_1,undefined8 param_2,char *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long ***ppplVar7;
  undefined2 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
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
  undefined8 uVar13;
  long ****pppplVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  long *plVar26;
  long **pplVar27;
  long lVar28;
  undefined1 auVar29 [16];
  undefined4 local_1a8 [4];
  long local_198;
  int local_190;
  long ***local_168;
  long ***local_160;
  long ***local_158;
  long ***local_150;
  long ***local_148;
  long ***local_140;
  undefined **local_138;
  undefined8 *local_130;
  undefined **local_128;
  long *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined1 local_104;
  long ***local_d0;
  long *local_c8 [8];
  undefined **local_88;
  ulong local_80;
  
  iVar16 = *(int *)(param_1 + 0xd);
  if (iVar16 == 3) {
    FUN_7103376860(*param_1[8],param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((*param_1[8] == 0) || (*(long *)(*param_1[8] + 8) == 0)) {
      *(undefined4 *)(param_1 + 0xd) = 4;
    }
    lVar22 = *(long *)(*(long *)*param_1[10] + 0x600);
    param_2 = extraout_x1_06;
    if ((*(char *)(lVar22 + 0x4aa) != '\0') &&
       (((*(byte *)(lVar22 + 0x1ac) >> 1 & 1) != 0 || ((*(byte *)(lVar22 + 0x1a8) >> 1 & 1) != 0))))
    {
      if (((param_1[0x15] != (long *)0x0) &&
          ((((uVar9 = (**(code **)(*param_1[0x15] + 0x20))(), (uVar9 & 1) == 0 &&
             (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
            (*(int *)((long)param_1 + 0xb4) == 0x876500)) &&
           ((DAT_7106dd53a8 == '\x01' && (*(int *)(param_1 + 0x16) == DAT_7106dd53ac)))))) &&
         (((*(char *)(param_1 + 0x17) == '\0' &&
           ((param_1[0x15] != (long *)0x0 &&
            (uVar9 = (**(code **)(*param_1[0x15] + 0x20))(), (uVar9 & 1) == 0)))) &&
          (uVar9 = (**(code **)(*param_1[0x15] + 0x68))(), (uVar9 & 1) == 0)))) {
        FUN_710373b540((long)(param_1 + 0x13),0);
      }
      if ('\0' < *(char *)(param_1 + 0x12)) {
        lVar22 = 0;
        pplVar27 = param_1 + 0x1b;
        do {
          if ((((((pplVar27[2] != (long *)0x0) &&
                 (uVar9 = (**(code **)(*pplVar27[2] + 0x20))(), (uVar9 & 1) == 0)) &&
                (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
               (((*(int *)((long)pplVar27 + 0x1c) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
                ((*(int *)(pplVar27 + 3) == DAT_7106dd53ac &&
                 ((*(char *)(pplVar27 + 4) == '\0' && (pplVar27[2] != (long *)0x0)))))))) &&
              (uVar9 = (**(code **)(*pplVar27[2] + 0x20))(), (uVar9 & 1) == 0)) &&
             (uVar9 = (**(code **)(*pplVar27[2] + 0x68))(), (uVar9 & 1) == 0)) {
            FUN_710373b540((long)pplVar27,0);
          }
          lVar22 = lVar22 + 1;
          pplVar27 = pplVar27 + 8;
        } while (lVar22 < *(char *)(param_1 + 0x12));
      }
      if ('\0' < *(char *)((long)param_1 + 0x91)) {
        lVar22 = 0;
        pplVar27 = param_1 + 0x9b;
        do {
          if (((((pplVar27[2] != (long *)0x0) &&
                (uVar9 = (**(code **)(*pplVar27[2] + 0x20))(), (uVar9 & 1) == 0)) &&
               (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
              (((*(int *)((long)pplVar27 + 0x1c) == 0x876500 && (DAT_7106dd53a8 == '\x01')) &&
               ((*(int *)(pplVar27 + 3) == DAT_7106dd53ac &&
                ((*(char *)(pplVar27 + 4) == '\0' && (pplVar27[2] != (long *)0x0)))))))) &&
             ((uVar9 = (**(code **)(*pplVar27[2] + 0x20))(), (uVar9 & 1) == 0 &&
              (uVar9 = (**(code **)(*pplVar27[2] + 0x68))(), (uVar9 & 1) == 0)))) {
            FUN_710373b540((long)pplVar27,0);
          }
          lVar22 = lVar22 + 1;
          pplVar27 = pplVar27 + 8;
        } while (lVar22 < *(char *)((long)param_1 + 0x91));
      }
      if ('\0' < *(char *)((long)param_1 + 0x92)) {
        lVar22 = 0;
        pplVar27 = param_1 + 0x11b;
        do {
          if ((((((pplVar27[2] != (long *)0x0) &&
                 (uVar9 = (**(code **)(*pplVar27[2] + 0x20))(), (uVar9 & 1) == 0)) &&
                (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
               ((*(int *)((long)pplVar27 + 0x1c) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
              (*(int *)(pplVar27 + 3) == DAT_7106dd53ac)) &&
             (((*(char *)(pplVar27 + 4) == '\0' && (pplVar27[2] != (long *)0x0)) &&
              ((uVar9 = (**(code **)(*pplVar27[2] + 0x20))(), (uVar9 & 1) == 0 &&
               (uVar9 = (**(code **)(*pplVar27[2] + 0x68))(), (uVar9 & 1) == 0)))))) {
            FUN_710373b540((long)pplVar27,0);
          }
          lVar22 = lVar22 + 1;
          pplVar27 = pplVar27 + 8;
        } while (lVar22 < *(char *)((long)param_1 + 0x92));
      }
      if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar9 & 1) != 0)) && (FUN_71024076d0(local_1a8,0xf57a523f5), local_198 != 0)) &&
         ((DAT_7106dd53a8 == '\x01' && (local_190 == DAT_7106dd53ac)))) {
        piVar20 = (int *)(local_198 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar6) {
            *piVar20 = *piVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined4 *)(param_1 + 0xd) = 4;
      return;
    }
  }
  else {
    if (iVar16 != 2) goto LAB_7101de0fa8;
    uVar9 = FUN_710323cb80(*(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8),param_2,
                           (long *********)param_3,param_4,param_5,param_6,param_7,param_8);
    if ((uVar9 & 1) == 0) {
      FUN_7103376860(*param_1[8],extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      param_2 = extraout_x1_07;
    }
    else {
      plVar26 = param_1[0xe];
      pbVar1 = (byte *)((long)&local_110 + 1);
      plVar17 = param_1[0xf];
      lVar22 = *(long *)(DAT_710532f730 + 8);
      pplVar27 = param_1 + 0xb;
      uVar9 = 0;
      do {
        FUN_7103776640(&local_88,(long)pplVar27,(byte ****)"set_part_aw_%02d",uVar9 & 0xffffffff,
                       param_4,param_5,param_6,param_7,param_8);
        if ((*(long *)(local_80 + 8) != 0) &&
           (plVar10 = (long *)FUN_71037964b0(*(long *)(local_80 + 8),0x710432a70e),
           plVar10 != (long *)0x0)) {
          (**(code **)(*plVar10 + 0x1a0))(0);
        }
        lVar18 = *(long *)(local_80 + 8);
        if (uVar9 < ((ulong)((long)plVar17 - (long)plVar26) >> 3 & 0xffffffff)) {
          if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
          }
          if ((ulong)((long)param_1[0xf] - (long)param_1[0xe] >> 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar4 = *(ushort *)(param_1[0xe][uVar9] + 8);
          uVar13 = 1;
          param_4 = (byte ****)0x1;
          param_7 = 1;
          param_5 = (long ****)0x0;
          param_6 = 0;
          FUN_71025ad150(uVar4,(long)&local_88,1,1,0,0,1,param_8);
          FUN_7103776910(&local_d0,(long)&local_88,(long ****)"set_rep_eff_aura_00",uVar13,param_4,
                         param_5,param_6,param_7,param_8);
          plVar10 = local_c8[0];
          lVar18 = *local_c8[0];
          if (lVar18 != 0) {
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
          }
          local_d0 = (long ***)&PTR_FUN_710523d9a8;
          local_c8[0] = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar10);
          }
          FUN_7103776910(&local_d0,(long)&local_88,(long ****)"set_rep_eff_aura_00",uVar13,param_4,
                         param_5,param_6,param_7,param_8);
          plVar10 = local_c8[0];
          FUN_710377aa20((long *)*local_c8[0],0);
          local_d0 = (long ***)&PTR_FUN_710523d9a8;
          local_c8[0] = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar10);
          }
          lVar18 = *(long *)(lVar22 + 0x1d8);
          if (uVar4 == 0xffff) {
            uVar23 = 0xffffffff;
          }
          else {
            uVar23 = (ulong)*(ushort *)(lVar18 + (long)(short)uVar4 * 2 + 0x60);
          }
          uVar19 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
          uVar12 = 0;
          puVar2 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar23 * 0x140);
          if (uVar19 < uVar23 || uVar19 - uVar23 == 0) {
            puVar2 = &DAT_7105182b08;
          }
          if ((uVar4 != 0xffff) && ((short)uVar4 < 2000)) {
            lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
            uVar19 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) *
                     -0x3333333333333333;
            uVar4 = *(ushort *)(lVar18 + (long)(short)uVar4 * 2 + 0x60);
            uVar23 = (ulong)uVar4;
            if ((uint)uVar4 < (uint)uVar19) {
              puVar3 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar23 * 0x140);
              if (uVar19 < uVar23 || uVar19 - uVar23 == 0) {
                puVar3 = &DAT_7105182b08;
              }
              if (*(char *)(puVar3 + 0x2f) == '\0') {
                if (2 < *(byte *)(puVar3 + 0x36) - 1) goto LAB_7101de03f8;
                uVar12 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar3 + 0x36) - 1 & 3) << 3));
              }
              else {
                uVar12 = 4;
              }
            }
            else {
LAB_7101de03f8:
              uVar12 = 0;
            }
          }
          uVar13 = 0;
          FUN_710339dde0((uint *)&local_d0,uVar12,'\0');
          uVar8 = local_108._2_2_;
          switch(*(undefined1 *)(puVar2 + 0x34)) {
          case 0:
            local_118._4_4_ = 10;
            uVar25 = 99;
            local_110 = 0x6f6e5f7373616c63;
            uVar15 = 0x811c9dc5;
            local_108 = CONCAT13(local_108._3_1_,0x656e);
            pbVar24 = pbVar1;
            do {
              uVar15 = uVar15 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
            break;
          case 1:
            local_118._4_4_ = 10;
            uVar25 = 99;
            local_110 = 0x6f685f7373616c63;
            uVar15 = 0x811c9dc5;
            local_108 = CONCAT13(local_108._3_1_,0x6570);
            pbVar24 = pbVar1;
            do {
              uVar15 = uVar15 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
            break;
          case 2:
            uVar25 = 99;
            local_118._4_4_ = 9;
            local_110 = 0x63615f7373616c63;
            uVar15 = 0x811c9dc5;
            local_108 = CONCAT22(uVar8,0x65);
            pbVar24 = pbVar1;
            do {
              uVar15 = uVar15 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
            break;
          case 3:
            local_118._4_4_ = 0xc;
            uVar25 = 99;
            local_110 = 0x656c5f7373616c63;
            local_108 = 0x646e6567;
            uVar15 = 0x811c9dc5;
            local_104 = 0;
            pbVar24 = pbVar1;
            do {
              uVar15 = uVar15 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
            break;
          default:
            local_118._4_4_ = 10;
            uVar25 = 99;
            local_110 = 0x6f6e5f7373616c63;
            uVar15 = 0x811c9dc5;
            local_108 = CONCAT13(local_108._3_1_,0x656e);
            pbVar24 = pbVar1;
            do {
              uVar15 = uVar15 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
          }
          local_118 = CONCAT44(local_118._4_4_,uVar15);
          FUN_7103776640(&local_128,(long)&local_88,(byte ****)"set_parts_atr_class",uVar13,param_4,
                         param_5,param_6,param_7,param_8);
          plVar10 = local_120;
          FUN_7103778300(0x3f800000,(long)local_120,(long)local_c8);
          FUN_7103778300(0x3f800000,(long)plVar10,(long)&local_110);
          param_3 = (char *)(uVar9 & 0xffffffff);
          FUN_7103776910(&local_138,(long)pplVar27,(long ****)"set_fxui_%02d",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          puVar21 = local_130;
          plVar11 = FUN_710377aae0((long *)*local_130);
          if (plVar11 != (long *)0x0) {
            *(undefined1 *)((long)plVar11 + 0x13a) = 1;
          }
          local_138 = &PTR_FUN_710523d9a8;
          local_130 = (undefined8 *)0x0;
          uVar13 = extraout_x1_01;
          if (puVar21 != (undefined8 *)0x0) {
            FUN_710392eb40((ulong)puVar21);
            uVar13 = extraout_x1_02;
          }
          local_128 = &PTR_FUN_710523d988;
          local_120 = (long *)0x0;
          if (plVar10 != (long *)0x0) {
            uVar23 = plVar10[3];
            plVar10[2] = (long)&PTR_FUN_710523d9a8;
            plVar10[3] = 0;
            if (uVar23 != 0) {
              FUN_710392eb40(uVar23);
            }
LAB_7101de064c:
            FUN_710392eb40((ulong)plVar10);
            uVar13 = extraout_x1_03;
          }
        }
        else {
          if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
          }
          param_3 = (char *)(uVar9 & 0xffffffff);
          FUN_7103776910(&local_d0,(long)pplVar27,(long ****)"set_fxui_%02d",param_3,param_4,param_5
                         ,param_6,param_7,param_8);
          plVar10 = local_c8[0];
          FUN_710377aa20((long *)*local_c8[0],0);
          local_d0 = (long ***)&PTR_FUN_710523d9a8;
          local_c8[0] = (long *)0x0;
          uVar13 = extraout_x1_00;
          if (plVar10 != (long *)0x0) goto LAB_7101de064c;
        }
        FUN_71025af650((long)&local_88,uVar13,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar23 = local_80;
        local_88 = &PTR_FUN_710523d988;
        local_80 = 0;
        param_2 = extraout_x1_04;
        if (uVar23 != 0) {
          uVar19 = *(ulong *)(uVar23 + 0x18);
          *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar23 + 0x18) = 0;
          if (uVar19 != 0) {
            FUN_710392eb40(uVar19);
          }
          FUN_710392eb40(uVar23);
          param_2 = extraout_x1_05;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 0x10);
      *(undefined4 *)(param_1 + 0xd) = 3;
      if (param_1[8] != (long *)0x0) {
        plVar17 = (long *)*param_1[8];
        if (plVar17 == (long *)0x0) {
          lVar22 = 0;
        }
        else {
          lVar22 = *plVar17;
        }
        pppplVar14 = (long ****)param_1[10];
        FUN_71033743c0(lVar22,"layout_root",pppplVar14);
        plVar17 = param_1[8];
        local_140 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        if (local_140 == (long ***)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (long ***)&DAT_00000038;
          pppplVar14 = &local_d0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          local_140 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        }
        local_140[5] = (long **)0x0;
        local_140[6] = (long **)0x0;
        *local_140 = (long **)&PTR_FUN_71050b0d70;
        local_140[2] = param_1;
        local_140[3] = (long **)FUN_7101de1ff0;
        local_140[4] = (long **)0x0;
        pppplVar14 = &local_140;
        *(undefined4 *)(local_140 + 1) = 0;
        FUN_7103376af0((long)plVar17,(byte *)"play_rumble_pad",pppplVar14,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar7 = local_140;
        local_140 = (long ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          (*(code *)(*ppplVar7)[1])();
        }
        plVar17 = param_1[8];
        local_148 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        if (local_148 == (long ***)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (long ***)&DAT_00000038;
          pppplVar14 = &local_d0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          local_148 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        }
        *local_148 = (long **)&PTR_FUN_71050b0d70;
        local_148[5] = (long **)0x0;
        local_148[6] = (long **)0x0;
        local_148[2] = param_1;
        pppplVar14 = &local_148;
        local_148[3] = (long **)FUN_7101de2040;
        local_148[4] = (long **)0x0;
        *(undefined4 *)(local_148 + 1) = 0;
        FUN_7103376af0((long)plVar17,(byte *)"play_se_display_spirits",pppplVar14,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar7 = local_148;
        local_148 = (long ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          (*(code *)(*ppplVar7)[1])();
        }
        plVar17 = param_1[8];
        local_150 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        if (local_150 == (long ***)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (long ***)&DAT_00000038;
          pppplVar14 = &local_d0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          local_150 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        }
        *local_150 = (long **)&PTR_FUN_71050b0d70;
        local_150[5] = (long **)0x0;
        local_150[6] = (long **)0x0;
        local_150[2] = param_1;
        pppplVar14 = &local_150;
        local_150[3] = (long **)FUN_7101de2220;
        local_150[4] = (long **)0x0;
        *(undefined4 *)(local_150 + 1) = 0;
        FUN_7103376af0((long)plVar17,(byte *)"play_se_fly",pppplVar14,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar7 = local_150;
        local_150 = (long ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          (*(code *)(*ppplVar7)[1])();
        }
        plVar17 = param_1[8];
        local_158 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        if (local_158 == (long ***)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (long ***)&DAT_00000038;
          pppplVar14 = &local_d0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          local_158 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        }
        *local_158 = (long **)&PTR_FUN_71050b0d70;
        local_158[5] = (long **)0x0;
        local_158[6] = (long **)0x0;
        local_158[2] = param_1;
        pppplVar14 = &local_158;
        local_158[3] = (long **)FUN_7101de3fb0;
        local_158[4] = (long **)0x0;
        *(undefined4 *)(local_158 + 1) = 0;
        FUN_7103376af0((long)plVar17,(byte *)"play_se_inhale",pppplVar14,param_4,param_5,param_6,
                       param_7,param_8);
        ppplVar7 = local_158;
        local_158 = (long ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          (*(code *)(*ppplVar7)[1])();
        }
        plVar17 = param_1[8];
        local_160 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        if (local_160 == (long ***)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (long ***)&DAT_00000038;
          pppplVar14 = &local_d0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          local_160 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        }
        *local_160 = (long **)&PTR_FUN_71050b0d70;
        local_160[5] = (long **)0x0;
        local_160[6] = (long **)0x0;
        local_160[2] = param_1;
        pppplVar14 = &local_160;
        local_160[3] = (long **)FUN_7101de5dc0;
        local_160[4] = (long **)0x0;
        *(undefined4 *)(local_160 + 1) = 0;
        FUN_7103376af0((long)plVar17,(byte *)"play_se_display_stand",pppplVar14,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar7 = local_160;
        local_160 = (long ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          (*(code *)(*ppplVar7)[1])();
        }
        plVar17 = param_1[8];
        local_168 = (long ***)
                    FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        if (local_168 == (long ***)0x0) {
          local_118 = local_118 & 0xffffffff00000000;
          local_d0 = (long ***)&DAT_00000038;
          pppplVar14 = &local_d0;
          (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_118);
          local_168 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar14,param_4,param_5,param_6,param_7,param_8);
        }
        *local_168 = (long **)&PTR_FUN_71050b0d70;
        local_168[5] = (long **)0x0;
        local_168[6] = (long **)0x0;
        local_168[2] = param_1;
        local_168[3] = (long **)FUN_7101de5fe0;
        local_168[4] = (long **)0x0;
        *(undefined4 *)(local_168 + 1) = 0;
        FUN_7103376af0((long)plVar17,(byte *)"stop_se_display_spirits",&local_168,param_4,param_5,
                       param_6,param_7,param_8);
        ppplVar7 = local_168;
        local_168 = (long ***)0x0;
        if (ppplVar7 != (long ***)0x0) {
          (*(code *)(*ppplVar7)[1])();
        }
        plVar17 = (long *)0x0;
        if ((long *)*param_1[8] != (long *)0x0) {
          FUN_7103375650((long *)*param_1[8],"spirit_count",&DAT_71042b2a84);
          plVar17 = (long *)*param_1[8];
        }
        param_3 = &DAT_71043cdb7b;
        param_4 = (byte ****)0x1;
        FUN_7103375650(plVar17,"is_aw_ready",&DAT_71043cdb7b);
        plVar26 = param_1[8];
        plVar17 = (long *)*plVar26;
        lVar28 = *plVar17;
        *(undefined4 *)(plVar17 + 2) = 0;
        plVar17 = *(long **)(lVar28 + 0x10);
        *plVar17 = lVar28;
        *(undefined4 *)(plVar17 + 1) = 0x48;
        lVar22 = *(long *)(lVar28 + 0x10);
        *(long *)(lVar28 + 0x10) = lVar22 + 0x10;
        lVar18 = *(long *)(*(long *)(lVar28 + 0x18) + 200);
        *(long *)(lVar28 + 0x10) = lVar22;
        if (lVar18 == lVar28) {
          lVar22 = *(long *)(*(long *)(lVar28 + 0x18) + 0x40);
          if (*(uint *)(lVar22 + 0xc) < 2) {
            plVar17 = (long *)(*(long *)(lVar22 + 0x18) +
                              ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar22 + 0xb) & 0x3f)
                                             ) & 2) * 0x20);
            do {
              if (((int)plVar17[3] == 0x13) && (plVar10 = plVar17, plVar17[2] == 2)) break;
              piVar20 = (int *)((long)plVar17 + 0x1c);
              plVar17 = plVar17 + (long)*piVar20 * 4;
              plVar10 = &DAT_7104862960;
            } while (*piVar20 != 0);
          }
          else {
            plVar10 = (long *)(*(long *)(lVar22 + 0x10) + 0x10);
          }
          param_3 = "init_param";
          FUN_71038f4d40(lVar28,plVar10,"init_param");
        }
        else {
          FUN_71038f4b20(lVar28,"init_param");
          FUN_71038f4fc0(lVar28,-2);
        }
        puVar21 = (undefined8 *)(*(long *)(lVar28 + 0x10) + -0x10);
        if ((puVar21 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar28 + 0x10) + -8) & 0xf) != 6))
        {
          *(undefined8 **)(lVar28 + 0x10) = puVar21;
        }
        else {
          FUN_7103377130(plVar26,0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
        }
        FUN_7103376980((undefined8 *)*param_1[8]);
        param_2 = extraout_x1_08;
      }
      *(undefined2 *)(param_1 + 0x12) = 0;
      *(undefined1 *)((long)param_1 + 0x92) = 0;
    }
  }
  iVar16 = *(int *)(param_1 + 0xd);
LAB_7101de0fa8:
  if (iVar16 == 5) {
    if ((param_1[0xc][1] != 0) &&
       (plVar17 = (long *)FUN_71037964b0(param_1[0xc][1],0x710428ff7d), param_2 = extraout_x1_09,
       plVar17 != (long *)0x0)) {
      auVar29 = (**(code **)(*plVar17 + 0x138))();
      param_2 = auVar29._8_8_;
      if ((auVar29._0_8_ & 1) == 0) {
        return;
      }
    }
    FUN_7103775fa0((long *)*param_1[10],param_2,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  return;
}

