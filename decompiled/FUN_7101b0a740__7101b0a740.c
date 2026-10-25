// addr:      7101b0a740
// offset:    0x1b0a740
// name:      FUN_7101b0a740
// mangled:   
// signature: undefined __cdecl FUN_7101b0a740(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b0a740(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long ***ppplVar5;
  bool bVar6;
  bool bVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  long **pplVar12;
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
  undefined8 uVar13;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  char *pcVar14;
  int iVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined **local_d8;
  undefined **local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  long ***local_a0 [8];
  
  puVar20 = *(undefined8 **)(param_1 + 0x450);
  puVar18 = *(undefined8 **)(param_1 + 0x458);
  uVar4 = (uint)param_3;
  iVar15 = (int)param_2;
  while (puVar18 != puVar20) {
    puVar18 = puVar18 + -2;
    (**(code **)*puVar18)(puVar18);
    param_2 = extraout_x1;
  }
  *(undefined8 **)(param_1 + 0x458) = puVar20;
  if (iVar15 < 0) {
    return;
  }
  lVar22 = *(long *)(param_1 + 0x418);
  uVar23 = (ulong)iVar15;
  if ((ulong)(*(long *)(param_1 + 0x420) - lVar22 >> 3) <= uVar23) {
    return;
  }
  if (*(char *)(*(long *)(lVar22 + uVar23 * 8) + 0x20) == '\0') {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x400);
  plVar1 = (long *)(param_1 + 0x400);
  if (*(int *)(lVar16 + 0x2a4) != iVar15) {
    param_4 = (byte ****)0x1;
    param_3 = (long ****)0x0;
    FUN_7103783c10(plVar1,iVar15,0,1,param_5,param_6,param_7,param_8);
    lVar16 = *plVar1;
    param_2 = extraout_x1_00;
  }
  iVar15 = *(int *)(lVar16 + 0x2c8);
  plVar2 = (long *)(param_1 + 0x450);
  if ((iVar15 < 0) || (*(int *)(lVar16 + 0x2c0) <= iVar15)) {
    FUN_7103776290(&local_c8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7103776390(&local_c8,
                   (undefined8 *)(*(long *)(*(long *)(lVar16 + 0x168) + (long)iVar15 * 8) + 8),
                   param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_71037780e0(&local_a8,(long)&local_c8,(long ****)"all_show",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  ppplVar5 = local_a0[0];
  pppuVar17 = *(undefined ****)(param_1 + 0x458);
  if (pppuVar17 < *(undefined ****)(param_1 + 0x460)) {
    *pppuVar17 = &PTR_FUN_710523d9e8;
    pppuVar17[1] = (undefined **)0x0;
    uVar13 = extraout_x1_01;
    if (pppuVar17 != &local_a8) {
      local_a0[0] = (long ***)0x0;
      ppuVar8 = pppuVar17[1];
      pppuVar17[1] = (undefined **)ppplVar5;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
        uVar13 = extraout_x1_02;
      }
    }
    *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x458) + 0x10;
  }
  else {
    FUN_7101b09e60(plVar2,&local_a8,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar13 = extraout_x1_03;
  }
  ppplVar5 = local_a0[0];
  local_a8 = &PTR_FUN_710523d9e8;
  local_a0[0] = (long ***)0x0;
  if (ppplVar5 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar5);
    uVar13 = extraout_x1_04;
  }
  lVar16 = *(long *)(lVar22 + uVar23 * 8);
  if (*(char *)(lVar16 + 8) != '\x05') goto LAB_7101b0ab0c;
  lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x318);
  lVar21 = *(long *)(lVar19 + 8);
  uVar9 = FUN_710327d930(lVar21,*(ulong *)(lVar16 + 0x10));
  uVar10 = FUN_710327d930(lVar21,0xd61d998cb);
  bVar6 = (uVar9 & 0xffffffffff) != 0;
  bVar7 = (uVar9 & 0xff00000000000000) == 0x2d00000000000000;
  if (((bVar7 && bVar6) && ((uVar10 & 0xff00000000000000) == 0x2d00000000000000)) &&
     ((uVar10 & 0xffffffffff) != 0)) {
    if (((uVar10 ^ uVar9) & 0xffffffffff) == 0) goto LAB_7101b0a9e0;
LAB_7101b0a980:
    uVar10 = FUN_710327d930(*(long *)(lVar19 + 8),0x155f9548cb);
    uVar13 = extraout_x1_05;
    if (((bVar7 && bVar6) && ((uVar10 & 0xff00000000000000) == 0x2d00000000000000)) &&
       ((uVar10 & 0xffffffffff) != 0)) {
      if (((uVar10 ^ uVar9) & 0xffffffffff) == 0) goto LAB_7101b0a9e0;
    }
    else if (((uVar10 & 0xffffffffff) != 0 && (uVar10 & 0xff00000000000000) == 0x2d00000000000000)
             == (bVar7 && bVar6)) goto LAB_7101b0a9e0;
  }
  else {
    if (((uVar10 & 0xffffffffff) != 0 && (uVar10 & 0xff00000000000000) == 0x2d00000000000000) !=
        ((uVar9 & 0xff00000000000000) == 0x2d00000000000000 && (uVar9 & 0xffffffffff) != 0))
    goto LAB_7101b0a980;
LAB_7101b0a9e0:
    uVar3 = DAT_71052391c0;
    DAT_71052391c0 = DAT_71052391c4;
    uVar3 = uVar3 ^ uVar3 << 0xb;
    uVar3 = uVar3 ^ uVar3 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    param_3 = (long ****)(ulong)(uVar3 % 3);
    local_a0[0] = (long ***)((ulong)local_a0[0] & 0xffffffffffffff00);
    local_a8 = (undefined **)0x0;
    DAT_71052391cc = uVar3;
    FUN_710062dc20((uint *)&local_a8,"anim_%02d");
    FUN_7103776640(&local_b8,(long)&local_c8,(byte ****)"set_parts_gold_sp",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_71037780e0(&local_d8,(long)&local_b8,local_a0,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    uVar9 = local_b0;
    local_b8 = &PTR_FUN_710523d988;
    local_b0 = 0;
    uVar13 = extraout_x1_06;
    if (uVar9 != 0) {
      uVar10 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar9);
      uVar13 = extraout_x1_07;
    }
    ppuVar8 = local_d0;
    pppuVar17 = *(undefined ****)(param_1 + 0x458);
    if (pppuVar17 < *(undefined ****)(param_1 + 0x460)) {
      *pppuVar17 = &PTR_FUN_710523d9e8;
      pppuVar17[1] = (undefined **)0x0;
      if (pppuVar17 != &local_d8) {
        local_d0 = (undefined **)0x0;
        ppuVar11 = pppuVar17[1];
        pppuVar17[1] = ppuVar8;
        if (ppuVar11 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar11);
          uVar13 = extraout_x1_08;
        }
      }
      *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x458) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar2,&local_d8,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar13 = extraout_x1_09;
    }
    ppuVar8 = local_d0;
    local_d8 = &PTR_FUN_710523d9e8;
    local_d0 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
      uVar13 = extraout_x1_10;
    }
    lVar16 = *(long *)(lVar22 + uVar23 * 8);
  }
