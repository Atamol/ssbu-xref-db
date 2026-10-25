// addr:      7101cfa720
// offset:    0x1cfa720
// name:      FUN_7101cfa720
// mangled:   
// signature: undefined __cdecl FUN_7101cfa720(undefined1[16] param_1, float param_2, float param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101cfa720(undefined1 param_1 [16],float param_2,float param_3,long param_4,
                   undefined8 param_5,long *********param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined4 *puVar7;
  uint *puVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 uVar15;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined8 extraout_var_16;
  undefined8 uVar16;
  undefined8 extraout_var_17;
  undefined8 extraout_var_18;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined8 extraout_var_21;
  undefined8 extraout_var_22;
  undefined8 extraout_var_23;
  undefined8 extraout_var_24;
  undefined8 extraout_var_25;
  undefined8 extraout_var_26;
  undefined8 extraout_var_27;
  undefined8 extraout_var_28;
  undefined4 local_a0 [2];
  uint local_98 [2];
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  puVar7 = local_a0;
  if (*(int *)(param_4 + 0xbc) != 0) goto LAB_7101cfacf4;
  FUN_7103778760(*(long *)(**(long **)(*(long *)(param_4 + 0xd8) + 0x80) + 0x10),0x71042e7481);
  lVar13 = *(long *)(param_4 + 200);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar13 + 0x80),extraout_x1,(long ****)param_6,param_7,
                 param_8,param_9,param_10,param_11);
  *(undefined1 *)(lVar13 + 0x70) = 1;
  lVar13 = *(long *)(param_4 + 0xd0);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar13 + 0x90),extraout_x1_00,(long ****)param_6,param_7,
                 param_8,param_9,param_10,param_11);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar13 + 0x98),extraout_x1_01,(long ****)param_6,param_7,
                 param_8,param_9,param_10,param_11);
  FUN_7103775fa0((long *)**(undefined8 **)(lVar13 + 0xa0),extraout_x1_02,(long ****)param_6,param_7,
                 param_8,param_9,param_10,param_11);
  *(undefined1 *)(lVar13 + 0x70) = 1;
  FUN_7103775fa0((long *)**(undefined8 **)(*(long *)(param_4 + 0xd8) + 0x80),extraout_x1_03,
                 (long ****)param_6,param_7,param_8,param_9,param_10,param_11);
  lVar13 = *(long *)(DAT_7105329740 + 8);
  uVar2 = *(uint *)(param_4 + 0xf0);
  uVar3 = *(uint *)(lVar13 + 0x4d8);
  if (uVar2 < 2) {
    if (uVar3 == 2) {
      lVar6 = *(long *)(param_4 + 0xe0);
      ppppbVar10 = *(byte *****)(param_4 + 0xe8);
      FUN_7103776910(&local_60,**(long **)(lVar6 + 0x158) + 8,(long ****)"set_dummy",param_6,param_7
                     ,param_8,param_9,param_10,param_11);
      FUN_7103779480((long)&local_60,lVar13 + 0x728,param_6,param_7,param_8,param_9,param_10,
                     param_11);
      uVar9 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_60,**(long **)(lVar6 + 0x150) + 8,(long ****)"set_dummy",param_6,param_7
                     ,param_8,param_9,param_10,param_11);
      uVar9 = local_58;
      fVar14 = extraout_s0;
      uVar15 = extraout_var;
      uVar16 = extraout_var_14;
      if (*(long **)(local_58 + 8) != (long *)0x0) {
        if (*(char *)(DAT_71053396a0 + 0x1920) == '\0') {
          FUN_71037790a0(local_58,1,param_6,param_7,param_8,param_9,param_10,param_11);
          fVar14 = extraout_s0_09;
          uVar15 = extraout_var_09;
          uVar16 = extraout_var_24;
        }
        else {
          FUN_710379e9c0(*(long **)(local_58 + 8),DAT_71053396a0 + 0x1a98,0);
          fVar14 = extraout_s0_00;
          uVar15 = extraout_var_00;
          uVar16 = extraout_var_15;
        }
      }
      local_58 = 0;
      local_60 = &PTR_FUN_710523d9a8;
      if (uVar9 != 0) {
        local_58 = 0;
        local_60 = &PTR_FUN_710523d9a8;
        FUN_710392eb40(uVar9);
        fVar14 = extraout_s0_01;
        uVar15 = extraout_var_01;
        uVar16 = extraout_var_16;
      }
      if (DAT_7105339168 != 0) {
        fVar14 = *(float *)(*(long *)(DAT_7105329740 + 8) + 0x188);
        uVar15 = 0;
        uVar16 = 0;
        pfVar1 = (float *)(DAT_7105339168 + 0x72b4);
        param_2 = *pfVar1;
        if (param_2 != fVar14) {
          *(undefined1 *)(DAT_7105339168 + 0x72b9) = 1;
          *pfVar1 = fVar14;
        }
      }
      uVar9 = 2;
    }
    else {
      lVar6 = *(long *)(param_4 + 0xe0);
      ppppbVar10 = *(byte *****)(param_4 + 0xe8);
      lVar13 = *(long *)(**(long **)(lVar6 + 0x158) + 0x10);
      if (uVar3 != 0) {
        FUN_7103778300(0x3f800000,lVar13,0x7104420bbc);
        FUN_7103776910(&local_60,**(long **)(lVar6 + 0x150) + 8,(long ****)"set_dummy",param_6,
                       param_7,param_8,param_9,param_10,param_11);
        uVar9 = local_58;
        fVar14 = extraout_s0_02;
        uVar15 = extraout_var_02;
        uVar16 = extraout_var_17;
        if (*(long **)(local_58 + 8) != (long *)0x0) {
          if (*(char *)(DAT_71053396a0 + 0x1920) == '\0') {
            FUN_71037790a0(local_58,1,param_6,param_7,param_8,param_9,param_10,param_11);
            fVar14 = extraout_s0_10;
            uVar15 = extraout_var_10;
            uVar16 = extraout_var_25;
          }
          else {
            FUN_710379e9c0(*(long **)(local_58 + 8),DAT_71053396a0 + 0x1a98,0);
            fVar14 = extraout_s0_03;
            uVar15 = extraout_var_03;
            uVar16 = extraout_var_18;
          }
        }
        local_60 = &PTR_FUN_710523d9a8;
        local_58 = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
          fVar14 = extraout_s0_11;
          uVar15 = extraout_var_11;
          uVar16 = extraout_var_26;
        }
        if (DAT_7105339168 != 0) {
          fVar14 = *(float *)(*(long *)(DAT_7105329740 + 8) + 0x184);
          uVar15 = 0;
          uVar16 = 0;
          pfVar1 = (float *)(DAT_7105339168 + 0x72b4);
          param_2 = *pfVar1;
          if (param_2 != fVar14) {
            *(undefined1 *)(DAT_7105339168 + 0x72b9) = 1;
            *pfVar1 = fVar14;
          }
        }
        goto LAB_7101cfacb8;
      }
      FUN_7103778300(0x3f800000,lVar13,0x71043ad98d);
      FUN_7103776910(&local_60,**(long **)(lVar6 + 0x150) + 8,(long ****)"set_dummy",param_6,param_7
                     ,param_8,param_9,param_10,param_11);
      uVar9 = local_58;
      fVar14 = extraout_s0_04;
      uVar15 = extraout_var_04;
      uVar16 = extraout_var_19;
      if (*(long **)(local_58 + 8) != (long *)0x0) {
        if (*(char *)(DAT_71053396a0 + 0x1920) == '\0') {
          FUN_71037790a0(local_58,1,param_6,param_7,param_8,param_9,param_10,param_11);
          fVar14 = extraout_s0_12;
          uVar15 = extraout_var_12;
          uVar16 = extraout_var_27;
        }
        else {
          FUN_710379e9c0(*(long **)(local_58 + 8),DAT_71053396a0 + 0x1a98,0);
          fVar14 = extraout_s0_05;
          uVar15 = extraout_var_05;
          uVar16 = extraout_var_20;
        }
      }
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
        fVar14 = extraout_s0_13;
        uVar15 = extraout_var_13;
        uVar16 = extraout_var_28;
      }
      if (DAT_7105339168 != 0) {
        fVar14 = *(float *)(*(long *)(DAT_7105329740 + 8) + 0x180);
        uVar15 = 0;
        uVar16 = 0;
        pfVar1 = (float *)(DAT_7105339168 + 0x72b4);
        param_2 = *pfVar1;
        if (param_2 != fVar14) {
          *(undefined1 *)(DAT_7105339168 + 0x72b9) = 1;
          *pfVar1 = fVar14;
        }
      }
      uVar9 = 0;
    }
  }
  else {
    lVar6 = *(long *)(param_4 + 0xe0);
    ppppbVar10 = *(byte *****)(param_4 + 0xe8);
    FUN_7103776910(&local_60,**(long **)(lVar6 + 0x158) + 8,(long ****)"set_dummy",param_6,param_7,
                   param_8,param_9,param_10,param_11);
    uVar9 = local_58;
    if (((*(long **)(local_58 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
       (lVar13 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x78), lVar13 != 0)) {
      param_6 = (long *********)0x0;
      FUN_710379e9c0(*(long **)(local_58 + 8),lVar13,0);
    }
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_7103776910(&local_60,**(long **)(lVar6 + 0x150) + 8,(long ****)"set_dummy",param_6,param_7,
                   param_8,param_9,param_10,param_11);
    uVar9 = local_58;
    if (*(long **)(local_58 + 8) != (long *)0x0) {
      if (*(char *)(DAT_71053396a0 + 0x1920) == '\0') {
        FUN_71037790a0(local_58,1,param_6,param_7,param_8,param_9,param_10,param_11);
      }
      else {
        param_6 = (long *********)0x0;
        FUN_710379e9c0(*(long **)(local_58 + 8),DAT_71053396a0 + 0x1a98,0);
      }
    }
    local_58 = 0;
    local_60 = &PTR_FUN_710523d9a8;
    if (uVar9 != 0) {
      local_58 = 0;
      local_60 = &PTR_FUN_710523d9a8;
      FUN_710392eb40(uVar9);
    }
    lVar13 = DAT_7105329740;
    lVar5 = *(long *)(DAT_7105329740 + 8);
    if (DAT_7105339168 != 0) {
      pfVar1 = (float *)(DAT_7105339168 + 0x72b4);
      fVar14 = *(float *)(lVar5 + 0x18c);
      param_2 = *pfVar1;
      if (param_2 != fVar14) {
        *(undefined1 *)(DAT_7105339168 + 0x72b9) = 1;
        *pfVar1 = fVar14;
        lVar5 = *(long *)(lVar13 + 8);
      }
    }
    if (*(int *)(lVar5 + 0x4d8) == 1) {
      if (*(uint **)(lVar5 + 0x1c0) == *(uint **)(lVar5 + 0x1b8)) goto LAB_7101cfae44;
      local_98[0] = **(uint **)(lVar5 + 0x1b8);
      lVar13 = *(long *)(lVar5 + 0x1b8);
      lVar12 = *(long *)(lVar5 + 0x1c0);
LAB_7101cfaaa0:
      if ((ulong)(lVar12 - lVar13 >> 2) < 2) {
LAB_7101cfae44:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar11 = (undefined4 *)(lVar13 + 4);
LAB_7101cfab40:
      local_a0[0] = *puVar11;
    }
    else {
      if (*(int *)(lVar5 + 0x4d8) != 2) {
        if (*(uint **)(lVar5 + 0x1a8) == *(uint **)(lVar5 + 0x1a0)) goto LAB_7101cfae44;
        local_98[0] = **(uint **)(lVar5 + 0x1a0);
        lVar13 = *(long *)(lVar5 + 0x1a0);
        lVar12 = *(long *)(lVar5 + 0x1a8);
        goto LAB_7101cfaaa0;
      }
      local_98[0] = (uint)*(byte *)(lVar5 + 0x568);
      if (*(byte *)(lVar5 + 0x568) != 0) {
        local_98[0] = *(uint *)(lVar5 + 0x738);
      }
      if (*(char *)(lVar5 + 0x568) != '\0') {
        puVar11 = (undefined4 *)(lVar5 + 0x73c);
        goto LAB_7101cfab40;
      }
      local_a0[0] = 0;
    }
    if (*(long *)(lVar5 + 0x88) == *(long *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar13 = **(long **)(lVar6 + 0x148) + 8;
    if (*(uint *)(*(long *)(lVar5 + 0x80) + 0x814) < 2) {
      FUN_7103776910(&local_60,lVar13,(long ****)"set_pic_band_champion_00",param_6,param_7,param_8,
                     param_9,param_10,param_11);
      puVar8 = local_98;
      FUN_7103779d90((long)&local_60,1,(byte *)puVar8);
      uVar9 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_70,**(long **)(lVar6 + 0x148) + 8,(long ****)"set_pic_band_champion_01",
                     puVar8,param_7,param_8,param_9,param_10,param_11);
      FUN_7103779d90((long)&local_70,1,(byte *)local_a0);
      uVar9 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      fVar14 = extraout_s0_07;
      uVar15 = extraout_var_07;
      uVar16 = extraout_var_22;
    }
    else {
      FUN_7103776910(&local_60,lVar13,(long ****)"set_pic_band_champion_00",param_6,param_7,param_8,
                     param_9,param_10,param_11);
      puVar8 = local_98;
      FUN_7103779d90((long)&local_60,1,(byte *)puVar8);
      uVar9 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_70,**(long **)(lVar6 + 0x148) + 8,(long ****)"set_pic_band_champion_01",
                     puVar8,param_7,param_8,param_9,param_10,param_11);
      puVar8 = local_98;
      FUN_7103779d90((long)&local_70,1,(byte *)puVar8);
      uVar9 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_80,**(long **)(lVar6 + 0x148) + 8,(long ****)"set_pic_band_champion_03",
                     puVar8,param_7,param_8,param_9,param_10,param_11);
      FUN_7103779d90((long)&local_80,1,(byte *)local_a0);
      uVar9 = local_78;
      local_80 = &PTR_FUN_710523d9a8;
      local_78 = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_90,**(long **)(lVar6 + 0x148) + 8,(long ****)"set_pic_band_champion_04",
                     puVar7,param_7,param_8,param_9,param_10,param_11);
      FUN_7103779d90((long)&local_90,1,(byte *)local_a0);
      uVar9 = local_88;
      local_90 = &PTR_FUN_710523d9a8;
      local_88 = 0;
      fVar14 = extraout_s0_06;
      uVar15 = extraout_var_06;
      uVar16 = extraout_var_21;
    }
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
      fVar14 = extraout_s0_08;
      uVar15 = extraout_var_08;
      uVar16 = extraout_var_23;
    }
LAB_7101cfacb8:
    uVar9 = (ulong)uVar3;
  }
  auVar4._4_4_ = uVar15;
  auVar4._0_4_ = fVar14;
  auVar4._8_8_ = uVar16;
  FUN_7101cf8af0(auVar4,param_2,param_3,lVar6,uVar2,uVar9,ppppbVar10,param_8,param_9,param_10,
                 param_11);
  if (*(int *)(param_4 + 0xf0) == 0) {
    FUN_71033145d0(DAT_710532f8d0,0xd9ffff190cdf8dca,1,ppppbVar10,param_8,param_9,param_10,param_11)
    ;
  }
LAB_7101cfacf4:
  if (*(int *)(*(long *)(param_4 + 0xe0) + 0x138) == 3) {
    if (*(uint *)(param_4 + 0xf0) < 4) {
      DAT_7105325d10 = 1;
    }
    if (0x12 < *(uint *)(param_4 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0xb4) * 4 + 0x68) = 3;
  }
  return;
}

