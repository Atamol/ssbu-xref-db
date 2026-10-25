// addr:      71013a67c0
// offset:    0x13a67c0
// name:      FUN_71013a67c0
// mangled:   
// signature: undefined __cdecl FUN_71013a67c0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71013a67c0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  ulong *__dest;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long ***ppplVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong *__src;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long ****__n;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ulong *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar45;
  undefined1 auVar44 [16];
  float fVar46;
  float fVar47;
  float fVar49;
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  float fVar59;
  ulong *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  long ***local_a8;
  undefined4 local_9c [3];
  
  if (*(long *)(*(long *)(DAT_7105337ce8 + 0x490) + 0xd8) == 0) {
    puVar3 = (undefined8 *)&DAT_7105334060;
  }
  else {
    puVar3 = *(undefined8 **)(*(long *)(DAT_7105337ce8 + 0x490) + 0xe0);
  }
  if (*(long *)(DAT_71053375a8 + 0xd8) == 0) {
    puVar4 = &DAT_7105334060;
  }
  else {
    puVar4 = *(undefined **)(DAT_71053375a8 + 0xe0);
  }
  auVar48 = NEON_ext(*(undefined1 (*) [16])(puVar4 + 0x2c0),ZEXT816(0),8,1);
  auVar44 = NEON_ext(*(undefined1 (*) [16])(puVar4 + 0x2b0),ZEXT816(0),8,1);
  fVar32 = (float)*puVar3;
  fVar37 = (float)*(undefined8 *)(puVar4 + 0x290);
  fVar38 = (float)((ulong)*(undefined8 *)(puVar4 + 0x290) >> 0x20);
  fVar39 = (float)((ulong)*(undefined8 *)(puVar4 + 0x298) >> 0x20);
  auVar44 = NEON_ext(auVar44,auVar44,8,1);
  local_b8 = (ulong *)0x0;
  local_b0 = (ulong *)0x0;
  fVar34 = (float)((ulong)*puVar3 >> 0x20);
  fVar40 = (float)*(undefined8 *)(puVar4 + 0x2a0);
  fVar41 = (float)((ulong)*(undefined8 *)(puVar4 + 0x2a0) >> 0x20);
  fVar42 = (float)((ulong)*(undefined8 *)(puVar4 + 0x2a8) >> 0x20);
  fVar35 = (float)puVar3[1];
  fVar43 = auVar44._0_4_;
  fVar45 = auVar44._4_4_;
  fVar46 = auVar44._12_4_;
  auVar44 = NEON_ext(auVar48,auVar48,8,1);
  fVar36 = (float)((ulong)puVar3[1] >> 0x20);
  fVar47 = auVar44._0_4_;
  fVar49 = auVar44._4_4_;
  fVar50 = auVar44._12_4_;
  fVar28 = (float)puVar3[2];
  fVar29 = (float)((ulong)puVar3[2] >> 0x20);
  fVar30 = (float)puVar3[3];
  fVar23 = (float)puVar3[4];
  fVar25 = (float)((ulong)puVar3[4] >> 0x20);
  fVar26 = (float)puVar3[5];
  fVar27 = (float)((ulong)puVar3[5] >> 0x20);
  fVar31 = (float)((ulong)puVar3[3] >> 0x20);
  fVar18 = (float)puVar3[6];
  fVar20 = (float)((ulong)puVar3[6] >> 0x20);
  fVar21 = (float)puVar3[7];
  fVar22 = (float)((ulong)puVar3[7] >> 0x20);
  puVar17 = (ulong *)0x0;
  puVar13 = (ulong *)0x0;
  uVar14 = 0;
  puVar15 = (uint *)((long)param_1 + 0x254);
  local_c0 = (ulong *)0x0;
  __src = (ulong *)0x0;
  do {
    __dest = __src;
    if ((char)puVar15[-0xd] != '\0') {
      lVar5 = **(long **)(*param_1 + 8);
      iVar55 = (int)uVar14;
      if (iVar55 == *(int *)(lVar5 + 0xd68)) {
LAB_71013a68e4:
        lVar9 = 0;
      }
      else if (iVar55 == *(int *)(lVar5 + 0xf40)) {
        lVar9 = 1;
      }
      else if (iVar55 == *(int *)(lVar5 + 0x1118)) {
        lVar9 = 2;
      }
      else if (iVar55 == *(int *)(lVar5 + 0x12f0)) {
        lVar9 = 3;
      }
      else if (iVar55 == *(int *)(lVar5 + 0x14c8)) {
        lVar9 = 4;
      }
      else if (iVar55 == *(int *)(lVar5 + 0x16a0)) {
        lVar9 = 5;
      }
      else if (iVar55 == *(int *)(lVar5 + 0x1878)) {
        lVar9 = 6;
      }
      else {
        if (iVar55 != *(int *)(lVar5 + 0x1a50)) goto LAB_71013a68e4;
        lVar9 = 7;
      }
      if (((*(int *)(lVar5 + lVar9 * 0x1d8 + 0xd6c) != 0) &&
          (*(int *)(lVar5 + lVar9 * 0x1d8 + 0xd70) == 0)) &&
         (uVar14 == *(uint *)(lVar5 + lVar9 * 0x1d8 + 0xd68))) {
        uVar1 = *puVar15;
        uVar10 = puVar15[-1];
        if ((puVar15[-1] != uVar1) && (uVar10 = uVar1, *(char *)((long)puVar15 + -0x33) != '\0')) {
          iVar55 = *(int *)(lVar5 + lVar9 * 0x1d8 + 0xd64);
          if ((0 < iVar55) && (lVar5 = (long)iVar55 + -1, (uint)lVar5 < 4)) {
            uVar2 = (int)uVar1 % 1000;
            uVar10 = -uVar2;
            if (-1 < (int)uVar2) {
              uVar10 = uVar2;
            }
            param_5 = (long ****)(ulong)uVar10;
            uVar10 = (int)(uVar1 - uVar10) / 1000;
            uVar1 = -uVar10;
            if (-1 < (int)uVar10) {
              uVar1 = uVar10;
            }
            param_4 = (byte ****)(ulong)uVar1;
            param_3 = (long ****)0x2;
            FUN_710377a280(*(long *)(param_1[1] + 0x80) + lVar5 * 0x40 + 0x240,
                           (byte *)"mel_homerun_distance_difference_n",2);
            uVar10 = *puVar15;
          }
          puVar15[-1] = uVar10;
        }
        uVar12 = uVar14 | (ulong)uVar10 << 0x20;
        if (puVar13 < local_b0) {
          *puVar13 = uVar12;
          puVar13 = local_b8 + 1;
          local_b8 = puVar13;
        }
        else {
          __n = (long ****)((long)puVar13 - (long)__src);
          uVar11 = ((long)__n >> 3) + 1;
          if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_b0 - (long)__src >> 3) < 0xfffffffffffffff) {
            uVar6 = (long)local_b0 - (long)__src >> 2;
            if (uVar11 <= uVar6) {
              uVar11 = uVar6;
            }
            if (uVar11 != 0) {
              if (uVar11 >> 0x3d == 0) goto LAB_71013a6aa8;
              goto LAB_71013a7440;
            }
LAB_71013a6b08:
            __dest = (ulong *)0x0;
          }
          else {
            uVar11 = 0x1fffffffffffffff;
LAB_71013a6aa8:
            ppplVar7 = (long ***)(uVar11 * 8);
            if (ppplVar7 == (long ***)0x0) {
              ppplVar7 = (long ***)0x1;
            }
            __dest = (ulong *)FUN_710392e290(0x10,ppplVar7,param_3,param_4,param_5,param_6,param_7,
                                             param_8);
            if (__dest == (ulong *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_9c[0] = 0;
                param_3 = &local_a8;
                local_a8 = ppplVar7;
                uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_9c);
                if (((uVar6 & 1) != 0) &&
                   (__dest = (ulong *)FUN_710392e290(0x10,ppplVar7,param_3,param_4,param_5,param_6,
                                                     param_7,param_8), __dest != (ulong *)0x0))
                goto LAB_71013a6b0c;
              }
              goto LAB_71013a6b08;
            }
          }
LAB_71013a6b0c:
          local_b0 = __dest + uVar11;
          puVar13 = __dest + ((long)__n >> 3) + 1;
          __dest[(long)__n >> 3] = uVar12;
          if (0 < (long)__n) {
            memcpy(__dest,__src,(size_t)__n);
            param_3 = __n;
          }
          puVar17 = __dest;
          local_c0 = __dest;
          local_b8 = puVar13;
          if (__src != (ulong *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
      }
    }
    uVar14 = uVar14 + 1;
    puVar15 = puVar15 + 0x10;
    __src = __dest;
  } while (uVar14 < 8);
  if (puVar17 != puVar13) {
    FUN_71013a7450((undefined4 *)puVar17,(undefined4 *)puVar13);
    lVar5 = **(long **)(*(long *)(param_1[1] + 0x80) + 0x218);
    if (lVar5 == 0) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = ABS(*(float *)(lVar5 + 0x54) * *(float *)(lVar5 + 0x4c));
    }
    if (puVar13 != __dest) {
      fVar33 = 1920.0;
      fVar19 = 1080.0;
      lVar5 = 0;
      uVar14 = 0;
      do {
        uVar1 = *(uint *)((long)__dest + lVar5);
        lVar9 = **(long **)(*param_1 + 8);
        if (*(uint *)(lVar9 + 0xd68) == uVar1) {
LAB_71013a7164:
          lVar16 = 0;
        }
        else if (*(uint *)(lVar9 + 0xf40) == uVar1) {
          lVar16 = 1;
        }
        else if (*(uint *)(lVar9 + 0x1118) == uVar1) {
          lVar16 = 2;
        }
        else if (*(uint *)(lVar9 + 0x12f0) == uVar1) {
          lVar16 = 3;
        }
        else if (*(uint *)(lVar9 + 0x14c8) == uVar1) {
          lVar16 = 4;
        }
        else if (*(uint *)(lVar9 + 0x16a0) == uVar1) {
          lVar16 = 5;
        }
        else if (*(uint *)(lVar9 + 0x1878) == uVar1) {
          lVar16 = 6;
        }
        else {
          if (*(uint *)(lVar9 + 0x1a50) != uVar1) goto LAB_71013a7164;
          lVar16 = 7;
        }
        if (7 < uVar1) {
LAB_71013a7440:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        fVar52 = (float)param_1[(long)(int)uVar1 * 8 + 0x48];
        fVar53 = (float)((ulong)param_1[(long)(int)uVar1 * 8 + 0x48] >> 0x20);
        fVar54 = (float)param_1[(long)(int)uVar1 * 8 + 0x49];
        fVar51 = fVar37 * fVar18 + fVar40 * fVar20 + fVar43 * fVar21 + fVar47 * fVar22 +
                 fVar52 * (fVar37 * fVar32 + fVar40 * fVar34 + fVar43 * fVar35 + fVar47 * fVar36) +
                 (fVar37 * fVar28 + fVar40 * fVar29 + fVar43 * fVar30 + fVar47 * fVar31) * fVar53 +
                 (fVar37 * fVar23 + fVar40 * fVar25 + fVar43 * fVar26 + fVar47 * fVar27) * fVar54;
        fVar59 = fVar38 * fVar18 + fVar41 * fVar20 + fVar45 * fVar21 + fVar49 * fVar22 +
                 (fVar38 * fVar32 + fVar41 * fVar34 + fVar45 * fVar35 + fVar49 * fVar36) * fVar52 +
                 fVar53 * (fVar38 * fVar28 + fVar41 * fVar29 + fVar45 * fVar30 + fVar49 * fVar31) +
                 (fVar38 * fVar23 + fVar41 * fVar25 + fVar45 * fVar26 + fVar49 * fVar27) * fVar54;
        fVar52 = fVar39 * fVar18 + fVar42 * fVar20 + fVar46 * fVar21 + fVar50 * fVar22 +
                 (fVar39 * fVar32 + fVar42 * fVar34 + fVar46 * fVar35 + fVar50 * fVar36) * fVar52 +
                 (fVar39 * fVar28 + fVar42 * fVar29 + fVar46 * fVar30 + fVar50 * fVar31) * fVar53 +
                 (fVar39 * fVar23 + fVar42 * fVar25 + fVar46 * fVar26 + fVar50 * fVar27) * fVar54;
        if (fVar52 != 0.0) {
          fVar51 = fVar51 / fVar52;
          fVar59 = fVar59 / fVar52;
        }
        fVar52 = (float)((ulong)_DAT_71052c3430 >> 0x20);
        fVar51 = (float)_DAT_71052c3430 + fVar51 * (float)_DAT_71052c3430 * _DAT_71052c3440;
        fVar52 = fVar52 + fVar59 * fVar52 * fRam00000071052c3444;
        lVar8 = CONCAT44((float)((ulong)uRam00000071052c3438 >> 0x20) + 0.0,
                         (float)uRam00000071052c3438 + 0.0);
        if (0.0 <= fVar51) {
          if (((DAT_7105335488 & 1) == 0) &&
             (iVar55 = __cxa_guard_acquire(&DAT_7105335488), iVar55 != 0)) {
            fVar59 = (float)(uint)(int)DAT_710744701c;
            if (DAT_710744701c == 0.0) {
              fVar59 = fVar33;
            }
            fVar53 = (float)(uint)(int)DAT_7107447020;
            if (DAT_7107447020 == 0.0) {
              fVar53 = fVar19;
            }
            _DAT_7107447080 = CONCAT44(fVar53,fVar59);
            uRam0000007107447088 = 0;
            __cxa_guard_release(&DAT_7105335488);
          }
          if ((DAT_7107447080 < fVar51) || (fVar52 < 0.0)) goto LAB_71013a72f8;
          if (((DAT_7105335488 & 1) == 0) &&
             (iVar55 = __cxa_guard_acquire(&DAT_7105335488), iVar55 != 0)) {
            fVar59 = (float)(uint)(int)DAT_710744701c;
            if (DAT_710744701c == 0.0) {
              fVar59 = fVar33;
            }
            fVar53 = (float)(uint)(int)DAT_7107447020;
            if (DAT_7107447020 == 0.0) {
              fVar53 = fVar19;
            }
            _DAT_7107447080 = CONCAT44(fVar53,fVar59);
            uRam0000007107447088 = 0;
            __cxa_guard_release(&DAT_7105335488);
          }
          if (DAT_7107447084 < fVar52) goto LAB_71013a72f8;
        }
        else {
LAB_71013a72f8:
          if (((DAT_7105335488 & 1) == 0) &&
             (iVar55 = __cxa_guard_acquire(&DAT_7105335488), iVar55 != 0)) {
            fVar51 = (float)(uint)(int)DAT_710744701c;
            if (DAT_710744701c == 0.0) {
              fVar51 = fVar33;
            }
            fVar59 = (float)(uint)(int)DAT_7107447020;
            if (DAT_7107447020 == 0.0) {
              fVar59 = fVar19;
            }
            _DAT_7107447080 = CONCAT44(fVar59,fVar51);
            uRam0000007107447088 = 0;
            __cxa_guard_release(&DAT_7105335488);
          }
          fVar51 = 0.0;
          lVar8 = **(long **)(*(long *)(param_1[1] + 0x80) + 0x238);
          if (lVar8 != 0) {
            fVar51 = ABS(*(float *)(lVar8 + 0x50) * *(float *)(lVar8 + 0x48));
          }
          fVar51 = (float)_DAT_7107447080 + fVar51;
          lVar8 = CONCAT44((float)((ulong)uRam0000007107447088 >> 0x20) + 0.0,
                           (float)uRam0000007107447088 + 0.0);
        }
        if (((DAT_7105335488 & 1) == 0) &&
           (iVar55 = __cxa_guard_acquire(&DAT_7105335488), iVar55 != 0)) {
          fVar59 = (float)(uint)(int)DAT_710744701c;
          if (DAT_710744701c == 0.0) {
            fVar59 = fVar33;
          }
          fVar52 = (float)(uint)(int)DAT_7107447020;
          if (DAT_7107447020 == 0.0) {
            fVar52 = fVar19;
          }
          _DAT_7107447080 = CONCAT44(fVar52,fVar59);
          uRam0000007107447088 = 0;
          __cxa_guard_release(&DAT_7105335488);
        }
        fVar59 = fVar24 * (1.5 - (float)(int)uVar14) + DAT_7107447084 * 0.5;
        iVar55 = -(uint)((float)param_1[(long)(int)uVar1 * 8 + 0x46] == fVar51);
        iVar56 = -(uint)((float)((ulong)param_1[(long)(int)uVar1 * 8 + 0x46] >> 0x20) == fVar59);
        iVar57 = -(uint)((float)param_1[(long)(int)uVar1 * 8 + 0x47] == (float)lVar8);
        iVar58 = -(uint)((float)((ulong)param_1[(long)(int)uVar1 * 8 + 0x47] >> 0x20) ==
                        (float)((ulong)lVar8 >> 0x20));
        auVar44._4_4_ = iVar56;
        auVar44._0_4_ = iVar55;
        auVar44._8_4_ = iVar57;
        auVar44._12_4_ = iVar58;
        auVar48._4_4_ = iVar56;
        auVar48._0_4_ = iVar55;
        auVar48._8_4_ = iVar57;
        auVar48._12_4_ = iVar58;
        auVar44 = NEON_ext(auVar44,auVar48,8,1);
        uVar12 = CONCAT44(iVar56,iVar55) & auVar44._0_8_;
        if (((uint)uVar12 & (uint)(uVar12 >> 0x20)) == 0) {
          iVar55 = *(int *)(lVar9 + lVar16 * 0x1d8 + 0xd64);
          if (((0 < iVar55) && (lVar9 = (long)iVar55 + -1, (uint)lVar9 < 4)) &&
             (lVar9 = **(long **)(*(long *)(param_1[1] + 0x80) + lVar9 * 0x40 + 0x238), lVar9 != 0))
          {
            *(float *)(lVar9 + 0x30) = fVar51 + -960.0;
            *(float *)(lVar9 + 0x34) = 540.0 - fVar59;
            *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
          }
          param_1[(long)(int)uVar1 * 8 + 0x47] = lVar8;
          param_1[(long)(int)uVar1 * 8 + 0x46] = CONCAT44(fVar59,fVar51);
        }
        uVar14 = uVar14 + 1;
        lVar5 = lVar5 + 8;
        __dest = local_c0;
        puVar17 = local_c0;
      } while (uVar14 < (ulong)((long)local_b8 - (long)local_c0 >> 3));
    }
  }
  if (puVar17 != (ulong *)0x0) {
    FUN_710392eb40((ulong)puVar17);
  }
  return;
}

