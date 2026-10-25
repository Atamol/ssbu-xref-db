// addr:      7101efc970
// offset:    0x1efc970
// name:      FUN_7101efc970
// mangled:   
// signature: undefined __cdecl FUN_7101efc970(uint * param_1, undefined8 param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101efc970(uint *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint *puVar18;
  uint uVar19;
  undefined **local_70;
  ulong local_68;
  
  if (param_1[0x7f] == 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_710530a976 == '\0') {
      if (*(long *)(param_1 + 0x8e) == *(long *)(param_1 + 0x8c)) {
        return;
      }
      lVar17 = 0;
      lVar11 = 0;
      uVar10 = 0;
      lVar8 = 0x1b6;
      do {
        uVar19 = *param_1;
        lVar16 = *DAT_7105328e18;
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if ((1 < uVar19) || (4 < uVar10)) goto LAB_7101efd8e0;
        puVar1 = &DAT_710530a9c8;
        if (uVar19 != 0) {
          puVar1 = &DAT_710530bdf0;
        }
        uVar2 = *param_1;
        lVar13 = *DAT_7105328e18;
        if (*(short *)(puVar1 + lVar8) == -1 ||
            *(int *)(lVar16 + (ulong)uVar19 * 0x1b8 + lVar17 + 0x70) == 0) {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (1 < uVar2) goto LAB_7101efd8e0;
          puVar1 = &DAT_710530a9c8;
          if (uVar2 != 0) {
            puVar1 = &DAT_710530bdf0;
          }
          if ((*(int *)(lVar13 + (ulong)uVar2 * 0x1b8 + lVar17 + 0x80) != 0) &&
             (*(int *)(puVar1 + lVar8 + -0x186) == 2)) {
            uVar19 = *param_1;
            lVar16 = *DAT_7105328e18;
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
              FUN_7101764000();
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            if (1 < uVar19) goto LAB_7101efd8e0;
            puVar1 = &DAT_710530a9c8;
            if (uVar19 != 0) {
              puVar1 = &DAT_710530bdf0;
            }
            iVar5 = *(int *)(lVar16 + (ulong)uVar19 * 0x1b8 + lVar17 + 0x7c);
            uVar19 = *param_1;
            lVar16 = *DAT_7105328e18;
            if (*(int *)(puVar1 + lVar8 + -0x186) != 2) {
              iVar5 = 0;
            }
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
              FUN_7101764000();
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            if (1 < uVar19) goto LAB_7101efd8e0;
            if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar10)
            goto LAB_7101efd8e4;
            puVar1 = &DAT_710530a9c8;
            if (uVar19 != 0) {
              puVar1 = &DAT_710530bdf0;
            }
            iVar4 = *(int *)(puVar1 + lVar8 + -0x186);
            lVar13 = **(long **)(*(long *)(param_1 + 0x8c) + lVar11);
            iVar6 = *(int *)(lVar16 + (ulong)uVar19 * 0x1b8 + lVar17 + 0x80);
            *(undefined8 *)(lVar13 + 0x20) = 0;
            *(undefined8 *)(lVar13 + 0x28) = 0;
            *(undefined8 *)(lVar13 + 0x1e8) = 0;
            *(undefined8 *)(lVar13 + 0x1f0) = 0;
            *(int *)(lVar13 + 0x268) = iVar5;
            *(undefined8 *)(lVar13 + 0x1d8) = 0;
            *(undefined8 *)(lVar13 + 0x1e0) = 0;
            *(undefined4 *)(lVar13 + 0x1f8) = 0;
            *(undefined8 *)(lVar13 + 0x1c8) = 0;
            *(undefined8 *)(lVar13 + 0x1d0) = 0;
            if (iVar4 != 2) {
              iVar6 = 0;
            }
            *(undefined8 *)(lVar13 + 0x1b8) = 0;
            *(undefined8 *)(lVar13 + 0x1c0) = 0;
            *(int *)(lVar13 + 0x26c) = iVar6 + iVar5;
            *(undefined8 *)(lVar13 + 0x1b0) = 0x1600000000;
            *(undefined8 *)(lVar13 + 0x200) = 0xffffffff;
            *(undefined4 *)(lVar13 + 0x208) = 0xffffffff;
            *(int *)(lVar13 + 0x264) = iVar5;
            *(undefined1 *)(lVar13 + 0x20c) = 0;
            *(undefined4 *)(lVar13 + 0x1fc) = 1;
          }
        }
        else {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (1 < uVar2) goto LAB_7101efd8e0;
          puVar1 = &DAT_710530a9c8;
          if (uVar2 != 0) {
            puVar1 = &DAT_710530bdf0;
          }
          lVar16 = *DAT_7105328e18;
          uVar19 = 0;
          if (*(short *)(puVar1 + lVar8) != -1) {
            uVar19 = *(uint *)(lVar13 + (ulong)uVar2 * 0x1b8 + lVar17 + 0x6c);
          }
          uVar2 = *param_1;
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (1 < uVar2) goto LAB_7101efd8e0;
          if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar10) {
LAB_7101efd8e4:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          puVar1 = &DAT_710530a9c8;
          if (uVar2 != 0) {
            puVar1 = &DAT_710530bdf0;
          }
          lVar13 = **(long **)(*(long *)(param_1 + 0x8c) + lVar11);
          iVar5 = 0;
          if (*(short *)(puVar1 + lVar8) != -1) {
            iVar5 = *(int *)(lVar16 + (ulong)uVar2 * 0x1b8 + lVar17 + 0x70);
          }
          FUN_710339b6b0((undefined8 *)(lVar13 + 0x240),uVar19,iVar5 + uVar19);
          lVar16 = *(long *)(*(long *)(lVar13 + 0x240) + 0x18);
          if (*(long *)(lVar16 + 8) != 0) {
            uVar19 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar13 + 0x240) + 0x58));
            FUN_7103778630((ulong)uVar19,lVar16,0x7104464398);
          }
          if (0x12 < *(uint *)(lVar13 + 0x1fc)) goto LAB_7101efd8e0;
          *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x1fc) * 4 + 0x1b0) = 0x15;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
        lVar8 = lVar8 + 0x1c8;
        lVar17 = lVar17 + 0x50;
        if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar10) {
          return;
        }
      } while( true );
    }
    uVar19 = *param_1;
    if (uVar19 < 2) {
      lVar11 = *DAT_7105328e18;
      uVar2 = *(uint *)(lVar11 + (ulong)uVar19 * 0x1b8 + 0x28);
      uVar10 = (ulong)uVar2;
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (uVar2 < 5) {
        puVar1 = &DAT_710530a9c8;
        if (uVar19 != 0) {
          puVar1 = &DAT_710530bdf0;
        }
        uVar3 = *param_1;
        lVar8 = *DAT_7105328e18;
        uVar15 = (ulong)(int)uVar2;
        if (*(short *)(puVar1 + uVar10 * 0x1c8 + 0x1b6) == -1 ||
            *(int *)(lVar11 + (ulong)uVar19 * 0x1b8 + uVar10 * 0x50 + 0x70) == 0) {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (uVar3 < 2) {
            puVar1 = &DAT_710530a9c8;
            if (uVar3 != 0) {
              puVar1 = &DAT_710530bdf0;
            }
            if (*(int *)(lVar8 + (ulong)uVar3 * 0x1b8 + uVar10 * 0x50 + 0x80) == 0) {
              return;
            }
            if (*(int *)(puVar1 + uVar10 * 0x1c8 + 0x30) != 2) {
              return;
            }
            uVar19 = *param_1;
            lVar11 = *DAT_7105328e18;
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
              FUN_7101764000();
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            if (uVar19 < 2) {
              puVar1 = &DAT_710530a9c8;
              if (uVar19 != 0) {
                puVar1 = &DAT_710530bdf0;
              }
              lVar8 = *DAT_7105328e18;
              iVar5 = *(int *)(lVar11 + (ulong)uVar19 * 0x1b8 + uVar10 * 0x50 + 0x7c);
              uVar19 = *param_1;
              if (*(int *)(puVar1 + uVar10 * 0x1c8 + 0x30) != 2) {
                iVar5 = 0;
              }
              if (((DAT_71053144d8 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
                FUN_7101764000();
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
              }
              if (uVar19 < 2) {
                if (uVar15 < (ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4)) {
                  puVar1 = &DAT_710530a9c8;
                  if (uVar19 != 0) {
                    puVar1 = &DAT_710530bdf0;
                  }
                  iVar4 = *(int *)(puVar1 + uVar10 * 0x1c8 + 0x30);
                  lVar11 = **(long **)(*(long *)(param_1 + 0x8c) + uVar15 * 0x10);
                  iVar6 = *(int *)(lVar8 + (ulong)uVar19 * 0x1b8 + uVar10 * 0x50 + 0x80);
                  *(undefined8 *)(lVar11 + 0x20) = 0;
                  *(undefined8 *)(lVar11 + 0x28) = 0;
                  if (iVar4 != 2) {
                    iVar6 = 0;
                  }
                  *(undefined8 *)(lVar11 + 0x1e8) = 0;
                  *(undefined8 *)(lVar11 + 0x1f0) = 0;
                  *(undefined8 *)(lVar11 + 0x1c8) = 0;
                  *(undefined8 *)(lVar11 + 0x1d0) = 0;
                  *(undefined8 *)(lVar11 + 0x1b8) = 0;
                  *(undefined8 *)(lVar11 + 0x1c0) = 0;
                  *(int *)(lVar11 + 0x26c) = iVar6 + iVar5;
                  *(int *)(lVar11 + 0x264) = iVar5;
                  *(int *)(lVar11 + 0x268) = iVar5;
                  *(undefined4 *)(lVar11 + 0x1f8) = 0;
                  *(undefined8 *)(lVar11 + 0x1d8) = 0;
                  *(undefined8 *)(lVar11 + 0x1e0) = 0;
                  *(undefined8 *)(lVar11 + 0x1b0) = 0x1600000000;
                  *(undefined8 *)(lVar11 + 0x200) = 0xffffffff;
                  *(undefined4 *)(lVar11 + 0x208) = 0xffffffff;
                  *(undefined1 *)(lVar11 + 0x20c) = 0;
                  *(undefined4 *)(lVar11 + 0x1fc) = 1;
                  return;
                }
LAB_7101efd8ec:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_out_of_range();
              }
            }
          }
        }
        else {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if (uVar3 < 2) {
            puVar1 = &DAT_710530a9c8;
            if (uVar3 != 0) {
              puVar1 = &DAT_710530bdf0;
            }
            uVar2 = *param_1;
            lVar11 = *DAT_7105328e18;
            uVar19 = 0;
            if (*(short *)(puVar1 + uVar10 * 0x1c8 + 0x1b6) != -1) {
              uVar19 = *(uint *)(lVar8 + (ulong)uVar3 * 0x1b8 + uVar10 * 0x50 + 0x6c);
            }
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
              FUN_7101764000();
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            if (uVar2 < 2) {
              if ((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c) >> 4) <= uVar15)
              goto LAB_7101efd8ec;
              puVar1 = &DAT_710530a9c8;
              if (uVar2 != 0) {
                puVar1 = &DAT_710530bdf0;
              }
              iVar5 = 0;
              if (*(short *)(puVar1 + uVar10 * 0x1c8 + 0x1b6) != -1) {
                iVar5 = *(int *)(lVar11 + (ulong)uVar2 * 0x1b8 + uVar10 * 0x50 + 0x70);
              }
              lVar8 = **(long **)(*(long *)(param_1 + 0x8c) + uVar15 * 0x10);
              FUN_710339b6b0((undefined8 *)(lVar8 + 0x240),uVar19,iVar5 + uVar19);
              lVar11 = *(long *)(*(long *)(lVar8 + 0x240) + 0x18);
              if (*(long *)(lVar11 + 8) != 0) {
                uVar19 = NEON_ucvtf(*(undefined4 *)(*(long *)(lVar8 + 0x240) + 0x58));
                FUN_7103778630((ulong)uVar19,lVar11,0x7104464398);
              }
              if (*(uint *)(lVar8 + 0x1fc) < 0x13) {
                *(undefined4 *)(lVar8 + (long)(int)*(uint *)(lVar8 + 0x1fc) * 4 + 0x1b0) = 0x15;
                return;
              }
            }
          }
        }
      }
    }
    goto LAB_7101efd8e0;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x8c);
  if (puVar7 != *(undefined8 **)(param_1 + 0x8e)) {
    uVar10 = (ulong)((long)*(undefined8 **)(param_1 + 0x8e) + (-0x10 - (long)puVar7)) >> 4;
    uVar19 = (int)uVar10 + 1;
    if (uVar10 == 0) {
      bVar9 = true;
LAB_7101efcc28:
      bVar9 = (bool)(bVar9 & *(int *)(*(long *)*puVar7 + 0x200) == 0);
    }
    else {
      lVar11 = (((ulong)uVar19 & 1) - 1) - uVar10;
      bVar9 = true;
      do {
        plVar12 = (long *)*puVar7;
        puVar14 = puVar7 + 2;
        puVar7 = puVar7 + 4;
        lVar11 = lVar11 + 2;
        bVar9 = (bool)((*(int *)(*plVar12 + 0x200) == 0 && *(int *)(*(long *)*puVar14 + 0x200) == 0)
                      & bVar9);
      } while (lVar11 != 0);
      if ((uVar19 & 1) != 0) goto LAB_7101efcc28;
    }
    if (!bVar9) {
      return;
    }
  }
  lVar11 = *DAT_7105328e18;
  *(int *)(lVar11 + 0x6c) = *(int *)(lVar11 + 0x6c) + *(int *)(lVar11 + 0x70);
  *(undefined4 *)(lVar11 + 0x70) = 0;
  *(int *)(lVar11 + 0x7c) = *(int *)(lVar11 + 0x7c) + *(int *)(lVar11 + 0x80);
  *(undefined4 *)(lVar11 + 0x80) = 0;
  *(int *)(lVar11 + 0xbc) = *(int *)(lVar11 + 0xbc) + *(int *)(lVar11 + 0xc0);
  *(undefined4 *)(lVar11 + 0xc0) = 0;
  *(int *)(lVar11 + 0xcc) = *(int *)(lVar11 + 0xcc) + *(int *)(lVar11 + 0xd0);
  *(undefined4 *)(lVar11 + 0xd0) = 0;
  iVar5 = *(int *)(lVar11 + 0x110);
  *(undefined4 *)(lVar11 + 0x110) = 0;
  *(int *)(lVar11 + 0x10c) = *(int *)(lVar11 + 0x10c) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x160);
  *(undefined4 *)(lVar11 + 0x160) = 0;
  *(int *)(lVar11 + 0x11c) = *(int *)(lVar11 + 0x11c) + *(int *)(lVar11 + 0x120);
  *(int *)(lVar11 + 0x15c) = *(int *)(lVar11 + 0x15c) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x170);
  *(undefined4 *)(lVar11 + 0x170) = 0;
  *(int *)(lVar11 + 0x16c) = *(int *)(lVar11 + 0x16c) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x1b0);
  *(undefined4 *)(lVar11 + 0x1b0) = 0;
  *(int *)(lVar11 + 0x1ac) = *(int *)(lVar11 + 0x1ac) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x1c0);
  *(undefined4 *)(lVar11 + 0x1c0) = 0;
  *(int *)(lVar11 + 0x1bc) = *(int *)(lVar11 + 0x1bc) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x228);
  *(undefined4 *)(lVar11 + 0x228) = 0;
  *(int *)(lVar11 + 0x224) = *(int *)(lVar11 + 0x224) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x238);
  *(undefined4 *)(lVar11 + 0x238) = 0;
  *(int *)(lVar11 + 0x234) = *(int *)(lVar11 + 0x234) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x278);
  *(undefined4 *)(lVar11 + 0x278) = 0;
  *(int *)(lVar11 + 0x274) = *(int *)(lVar11 + 0x274) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x288);
  *(undefined4 *)(lVar11 + 0x288) = 0;
  *(int *)(lVar11 + 0x284) = *(int *)(lVar11 + 0x284) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x2c8);
  *(undefined4 *)(lVar11 + 0x2c8) = 0;
  *(int *)(lVar11 + 0x2c4) = *(int *)(lVar11 + 0x2c4) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x2d8);
  *(undefined4 *)(lVar11 + 0x2d8) = 0;
  *(int *)(lVar11 + 0x2d4) = *(int *)(lVar11 + 0x2d4) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x318);
  *(undefined4 *)(lVar11 + 0x318) = 0;
  *(int *)(lVar11 + 0x314) = *(int *)(lVar11 + 0x314) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x328);
  *(undefined4 *)(lVar11 + 0x328) = 0;
  *(int *)(lVar11 + 0x324) = *(int *)(lVar11 + 0x324) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x368);
  *(undefined4 *)(lVar11 + 0x368) = 0;
  *(int *)(lVar11 + 0x364) = *(int *)(lVar11 + 0x364) + iVar5;
  iVar5 = *(int *)(lVar11 + 0x378);
  *(undefined4 *)(lVar11 + 0x378) = 0;
  *(undefined4 *)(lVar11 + 0x120) = 0;
  *(int *)(lVar11 + 0x374) = *(int *)(lVar11 + 0x374) + iVar5;
  puVar7 = *(undefined8 **)(param_1 + 0x8c);
  puVar14 = *(undefined8 **)(param_1 + 0x8e);
  if (puVar7 != puVar14) {
    do {
      puVar18 = *(uint **)*puVar7;
      uVar19 = *puVar18;
      if ((1 < uVar19) || (uVar10 = (ulong)puVar18[2], 4 < puVar18[2])) goto LAB_7101efd8e0;
      lVar11 = *DAT_7105328e18;
      if (*(short *)(lVar11 + (ulong)uVar19 * 0x1b8 + uVar10 * 0x50 + 0x78) != -1) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        puVar1 = &DAT_710530a9c8;
        if (uVar19 != 0) {
          puVar1 = &DAT_710530bdf0;
        }
        uVar2 = 0;
        if (*(short *)(puVar1 + uVar10 * 0x1c8 + 0x1b6) != -1) {
          uVar2 = *(uint *)(lVar11 + (ulong)uVar19 * 0x1b8 + uVar10 * 0x50 + 0x6c);
        }
        uVar10 = (ulong)uVar2;
        FUN_710339b6b0((undefined8 *)(puVar18 + 0x90),uVar2,uVar2);
        lVar11 = *(long *)(puVar18 + 0x90);
        if (*(long *)(*(long *)(lVar11 + 0x18) + 8) != 0) {
          FUN_7103776910(&local_70,lVar11 + 0x10,(long ****)"set_txt_sp_level",uVar10,param_4,
                         param_5,param_6,param_7,param_8);
          param_4 = (ulong)*(uint *)(lVar11 + 0x50);
          FUN_710377a280((long)&local_70,(byte *)"mel_result_item_unit_35_00",1);
          uVar10 = local_68;
          local_70 = &PTR_FUN_710523d9a8;
          local_68 = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          lVar8 = *(long *)(puVar18 + 0x90);
          lVar11 = *(long *)(lVar8 + 0x18);
          if (*(long *)(lVar11 + 8) != 0) {
            uVar19 = NEON_ucvtf(*(undefined4 *)(lVar8 + 0x58));
            FUN_7103778630((ulong)uVar19,lVar11,0x7104464398);
          }
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar14 != puVar7);
  }
  if (param_1[0x7d] < 0x13) {
    param_1[(long)(int)param_1[0x7d] + 0x6a] = 0;
    return;
  }
LAB_7101efd8e0:
                    /* WARNING: Subroutine does not return */
  abort();
}

