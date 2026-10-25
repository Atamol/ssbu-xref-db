// addr:      7102846ac0
// offset:    0x2846ac0
// name:      FUN_7102846ac0
// mangled:   
// signature: undefined __cdecl FUN_7102846ac0(undefined8 * param_1, undefined4 param_2, undefined4 param_3, byte * * * * param_4, long * * * * param_5, byte * param_6, byte * param_7, byte * param_8, byte * param_9, byte * param_10, undefined8 param_11)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102846ac0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,byte ****param_4,
                   long ****param_5,byte *param_6,byte *param_7,byte *param_8,byte *param_9,
                   byte *param_10,undefined8 param_11)

{
  uint uVar1;
  long ***ppplVar2;
  byte **ppbVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  long ****pppplVar8;
  char *pcVar9;
  byte ****ppppbVar10;
  long ****pppplVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  byte **ppbVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulong uVar27;
  uint uVar28;
  long ****pppplVar29;
  undefined8 *puVar30;
  byte ****ppppbVar31;
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  long ***local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined4 local_54;
  
  local_78 = (long ***)0x1;
  puStack_70 = &DAT_100000001;
  pppplVar8 = &local_78;
  local_68 = 0x1000000001;
  ppppbVar10 = param_4;
  pppplVar11 = param_5;
  pbVar12 = param_6;
  pbVar13 = param_7;
  pbVar14 = param_8;
  FUN_710313e6a0(param_1,(long)param_4,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x44) = 1;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x5c) = 1;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = param_2;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *param_1 = &PTR_FUN_71050ea1a0;
  param_1[0x10] = param_4[0x68];
  fVar36 = _DAT_7107521004;
  fVar34 = _ConstantZero;
  uVar7 = CONCAT44(fRam000000710752100c,_DAT_7107521008);
  uVar6 = CONCAT44(_DAT_7107521004,_ConstantZero);
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = uVar7;
  param_1[0x1a] = uVar6;
  if (fVar34 < 0.0) {
    fVar34 = -fVar34;
    param_1[0x13] = uVar7;
    *(float *)(param_1 + 0x12) = fVar34;
    *(float *)((long)param_1 + 0x94) = fVar36;
  }
  fVar32 = fRam000000710752100c;
  fVar36 = _DAT_7107521008;
  fVar35 = _DAT_7107521004;
  if (_DAT_7107521004 < 0.0) {
    fVar35 = -_DAT_7107521004;
    *(float *)(param_1 + 0x13) = _DAT_7107521008;
    *(float *)((long)param_1 + 0x9c) = fVar32;
    *(float *)(param_1 + 0x12) = fVar34;
    *(float *)((long)param_1 + 0x94) = fVar35;
  }
  if (fVar36 < 0.0) {
    fVar36 = -fVar36;
    fVar32 = 0.0;
    param_1[0x13] = (ulong)(uint)fVar36;
    *(float *)(param_1 + 0x12) = fVar34;
    *(float *)((long)param_1 + 0x94) = fVar35;
  }
  param_1[0x20] = param_11;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x29] = uVar7;
  param_1[0x28] = uVar6;
  auVar33._0_8_ = CONCAT44(fVar35 * 0.5,fVar34 * 0.5);
  auVar33._8_4_ = fVar36 * 0.5;
  auVar33._12_4_ = fVar32 * 0.0;
  auVar37 = NEON_ext(auVar33,auVar33,8,1);
  param_1[0x1e] = param_4;
  param_1[0x1f] = param_5;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = uVar7;
  param_1[0x1c] = uVar6;
  param_1[0x17] = (ulong)auVar37._0_4_;
  param_1[0x16] = auVar33._0_8_;
  if ((param_6 != (byte *)0x0) && (uVar23 = (uint)*param_6, *param_6 != 0)) {
    ppbVar16 = param_4[0x62][0x1a];
    ppbVar3 = param_4[0x62][0x1b];
    if (ppbVar16 != ppbVar3) {
      uVar20 = 0;
      uVar28 = 0xffffffff;
      do {
        param_6 = param_6 + 1;
        uVar1 = uVar23 + 0x20;
        if (0x19 < uVar23 - 0x41) {
          uVar1 = uVar23;
        }
        uVar28 = (&DAT_7104754084)[(uVar1 ^ uVar28) & 0xff] ^ uVar28 >> 8;
        uVar23 = (uint)*param_6;
        uVar20 = uVar20 + 0x100000000;
      } while (uVar23 != 0);
      do {
        if ((*(uint *)(ppbVar16 + 1) < 2) &&
           (pbVar21 = *ppbVar16,
           (uVar20 & 0xff00000000 | (ulong)~uVar28) == *(ulong *)(pbVar21 + 0x68))) {
          param_1[0x23] = pbVar21;
          if (pbVar21 != (byte *)0x0) {
            if ((pbVar21[0xe0] != 0) && (*(long *)(pbVar21 + 200) != 0)) {
              *(undefined2 *)(*(long *)(pbVar21 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(pbVar21 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(pbVar21 + 0xd8) + 0x21) = 1;
            }
            if (pbVar21[0xe0] != 0) {
              *(undefined1 *)(*(long *)(pbVar21 + 0xb0) + 0x10) = 0;
            }
            lVar19 = param_1[0x23];
            if (lVar19 != 0) {
              *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
            }
          }
          goto joined_r0x007102846ee4;
        }
        ppbVar16 = ppbVar16 + 2;
      } while (ppbVar3 != ppbVar16);
    }
  }
  param_1[0x23] = 0;
joined_r0x007102846ee4:
  if ((param_7 != (byte *)0x0) && (uVar23 = (uint)*param_7, *param_7 != 0)) {
    ppbVar16 = param_4[0x62][0x1a];
    ppbVar3 = param_4[0x62][0x1b];
    if (ppbVar16 != ppbVar3) {
      uVar20 = 0;
      uVar28 = 0xffffffff;
      do {
        param_7 = param_7 + 1;
        uVar1 = uVar23 + 0x20;
        if (0x19 < uVar23 - 0x41) {
          uVar1 = uVar23;
        }
        uVar28 = (&DAT_7104754084)[(uVar1 ^ uVar28) & 0xff] ^ uVar28 >> 8;
        uVar23 = (uint)*param_7;
        uVar20 = uVar20 + 0x100000000;
      } while (uVar23 != 0);
      do {
        if ((*(uint *)(ppbVar16 + 1) < 2) &&
           (pbVar21 = *ppbVar16,
           (uVar20 & 0xff00000000 | (ulong)~uVar28) == *(ulong *)(pbVar21 + 0x68))) {
          param_1[0x24] = pbVar21;
          if (pbVar21 != (byte *)0x0) {
            pbVar21[0x110] = 0;
            FUN_71025e9d50((long *)(pbVar21 + 0x108),extraout_x1,pppplVar8,ppppbVar10,pppplVar11,
                           pbVar12,pbVar13,pbVar14);
            lVar19 = param_1[0x24];
            if (lVar19 != 0) {
              if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar19 + 200) + 0x32) = 0;
              }
              if (*(long *)(lVar19 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x22) = 0;
              }
              lVar19 = param_1[0x24];
              if (lVar19 != 0) {
                if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
                  *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
                }
                if (*(long *)(lVar19 + 0xd8) != 0) {
                  *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
                }
                if (*(char *)(lVar19 + 0xe0) != '\0') {
                  *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
                }
                lVar19 = param_1[0x24];
                if (lVar19 != 0) {
                  *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
                  lVar19 = param_1[0x24];
                  if (lVar19 != 0) {
                    if ((*(char *)(lVar19 + 0xe0) != '\0') &&
                       (lVar22 = *(long *)(lVar19 + 200), lVar22 != 0)) {
                      *(undefined1 *)(lVar22 + 0xc) = 1;
                      *(undefined4 *)(lVar22 + 0x10) = 0;
                    }
                    if (*(long *)(lVar19 + 0xd8) != 0) {
                      *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x28) = 1;
                    }
                  }
                }
              }
            }
          }
          goto LAB_7102846d58;
        }
        ppbVar16 = ppbVar16 + 2;
      } while (ppbVar3 != ppbVar16);
    }
  }
  param_1[0x24] = 0;
