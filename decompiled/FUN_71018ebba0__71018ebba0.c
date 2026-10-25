// addr:      71018ebba0
// offset:    0x18ebba0
// name:      FUN_71018ebba0
// mangled:   
// signature: undefined __cdecl FUN_71018ebba0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018ebba0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined **ppuVar8;
  bool bVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  long *********ppppppppplVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  short *psVar18;
  uint uVar19;
  ulong uVar20;
  ushort uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 auVar25 [16];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_7103776640(&local_90,*(long *)(*(long *)(param_1 + 0x128) + 0x80) + 0x20,
                   (byte ****)"set_parts_use_item",param_3,param_4,param_5,param_6,param_7,param_8);
    ppuVar8 = local_88;
    uVar22 = extraout_x1;
    if ((local_88[1] == (undefined *)0x0) ||
       (plVar11 = (long *)FUN_71037964b0((long)local_88[1],0x7104421055), uVar22 = extraout_x1_00,
       plVar11 == (long *)0x0)) {
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar22;
      auVar25 = auVar25 << 0x40;
      uVar22 = 0;
    }
    else {
      auVar25 = (**(code **)(*plVar11 + 0x130))();
      uVar22 = auVar25._0_8_ & 0xffffffff;
    }
    local_90 = &PTR_FUN_710523d988;
    local_88 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      puVar12 = ppuVar8[3];
      ppuVar8[2] = (undefined *)&PTR_FUN_710523d9a8;
      ppuVar8[3] = (undefined *)0x0;
      if (puVar12 != (undefined *)0x0) {
        FUN_710392eb40((ulong)puVar12);
      }
      auVar25 = FUN_710392eb40((ulong)ppuVar8);
    }
    if ((uVar22 & 1) != 0) {
      return;
    }
    if (*(byte *)(param_1 + 0x11c) - 1 < 3) {
      FUN_71018ed9a0(auVar25._0_8_,auVar25._8_8_,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7101d94b00(*(long *)(*(long *)(param_1 + 0x128) + 0x80),1);
    if (*(uint *)(param_1 + 0x104) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 3;
      return;
    }
    goto LAB_71018ec8b4;
  }
  bVar3 = *(byte *)(param_1 + 0x11c);
  uVar10 = bVar3 - 1;
  uVar22 = (ulong)uVar10;
  if (0xf < uVar10) goto LAB_71018ebca0;
  uVar19 = (uint)bVar3;
  uVar14 = uVar19 - 0xe;
  if (bVar3 < 0xe) {
    if (0xc < (uVar10 & 0xff)) goto LAB_71018ec8b4;
    lVar15 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8);
    bVar7 = false;
    if (*(char *)(lVar15 + (uVar22 & 0xff)) == '\0') goto LAB_71018ebca0;
  }
  else {
    if ((~uVar14 & 0xff) == 0) goto LAB_71018ebca0;
    bVar7 = 0xd < uVar19;
    if (2 < (uVar14 & 0xff)) goto LAB_71018ec8b4;
    lVar15 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8);
    if ((*(ushort *)(lVar15 + (ulong)(byte)uVar14 * 2 + 0xe) & 0xff) == 0) goto LAB_71018ebca0;
  }
  if ((uVar19 < 0xe) || (uVar22 = (ulong)uVar14, (~uVar14 & 0xff) != 0)) {
    uVar10 = (uint)uVar22 & 0xff;
    if (bVar7) {
      if (2 < uVar10) {
LAB_71018ec8b4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      psVar18 = (short *)(lVar15 + (uVar22 & 0xff) * 2 + 0xe);
      sVar5 = *psVar18;
      if (sVar5 != 0) {
        *psVar18 = sVar5 + -1;
      }
    }
    else {
      if (0xc < uVar10) goto LAB_71018ec8b4;
      cVar6 = *(char *)(lVar15 + (uVar22 & 0xff));
      if (cVar6 != '\0') {
        *(char *)(lVar15 + (uVar22 & 0xff)) = cVar6 + -1;
      }
    }
  }
  lVar15 = DAT_710532f730;
  plVar11 = DAT_7105314510;
  puVar24 = *(undefined8 **)(*DAT_7105314510 + 0x248);
  lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
  uVar22 = FUN_71032673c0(lVar23,0x144b6ccf8d);
  uVar22 = FUN_7103267ce0(lVar23,uVar22);
  uVar10 = (uint)uVar22;
  if (0x94 < (uint)uVar22) {
    uVar10 = 0x95;
  }
  iVar2 = *(int *)(*(long *)*puVar24 + (ulong)uVar10 * 4 + 0x4c);
  lVar15 = *(long *)(*(long *)(lVar15 + 8) + 0x348);
  puVar24 = *(undefined8 **)(*plVar11 + 0x248);
  uVar22 = FUN_71032673c0(lVar15,0x144b6ccf8d);
  uVar22 = FUN_7103267ce0(lVar15,uVar22);
  uVar10 = (uint)uVar22;
  if (0x94 < uVar10) {
    uVar10 = 0x95;
  }
  *(int *)(*(long *)*puVar24 + (ulong)uVar10 * 4 + 0x4c) = iVar2 + 1;
  lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
  uVar22 = FUN_71032673c0(lVar15,0x144b6ccf8d);
  ppppppppplVar13 = (long *********)0x0;
  uVar22 = FUN_7103267960(lVar15,uVar22);
  puVar24 = *(undefined8 **)(*DAT_7105314510 + 0x248);
  lVar15 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x348);
  uVar16 = FUN_71032673c0(lVar15,0x144b6ccf8d);
  uVar16 = FUN_7103267ce0(lVar15,uVar16);
  uVar10 = (uint)uVar16;
  if (0x94 < uVar10) {
    uVar10 = 0x95;
  }
  if ((uint)uVar22 <= *(uint *)(*(long *)*puVar24 + (ulong)uVar10 * 4 + 0x4c)) {
    FUN_710177a5c0(0x2f);
  }
  puVar24 = *(undefined8 **)(*(long *)(param_1 + 0x128) + 0x80);
  uVar4 = *(undefined1 *)(param_1 + 0x11c);
  FUN_7103776640(&local_a0,(long)(puVar24 + 4),(byte ****)"set_parts_use_item",ppppppppplVar13,
                 param_4,param_5,param_6,param_7,param_8);
  uVar22 = extraout_x1_01;
  uVar16 = local_98;
  switch(uVar4) {
  case 1:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar13 = (long *********)&DAT_00000004;
      uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1e11908442,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar22 & 1) == 0) goto LAB_71018ec398;
      FUN_71024076d0((undefined4 *)&local_90,0x1e11908442);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_71018ec398:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_80 = 0;
    FUN_7103778300(0x3f800000,local_98,0x7104421055);
    FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_txt_item",ppppppppplVar13,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_b0,"nam_goods_spirit_all_shuffle",ppppppppplVar13,param_4,param_5,
                   param_6,param_7,param_8);
    uVar22 = local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    uVar22 = 0xff1b7e1ae0d4;
    uVar16 = local_98;
    goto LAB_71018ec684;
  case 2:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar13 = (long *********)&DAT_00000004;
      uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1e11908442,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar22 & 1) == 0) goto LAB_71018ec430;
      FUN_71024076d0((undefined4 *)&local_90,0x1e11908442);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_71018ec430:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_80 = 0;
    FUN_7103778300(0x3f800000,local_98,0x7104421055);
    FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_txt_item",ppppppppplVar13,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_b0,"nam_goods_spirit_all_attacker",ppppppppplVar13,param_4,param_5,
                   param_6,param_7,param_8);
    uVar22 = local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    uVar22 = 0x38c4da5e;
    break;
  case 3:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar13 = (long *********)&DAT_00000004;
      uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1e11908442,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar22 & 1) == 0) goto LAB_71018ec4c4;
      FUN_71024076d0((undefined4 *)&local_90,0x1e11908442);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_71018ec4c4:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_80 = 0;
    FUN_7103778300(0x3f800000,local_98,0x7104421055);
    FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_txt_item",ppppppppplVar13,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_b0,"nam_goods_spirit_all_supporter",ppppppppplVar13,param_4,param_5,
                   param_6,param_7,param_8);
    uVar22 = local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    uVar22 = 0xff1d623d6035;
    uVar16 = local_98;
    goto LAB_71018ec684;
  case 4:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar13 = (long *********)&DAT_00000004;
      uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1e11908442,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar22 & 1) == 0) goto LAB_71018ec55c;
      FUN_71024076d0((undefined4 *)&local_90,0x1e11908442);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_71018ec55c:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_80 = 0;
    FUN_7103778300(0x3f800000,local_98,0x7104421055);
    FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_txt_item",ppppppppplVar13,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_b0,"nam_goods_spirit_reloaded",ppppppppplVar13,param_4,param_5,
                   param_6,param_7,param_8);
    uVar22 = local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    uVar22 = 0x7f3ac9c2;
    break;
  case 5:
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      ppppppppplVar13 = (long *********)&DAT_00000004;
      uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1e11908442,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar22 & 1) == 0) goto LAB_71018ec5f0;
      FUN_71024076d0((undefined4 *)&local_90,0x1e11908442);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_71018ec5f0:
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_70 = 0;
    local_80 = 0;
    FUN_7103778300(0x3f800000,local_98,0x7104421055);
    FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_txt_item",ppppppppplVar13,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_b0,"nam_goods_spirit_retry_ticket",ppppppppplVar13,param_4,param_5,
                   param_6,param_7,param_8);
    uVar22 = local_a8;
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    uVar22 = 0xc43fd633;
    break;
  default:
    goto switchD_71018ec0bc_default;
  }
  uVar22 = uVar22 | 0xff1c00000000;
  uVar16 = local_98;
