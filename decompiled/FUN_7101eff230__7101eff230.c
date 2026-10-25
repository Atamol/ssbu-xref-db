// addr:      7101eff230
// offset:    0x1eff230
// name:      FUN_7101eff230
// mangled:   
// signature: undefined __cdecl FUN_7101eff230(uint * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101eff230(uint *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined **ppuVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  code *pcVar13;
  undefined *puVar14;
  long lVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float __y;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  uint *local_f8;
  undefined **local_e8;
  undefined **local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined **local_a8;
  long *local_a0;
  undefined **local_98;
  long *local_90;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_710530a976 == 0) {
    lVar15 = *(long *)(param_1 + 0xa2);
    uVar12 = *(uint *)(lVar15 + (long)(int)param_1[0x9f] * 4);
    uVar20 = (long)(int)param_1[0x9f] + 1;
    uVar21 = (ulong)(int)uVar12;
    if (uVar20 < (ulong)(*(long *)(param_1 + 0xa4) - lVar15 >> 2)) {
      bVar8 = uVar12 == *(uint *)(lVar15 + uVar20 * 4);
      if ((int)uVar12 < 0) goto LAB_7101eff278;
      bVar9 = false;
    }
    else {
      if ((1 < *param_1) || (4 < uVar12)) {
LAB_7101efff74:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar10 = *(int *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 + (ulong)uVar12 * 0x50 + 0x68);
      bVar8 = iVar10 == 1;
      bVar9 = iVar10 == 3;
    }
    if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar21)
    goto LAB_7101efff78;
    lVar15 = uVar21 * 0x10;
    lVar17 = **(long **)(*(long *)(param_1 + 0x8c) + lVar15);
    *(undefined8 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined8 *)(lVar17 + 0x1e8) = 0;
    *(undefined8 *)(lVar17 + 0x1f0) = 0;
    *(undefined4 *)(lVar17 + 0x208) = 0xffffffff;
    *(undefined8 *)(lVar17 + 0x1d8) = 0;
    *(undefined8 *)(lVar17 + 0x1e0) = 0;
    *(undefined1 *)(lVar17 + 0x20c) = 0;
    *(undefined8 *)(lVar17 + 0x1c8) = 0;
    *(undefined8 *)(lVar17 + 0x1d0) = 0;
    *(undefined4 *)(lVar17 + 0x1b0) = 0;
    *(undefined8 *)(lVar17 + 0x1b8) = 0;
    *(undefined8 *)(lVar17 + 0x1c0) = 0;
    *(undefined8 *)(lVar17 + 0x1f8) = 0x100000000;
    *(undefined8 *)(lVar17 + 0x200) = 0xffffffff;
    if (bVar8) {
      uVar11 = 0x12;
LAB_7101eff3b4:
      *(undefined4 *)(lVar17 + 0x1b4) = uVar11;
      FUN_7101efac00((long *)(lVar17 + 0x18));
      if (*(long *)(lVar17 + 0x18) != 0) {
        pcVar13 = *(code **)(lVar17 + 0x20);
        uVar20 = *(ulong *)(lVar17 + 0x28) & 1;
        if (uVar20 != 0 || pcVar13 != (code *)0x0) {
          if (uVar20 != 0) {
            pcVar13 = *(code **)(pcVar13 +
                                *(long *)(*(long *)(lVar17 + 0x18) +
                                         ((long)*(ulong *)(lVar17 + 0x28) >> 1)));
          }
          (*pcVar13)();
        }
      }
      *(int *)(lVar17 + 0x204) = *(int *)(lVar17 + 0x204) + 1;
    }
    else {
      if (bVar9) {
        uVar11 = 0x13;
        goto LAB_7101eff3b4;
      }
      *(undefined4 *)(lVar17 + 0x1b4) = 0x14;
      FUN_7101efac00((long *)(lVar17 + 0x18));
      if (*(long *)(lVar17 + 0x18) != 0) {
        pcVar13 = *(code **)(lVar17 + 0x20);
        uVar20 = *(ulong *)(lVar17 + 0x28) & 1;
        if (uVar20 != 0 || pcVar13 != (code *)0x0) {
          if (uVar20 != 0) {
            pcVar13 = *(code **)(pcVar13 +
                                *(long *)(*(long *)(lVar17 + 0x18) +
                                         ((long)*(ulong *)(lVar17 + 0x28) >> 1)));
          }
          (*pcVar13)();
        }
      }
      *(int *)(lVar17 + 0x204) = *(int *)(lVar17 + 0x204) + 1;
      if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar21)
      goto LAB_7101efff78;
      *(undefined1 *)(**(long **)(*(long *)(param_1 + 0x8c) + lVar15) + 0x274) = 0;
      param_1[0x9e] = param_1[0x9e] - 1;
    }
    if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar21) {
LAB_7101efff78:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar17 = **(long **)(*(long *)(param_1 + 0x8c) + lVar15);
    lVar15 = **(long **)(lVar17 + 0x238);
    if ((lVar15 != 0) && (lVar18 = *(long *)(lVar15 + 0x18), lVar18 != 0)) {
      FUN_7100058290(lVar18,lVar15);
      FUN_7100058250(lVar18,**(long **)(lVar17 + 0x238));
    }
  }
