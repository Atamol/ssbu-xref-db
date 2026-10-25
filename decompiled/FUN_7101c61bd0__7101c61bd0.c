// addr:      7101c61bd0
// offset:    0x1c61bd0
// name:      FUN_7101c61bd0
// mangled:   
// signature: undefined __cdecl FUN_7101c61bd0(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c61bd0(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long ****pppplVar4;
  byte ****ppppbVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  undefined4 *puVar15;
  long *plVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  ulong uVar23;
  undefined4 local_e8 [2];
  undefined **local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8 [2];
  undefined **local_a0;
  long local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined **local_68;
  long *local_60;
  undefined4 local_54;
  long ***local_50;
  ulong local_48;
  
  uVar14 = (uint)param_2 & 0xff;
  if (7 < uVar14) {
LAB_7101c624e4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar17 = param_2 & 0xff;
  if (*(char *)(*(long *)(param_1 + 0x450) + uVar17 * 0x1e0 + 0x194) == '\0') {
    return;
  }
  if (7 < (ulong)*(byte *)(param_1 + 0x1920)) goto LAB_7101c624e4;
  lVar6 = param_1 + (ulong)*(byte *)(param_1 + 0x1920) * 0x1e8;
  uVar9 = (uint)*(byte *)(lVar6 + 0xaf8);
  ppppbVar5 = param_4;
  if (uVar9 - 1 < 5) {
    uVar7 = (ulong)*(byte *)(lVar6 + 0xaf9);
    switch(uVar9) {
    case 1:
      lVar6 = param_1 + 0x4c0;
      break;
    case 2:
      lVar6 = param_1 + 0x510;
      break;
    case 3:
      lVar6 = param_1 + 0x560;
      break;
    case 4:
      lVar6 = param_1 + 0x5b0;
      break;
    case 5:
      lVar6 = param_1 + 0x600;
    }
    if ((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8) >> 4) <= uVar7) goto LAB_7101c61ca0;
    FUN_7103778ab0(&local_68,(undefined8 *)(*(long *)(lVar6 + 8) + uVar7 * 0x10),param_3,param_4,
                   param_5,param_6,param_7,param_8);
  }
  else {
LAB_7101c61ca0:
    local_68 = &PTR_FUN_710523d9a8;
    local_60 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_60 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_50 = (long ***)&SUB_00000020;
        pppplVar4 = &local_50;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar7 & 1) != 0) &&
           (local_60 = (long *)FUN_710392e290(0x10,0x20,pppplVar4,ppppbVar5,param_5,param_6,param_7,
                                              param_8), local_60 != (long *)0x0))
        goto LAB_7101c61d00;
      }
      local_60 = (long *)0x0;
    }
