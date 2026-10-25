// addr:      7101da73b0
// offset:    0x1da73b0
// name:      FUN_7101da73b0
// mangled:   
// signature: undefined __cdecl FUN_7101da73b0(long param_1, byte param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, ulong param_7, undefined8 param_8)


void FUN_7101da73b0(long param_1,byte param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,ulong param_7,undefined8 param_8)

{
  long *plVar1;
  undefined2 *puVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  ulong uVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined2 uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  undefined2 uVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  undefined4 uVar26;
  long *plVar27;
  char cVar28;
  char cVar29;
  int iVar30;
  undefined **local_250;
  ulong local_248;
  undefined **local_240;
  ulong local_238;
  undefined **local_230;
  ulong local_228;
  undefined **local_220;
  ulong local_218 [8];
  undefined **local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  ulong local_1c0 [8];
  byte ***local_180;
  ulong local_178;
  uint auStack_170 [2];
  byte ***apppbStack_168 [8];
  undefined4 local_128;
  undefined2 local_124;
  undefined2 local_120;
  char local_11e;
  uint auStack_118 [2];
  undefined1 auStack_110 [64];
  undefined **local_d0;
  ulong local_c8;
  uint auStack_c0 [2];
  byte ***apppbStack_b8 [9];
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  
  FUN_7103776640(&local_d0,param_1 + 0x50,(byte ****)"set_parts_slot",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar6 = local_c8;
  lVar17 = *(long *)(DAT_710532f730 + 8);
  if ((param_2 & 1) == 0) {
LAB_7101da7470:
    uVar16 = 1;
    uVar18 = 3;
  }
  else {
    sVar4 = *(short *)(param_1 + 0x98);
    if ((long)sVar4 == -1) goto LAB_7101da7470;
    if (1999 < sVar4) {
LAB_7101da7e9c:
      if ((*(long *)(local_c8 + 8) != 0) &&
         (lVar17 = *(long *)(*(long *)(local_c8 + 8) + 0x18), lVar17 != 0)) {
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0xb0) = 0;
      goto LAB_7101da7f2c;
    }
    lVar23 = *(long *)(lVar17 + 0x1d8);
    uVar3 = *(ushort *)(lVar23 + (long)sVar4 * 2 + 0x60);
    uVar18 = (ulong)uVar3;
    uVar24 = (*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar24 <= (uint)uVar3) goto LAB_7101da7e9c;
    puVar2 = (undefined2 *)(*(long *)(lVar23 + 0x20) + uVar18 * 0x140);
    if (uVar24 < uVar18 || uVar24 - uVar18 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    uVar18 = (ulong)*(byte *)((long)puVar2 + 0x69);
    if (*(byte *)((long)puVar2 + 0x69) == 0) goto LAB_7101da7e9c;
    uVar16 = 0;
  }
  if ((*(long *)(local_c8 + 8) != 0) &&
     (lVar23 = *(long *)(*(long *)(local_c8 + 8) + 0x18), lVar23 != 0)) {
    *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe | param_2 & 1;
  }
  iVar30 = (int)uVar18;
  FUN_71003a4ca0(auStack_118,"slot_0%d",(ulong)(iVar30 - 1),param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103778300(0x3f800000,local_c8,(long)auStack_110);
  uVar15 = 0xffff;
  uVar21 = 0xffff;
  local_124 = 0xffff;
  local_68 = 0;
  local_66 = 0;
  local_120 = 0;
  local_11e = '\0';
  if (uVar16 == 0) {
    uVar15 = *(undefined2 *)(param_1 + 0xa8);
    uVar21 = *(undefined2 *)(param_1 + 0xaa);
    local_124 = *(undefined2 *)(param_1 + 0xac);
  }
  local_128 = CONCAT22(uVar21,uVar15);
  local_64 = uVar16;
  if (iVar30 != 0) {
    uVar24 = 0;
    do {
      FUN_71003a4ca0(auStack_170,"set_parts_btn_spter_0%d",uVar24 & 0xffffffff,param_3,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_180,(long)&local_d0,apppbStack_168,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      if (*(char *)((long)&local_68 + uVar24) == '\0') {
        if (2 < uVar24) goto LAB_7101da7f80;
        uVar3 = *(ushort *)((long)&local_128 + uVar24 * 2);
        if ((*(long *)(local_178 + 8) != 0) &&
           (lVar23 = *(long *)(*(long *)(local_178 + 8) + 0x18), lVar23 != 0)) {
          *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) | 1;
        }
        *(undefined1 *)((long)&local_120 + uVar24) = 1;
        if (uVar3 == 0xffff) {
          FUN_7103778300(0x3f800000,local_178,0x71042b4875);
          FUN_7103778300(0x3f800000,local_178,0x710439d93c);
          FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",0,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          FUN_7103776640(&local_1c8,(long)&local_180,apppbStack_b8,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          uVar13 = 0;
          FUN_71025b0340((long)&local_1c8,0,0,param_4,param_5,param_6,param_7,param_8);
          uVar19 = local_1c0[0];
          goto joined_r0x007101da75cc;
        }
        FUN_7103778300(0x3f800000,local_178,0x71043089dd);
        lVar23 = *(long *)(lVar17 + 0x1d8);
        uVar8 = (ulong)*(ushort *)(lVar23 + (long)(short)uVar3 * 2 + 0x60);
        uVar19 = (*(long *)(lVar23 + 0x28) - *(long *)(lVar23 + 0x20) >> 6) * -0x3333333333333333;
        puVar2 = (undefined2 *)(*(long *)(lVar23 + 0x20) + uVar8 * 0x140);
        if (uVar19 < uVar8 || uVar19 - uVar8 == 0) {
          puVar2 = &DAT_7105182b08;
        }
        lVar23 = *(long *)(DAT_710532f730 + 8);
        uVar8 = FUN_71032a0fd0(*(long *)(lVar23 + 0x218),puVar2[0x35]);
        FUN_71003a4ca0((uint *)&local_1c8,"in_slot_view_0%d",(ulong)(((uint)uVar8 & 0xff) - 1),
                       param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7103778300(0x3f800000,local_178,(long)local_1c0);
        uVar13 = 1;
        param_4 = &local_180;
        param_5 = (long ****)0x0;
        param_6 = 0;
        FUN_7101da7f90(param_1,uVar3,1,(undefined ***)param_4,(long ****)0x0,0,param_7,param_8);
        FUN_7103776910(&local_1d8,(long)&local_180,(long ****)"set_rep_eff_aura_00",uVar13,param_4,
                       param_5,param_6,param_7,param_8);
        uVar19 = local_1d0;
        if (((*(long **)(local_1d0 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
           (lVar12 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x88), lVar12 != 0)) {
          uVar13 = 0;
          FUN_710379e9c0(*(long **)(local_1d0 + 8),lVar12,0);
        }
        FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",0,uVar13,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776640(&local_220,(long)&local_180,apppbStack_b8,uVar13,param_4,param_5,param_6,
                       param_7,param_8);
        uVar14 = (ulong)*(byte *)(puVar2 + 0x34);
        FUN_71025b0340((long)&local_220,1,uVar14,param_4,param_5,param_6,param_7,param_8);
        uVar10 = local_218[0];
        local_220 = &PTR_FUN_710523d988;
        local_218[0] = 0;
        if (uVar10 != 0) {
          uVar9 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar10);
        }
        FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",1,uVar14,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776640(&local_220,(long)&local_180,apppbStack_b8,uVar14,param_4,param_5,param_6,
                       param_7,param_8);
        uVar14 = (ulong)*(byte *)(puVar2 + 0x34);
        FUN_71025b0340((long)&local_220,1,uVar14,param_4,param_5,param_6,param_7,param_8);
        uVar10 = local_218[0];
        local_220 = &PTR_FUN_710523d988;
        local_218[0] = 0;
        if (uVar10 != 0) {
          uVar9 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar9 != 0) {
            FUN_710392eb40(uVar9);
          }
          FUN_710392eb40(uVar10);
        }
        FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",2,uVar14,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776640(&local_220,(long)&local_180,apppbStack_b8,uVar14,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_71025b0340((long)&local_220,1,(ulong)*(byte *)(puVar2 + 0x34),param_4,param_5,param_6,
                       param_7,param_8);
        uVar10 = local_218[0];
        local_220 = &PTR_FUN_710523d988;
        local_218[0] = 0;
        if (uVar10 != 0) {
          uVar14 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar14 != 0) {
            FUN_710392eb40(uVar14);
          }
          FUN_710392eb40(uVar10);
        }
        lVar12 = *(long *)(lVar17 + 0x1d8);
        uVar10 = FUN_71032a9470(lVar12,uVar3);
        FUN_71032a9540(auStack_c0,lVar12,uVar10);
        FUN_71003a4ca0((uint *)&local_220,"spi_%s",apppbStack_b8,uVar10,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_7103776910(&local_230,(long)&local_180,(long ****)"set_txt_name",uVar10,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_230,(char *)local_218,uVar10,param_4,param_5,param_6,param_7,
                       param_8);
        param_3 = (long *********)(ulong)(ushort)puVar2[0x35];
        FUN_71032a0c90(auStack_c0,lVar23 + 0x210,puVar2[0x35],param_4,param_5,param_6,param_7,
                       param_8);
        uVar10 = FUN_71032a1630(*(long *)(lVar23 + 0x218),puVar2[0x35]);
        FUN_7103776910(&local_240,(long)&local_180,(long ****)"set_txt_skill",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_240,(char *)apppbStack_b8,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        local_250 = (undefined **)FUN_7103238e70(uVar10,0x13);
        if (((ulong)local_250 & 0xffffffffff) != 0) {
          lVar23 = *(long *)(param_1 + 0x28);
          param_3 = (long *********)(long)*(int *)(lVar23 + 0x70);
          param_4 = (byte ****)(ulong)*(uint *)(lVar23 + 0x68);
          FUN_710323c4e0(lVar23,(ulong *)&local_250,param_3,param_4,param_5,param_6,param_7,param_8)
          ;
        }
        plVar11 = FUN_710323f760((long *)(param_1 + 0x28),uVar10,(long ****)param_3,param_4,param_5,
                                 param_6,param_7,param_8);
        FUN_7103776910(&local_250,(long)&local_180,(long ****)"set_rep_icon_skill",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar10 = local_248;
        FUN_7103778b80(local_248,(long)plVar11,param_3,param_4,param_5,param_6,param_7,param_8);
        local_250 = &PTR_FUN_710523d9a8;
        local_248 = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        uVar10 = local_238;
        uVar8 = uVar24 + (uVar8 & 0xff);
        if (((uVar24 < (uVar8 & 0xffffffff)) &&
            (*(undefined1 *)((long)&local_68 + uVar24) = 1, uVar24 < 2)) &&
           ((uVar16 = (uint)uVar8, (int)uVar24 + 1U < uVar16 &&
            ((*(undefined1 *)((long)&local_68 + uVar24 + 1) = 1, uVar24 == 0 && (2 < uVar16)))))) {
          local_66 = 1;
        }
        local_240 = &PTR_FUN_710523d9a8;
        local_238 = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        uVar8 = local_228;
        local_230 = &PTR_FUN_710523d9a8;
        local_228 = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        local_1d8 = &PTR_FUN_710523d9a8;
        local_1d0 = 0;
        if (uVar19 != 0) {
          FUN_710392eb40(uVar19);
        }
      }
      else {
        if ((*(long *)(local_178 + 8) != 0) &&
           (lVar23 = *(long *)(*(long *)(local_178 + 8) + 0x18), lVar23 != 0)) {
          *(byte *)(lVar23 + 0x58) = *(byte *)(lVar23 + 0x58) & 0xfe;
        }
        if (2 < uVar24) {
LAB_7101da7f80:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined1 *)((long)&local_120 + uVar24) = 0;
        FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",0,param_3,param_4,param_5,param_6,param_7
                       ,param_8);
        FUN_7103776640(&local_1c8,(long)&local_180,apppbStack_b8,param_3,param_4,param_5,param_6,
                       param_7,param_8);
        uVar13 = 0;
        FUN_71025b0340((long)&local_1c8,0,0,param_4,param_5,param_6,param_7,param_8);
        uVar19 = local_1c0[0];
joined_r0x007101da75cc:
        local_1c0[0] = 0;
        local_1c8 = &PTR_FUN_710523d988;
        if (uVar19 != 0) {
          local_1c0[0] = 0;
          local_1c8 = &PTR_FUN_710523d988;
          uVar8 = *(ulong *)(uVar19 + 0x18);
          *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar19 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar19);
        }
        FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",1,uVar13,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776640(&local_1c8,(long)&local_180,apppbStack_b8,uVar13,param_4,param_5,param_6,
                       param_7,param_8);
        uVar13 = 0;
        FUN_71025b0340((long)&local_1c8,0,0,param_4,param_5,param_6,param_7,param_8);
        uVar19 = local_1c0[0];
        local_1c8 = &PTR_FUN_710523d988;
        local_1c0[0] = 0;
        if (uVar19 != 0) {
          uVar8 = *(ulong *)(uVar19 + 0x18);
          *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar19 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar19);
        }
        FUN_71003a4ca0(auStack_c0,"set_parts_eff_aura_0%d",2,uVar13,param_4,param_5,param_6,param_7,
                       param_8);
        FUN_7103776640(&local_1c8,(long)&local_180,apppbStack_b8,uVar13,param_4,param_5,param_6,
                       param_7,param_8);
        param_3 = (long *********)0x0;
        FUN_71025b0340((long)&local_1c8,0,0,param_4,param_5,param_6,param_7,param_8);
        uVar19 = local_1c0[0];
        local_1c8 = &PTR_FUN_710523d988;
        local_1c0[0] = 0;
        if (uVar19 != 0) {
          uVar8 = *(ulong *)(uVar19 + 0x18);
          *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar19 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar19);
        }
      }
      uVar19 = local_178;
      local_180 = (byte ***)&PTR_FUN_710523d988;
      local_178 = 0;
      if (uVar19 != 0) {
        uVar8 = *(ulong *)(uVar19 + 0x18);
        *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar19 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar19);
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar18);
  }
  if ((local_64 & 1) == 0) {
    plVar11 = *(long **)(param_1 + 0x80);
    cVar5 = (char)local_120;
    plVar22 = (long *)plVar11[0x37];
    if (plVar22 == (long *)0x0) {
      cVar28 = local_120._1_1_;
      cVar29 = local_11e;
    }
    else {
      plVar20 = plVar11 + 0x37;
      plVar27 = plVar20;
      plVar25 = plVar22;
      do {
        if (0x13 < (int)plVar25[4]) {
          plVar27 = plVar25;
        }
        plVar25 = (long *)plVar25[(int)plVar25[4] < 0x14];
      } while (plVar25 != (long *)0x0);
      if (((plVar27 != plVar20) && ((int)plVar27[4] < 0x15)) &&
         (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
        bVar7 = (char)local_120 == '\0';
        (**(code **)(*plVar27 + 0x1f8))(plVar27,!bVar7);
        (**(code **)(*plVar27 + 0x388))(plVar27,bVar7,0);
        plVar11 = *(long **)(param_1 + 0x80);
        plVar22 = (long *)plVar11[0x37];
        plVar20 = plVar11 + 0x37;
      }
      cVar28 = local_120._1_1_;
      plVar27 = plVar20;
      plVar25 = plVar22;
      cVar29 = local_11e;
      if (plVar22 != (long *)0x0) {
        do {
          if (0x14 < (int)plVar25[4]) {
            plVar27 = plVar25;
          }
          plVar1 = plVar25 + ((int)plVar25[4] < 0x15);
          plVar25 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
        if (((plVar27 != plVar20) && ((int)plVar27[4] < 0x16)) &&
           (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
          bVar7 = local_120._1_1_ == '\0';
          (**(code **)(*plVar27 + 0x1f8))(plVar27,!bVar7);
          (**(code **)(*plVar27 + 0x388))(plVar27,bVar7,0);
          plVar11 = *(long **)(param_1 + 0x80);
          plVar22 = (long *)plVar11[0x37];
          plVar20 = plVar11 + 0x37;
        }
        cVar29 = local_11e;
        plVar27 = plVar20;
        if (plVar22 != (long *)0x0) {
          do {
            if (0x15 < (int)plVar22[4]) {
              plVar27 = plVar22;
            }
            plVar22 = (long *)plVar22[(int)plVar22[4] < 0x16];
          } while (plVar22 != (long *)0x0);
          if (((plVar27 != plVar20) && ((int)plVar27[4] < 0x17)) &&
             (plVar22 = (long *)plVar27[5], plVar22 != (long *)0x0)) {
            bVar7 = local_11e == '\0';
            (**(code **)(*plVar22 + 0x1f8))(plVar22,!bVar7);
            (**(code **)(*plVar22 + 0x388))(plVar22,bVar7,0);
            plVar11 = *(long **)(param_1 + 0x80);
          }
        }
      }
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,1);
    *(int *)(param_1 + 0xb0) = iVar30;
    if ((cVar28 == '\0' && cVar5 == '\0') && cVar29 == '\0') goto LAB_7101da7f2c;
    uVar26 = 1;
    if (cVar28 != '\0') {
      uVar26 = 2;
    }
    if (cVar29 != '\0') {
      uVar26 = 3;
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x80);
    plVar22 = (long *)plVar11[0x37];
    if (plVar22 != (long *)0x0) {
      plVar20 = plVar11 + 0x37;
      plVar27 = plVar20;
      plVar25 = plVar22;
      do {
        if (0x13 < (int)plVar25[4]) {
          plVar27 = plVar25;
        }
        plVar25 = (long *)plVar25[(int)plVar25[4] < 0x14];
      } while (plVar25 != (long *)0x0);
      if (((plVar27 != plVar20) && ((int)plVar27[4] < 0x15)) &&
         (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x1f8))(plVar27,0);
        (**(code **)(*plVar27 + 0x388))(plVar27,1,0);
        plVar11 = *(long **)(param_1 + 0x80);
        plVar22 = (long *)plVar11[0x37];
        plVar20 = plVar11 + 0x37;
      }
      plVar27 = plVar20;
      plVar25 = plVar22;
      if (plVar22 != (long *)0x0) {
        do {
          if (0x14 < (int)plVar25[4]) {
            plVar27 = plVar25;
          }
          plVar1 = plVar25 + ((int)plVar25[4] < 0x15);
          plVar25 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
        if (((plVar27 != plVar20) && ((int)plVar27[4] < 0x16)) &&
           (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
          (**(code **)(*plVar27 + 0x1f8))(plVar27,0);
          (**(code **)(*plVar27 + 0x388))(plVar27,1,0);
          plVar11 = *(long **)(param_1 + 0x80);
          plVar22 = (long *)plVar11[0x37];
          plVar20 = plVar11 + 0x37;
        }
        plVar27 = plVar20;
        if (plVar22 != (long *)0x0) {
          do {
            if (0x15 < (int)plVar22[4]) {
              plVar27 = plVar22;
            }
            plVar22 = (long *)plVar22[(int)plVar22[4] < 0x16];
          } while (plVar22 != (long *)0x0);
          if (((plVar27 != plVar20) && ((int)plVar27[4] < 0x17)) &&
             (plVar22 = (long *)plVar27[5], plVar22 != (long *)0x0)) {
            (**(code **)(*plVar22 + 0x1f8))(plVar22,0);
            (**(code **)(*plVar22 + 0x388))(plVar22,1,0);
            plVar11 = *(long **)(param_1 + 0x80);
          }
        }
      }
    }
    (**(code **)(*plVar11 + 0x60))(plVar11,0);
    uVar26 = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar26;
LAB_7101da7f2c:
  local_d0 = &PTR_FUN_710523d988;
  local_c8 = 0;
  if (uVar6 != 0) {
    uVar18 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

