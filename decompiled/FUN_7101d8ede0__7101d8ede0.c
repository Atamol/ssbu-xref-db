// addr:      7101d8ede0
// offset:    0x1d8ede0
// name:      FUN_7101d8ede0
// mangled:   
// signature: undefined __cdecl FUN_7101d8ede0(long param_1, ushort param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d8ede0(long param_1,ushort param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined ***pppuVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  byte *pbVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  byte ****ppppbVar27;
  undefined **local_120;
  ulong local_118;
  undefined **local_110;
  undefined8 *local_108;
  long ***local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  long ***local_e0;
  undefined8 *local_d8;
  undefined **local_d0;
  undefined8 *local_c8;
  long ***local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  
  uVar5 = *(ushort *)(param_1 + 0x15c);
  iVar3 = (int)param_3;
  if (*(char *)(param_1 + 0x338) == '\0') {
    bVar7 = FUN_71025c9890(uVar5);
LAB_7101d8ee4c:
    if (bVar7 != false) goto LAB_7101d8eea0;
  }
  else {
    lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar5 == 0xffff) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = (ulong)*(ushort *)(lVar17 + (long)(short)uVar5 * 2 + 0x60);
    }
    uVar18 = (*(long *)(lVar17 + 0x28) - *(long *)(lVar17 + 0x20) >> 6) * -0x3333333333333333;
    puVar2 = (undefined2 *)(*(long *)(lVar17 + 0x20) + uVar22 * 0x140);
    if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    cVar4 = *(char *)(puVar2 + 0x2f);
    bVar7 = FUN_71025c9890(uVar5);
    if (cVar4 != '\x03') goto LAB_7101d8ee4c;
LAB_7101d8eea0:
    FUN_7103776640(&local_c0,param_1 + 0x120,(byte ****)"set_parts_aw",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    param_4 = (byte ****)(ulong)*(ushort *)(param_1 + 0x15c);
    param_3 = &local_c0;
    param_7 = 1;
    param_8 = 1;
    param_5 = (long ****)0x0;
    param_6 = (ulong)(*(int *)(param_1 + 0x158) == 1);
    FUN_7101d8e0c0((undefined8 *)(param_1 + 0x198),(ulong *)(param_1 + 0x10),param_3,param_4,
                   (long ****)0x0,param_6,1,1,0,*(uint *)(param_1 + 0x160));
    uVar22 = local_b8;
    local_c0 = (long ***)&PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar22 != 0) {
      uVar18 = *(ulong *)(uVar22 + 0x18);
      *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar22 + 0x18) = 0;
      if (uVar18 != 0) {
        FUN_710392eb40(uVar18);
      }
      FUN_710392eb40(uVar22);
    }
  }
  lVar17 = param_1 + 0x120;
  FUN_7103776910(&local_d0,lVar17,(long ****)"set_rep_spirit_aw_in",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  ppppbVar27 = (byte ****)(ulong)param_2;
  if (*(char *)(param_1 + 0x338) == '\0') {
    bVar7 = false;
  }
  else {
    lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (param_2 == 0xffff) {
      uVar22 = 0xffffffff;
    }
    else {
      uVar22 = (ulong)*(ushort *)(lVar19 + ((long)((ulong)param_2 << 0x30) >> 0x2f) + 0x60);
    }
    uVar18 = (*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20) >> 6) * -0x3333333333333333;
    puVar2 = (undefined2 *)(*(long *)(lVar19 + 0x20) + uVar22 * 0x140);
    if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    bVar7 = *(char *)(puVar2 + 0x2f) == '\x03';
  }
  bVar8 = FUN_71025c9890(param_2);
  local_e0 = (long ***)&PTR_FUN_710523d9a8;
  uVar16 = 2;
  if (!bVar7 && !bVar8) {
    uVar16 = 0;
  }
  puVar1 = (ulong *)(param_1 + 0x10);
  local_d8 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (local_d8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
      local_b0 = (long ***)&SUB_00000020;
      pppplVar15 = (long ****)&local_b0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
      if (((uVar22 & 1) != 0) &&
         (local_d8 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,pppplVar15,param_4,param_5,param_6,param_7,param_8),
         local_d8 != (undefined8 *)0x0)) goto LAB_7101d8f040;
    }
    local_d8 = (undefined8 *)0x0;
  }
