// addr:      71013a53d0
// offset:    0x13a53d0
// name:      FUN_71013a53d0
// mangled:   
// signature: undefined __cdecl FUN_71013a53d0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71013a53d0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong *__dest;
  float *pfVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  ulong *__src;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  long ****__n;
  ulong uVar23;
  uint *puVar24;
  long lVar25;
  ulong *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar37;
  float fVar38;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar53;
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar57;
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float local_1b8;
  float local_1b4;
  ulong local_e0 [2];
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  ulong *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  
  if (*(long *)(*(long *)(DAT_7105337ce8 + 0x490) + 0xd8) == 0) {
    pfVar12 = (float *)&DAT_7105334060;
  }
  else {
    pfVar12 = *(float **)(*(long *)(DAT_7105337ce8 + 0x490) + 0xe0);
  }
  fVar4 = *pfVar12;
  fVar5 = pfVar12[1];
  fVar6 = pfVar12[2];
  fVar7 = pfVar12[3];
  fVar40 = (float)*(undefined8 *)(pfVar12 + 6);
  fVar42 = (float)((ulong)*(undefined8 *)(pfVar12 + 6) >> 0x20);
  fVar36 = (float)*(undefined8 *)(pfVar12 + 4);
  fVar38 = (float)((ulong)*(undefined8 *)(pfVar12 + 4) >> 0x20);
  fVar8 = pfVar12[0xc];
  fVar9 = pfVar12[0xd];
  fVar10 = pfVar12[0xe];
  fVar11 = pfVar12[0xf];
  if (*(long *)(DAT_71053375a8 + 0xd8) == 0) {
    puVar13 = &DAT_7105334060;
  }
  else {
    puVar13 = *(undefined **)(DAT_71053375a8 + 0xe0);
  }
  auVar56 = NEON_ext(*(undefined1 (*) [16])(puVar13 + 0x2c0),ZEXT816(0),8,1);
  auVar52 = NEON_ext(*(undefined1 (*) [16])(puVar13 + 0x2b0),ZEXT816(0),8,1);
  fVar45 = (float)*(undefined8 *)(puVar13 + 0x290);
  fVar46 = (float)((ulong)*(undefined8 *)(puVar13 + 0x290) >> 0x20);
  fVar47 = (float)((ulong)*(undefined8 *)(puVar13 + 0x298) >> 0x20);
  auVar52 = NEON_ext(auVar52,auVar52,8,1);
  local_b8 = (ulong *)0x0;
  local_b0 = (ulong *)0x0;
  fVar48 = (float)*(undefined8 *)(puVar13 + 0x2a0);
  fVar49 = (float)((ulong)*(undefined8 *)(puVar13 + 0x2a0) >> 0x20);
  fVar50 = (float)((ulong)*(undefined8 *)(puVar13 + 0x2a8) >> 0x20);
  fVar51 = auVar52._0_4_;
  fVar53 = auVar52._4_4_;
  fVar54 = auVar52._12_4_;
  auVar52 = NEON_ext(auVar56,auVar56,8,1);
  fVar55 = auVar52._0_4_;
  fVar57 = auVar52._4_4_;
  fVar58 = auVar52._12_4_;
  fVar28 = (float)*(undefined8 *)(pfVar12 + 8);
  fVar31 = (float)((ulong)*(undefined8 *)(pfVar12 + 8) >> 0x20);
  fVar33 = (float)*(undefined8 *)(pfVar12 + 10);
  fVar35 = (float)((ulong)*(undefined8 *)(pfVar12 + 10) >> 0x20);
  puVar26 = (ulong *)0x0;
  puVar22 = (ulong *)0x0;
  uVar23 = 0;
  puVar24 = (uint *)((long)param_1 + 0x54);
  local_c0 = (ulong *)0x0;
  __src = (ulong *)0x0;
  do {
    __dest = __src;
    if ((char)puVar24[-0xd] != '\0') {
      lVar14 = **(long **)(*param_1 + 8);
      iVar37 = (int)uVar23;
      if (iVar37 == *(int *)(lVar14 + 0xd68)) {
LAB_71013a54f8:
        lVar18 = 0;
      }
      else if (iVar37 == *(int *)(lVar14 + 0xf40)) {
        lVar18 = 1;
      }
      else if (iVar37 == *(int *)(lVar14 + 0x1118)) {
        lVar18 = 2;
      }
      else if (iVar37 == *(int *)(lVar14 + 0x12f0)) {
        lVar18 = 3;
      }
      else if (iVar37 == *(int *)(lVar14 + 0x14c8)) {
        lVar18 = 4;
      }
      else if (iVar37 == *(int *)(lVar14 + 0x16a0)) {
        lVar18 = 5;
      }
      else if (iVar37 == *(int *)(lVar14 + 0x1878)) {
        lVar18 = 6;
      }
      else {
        if (iVar37 != *(int *)(lVar14 + 0x1a50)) goto LAB_71013a54f8;
        lVar18 = 7;
      }
      if (((*(int *)(lVar14 + lVar18 * 0x1d8 + 0xd6c) != 0) &&
          (*(int *)(lVar14 + lVar18 * 0x1d8 + 0xd70) == 0)) &&
         (uVar23 == *(uint *)(lVar14 + lVar18 * 0x1d8 + 0xd68))) {
        uVar1 = *puVar24;
        uVar19 = puVar24[-1];
        if ((puVar24[-1] != uVar1) && (uVar19 = uVar1, *(char *)((long)puVar24 + -0x33) != '\0')) {
          iVar37 = *(int *)(lVar14 + lVar18 * 0x1d8 + 0xd64);
          if ((0 < iVar37) && (lVar14 = (long)iVar37 + -1, (uint)lVar14 < 4)) {
            uVar2 = (int)uVar1 % 1000;
            uVar19 = -uVar2;
            if (-1 < (int)uVar2) {
              uVar19 = uVar2;
            }
            param_5 = (long ****)(ulong)uVar19;
            uVar19 = (int)(uVar1 - uVar19) / 1000;
            uVar1 = -uVar19;
            if (-1 < (int)uVar19) {
              uVar1 = uVar19;
            }
            param_4 = (byte ****)(ulong)uVar1;
            param_3 = (long ****)0x2;
            FUN_710377a280(*(long *)(param_1[1] + 0x80) + lVar14 * 0x40 + 0x220,
                           (byte *)"mel_homerun_distance_difference_n",2);
            uVar19 = *puVar24;
          }
          puVar24[-1] = uVar19;
        }
        uVar21 = uVar23 | (ulong)uVar19 << 0x20;
        if (puVar22 < local_b0) {
          *puVar22 = uVar21;
          puVar22 = local_b8 + 1;
          local_b8 = puVar22;
        }
        else {
          __n = (long ****)((long)puVar22 - (long)__src);
          uVar20 = ((long)__n >> 3) + 1;
          if (uVar20 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_b0 - (long)__src >> 3) < 0xfffffffffffffff) {
            uVar15 = (long)local_b0 - (long)__src >> 2;
            if (uVar20 <= uVar15) {
              uVar20 = uVar15;
            }
            if (uVar20 != 0) {
              if (uVar20 >> 0x3d == 0) goto LAB_71013a56bc;
              goto LAB_71013a5c18;
            }
LAB_71013a571c:
            __dest = (ulong *)0x0;
          }
          else {
            uVar20 = 0x1fffffffffffffff;
LAB_71013a56bc:
            ppplVar16 = (long ***)(uVar20 * 8);
            if (ppplVar16 == (long ***)0x0) {
              ppplVar16 = (long ***)0x1;
            }
            __dest = (ulong *)FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,param_7,
                                             param_8);
            if (__dest == (ulong *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_e0[0] = local_e0[0] & 0xffffffff00000000;
                param_3 = (long ****)&local_d0;
                local_d0 = ppplVar16;
                uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e0);
                if (((uVar15 & 1) != 0) &&
                   (__dest = (ulong *)FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,
                                                     param_7,param_8), __dest != (ulong *)0x0))
                goto LAB_71013a5720;
              }
              goto LAB_71013a571c;
            }
          }