LAB_7101c61d00:
    local_60[2] = 0;
    local_60[3] = 0;
    *local_60 = 0;
    local_60[1] = 0;
  }
  lVar6 = *local_60;
  if (((ulong)param_4 & 1) == 0) {
    uVar7 = _ConstantZero;
    if (lVar6 != 0) {
      uVar7 = *(ulong *)(lVar6 + 0x30);
    }
    lVar6 = *(long *)(param_1 + 0x450) + uVar17 * 0x1e0;
    fVar18 = *(float *)(lVar6 + 0x140);
    if (*(float *)(lVar6 + 0x140) <= (float)uVar7) {
      fVar18 = (float)uVar7;
    }
    fVar22 = *(float *)(lVar6 + 0x144);
    if (fVar18 <= *(float *)(lVar6 + 0x144)) {
      fVar22 = fVar18;
    }
    fVar19 = (float)(uVar7 >> 0x20);
    fVar18 = *(float *)(lVar6 + 0x148);
    if (*(float *)(lVar6 + 0x148) <= fVar19) {
      fVar18 = fVar19;
    }
    fVar19 = *(float *)(lVar6 + 0x14c);
    if (fVar18 <= *(float *)(lVar6 + 0x14c)) {
      fVar19 = fVar18;
    }
    *(undefined8 *)(lVar6 + 0x168) = 0;
    *(ulong *)(lVar6 + 0x160) = CONCAT44(fVar19,fVar22);
  }
  else {
    uVar7 = _ConstantZero;
    uVar20 = uRam0000007107459008;
    if (lVar6 != 0) {
      uVar7 = *(ulong *)(lVar6 + 0x30);
      uVar20 = 0;
    }
    lVar6 = *(long *)(param_1 + 0x450);
    cVar1 = *(char *)(lVar6 + uVar17 * 0x1e0 + 0x194);
    if (cVar1 == '\0') {
      lVar13 = lVar6 + uVar17 * 0x1e0;
      fVar18 = *(float *)(lVar13 + 0x140);
      if (*(float *)(lVar13 + 0x140) <= (float)uVar7) {
        fVar18 = (float)uVar7;
      }
      fVar19 = (float)(uVar7 >> 0x20);
      fVar22 = *(float *)(lVar13 + 0x144);
      if (fVar18 <= *(float *)(lVar13 + 0x144)) {
        fVar22 = fVar18;
      }
      fVar18 = *(float *)(lVar13 + 0x148);
      if (*(float *)(lVar13 + 0x148) <= fVar19) {
        fVar18 = fVar19;
      }
      uVar20 = 0;
      fVar19 = *(float *)(lVar13 + 0x14c);
      if (fVar18 <= *(float *)(lVar13 + 0x14c)) {
        fVar19 = fVar18;
      }
      uVar7 = CONCAT44(fVar19,fVar22);
    }
    lVar13 = lVar6 + uVar17 * 0x1e0;
    *(undefined8 *)(lVar13 + 0x168) = uVar20;
    *(ulong *)(lVar13 + 0x160) = uVar7;
    *(undefined8 *)(lVar13 + 0x150) = *(undefined8 *)(lVar13 + 0x160);
    *(undefined8 *)(lVar13 + 0x158) = *(undefined8 *)(lVar13 + 0x168);
    uVar21 = *(undefined8 *)(lVar13 + 0x158);
    uVar20 = *(undefined8 *)(lVar13 + 0x150);
    if (cVar1 == '\0') {
      lVar10 = lVar6 + uVar17 * 0x1e0;
      fVar18 = *(float *)(lVar10 + 0x140);
      if (*(float *)(lVar10 + 0x140) <= (float)uVar20) {
        fVar18 = (float)uVar20;
      }
      fVar19 = (float)((ulong)uVar20 >> 0x20);
      fVar22 = *(float *)(lVar10 + 0x144);
      if (fVar18 <= *(float *)(lVar10 + 0x144)) {
        fVar22 = fVar18;
      }
      fVar18 = *(float *)(lVar10 + 0x148);
      if (*(float *)(lVar10 + 0x148) <= fVar19) {
        fVar18 = fVar19;
      }
      uVar21 = 0;
      fVar19 = *(float *)(lVar10 + 0x14c);
      if (fVar18 <= *(float *)(lVar10 + 0x14c)) {
        fVar19 = fVar18;
      }
      uVar20 = CONCAT44(fVar19,fVar22);
    }
    lVar10 = lVar6 + uVar17 * 0x1e0;
    plVar11 = (long *)(lVar10 + 0x30);
    *(undefined8 *)(lVar10 + 0x158) = uVar21;
    *(undefined8 *)(lVar10 + 0x150) = uVar20;
    lVar10 = **(long **)(*plVar11 + 0x18);
    if (lVar10 != 0) {
      *(undefined8 *)(lVar10 + 0x30) = uVar20;
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
      uVar20 = *(undefined8 *)(lVar13 + 0x150);
    }
    if (((*(float *)(lVar6 + uVar17 * 0x1e0 + 0x134) < (float)uVar20) ||
        ((float)uVar20 < *(float *)(lVar6 + uVar17 * 0x1e0 + 0x130))) ||
       (fVar18 = (float)((ulong)uVar20 >> 0x20), *(float *)(lVar6 + uVar17 * 0x1e0 + 0x13c) < fVar18
       )) {
      bVar2 = false;
      *(undefined1 *)(lVar6 + uVar17 * 0x1e0 + 400) = 0;
    }
    else {
      lVar13 = lVar6 + uVar17 * 0x1e0;
      fVar22 = *(float *)(lVar13 + 0x138);
      *(bool *)(lVar13 + 400) = fVar18 > fVar22 || fVar22 == fVar18;
      if (fVar18 <= fVar22 && fVar22 != fVar18) {
        bVar2 = false;
      }
      else {
        bVar2 = false;
        if (*(char *)(lVar6 + uVar17 * 0x1e0 + 0x191) != '\0') {
          bVar2 = *(char *)(lVar6 + uVar17 * 0x1e0 + 0x192) != '\0';
        }
      }
    }
    if ((*(long *)(*plVar11 + 8) != 0) &&
       (lVar13 = *(long *)(*(long *)(*plVar11 + 8) + 0x18), lVar13 != 0)) {
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | bVar2;
    }
    lVar13 = **(long **)(lVar6 + uVar17 * 0x1e0 + 0x40);
    uVar7 = _ConstantZero;
    uVar23 = _ConstantZero;
    if (lVar13 != 0) {
      uVar7 = (ulong)*(uint *)(lVar13 + 0x30);
      uVar23 = (ulong)*(uint *)(lVar13 + 0x34) << 0x20;
    }
    fVar22 = (float)(uVar23 >> 0x20);
    fVar18 = (float)uVar7;
    if (((*(float *)(lVar6 + uVar17 * 0x1e0 + 0x1a8) < fVar18) ||
        (fVar18 < *(float *)(lVar6 + uVar17 * 0x1e0 + 0x1a4))) ||
       ((*(float *)(lVar6 + uVar17 * 0x1e0 + 0x1b0) < fVar22 ||
        (fVar22 < *(float *)(lVar6 + uVar17 * 0x1e0 + 0x1ac))))) {
      if ((((*(float *)(lVar6 + uVar17 * 0x1e0 + 0x1b8) < fVar18) ||
           (fVar18 < *(float *)(lVar6 + uVar17 * 0x1e0 + 0x1b4))) ||
          (*(float *)(lVar6 + uVar17 * 0x1e0 + 0x1c0) < fVar22)) ||
         (fVar22 < *(float *)(lVar6 + uVar17 * 0x1e0 + 0x1bc))) {
        lVar6 = *plVar11;
        pcVar3 = "set_center";
      }
      else {
        lVar6 = *plVar11;
        pcVar3 = "set_right";
      }
    }
    else {
      lVar6 = *plVar11;
      pcVar3 = "set_left";
    }
    FUN_7103778760(lVar6,(long)pcVar3);
  }
  if ((*(char *)(param_1 + 0x18e6) == '\x04') ||
     (*(char *)(param_1 + uVar17 * 0x1e8 + 0xaf8) != '\x02')) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x450) + uVar17 * 0x1e0 + 0x30);
    pcVar3 = "next_off";
  }
  else {
    if (*(char *)(param_1 + 0x18e6) == '\x03') {
LAB_7101c6206c:
      bVar8 = 1;
    }
    else {
      bVar8 = 2;
      if ((*(char *)(param_1 + 0x18e7) != '\x01') && (*(char *)(param_1 + 0x18e7) != '\x04'))
      goto LAB_7101c6206c;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x450) + uVar17 * 0x1e0 + 0x30);
    pcVar3 = "next_on";
    if (bVar8 <= *(byte *)(param_1 + uVar17 * 0x1e8 + 0xaf9)) {
      pcVar3 = "next_off";
    }
  }
  FUN_7103778300(0x3f800000,lVar6,(long)pcVar3);
  uVar20 = 0;
  FUN_7101c77160(param_1 + 0x448,uVar14,(long ****)0x0,ppppbVar5,param_5,param_6,param_7,param_8);
  lVar6 = *(long *)(param_1 + 0x450) + uVar17 * 0x1e0;
  if (*(int *)(lVar6 + 0x1a0) != 0) {
    FUN_71037780e0(&local_50,*(long *)(param_1 + 0x450) + uVar17 * 0x1e0 + 0x28,
                   (long ****)"balloon_off",uVar20,ppppbVar5,param_5,param_6,param_7,param_8);
    FUN_710377aee0(0x3f800000,(long)&local_50);
    uVar7 = local_48;
    *(undefined4 *)(lVar6 + 0x1a0) = 0;
    local_50 = (long ***)&PTR_FUN_710523d9e8;
    local_48 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  *(undefined1 *)(*(long *)(param_1 + 0x460) + 0x15e) = 0;
  *(undefined1 *)(param_1 + 0x652) = 0;
  FUN_710376b960(*(long *)(param_1 + 0x488));
  (**(code **)(**(long **)(param_1 + 0x488) + 0x70))(*(long **)(param_1 + 0x488),0);
  (**(code **)(**(long **)(param_1 + 0x488) + 0x60))(*(long **)(param_1 + 0x488),0);
  if (*(char *)(*(long *)(param_1 + 0x450) + uVar17 * 0x1e0 + 0x192) != '\0') {
    lVar6 = *(long *)(DAT_710532f8d0 + 8);
    if (((ulong)param_3 & 1) == 0) {
      if ((*(char *)(lVar6 + 0x191) == '\0') &&
         (uVar17 = FUN_7103313f20(lVar6,0x135b8dc262,(long ****)&DAT_00000004,ppppbVar5,param_5,
                                  param_6,param_7,param_8), (uVar17 & 1) != 0)) {
        puVar15 = local_e8;
        FUN_71024076d0(local_e8,0x135b8dc262);
        plVar11 = &local_d8;
        local_e0 = &PTR_FUN_7104f73d50;
        if (local_d8 != 0) {
          if ((DAT_7106dd53a8 == '\x01') && ((int)local_d0 == DAT_7106dd53ac)) {
            piVar12 = (int *)(local_d8 + 0x38);
            do {
              puVar15 = local_e8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar2) {
                *piVar12 = *piVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          else {
            puVar15 = local_e8;
          }
        }
      }
      else {
        puVar15 = local_e8;
        local_d8 = 0;
        local_d0 = 0x87650000000000;
        local_c0 = 0xffffffffffffffff;
        uStack_b8 = 0;
        plVar11 = &local_d8;
        local_c8[0] = 0;
        local_e8[0] = 0;
        local_b0 = 0;
        local_e0 = &PTR_FUN_7104f73d50;
      }
    }
    else {
      if ((ulong)(*(long *)(lVar6 + 0x48) - *(long *)(lVar6 + 0x40) >> 3) < 4) {
        uVar17 = 0;
        cVar1 = *(char *)(lVar6 + 0x191);
      }
      else {
        uVar17 = *(ulong *)(*(long *)(lVar6 + 0x40) + 0x18);
        cVar1 = *(char *)(lVar6 + 0x191);
      }
      if ((cVar1 == '\0') &&
         (uVar7 = FUN_7103313f20(lVar6,uVar17,(long ****)&DAT_00000004,ppppbVar5,param_5,param_6,
                                 param_7,param_8), (uVar7 & 1) != 0)) {
        puVar15 = local_a8;
        FUN_71024076d0(local_a8,uVar17);
        plVar11 = &local_98;
        local_a0 = &PTR_FUN_7104f73d50;
        if (local_98 != 0) {
          if ((DAT_7106dd53a8 == '\x01') && ((int)local_90 == DAT_7106dd53ac)) {
            piVar12 = (int *)(local_98 + 0x38);
            do {
              puVar15 = local_a8;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar2) {
                *piVar12 = *piVar12 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          else {
            puVar15 = local_a8;
          }
        }
      }
      else {
        puVar15 = local_a8;
        local_98 = 0;
        local_90 = 0x87650000000000;
        local_80 = 0xffffffffffffffff;
        uStack_78 = 0;
        plVar11 = &local_98;
        local_88 = 0;
        local_a8[0] = 0;
        local_70 = 0;
        local_a0 = &PTR_FUN_7104f73d50;
      }
    }
    *plVar11 = 0;
    *(undefined1 *)(puVar15 + 8) = 0;
  }
  *(undefined1 *)(param_1 + 0x1b27) = 0;
  uVar17 = *(ulong *)(param_1 + 0x428);
  if ((uVar17 & 1) == 0) {
LAB_7101c62348:
    uVar14 = 0;
  }
  else {
    plVar16 = *(long **)(param_1 + 0x2f8);
    plVar11 = (long *)**(long **)(*plVar16 + 0x18);
    if (plVar11 == (long *)0x0) {
LAB_7101c623b0:
      uVar17 = *(ulong *)(param_1 + 0x428);
      if (((uint)uVar17 >> 1 & 1) == 0) {
LAB_7101c623a8:
        uVar14 = (uint)(uVar17 >> 2) & 1;
      }
      else {
LAB_7101c623b8:
        uVar14 = 1;
      }
    }
    else {
      uVar17 = (**(code **)(*plVar11 + 0x2f8))();
      if ((uVar17 & 1) == 0) {
        plVar11 = (long *)**(long **)(*plVar16 + 0x18);
        if (plVar11 == (long *)0x0) goto LAB_7101c623b0;
        uVar7 = (**(code **)(*plVar11 + 0x3c0))();
        uVar17 = *(ulong *)(param_1 + 0x428);
        if ((uVar7 & 1) == 0) goto LAB_7101c62348;
        if (((uint)uVar17 >> 1 & 1) != 0) goto LAB_7101c623b8;
        goto LAB_7101c623a8;
      }
      uVar17 = *(ulong *)(param_1 + 0x428);
      uVar14 = 0;
    }
  }
  *(ulong *)(param_1 + 0x428) = uVar17 & 0xfffffffffffffffb;
  if ((uVar17 & 1) == 0) {
LAB_7101c62428:
    if (uVar14 == 0) goto LAB_7101c62430;
  }
  else {
    plVar16 = *(long **)(param_1 + 0x2f8);
    plVar11 = (long *)**(long **)(*plVar16 + 0x18);
    if ((plVar11 != (long *)0x0) &&
       ((uVar17 = (**(code **)(*plVar11 + 0x2f8))(), (uVar17 & 1) != 0 ||
        ((plVar11 = (long *)**(long **)(*plVar16 + 0x18), plVar11 != (long *)0x0 &&
         (uVar17 = (**(code **)(*plVar11 + 0x3c0))(), (uVar17 & 1) == 0)))))) goto LAB_7101c62428;
    if (((uint)*(ulong *)(param_1 + 0x428) >> 1 & 1) == 0) {
      if ((uVar14 ^ (uint)(*(ulong *)(param_1 + 0x428) >> 2) & 1) != 1) goto LAB_7101c62430;
    }
    else if (uVar14 != 0) goto LAB_7101c62430;
  }
  *(undefined1 *)(param_1 + 0x431) = 0;
LAB_7101c62430:
  plVar11 = local_60;
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  return;
}

