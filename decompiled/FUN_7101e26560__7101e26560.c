// addr:      7101e26560
// offset:    0x1e26560
// name:      FUN_7101e26560
// mangled:   
// signature: undefined __cdecl FUN_7101e26560(undefined1[16] param_1, float param_2, float param_3, float param_4, long param_5, undefined8 param_6, undefined8 param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e26560(undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                   undefined8 param_6,undefined8 param_7,byte ****param_8,long ****param_9,
                   undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  short *psVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long *********ppppppppplVar13;
  undefined8 uVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  char *pcVar22;
  byte *pbVar23;
  void *pvVar24;
  long lVar25;
  byte bVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  int *piVar33;
  uint uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  void *__dest;
  ushort uVar38;
  long lVar39;
  undefined2 *puVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  int iVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined **local_1d8;
  long *local_1d0 [8];
  undefined **local_190;
  long *local_188;
  undefined **local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined **local_128;
  ulong local_120;
  long ***local_118;
  ulong local_110;
  byte ***local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  byte ***local_c0;
  undefined6 local_b8;
  undefined2 uStack_b2;
  undefined4 local_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  iVar45 = *(int *)(param_5 + 0xd2c);
  if (iVar45 == 3) {
    *(undefined4 *)(param_5 + 0xd2c) = 0;
    return;
  }
  if (iVar45 == 2) {
    if (*(int *)(param_5 + 0xbdc) == 1) {
      local_b0 = 0x657361;
      pcVar22 = "set_parts_anim_base";
    }
    else {
      pcVar22 = "set_parts_anim_spirit";
      local_b0 = 0x69726970;
      uStack_ac = 0x74;
    }
    local_c0 = *(byte ****)pcVar22;
    local_b8 = (undefined6)*(undefined8 *)(pcVar22 + 8);
    uStack_b2 = (undefined2)((ulong)*(undefined8 *)(pcVar22 + 8) >> 0x30);
    iVar45 = *(int *)(param_5 + 0xd30);
    if (*(int *)(param_5 + 0xd34) < iVar45) {
      FUN_7103776640(&local_108,param_5 + 0xba0,&local_c0,param_7,param_8,param_9,param_10,param_11,
                     param_12);
      plVar11 = local_100;
      if ((local_100[1] != 0) && (lVar25 = *(long *)(local_100[1] + 0x18), lVar25 != 0)) {
        *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) & 0xfe;
      }
      local_108 = (byte ***)&PTR_FUN_710523d988;
      local_100 = (undefined8 *)0x0;
      if (plVar11 != (long *)0x0) {
        uVar27 = plVar11[3];
        plVar11[2] = (long)&PTR_FUN_710523d9a8;
        plVar11[3] = 0;
        if (uVar27 != 0) {
          FUN_710392eb40(uVar27);
        }
        FUN_710392eb40((ulong)plVar11);
      }
      FUN_7103776910(&local_108,param_5 + 0xba0,(long ****)"set_fxui_stand_trace",param_7,param_8,
                     param_9,param_10,param_11,param_12);
      puVar8 = local_100;
      FUN_710377aa20((long *)*local_100,0);
      local_108 = (byte ***)&PTR_FUN_710523d9a8;
      local_100 = (long *)0x0;
      if (puVar8 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar8);
      }
      FUN_710373b540(param_5 + 0xd78,0);
      *(undefined1 *)(param_5 + 0xf0c) = 1;
      *(undefined4 *)(param_5 + 0xd2c) = 3;
      return;
    }
    auVar47._4_4_ = iVar45;
    auVar47._0_4_ = iVar45;
    auVar47._8_4_ = iVar45;
    auVar47._12_4_ = iVar45;
    uVar14 = *(undefined8 *)(param_5 + 0xd60);
    fVar41 = (float)*(undefined8 *)(param_5 + 0xd40);
    fVar42 = (float)((ulong)*(undefined8 *)(param_5 + 0xd40) >> 0x20);
    auVar47 = NEON_scvtf(auVar47,4);
    fVar44 = (float)*(int *)(param_5 + 0xd34);
    fVar43 = 1.0 / fVar44;
    fVar41 = fVar41 + auVar47._0_4_ * ((float)uVar14 - fVar41) * fVar43;
    fVar44 = sinf(((float)iVar45 / fVar44) * 3.1415927);
    fVar44 = fVar44 * 300.0 +
             fVar42 + auVar47._4_4_ * ((float)((ulong)uVar14 >> 0x20) - fVar42) * fVar43;
    FUN_7103776910(&local_108,param_5 + 0xba0,(long ****)&local_c0,param_7,param_8,param_9,param_10,
                   param_11,param_12);
    plVar11 = local_100;
    lVar25 = *local_100;
    if (lVar25 != 0) {
      *(float *)(lVar25 + 0x30) = fVar41;
      *(float *)(lVar25 + 0x34) = fVar44;
      *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) | 0x10;
    }
    local_108 = (byte ***)&PTR_FUN_710523d9a8;
    local_100 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_108,param_5 + 0xba0,(long ****)"set_fxui_stand_trace",param_7,param_8,
                   param_9,param_10,param_11,param_12);
    plVar11 = local_100;
    lVar25 = *local_100;
    if (lVar25 != 0) {
      *(float *)(lVar25 + 0x30) = fVar41;
      *(float *)(lVar25 + 0x34) = fVar44;
      *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) | 0x10;
    }
    local_108 = (byte ***)&PTR_FUN_710523d9a8;
    local_100 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    *(int *)(param_5 + 0xd30) = *(int *)(param_5 + 0xd30) + 1;
    return;
  }
  if (iVar45 != 1) {
    return;
  }
  *(undefined4 *)(param_5 + 0xd70) = 0xffffffff;
  lVar25 = param_5 + 0xba0;
  if (*(int *)(param_5 + 0xbdc) == 1) {
    FUN_7103776640(&local_c0,lVar25,(byte ****)"set_parts_anim_base",param_7,param_8,param_9,
                   param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    if ((*(long *)(uVar27 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    iVar45 = *(int *)(*(long *)(param_5 + 0x538) + 0x2a4);
    uVar27 = (ulong)iVar45;
    if ((ulong)(*(long *)(param_5 + 0x550) - *(long *)(param_5 + 0x548) >> 2) <= uVar27) {
LAB_7101e28420:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    psVar1 = (short *)(*(long *)(param_5 + 0x548) + uVar27 * 4);
    sVar5 = *psVar1;
    lVar19 = (long)sVar5;
    lVar20 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (lVar19 == -1) {
      uVar31 = 0xffffffff;
    }
    else {
      uVar31 = (ulong)*(ushort *)(lVar20 + lVar19 * 2 + 0x60);
    }
    lVar39 = *(long *)(lVar20 + 0x20);
    uVar35 = (*(long *)(lVar20 + 0x28) - lVar39 >> 6) * -0x3333333333333333;
    puVar40 = (undefined2 *)(lVar39 + uVar31 * 0x140);
    if (uVar35 < uVar31 || uVar35 - uVar31 == 0) {
      puVar40 = &DAT_7105182b08;
    }
    uVar12 = 0;
    if ((sVar5 != -1) && (sVar5 < 2000)) {
      uVar38 = *(ushort *)(lVar20 + lVar19 * 2 + 0x60);
      uVar31 = (ulong)uVar38;
      if ((uint)uVar38 < (uint)uVar35) {
        puVar2 = (undefined2 *)(lVar39 + uVar31 * 0x140);
        if (uVar35 < uVar31 || uVar35 - uVar31 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        if (*(char *)(puVar2 + 0x2f) == '\0') {
          uVar12 = 0;
          if (*(byte *)(puVar2 + 0x36) - 1 < 3) {
            uVar12 = (char)(0x20301 >> (ulong)((*(byte *)(puVar2 + 0x36) - 1 & 3) << 3));
          }
        }
        else {
          uVar12 = 4;
        }
      }
      else {
        uVar12 = 0;
      }
    }
    pppplVar15 = (long ****)0x0;
    FUN_710339dde0((uint *)&local_c0,uVar12,'\0');
    switch(*(undefined1 *)(puVar40 + 0x34)) {
    case 0:
      local_f8 = (uint)local_f8._3_1_ << 0x18;
      local_108 = (byte ***)0xa00000000;
      local_100 = (long *)0x6f6e5f7373616c63;
      uVar30 = 0x811c9dc5;
      local_f8 = CONCAT22(local_f8._2_2_,0x656e);
      uVar34 = 99;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar34;
        uVar34 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar34 != 0);
      break;
    case 1:
      local_f8 = (uint)local_f8._3_1_ << 0x18;
      local_108 = (byte ***)0xa00000000;
      local_100 = (long *)0x6f685f7373616c63;
      uVar30 = 0x811c9dc5;
      local_f8 = CONCAT22(local_f8._2_2_,0x6570);
      uVar34 = 99;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar34;
        uVar34 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar34 != 0);
      break;
    case 2:
      local_108 = (byte ***)0x900000000;
      local_100 = (long *)0x63615f7373616c63;
      uVar30 = 0x811c9dc5;
      local_f8 = CONCAT22(local_f8._2_2_,0x65);
      uVar34 = 99;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar34;
        uVar34 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar34 != 0);
      break;
    case 3:
      local_f4 = 0;
      local_108 = (byte ***)0xc00000000;
      local_100 = (long *)0x656c5f7373616c63;
      uVar30 = 0x811c9dc5;
      local_f8 = 0x646e6567;
      uVar34 = 99;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar34;
        uVar34 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar34 != 0);
      break;
    default:
      local_f8 = (uint)local_f8._3_1_ << 0x18;
      local_108 = (byte ***)0xa00000000;
      local_100 = (long *)0x6f6e5f7373616c63;
      uVar30 = 0x811c9dc5;
      local_f8 = CONCAT22(local_f8._2_2_,0x656e);
      uVar34 = 99;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar34;
        uVar34 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar34 != 0);
    }
    local_108 = (byte ***)CONCAT44(local_108._4_4_,uVar30);
    FUN_7103776640(&local_170,lVar25,(byte ****)"set_parts_anim_base",pppplVar15,param_8,param_9,
                   param_10,param_11,param_12);
    uVar31 = local_168;
    FUN_7103778300(0x3f800000,local_168,(long)&local_b8);
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar31 != 0) {
      uVar35 = *(ulong *)(uVar31 + 0x18);
      *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar31 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar31);
    }
    FUN_7103776640(&local_170,lVar25,(byte ****)"set_parts_anim_base",pppplVar15,param_8,param_9,
                   param_10,param_11,param_12);
    uVar31 = local_168;
    FUN_7103778300(0x3f800000,local_168,(long)&local_100);
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    uVar14 = extraout_x1;
    if (uVar31 != 0) {
      uVar35 = *(ulong *)(uVar31 + 0x18);
      *(undefined ***)(uVar31 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar31 + 0x18) = 0;
      if (uVar35 != 0) {
        FUN_710392eb40(uVar35);
      }
      FUN_710392eb40(uVar31);
      uVar14 = extraout_x1_00;
    }
    lVar19 = *(long *)(param_5 + 0x538);
    iVar17 = *(int *)(lVar19 + 0x2c8);
    if ((iVar17 < 0) || (*(int *)(lVar19 + 0x2c0) <= iVar17)) {
      FUN_7103776290(&local_170,uVar14,pppplVar15,param_8,param_9,param_10,param_11,param_12);
    }
    else {
      FUN_7103776390(&local_170,
                     (undefined8 *)(*(long *)(*(long *)(lVar19 + 0x168) + (long)iVar17 * 8) + 8),
                     pppplVar15,param_8,param_9,param_10,param_11,param_12);
    }
    fVar41 = FUN_710379e030(**(long **)(local_168 + 0x18));
    fVar44 = param_3 + (param_4 - param_3) * 0.5;
    uVar31 = (ulong)(uint)fVar44;
    param_4 = fVar41 + (param_2 - fVar41) * 0.5 + -960.0;
    uVar14 = 0x44070000;
    *(undefined8 *)(param_5 + 0xd48) = 0;
    *(float *)(param_5 + 0xd40) = param_4;
    *(float *)(param_5 + 0xd44) = 540.0 - fVar44;
    *(short *)(param_5 + 0xd70) = *psVar1;
    FUN_7103776910(&local_1d8,lVar25,(long ****)"set_parts_anim_base",pppplVar15,param_8,param_9,
                   param_10,param_11,param_12);
    plVar11 = local_1d0[0];
    lVar19 = *local_1d0[0];
    if (lVar19 != 0) {
      *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(param_5 + 0xd40);
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 0x10;
    }
    local_1d8 = &PTR_FUN_710523d9a8;
    local_1d0[0] = (long *)0x0;
    uVar46 = extraout_x1_01;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
      uVar46 = extraout_x1_02;
    }
    if (uVar27 < (ulong)(*(long *)(param_5 + 0x550) - *(long *)(param_5 + 0x548) >> 2)) {
      pcVar22 = (char *)(*(long *)(param_5 + 0x548) + uVar27 * 4 + 2);
      cVar4 = *pcVar22;
      if (cVar4 != '\0') {
        *pcVar22 = cVar4 + -1;
      }
    }
    if ((char)psVar1[1] == '\0') {
      lVar19 = *(long *)(param_5 + 0x538);
      iVar17 = *(int *)(lVar19 + 0x2c8);
      if ((iVar17 < 0) || (*(int *)(lVar19 + 0x2c0) <= iVar17)) {
        FUN_7103776290(&local_1d8,uVar46,pppplVar15,param_8,param_9,param_10,param_11,param_12);
      }
      else {
        FUN_7103776390(&local_1d8,
                       (undefined8 *)(*(long *)(*(long *)(lVar19 + 0x168) + (long)iVar17 * 8) + 8),
                       pppplVar15,param_8,param_9,param_10,param_11,param_12);
      }
      FUN_7103778300(0x3f800000,(long)local_1d0[0],0x71044228f0);
      plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar15,param_8,param_9,param_10,param_11,param_12)
      ;
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_128 = (undefined **)((ulong)local_128 & 0xffffffff00000000);
          local_118 = (long ***)&DAT_00000008;
          pppplVar15 = &local_118;
          uVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
          if (((uVar27 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar15,param_8,param_9,param_10,param_11,
                                               param_12), plVar11 != (long *)0x0))
          goto LAB_7101e27414;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101e27414:
      *plVar11 = 0;
      lVar19 = local_1d0[0][1];
      if ((lVar19 == 0) || (*(long *)(lVar19 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar10 = (long *)FUN_7103796f20(*(long *)(lVar19 + 0x60),*(long *)(lVar19 + 0x18) + 0xb0);
        *plVar11 = (long)plVar10;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x1f8))(plVar10,0);
          uVar27 = (**(code **)(*plVar10 + 0x200))(plVar10);
          if ((uVar27 & 1) == 0) {
            uVar30 = 1;
          }
          else {
            uVar30 = (**(code **)(*plVar10 + 0x210))(plVar10);
            uVar30 = uVar30 ^ 1;
          }
          (**(code **)(*plVar10 + 0x388))(plVar10,uVar30 & 1,0);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      lVar20 = *(long *)(param_5 + 0x548);
      uVar36 = *(long *)(param_5 + 0x550) - lVar20;
      uVar30 = *(uint *)(*(long *)(param_5 + 0x538) + 0x2a4);
      uVar37 = (ulong)uVar30;
      uVar35 = (ulong)(int)uVar30;
      lVar19 = (-(ulong)(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar37 << 2) + 6;
      uVar27 = uVar35;
      do {
        uVar27 = uVar27 + 1;
        if ((long)(uVar36 * 0x40000000) >> 0x20 <= (long)uVar27) goto LAB_7101e27e8c;
        if ((ulong)((long)uVar36 >> 2) <= uVar27) goto LAB_7101e28420;
        pcVar22 = (char *)(lVar20 + lVar19);
        lVar19 = lVar19 + 4;
        uVar30 = (int)uVar37 + 1;
        uVar37 = (ulong)uVar30;
      } while (*pcVar22 == '\0');
      if (uVar30 == 0xffffffff) {
LAB_7101e27e8c:
        lVar19 = uVar35 * 4 + -2;
        do {
          uVar27 = uVar35 - 1;
          if ((long)uVar35 < 1) goto LAB_7101e27f38;
          if ((ulong)((long)uVar36 >> 2) <= uVar27) goto LAB_7101e28420;
          pcVar22 = (char *)(lVar20 + lVar19);
          lVar19 = lVar19 + -4;
          uVar35 = uVar27;
        } while (*pcVar22 == '\0');
        uVar30 = (uint)uVar27;
      }
      if ((-1 < (int)uVar30) && ((int)uVar30 < (int)(uVar36 >> 2))) {
        *(undefined4 *)(param_5 + 0xefc) = 6;
        *(uint *)(param_5 + 0xef8) = uVar30;
        *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_5 + 0x160) + 0x600) + 0x4aa) = 0;
        lVar19 = *(long *)(*(long *)**(undefined8 **)(param_5 + 0x160) + 0x600);
        memset((void *)(lVar19 + 0x198),0,0x264);
        *(undefined8 *)(lVar19 + 0x40c) = 0;
        *(undefined8 *)(lVar19 + 0x424) = 0;
        *(undefined4 *)(lVar19 + 0x480) = 0;
        uVar9 = uRam0000007107459008;
        uVar46 = _ConstantZero;
        *(undefined8 *)(lVar19 + 0x4a0) = 0;
        *(undefined8 *)(lVar19 + 0x498) = 0;
        *(undefined8 *)(lVar19 + 0x468) = uVar9;
        *(undefined8 *)(lVar19 + 0x460) = uVar46;
        *(undefined8 *)(lVar19 + 0x438) = uVar9;
        *(undefined8 *)(lVar19 + 0x430) = uVar46;
        *(undefined8 *)(lVar19 + 0x448) = uVar9;
        *(undefined8 *)(lVar19 + 0x440) = uVar46;
        *(undefined8 *)(lVar19 + 0x458) = uVar9;
        *(undefined8 *)(lVar19 + 0x450) = uVar46;
      }
