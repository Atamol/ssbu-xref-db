// addr:      7101c12580
// offset:    0x1c12580
// name:      FUN_7101c12580
// mangled:   
// signature: undefined __cdecl FUN_7101c12580(long param_1, long param_2, long param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c12580(long param_1,long param_2,long param_3,char *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ushort uVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  byte *pbVar14;
  byte abStack_330 [64];
  undefined8 local_2f0;
  byte abStack_2e8 [64];
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined2 local_290;
  undefined8 local_28e;
  undefined1 local_286;
  undefined8 local_260;
  byte abStack_258 [64];
  undefined8 local_218;
  byte abStack_210 [64];
  undefined8 local_1d0;
  byte abStack_1c8 [64];
  undefined8 local_188;
  byte abStack_180 [64];
  undefined8 local_140;
  byte local_138 [64];
  undefined8 local_f8;
  byte abStack_f0 [64];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  ushort local_6c [6];
  
  lVar6 = param_3;
  pcVar8 = param_4;
  FUN_7103776640(&local_80,**(long **)(param_1 + 0x6a8) + 8,(byte ****)"set_parts_det_00",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_det_title_01",lVar6,pcVar8,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_txt_det_title_00",lVar6,pcVar8,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_b0,(long)&local_80,(long ****)"set_txt_det_title_00_sd",lVar6,pcVar8,param_5
                 ,param_6,param_7,param_8);
  puVar13 = (ushort *)(param_2 + 8);
  if (*puVar13 == 0) {
    pbVar14 = (byte *)(param_3 + 8);
    if (*pbVar14 != 0) {
      if (*(long **)(local_98 + 0x10) != (long *)0x0) {
        lVar6 = 0;
        pcVar8 = (char *)0x0;
        local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
        FUN_71037a2270(*(long **)(local_98 + 0x10),(ushort *)&local_2a8,0,0);
      }
      if (*(long **)(local_a8 + 0x10) != (long *)0x0) {
        lVar6 = 0;
        pcVar8 = (char *)0x0;
        local_2a8 = local_2a8 & 0xffffffff00000000;
        FUN_71037a2270(*(long **)(local_a8 + 0x10),(ushort *)&local_2a8,0,0);
      }
LAB_7101c126bc:
      FUN_710377a120((long)&local_90,(char *)pbVar14,lVar6,pcVar8,param_5,param_6,param_7,param_8);
      goto LAB_7101c126c0;
    }
    if (*param_4 == '\x01') {
      cVar1 = param_4[2];
      uVar12 = 0x811c9dc5;
      uVar11 = uVar12;
      if (cVar1 == '\x02') {
        local_2a0 = 0x656c75725f6c656d;
        uStack_298 = 0x6f665f6d6165745f;
        local_290 = 0x6d72;
        local_28e = 0x6d655f32305f7461;
        local_286 = 0;
        local_2a8._0_4_ = 0;
        local_2a8._4_4_ = 0x1a;
        uVar9 = 0x6d;
        pbVar14 = (byte *)((long)&local_2a0 + 1);
        do {
          uVar11 = uVar11 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar9 != 0);
LAB_7101c12924:
        local_286 = 0;
        local_290 = 0x6d72;
        uStack_298 = 0x6f665f6d6165745f;
        local_2a0 = 0x656c75725f6c656d;
        local_2a8 = CONCAT44(0x1a,uVar11);
        FUN_710377a120((long)&local_a0,(char *)&local_2a0,lVar6,pcVar8,param_5,param_6,param_7,
                       param_8);
        FUN_710377a120((long)&local_b0,(char *)&local_2a0,lVar6,pcVar8,param_5,param_6,param_7,
                       param_8);
      }
      else {
        if (cVar1 == '\x01') {
          local_2a0 = 0x656c75725f6c656d;
          uStack_298 = 0x6f665f6d6165745f;
          local_290 = 0x6d72;
          local_28e = 0x6d655f31305f7461;
          local_286 = 0;
          local_2a8._0_4_ = 0;
          local_2a8._4_4_ = 0x1a;
          uVar9 = 0x6d;
          pbVar14 = (byte *)((long)&local_2a0 + 1);
          do {
            uVar11 = uVar11 * 0x89 ^ uVar9;
            uVar9 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar9 != 0);
          goto LAB_7101c12924;
        }
        if (cVar1 == '\0') {
          local_2a0 = 0x656c75725f6c656d;
          uStack_298 = 0x6f665f6d6165745f;
          local_290 = 0x6d72;
          local_28e = 0x6d655f30305f7461;
          local_286 = 0;
          local_2a8._0_4_ = 0;
          local_2a8._4_4_ = 0x1a;
          uVar9 = 0x6d;
          pbVar14 = (byte *)((long)&local_2a0 + 1);
          do {
            uVar11 = uVar11 * 0x89 ^ uVar9;
            uVar9 = (uint)*pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (uVar9 != 0);
          goto LAB_7101c12924;
        }
        local_2a0 = local_2a0 & 0xffffffffffffff00;
        local_2a8 = 0;
        if (*(long **)(local_98 + 0x10) != (long *)0x0) {
          lVar6 = 0;
          pcVar8 = (char *)0x0;
          local_6c[0] = 0;
          local_6c[1] = 0;
          FUN_71037a2270(*(long **)(local_98 + 0x10),local_6c,0,0);
        }
        if (*(long **)(local_a8 + 0x10) != (long *)0x0) {
          lVar6 = 0;
          pcVar8 = (char *)0x0;
          local_6c[0] = 0;
          local_6c[1] = 0;
          FUN_71037a2270(*(long **)(local_a8 + 0x10),local_6c,0,0);
        }
      }
      if (param_4[1] == '\x01') {
        local_2f0 = 0x1d00000000;
        abStack_2e8[0] = 0x6d;
        abStack_2e8[1] = 0x65;
        abStack_2e8[2] = 0x6c;
        abStack_2e8[3] = 0x5f;
        abStack_2e8[4] = 0x72;
        abStack_2e8[5] = 0x75;
        abStack_2e8[6] = 0x6c;
        abStack_2e8[7] = 0x65;
        pbVar5 = abStack_2e8;
        pbVar14 = abStack_2e8;
        abStack_2e8[8] = 0x5f;
        abStack_2e8[9] = 0x74;
        abStack_2e8[10] = 0x65;
        abStack_2e8[0xb] = 0x61;
        abStack_2e8[0xc] = 0x6d;
        abStack_2e8[0xd] = 0x5f;
        abStack_2e8[0xe] = 0x65;
        abStack_2e8[0xf] = 100;
        abStack_2e8[0x10] = 0x69;
        abStack_2e8[0x11] = 0x74;
        abStack_2e8[0x12] = 0x5f;
        abStack_2e8[0x13] = 0x74;
        abStack_2e8[0x14] = 0x69;
        abStack_2e8[0x15] = 0x6d;
        abStack_2e8[0x16] = 0x65;
        abStack_2e8[0x17] = 0x5f;
        abStack_2e8[0x18] = 0x73;
        abStack_2e8[0x19] = 0x74;
        abStack_2e8[0x1a] = 0x6f;
        abStack_2e8[0x1b] = 99;
        abStack_2e8[0x1c] = 0x6b;
        abStack_2e8[0x1d] = 0;
        uVar11 = 0x6d;
        do {
          pbVar14 = pbVar14 + 1;
          uVar12 = uVar12 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar14;
        } while (uVar11 != 0);
        local_2f0 = CONCAT44(0x1d,uVar12);
        abStack_330[0] = 0x6d;
        abStack_330[1] = 0x65;
        abStack_330[2] = 0x6c;
        abStack_330[3] = 0x5f;
        abStack_330[4] = 0x72;
        abStack_330[5] = 0x75;
        abStack_330[6] = 0x6c;
        abStack_330[7] = 0x65;
        pbVar14 = abStack_330;
        pbVar10 = abStack_330;
        abStack_330[8] = 0x5f;
        abStack_330[9] = 0x65;
        abStack_330[10] = 100;
        abStack_330[0xb] = 0x69;
        abStack_330[0xc] = 0x74;
        abStack_330[0xd] = 0x5f;
        abStack_330[0xe] = 0x74;
        abStack_330[0xf] = 0x69;
        abStack_330[0x10] = 0x6d;
        abStack_330[0x11] = 0x65;
        abStack_330[0x12] = 0x5f;
        abStack_330[0x13] = 0x65;
        abStack_330[0x14] = 0x6d;
        abStack_330[0x15] = 0x70;
        abStack_330[0x16] = 0x74;
        abStack_330[0x17] = 0x79;
        abStack_330[0x18] = 0;
        do {
          pbVar10 = pbVar10 + 1;
        } while (*pbVar10 != 0);
        if (*(short *)(param_4 + 4) != 0) goto LAB_7101c12ac4;
        goto LAB_7101c126bc;
      }
      if (param_4[1] == '\x02') {
        if (*(short *)(param_4 + 4) == 0) {
          FUN_710377a280((long)&local_90,(byte *)"mel_rule_team_edit_time_inifinity_stock_stamina",3
                        );
        }
        else {
          FUN_710377a280((long)&local_90,(byte *)"mel_rule_team_edit_time_stock_stamina",3);
        }
        goto LAB_7101c126c0;
      }
      plVar3 = *(long **)(local_88 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_7101c126c0;
      local_6c[0] = 0;
      local_6c[1] = 0;
      puVar13 = local_6c;
    }
    else {
      cVar1 = param_4[1];
      if (cVar1 != '\0') {
        if (cVar1 != '\x01') {
          if (cVar1 == '\x02') {
            FUN_710377a280((long)&local_a0,(byte *)"mel_rule_edit_stamina_em",3);
            FUN_710377a280((long)&local_b0,(byte *)"mel_rule_edit_stamina_em",3);
            if (*(short *)(param_4 + 4) == 0) {
              FUN_710377a280((long)&local_90,(byte *)"mel_rule_edit_time_inifinity_stock_em",3);
            }
            else {
              FUN_710377a280((long)&local_90,(byte *)"mel_rule_edit_time_stock_em",3);
            }
            goto LAB_7101c126c0;
          }
          if (*(long **)(local_98 + 0x10) != (long *)0x0) {
            local_2a8 = (ulong)local_2a8._4_4_ << 0x20;
            FUN_71037a2270(*(long **)(local_98 + 0x10),(ushort *)&local_2a8,0,0);
          }
          if (*(long **)(local_a8 + 0x10) != (long *)0x0) {
            local_2a8 = local_2a8 & 0xffffffff00000000;
            FUN_71037a2270(*(long **)(local_a8 + 0x10),(ushort *)&local_2a8,0,0);
          }
          goto LAB_7101c13090;
        }
        uVar12 = 0x811c9dc5;
        FUN_710377a280((long)&local_a0,(byte *)"mel_rule_edit_stock_em",3);
        param_5 = (long ****)(ulong)(byte)param_4[6];
        lVar6 = 3;
        pcVar8 = (char *)0x0;
        param_6 = 0;
        FUN_710377a280((long)&local_b0,(byte *)"mel_rule_edit_stock_em",3);
        local_218 = 0x1500000000;
        abStack_210[0] = 0x6d;
        abStack_210[1] = 0x65;
        abStack_210[2] = 0x6c;
        abStack_210[3] = 0x5f;
        abStack_210[4] = 0x72;
        abStack_210[5] = 0x75;
        abStack_210[6] = 0x6c;
        abStack_210[7] = 0x65;
        pbVar5 = abStack_210;
        pbVar14 = abStack_210;
        abStack_210[0x10] = 0x6d;
        abStack_210[0x11] = 0x65;
        abStack_210[8] = 0x5f;
        abStack_210[9] = 0x65;
        abStack_210[10] = 100;
        abStack_210[0xb] = 0x69;
        abStack_210[0xc] = 0x74;
        abStack_210[0xd] = 0x5f;
        abStack_210[0xe] = 0x74;
        abStack_210[0xf] = 0x69;
        abStack_210[0x12] = 0x5f;
        abStack_210[0x13] = 0x65;
        abStack_210[0x14] = 0x6d;
        abStack_210[0x15] = 0;
        uVar9 = 0x6d;
        uVar11 = uVar12;
        do {
          pbVar14 = pbVar14 + 1;
          uVar11 = uVar11 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar14;
        } while (uVar9 != 0);
        abStack_258[8] = 0x5f;
        abStack_258[9] = 0x65;
        abStack_258[10] = 100;
        abStack_258[0xb] = 0x69;
        abStack_258[0xc] = 0x74;
        abStack_258[0xd] = 0x5f;
        abStack_258[0xe] = 0x74;
        abStack_258[0xf] = 0x69;
        local_260 = 0x1800000000;
        abStack_258[0] = 0x6d;
        abStack_258[1] = 0x65;
        abStack_258[2] = 0x6c;
        abStack_258[3] = 0x5f;
        abStack_258[4] = 0x72;
        abStack_258[5] = 0x75;
        abStack_258[6] = 0x6c;
        abStack_258[7] = 0x65;
        pbVar14 = abStack_258;
        pbVar10 = abStack_258;
        abStack_258[0x10] = 0x6d;
        abStack_258[0x11] = 0x65;
        abStack_258[0x12] = 0x5f;
        abStack_258[0x13] = 0x65;
        abStack_258[0x14] = 0x6d;
        abStack_258[0x15] = 0x70;
        abStack_258[0x16] = 0x74;
        abStack_258[0x17] = 0x79;
        uVar9 = 0x6d;
        local_218 = CONCAT44(0x15,uVar11);
        abStack_258[0x18] = 0;
        do {
          pbVar10 = pbVar10 + 1;
          uVar12 = uVar12 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar10;
        } while (uVar9 != 0);
        local_260 = CONCAT44(0x18,uVar12);
        if (*(short *)(param_4 + 4) == 0) goto LAB_7101c126bc;
LAB_7101c12ac4:
        FUN_710377a280((long)&local_90,pbVar5,1);
        goto LAB_7101c126c0;
      }
      uVar2 = *(ushort *)(param_4 + 4);
      uVar12 = 0x811c9dc5;
      local_f8 = 0x1500000000;
      abStack_f0[0] = 0x6d;
      abStack_f0[1] = 0x65;
      abStack_f0[2] = 0x6c;
      abStack_f0[3] = 0x5f;
      abStack_f0[4] = 0x72;
      abStack_f0[5] = 0x75;
      abStack_f0[6] = 0x6c;
      abStack_f0[7] = 0x65;
      abStack_f0[8] = 0x5f;
      abStack_f0[9] = 0x65;
      abStack_f0[10] = 100;
      abStack_f0[0xb] = 0x69;
      abStack_f0[0xc] = 0x74;
      abStack_f0[0xd] = 0x5f;
      abStack_f0[0xe] = 0x74;
      abStack_f0[0xf] = 0x69;
      abStack_f0[0x10] = 0x6d;
      abStack_f0[0x11] = 0x65;
      abStack_f0[0x12] = 0x5f;
      abStack_f0[0x13] = 0x65;
      abStack_f0[0x14] = 0x6d;
      abStack_f0[0x15] = 0;
      pbVar14 = abStack_f0;
      uVar9 = 0x6d;
      uVar11 = uVar12;
      do {
        pbVar14 = pbVar14 + 1;
        uVar11 = uVar11 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar14;
      } while (uVar9 != 0);
      local_f8 = CONCAT44(0x15,uVar11);
      local_140 = 0x1f00000000;
      pbVar14 = local_138;
      local_138[0] = 0x6d;
      local_138[1] = 0x65;
      local_138[2] = 0x6c;
      local_138[3] = 0x5f;
      local_138[4] = 0x72;
      local_138[5] = 0x75;
      local_138[6] = 0x6c;
      local_138[7] = 0x65;
      uVar9 = 0x6d;
      local_138[8] = 0x5f;
      local_138[9] = 0x65;
      local_138[10] = 100;
      local_138[0xb] = 0x69;
      local_138[0xc] = 0x74;
      local_138[0xd] = 0x5f;
      local_138[0xe] = 0x74;
      local_138[0xf] = 0x69;
      local_138[0x10] = 0x6d;
      local_138[0x11] = 0x65;
      local_138[0x12] = 0x5f;
      local_138[0x13] = 0x69;
      local_138[0x14] = 0x6e;
      local_138[0x15] = 0x69;
      local_138[0x16] = 0x66;
      local_138[0x17] = 0x69;
      local_138[0x18] = 0x6e;
      local_138[0x19] = 0x69;
      local_138[0x1a] = 0x74;
      local_138[0x1b] = 0x79;
      local_138[0x1c] = 0x5f;
      local_138[0x1d] = 0x65;
      local_138[0x1e] = 0x6d;
      local_138[0x1f] = 0;
      uVar11 = uVar12;
      do {
        pbVar14 = pbVar14 + 1;
        uVar11 = uVar11 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar14;
      } while (uVar9 != 0);
      local_140 = CONCAT44(0x1f,uVar11);
      if (uVar2 == 0) {
        FUN_710377a120((long)&local_a0,(char *)local_138,lVar6,pcVar8,param_5,param_6,param_7,
                       param_8);
      }
      else {
        uVar7 = (ulong)uVar2 / 0x3c;
        uVar11 = (uint)uVar2 + (uVar2 / 0x3c) * -0x3c;
        if (0x3e6 < uVar2 / 0x3c) {
          uVar7 = 999;
        }
        uVar4 = (ulong)uVar11 & 0xffff;
        if (0x3e6 < (uVar11 & 0xffff)) {
          uVar4 = 999;
        }
        pcVar8 = (char *)(((ulong)(uint)uVar2 / 0xe10) * 1000000 + uVar7 * 1000 + uVar4);
        lVar6 = 1;
        FUN_710377a280((long)&local_a0,abStack_f0,1);
      }
      pbVar14 = abStack_180;
      uVar9 = 0x6d;
      local_188 = 0x1500000000;
      abStack_180[0] = 0x6d;
      abStack_180[1] = 0x65;
      abStack_180[2] = 0x6c;
      abStack_180[3] = 0x5f;
      abStack_180[4] = 0x72;
      abStack_180[5] = 0x75;
      abStack_180[6] = 0x6c;
      abStack_180[7] = 0x65;
      abStack_180[8] = 0x5f;
      abStack_180[9] = 0x65;
      abStack_180[10] = 100;
      abStack_180[0xb] = 0x69;
      abStack_180[0xc] = 0x74;
      abStack_180[0xd] = 0x5f;
      abStack_180[0xe] = 0x74;
      abStack_180[0xf] = 0x69;
      abStack_180[0x10] = 0x6d;
      abStack_180[0x11] = 0x65;
      abStack_180[0x12] = 0x5f;
      abStack_180[0x13] = 0x65;
      abStack_180[0x14] = 0x6d;
      abStack_180[0x15] = 0;
      uVar11 = uVar12;
      do {
        pbVar14 = pbVar14 + 1;
        uVar11 = uVar11 * 0x89 ^ uVar9;
        uVar9 = (uint)*pbVar14;
      } while (uVar9 != 0);
      local_188 = CONCAT44(0x15,uVar11);
      local_1d0 = 0x1f00000000;
      abStack_1c8[0] = 0x6d;
      abStack_1c8[1] = 0x65;
      abStack_1c8[2] = 0x6c;
      abStack_1c8[3] = 0x5f;
      abStack_1c8[4] = 0x72;
      abStack_1c8[5] = 0x75;
      abStack_1c8[6] = 0x6c;
      abStack_1c8[7] = 0x65;
      pbVar14 = abStack_1c8;
      uVar11 = 0x6d;
      abStack_1c8[0x18] = 0x6e;
      abStack_1c8[0x19] = 0x69;
      abStack_1c8[0x1a] = 0x74;
      abStack_1c8[0x1b] = 0x79;
      abStack_1c8[0x1c] = 0x5f;
      abStack_1c8[0x1d] = 0x65;
      abStack_1c8[0x1e] = 0x6d;
      abStack_1c8[0x1f] = 0;
      abStack_1c8[8] = 0x5f;
      abStack_1c8[9] = 0x65;
      abStack_1c8[10] = 100;
      abStack_1c8[0xb] = 0x69;
      abStack_1c8[0xc] = 0x74;
      abStack_1c8[0xd] = 0x5f;
      abStack_1c8[0xe] = 0x74;
      abStack_1c8[0xf] = 0x69;
      abStack_1c8[0x10] = 0x6d;
      abStack_1c8[0x11] = 0x65;
      abStack_1c8[0x12] = 0x5f;
      abStack_1c8[0x13] = 0x69;
      abStack_1c8[0x14] = 0x6e;
      abStack_1c8[0x15] = 0x69;
      abStack_1c8[0x16] = 0x66;
      abStack_1c8[0x17] = 0x69;
      do {
        pbVar14 = pbVar14 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar14;
      } while (uVar11 != 0);
      local_1d0 = CONCAT44(0x1f,uVar12);
      if (*(short *)(param_4 + 4) == 0) {
        FUN_710377a120((long)&local_b0,(char *)abStack_1c8,lVar6,pcVar8,param_5,param_6,param_7,
                       param_8);
      }
      else {
        FUN_710377a280((long)&local_b0,abStack_180,1);
      }
LAB_7101c13090:
      plVar3 = *(long **)(local_88 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_7101c126c0;
      puVar13 = (ushort *)&local_2a8;
      local_2a8 = local_2a8 & 0xffffffff00000000;
    }
    uVar11 = 0;
    uVar7 = 0;
  }
  else {
    if (*(long **)(local_98 + 0x10) != (long *)0x0) {
      local_2a8 = local_2a8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_98 + 0x10),(ushort *)&local_2a8,0,0);
    }
    if (*(long **)(local_a8 + 0x10) != (long *)0x0) {
      local_2a8 = local_2a8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_a8 + 0x10),(ushort *)&local_2a8,0,0);
    }
    plVar3 = *(long **)(local_88 + 0x10);
    if (plVar3 == (long *)0x0) goto LAB_7101c126c0;
    uVar11 = 0xffffffff;
    uVar7 = 1;
  }
  FUN_71037a2270(plVar3,puVar13,uVar11,uVar7);
LAB_7101c126c0:
  uVar7 = local_a8;
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_98;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar7 != 0) {
    uVar4 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar7);
  }
  return;
}