LAB_7101d8f040:
  puVar6 = local_c8;
  local_d8[2] = 0;
  local_d8[3] = 0;
  pppplVar15 = &local_e0;
  *local_d8 = 0;
  local_d8[1] = 0;
  pppplVar14 = (long ****)(ulong)uVar16;
  *local_d8 = *local_c8;
  local_d8[1] = local_c8[1];
  local_d8[2] = local_c8[2];
  local_d8[3] = local_c8[3];
  ppppbVar13 = ppppbVar27;
  FUN_7101d8e310((undefined8 *)(param_1 + 0x1b8),puVar1,pppplVar15,ppppbVar27,pppplVar14,param_6,
                 param_7,param_8);
  puVar10 = local_d8;
  local_e0 = (long ***)&PTR_FUN_710523d9a8;
  local_d8 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar10);
  }
  lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  if (param_2 == 0xffff) {
    uVar22 = 0xffffffff;
  }
  else {
    uVar22 = (ulong)*(ushort *)(lVar19 + ((long)((ulong)param_2 << 0x30) >> 0x2f) + 0x60);
  }
  lVar20 = *(long *)(lVar19 + 0x20);
  uVar18 = (*(long *)(lVar19 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
  puVar2 = (undefined2 *)(lVar20 + uVar22 * 0x140);
  if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
    puVar2 = &DAT_7105182b08;
  }
  if (*(char *)(puVar2 + 0x2f) == '\x03') {
    if (*(char *)(param_1 + 0x338) == '\0') {
      bVar7 = false;
    }
    else {
      if (param_2 == 0xffff) {
        uVar22 = 0xffffffff;
      }
      else {
        uVar22 = (ulong)*(ushort *)(lVar19 + ((long)((ulong)param_2 << 0x30) >> 0x2f) + 0x60);
      }
      puVar2 = (undefined2 *)(lVar20 + uVar22 * 0x140);
      if (uVar18 < uVar22 || uVar18 - uVar22 == 0) {
        puVar2 = &DAT_7105182b08;
      }
      bVar7 = *(char *)(puVar2 + 0x2f) == '\x03';
    }
    bVar8 = FUN_71025c9890(param_2);
    uVar16 = 0;
    if (!bVar7 && !bVar8) {
      uVar16 = 2;
    }
    FUN_7103776910(&local_f0,lVar17,(long ****)"set_rep_fighter_front",pppplVar15,ppppbVar13,
                   pppplVar14,param_6,param_7,param_8);
    pppuVar12 = &local_f0;
    pppplVar15 = (long ****)(ulong)uVar16;
    ppppbVar13 = ppppbVar27;
    FUN_7101d8e310((undefined8 *)(param_1 + 0x1d0),puVar1,pppuVar12,ppppbVar27,pppplVar15,param_6,
                   param_7,param_8);
    uVar22 = local_e8;
    local_f0 = &PTR_FUN_710523d9a8;
    local_e8 = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_7103776910(&local_100,lVar17,(long ****)"set_rep_fighter_back",pppuVar12,ppppbVar13,
                   pppplVar15,param_6,param_7,param_8);
    pppplVar15 = &local_100;
    pppplVar14 = (long ****)(ulong)uVar16;
    FUN_7101d8e310((undefined8 *)(param_1 + 0x1e8),puVar1,pppplVar15,ppppbVar27,pppplVar14,param_6,
                   param_7,param_8);
    uVar22 = local_f8;
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    local_f8 = 0;
    ppppbVar13 = ppppbVar27;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
      ppppbVar13 = ppppbVar27;
    }
  }
  *(ushort *)(param_1 + 0x15c) = param_2;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar15,ppppbVar13,pppplVar14,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
      local_b0 = (long ***)&SUB_00000018;
      pppplVar15 = (long ****)&local_b0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_110);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar15,ppppbVar13,pppplVar14,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_7101d8f250;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d8f250:
  *(undefined1 *)(puVar10 + 2) = 1;
  *puVar10 = 0;
  puVar10[1] = 0;
  if (iVar3 == 2) {
    pcVar11 = "anim_out_right";
LAB_7101d8f280:
    FUN_71037780e0(&local_110,lVar17,(long ****)pcVar11,pppplVar15,ppppbVar13,pppplVar14,param_6,
                   param_7,param_8);
  }
  else {
    if (iVar3 == 1) {
      pcVar11 = "anim_out_left";
      goto LAB_7101d8f280;
    }
    local_110 = &PTR_FUN_710523d9e8;
    local_108 = (undefined8 *)
                FUN_710392e290(0x10,0x18,pppplVar15,ppppbVar13,pppplVar14,param_6,param_7,param_8);
    if (local_108 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_120 = (undefined **)((ulong)local_120 & 0xffffffff00000000);
        local_b0 = (long ***)&SUB_00000018;
        pppplVar15 = (long ****)&local_b0;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_120);
        if (((uVar22 & 1) != 0) &&
           (local_108 = (undefined8 *)
                        FUN_710392e290(0x10,0x18,pppplVar15,ppppbVar13,pppplVar14,param_6,param_7,
                                       param_8), local_108 != (undefined8 *)0x0))
        goto LAB_7101d8f534;
      }
      local_108 = (undefined8 *)0x0;
    }