LAB_7101e27f38:
      plVar11 = local_1d0[0];
      local_1d8 = &PTR_FUN_710523d988;
      local_1d0[0] = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        uVar27 = plVar11[3];
        plVar11[2] = (long)&PTR_FUN_710523d9a8;
        plVar11[3] = 0;
        if (uVar27 != 0) {
          FUN_710392eb40(uVar27);
        }
        FUN_710392eb40((ulong)plVar11);
      }
    }
    param_3 = (float)uVar14;
    param_2 = (float)uVar31;
    lVar19 = *(long *)(param_5 + 0x538);
    if (*(long **)(lVar19 + 0x160) != (long *)0x0) {
      (**(code **)(**(long **)(lVar19 + 0x160) + 0x18))();
      param_3 = (float)uVar14;
      param_2 = (float)uVar31;
      iVar17 = *(int *)(lVar19 + 0x2c4);
      if (0 < iVar17) {
        lVar20 = 0;
        do {
          if ((iVar45 - *(int *)(lVar19 + 0x29c) == (int)lVar20) &&
             (iVar45 < *(int *)(lVar19 + 0x288))) {
            lVar39 = *(long *)(lVar19 + 0x168);
            lVar28 = *(long *)(lVar39 + lVar20 * 8);
            lVar32 = **(long **)(lVar28 + 0x20);
            if (lVar32 != 0) {
              *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) | 1;
              lVar28 = *(long *)(lVar39 + lVar20 * 8);
            }
            *(int *)(lVar28 + 0x30) = iVar45;
            lVar39 = *(long *)(lVar39 + lVar20 * 8);
            (**(code **)(**(long **)(lVar19 + 0x160) + 0x10))
                      (*(long **)(lVar19 + 0x160),*(undefined4 *)(lVar39 + 0x30),lVar39 + 8,
                       lVar39 + 0x18);
            iVar17 = *(int *)(lVar19 + 0x2c4);
          }
          param_3 = (float)uVar14;
          param_2 = (float)uVar31;
          lVar20 = lVar20 + 1;
        } while (lVar20 < iVar17);
      }
      (**(code **)(**(long **)(lVar19 + 0x160) + 0x20))();
    }
    uVar27 = local_168;
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 == 0) goto LAB_7101e28030;
LAB_7101e28018:
    uVar31 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar27);
  }
  else if (*(int *)(param_5 + 0xbdc) == 2) {
    FUN_7103776640(&local_118,lVar25,(byte ****)"set_parts_anim_spirit",param_7,param_8,param_9,
                   param_10,param_11,param_12);
    if ((*(long *)(local_110 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(local_110 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    }
    iVar45 = *(int *)(*(long *)(param_5 + 0x570) + 0x2a4);
    if (iVar45 < 0) {
LAB_7101e269f4:
      lVar19 = *DAT_7105329f98;
      uVar38 = 0xffff;
      puVar40 = &DAT_710532a878;
    }
    else {
      if ((*(uint *)(param_5 + 0x7e8) & 0xffffff) == 0) {
        iVar17 = (int)((ulong)(*(long *)(param_5 + 0x768) - *(long *)(param_5 + 0x760)) >> 3);
      }
      else {
        iVar17 = *(int *)(param_5 + 0x828);
      }
      if (iVar17 <= iVar45) goto LAB_7101e269f4;
      uVar38 = **(ushort **)(*(long *)(param_5 + 0x760) + (long)iVar45 * 8);
      lVar19 = *DAT_7105329f98;
      if (uVar38 >> 4 < 0x177) {
        puVar40 = (undefined2 *)(*(long *)(lVar19 + 0x30) + (ulong)uVar38 * 0x50 + 72000);
      }
      else {
        puVar40 = &DAT_710532a878;
        if ((uVar38 - 6000 < 100) &&
           (lVar20 = *(long *)(lVar19 + 0x30) + ((ulong)(uVar38 - 6000) & 0xffff) * 0x50,
           *(short *)(lVar20 + 0x88cc8) != -1)) {
          puVar40 = (undefined2 *)(lVar20 + 0x88cc0);
        }
      }
    }
    lVar39 = *(long *)(DAT_710532f730 + 8);
    uVar6 = puVar40[4];
    lVar20 = *(long *)(lVar39 + 0x1d8);
    if ((long)(short)uVar6 == -1) {
      uVar27 = 0xffffffff;
    }
    else {
      uVar27 = (ulong)*(ushort *)(lVar20 + (long)(short)uVar6 * 2 + 0x60);
    }
    ppppppppplVar13 = (long *********)(ulong)uVar6;
    uVar31 = (*(long *)(lVar20 + 0x28) - *(long *)(lVar20 + 0x20) >> 6) * -0x3333333333333333;
    ppppbVar16 = (byte ****)0x1;
    puVar2 = (undefined2 *)(*(long *)(lVar20 + 0x20) + uVar27 * 0x140);
    if (uVar31 < uVar27 || uVar31 - uVar27 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    FUN_710259c150(*(long *)(lVar19 + 0x20),1,uVar6,(byte ****)0x1,param_9,param_10,param_11,
                   param_12);
    uVar6 = puVar40[4];
    lVar19 = *(long *)(lVar19 + 0x20);
    if (uVar6 != 0xffff) {
      puVar21 = *(ushort **)(lVar19 + 0x28);
      lVar20 = *(long *)(lVar19 + 0x30) - (long)puVar21;
      uVar27 = lVar20 >> 3;
      if (0 < (int)uVar27) {
        uVar31 = 0;
        do {
          if (uVar27 <= uVar31) goto LAB_7101e28420;
          if (*puVar21 == uVar6) {
            if (-1 < (int)uVar31) {
              uVar27 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),uVar6);
              ppppppppplVar13 = (long *********)&SUB_00000018;
              plVar11 = FUN_710323faf0((long *)(lVar19 + 8),uVar27,(undefined **)&SUB_00000018,
                                       ppppbVar16,param_9,param_10,param_11,param_12);
              goto LAB_7101e26b14;
            }
            break;
          }
          uVar31 = uVar31 + 1;
          puVar21 = puVar21 + 4;
        } while ((long)uVar31 < lVar20 * 0x20000000 >> 0x20);
      }
    }
    plVar11 = (long *)(lVar19 + 0x70);
LAB_7101e26b14:
    FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_rep_spirit",ppppppppplVar13,ppppbVar16
                   ,param_9,param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    FUN_7103778b80(uVar27,(long)plVar11,ppppppppplVar13,ppppbVar16,param_9,param_10,param_11,
                   param_12);
    local_c0 = (byte ***)&PTR_FUN_710523d9a8;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_txt_level",ppppppppplVar13,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    ppppbVar16 = (byte ****)(ulong)(ushort)puVar40[8];
    uVar14 = 1;
    FUN_710377a280((long)&local_c0,(byte *)"mnu_spirits_select_lv",1);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    local_c0 = (byte ***)&PTR_FUN_710523d9a8;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    cVar4 = *(char *)(puVar2 + 0x2f);
    FUN_7103776640(&local_128,(long)&local_118,(byte ****)"set_parts_icon_super",uVar14,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    if (((cVar4 == '\0') && (sVar5 = puVar40[4], sVar5 != -1)) && (sVar5 < 2000)) {
      lVar19 = *(long *)(lVar39 + 0x1d8);
      uVar6 = *(ushort *)(lVar19 + (long)(int)sVar5 * 2 + 0x60);
      uVar30 = (int)((ulong)(*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20)) >> 6) *
               -0x33333333;
      if (((uVar30 <= uVar6) ||
          (uVar6 = *(ushort *)(lVar19 + (ulong)uVar6 * 2 + 0x1000), uVar30 <= uVar6)) ||
         (*(short *)(*(long *)(lVar19 + 0x20) + (ulong)uVar6 * 0x140) == -1)) goto LAB_7101e26ba8;
      if ((ushort)puVar40[8] < 99) {
        FUN_7103778300(0x3f800000,local_120,0x710437a53a);
      }
      else {
        FUN_7103778300(0x3f800000,local_120,0x7104455010);
        FUN_7103778300(0x3f800000,local_110,0x71043e06a3);
      }
    }
    else {
LAB_7101e26ba8:
      if (puVar2[0x48] == 0) {
        pcVar22 = "off";
      }
      else {
        pcVar22 = "super";
      }
      FUN_7103778300(0x3f800000,local_120,(long)pcVar22);
      if (cVar4 != '\0') {
        FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_spirit",uVar14,ppppbVar16,
                       param_9,param_10,param_11,param_12);
        uVar27 = CONCAT26(uStack_b2,local_b8);
        FUN_7103778300(0x3f800000,uVar27,0x71043e06a3);
        local_c0 = (byte ***)&PTR_FUN_710523d988;
        local_b8 = 0;
        uStack_b2 = 0;
        if (uVar27 != 0) {
          uVar31 = *(ulong *)(uVar27 + 0x18);
          *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar27 + 0x18) = 0;
          if (uVar31 != 0) {
            FUN_710392eb40(uVar31);
          }
          FUN_710392eb40(uVar27);
        }
      }
    }
    FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_have",uVar14,ppppbVar16,param_9,
                   param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    FUN_7103778300(0x3f800000,uVar27,0x71043cd335);
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_icon_favorite",uVar14,ppppbVar16
                   ,param_9,param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    if ((*(long *)(uVar27 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_icon_using",uVar14,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    if ((*(long *)(uVar27 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_icon_condition",uVar14,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    if ((*(long *)(uVar27 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_icon_counter",uVar14,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    if ((*(long *)(uVar27 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_c0,(long)&local_118,(byte ****)"set_parts_icon_new",uVar14,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    uVar27 = CONCAT26(uStack_b2,local_b8);
    if ((*(long *)(uVar27 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(uVar27 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    uStack_b2 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_txt_num_slot",uVar14,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    plVar11 = (long *)CONCAT26(uStack_b2,local_b8);
    lVar19 = *plVar11;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d9a8;
    local_b8 = 0;
    uStack_b2 = 0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_txt_num_status",uVar14,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    plVar11 = (long *)CONCAT26(uStack_b2,local_b8);
    lVar19 = *plVar11;
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_c0 = (byte ***)&PTR_FUN_710523d9a8;
    local_b8 = 0;
    uStack_b2 = 0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    sVar5 = puVar40[4];
    uVar12 = 0;
    if ((sVar5 != -1) && (sVar5 < 2000)) {
      lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar6 = *(ushort *)(lVar19 + (long)(int)sVar5 * 2 + 0x60);
      uVar27 = (ulong)uVar6;
      uVar31 = (*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar6 < (uint)uVar31) {
        puVar3 = (undefined2 *)(*(long *)(lVar19 + 0x20) + uVar27 * 0x140);
        if (uVar31 < uVar27 || uVar31 - uVar27 == 0) {
          puVar3 = &DAT_7105182b08;
        }
        if (*(char *)(puVar3 + 0x2f) == '\0') {
          if (2 < *(byte *)(puVar3 + 0x36) - 1) goto LAB_7101e274b0;
          uVar12 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar3 + 0x36) - 1 & 3) << 3));
        }
        else {
          uVar12 = 4;
        }
      }
      else {
LAB_7101e274b0:
        uVar12 = 0;
      }
    }
    pppplVar15 = (long ****)0x0;
    FUN_710339dde0((uint *)&local_c0,uVar12,'\0');
    FUN_7103776640(&local_108,(long)&local_118,(byte ****)"set_parts_atr_icon",pppplVar15,ppppbVar16
                   ,param_9,param_10,param_11,param_12);
    plVar11 = local_100;
    FUN_7103778300(0x3f800000,(long)local_100,(long)&local_b8);
    local_108 = (byte ***)&PTR_FUN_710523d988;
    local_100 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      uVar27 = plVar11[3];
      plVar11[2] = (long)&PTR_FUN_710523d9a8;
      plVar11[3] = 0;
      if (uVar27 != 0) {
        FUN_710392eb40(uVar27);
      }
      FUN_710392eb40((ulong)plVar11);
    }
    uVar34 = 0x811c9dc5;
    FUN_7103778300(0x3f800000,local_110,(long)&local_b8);
    uVar30 = uVar34;
    switch(*(undefined1 *)(puVar2 + 0x34)) {
    case 0:
      local_108 = (byte ***)0xa00000000;
      local_100 = (long *)0x6f6e5f7373616c63;
      uVar29 = 99;
      local_f8 = CONCAT13(local_f8._3_1_,0x656e);
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar29 != 0);
      break;
    case 1:
      local_108 = (byte ***)0xa00000000;
      local_100 = (long *)0x6f685f7373616c63;
      uVar29 = 99;
      local_f8 = CONCAT13(local_f8._3_1_,0x6570);
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar29 != 0);
      break;
    case 2:
      local_108 = (byte ***)0x900000000;
      local_100 = (long *)0x63615f7373616c63;
      local_f8 = CONCAT22(local_f8._2_2_,0x65);
      uVar29 = 99;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar29 != 0);
      break;
    case 3:
      local_108 = (byte ***)0xc00000000;
      local_100 = (long *)0x656c5f7373616c63;
      local_f8 = 0x646e6567;
      uVar29 = 99;
      local_f4 = 0;
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar29 != 0);
      break;
    default:
      local_108 = (byte ***)0xa00000000;
      local_100 = (long *)0x6f6e5f7373616c63;
      uVar29 = 99;
      local_f8 = CONCAT13(local_f8._3_1_,0x656e);
      pbVar23 = (byte *)((long)&local_100 + 1);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar29;
        uVar29 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar29 != 0);
    }
    local_108 = (byte ***)CONCAT44(local_108._4_4_,uVar30);
    FUN_7103778300(0x3f800000,local_110,(long)&local_100);
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_legend",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    FUN_7103778300(0x3f800000,local_168,(long)&local_100);
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_ace",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    FUN_7103778300(0x3f800000,local_168,(long)&local_100);
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_hope",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    FUN_7103778300(0x3f800000,local_168,(long)&local_100);
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_none",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    FUN_7103778300(0x3f800000,local_168,(long)&local_100);
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_legend",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    if ((*(long *)(local_168 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(local_168 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) =
           *(byte *)(lVar19 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\x03';
    }
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_ace",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    if ((*(long *)(local_168 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(local_168 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) =
           *(byte *)(lVar19 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\x02';
    }
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_hope",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    if ((*(long *)(local_168 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(local_168 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) =
           *(byte *)(lVar19 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\x01';
    }
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    FUN_7103776640(&local_170,(long)&local_118,(byte ****)"set_parts_class_none",pppplVar15,
                   ppppbVar16,param_9,param_10,param_11,param_12);
    uVar27 = local_168;
    if ((*(long *)(local_168 + 8) != 0) &&
       (lVar19 = *(long *)(*(long *)(local_168 + 8) + 0x18), lVar19 != 0)) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe | *(char *)(puVar2 + 0x34) == '\0';
    }
    local_170 = &PTR_FUN_710523d988;
    local_168 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    plVar11 = (long *)(param_5 + 0x570);
    local_168 = CONCAT26(local_168._6_2_,0x5f6d696e61);
    pcVar22 = (char *)((long)&local_168 + 1);
    do {
      cVar4 = *pcVar22;
      pcVar22 = pcVar22 + 1;
    } while (cVar4 != '\0');
    lVar19 = 0;
    local_170._4_4_ = 5;
    do {
      cVar4 = *(char *)((long)&local_100 + lVar19);
      if (cVar4 == '\0') break;
      lVar20 = (long)local_170._4_4_;
      local_170._4_4_ = local_170._4_4_ + 1;
      lVar19 = lVar19 + 1;
      *(char *)((long)&local_168 + lVar20) = cVar4;
    } while ((int)lVar19 + 4U < 0x3e);
    *(undefined1 *)((long)&local_168 + (long)local_170._4_4_) = 0;
    uVar30 = (uint)(byte)local_168;
    if ((byte)local_168 != 0) {
      pbVar23 = (byte *)((long)&local_168 + 1);
      do {
        uVar34 = uVar34 * 0x89 ^ uVar30;
        uVar30 = (uint)*pbVar23;
        pbVar23 = pbVar23 + 1;
      } while (uVar30 != 0);
    }
    local_170 = (undefined **)CONCAT44(local_170._4_4_,uVar34);
    FUN_7103776640(&local_1d8,(long)&local_118,(byte ****)"set_parts_spirit",pppplVar15,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    plVar10 = local_1d0[0];
    FUN_7103778300(0x3f800000,(long)local_1d0[0],(long)&local_168);
    local_1d8 = &PTR_FUN_710523d988;
    local_1d0[0] = (long *)0x0;
    uVar14 = extraout_x1_03;
    if (plVar10 != (long *)0x0) {
      uVar27 = plVar10[3];
      plVar10[2] = (long)&PTR_FUN_710523d9a8;
      plVar10[3] = 0;
      if (uVar27 != 0) {
        FUN_710392eb40(uVar27);
      }
      FUN_710392eb40((ulong)plVar10);
      uVar14 = extraout_x1_04;
    }
    lVar19 = *plVar11;
    iVar17 = *(int *)(lVar19 + 0x2c8);
    if ((iVar17 < 0) || (*(int *)(lVar19 + 0x2c0) <= iVar17)) {
      FUN_7103776290(&local_180,uVar14,pppplVar15,ppppbVar16,param_9,param_10,param_11,param_12);
    }
    else {
      FUN_7103776390(&local_180,
                     (undefined8 *)(*(long *)(*(long *)(lVar19 + 0x168) + (long)iVar17 * 8) + 8),
                     pppplVar15,ppppbVar16,param_9,param_10,param_11,param_12);
    }
    fVar41 = FUN_710379e030(**(long **)(local_178 + 0x18));
    fVar44 = 540.0 - (param_3 + (param_4 - param_3) * 0.5);
    uVar27 = (ulong)(uint)fVar44;
    uVar14 = CONCAT44(fVar44,fVar41 + (param_2 - fVar41) * 0.5 + -960.0);
    *(undefined8 *)(param_5 + 0xd48) = 0;
    *(undefined8 *)(param_5 + 0xd40) = uVar14;
    FUN_7103776910(&local_1d8,lVar25,(long ****)"set_parts_anim_spirit",pppplVar15,ppppbVar16,
                   param_9,param_10,param_11,param_12);
    plVar10 = local_1d0[0];
    lVar19 = *local_1d0[0];
    if (lVar19 != 0) {
      *(undefined8 *)(lVar19 + 0x30) = *(undefined8 *)(param_5 + 0xd40);
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 0x10;
    }
    local_1d8 = &PTR_FUN_710523d9a8;
    local_1d0[0] = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    uVar31 = (ulong)(short)puVar40[4];
    lVar19 = *(long *)(lVar39 + 0x1d8);
    if (uVar31 != 0xffffffffffffffff) {
      uVar31 = (ulong)*(ushort *)(lVar19 + uVar31 * 2 + 0x60);
    }
    if (((uint)uVar31 <
         (uint)((int)((ulong)(*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20)) >> 6) *
               -0x33333333)) &&
       (*(char *)(*(long *)(lVar19 + 0x20) + (uVar31 & 0xffffffff) * 0x140 + 0x5e) == '\x01')) {
      uVar31 = FUN_71032a0fd0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x218),puVar2[0x35]);
      FUN_7103776910(&local_190,(long)&local_118,(long ****)"set_txt_num_slot",pppplVar15,ppppbVar16
                     ,param_9,param_10,param_11,param_12);
      uVar30 = (uint)uVar31 & 0xff;
      if (2 < uVar30 - 1) {
        pcVar22 = "cost_00";
        goto LAB_7101e27cf0;
      }
      FUN_71003a4ca0((uint *)&local_1d8,"cost_%02d",(ulong)uVar30,pppplVar15,ppppbVar16,param_9,
                     param_10,param_11,param_12);
      FUN_7103778300(0x3f800000,local_110,(long)local_1d0);
      ppppbVar16 = (byte ****)(ulong)uVar30;