LAB_7102846d58:
  pbVar21 = *param_4[0x60][3];
  pbVar25 = param_4[0x60][3][1];
  if (pbVar21 != pbVar25) {
    do {
      lVar19 = *(long *)pbVar21;
      uVar23 = (uint)*param_8;
      if (uVar23 == 0) {
        uVar27 = 0;
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        uVar28 = 0xffffffff;
        pbVar26 = param_8;
        do {
          pbVar26 = pbVar26 + 1;
          uVar1 = uVar23 + 0x20;
          if (0x19 < uVar23 - 0x41) {
            uVar1 = uVar23;
          }
          uVar28 = (&DAT_7104754084)[(uVar1 ^ uVar28) & 0xff] ^ uVar28 >> 8;
          uVar23 = (uint)*pbVar26;
          uVar20 = uVar20 + 0x100000000;
        } while (uVar23 != 0);
        uVar27 = (ulong)~uVar28;
        uVar20 = uVar20 & 0xff00000000;
      }
      if ((*(ulong *)(lVar19 + 0xa0) & 0xffffffffff) == (uVar20 | uVar27)) {
        plVar17 = *(long **)(lVar19 + 0x110);
        plVar18 = plVar17;
        if ((plVar17 != (long *)0x0) && (plVar18 = (long *)0x0, *plVar17 != plVar17[1])) {
          plVar18 = plVar17;
        }
        param_1[0x25] = plVar18;
        if ((*(char *)(param_1 + 0x27) != '\0') &&
           (pppplVar29 = *(long *****)(lVar19 + 0x120), pppplVar29 != (long ****)0x0)) {
          if (param_1[7] != 0) {
            plVar18 = *(long **)(param_1[7] + 0x130);
            ppppbVar10 = (byte ****)0x0;
            pppplVar11 = (long ****)0x0;
            pppplVar8 = pppplVar29;
            (**(code **)(*plVar18 + 0x60))(plVar18,0);
          }
          ppplVar2 = *pppplVar29;
          if ((int)((ulong)((long)pppplVar29[1] - (long)ppplVar2) >> 6) != 0) {
            if ((*(float *)((long)ppplVar2 + 0x24) == 2.8026e-45) ||
               (*(float *)((long)ppplVar2 + 0x24) == 1.4013e-45)) {
              fVar34 = *(float *)ppplVar2 + SUB84(ppplVar2[2],0) * 0.5;
              fVar36 = *(float *)((long)ppplVar2 + 4) + (float)((ulong)ppplVar2[2] >> 0x20) * 0.5;
              fVar32 = *(float *)(ppplVar2 + 1) + SUB84(ppplVar2[3],0) * 0.5;
              fVar35 = *(float *)((long)ppplVar2 + 0xc) + (float)((ulong)ppplVar2[3] >> 0x20) * 0.0;
            }
            else {
              fVar32 = SUB84(ppplVar2[1],0);
              fVar35 = (float)((ulong)ppplVar2[1] >> 0x20);
              fVar34 = SUB84(*ppplVar2,0);
              fVar36 = (float)((ulong)*ppplVar2 >> 0x20);
            }
            auVar37._4_4_ = fVar36;
            auVar37._0_4_ = fVar34;
            auVar37._8_4_ = fVar32;
            auVar37._12_4_ = fVar35;
            auVar5._4_4_ = fVar36;
            auVar5._0_4_ = fVar34;
            auVar5._8_4_ = fVar32;
            auVar5._12_4_ = fVar35;
            auVar33 = NEON_ext(auVar37,auVar5,8,1);
            param_1[0x1d] = (ulong)auVar33._0_4_;
            param_1[0x1c] = CONCAT44(fVar36,fVar34);
          }
        }
        break;
      }
      pbVar21 = pbVar21 + 8;
    } while (pbVar21 != pbVar25);
  }
  pbVar21 = *param_4[0x60][3];
  bVar4 = *param_9;
  lVar19 = *(long *)pbVar21;
  if (bVar4 != 0) goto LAB_7102847018;
  do {
    uVar27 = 0;
    uVar20 = 0;
    while( true ) {
      if ((*(ulong *)(lVar19 + 0xa0) & 0xffffffffff) == (uVar20 | uVar27)) {
        puVar30 = *(undefined8 **)(lVar19 + 0x130);
        uVar23 = FUN_7103151710(param_10);
        puVar24 = (undefined8 *)*puVar30;
        goto joined_r0x007102847094;
      }
      pbVar21 = pbVar21 + 8;
      lVar19 = *(long *)pbVar21;
      if (bVar4 == 0) break;
LAB_7102847018:
      uVar20 = 0;
      uVar23 = 0xffffffff;
      uVar28 = (uint)bVar4;
      pbVar25 = param_9;
      do {
        pbVar25 = pbVar25 + 1;
        uVar1 = uVar28 + 0x20;
        if (0x19 < uVar28 - 0x41) {
          uVar1 = uVar28;
        }
        uVar23 = (&DAT_7104754084)[(uVar1 ^ uVar23) & 0xff] ^ uVar23 >> 8;
        uVar28 = (uint)*pbVar25;
        uVar20 = uVar20 + 0x100000000;
      } while (uVar28 != 0);
      uVar27 = (ulong)~uVar23;
      uVar20 = uVar20 & 0xff00000000;
    }
  } while( true );
