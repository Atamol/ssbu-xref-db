// addr:      7101dc6140
// offset:    0x1dc6140
// name:      FUN_7101dc6140
// mangled:   
// signature: undefined __cdecl FUN_7101dc6140(undefined1[16] param_1, undefined1[16] param_2, float param_3, float param_4, long param_5, undefined8 param_6, long * * * * param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12)


void FUN_7101dc6140(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                   long param_5,undefined8 param_6,long ****param_7,byte ****param_8,
                   long ****param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  char cVar6;
  undefined2 uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  int iVar15;
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
  undefined8 uVar16;
  ulong uVar17;
  undefined1 uVar18;
  uint uVar19;
  int *piVar20;
  char *pcVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ushort uVar28;
  undefined1 *puVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined8 uStack_280;
  undefined4 local_278;
  undefined1 local_274;
  undefined **local_240;
  ulong local_238;
  undefined **local_230;
  long *local_228;
  undefined **local_220;
  ulong local_218;
  undefined **local_210;
  ulong local_208 [8];
  undefined **local_1c8;
  ulong local_1c0;
  long *local_1b8;
  undefined4 local_1b0 [4];
  long local_1a0;
  int local_198;
  undefined4 local_170 [4];
  long local_160;
  int local_158;
  undefined4 local_130 [2];
  undefined **local_128;
  long local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  
  if (*(int *)(param_5 + 0x244) == 0) {
    if (*(int *)(param_5 + 0x240) != 1) {
      return;
    }
    (**(code **)(**(long **)(param_5 + 0x30) + 0x60))
              (param_1._0_4_,param_2._0_4_,*(long **)(param_5 + 0x30),1);
    (**(code **)(**(long **)(param_5 + 0x30) + 0x70))(*(long **)(param_5 + 0x30),1);
    (**(code **)(**(long **)(param_5 + 0x38) + 0x60))(*(long **)(param_5 + 0x38),1);
    (**(code **)(**(long **)(param_5 + 0x38) + 0x70))(*(long **)(param_5 + 0x38),1);
    (**(code **)(**(long **)(param_5 + 0x40) + 0x60))(*(long **)(param_5 + 0x40),1);
    (**(code **)(**(long **)(param_5 + 0x40) + 0x70))(*(long **)(param_5 + 0x40),1);
    (**(code **)(**(long **)(param_5 + 0x48) + 0x60))(*(long **)(param_5 + 0x48),1);
                    /* WARNING: Could not recover jumptable at 0x007101dc63f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_5 + 0x48) + 0x70))(*(long **)(param_5 + 0x48),1);
    return;
  }
  FUN_7103399c10(*(long *)(param_5 + 0x2a0));
  if (*(int *)(param_5 + 0x240) == 1) {
    if (*(char *)(*(long *)(param_5 + 0x30) + 0x280) != '\0') {
      return;
    }
    if (*(char *)(*(long *)(param_5 + 0x48) + 0x316) != '\0') {
      return;
    }
    if (*(int *)(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80) + 0x2270) == 0) {
      return;
    }
  }
  iVar15 = *(int *)(*(long *)(param_5 + 0x38) + 0x25c);
  uVar19 = (uint)(iVar15 == 1);
  if (iVar15 == 0) {
    uVar19 = 0xffffffff;
  }
  uVar16 = extraout_x1;
  if (uVar19 != 0) {
    iVar15 = *(int *)(*(long *)(param_5 + 0x30) + 0x254) + uVar19;
    iVar23 = 3;
    if (*(int *)(param_5 + 600) != 1) {
      iVar23 = 4;
    }
    iVar2 = 0;
    if (iVar15 <= iVar23) {
      iVar2 = iVar15;
    }
    param_7 = (long ****)0x0;
    if (-1 < iVar2) {
      iVar23 = iVar2;
    }
    FUN_7103771a80((long *)(param_5 + 0x30),iVar23,0);
    uVar16 = extraout_x1_00;
  }
  uVar19 = *(uint *)(*(long *)(param_5 + 0x30) + 0x254);
  uVar24 = *(uint *)(param_5 + 0x250);
  if (uVar19 != uVar24) {
    if (4 < uVar24) goto LAB_7101dc7418;
    lVar25 = *(long *)(param_5 + 0x48);
    *(undefined4 *)(&DAT_71050b0550 + (ulong)uVar24 * 0xc) = *(undefined4 *)(lVar25 + 0x2a4);
    *(undefined4 *)(&DAT_71050b0554 + (ulong)uVar24 * 0xc) = *(undefined4 *)(lVar25 + 0x260);
    *(uint *)(param_5 + 0x250) = uVar19;
    FUN_7101dc7ad0(param_5,uVar16,param_7,param_8,param_9,param_10,param_11,param_12);
    FUN_7101dc79d0(param_5,extraout_x1_01,param_7,param_8,param_9,param_10,param_11,param_12);
    FUN_7101dc7bf0(param_5,extraout_x1_02,param_7,param_8,param_9,param_10,param_11,param_12);
    *(undefined4 *)(param_5 + 0x288) = 0xffffffff;
    *(undefined1 *)(param_5 + 0x290) = 0;
    FUN_7101dc7e00(param_5,0,param_7,param_8,param_9,param_10,param_11,param_12);
    *(undefined4 *)(param_5 + 0x28c) = 1;
    uVar16 = extraout_x1_03;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_7 = (long ****)&DAT_00000004;
      uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x151ca6c028,(long ****)&DAT_00000004,
                              param_8,param_9,param_10,param_11,param_12);
      uVar16 = extraout_x1_04;
      if ((uVar10 & 1) == 0) goto LAB_7101dc63fc;
      FUN_71024076d0(local_130,0x151ca6c028);
      uVar16 = extraout_x1_05;
      if (((local_120 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_118 == DAT_7106dd53ac)) {
        piVar20 = (int *)(local_120 + 0x38);
        do {
          cVar6 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar9) {
            *piVar20 = *piVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
    else {
LAB_7101dc63fc:
      local_118 = 0x87650000000000;
      local_108 = 0xffffffffffffffff;
      uStack_100 = 0;
      local_130[0] = 0;
      local_f8 = 0;
    }
    local_128 = &PTR_FUN_7104f73d50;
    local_120 = 0;
    local_110 = 0;
  }
  iVar15 = *(int *)(*(long *)(param_5 + 0x48) + 0x2b4);
  if (-1 < iVar15) {
    if ((((ulong)(*(long *)(param_5 + 0x60) - *(long *)(param_5 + 0x58) >> 1) <= (ulong)(long)iVar15
         ) || (uVar28 = *(ushort *)(*(long *)(param_5 + 0x58) + (long)iVar15 * 2), uVar28 == 0xffff)
        ) || ((1999 < (short)uVar28 ||
              ((lVar25 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
               (uint)((int)((ulong)(*(long *)(lVar25 + 0x28) - *(long *)(lVar25 + 0x20)) >> 6) *
                     -0x33333333) <=
               (uint)*(ushort *)(lVar25 + ((long)((ulong)uVar28 << 0x30) >> 0x2f) + 0x60) ||
               ((*(byte *)(*(long *)(*DAT_7105329f98 + 0x30) + (long)(short)uVar28 * 0x24 + 1) >> 3
                & 1) == 0)))))) {
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
        return;
      }
      uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xed63546f2,(long ****)&DAT_00000004,
                              param_8,param_9,param_10,param_11,param_12);
      if ((uVar10 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_1b0,0xed63546f2);
      if (local_1a0 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_198 != DAT_7106dd53ac) {
        return;
      }
      piVar20 = (int *)(local_1a0 + 0x38);
      do {
        cVar6 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar9) {
          *piVar20 = *piVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      return;
    }
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
      return;
    }
    uVar10 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,(long ****)&DAT_00000004,
                            param_8,param_9,param_10,param_11,param_12);
    if ((uVar10 & 1) == 0) {
      return;
    }
    FUN_71024076d0(local_170,0xf57a523f5);
    if (local_160 == 0) {
      return;
    }
    if (DAT_7106dd53a8 != '\x01') {
      return;
    }
    if (local_158 != DAT_7106dd53ac) {
      return;
    }
    piVar20 = (int *)(local_160 + 0x38);
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar9) {
        *piVar20 = *piVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    return;
  }
  lVar25 = *(long *)(*(long *)(param_5 + 0x40) + 0x1b8);
  if (lVar25 == 0) {
LAB_7101dc64a4:
    lVar25 = *(long *)(*(long *)(param_5 + 0x28) + 8);
    if ((lVar25 != 0) &&
       (plVar11 = (long *)FUN_71037964b0(lVar25,0x7104421055), uVar16 = extraout_x1_06,
       plVar11 != (long *)0x0)) {
      auVar38 = (**(code **)(*plVar11 + 0x138))();
      uVar16 = auVar38._8_8_;
      if ((auVar38._0_8_ & 1) == 0) goto LAB_7101dc6794;
    }
    lVar25 = *(long *)(*(long *)(param_5 + 0x40) + 0x1b8);
    if (lVar25 != 0) {
      lVar27 = *(long *)(param_5 + 0x40) + 0x1b8;
      lVar26 = lVar27;
      do {
        bVar9 = *(int *)(lVar25 + 0x20) < 0;
        if (!bVar9) {
          lVar26 = lVar25;
        }
        lVar25 = *(long *)(lVar25 + (ulong)bVar9 * 8);
      } while (lVar25 != 0);
      if (((lVar26 != lVar27) && (*(int *)(lVar26 + 0x20) < 1)) &&
         (plVar11 = *(long **)(lVar26 + 0x28), plVar11 != (long *)0x0)) {
        (**(code **)(*plVar11 + 0x208))(plVar11,1);
        param_7 = (long ****)0x0;
        (**(code **)(*plVar11 + 0x388))(plVar11,0);
        uVar16 = extraout_x1_07;
      }
    }
  }
  else {
    lVar27 = *(long *)(param_5 + 0x40) + 0x1b8;
    lVar26 = lVar27;
    do {
      bVar9 = *(int *)(lVar25 + 0x20) < 0;
      if (!bVar9) {
        lVar26 = lVar25;
      }
      lVar25 = *(long *)(lVar25 + (ulong)bVar9 * 8);
    } while (lVar25 != 0);
    if (((lVar26 == lVar27) || (0 < *(int *)(lVar26 + 0x20))) ||
       (*(long **)(lVar26 + 0x28) == (long *)0x0)) goto LAB_7101dc64a4;
    auVar38 = (**(code **)(**(long **)(lVar26 + 0x28) + 0x210))();
    uVar16 = auVar38._8_8_;
    if ((auVar38._0_8_ & 1) == 0) goto LAB_7101dc64a4;
  }
LAB_7101dc6794:
  if (*(int *)(*(long *)(param_5 + 0x40) + 0x25c) == 0) {
    if (0x11 < *(int *)(param_5 + 0x23c)) {
      return;
    }
    uVar19 = *(int *)(param_5 + 0x23c) + 1;
    *(uint *)(param_5 + 0x23c) = uVar19;
    if (uVar19 < 0x13) {
      *(undefined4 *)(param_5 + (long)(int)uVar19 * 4 + 0x1f0) = 3;
      return;
    }
LAB_7101dc7418:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_5 + 0x298) == '\0') {
    return;
  }
  lVar25 = *(long *)(param_5 + 0x48);
  fVar34 = *(float *)(lVar25 + 0x260);
  if ((*(float *)(lVar25 + 0x264) != fVar34) || (0 < *(int *)(param_5 + 0x28c))) {
    if (*(char *)(param_5 + 0x290) != '\0') {
      *(undefined1 *)(param_5 + 0x290) = 0;
      FUN_7101dc7e00(param_5,0,param_7,param_8,param_9,param_10,param_11,param_12);
    }
    if (*(int *)(param_5 + 0x28c) < 1) {
      return;
    }
    *(int *)(param_5 + 0x28c) = *(int *)(param_5 + 0x28c) + -1;
    return;
  }
  iVar15 = *(int *)(lVar25 + 0x2a4);
  if ((*(char *)(param_5 + 0x290) != '\0') &&
     (uVar19 = *(int *)(param_5 + 0x294) + 1, *(uint *)(param_5 + 0x294) = uVar19,
     *(uint *)(*DAT_7105329fa0 + 0x1e8) < uVar19)) {
    *(undefined1 *)(param_5 + 0x290) = 0;
    FUN_7101dc7e00(param_5,0,param_7,param_8,param_9,param_10,param_11,param_12);
    uVar16 = extraout_x1_08;
  }
  if (iVar15 == *(int *)(param_5 + 0x288)) {
    return;
  }
  *(int *)(param_5 + 0x288) = iVar15;
  if (iVar15 < 0) {
LAB_7101dc6894:
    uVar28 = 0xffff;
  }
  else {
    if ((ulong)(*(long *)(param_5 + 0x60) - *(long *)(param_5 + 0x58) >> 1) <= (ulong)(long)iVar15)
    goto LAB_7101dc6894;
    uVar28 = *(ushort *)(*(long *)(param_5 + 0x58) + (long)iVar15 * 2);
  }
  lVar25 = *(long *)(param_5 + 0x48);
  iVar15 = *(int *)(lVar25 + 0x2c8);
  if ((iVar15 < 0) || (*(int *)(lVar25 + 0x2c0) <= iVar15)) {
    FUN_7103776290(&local_f0,uVar16,param_7,param_8,param_9,param_10,param_11,param_12);
  }
  else {
    FUN_7103776390(&local_f0,
                   (undefined8 *)(*(long *)(*(long *)(lVar25 + 0x168) + (long)iVar15 * 8) + 8),
                   param_7,param_8,param_9,param_10,param_11,param_12);
  }
  fVar31 = FUN_710379e030(**(long **)(local_e8 + 0x18));
  lVar25 = param_5 + 0x20;
  fVar35 = fVar34;
  fVar37 = param_4;
  fVar36 = param_3;
  FUN_7103776640(&local_210,lVar25,(byte ****)"set_parts_lct_balloon",param_7,param_8,param_9,
                 param_10,param_11,param_12);
  uVar10 = local_208[0];
  plVar11 = *(long **)(local_208[0] + 0x18);
  fVar32 = FUN_710379e030(*plVar11);
  local_210 = &PTR_FUN_710523d988;
  local_208[0] = 0;
  if (uVar10 != 0) {
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_710392eb40(uVar10);
  }
  uVar10 = local_e8;
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = 0;
  if (uVar10 != 0) {
    uVar12 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar10);
  }
  if (uVar28 == 0xffff || 1999 < (short)uVar28) {
LAB_7101dc6ad0:
    uVar19 = 0;
    lVar27 = DAT_710532f730;
  }
  else {
    lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar5 = *(ushort *)(lVar27 + ((long)((ulong)uVar28 << 0x30) >> 0x2f) + 0x60);
    uVar10 = (*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar10 <= (uint)uVar5) goto LAB_7101dc6ad0;
    uVar12 = 0xffffffff;
    if (uVar28 != 0xffff) {
      uVar12 = (ulong)uVar5;
    }
    puVar3 = (undefined2 *)(*(long *)(lVar27 + 0x20) + uVar12 * 0x140);
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    if (*(char *)(puVar3 + 0x2d) != '\0') {
      if (*(char *)(puVar3 + 0x49) != '\0') goto LAB_7101dc6a1c;
      goto LAB_7101dc6ad0;
    }
    if (*(char *)(puVar3 + 0x90) == '\0') goto LAB_7101dc6ad0;
    puVar29 = *(undefined1 **)(puVar3 + 0x4c);
    puVar13 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
    if ((((((ulong)puVar29 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar29 & 0xffffffffff) != 0)) &&
        (((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar13 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar13 ^ (ulong)puVar29) & 0xffffffffff) != 0) {
LAB_7101dc6abc:
        param_7 = (long ****)0x0;
        uVar10 = FUN_7101797560(puVar29,0,0);
        if ((uVar10 & 1) == 0) goto LAB_7101dc6ad0;
      }
    }
    else if ((((ulong)puVar13 & 0xffffffffff) != 0 &&
             ((ulong)puVar13 & 0xff00000000000000) == 0xc100000000000000) !=
             (((ulong)puVar29 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)puVar29 & 0xffffffffff) != 0)) goto LAB_7101dc6abc;
LAB_7101dc6a1c:
    uVar19 = 1;
    lVar27 = DAT_710532f730;
  }
  DAT_710532f730 = lVar27;
  if (((uVar28 == 0xffff || 1999 < (short)uVar28) ||
      (lVar26 = *(long *)(*(long *)(lVar27 + 8) + 0x1d8),
      (uint)((int)((ulong)(*(long *)(lVar26 + 0x28) - *(long *)(lVar26 + 0x20)) >> 6) * -0x33333333)
      <= (uint)*(ushort *)(lVar26 + ((long)((ulong)uVar28 << 0x30) >> 0x2f) + 0x60))) ||
     (lVar26 = (long)(short)uVar28,
     (uVar19 & (*(byte *)(*(long *)(*DAT_7105329f98 + 0x30) + lVar26 * 0x24 + 1) & 8) >> 3) == 0)) {
    *(undefined1 *)(param_5 + 0x290) = 0;
    FUN_7101dc7e00(param_5,0,param_7,param_8,param_9,param_10,param_11,param_12);
    return;
  }
  *(undefined1 *)(param_5 + 0x290) = 1;
  *(undefined4 *)(param_5 + 0x294) = 0;
  lVar30 = *(long *)(lVar27 + 8);
  lVar27 = *(long *)(lVar30 + 0x1d8);
  if (uVar28 == 0xffff) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = (ulong)*(ushort *)(lVar27 + lVar26 * 2 + 0x60);
  }
  uVar12 = (*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20) >> 6) * -0x3333333333333333;
  puVar3 = (undefined2 *)(*(long *)(lVar27 + 0x20) + uVar10 * 0x140);
  if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
    puVar3 = &DAT_7105182b08;
  }
  uVar10 = FUN_71032a9470(lVar27,uVar28);
  FUN_7102499b60((long *)&local_1b8,uVar10 & 0xffffffffff,param_7,param_8,param_9,param_10,param_11,
                 param_12);
  if ((uVar28 < 2000) &&
     (uVar19 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + lVar26 * 4 + 0x65a0),
     uVar19 != 0)) {
    FUN_7103776640(&local_f0,lVar25,(byte ****)"set_parts_lct_balloon",param_7,param_8,param_9,
                   param_10,param_11,param_12);
    FUN_7103776910(&local_210,(long)&local_f0,(long ****)"set_txt_totalscore",param_7,param_8,
                   param_9,param_10,param_11,param_12);
    param_7 = (long ****)0x1;
    param_8 = (byte ****)(ulong)uVar19;
    FUN_710377a280((long)&local_210,(byte *)"mnu_spirits_directory_battle_high_score_n",1);
    uVar10 = local_208[0];
    local_210 = &PTR_FUN_710523d9a8;
    local_208[0] = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    iVar15 = 2;
  }
  else {
    FUN_7103776640(&local_f0,lVar25,(byte ****)"set_parts_lct_balloon",param_7,param_8,param_9,
                   param_10,param_11,param_12);
    FUN_7103776910(&local_210,(long)&local_f0,(long ****)"set_txt_totalscore",param_7,param_8,
                   param_9,param_10,param_11,param_12);
    FUN_710377a120((long)&local_210,"mnu_spirits_directory_battle_high_score_none",param_7,param_8,
                   param_9,param_10,param_11,param_12);
    uVar10 = local_208[0];
    local_210 = &PTR_FUN_710523d9a8;
    local_208[0] = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    iVar15 = 1;
  }
  FUN_7101dc7e00(param_5,iVar15,param_7,param_8,param_9,param_10,param_11,param_12);
  uVar10 = local_e8;
  local_f0 = &PTR_FUN_710523d988;
  local_e8 = 0;
  if (uVar10 != 0) {
    uVar12 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar10);
  }
  FUN_7103776640(&local_1c8,lVar25,(byte ****)"set_parts_lct_balloon",param_7,param_8,param_9,
                 param_10,param_11,param_12);
  lVar27 = *(long *)(lVar30 + 0x1d8);
  if (uVar28 == 0xffff) {
    uVar19 = 0xffffffff;
  }
  else {
    uVar19 = (uint)*(ushort *)(lVar27 + lVar26 * 2 + 0x60);
  }
  if (uVar19 < (uint)((int)((ulong)(*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20)) >> 6) *
                     -0x33333333)) {
    bVar9 = *(char *)(*(long *)(lVar27 + 0x20) + (ulong)uVar19 * 0x140 + 0x5e) == '\x02';
  }
  else {
    bVar9 = false;
  }
  lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar5 = *(ushort *)(lVar27 + lVar26 * 2 + 0x60);
  uVar10 = (*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20) >> 6) * -0x3333333333333333;
  if ((uint)uVar5 < (uint)uVar10) {
    uVar12 = 0xffffffff;
    if (uVar28 != 0xffff) {
      uVar12 = (ulong)uVar5;
    }
    puVar4 = (undefined2 *)(*(long *)(lVar27 + 0x20) + uVar12 * 0x140);
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      puVar4 = &DAT_7105182b08;
    }
    if (*(char *)(puVar4 + 0x2f) == '\0') {
      if (2 < *(byte *)(puVar4 + 0x36) - 1) goto LAB_7101dc6dd0;
      uVar18 = (undefined1)(0x20301 >> (ulong)((*(byte *)(puVar4 + 0x36) - 1 & 3) << 3));
    }
    else {
      uVar18 = 4;
    }
  }
  else {
LAB_7101dc6dd0:
    uVar18 = 0;
  }
  uVar1 = 0;
  if (!bVar9) {
    uVar1 = uVar18;
  }
  FUN_710339dde0((uint *)&local_f0,uVar1,'\0');
  uVar19 = (uint)*(byte *)(local_1b8 + 1);
  if (*(byte *)(local_1b8 + 1) == 0) goto LAB_7101dc6e58;
  if (*(char *)((long)local_1b8 + 0xec) == '\0') {
    lVar27 = local_1b8[0xe];
    lVar26 = local_1b8[0xf];
    if (lVar26 != lVar27) goto LAB_7101dc6e20;
  }
  else {
    lVar27 = local_1b8[0xe];
    lVar26 = local_1b8[0xf];
LAB_7101dc6e20:
    uVar19 = (uint)((ulong)(lVar26 - lVar27) >> 3);
    if (uVar19 != 0) {
      uVar24 = 0;
      do {
        lVar26 = *(long *)(lVar27 + (ulong)uVar24 * 8);
        if (*(char *)(lVar26 + 0x10) == '\x01') {
          uVar19 = (uint)*(byte *)(lVar26 + 0x48);
          goto LAB_7101dc6e58;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar19);
    }
  }
  uVar19 = 0;
LAB_7101dc6e58:
  uVar18 = (undefined1)(0x20301 >> (ulong)((uVar19 - 1 & 3) << 3));
  if (2 < uVar19 - 1) {
    uVar18 = 0;
  }
  uVar16 = 0;
  FUN_710339dde0((uint *)&local_210,uVar18,'\0');
  FUN_7103776640(&local_220,(long)&local_1c8,(byte ****)"set_part_lct_icon",uVar16,param_8,param_9,
                 param_10,param_11,param_12);
  uVar10 = local_218;
  FUN_7103778300(0x3f800000,local_218,(long)local_208);
  FUN_7103776910(&local_230,(long)&local_220,(long ****)"set_txt_num",uVar16,param_8,param_9,
                 param_10,param_11,param_12);
  plVar11 = local_228;
  lVar27 = *local_228;
  if (lVar27 != 0) {
    *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 1;
  }
  uVar16 = 1;
  uVar19 = 0x811c9dc5;
  uVar17 = (ulong)*(uint *)(local_1b8 + 0x2a);
  FUN_710377a280((long)&local_230,(byte *)"mnu_spirits_directory_battle_power_n",1);
  uVar8 = local_1c0;
  FUN_7103778300(0x3f800000,local_1c0,(long)&local_e8);
  FUN_7103776640(&local_240,(long)&local_1c8,(byte ****)"set_part_lct_ster",uVar16,uVar17,param_9,
                 param_10,param_11,param_12);
  uVar12 = local_238;
  lVar27 = *(long *)(local_238 + 8);
  if (bVar9) {
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x18), lVar27 != 0)) {
      *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) & 0xfe;
    }
  }
  else {
    if ((lVar27 != 0) && (lVar27 = *(long *)(lVar27 + 0x18), lVar27 != 0)) {
      *(byte *)(lVar27 + 0x58) = *(byte *)(lVar27 + 0x58) | 1;
    }
    uVar7 = local_278._2_2_;
    switch(*(undefined1 *)(puVar3 + 0x34)) {
    case 0:
      uStack_280 = 0x6f6e5f7373616c63;
      local_278 = CONCAT13(local_278._3_1_,0x656e);
      pcVar21 = (char *)((long)&uStack_280 + 1);
      do {
        cVar6 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar6 != '\0');
      break;
    case 1:
      uStack_280 = 0x6f685f7373616c63;
      local_278 = CONCAT13(local_278._3_1_,0x6570);
      pcVar21 = (char *)((long)&uStack_280 + 1);
      do {
        cVar6 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar6 != '\0');
      break;
    case 2:
      uStack_280 = 0x63615f7373616c63;
      local_278 = CONCAT22(uVar7,0x65);
      pcVar21 = (char *)((long)&uStack_280 + 1);
      do {
        cVar6 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar6 != '\0');
      break;
    case 3:
      uStack_280 = 0x656c5f7373616c63;
      local_278 = 0x646e6567;
      local_274 = 0;
      pcVar21 = (char *)((long)&uStack_280 + 1);
      do {
        cVar6 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar6 != '\0');
      break;
    default:
      uStack_280 = 0x6f6e5f7373616c63;
      local_278 = CONCAT13(local_278._3_1_,0x656e);
      pcVar21 = (char *)((long)&uStack_280 + 1);
      do {
        cVar6 = *pcVar21;
        pcVar21 = pcVar21 + 1;
      } while (cVar6 != '\0');
    }
    FUN_7103778300(0x3f800000,local_238,0x710438b28f);
    FUN_7103778300(0x3f800000,local_238,(long)&uStack_280);
  }
  local_240 = &PTR_FUN_710523d988;
  local_238 = 0;
  if (uVar12 != 0) {
    uVar14 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar12);
  }
  fVar33 = 540.0 - (param_3 + (param_4 - param_3) * 0.5);
  local_230 = &PTR_FUN_710523d9a8;
  local_228 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  local_220 = &PTR_FUN_710523d988;
  local_218 = 0;
  if (uVar10 != 0) {
    uVar12 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar10);
  }
  local_1c8 = &PTR_FUN_710523d988;
  local_1c0 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,lVar25,(byte ****)"set_parts_lct_balloon",uVar16,uVar17,param_9,param_10
                 ,param_11,param_12);
  uVar12 = local_208[0];
  uVar10 = 0;
  pcVar21 = "balloon_pos_btm";
  if (fVar33 <= -300.0) {
    pcVar21 = "balloon_pos_top";
  }
  do {
    cVar6 = pcVar21[uVar10];
    if (cVar6 == '\0') {
LAB_7101dc7324:
      *(undefined1 *)((long)&local_e8 + (uVar10 & 0xffffffff)) = 0;
      uVar24 = (uint)(byte)local_e8;
      local_f0 = (undefined **)(uVar10 << 0x20);
      if ((byte)local_e8 != 0) {
        pbVar22 = (byte *)((long)&local_e8 + 1);
        do {
          uVar19 = uVar19 * 0x89 ^ uVar24;
          uVar24 = (uint)*pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (uVar24 != 0);
      }
      local_f0 = (undefined **)CONCAT44((int)uVar10,uVar19);
      FUN_7103778300(0x3f800000,local_208[0],(long)&local_e8);
      local_210 = &PTR_FUN_710523d988;
      local_208[0] = 0;
      if (uVar12 != 0) {
        uVar10 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar12);
      }
      FUN_7103776640(&local_f0,lVar25,(byte ****)"set_parts_lct_balloon",uVar16,uVar17,param_9,
                     param_10,param_11,param_12);
      uVar10 = local_e8;
      lVar25 = **(long **)(local_e8 + 0x18);
      if (lVar25 != 0) {
        *(byte *)(lVar25 + 0x58) = *(byte *)(lVar25 + 0x58) | 0x10;
        *(ulong *)(lVar25 + 0x30) =
             CONCAT44((fVar33 - (540.0 - (fVar36 + (fVar37 - fVar36) * 0.5))) +
                      *(float *)(lVar25 + 0x34),
                      ((fVar31 + (fVar34 - fVar31) * 0.5 + -960.0) -
                      (fVar32 + (fVar35 - fVar32) * 0.5 + -960.0)) + *(float *)(lVar25 + 0x30));
      }
      local_f0 = &PTR_FUN_710523d988;
      local_e8 = 0;
      if (uVar10 != 0) {
        uVar12 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar10);
      }
      plVar11 = local_1b8;
      local_1b8 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      return;
    }
    *(char *)((long)&local_e8 + uVar10) = cVar6;
    if (0x3e < (int)uVar10 + 1U) {
      uVar10 = (ulong)((int)uVar10 + 1);
      goto LAB_7101dc7324;
    }
    cVar6 = (pcVar21 + uVar10)[1];
    if (cVar6 == '\0') {
      uVar10 = uVar10 + 1;
      goto LAB_7101dc7324;
    }
    *(char *)((long)&local_e8 + uVar10 + 1) = cVar6;
    uVar10 = uVar10 + 2;
  } while( true );
}

