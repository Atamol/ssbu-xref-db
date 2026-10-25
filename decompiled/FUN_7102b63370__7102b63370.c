// addr:      7102b63370
// offset:    0x2b63370
// name:      FUN_7102b63370
// mangled:   
// signature: undefined __cdecl FUN_7102b63370(long param_1, uint * param_2, long param_3, uint param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102b63370(long param_1,uint *param_2,long param_3,uint param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  bool bVar10;
  undefined8 extraout_x1;
  uint *extraout_x1_00;
  uint *extraout_x1_01;
  uint *extraout_x1_02;
  uint *extraout_x1_03;
  uint *puVar11;
  uint *extraout_x1_04;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  long lVar26;
  uint *puVar27;
  uint uVar28;
  int local_140;
  byte local_13c;
  uint auStack_f8 [2];
  byte ***apppbStack_f0 [8];
  uint local_b0 [2];
  undefined1 auStack_a8 [72];
  
  uVar7 = *(uint *)(param_3 + 0x24c);
  uVar8 = *(uint *)(param_3 + (ulong)param_4 * 0x10 + 0x254);
  if (param_4 == 0) {
    lVar26 = 1;
    puVar25 = &DAT_7104557930;
  }
  else if (param_4 == 2) {
    lVar26 = 1;
    puVar25 = (uint *)&DAT_7104557924;
  }
  else if (param_4 == 1) {
    lVar26 = 2;
    puVar25 = &DAT_7104557928;
  }
  else {
    lVar26 = 0;
    puVar25 = (uint *)0x0;
  }
  local_140 = 0;
  pcVar4 = "Ground";
  if (uVar7 != 1) {
    pcVar4 = "Island";
  }
  local_13c = 0;
  pcVar5 = "Island";
  if (uVar7 != 0) {
    pcVar5 = pcVar4;
  }
  puVar15 = &DAT_710426e064;
  if (param_4 != 1) {
    puVar15 = &DAT_710439b3be;
  }
  puVar6 = &DAT_71042b2c92;
  if (param_4 != 2) {
    puVar6 = puVar15;
  }
  lVar2 = param_1 + (ulong)param_4 * 0x20;
  puVar1 = (ulong *)(lVar2 + 0x10);
  uVar28 = 0;
  puVar11 = param_2;
  while( true ) {
    pppplVar14 = (long ****)(ulong)uVar8;
    puVar15 = puVar6;
    FUN_710176bcc0(local_b0,puVar11,"Land_%s_%02d_%s",pcVar5,pppplVar14,puVar6,param_7,param_8);
    FUN_710176bcc0(auStack_f8,extraout_x1,"SP%d",(ulong)uVar28,pppplVar14,puVar15,param_7,param_8);
    ppppbVar13 = apppbStack_f0;
    FUN_7102b63800(&local_140,0,auStack_a8,(byte *)apppbStack_f0,pppplVar14,puVar15,param_7,param_8)
    ;
    uVar23 = (uint)local_13c;
    if (local_13c == 0) {
      uVar18 = 0;
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      uVar20 = 0xffffffff;
      pbVar19 = (byte *)((ulong)&local_140 | 5);
      do {
        uVar24 = uVar23 + 0x20;
        if (0x19 < uVar23 - 0x41) {
          uVar24 = uVar23;
        }
        uVar20 = (&DAT_7104754084)[(uVar24 ^ uVar20) & 0xff] ^ uVar20 >> 8;
        uVar23 = (uint)*pbVar19;
        uVar16 = uVar16 + 0x100000000;
        pbVar19 = pbVar19 + 1;
      } while (uVar23 != 0);
      uVar18 = (ulong)~uVar20;
      uVar16 = uVar16 & 0xff00000000;
    }
    pppplVar12 = (long ****)(uVar16 | uVar18);
    FUN_710353e380(local_b0,*param_2,pppplVar12,ppppbVar13,pppplVar14,puVar15,param_7,param_8);
    uVar23 = local_b0[0];
    lVar9 = DAT_7105332f20;
    uVar16 = (ulong)local_b0[0];
    bVar10 = uVar16 != 0xffffff;
    puVar11 = extraout_x1_00;
    if (local_b0[0] != 0xffffff) {
      if (local_b0[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar17 = *(long *)(lVar9 + 0x40);
        if ((*(byte *)(lVar17 + uVar16 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar9,(int *)(lVar17 + uVar16 * 0x48),pppplVar12,ppppbVar13,pppplVar14,
                         puVar15,param_7,param_8);
        }
        std::recursive_mutex::unlock();
        puVar11 = extraout_x1_01;
      }
      local_b0[0] = 0xffffff;
    }
    puVar27 = puVar25;
    if (lVar26 != 0) {
      do {
        uVar20 = *puVar27;
        ppppbVar13 = (byte ****)0x0;
        pppplVar14 = (long ****)(ulong)uVar28;
        param_7 = 0;
        param_8 = 0;
        puVar15 = (undefined *)(ulong)uVar20;
        FUN_7102b63970(&local_140,(ulong)uVar7,(ulong)uVar8,0,uVar28,uVar20,0,0);
        uVar24 = (uint)local_13c;
        if (local_13c == 0) {
          uVar18 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar21 = 0xffffffff;
          pbVar19 = (byte *)((ulong)&local_140 | 5);
          do {
            uVar3 = uVar24 + 0x20;
            if (0x19 < uVar24 - 0x41) {
              uVar3 = uVar24;
            }
            uVar21 = (&DAT_7104754084)[(uVar3 ^ uVar21) & 0xff] ^ uVar21 >> 8;
            uVar24 = (uint)*pbVar19;
            uVar16 = uVar16 + 0x100000000;
            pbVar19 = pbVar19 + 1;
          } while (uVar24 != 0);
          uVar18 = (ulong)~uVar21;
          uVar16 = uVar16 & 0xff00000000;
        }
        pppplVar12 = (long ****)(uVar16 | uVar18);
        FUN_710353e380(local_b0,*param_2,pppplVar12,ppppbVar13,pppplVar14,puVar15,param_7,param_8);
        uVar24 = local_b0[0];
        lVar9 = DAT_7105332f20;
        uVar16 = (ulong)local_b0[0];
        puVar11 = extraout_x1_02;
        if (local_b0[0] != 0xffffff) {
          if (local_b0[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar17 = *(long *)(lVar9 + 0x40);
            if ((*(byte *)(lVar17 + uVar16 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar9,(int *)(lVar17 + uVar16 * 0x48),pppplVar12,ppppbVar13,pppplVar14,
                             puVar15,param_7,param_8);
            }
            std::recursive_mutex::unlock();
            puVar11 = extraout_x1_03;
          }
          local_b0[0] = 0xffffff;
        }
        if (uVar24 != 0xffffff) {
          *(uint *)(param_1 + (long)(ulong)uVar20 * 4 + 0x60) = uVar28;
          bVar10 = true;
        }
        puVar27 = puVar27 + 1;
      } while (puVar27 != puVar25 + lVar26);
    }
    if (!bVar10) break;
    uVar16 = *puVar1;
    if (uVar16 == *(long *)(lVar2 + 0x18) * 0x40) {
      if ((long)(uVar16 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar16 < 0x3fffffffffffffff) {
        uVar18 = *(long *)(lVar2 + 0x18) << 7;
        uVar16 = uVar16 + 0x40 & 0xffffffffffffffc0;
        if (uVar16 <= uVar18) {
          uVar16 = uVar18;
        }
      }
      else {
        uVar16 = 0x7fffffffffffffff;
      }
      FUN_7100492060((ulong *)(lVar2 + 8),uVar16,pppplVar12,ppppbVar13,pppplVar14,puVar15,param_7,
                     param_8);
      uVar16 = *puVar1;
      puVar11 = extraout_x1_04;
    }
    *puVar1 = uVar16 + 1;
    uVar18 = *(ulong *)(lVar2 + 8);
    uVar22 = uVar16 >> 6;
    uVar16 = 1L << (uVar16 & 0x3f);
    if (uVar23 == 0xffffff) {
      uVar16 = *(ulong *)(uVar18 + uVar22 * 8) & (uVar16 ^ 0xffffffffffffffff);
    }
    else {
      uVar16 = *(ulong *)(uVar18 + uVar22 * 8) | uVar16;
    }
    *(ulong *)(uVar18 + uVar22 * 8) = uVar16;
    uVar28 = uVar28 + 1;
  }
  *(uint *)(param_1 + (ulong)param_4 * 0x20) = uVar28;
  return;
}