joined_r0x007102847094:
  if (puVar24 == (undefined8 *)puVar30[1]) goto LAB_71028470bc;
  plVar18 = (long *)*puVar24;
  if ((plVar18[3] != 0) && (*(uint *)(plVar18[3] + 0x100) == uVar23)) goto LAB_71028470c0;
  puVar24 = puVar24 + 1;
  goto joined_r0x007102847094;
LAB_71028470bc:
  plVar18 = (long *)0x0;
LAB_71028470c0:
  param_1[0x26] = plVar18;
  if ((char)plVar18[4] != '\0') {
    plVar17 = (long *)plVar18[1];
    lVar19 = plVar18[2];
    lVar22 = *plVar18;
    *(undefined1 *)(plVar18 + 4) = 0;
    *plVar17 = lVar22;
    *(long **)(lVar22 + 8) = plVar17;
    *(long *)(lVar19 + 0x18) = *(long *)(lVar19 + 0x18) + -1;
    *plVar18 = 0;
    plVar18[1] = 0;
    puVar24 = *(undefined8 **)(lVar19 + 0x40);
    *plVar18 = lVar19 + 0x38;
    plVar18[1] = (long)puVar24;
    *(long **)(lVar19 + 0x40) = plVar18;
    *puVar24 = plVar18;
    *(long *)(lVar19 + 0x30) = *(long *)(lVar19 + 0x30) + 1;
    iVar15 = 0;
    if (plVar18[3] != 0) {
      iVar15 = *(int *)(plVar18[3] + 0x110);
    }
    *(int *)(lVar19 + 0x48) = *(int *)(lVar19 + 0x48) - iVar15;
  }
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar8,ppppbVar10,pppplVar11,pbVar12,pbVar13,pbVar14);
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_78 = (long ***)&DAT_00000008;
      pppplVar8 = &local_78;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar20 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar8,ppppbVar10,pppplVar11,pbVar12,pbVar13,pbVar14),
         puVar24 != (undefined8 *)0x0)) goto LAB_7102847184;
    }
    puVar24 = (undefined8 *)0x0;
  }