LAB_71013a5720:
          puVar22 = __dest + ((long)__n >> 3) + 1;
          __dest[(long)__n >> 3] = uVar21;
          if (0 < (long)__n) {
            memcpy(__dest,__src,(size_t)__n);
            param_3 = __n;
          }
          puVar26 = __dest;
          local_c0 = __dest;
          local_b8 = puVar22;
          local_b0 = __dest + uVar20;
          if (__src != (ulong *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
      }
    }
    uVar23 = uVar23 + 1;
    puVar24 = puVar24 + 0x10;
    __src = __dest;
  } while (uVar23 < 8);
  if (puVar26 != puVar22) {
    FUN_71013a5c30((undefined4 *)puVar26,(undefined4 *)puVar22);
    lVar14 = **(long **)(*(long *)(param_1[1] + 0x80) + 0x218);
    if (lVar14 == 0) {
      fVar59 = 0.0;
    }
    else {
      fVar59 = ABS(*(float *)(lVar14 + 0x54) * *(float *)(lVar14 + 0x4c));
    }
    if (puVar22 != __dest) {
      lVar14 = 0;
      uVar23 = 0;
      local_1b4 = 1920.0;
      local_1b8 = 1080.0;
      do {
        fVar30 = 0.0;
        uVar1 = *(uint *)((long)__dest + lVar14);
        lVar18 = **(long **)(*param_1 + 8);
        if (*(uint *)(lVar18 + 0xd68) == uVar1) {
LAB_71013a5904:
          lVar25 = 0;
        }
        else if (*(uint *)(lVar18 + 0xf40) == uVar1) {
          lVar25 = 1;
        }
        else if (*(uint *)(lVar18 + 0x1118) == uVar1) {
          lVar25 = 2;
        }
        else if (*(uint *)(lVar18 + 0x12f0) == uVar1) {
          lVar25 = 3;
        }
        else if (*(uint *)(lVar18 + 0x14c8) == uVar1) {
          lVar25 = 4;
        }
        else if (*(uint *)(lVar18 + 0x16a0) == uVar1) {
          lVar25 = 5;
        }
        else if (*(uint *)(lVar18 + 0x1878) == uVar1) {
          lVar25 = 6;
        }
        else {
          if (*(uint *)(lVar18 + 0x1a50) != uVar1) goto LAB_71013a5904;
          lVar25 = 7;
        }
        if (7 < uVar1) {
LAB_71013a5c18:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        fVar29 = (float)param_1[(long)(int)uVar1 * 8 + 8];
        fVar32 = (float)((ulong)param_1[(long)(int)uVar1 * 8 + 8] >> 0x20);
        fVar34 = (float)param_1[(long)(int)uVar1 * 8 + 9];
        fVar27 = fVar45 * fVar8 + fVar48 * fVar9 + fVar51 * fVar10 + fVar55 * fVar11 +
                 fVar29 * (fVar45 * fVar4 + fVar48 * fVar5 + fVar51 * fVar6 + fVar55 * fVar7) +
                 (fVar45 * fVar36 + fVar48 * fVar38 + fVar51 * fVar40 + fVar55 * fVar42) * fVar32 +
                 (fVar45 * fVar28 + fVar48 * fVar31 + fVar51 * fVar33 + fVar55 * fVar35) * fVar34;
        fVar44 = fVar46 * fVar8 + fVar49 * fVar9 + fVar53 * fVar10 + fVar57 * fVar11 +
                 (fVar46 * fVar4 + fVar49 * fVar5 + fVar53 * fVar6 + fVar57 * fVar7) * fVar29 +
                 fVar32 * (fVar46 * fVar36 + fVar49 * fVar38 + fVar53 * fVar40 + fVar57 * fVar42) +
                 (fVar46 * fVar28 + fVar49 * fVar31 + fVar53 * fVar33 + fVar57 * fVar35) * fVar34;
        fVar29 = fVar47 * fVar8 + fVar50 * fVar9 + fVar54 * fVar10 + fVar58 * fVar11 +
                 (fVar47 * fVar4 + fVar50 * fVar5 + fVar54 * fVar6 + fVar58 * fVar7) * fVar29 +
                 (fVar47 * fVar36 + fVar50 * fVar38 + fVar54 * fVar40 + fVar58 * fVar42) * fVar32 +
                 (fVar47 * fVar28 + fVar50 * fVar31 + fVar54 * fVar33 + fVar58 * fVar35) * fVar34;
        if (fVar29 != 0.0) {
          fVar27 = fVar27 / fVar29;
          fVar44 = fVar44 / fVar29;
        }
        fVar29 = (float)((ulong)_DAT_71052c3430 >> 0x20);
        fStack_c8 = (float)uRam00000071052c3438 + 0.0;
        fStack_c4 = (float)((ulong)uRam00000071052c3438 >> 0x20) + 0.0;
        local_d0 = (long ***)
                   CONCAT44(fVar29 + fVar44 * fVar29 * fRam00000071052c3444,
                            (float)_DAT_71052c3430 +
                            fVar27 * (float)_DAT_71052c3430 * _DAT_71052c3440);
        lVar17 = **(long **)(*(long *)(param_1[1] + 0x80) + 0x218);
        fVar27 = 0.0;
        if (lVar17 != 0) {
          fVar30 = ABS(*(float *)(lVar17 + 0x54) * *(float *)(lVar17 + 0x4c));
          fVar27 = ABS(*(float *)(lVar17 + 0x50) * *(float *)(lVar17 + 0x48));
        }
        local_e0[0] = CONCAT44(fVar30 * 0.5,fVar27 * 0.5);
        local_e0[1] = 0;
        auVar52 = FUN_710138c640(&local_d0,local_e0);
        if (((DAT_7105335488 & 1) == 0) &&
           (iVar37 = __cxa_guard_acquire(&DAT_7105335488), iVar37 != 0)) {
          fVar30 = (float)(uint)(int)DAT_710744701c;
          if (DAT_710744701c == 0.0) {
            fVar30 = local_1b4;
          }
          fVar27 = (float)(uint)(int)DAT_7107447020;
          if (DAT_7107447020 == 0.0) {
            fVar27 = local_1b8;
          }
          _DAT_7107447080 = CONCAT44(fVar27,fVar30);
          uRam0000007107447088 = 0;
          __cxa_guard_release(&DAT_7105335488);
        }
        fVar30 = fVar59 * (1.5 - (float)(int)uVar23) + DAT_7107447084 * 0.5;
        lVar17 = param_1[(long)(int)uVar1 * 8 + 6];
        fVar27 = auVar52._0_4_;
        iVar37 = -(uint)((float)lVar17 == fVar27);
        iVar39 = -(uint)((float)((ulong)lVar17 >> 0x20) == fVar30);
        iVar41 = -(uint)((float)param_1[(long)(int)uVar1 * 8 + 7] == auVar52._8_4_);
        iVar43 = -(uint)((float)((ulong)param_1[(long)(int)uVar1 * 8 + 7] >> 0x20) == auVar52._12_4_
                        );
        auVar56._4_4_ = iVar39;
        auVar56._0_4_ = iVar37;
        auVar56._8_4_ = iVar41;
        auVar56._12_4_ = iVar43;
        auVar3._4_4_ = iVar39;
        auVar3._0_4_ = iVar37;
        auVar3._8_4_ = iVar41;
        auVar3._12_4_ = iVar43;
        auVar56 = NEON_ext(auVar56,auVar3,8,1);
        uVar21 = CONCAT44(iVar39,iVar37) & auVar56._0_8_;
        if (((uint)uVar21 & (uint)(uVar21 >> 0x20)) == 0) {
          iVar37 = *(int *)(lVar18 + lVar25 * 0x1d8 + 0xd64);
          if (((0 < iVar37) && (lVar18 = (long)iVar37 + -1, (uint)lVar18 < 4)) &&
             (lVar18 = **(long **)(*(long *)(param_1[1] + 0x80) + lVar18 * 0x40 + 0x218),
             lVar18 != 0)) {
            *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
            *(float *)(lVar18 + 0x30) = fVar27 + -960.0;
            *(float *)(lVar18 + 0x34) = 540.0 - fVar30;
          }
          param_1[(long)(int)uVar1 * 8 + 7] = auVar52._8_8_;
          param_1[(long)(int)uVar1 * 8 + 6] = CONCAT44(fVar30,fVar27);
        }
        uVar23 = uVar23 + 1;
        lVar14 = lVar14 + 8;
        __dest = local_c0;
        puVar26 = local_c0;
      } while (uVar23 < (ulong)((long)local_b8 - (long)local_c0 >> 3));
    }
  }
  if (puVar26 != (ulong *)0x0) {
    local_b8 = puVar26;
    FUN_710392eb40((ulong)puVar26);
  }
  return;
}