LAB_7101eff278:
  if (*param_1 != 0) goto LAB_7101effe74;
  uVar12 = param_1[0x9f];
  if (*(char *)((long)param_1 + 0x2ba) == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x84),0x71043beea5);
    lVar17 = *(long *)(param_1 + 0x8e);
    lVar18 = *(long *)(param_1 + 0x8c);
    lVar15 = lVar17;
    if (lVar17 != lVar18) {
      uVar20 = 0;
      uVar22 = 0;
      puVar19 = param_1 + 0x82;
      do {
        local_f8 = param_1 + 0x8e;
        if ((1 < *param_1) || (4 < uVar20)) goto LAB_7101efff74;
        uVar3 = *(uint *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 + uVar20 * 0x50 + 0x50);
        if (uVar3 != 0) {
          FUN_7103776910(&local_e8,(long)puVar19,(long ****)"point_r_%02d",uVar20 & 0xffffffff,
                         param_4,param_5,param_6,param_7,param_8);
          ppuVar5 = local_e0;
          uVar21 = 0;
          uVar23 = uVar22;
          do {
            if ((1 < *param_1) || (4 < uVar21)) goto LAB_7101efff74;
            FUN_7103776910(&local_98,(long)puVar19,(long ****)"point_b_%02d",
                           (ulong)*(uint *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 +
                                            uVar20 * 0x50 + uVar21 * 4 + 0x54),param_4,param_5,
                           param_6,param_7,param_8);
            FUN_7103776910(&local_a8,(long)puVar19,(long ****)"set_line_%02d",(ulong)uVar23,param_4,
                           param_5,param_6,param_7,param_8);
            plVar7 = local_90;
            plVar6 = local_a0;
            if (*local_90 == 0) {
              puVar14 = *ppuVar5;
              uVar30 = _ConstantZero;
            }
            else {
              uVar30 = *(undefined8 *)(*local_90 + 0x30);
              puVar14 = *ppuVar5;
            }
            uVar32 = _ConstantZero;
            if (puVar14 != (undefined *)0x0) {
              uVar32 = *(undefined8 *)(puVar14 + 0x30);
            }
            fVar27 = (float)uVar30 - (float)uVar32;
            __y = (float)((ulong)uVar30 >> 0x20) - (float)((ulong)uVar32 >> 0x20);
            lVar15 = *local_a0;
            if (lVar15 != 0) {
              fVar28 = *(float *)(lVar15 + 0x30);
              fVar26 = ABS(*(float *)(lVar15 + 0x50) * *(float *)(lVar15 + 0x48)) * 0.5;
              bVar2 = *(byte *)(lVar15 + 0x5b) & 3;
              if (bVar2 == 2) {
                fVar28 = fVar28 - fVar26;
              }
              else if (bVar2 == 1) {
                fVar28 = fVar28 + fVar26;
              }
              lVar17 = *(long *)(lVar15 + 0x18);
              if (lVar17 != 0) {
                do {
                  fVar28 = fVar28 + *(float *)(lVar17 + 0x30);
                  lVar17 = *(long *)(lVar17 + 0x18);
                } while (lVar17 != 0);
                if (lVar15 == 0) goto LAB_7101eff7cc;
              }
              fVar24 = fVar27 * fVar27 + __y * __y;
              fVar25 = fVar27 * fVar27 + __y * __y;
              uVar30 = NEON_frsqrte(CONCAT44(fVar25,fVar24),4);
              fVar31 = (float)((ulong)uVar30 >> 0x20);
              uVar32 = NEON_frsqrts(CONCAT44(fVar25 * fVar31,fVar24 * (float)uVar30),uVar30,4);
              fVar29 = (float)uVar30 * (float)uVar32;
              fVar31 = fVar31 * (float)((ulong)uVar32 >> 0x20);
              uVar30 = NEON_frsqrts(CONCAT44(fVar25 * fVar31,fVar24 * fVar29),
                                    CONCAT44(fVar31,fVar29),4);
              iVar10 = -(uint)(fVar24 == 0.0);
              *(undefined4 *)(lVar15 + 0x4c) = 0x3f800000;
              *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
              *(float *)(lVar15 + 0x48) =
                   (float)((uint)(fVar24 * fVar29 * (float)uVar30) &
                          CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar10 >> 8),~(byte)iVar10)))) /
                   ((fVar28 + 960.0 + fVar26) - ((fVar28 + 960.0) - fVar26));
              puVar14 = *ppuVar5;
            }
