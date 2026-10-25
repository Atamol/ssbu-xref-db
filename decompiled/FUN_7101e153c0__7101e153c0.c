// addr:      7101e153c0
// offset:    0x1e153c0
// name:      FUN_7101e153c0
// mangled:   
// signature: undefined __cdecl FUN_7101e153c0(long param_1)


void FUN_7101e153c0(long param_1)

{
  long *plVar1;
  undefined2 *puVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 uVar14;
  ulong uVar15;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  code *pcVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  long *********ppppppppplVar28;
  long lVar29;
  byte ****ppppbVar30;
  uint uVar31;
  undefined **local_278;
  ulong local_270;
  undefined **local_268;
  ulong local_260;
  undefined **local_258;
  ulong local_250;
  undefined **local_248;
  ulong local_240 [8];
  undefined **local_200;
  ulong local_1f8;
  undefined **local_1f0;
  ulong local_1e8 [8];
  byte ***local_1a8;
  ulong local_1a0;
  uint auStack_198 [2];
  byte ***apppbStack_190 [8];
  ushort local_150 [4];
  char local_148 [8];
  uint auStack_140 [2];
  undefined1 auStack_138 [64];
  undefined **local_f8;
  ulong local_f0;
  undefined4 local_e8;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 local_e0 [2];
  undefined8 local_dc;
  undefined2 local_d4;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  ushort local_90 [2];
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  ushort local_7c;
  char local_68 [4];
  uint local_64;
  
  local_90[0] = 0xffff;
  local_7c = 0xffff;
  local_8c = 0;
  local_88 = 0x52ffff0000000000;
  local_80 = 0xffffffff;
  local_dc = 0;
  local_d4 = 0;
  local_a4 = 0xffffffff;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  _local_e8 = CONCAT26(*(undefined2 *)(param_1 + 0x1ac),
                       CONCAT24(*(undefined2 *)(param_1 + 0x1aa),
                                CONCAT22(*(undefined2 *)(param_1 + 0x1a8),0xffff)));
  local_e0[0] = *(undefined2 *)(param_1 + 0x1ae);
  FUN_71025cae70(local_90,(long)&local_e8);
  lVar29 = (long)(short)local_90[0];
  FUN_71025caab0(param_1 + 0x1c0,local_90[0],local_8c);
  uVar7 = local_7c;
  if (lVar29 != -1 && 1999 >= lVar29) {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar5 = *(ushort *)(lVar22 + lVar29 * 2 + 0x60);
    uVar17 = (ulong)uVar5;
    uVar23 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar5 < (uint)uVar23) {
      puVar2 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar17 * 0x140);
      if (uVar23 < uVar17 || uVar23 - uVar17 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      *(undefined1 *)(param_1 + 0x1c0) = *(undefined1 *)(puVar2 + 0x36);
      *(undefined2 *)(param_1 + 0x1da) = puVar2[0x48];
      *(undefined2 *)(param_1 + 0x1d8) = puVar2[0x35];
    }
  }
  *(undefined8 *)(param_1 + 0x1d0) = local_88;
  uVar5 = (ushort)local_80;
  uVar3 = local_80._2_2_;
  ppppppppplVar28 = (long *********)(ulong)local_80._2_2_;
  ppppbVar30 = (byte ****)(ulong)local_7c;
  FUN_71025cad00(param_1 + 0x1c0,(ushort)local_80,local_80._2_2_,local_7c);
  FUN_7103776640(&local_f8,param_1 + 0x160,(byte ****)"set_parts_slot",ppppppppplVar28,ppppbVar30,
                 in_x4,in_x5,in_x6,in_x7);
  uVar17 = local_f0;
  lVar22 = *(long *)(DAT_710532f730 + 8);
  if (lVar29 == -1 || 1999 < lVar29) {
LAB_7101e155a0:
    *(undefined4 *)(param_1 + 0x23c) = 0;
    uVar31 = 1;
    uVar23 = 3;
  }
  else {
    lVar24 = *(long *)(lVar22 + 0x1d8);
    uVar6 = *(ushort *)(lVar24 + lVar29 * 2 + 0x60);
    uVar23 = (ulong)uVar6;
    uVar25 = (*(long *)(lVar24 + 0x28) - *(long *)(lVar24 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar25 <= (uint)uVar6) goto LAB_7101e155a0;
    puVar2 = (undefined2 *)(*(long *)(lVar24 + 0x20) + uVar23 * 0x140);
    if (uVar25 < uVar23 || uVar25 - uVar23 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    bVar4 = *(byte *)((long)puVar2 + 0x69);
    uVar23 = (ulong)bVar4;
    *(uint *)(param_1 + 0x23c) = (uint)bVar4;
    if (bVar4 == 0) {
      if ((*(long *)(local_f0 + 8) != 0) &&
         (lVar29 = *(long *)(*(long *)(local_f0 + 8) + 0x18), lVar29 != 0)) {
        *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
      }
      goto LAB_7101e1600c;
    }
    uVar31 = 0;
  }
  if ((*(long *)(local_f0 + 8) != 0) &&
     (lVar29 = *(long *)(*(long *)(local_f0 + 8) + 0x18), lVar29 != 0)) {
    *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
  }
  FUN_71003a4ca0(auStack_140,"slot_0%d",(ulong)((int)uVar23 - 1),ppppppppplVar28,ppppbVar30,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_7103778300(0x3f800000,local_f0,(long)auStack_138);
  if (uVar31 != 0) {
    uVar5 = 0xffff;
    uVar3 = 0xffff;
    uVar7 = 0xffff;
  }
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = 0;
  local_148[0] = '\0';
  local_148[1] = '\0';
  local_148[2] = '\0';
  local_150[1] = uVar3;
  local_150[0] = uVar5;
  local_150[2] = uVar7;
  if ((int)uVar23 != 0) {
    uVar25 = 0;
    local_64 = uVar31;
    do {
      FUN_71003a4ca0(auStack_198,"set_parts_btn_spter_0%d",uVar25 & 0xffffffff,ppppppppplVar28,
                     ppppbVar30,in_x4,in_x5,in_x6,in_x7);
      FUN_7103776640(&local_1a8,(long)&local_f8,apppbStack_190,ppppppppplVar28,ppppbVar30,in_x4,
                     in_x5,in_x6,in_x7);
      if (uVar31 == 0) {
        pcVar13 = "color_edit_set";
      }
      else {
        pcVar13 = "color_edit_unset";
      }
      FUN_7103778300(0x3f800000,local_1a0,(long)pcVar13);
      if (local_68[uVar25] == '\0') {
        if (2 < uVar25) goto LAB_7101e16084;
        uVar7 = local_150[uVar25];
        if ((*(long *)(local_1a0 + 8) != 0) &&
           (lVar29 = *(long *)(*(long *)(local_1a0 + 8) + 0x18), lVar29 != 0)) {
          *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) | 1;
        }
        local_148[uVar25] = '\x01';
        if (uVar7 == 0xffff) {
          FUN_7103778300(0x3f800000,local_1a0,0x71042b4875);
          FUN_7103778300(0x3f800000,local_1a0,0x710439d93c);
          FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",0,ppppppppplVar28,ppppbVar30,in_x4,in_x5
                         ,in_x6,in_x7);
          FUN_7103776640(&local_1f0,(long)&local_1a8,(byte ****)local_e0,ppppppppplVar28,ppppbVar30,
                         in_x4,in_x5,in_x6,in_x7);
          uVar14 = 0;
          FUN_71025b0340((long)&local_1f0,0,0,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
          uVar18 = local_1e8[0];
          local_1f0 = &PTR_FUN_710523d988;
          local_1e8[0] = 0;
          if (uVar18 != 0) {
            uVar9 = *(ulong *)(uVar18 + 0x18);
            *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar18 + 0x18) = 0;
            if (uVar9 != 0) {
              FUN_710392eb40(uVar9);
            }
            FUN_710392eb40(uVar18);
          }
          FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",1,uVar14,ppppbVar30,in_x4,in_x5,in_x6,
                         in_x7);
          goto LAB_7101e1580c;
        }
        FUN_7103778300(0x3f800000,local_1a0,0x71043089dd);
        lVar29 = *(long *)(lVar22 + 0x1d8);
        uVar9 = (ulong)*(ushort *)(lVar29 + (long)(short)uVar7 * 2 + 0x60);
        uVar18 = (*(long *)(lVar29 + 0x28) - *(long *)(lVar29 + 0x20) >> 6) * -0x3333333333333333;
        puVar2 = (undefined2 *)(*(long *)(lVar29 + 0x20) + uVar9 * 0x140);
        if (uVar18 < uVar9 || uVar18 - uVar9 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        lVar29 = *(long *)(DAT_710532f730 + 8);
        uVar9 = FUN_71032a0fd0(*(long *)(lVar29 + 0x218),puVar2[0x35]);
        FUN_71003a4ca0((uint *)&local_1f0,"in_slot_view_0%d",(ulong)(((uint)uVar9 & 0xff) - 1),
                       ppppppppplVar28,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        FUN_7103778300(0x3f800000,local_1a0,(long)local_1e8);
        uVar14 = 1;
        ppppbVar30 = &local_1a8;
        in_x4 = (long ****)0x0;
        FUN_7101e16fa0(param_1,uVar7,1,(undefined ***)ppppbVar30,(long ****)0x0,in_x5,in_x6,in_x7);
        FUN_7103776910(&local_200,(long)&local_1a8,(long ****)"set_rep_eff_aura_00",uVar14,
                       ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar18 = local_1f8;
        if (((*(long **)(local_1f8 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
           (lVar24 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x88), lVar24 != 0)) {
          uVar14 = 0;
          FUN_710379e9c0(*(long **)(local_1f8 + 8),lVar24,0);
        }
        FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",0,uVar14,ppppbVar30,in_x4,in_x5,in_x6,
                       in_x7);
        FUN_7103776640(&local_248,(long)&local_1a8,(byte ****)local_e0,uVar14,ppppbVar30,in_x4,in_x5
                       ,in_x6,in_x7);
        uVar15 = (ulong)*(byte *)(puVar2 + 0x34);
        FUN_71025b0340((long)&local_248,1,uVar15,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar11 = local_240[0];
        local_248 = &PTR_FUN_710523d988;
        local_240[0] = 0;
        if (uVar11 != 0) {
          uVar10 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar11);
        }
        FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",1,uVar15,ppppbVar30,in_x4,in_x5,in_x6,
                       in_x7);
        FUN_7103776640(&local_248,(long)&local_1a8,(byte ****)local_e0,uVar15,ppppbVar30,in_x4,in_x5
                       ,in_x6,in_x7);
        uVar15 = (ulong)*(byte *)(puVar2 + 0x34);
        FUN_71025b0340((long)&local_248,1,uVar15,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar11 = local_240[0];
        local_248 = &PTR_FUN_710523d988;
        local_240[0] = 0;
        if (uVar11 != 0) {
          uVar10 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar11);
        }
        FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",2,uVar15,ppppbVar30,in_x4,in_x5,in_x6,
                       in_x7);
        FUN_7103776640(&local_248,(long)&local_1a8,(byte ****)local_e0,uVar15,ppppbVar30,in_x4,in_x5
                       ,in_x6,in_x7);
        FUN_71025b0340((long)&local_248,1,(ulong)*(byte *)(puVar2 + 0x34),ppppbVar30,in_x4,in_x5,
                       in_x6,in_x7);
        uVar11 = local_240[0];
        local_248 = &PTR_FUN_710523d988;
        local_240[0] = 0;
        if (uVar11 != 0) {
          uVar15 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          FUN_710392eb40(uVar11);
        }
        lVar24 = *(long *)(lVar22 + 0x1d8);
        uVar11 = FUN_71032a9470(lVar24,uVar7);
        FUN_71032a9540(&local_e8,lVar24,uVar11);
        FUN_71003a4ca0((uint *)&local_248,"spi_%s",local_e0,uVar11,ppppbVar30,in_x4,in_x5,in_x6,
                       in_x7);
        FUN_7103776910(&local_258,(long)&local_1a8,(long ****)"set_txt_name",uVar11,ppppbVar30,in_x4
                       ,in_x5,in_x6,in_x7);
        FUN_710377a120((long)&local_258,(char *)local_240,uVar11,ppppbVar30,in_x4,in_x5,in_x6,in_x7)
        ;
        ppppppppplVar28 = (long *********)(ulong)(ushort)puVar2[0x35];
        FUN_71032a0c90(&local_e8,lVar29 + 0x210,puVar2[0x35],ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar11 = FUN_71032a1630(*(long *)(lVar29 + 0x218),puVar2[0x35]);
        FUN_7103776910(&local_268,(long)&local_1a8,(long ****)"set_txt_skill",ppppppppplVar28,
                       ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        FUN_710377a120((long)&local_268,(char *)local_e0,ppppppppplVar28,ppppbVar30,in_x4,in_x5,
                       in_x6,in_x7);
        plVar12 = *(long **)(param_1 + 8);
        local_278 = (undefined **)FUN_7103238e70(uVar11,0x13);
        if (((ulong)local_278 & 0xffffffffff) != 0) {
          lVar29 = *plVar12;
          ppppppppplVar28 = (long *********)(long)*(int *)(lVar29 + 0x70);
          ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar29 + 0x68);
          FUN_710323c4e0(lVar29,(ulong *)&local_278,ppppppppplVar28,ppppbVar30,in_x4,in_x5,in_x6,
                         in_x7);
        }
        plVar12 = FUN_710323f760(*(long **)(param_1 + 8),uVar11,(long ****)ppppppppplVar28,
                                 ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        FUN_7103776910(&local_278,(long)&local_1a8,(long ****)"set_rep_icon_skill",ppppppppplVar28,
                       ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar11 = local_270;
        FUN_7103778b80(local_270,(long)plVar12,ppppppppplVar28,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar31 = local_64;
        local_278 = &PTR_FUN_710523d9a8;
        local_270 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        uVar11 = local_260;
        uVar9 = uVar25 + (uVar9 & 0xff);
        if (((uVar25 < (uVar9 & 0xffffffff)) && (local_68[uVar25] = '\x01', uVar25 < 2)) &&
           ((uVar16 = (uint)uVar9, (int)uVar25 + 1U < uVar16 &&
            ((local_68[uVar25 + 1] = '\x01', uVar25 == 0 && (2 < uVar16)))))) {
          local_68[2] = 1;
        }
        local_268 = &PTR_FUN_710523d9a8;
        local_260 = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        uVar9 = local_250;
        local_258 = &PTR_FUN_710523d9a8;
        local_250 = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        local_200 = &PTR_FUN_710523d9a8;
        local_1f8 = 0;
        if (uVar18 != 0) {
          FUN_710392eb40(uVar18);
        }
      }
      else {
        if ((*(long *)(local_1a0 + 8) != 0) &&
           (lVar29 = *(long *)(*(long *)(local_1a0 + 8) + 0x18), lVar29 != 0)) {
          *(byte *)(lVar29 + 0x58) = *(byte *)(lVar29 + 0x58) & 0xfe;
        }
        if (2 < uVar25) {
LAB_7101e16084:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        local_148[uVar25] = '\0';
        FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",0,ppppppppplVar28,ppppbVar30,in_x4,in_x5,
                       in_x6,in_x7);
        FUN_7103776640(&local_1f0,(long)&local_1a8,(byte ****)local_e0,ppppppppplVar28,ppppbVar30,
                       in_x4,in_x5,in_x6,in_x7);
        uVar14 = 0;
        FUN_71025b0340((long)&local_1f0,0,0,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar18 = local_1e8[0];
        local_1f0 = &PTR_FUN_710523d988;
        local_1e8[0] = 0;
        if (uVar18 != 0) {
          uVar9 = *(ulong *)(uVar18 + 0x18);
          *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar18 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar18);
        }
        FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",1,uVar14,ppppbVar30,in_x4,in_x5,in_x6,
                       in_x7);
LAB_7101e1580c:
        FUN_7103776640(&local_1f0,(long)&local_1a8,(byte ****)local_e0,uVar14,ppppbVar30,in_x4,in_x5
                       ,in_x6,in_x7);
        uVar14 = 0;
        FUN_71025b0340((long)&local_1f0,0,0,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar18 = local_1e8[0];
        local_1f0 = &PTR_FUN_710523d988;
        local_1e8[0] = 0;
        if (uVar18 != 0) {
          uVar9 = *(ulong *)(uVar18 + 0x18);
          *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar18 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar18);
        }
        FUN_71003a4ca0(&local_e8,"set_parts_eff_aura_0%d",2,uVar14,ppppbVar30,in_x4,in_x5,in_x6,
                       in_x7);
        FUN_7103776640(&local_1f0,(long)&local_1a8,(byte ****)local_e0,uVar14,ppppbVar30,in_x4,in_x5
                       ,in_x6,in_x7);
        ppppppppplVar28 = (long *********)0x0;
        FUN_71025b0340((long)&local_1f0,0,0,ppppbVar30,in_x4,in_x5,in_x6,in_x7);
        uVar18 = local_1e8[0];
        local_1f0 = &PTR_FUN_710523d988;
        local_1e8[0] = 0;
        if (uVar18 != 0) {
          uVar9 = *(ulong *)(uVar18 + 0x18);
          *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar18 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar18);
        }
      }
      uVar18 = local_1a0;
      local_1a8 = (byte ***)&PTR_FUN_710523d988;
      local_1a0 = 0;
      if (uVar18 != 0) {
        uVar9 = *(ulong *)(uVar18 + 0x18);
        *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar18 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar18);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar23);
  }
  if ((uVar31 & 1) == 0) {
    plVar12 = *(long **)(param_1 + 0x188);
    plVar21 = (long *)plVar12[0x37];
    if (plVar21 != (long *)0x0) {
      plVar19 = plVar12 + 0x37;
      plVar27 = plVar19;
      plVar26 = plVar21;
      do {
        bVar8 = (int)plVar26[4] < 0;
        if (!bVar8) {
          plVar27 = plVar26;
        }
        plVar26 = (long *)plVar26[bVar8];
      } while (plVar26 != (long *)0x0);
      if (((plVar27 != plVar19) && ((int)plVar27[4] < 1)) &&
         (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
        bVar8 = local_148[0] == '\0';
        (**(code **)(*plVar27 + 0x1f8))(plVar27,!bVar8);
        (**(code **)(*plVar27 + 0x388))(plVar27,bVar8,0);
        plVar12 = *(long **)(param_1 + 0x188);
        plVar21 = (long *)plVar12[0x37];
        plVar19 = plVar12 + 0x37;
      }
      if (plVar21 != (long *)0x0) {
        plVar27 = plVar19;
        plVar26 = plVar21;
        do {
          if (0 < (int)plVar26[4]) {
            plVar27 = plVar26;
          }
          plVar26 = (long *)plVar26[(int)plVar26[4] < 1];
        } while (plVar26 != (long *)0x0);
        if (((plVar27 != plVar19) && ((int)plVar27[4] < 2)) &&
           (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
          bVar8 = local_148[1] == '\0';
          (**(code **)(*plVar27 + 0x1f8))(plVar27,!bVar8);
          (**(code **)(*plVar27 + 0x388))(plVar27,bVar8,0);
          plVar12 = *(long **)(param_1 + 0x188);
          plVar21 = (long *)plVar12[0x37];
          plVar19 = plVar12 + 0x37;
        }
        plVar27 = plVar19;
        if (plVar21 != (long *)0x0) {
          do {
            if (1 < (int)plVar21[4]) {
              plVar27 = plVar21;
            }
            plVar21 = (long *)plVar21[(int)plVar21[4] < 2];
          } while (plVar21 != (long *)0x0);
          if (((plVar27 != plVar19) && ((int)plVar27[4] < 3)) &&
             (plVar21 = (long *)plVar27[5], plVar21 != (long *)0x0)) {
            bVar8 = local_148[2] == '\0';
            (**(code **)(*plVar21 + 0x1f8))(plVar21,!bVar8);
            (**(code **)(*plVar21 + 0x388))(plVar21,bVar8,0);
            plVar12 = *(long **)(param_1 + 0x188);
          }
        }
      }
    }
    pcVar20 = *(code **)(*plVar12 + 0x60);
    uVar14 = 1;
  }
  else {
    plVar12 = *(long **)(param_1 + 0x188);
    plVar21 = (long *)plVar12[0x37];
    if (plVar21 != (long *)0x0) {
      plVar19 = plVar12 + 0x37;
      plVar27 = plVar19;
      plVar26 = plVar21;
      do {
        bVar8 = (int)plVar26[4] < 0;
        if (!bVar8) {
          plVar27 = plVar26;
        }
        plVar26 = (long *)plVar26[bVar8];
      } while (plVar26 != (long *)0x0);
      if (((plVar27 != plVar19) && ((int)plVar27[4] < 1)) &&
         (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x1f8))(plVar27,0);
        (**(code **)(*plVar27 + 0x388))(plVar27,1,0);
        plVar12 = *(long **)(param_1 + 0x188);
        plVar21 = (long *)plVar12[0x37];
        plVar19 = plVar12 + 0x37;
      }
      plVar27 = plVar19;
      plVar26 = plVar21;
      if (plVar21 != (long *)0x0) {
        do {
          if (0 < (int)plVar26[4]) {
            plVar27 = plVar26;
          }
          plVar1 = plVar26 + ((int)plVar26[4] < 1);
          plVar26 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
        if (((plVar27 != plVar19) && ((int)plVar27[4] < 2)) &&
           (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
          (**(code **)(*plVar27 + 0x1f8))(plVar27,0);
          (**(code **)(*plVar27 + 0x388))(plVar27,1,0);
          plVar12 = *(long **)(param_1 + 0x188);
          plVar21 = (long *)plVar12[0x37];
          plVar19 = plVar12 + 0x37;
        }
        plVar27 = plVar19;
        if (plVar21 != (long *)0x0) {
          do {
            if (1 < (int)plVar21[4]) {
              plVar27 = plVar21;
            }
            plVar21 = (long *)plVar21[(int)plVar21[4] < 2];
          } while (plVar21 != (long *)0x0);
          if (((plVar27 != plVar19) && ((int)plVar27[4] < 3)) &&
             (plVar21 = (long *)plVar27[5], plVar21 != (long *)0x0)) {
            (**(code **)(*plVar21 + 0x1f8))(plVar21,0);
            (**(code **)(*plVar21 + 0x388))(plVar21,1,0);
            plVar12 = *(long **)(param_1 + 0x188);
          }
        }
      }
    }
    pcVar20 = *(code **)(*plVar12 + 0x60);
    uVar14 = 0;
  }
  (*pcVar20)(plVar12,uVar14);
LAB_7101e1600c:
  local_f8 = &PTR_FUN_710523d988;
  local_f0 = 0;
  if (uVar17 != 0) {
    uVar23 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar17);
  }
  return;
}