LAB_7101e27cb8:
      pppplVar15 = (long ****)0x1;
      FUN_710377a280((long)&local_190,(byte *)"mnu_spirits_select_sort_n",1);
      lVar19 = *local_188;
      plVar10 = local_188;
      if (lVar19 != 0) {
        bVar26 = *(byte *)(lVar19 + 0x58) | 1;
        goto LAB_7101e27d0c;
      }
    }
    else {
      FUN_7103776910(&local_190,(long)&local_118,(long ****)"set_txt_num_slot",pppplVar15,ppppbVar16
                     ,param_9,param_10,param_11,param_12);
      if (*(byte *)((long)puVar2 + 0x69) - 1 < 3) {
        FUN_71003a4ca0((uint *)&local_1d8,"slot_%02d",(ulong)*(byte *)((long)puVar2 + 0x69),
                       pppplVar15,ppppbVar16,param_9,param_10,param_11,param_12);
        FUN_7103778300(0x3f800000,local_110,(long)local_1d0);
        ppppbVar16 = (byte ****)(ulong)*(byte *)((long)puVar2 + 0x69);
        goto LAB_7101e27cb8;
      }
      pcVar22 = "slot_00";
LAB_7101e27cf0:
      FUN_7103778300(0x3f800000,local_110,(long)pcVar22);
      lVar19 = *local_188;
      plVar10 = local_188;
      if (lVar19 != 0) {
        bVar26 = *(byte *)(lVar19 + 0x58) & 0xfe;
LAB_7101e27d0c:
        *(byte *)(lVar19 + 0x58) = bVar26;
        plVar10 = local_188;
      }
    }
    local_190 = &PTR_FUN_710523d9a8;
    local_188 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    param_3 = (float)uVar14;
    param_2 = (float)uVar27;
    *(ushort *)(param_5 + 0xd72) = uVar38;
    __dest = *(void **)(param_5 + 0x760);
    pvVar24 = *(void **)(param_5 + 0x768);
    iVar17 = iVar45;
    if (__dest != pvVar24) {
      do {
        if (iVar17 == 0) {
          pppplVar15 = (long ****)((long)pvVar24 - ((long)__dest + 8));
          lVar19 = (long)pppplVar15 >> 3;
          if (pppplVar15 != (long ****)0x0) {
            memmove(__dest,(void *)((long)__dest + 8),(size_t)pppplVar15);
          }
          pvVar24 = (void *)((long)__dest + lVar19 * 8);
          *(void **)(param_5 + 0x768) = pvVar24;
        }
        else {
          __dest = (void *)((long)__dest + 8);
        }
        param_3 = (float)uVar14;
        param_2 = (float)uVar27;
        iVar17 = iVar17 + -1;
      } while (__dest != pvVar24);
    }
    FUN_7101e02dc0(param_5 + 0x580,iVar45,pppplVar15,ppppbVar16,param_9,param_10,param_11,param_12);
    if ((*(uint *)(param_5 + 0x7e8) & 0xffffff) == 0) {
      iVar45 = (int)((ulong)(*(long *)(param_5 + 0x768) - *(long *)(param_5 + 0x760)) >> 3);
    }
    else {
      iVar45 = *(int *)(param_5 + 0x828);
    }
    FUN_7103783690(plVar11,iVar45);
    FUN_710377cc80(*plVar11,1);
    uVar27 = local_178;
    local_180 = &PTR_FUN_710523d988;
    local_178 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    uVar27 = local_120;
    local_128 = &PTR_FUN_710523d988;
    local_120 = 0;
    if (uVar27 != 0) {
      uVar31 = *(ulong *)(uVar27 + 0x18);
      *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar27 + 0x18) = 0;
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
      FUN_710392eb40(uVar27);
    }
    uVar27 = local_110;
    local_118 = (long ***)&PTR_FUN_710523d988;
    local_110 = 0;
    if (uVar27 != 0) goto LAB_7101e28018;
  }