LAB_7101eff7cc:
            if (puVar14 == (undefined *)0x0) {
              lVar15 = *local_a0;
              uVar30 = _ConstantZero;
            }
            else {
              uVar30 = *(undefined8 *)(puVar14 + 0x30);
              lVar15 = *local_a0;
            }
            if (lVar15 != 0) {
              *(undefined8 *)(lVar15 + 0x30) = uVar30;
              *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
            }
            fVar27 = atan2f(__y,fVar27);
            lVar15 = *plVar6;
            if (lVar15 != 0) {
              *(undefined8 *)(lVar15 + 0x3c) = 0;
              *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 0x10;
              *(float *)(lVar15 + 0x44) = (fVar27 * 180.0) / 3.1415927;
            }
            uVar23 = uVar23 + 1;
            local_a8 = &PTR_FUN_710523d9a8;
            local_a0 = (long *)0x0;
            FUN_710392eb40((ulong)plVar6);
            local_98 = &PTR_FUN_710523d9a8;
            local_90 = (long *)0x0;
            if (plVar7 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar7);
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 != uVar3);
          uVar22 = uVar3 + uVar22;
          local_e8 = &PTR_FUN_710523d9a8;
          local_e0 = (undefined **)0x0;
          if (ppuVar5 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar5);
          }
          lVar17 = *(long *)local_f8;
          lVar18 = *(long *)(param_1 + 0x8c);
        }
        uVar20 = uVar20 + 1;
        lVar15 = lVar18;
      } while (uVar20 < (ulong)(lVar17 - lVar18 >> 4));
    }
    *(undefined1 *)((long)param_1 + 0x2ba) = 1;
    if (lVar17 != lVar15) goto LAB_7101eff8a4;
  }
  else if (*(long *)(param_1 + 0x8e) != *(long *)(param_1 + 0x8c)) {
LAB_7101eff8a4:
    local_f8 = param_1 + 0x8e;
    uVar22 = 1;
    do {
      FUN_7103776910(&local_e8,(long)(param_1 + 0x82),(long ****)"point_r_%02d",(ulong)(uVar22 - 1),
                     param_4,param_5,param_6,param_7,param_8);
      ppuVar5 = local_e0;
      puVar14 = *local_e0;
      if (puVar14 != (undefined *)0x0) {
        puVar14[0x58] = puVar14[0x58] & 0xfe;
      }
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      FUN_7103776910(&local_e8,(long)(param_1 + 0x82),(long ****)"point_b_%02d",(ulong)(uVar22 - 1),
                     param_4,param_5,param_6,param_7,param_8);
      ppuVar5 = local_e0;
      lVar15 = (long)*local_e0;
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
      }
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar5);
      }
      uVar20 = (ulong)uVar22;
      uVar22 = uVar22 + 1;
    } while (uVar20 < (ulong)(*(long *)local_f8 - *(long *)(param_1 + 0x8c) >> 4));
  }
  local_f8 = param_1 + 0x8e;
  puVar19 = param_1 + 0x82;
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",0,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  puVar14 = *local_e0;
  if (puVar14 != (undefined *)0x0) {
    puVar14[0x58] = puVar14[0x58] & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",1,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",2,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",3,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",4,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",5,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",6,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",7,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  uVar22 = uVar12 + 1;
  FUN_7103776910(&local_e8,(long)puVar19,(long ****)"set_line_%02d",8,param_4,param_5,param_6,
                 param_7,param_8);
  ppuVar5 = local_e0;
  lVar15 = (long)*local_e0;
  if (lVar15 != 0) {
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  local_e8 = &PTR_FUN_710523d9a8;
  local_e0 = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  if (uVar12 != 0xffffffff) {
    lVar15 = *(long *)local_f8;
    lVar17 = *(long *)(param_1 + 0x8c);
    if (lVar15 != lVar17) {
      uVar20 = 0;
      uVar12 = 0;
      lVar18 = 0x54;
      do {
        if ((1 < *param_1) || (4 < uVar20)) goto LAB_7101efff74;
        uVar3 = *(uint *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 + uVar20 * 0x50 + 0x50);
        if (uVar3 != 0) {
          FUN_7103776910(&local_e8,(long)puVar19,(long ****)"point_r_%02d",uVar20 & 0xffffffff,
                         param_4,param_5,param_6,param_7,param_8);
          ppuVar5 = local_e0;
          puVar14 = *local_e0;
          if (puVar14 != (undefined *)0x0) {
            puVar14[0x58] = puVar14[0x58] | 1;
          }
          if (uVar12 < uVar22) {
            uVar21 = 0;
            do {
              if ((1 < *param_1) || (4 < uVar21)) goto LAB_7101efff74;
              uVar1 = uVar12 + uVar21;
              FUN_7103776910(&local_98,(long)puVar19,(long ****)"point_b_%02d",
                             (ulong)*(uint *)(*DAT_7105328e18 + (ulong)*param_1 * 0x1b8 + lVar18 +
                                             uVar21 * 4),param_4,param_5,param_6,param_7,param_8);
              plVar6 = local_90;
              lVar15 = *local_90;
              if (lVar15 != 0) {
                *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
              }
              FUN_7103776910(&local_a8,(long)puVar19,(long ****)"set_line_%02d",uVar1 & 0xffffffff,
                             param_4,param_5,param_6,param_7,param_8);
              plVar7 = local_a0;
              lVar15 = *local_a0;
              if (lVar15 != 0) {
                *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
              }
              local_a8 = &PTR_FUN_710523d9a8;
              local_a0 = (long *)0x0;
              if (plVar7 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar7);
              }
              local_98 = &PTR_FUN_710523d9a8;
              local_90 = (long *)0x0;
              if (plVar6 != (long *)0x0) {
                FUN_710392eb40((ulong)plVar6);
              }
              uVar21 = uVar21 + 1;
            } while (((int)uVar1 + 1U < uVar22) && (uVar21 < uVar3));
            uVar12 = uVar12 + (int)uVar21;
          }
          local_e8 = &PTR_FUN_710523d9a8;
          local_e0 = (undefined **)0x0;
          if (ppuVar5 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar5);
          }
          lVar15 = *(long *)local_f8;
          lVar17 = *(long *)(param_1 + 0x8c);
        }
        if (uVar22 <= uVar12) break;
        uVar20 = uVar20 + 1;
        lVar18 = lVar18 + 0x50;
      } while (uVar20 < (ulong)(lVar15 - lVar17 >> 4));
    }
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x11afc64d0a,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8), (uVar20 & 1) != 0)) {
    FUN_71024076d0((undefined4 *)&local_e8,0x11afc64d0a);
    if (((local_d8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_d0 == DAT_7106dd53ac)) {
      piVar16 = (int *)(local_d8 + 0x38);
      do {
        cVar4 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar8) {
          *piVar16 = *piVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  else {
    local_d0 = 0x87650000000000;
    local_c0 = 0xffffffffffffffff;
    uStack_b8 = 0;
    local_e8 = (undefined **)((ulong)local_e8 & 0xffffffff00000000);
    local_b0 = 0;
  }
  local_e0 = &PTR_FUN_7104f73d50;
  local_d8 = 0;
  local_c8 = 0;
LAB_7101effe74:
  if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_710530a976 < 3) {
    fVar27 = (float)FUN_71033112b0(0,*(long *)(DAT_710532f8c0 + 8),
                                   *(ulong *)(&DAT_7104adaaa0 + (long)(char)DAT_710530a976 * 8));
    uVar12 = (uint)fVar27;
  }
  else {
    uVar12 = 0;
  }
  param_1[0xa0] = uVar12;
  return;
}

