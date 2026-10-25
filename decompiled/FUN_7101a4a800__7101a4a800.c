// addr:      7101a4a800
// offset:    0x1a4a800
// name:      FUN_7101a4a800
// mangled:   
// signature: undefined __cdecl FUN_7101a4a800(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101a4a800(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  long ****pppplVar5;
  byte ****ppppbVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long ***local_100;
  undefined1 local_f8;
  byte bStack_f7;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  ushort auStack_ec [6];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined2 uStack_cc;
  ushort uStack_ca;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte ***local_6c;
  undefined8 extraout_x1;
  
  lVar13 = *(long *)(param_1 + 0x3b0);
  uVar11 = (ulong)param_2;
  if ((ulong)(*(long *)(param_1 + 0x3b8) - lVar13 >> 4) <= uVar11) goto LAB_7101a4b2d0;
  uVar4 = (uint)param_3;
  if ((uVar4 | 1) == 3) {
    param_3 = (long ****)&DAT_c1ffff0000000000;
    param_6 = 1;
    param_4 = (byte ****)0x0;
    param_5 = (long ****)0x0;
    FUN_7101a42ba0(*(undefined8 **)(lVar13 + uVar11 * 0x10 + 8),&DAT_c1ffff0000000000,
                   (long *********)&DAT_c1ffff0000000000,(byte ****)0x0,0,1,param_7,param_8);
  }
  lVar12 = *(long *)(param_1 + 0x250);
  uVar7 = (*(long *)(param_1 + 600) - lVar12 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar7 < uVar11 || uVar7 - uVar11 == 0) goto LAB_7101a4b2c8;
  lVar8 = lVar12 + uVar11 * 0x3f8;
  *(uint *)(lVar8 + 0x10) = uVar4;
  *(undefined4 *)(lVar8 + 0x14) = 0;
  *(undefined4 *)(lVar8 + 0x1b8) = 0xffffffff;
  plVar10 = (long *)(lVar13 + uVar11 * 0x10 + 8);
  lVar13 = *plVar10;
  if (uVar4 == 3) {
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 0x20),0x710441236e);
    *(undefined4 *)(lVar13 + 0xd0) = 0;
    lVar13 = *plVar10;
    uVar2 = 3;
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar13 + 0x20),0x71043f0410);
    *(undefined4 *)(lVar13 + 0xd0) = 2;
    lVar13 = *plVar10;
    uVar2 = uVar4;
  }
  FUN_7101a44850(lVar13,uVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71019e66d0(*(long *)(param_1 + 0x3a8),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar7 = (*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar7 < uVar11 || uVar7 - uVar11 == 0) goto LAB_7101a4b2c8;
  *(undefined1 *)(*(long *)(param_1 + 0x250) + uVar11 * 0x3f8 + 0xf8) = 0;
  if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar11)
  goto LAB_7101a4b2d0;
  lVar13 = *(long *)(*(long *)(param_1 + 0x3b0) + uVar11 * 0x10 + 8);
  *(undefined4 *)(lVar13 + 0x100) = 0;
  plVar10 = *(long **)(*(long *)(lVar13 + 0x90) + 0x10);
  if (plVar10 != (long *)0x0) {
    param_4 = (byte ****)0x0;
    local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
    FUN_71037a2270(plVar10,(ushort *)&local_100,0,0);
  }
  if (*(int *)(param_1 + 0x3e0) == param_2) {
    *(undefined4 *)(param_1 + 0x3e0) = 0xffffffff;
  }
  if (DAT_71050a8078 == *(int *)(param_1 + 0x150)) {
    DAT_71050a8078 = -1;
  }
  lVar13 = *(long *)(param_1 + 0x250);
  uVar7 = (*(long *)(param_1 + 600) - lVar13 >> 3) * 0x7efdfbf7efdfbf7f;
  if (uVar7 < uVar11 || uVar7 - uVar11 == 0) goto LAB_7101a4b2c8;
  lVar8 = lVar13 + uVar11 * 0x3f8;
  *(undefined4 *)(lVar8 + 0x1b8) = 0xffffffff;
  *(undefined4 *)(lVar8 + 0x3f0) = 0;
  *(undefined2 *)(lVar8 + 0x3f6) = 0;
  *(undefined1 *)(lVar8 + 0x3f4) = 1;
  bVar1 = FUN_7103265e70(*(long *)(DAT_710532f730 + 8) + 0x160,*(ulong *)(lVar8 + 0x178));
  if (bVar1) {
    lVar8 = lVar13 + uVar11 * 0x3f8;
    local_100 = (long ***)0x0;
    local_f8 = 0;
    bStack_f7 = 0;
    local_e0 = 0x13ffff0000000000;
    uStack_d8 = 0x5affff0000000000;
    uStack_cc = 0;
    local_d0 = 0;
    *(undefined2 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0x811c9dc5;
    *(undefined8 *)(lVar8 + 0x60) = 0x13ffff0000000000;
    *(undefined8 *)(lVar8 + 0x68) = 0x5affff0000000000;
    *(ulong *)(lVar8 + 0x80) = CONCAT44(uStack_bc,local_c0);
    *(ulong *)(lVar8 + 0x88) = CONCAT44(uStack_b4,local_b8);
    *(ulong *)(lVar8 + 0x70) = (ulong)uStack_ca << 0x30;
    *(undefined8 *)(lVar8 + 0x78) = uStack_c8;
    *(undefined8 *)(lVar8 + 0xa0) = local_a0;
    *(undefined8 *)(lVar8 + 0xa8) = uStack_98;
    *(ulong *)(lVar8 + 0x90) = CONCAT71(uStack_af,local_b0);
    *(undefined8 *)(lVar8 + 0x98) = uStack_a8;
    *(undefined8 *)(lVar8 + 0xc0) = local_80;
    *(undefined8 *)(lVar8 + 200) = uStack_78;
    *(undefined8 *)(lVar8 + 0xb0) = local_90;
    *(undefined8 *)(lVar8 + 0xb8) = uStack_88;
  }
  if (*(int *)(lVar13 + uVar11 * 0x3f8 + 0x10) == 2) {
    if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar11)
    goto LAB_7101a4b2c8;
    local_100 = (long ***)CONCAT62(local_100._2_6_,0xffff);
    FUN_7101a42170(*(undefined8 **)(*(long *)(param_1 + 0x3b0) + uVar11 * 0x10 + 8),
                   (ushort *)&local_100,(long *********)&DAT_00000004,param_4,param_5,param_6,
                   param_7,param_8);
    uStack_f6 = 0;
    lVar8 = lVar13 + uVar11 * 0x3f8;
    *(undefined8 *)(lVar8 + 0x180) = 0;
    *(ulong *)(lVar8 + 0x188) = (ulong)bStack_f7 << 8;
    *(undefined8 *)(lVar8 + 0x18e) = 0;
    *(undefined8 *)(lVar8 + 0x196) = 0xffffffffffffffff;
    *(undefined4 *)(lVar8 + 0x1a0) = 0;
    uStack_bc = 0xffffffff;
    local_f8 = 0xff;
    bStack_f7 = 0xff;
    local_100 = (long ***)0xffffffffffffffff;
    uStack_f4 = 0;
    uStack_f2 = 0;
    uStack_f0 = 0;
    uStack_ee = 0;
    auStack_ec[0] = 0;
    local_b8 = local_b8 & 0xffffff00;
    uStack_b4 = 0;
    local_b0 = 0;
    *(undefined2 *)(lVar8 + 0x1cc) = 0xffff;
    *(long ****)(lVar8 + 0x1c4) = (long ***)0xffffffffffffffff;
    if ((long ****)(lVar8 + 0x1c4) != &local_100) {
      FUN_7101696040((uint *)(lVar13 + uVar11 * 0x3f8 + 0x1d0),auStack_ec);
    }
    lVar8 = lVar13 + uVar11 * 0x3f8;
    *(undefined4 *)(lVar8 + 0x208) = uStack_bc;
    *(undefined1 *)(lVar8 + 0x214) = local_b0;
    *(ulong *)(lVar8 + 0x20c) = CONCAT44(uStack_b4,local_b8);
    if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar11)
    goto LAB_7101a4b2c8;
    plVar10 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x3b0) + uVar11 * 0x10 + 8) + 0x70)
                        + 0x10);
    if (plVar10 != (long *)0x0) {
      local_100 = (long ***)((ulong)local_100 & 0xffffffff00000000);
      FUN_71037a2270(plVar10,(ushort *)&local_100,0,0);
    }
    *(undefined1 *)(lVar13 + uVar11 * 0x3f8 + 0x3f5) = 0;
  }
  if (uVar4 != 0) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0x1e0);
  if (plVar10 == (long *)0x0) {
    return;
  }
  local_100 = (long ***)CONCAT44(local_100._4_4_,*(undefined4 *)(param_1 + 0x150));
  pppplVar5 = &local_100;
  ppppbVar6 = &local_6c;
  local_6c._0_4_ = param_2;
  uVar7 = (**(code **)(*plVar10 + 0x30))(plVar10,lVar12 + uVar11 * 0x3f8 + 0x1ac);
  if ((uVar7 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x41f) == '\0') {
    uVar7 = (*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar7 < uVar11 || uVar7 - uVar11 == 0) goto LAB_7101a4b2c8;
    *(undefined4 *)(*(long *)(param_1 + 0x250) + uVar11 * 0x3f8 + 0x1ac) = 0;
    if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) <= uVar11)
    goto LAB_7101a4b2d0;
    lVar13 = *(long *)(*(long *)(param_1 + 0x3b0) + uVar11 * 0x10 + 8);
    *(undefined4 *)(lVar13 + 0xf8) = 0;
    if (*(int *)(lVar13 + 0xd8) != 0) {
      return;
    }
    FUN_7103778ab0(&local_100,(undefined8 *)(lVar13 + 0x68),pppplVar5,ppppbVar6,param_5,param_6,
                   param_7,param_8);
    FUN_710377a280((long)&local_100,(byte *)"mel_player_n",1);
    uVar11 = CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8)))
                     );
    goto joined_r0x007101a4ad6c;
  }
  if (*(long *)(param_1 + 600) == *(long *)(param_1 + 0x250)) goto LAB_7101a4b2c8;
  lVar13 = *(long *)(param_1 + 0x348);
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x1ac) = *(undefined4 *)(lVar13 + 0xd0);
  if (*(long *)(param_1 + 0x3b8) == *(long *)(param_1 + 0x3b0)) goto LAB_7101a4b2d0;
  lVar12 = *(long *)(*(long *)(param_1 + 0x3b0) + 8);
  *(undefined4 *)(lVar12 + 0xf8) = *(undefined4 *)(lVar13 + 0xd0);
  if (*(int *)(lVar12 + 0xd8) == 0) {
    FUN_7103778ab0(&local_100,(undefined8 *)(lVar12 + 0x68),pppplVar5,ppppbVar6,param_5,param_6,
                   param_7,param_8);
    uVar4 = *(uint *)(lVar13 + 0xd0);
    if (uVar4 + 1 < 2) {
      ppppbVar6 = (byte ****)(ulong)(*(int *)(lVar12 + 8) + 1);
      pppplVar5 = (long ****)0x1;
      FUN_710377a280((long)&local_100,(byte *)"mel_player_n",1);
LAB_7101a4ade8:
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
    }
    else {
      pcVar9 = &DAT_7105314518;
      if ((uVar4 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
        pcVar9 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                         (ulong)uVar4 * 0xf7d8);
      }
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
      plVar10 = *(long **)(uVar11 + 0x10);
      if (*pcVar9 == '\0') {
        if (plVar10 != (long *)0x0) {
          puVar3 = (ushort *)&local_6c;
          pppplVar5 = (long ****)0x0;
          ppppbVar6 = (byte ****)0x0;
          local_6c._0_4_ = 0;
          goto LAB_7101a4ade4;
        }
      }
      else if (plVar10 != (long *)0x0) {
        puVar3 = (ushort *)(pcVar9 + 0xc);
        pppplVar5 = (long ****)&DAT_ffffffff;
        ppppbVar6 = (byte ****)0x1;
LAB_7101a4ade4:
        FUN_71037a2270(plVar10,puVar3,(uint)pppplVar5,(ulong)ppppbVar6);
        goto LAB_7101a4ade8;
      }
    }
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    local_f8 = 0;
    bStack_f7 = 0;
    uStack_f6 = 0;
    uStack_f4 = 0;
    uStack_f2 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  if ((ulong)((*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f) < 2
     ) goto LAB_7101a4b2c8;
  lVar13 = *(long *)(param_1 + 0x348);
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x5a4) = *(undefined4 *)(lVar13 + 0xd0);
  if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) < 2)
  goto LAB_7101a4b2d0;
  lVar12 = *(long *)(*(long *)(param_1 + 0x3b0) + 0x18);
  *(undefined4 *)(lVar12 + 0xf8) = *(undefined4 *)(lVar13 + 0xd0);
  if (*(int *)(lVar12 + 0xd8) == 0) {
    FUN_7103778ab0(&local_100,(undefined8 *)(lVar12 + 0x68),pppplVar5,ppppbVar6,param_5,param_6,
                   param_7,param_8);
    uVar4 = *(uint *)(lVar13 + 0xd0);
    if (uVar4 + 1 < 2) {
      ppppbVar6 = (byte ****)(ulong)(*(int *)(lVar12 + 8) + 1);
      pppplVar5 = (long ****)0x1;
      FUN_710377a280((long)&local_100,(byte *)"mel_player_n",1);
LAB_7101a4af18:
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
    }
    else {
      pcVar9 = &DAT_7105314518;
      if ((uVar4 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
        pcVar9 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                         (ulong)uVar4 * 0xf7d8);
      }
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
      plVar10 = *(long **)(uVar11 + 0x10);
      if (*pcVar9 == '\0') {
        if (plVar10 != (long *)0x0) {
          puVar3 = (ushort *)&local_6c;
          pppplVar5 = (long ****)0x0;
          ppppbVar6 = (byte ****)0x0;
          local_6c._0_4_ = 0;
          goto LAB_7101a4af14;
        }
      }
      else if (plVar10 != (long *)0x0) {
        puVar3 = (ushort *)(pcVar9 + 0xc);
        pppplVar5 = (long ****)&DAT_ffffffff;
        ppppbVar6 = (byte ****)0x1;
LAB_7101a4af14:
        FUN_71037a2270(plVar10,puVar3,(uint)pppplVar5,(ulong)ppppbVar6);
        goto LAB_7101a4af18;
      }
    }
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    local_f8 = 0;
    bStack_f7 = 0;
    uStack_f6 = 0;
    uStack_f4 = 0;
    uStack_f2 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  if ((ulong)((*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f) < 3
     ) goto LAB_7101a4b2c8;
  lVar13 = *(long *)(param_1 + 0x348);
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x99c) = *(undefined4 *)(lVar13 + 0xd0);
  if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) < 3)
  goto LAB_7101a4b2d0;
  lVar12 = *(long *)(*(long *)(param_1 + 0x3b0) + 0x28);
  *(undefined4 *)(lVar12 + 0xf8) = *(undefined4 *)(lVar13 + 0xd0);
  if (*(int *)(lVar12 + 0xd8) == 0) {
    FUN_7103778ab0(&local_100,(undefined8 *)(lVar12 + 0x68),pppplVar5,ppppbVar6,param_5,param_6,
                   param_7,param_8);
    uVar4 = *(uint *)(lVar13 + 0xd0);
    if (uVar4 + 1 < 2) {
      ppppbVar6 = (byte ****)(ulong)(*(int *)(lVar12 + 8) + 1);
      pppplVar5 = (long ****)0x1;
      FUN_710377a280((long)&local_100,(byte *)"mel_player_n",1);
LAB_7101a4b048:
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
    }
    else {
      pcVar9 = &DAT_7105314518;
      if ((uVar4 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
        pcVar9 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                         (ulong)uVar4 * 0xf7d8);
      }
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
      plVar10 = *(long **)(uVar11 + 0x10);
      if (*pcVar9 == '\0') {
        if (plVar10 != (long *)0x0) {
          puVar3 = (ushort *)&local_6c;
          pppplVar5 = (long ****)0x0;
          ppppbVar6 = (byte ****)0x0;
          local_6c._0_4_ = 0;
          goto LAB_7101a4b044;
        }
      }
      else if (plVar10 != (long *)0x0) {
        puVar3 = (ushort *)(pcVar9 + 0xc);
        pppplVar5 = (long ****)&DAT_ffffffff;
        ppppbVar6 = (byte ****)0x1;
LAB_7101a4b044:
        FUN_71037a2270(plVar10,puVar3,(uint)pppplVar5,(ulong)ppppbVar6);
        goto LAB_7101a4b048;
      }
    }
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    local_f8 = 0;
    bStack_f7 = 0;
    uStack_f6 = 0;
    uStack_f4 = 0;
    uStack_f2 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  if ((ulong)((*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f) < 4
     ) goto LAB_7101a4b2c8;
  lVar13 = *(long *)(param_1 + 0x348);
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0xd94) = *(undefined4 *)(lVar13 + 0xd0);
  if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) < 4)
  goto LAB_7101a4b2d0;
  lVar12 = *(long *)(*(long *)(param_1 + 0x3b0) + 0x38);
  *(undefined4 *)(lVar12 + 0xf8) = *(undefined4 *)(lVar13 + 0xd0);
  if (*(int *)(lVar12 + 0xd8) == 0) {
    FUN_7103778ab0(&local_100,(undefined8 *)(lVar12 + 0x68),pppplVar5,ppppbVar6,param_5,param_6,
                   param_7,param_8);
    uVar4 = *(uint *)(lVar13 + 0xd0);
    if (uVar4 + 1 < 2) {
      ppppbVar6 = (byte ****)(ulong)(*(int *)(lVar12 + 8) + 1);
      pppplVar5 = (long ****)0x1;
      FUN_710377a280((long)&local_100,(byte *)"mel_player_n",1);
LAB_7101a4b178:
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
    }
    else {
      pcVar9 = &DAT_7105314518;
      if ((uVar4 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
        pcVar9 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                         (ulong)uVar4 * 0xf7d8);
      }
      uVar11 = CONCAT26(uStack_f2,
                        CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
      plVar10 = *(long **)(uVar11 + 0x10);
      if (*pcVar9 == '\0') {
        if (plVar10 != (long *)0x0) {
          puVar3 = (ushort *)&local_6c;
          pppplVar5 = (long ****)0x0;
          ppppbVar6 = (byte ****)0x0;
          local_6c._0_4_ = 0;
          goto LAB_7101a4b174;
        }
      }
      else if (plVar10 != (long *)0x0) {
        puVar3 = (ushort *)(pcVar9 + 0xc);
        pppplVar5 = (long ****)&DAT_ffffffff;
        ppppbVar6 = (byte ****)0x1;
LAB_7101a4b174:
        FUN_71037a2270(plVar10,puVar3,(uint)pppplVar5,(ulong)ppppbVar6);
        goto LAB_7101a4b178;
      }
    }
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    local_f8 = 0;
    bStack_f7 = 0;
    uStack_f6 = 0;
    uStack_f4 = 0;
    uStack_f2 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  if ((ulong)((*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 3) * 0x7efdfbf7efdfbf7f) < 5
     ) {
LAB_7101a4b2c8:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar13 = *(long *)(param_1 + 0x348);
  *(undefined4 *)(*(long *)(param_1 + 0x250) + 0x118c) = *(undefined4 *)(lVar13 + 0xd0);
  if ((ulong)(*(long *)(param_1 + 0x3b8) - *(long *)(param_1 + 0x3b0) >> 4) < 5) {
LAB_7101a4b2d0:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x3b0) + 0x48);
  *(undefined4 *)(lVar12 + 0xf8) = *(undefined4 *)(lVar13 + 0xd0);
  if (*(int *)(lVar12 + 0xd8) != 0) {
    return;
  }
  FUN_7103778ab0(&local_100,(undefined8 *)(lVar12 + 0x68),pppplVar5,ppppbVar6,param_5,param_6,
                 param_7,param_8);
  uVar4 = *(uint *)(lVar13 + 0xd0);
  if (uVar4 + 1 < 2) {
    FUN_710377a280((long)&local_100,(byte *)"mel_player_n",1);
  }
  else {
    pcVar9 = &DAT_7105314518;
    if ((uVar4 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
      pcVar9 = (char *)(*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) +
                       (ulong)uVar4 * 0xf7d8);
    }
    uVar11 = CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8)))
                     );
    plVar10 = *(long **)(uVar11 + 0x10);
    if (*pcVar9 == '\0') {
      if (plVar10 == (long *)0x0) goto joined_r0x007101a4ad6c;
      puVar3 = (ushort *)&local_6c;
      uVar4 = 0;
      uVar11 = 0;
      local_6c._0_4_ = 0;
    }
    else {
      if (plVar10 == (long *)0x0) goto joined_r0x007101a4ad6c;
      puVar3 = (ushort *)(pcVar9 + 0xc);
      uVar4 = 0xffffffff;
      uVar11 = 1;
    }
    FUN_71037a2270(plVar10,puVar3,uVar4,uVar11);
  }
  uVar11 = CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,CONCAT11(bStack_f7,local_f8))));
joined_r0x007101a4ad6c:
  if (uVar11 != 0) {
    uStack_f2 = 0;
    uStack_f4 = 0;
    uStack_f6 = 0;
    bStack_f7 = 0;
    local_f8 = 0;
    local_100 = (long ***)&PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar11);
  }
  return;
}