LAB_71018ec684:
  plVar11 = FUN_7103240590((long *)*puVar24,(long ****)(uVar22 | 0x2dff000000000000),
                           (long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_b0,(long)&local_a0,(long ****)"set_rep_item",ppppppppplVar13,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar20 = local_a8;
  FUN_7103778b80(local_a8,(long)plVar11,ppppppppplVar13,param_4,param_5,param_6,param_7,param_8);
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = 0;
  uVar22 = extraout_x1_02;
  if (uVar20 != 0) {
    FUN_710392eb40(uVar20);
    uVar22 = extraout_x1_03;
  }
switchD_71018ec0bc_default:
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar16 != 0) {
    uVar22 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar16);
    uVar22 = extraout_x1_04;
  }
  bVar3 = *(byte *)(param_1 + 0x11c);
  lVar15 = *(long *)(*DAT_7105329f98 + 0x10);
  if (bVar3 - 6 < 6) {
    *(byte *)(lVar15 + 0x290) = bVar3;
LAB_71018ec74c:
    bVar3 = *(byte *)(param_1 + 0x11c);
  }
  else {
    if (bVar3 - 1 < 5) {
      *(byte *)(lVar15 + 0x388) = bVar3;
      *(undefined8 *)(lVar15 + 0x38c) = 0;
      *(undefined1 *)(lVar15 + 0x380) = 1;
      FUN_71024a6430(lVar15);
      uVar22 = extraout_x1_05;
      goto LAB_71018ec74c;
    }
    if (bVar3 == 0) {
      *(undefined1 *)(lVar15 + 0x290) = 0;
      goto LAB_71018ec74c;
    }
  }
  lVar15 = *(long *)(*(long *)(param_1 + 0x138) + 0x80);
  if ((*(int *)(lVar15 + 0x30) != 1) &&
     (lVar23 = *(long *)(lVar15 + 0x40), *(long *)(lVar15 + 0x48) != lVar23)) {
    uVar10 = bVar3 - 1;
    uVar14 = (uint)bVar3;
    bVar7 = false;
    cVar6 = '\x02';
    if (uVar10 < 0x10) {
      cVar6 = 0xd < bVar3;
    }
    uVar16 = 0;
    uVar20 = 1;
    do {
      if (*(byte *)(lVar23 + uVar16 * 0xdc) == uVar14) {
        if ((uVar10 & 0xff) < 0x10) {
          uVar22 = (ulong)uVar10;
          if ((0xd < uVar14) && (uVar22 = (ulong)(uVar14 - 0xe), (~(uVar14 - 0xe) & 0xff) == 0))
          goto LAB_71018ec850;
          uVar19 = (uint)uVar22;
          if (cVar6 == '\x01') {
            if (2 < (uVar19 & 0xff)) goto LAB_71018ec8b4;
            uVar21 = *(ushort *)
                      (*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + (uVar22 & 0xff) * 2 +
                      0xe);
          }
          else {
            if (cVar6 != '\0') goto LAB_71018ec850;
            if (0xc < (uVar19 & 0xff)) goto LAB_71018ec8b4;
            uVar22 = uVar22 & 0xff;
            uVar21 = (ushort)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + uVar22);
          }
          ppppppppplVar13 = (long *********)(ulong)(uVar19 & 0xff);
          *(char *)(lVar23 + uVar16 * 0xdc + 1) = (char)uVar21;
          if ((uVar21 & 0xff) != 0) goto LAB_71018ec868;
        }
        else {
LAB_71018ec850:
          *(undefined1 *)(lVar23 + uVar16 * 0xdc + 1) = 0;
        }
        bVar7 = true;
        *(undefined1 *)(*(long *)(lVar15 + 0x40) + uVar16 * 0xdc + 2) = 0;
      }
LAB_71018ec868:
      lVar23 = *(long *)(lVar15 + 0x40);
      uVar16 = (*(long *)(lVar15 + 0x48) - lVar23 >> 2) * 0x6fb586fb586fb587;
      bVar9 = uVar20 <= uVar16;
      lVar1 = uVar16 - uVar20;
      uVar16 = uVar20;
      uVar20 = (ulong)((int)uVar20 + 1);
    } while (bVar9 && lVar1 != 0);
    if (bVar7) {
      FUN_7101d98f30(lVar15,uVar22,(long ****)ppppppppplVar13,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
LAB_71018ebca0:
  lVar15 = *(long *)(*DAT_7105329f98 + 0x10);
  if ((((((*(char *)(lVar15 + 0x10) == '\x02') || (*(char *)(lVar15 + 0x50) == '\x02')) ||
        (*(char *)(lVar15 + 0x90) == '\x02')) ||
       ((*(char *)(lVar15 + 0xd0) == '\x02' || (*(char *)(lVar15 + 0x110) == '\x02')))) ||
      ((*(char *)(lVar15 + 0x150) == '\x02' ||
       ((*(char *)(lVar15 + 400) == '\x02' || (*(char *)(lVar15 + 0x1d0) == '\x02')))))) ||
     (*(char *)(lVar15 + 0x210) == '\x02')) {
    uVar22 = 0;
  }
  else {
    uVar22 = (ulong)(*(char *)(lVar15 + 0x250) != '\x02') << 0x20;
  }
  if ((*(uint *)(lVar15 + 0x394) < 10) && (*(short *)(lVar15 + 0x398) != -1)) {
    uVar16 = (ulong)(*(char *)(lVar15 + (long)(int)*(uint *)(lVar15 + 0x394) * 0x40 + 0x10) !=
                    '\x02') << 0x28;
  }
  else {
    uVar16 = 0x10000000000;
  }
  FUN_7101d9a010(*(long *)(*(long *)(param_1 + 0x138) + 0x80),uVar16 | uVar22,(long ****)0x0,param_4
                 ,param_5,param_6,param_7,param_8);
  lVar15 = *(long *)(*(long *)(param_1 + 0x138) + 0x80);
  FUN_7103778300(0x3f800000,*(long *)(lVar15 + 0x18),0x710428ff7d);
  if (*(int *)(lVar15 + 0x30) == 0) {
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar22 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13c06f8281,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8), (uVar22 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_90,0x13c06f8281);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar7) {
            *piVar17 = *piVar17 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    local_70 = 0;
  }
  *(undefined4 *)(lVar15 + 0x28) = 2;
  (**(code **)(**(long **)(lVar15 + 0x20) + 0x60))(*(long **)(lVar15 + 0x20),0);
  return;
}