LAB_7101b0ab0c:
  if (*(char *)(lVar16 + 0x31) != '\0') {
    FUN_71037780e0(&local_a8,(long)&local_c8,(long ****)"anim_in_bonus",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppplVar5 = local_a0[0];
    pppuVar17 = *(undefined ****)(param_1 + 0x458);
    if (pppuVar17 < *(undefined ****)(param_1 + 0x460)) {
      *pppuVar17 = &PTR_FUN_710523d9e8;
      pppuVar17[1] = (undefined **)0x0;
      uVar13 = extraout_x1_11;
      if (pppuVar17 != &local_a8) {
        local_a0[0] = (long ***)0x0;
        ppuVar8 = pppuVar17[1];
        pppuVar17[1] = (undefined **)ppplVar5;
        if (ppuVar8 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar8);
          uVar13 = extraout_x1_12;
        }
      }
      *(long *)(param_1 + 0x458) = *(long *)(param_1 + 0x458) + 0x10;
    }
    else {
      FUN_7101b09e60(plVar2,&local_a8,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar13 = extraout_x1_13;
    }
    ppplVar5 = local_a0[0];
    local_a8 = &PTR_FUN_710523d9e8;
    local_a0[0] = (long ***)0x0;
    if (ppplVar5 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar5);
      uVar13 = extraout_x1_14;
    }
  }
  lVar16 = *(long *)(param_1 + 0x418);
  if (uVar23 < (ulong)(*(long *)(param_1 + 0x420) - lVar16 >> 3)) {
    lVar19 = *plVar1;
    iVar15 = *(int *)(lVar19 + 0x2c8);
    if ((iVar15 < 0) || (*(int *)(lVar19 + 0x2c0) <= iVar15)) {
      FUN_7103776290(&local_a8,uVar13,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(&local_a8,
                     (undefined8 *)(*(long *)(*(long *)(lVar19 + 0x168) + (long)iVar15 * 8) + 8),
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (*(char *)(*(long *)(lVar16 + uVar23 * 8) + 0x31) == '\0') {
      pcVar14 = "anim_glow_off";
    }
    else {
      pcVar14 = "anim_glow_on";
    }
    FUN_7103778300(0x3f800000,(long)local_a0[0],(long)pcVar14);
    ppplVar5 = local_a0[0];
    local_a8 = &PTR_FUN_710523d988;
    local_a0[0] = (long ***)0x0;
    if (ppplVar5 != (long ***)0x0) {
      pplVar12 = ppplVar5[3];
      ppplVar5[2] = (long **)&PTR_FUN_710523d9a8;
      ppplVar5[3] = (long **)0x0;
      if (pplVar12 != (long **)0x0) {
        FUN_710392eb40((ulong)pplVar12);
      }
      FUN_710392eb40((ulong)ppplVar5);
    }
  }
  FUN_7101b15150(plVar2,(long)&local_c8,(ulong)*(uint *)(*(long *)(lVar22 + uVar23 * 8) + 0x24),
                 (ulong)(uVar4 & 1),param_5,param_6,param_7,param_8);
  lVar22 = *(long *)(lVar22 + uVar23 * 8);
  if (*(char *)(lVar22 + 8) == '\x05') {
    lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x318);
    uVar23 = FUN_710327d930(*(long *)(lVar16 + 8),*(ulong *)(lVar22 + 0x10));
    uVar23 = FUN_710327d3b0(lVar16,uVar23);
    if ((uVar23 & 0xffffffffff) == 0x5b7a5f324) {
      iVar15 = 1;
      goto LAB_7101b0acbc;
    }
  }
  iVar15 = *(int *)(lVar22 + 0x18);
LAB_7101b0acbc:
  uVar23 = local_c0;
  *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + iVar15;
  local_c8 = &PTR_FUN_710523d988;
  local_c0 = 0;
  if (uVar23 != 0) {
    uVar9 = *(ulong *)(uVar23 + 0x18);
    *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar23 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar23);
  }
  return;
}