LAB_7101d8f534:
    *local_108 = 0;
    local_108[1] = 0;
    *(undefined1 *)(local_108 + 2) = 1;
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar10);
  }
  FUN_710377aee0(0x3f800000,(long)&local_110);
  *(int *)(param_1 + 0x33c) = iVar3;
  lVar19 = *(long *)(*(long *)(param_1 + 0x140) + 0x1b8);
  if (lVar19 != 0) {
    lVar20 = *(long *)(param_1 + 0x140) + 0x1b8;
    lVar24 = lVar20;
    lVar25 = lVar19;
    do {
      bVar7 = *(int *)(lVar25 + 0x20) < 0;
      if (!bVar7) {
        lVar24 = lVar25;
      }
      lVar25 = *(long *)(lVar25 + (ulong)bVar7 * 8);
    } while (lVar25 != 0);
    if (((lVar24 != lVar20) && (*(int *)(lVar24 + 0x20) < 1)) &&
       (plVar26 = *(long **)(lVar24 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
      pppplVar15 = (long ****)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,1);
      lVar20 = *(long *)(param_1 + 0x140) + 0x1b8;
      lVar19 = *(long *)(*(long *)(param_1 + 0x140) + 0x1b8);
    }
    lVar24 = lVar20;
    if (lVar19 != 0) {
      do {
        if (0 < *(int *)(lVar19 + 0x20)) {
          lVar24 = lVar19;
        }
        lVar19 = *(long *)(lVar19 + (ulong)(*(int *)(lVar19 + 0x20) < 1) * 8);
      } while (lVar19 != 0);
      if (((lVar24 != lVar20) && (*(int *)(lVar24 + 0x20) < 2)) &&
         (plVar26 = *(long **)(lVar24 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
        pppplVar15 = (long ****)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,1);
      }
    }
  }
  FUN_7103776640(&local_120,lVar17,(byte ****)"set_parts_aw",pppplVar15,ppppbVar13,pppplVar14,
                 param_6,param_7,param_8);
  FUN_71025ae390((long)&local_120,extraout_x1,pppplVar15,ppppbVar13,pppplVar14,param_6,param_7,
                 param_8);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x128),0x7104270277);
  FUN_7101d8e430(param_1,extraout_x1_00,pppplVar15,ppppbVar13,pppplVar14,param_6,param_7,param_8);
  lVar17 = *(long *)(*(long *)(param_1 + 0x148) + 0x1b8);
  if (lVar17 != 0) {
    lVar19 = *(long *)(param_1 + 0x148) + 0x1b8;
    lVar20 = lVar19;
    do {
      bVar7 = *(int *)(lVar17 + 0x20) < 0;
      if (!bVar7) {
        lVar20 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)bVar7 * 8);
    } while (lVar17 != 0);
    if (((lVar20 != lVar19) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x208))(plVar26,0);
      (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
    }
  }
  uVar16 = 0x811c9dc5;
  uVar9 = FUN_7101d8eab0(param_1,*(ushort *)(param_1 + 0x15c));
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_b0 = (long ***)0x811c9dc5;
  iVar3 = *(int *)(param_1 + 0x358);
  if (iVar3 == 2) {
    local_98 = 0x656c;
    local_96 = 0;
    local_a0 = 0x747461625f74756f;
    uVar23 = 0x6b;
    local_b0._4_4_ = 0x12;
    pbVar21 = (byte *)((long)&local_a8 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar23;
      uVar23 = (uint)*pbVar21;
      pbVar21 = pbVar21 + 1;
    } while (uVar23 != 0);
  }
  else if (iVar3 == 1) {
    uVar22 = (ulong)local_a0 >> 0x30;
    local_a0 = CONCAT26((ushort)uVar22 & 0xff00,0x77615f74756f);
    uVar23 = 0x6b;
    local_b0._4_4_ = 0xe;
    pbVar21 = (byte *)((long)&local_a8 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar23;
      uVar23 = (uint)*pbVar21;
      pbVar21 = pbVar21 + 1;
    } while (uVar23 != 0);
  }
  else {
    if (iVar3 != 0) goto LAB_7101d8f608;
    local_a0 = 0x74756f5f66666f;
    local_b0._4_4_ = 0xf;
    uVar23 = 0x6b;
    pbVar21 = (byte *)((long)&local_a8 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar23;
      uVar23 = (uint)*pbVar21;
      pbVar21 = pbVar21 + 1;
    } while (uVar23 != 0);
  }
  local_a8 = 0x5f706c656879656b;
  local_b0 = (long ***)CONCAT44(local_b0._4_4_,uVar16);
LAB_7101d8f608:
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x138),(long)&local_a8);
  uVar22 = local_118;
  *(undefined4 *)(param_1 + 0x35c) = uVar9;
  local_120 = &PTR_FUN_710523d988;
  local_118 = 0;
  if (uVar22 != 0) {
    uVar18 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar22);
  }
  puVar10 = local_108;
  local_110 = &PTR_FUN_710523d9e8;
  local_108 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar10);
  }
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  return;
}