LAB_7102847184:
  pcVar9 = "STG_ARENA_JIRO_HIT";
  ppppbVar10 = (byte ****)0x0;
  FUN_7102845ed0(puVar24,(long)param_4,(long ****)"STG_ARENA_JIRO_HIT",(byte ****)0x0,pppplVar11,
                 pbVar12,pbVar13,pbVar14);
  puVar30 = (undefined8 *)param_1[0x21];
  param_1[0x21] = puVar24;
  if (puVar30 != (undefined8 *)0x0) {
    FUN_71028461f0(puVar30);
    FUN_710392eb40((ulong)puVar30);
  }
  ppppbVar31 = (byte ****)"eff_jirobreak_R";
  if ((param_1[0x23] != 0) &&
     (ppppbVar31 = (byte ****)"eff_jirobreak_L", *(long *)(param_1[0x23] + 0x68) != 0x1170fb8166)) {
    ppppbVar31 = (byte ****)"eff_jirobreak_R";
  }
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)pcVar9,ppppbVar10,pppplVar11,pbVar12,pbVar13,pbVar14);
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_78 = (long ***)&DAT_00000008;
      pppplVar8 = &local_78;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar20 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar8,ppppbVar10,pppplVar11,pbVar12,pbVar13,pbVar14),
         puVar24 != (undefined8 *)0x0)) goto LAB_7102847244;
    }
    puVar24 = (undefined8 *)0x0;
  }
LAB_7102847244:
  FUN_7102845ed0(puVar24,(long)param_4,(long ****)"STG_ARENA_JIRO_BREAK",ppppbVar31,pppplVar11,
                 pbVar12,pbVar13,pbVar14);
  puVar30 = (undefined8 *)param_1[0x22];
  param_1[0x22] = puVar24;
  if (puVar30 != (undefined8 *)0x0) {
    FUN_71028461f0(puVar30);
    FUN_710392eb40((ulong)puVar30);
  }
  if (param_1[0x23] == 0) {
    uVar20 = 1;
  }
  else {
    uVar20 = (ulong)(*(long *)(param_1[0x23] + 0x68) != 0x1170fb8166);
  }
  puVar24 = (undefined8 *)(*(long *)(param_1[0x20] + 0x88) + uVar20 * 0xc);
  uVar6 = *puVar24;
  param_1[0x29] = (ulong)*(uint *)(puVar24 + 1);
  param_1[0x28] = uVar6;
  return;
}