LAB_7101e28030:
  uVar27 = (ulong)*(uint *)(param_5 + 0xbf4);
  pcVar22 = "set_parts_list_%02d";
  snprintf((char *)&local_108,0x20,"set_parts_list_%02d",*(uint *)(param_5 + 0xbf4));
  FUN_7103776640(&local_1d8,lVar25,&local_108,pcVar22,uVar27,param_9,param_10,param_11,param_12);
  ppppbVar16 = (byte ****)(ulong)*(uint *)(param_5 + 0xbf8);
  pcVar22 = "set_parts_base_%02d";
  snprintf((char *)&local_170,0x20,"set_parts_base_%02d",*(uint *)(param_5 + 0xbf8));
  FUN_7103776640(&local_118,(long)&local_1d8,(byte ****)&local_170,pcVar22,ppppbVar16,param_9,
                 param_10,param_11,param_12);
  fVar41 = FUN_710379e030(**(long **)(local_110 + 0x18));
  fVar41 = fVar41 + (param_2 - fVar41) * 0.5 + -960.0;
  fVar44 = 540.0 - (param_3 + (param_4 - param_3) * 0.5);
  uVar14 = *(undefined8 *)(param_5 + 0xd40);
  fVar42 = fVar41 - (float)uVar14;
  fVar43 = fVar44 - (float)((ulong)uVar14 >> 0x20);
  *(undefined8 *)(param_5 + 0xd68) = 0;
  *(ulong *)(param_5 + 0xd60) = CONCAT44(fVar44,fVar41);
  *(ulong *)(param_5 + 0xd58) =
       CONCAT44(0.0 - (float)((ulong)*(undefined8 *)(param_5 + 0xd48) >> 0x20),
                0.0 - (float)*(undefined8 *)(param_5 + 0xd48));
  *(ulong *)(param_5 + 0xd50) = CONCAT44(fVar43,fVar42);
  fVar41 = fVar42 * fVar42 + fVar43 * fVar43;
  fVar44 = fVar42 * fVar42 + fVar43 * fVar43;
  uVar14 = NEON_frsqrte(CONCAT44(fVar44,fVar41),4);
  fVar43 = (float)((ulong)uVar14 >> 0x20);
  uVar46 = NEON_frsqrts(CONCAT44(fVar44 * fVar43,fVar41 * (float)uVar14),uVar14,4);
  fVar42 = (float)uVar14 * (float)uVar46;
  fVar43 = fVar43 * (float)((ulong)uVar46 >> 0x20);
  uVar14 = NEON_frsqrts(CONCAT44(fVar44 * fVar43,fVar41 * fVar42),CONCAT44(fVar43,fVar42),4);
  iVar45 = -(uint)(fVar41 == 0.0);
  iVar45 = (int)((float)((uint)(fVar41 * fVar42 * (float)uVar14) &
                        CONCAT13(~(byte)((uint)iVar45 >> 0x18),
                                 CONCAT12(~(byte)((uint)iVar45 >> 0x10),
                                          CONCAT11(~(byte)((uint)iVar45 >> 8),~(byte)iVar45)))) /
                50.0);
  *(int *)(param_5 + 0xd34) = iVar45;
  if (iVar45 < 0x1f) {
    if (iVar45 < 10) {
      uVar18 = 10;
      goto LAB_7101e28144;
    }
  }
  else {
    uVar18 = 0x1e;
LAB_7101e28144:
    *(undefined4 *)(param_5 + 0xd34) = uVar18;
  }
  *(undefined4 *)(param_5 + 0xd30) = 0;
  FUN_7103776910(&local_c0,lVar25,(long ****)"set_fxui_stand_trace",pcVar22,ppppbVar16,param_9,
                 param_10,param_11,param_12);
  puVar8 = (undefined8 *)CONCAT26(uStack_b2,local_b8);
  plVar11 = FUN_710377aae0((long *)*puVar8);
  if (plVar11 != (long *)0x0) {
    *(undefined1 *)((long)plVar11 + 0x13a) = 1;
  }
  local_c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_b8 = 0;
  uStack_b2 = 0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  FUN_7103776910(&local_c0,lVar25,(long ****)"set_fxui_stand_trace",pcVar22,ppppbVar16,param_9,
                 param_10,param_11,param_12);
  plVar11 = (long *)CONCAT26(uStack_b2,local_b8);
  lVar25 = *plVar11;
  if (lVar25 != 0) {
    *(undefined8 *)(lVar25 + 0x30) = *(undefined8 *)(param_5 + 0xd40);
    *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) | 0x10;
  }
  local_c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_b8 = 0;
  uStack_b2 = 0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar27 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19e854613d,(long ****)&DAT_00000004,
                              ppppbVar16,param_9,param_10,param_11,param_12), (uVar27 & 1) != 0)) {
    FUN_71024076d0((undefined4 *)&local_c0,0x19e854613d);
    lVar25 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    *(undefined4 *)(param_5 + 0xd78) = local_c0._0_4_;
    if (lVar25 == 0) goto LAB_7101e282b4;
    if (*(int *)(param_5 + 0xd94) != 0x876500) goto LAB_7101e28304;
    if (*(int *)(param_5 + 0xd90) == DAT_7106dd53ac) {
      if ((*(long *)(param_5 + 0xd88) != 0) && (DAT_7106dd53a8 == '\x01')) {
        piVar33 = (int *)(*(long *)(param_5 + 0xd88) + 0x38);
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar33,0x10);
          if (bVar7) {
            *piVar33 = *piVar33 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *(undefined8 *)(param_5 + 0xd88) = 0;
      *(undefined1 *)(param_5 + 0xd98) = 0;
    }
    else {
      *(int *)(param_5 + 0xd90) = DAT_7106dd53ac;
    }
    *(long *)(param_5 + 0xd88) = lVar25;
    piVar33 = (int *)(lVar25 + 0x38);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar33,0x10);
      if (bVar7) {
        *piVar33 = *piVar33 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    local_a0 = 0;
    local_b0 = 0;
    uStack_ac = 0;
    uStack_aa = 0;
    local_a8 = 0x87650000000000;
    local_c0 = (byte ***)((ulong)local_c0 & 0xffffffff00000000);
    local_88 = 0;
    local_98 = 0xffffffffffffffff;
    uStack_90 = 0;
    *(undefined4 *)(param_5 + 0xd78) = 0;
LAB_7101e282b4:
    if (((*(long *)(param_5 + 0xd88) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_5 + 0xd90) == DAT_7106dd53ac)) {
      piVar33 = (int *)(*(long *)(param_5 + 0xd88) + 0x38);
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar33,0x10);
        if (bVar7) {
          *piVar33 = *piVar33 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined8 *)(param_5 + 0xd88) = 0;
  }
  *(undefined1 *)(param_5 + 0xd98) = 0;
  lVar25 = CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
LAB_7101e28304:
  uVar27 = local_110;
  *(undefined8 *)(param_5 + 0xda0) = local_98;
  *(undefined8 *)(param_5 + 0xdb0) = local_88;
  *(undefined8 *)(param_5 + 0xda8) = uStack_90;
  local_b8 = 0x7104f73d50;
  uStack_b2 = 0;
  if (((lVar25 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a8 == DAT_7106dd53ac)) {
    piVar33 = (int *)(lVar25 + 0x38);
    do {
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar33,0x10);
      if (bVar7) {
        *piVar33 = *piVar33 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_b0 = 0;
  uStack_ac = 0;
  uStack_aa = 0;
  *(undefined4 *)(param_5 + 0xd2c) = 2;
  local_118 = (long ***)&PTR_FUN_710523d988;
  local_110 = 0;
  if (uVar27 != 0) {
    uVar31 = *(ulong *)(uVar27 + 0x18);
    *(undefined ***)(uVar27 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar27 + 0x18) = 0;
    if (uVar31 != 0) {
      FUN_710392eb40(uVar31);
    }
    FUN_710392eb40(uVar27);
  }
  plVar11 = local_1d0[0];
  local_1d8 = &PTR_FUN_710523d988;
  local_1d0[0] = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    uVar27 = plVar11[3];
    plVar11[2] = (long)&PTR_FUN_710523d9a8;
    plVar11[3] = 0;
    if (uVar27 != 0) {
      FUN_710392eb40(uVar27);
    }
    FUN_710392eb40((ulong)plVar11);
  }
  return;
}

