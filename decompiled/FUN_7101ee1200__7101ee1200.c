// addr:      7101ee1200
// offset:    0x1ee1200
// name:      FUN_7101ee1200
// mangled:   
// signature: undefined __cdecl FUN_7101ee1200(undefined1[16] param_1, undefined8 param_2, undefined8 param_3, long param_4, undefined8 param_5, long * * * * * * * * * param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ee1200(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,long *********param_6,byte ****param_7,long ****param_8,
                   undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  long *plVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
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
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  char *pcVar15;
  byte *pbVar16;
  long ****pppplVar17;
  undefined **ppuVar18;
  byte ****ppppbVar19;
  long ****pppplVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  uint uVar24;
  long lVar25;
  int *piVar26;
  undefined8 *puVar27;
  uint *puVar28;
  long lVar29;
  uint *puVar30;
  undefined4 extraout_s0;
  float fVar31;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined **local_10c8;
  ulong local_10c0;
  undefined **local_10b8;
  ulong local_10b0;
  undefined **local_10a8;
  ulong local_10a0;
  undefined **local_1098;
  long *local_1090;
  int local_88 [2];
  
  if (*(int *)(param_4 + 0xdc) != 0) {
    uVar10 = FUN_710323cb80(**(long **)(param_4 + 0xe8),param_5,param_6,param_7,param_8,param_9,
                            param_10,param_11);
    if ((uVar10 & 1) == 0) {
      return;
    }
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_4_ = extraout_var_00;
    auVar3._12_4_ = extraout_var_01;
    FUN_7101ee4ab0(auVar3,param_2,param_3,param_4,0,param_6,param_7,param_8,param_9,param_10,
                   param_11);
    lVar29 = *(long *)(DAT_710532f730 + 8);
    if (*(long *)(param_4 + 0x480) == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x500),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0x550);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(*(long *)(param_4 + 0x480) + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x500),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0x550);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x5d0),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0x620);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x5d0),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0x620);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x6a0),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0x6f0);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x6a0),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0x6f0);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x770),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0x7c0);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x770),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0x7c0);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x840),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0x890);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x840),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0x890);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x910),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0x960);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x910),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0x960);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0x9e0),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
      lVar25 = *(long *)(param_4 + 0xa30);
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0x9e0),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
      lVar25 = *(long *)(param_4 + 0xa30);
    }
    if (lVar25 == 0) {
      FUN_71037790a0(*(long *)(param_4 + 0xab0),1,param_6,param_7,param_8,param_9,param_10,param_11)
      ;
    }
    else {
      uVar10 = FUN_7103263f80(*(long *)(lVar29 + 0x168),*(ulong *)(lVar25 + 8));
      param_6 = (long *********)&DAT_00000011;
      plVar11 = FUN_710323f600(*(long **)(param_4 + 0xe8),uVar10,(long ****)&DAT_00000011,param_7,
                               param_8,param_9,param_10,param_11);
      FUN_7103778b80(*(long *)(param_4 + 0xab0),(long)plVar11,param_6,param_7,param_8,param_9,
                     param_10,param_11);
    }
    FUN_710323e4f0(**(long **)(param_4 + 0xe8),0x1bc5f7241c,param_6,param_7,param_8,param_9,param_10
                   ,param_11);
    plVar11 = (long *)(param_4 + 0x480);
    do {
      FUN_7103776910(&local_1098,(long)(plVar11 + 1),(long ****)"set_btn_chara_hit",param_6,param_7,
                     param_8,param_9,param_10,param_11);
      plVar5 = local_1090;
      lVar29 = *local_1090;
      if (lVar29 == 0) {
        fVar33 = (float)(_ConstantZero >> 0x20);
        fVar32 = 0.0;
        fVar31 = 0.0;
        uVar10 = _ConstantZero;
      }
      else {
        fVar33 = *(float *)(lVar29 + 0x30);
        fVar32 = ABS(*(float *)(lVar29 + 0x54) * *(float *)(lVar29 + 0x4c));
        fVar31 = ABS(*(float *)(lVar29 + 0x50) * *(float *)(lVar29 + 0x48));
        uVar12 = *(ulong *)(lVar29 + 0x30);
        bVar4 = *(byte *)(lVar29 + 0x5b) & 3;
        if (bVar4 == 2) {
          fVar33 = fVar33 - fVar31 * 0.5;
LAB_7101ee16b8:
          uVar12 = CONCAT44((int)(uVar12 >> 0x20),fVar33);
        }
        else if (bVar4 == 1) {
          fVar33 = fVar33 + fVar31 * 0.5;
          goto LAB_7101ee16b8;
        }
        bVar4 = *(byte *)(lVar29 + 0x5b) >> 2 & 3;
        fVar33 = (float)(uVar12 >> 0x20);
        if (bVar4 == 2) {
          fVar33 = fVar32 * 0.5 + fVar33;
LAB_7101ee16e8:
          uVar12 = CONCAT44(fVar33,(int)uVar12);
        }
        else if (bVar4 == 1) {
          fVar33 = fVar33 - fVar32 * 0.5;
          goto LAB_7101ee16e8;
        }
        lVar29 = *(long *)(lVar29 + 0x18);
        if (lVar29 == 0) {
          fVar33 = (float)(uVar12 >> 0x20);
          uVar10 = uVar12;
        }
        else {
          do {
            fVar34 = (float)uVar12 + *(float *)(lVar29 + 0x30);
            uVar10 = (ulong)(uint)fVar34;
            fVar33 = (float)(uVar12 >> 0x20) + *(float *)(lVar29 + 0x34);
            uVar12 = CONCAT44(fVar33,fVar34);
            lVar29 = *(long *)(lVar29 + 0x18);
          } while (lVar29 != 0);
        }
      }
      fVar34 = (float)uVar10 + 960.0;
      *(float *)(plVar11 + 0x17) = (fVar34 - fVar31 * 0.5) + -960.0;
      *(float *)((long)plVar11 + 0xbc) = fVar34 + fVar31 * 0.5 + -960.0;
      *(float *)(plVar11 + 0x18) = 540.0 - ((540.0 - fVar33) + fVar32 * 0.5);
      *(float *)((long)plVar11 + 0xc4) = (fVar32 * 0.5 - (540.0 - fVar33)) + 540.0;
      local_1098 = &PTR_FUN_710523d9a8;
      local_1090 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
      if (((char)plVar11[0x19] != '\0') && (*(uint *)(*plVar11 + 0x68) < 9)) {
        fVar31 = *(float *)(plVar11 + 0x17);
        fVar32 = *(float *)((long)plVar11 + 0xbc);
        lVar29 = param_4 + (long)(int)*(uint *)(*plVar11 + 0x68) * 0x60;
        fVar33 = *(float *)(plVar11 + 0x18);
        fVar34 = *(float *)((long)plVar11 + 0xc4);
        *(undefined8 *)(lVar29 + 0x168) = 0;
        *(ulong *)(lVar29 + 0x160) =
             CONCAT44(fVar33 + (fVar34 - fVar33) * 0.5,fVar31 + (fVar32 - fVar31) * 0.5);
      }
      plVar11 = plVar11 + 0x1a;
      if (plVar11 == (long *)(param_4 + 0xb00)) {
        if (0x12 < *(uint *)(param_4 + 0xd4)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_4 + (long)(int)*(uint *)(param_4 + 0xd4) * 4 + 0x88) = 2;
        return;
      }
    } while( true );
  }
  FUN_7101ee5460(*(undefined8 **)(param_4 + 0x108),*(undefined8 **)(param_4 + 0x110));
  lVar29 = *(long *)(param_4 + 0x108);
  lVar14 = *(long *)(param_4 + 0x110) - lVar29;
  uVar10 = (lVar14 >> 4) * 0x6db6db6db6db6db7;
  lVar25 = 0;
  if (lVar14 != 0) {
    lVar25 = lVar29;
  }
  *(long *)(param_4 + 0x480) = lVar25;
  lVar25 = lVar29 + 0x70;
  if (uVar10 < 2) {
    lVar25 = 0;
  }
  *(long *)(param_4 + 0x550) = lVar25;
  lVar25 = lVar29 + 0xe0;
  if (uVar10 < 3) {
    lVar25 = 0;
  }
  *(long *)(param_4 + 0x620) = lVar25;
  lVar25 = lVar29 + 0x150;
  if (uVar10 < 4) {
    lVar25 = 0;
  }
  lVar14 = lVar29 + 0x230;
  if (uVar10 < 6) {
    lVar14 = 0;
  }
  lVar1 = lVar29 + 0x2a0;
  *(long *)(param_4 + 0x6f0) = lVar25;
  lVar25 = lVar29 + 0x1c0;
  lVar29 = lVar29 + 0x310;
  *(long *)(param_4 + 0x890) = lVar14;
  if (uVar10 < 7) {
    lVar1 = 0;
  }
  if (uVar10 < 8) {
    lVar29 = 0;
  }
  *(long *)(param_4 + 0xa30) = lVar29;
  uVar8 = 8;
  if (uVar10 < 5) {
    uVar8 = 4;
  }
  if (uVar10 < 5) {
    lVar25 = 0;
  }
  *(long *)(param_4 + 0x7c0) = lVar25;
  *(long *)(param_4 + 0x960) = lVar1;
  FUN_7103778430(**(long **)(param_4 + 0xf0) + 8,"setting_%d",(ulong)uVar8,param_7,param_8,param_9,
                 param_10,param_11);
  puVar30 = (uint *)(param_4 + 0x120);
  do {
    uVar24 = *puVar30;
    puVar27 = &DAT_7105339830;
    if (uVar24 < 10) {
      puVar27 = (undefined8 *)(&DAT_7105339860)[(int)uVar24];
    }
    lVar29 = puVar27[2];
    if ((*(char *)(lVar29 + 0xb8) == '\0') ||
       ((*(int *)(lVar29 + 0x9c) == 2 &&
        ((*(char *)(lVar29 + 0xbc) == '\0' || (*(char *)(lVar29 + 0xbd) == '\0')))))) {
      if (((*(long *)(param_4 + 0x480) != 0) &&
          (puVar28 = (uint *)(*(long *)(param_4 + 0x480) + 0x68), *puVar28 == uVar24)) ||
         ((((((*(long *)(param_4 + 0x550) != 0 &&
              (puVar28 = (uint *)(*(long *)(param_4 + 0x550) + 0x68), *puVar28 == uVar24)) ||
             ((*(long *)(param_4 + 0x620) != 0 &&
              (puVar28 = (uint *)(*(long *)(param_4 + 0x620) + 0x68), *puVar28 == uVar24)))) ||
            ((*(long *)(param_4 + 0x6f0) != 0 &&
             (puVar28 = (uint *)(*(long *)(param_4 + 0x6f0) + 0x68), *puVar28 == uVar24)))) ||
           ((*(long *)(param_4 + 0x7c0) != 0 &&
            (puVar28 = (uint *)(*(long *)(param_4 + 0x7c0) + 0x68), *puVar28 == uVar24)))) ||
          ((((*(long *)(param_4 + 0x890) != 0 &&
             (puVar28 = (uint *)(*(long *)(param_4 + 0x890) + 0x68), *puVar28 == uVar24)) ||
            ((*(long *)(param_4 + 0x960) != 0 &&
             (puVar28 = (uint *)(*(long *)(param_4 + 0x960) + 0x68), *puVar28 == uVar24)))) ||
           ((*(long *)(param_4 + 0xa30) != 0 &&
            (puVar28 = (uint *)(*(long *)(param_4 + 0xa30) + 0x68), *puVar28 == uVar24)))))))) {
        *puVar28 = 0xffffffff;
      }
      uVar24 = 1;
LAB_7101ee1b68:
      puVar30[0xc] = uVar24;
      if ((*(int *)(param_4 + 0x100) == 0) && (uVar24 != 4)) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        uVar24 = *puVar30;
        if (DAT_71052c574c == uVar24) {
          iVar9 = 0;
LAB_7101ee1c34:
          if (DAT_71052c51b0 != 0x20) {
            if (*(long *)(param_4 + 0x108) != *(long *)(param_4 + 0x110)) {
              bVar7 = false;
              lVar29 = *(long *)(param_4 + 0x108);
              do {
                lVar25 = lVar29 + 0x70;
                bVar6 = *(int *)(lVar29 + 0x58) == iVar9;
                bVar7 = (bool)(bVar7 | bVar6);
                lVar29 = lVar25;
              } while (!bVar6 && *(long *)(param_4 + 0x110) != lVar25);
              if (bVar7) goto LAB_7101ee1c78;
            }
            puVar30[0xc] = 0;
          }
        }
        else {
          if (DAT_71052c59ac == uVar24) {
            iVar9 = 1;
            goto LAB_7101ee1c34;
          }
          if (DAT_71052c5c0c == uVar24) {
            iVar9 = 2;
            goto LAB_7101ee1c34;
          }
          if (DAT_71052c5e6c == uVar24) {
            iVar9 = 3;
            goto LAB_7101ee1c34;
          }
          if (DAT_71052c60cc == uVar24) {
            iVar9 = 4;
            goto LAB_7101ee1c34;
          }
          iVar9 = 5;
          if (DAT_71052c632c == uVar24) goto LAB_7101ee1c34;
          if (DAT_71052c658c == uVar24) {
            iVar9 = 6;
            goto LAB_7101ee1c34;
          }
          if (DAT_71052c67ec == uVar24) {
            iVar9 = 7;
            goto LAB_7101ee1c34;
          }
        }
LAB_7101ee1c78:
        if ((((DAT_71052c51b0 & 0xfe) == 2) && (DAT_7105328e18 != (long *)0x0)) &&
           (puVar30[0xc] != 0)) {
          if (uVar24 == *(uint *)(*DAT_7105328e18 + 0x1d8)) {
            uVar10 = 0;
          }
          else {
            if (uVar24 != *(uint *)(*DAT_7105328e18 + 0x390)) goto LAB_7101ee1ce8;
            uVar10 = 1;
          }
          uVar12 = (*(long *)(param_4 + 0x110) - *(long *)(param_4 + 0x108) >> 4) *
                   0x6db6db6db6db6db7;
          if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*(int *)(*(long *)(param_4 + 0x108) + uVar10 * 0x70) != 0) {
            puVar30[0xc] = 0;
          }
        }
      }
    }
    else {
      if (((((*(long *)(param_4 + 0x480) == 0) ||
            (*(uint *)(*(long *)(param_4 + 0x480) + 0x68) != uVar24)) &&
           ((*(long *)(param_4 + 0x550) == 0 ||
            (*(uint *)(*(long *)(param_4 + 0x550) + 0x68) != uVar24)))) &&
          ((((*(long *)(param_4 + 0x620) == 0 ||
             (*(uint *)(*(long *)(param_4 + 0x620) + 0x68) != uVar24)) &&
            ((*(long *)(param_4 + 0x6f0) == 0 ||
             (*(uint *)(*(long *)(param_4 + 0x6f0) + 0x68) != uVar24)))) &&
           ((((*(long *)(param_4 + 0x7c0) == 0 ||
              (*(uint *)(*(long *)(param_4 + 0x7c0) + 0x68) != uVar24)) &&
             ((*(long *)(param_4 + 0x890) == 0 ||
              (*(uint *)(*(long *)(param_4 + 0x890) + 0x68) != uVar24)))) &&
            ((*(long *)(param_4 + 0x960) == 0 ||
             (*(uint *)(*(long *)(param_4 + 0x960) + 0x68) != uVar24)))))))) &&
         ((*(long *)(param_4 + 0xa30) == 0 ||
          (*(uint *)(*(long *)(param_4 + 0xa30) + 0x68) != uVar24)))) {
        uVar24 = 2;
        goto LAB_7101ee1b68;
      }
      puVar30[0xc] = 4;
    }
LAB_7101ee1ce8:
    uVar23 = 5;
    puVar22 = &DAT_71052c6000;
    puVar21 = &DAT_71052c6000;
    pppplVar20 = (long ****)&DAT_71052c5000;
    ppppbVar19 = (byte ****)&DAT_71052c5000;
    puVar30[0x14] = 0;
    puVar30[0x16] = 0;
    puVar30[0x17] = 0;
    puVar30[0x12] = 0;
    puVar30[0x13] = 0;
    *(ulong *)(puVar30 + 0x10) =
         CONCAT44(0xc3200000,((float)((int)(*puVar30 + 1) % 9) + -4.0) * 160.0 + 0.0);
    puVar30 = puVar30 + 0x18;
  } while (puVar30 != (uint *)(param_4 + 0x480));
  FUN_7101ee47d0(param_4,0x70,(long ****)&DAT_71052c5000,(byte ****)&DAT_71052c5000,
                 (long ****)&DAT_71052c5000,&DAT_71052c6000,&DAT_71052c6000,5);
  plVar11 = (long *)(param_4 + 0x480);
  FUN_7103778430(param_4 + 0x488,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x488,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x498,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x4b8,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_00,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x480);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0x548) = bVar7;
  plVar11 = (long *)(param_4 + 0x550);
  *(undefined1 *)(param_4 + 0x549) = 0;
  FUN_7103778430(param_4 + 0x558,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x558,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x568,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x588,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_01,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_02,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x550);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0x618) = bVar7;
  plVar11 = (long *)(param_4 + 0x620);
  *(undefined1 *)(param_4 + 0x619) = 0;
  FUN_7103778430(param_4 + 0x628,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x628,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x638,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x658,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_03,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_04,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x620);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0x6e8) = bVar7;
  plVar11 = (long *)(param_4 + 0x6f0);
  *(undefined1 *)(param_4 + 0x6e9) = 0;
  FUN_7103778430(param_4 + 0x6f8,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x6f8,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x708,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x728,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_05,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_06,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x6f0);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0x7b8) = bVar7;
  plVar11 = (long *)(param_4 + 0x7c0);
  *(undefined1 *)(param_4 + 0x7b9) = 0;
  FUN_7103778430(param_4 + 0x7c8,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x7c8,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x7d8,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x7f8,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_07,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_08,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x7c0);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0x888) = bVar7;
  plVar11 = (long *)(param_4 + 0x890);
  *(undefined1 *)(param_4 + 0x889) = 0;
  FUN_7103778430(param_4 + 0x898,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x898,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x8a8,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x8c8,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_09,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_10,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x890);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0x958) = bVar7;
  plVar11 = (long *)(param_4 + 0x960);
  *(undefined1 *)(param_4 + 0x959) = 0;
  FUN_7103778430(param_4 + 0x968,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0x968,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0x978,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  pppplVar17 = (long ****)(ulong)uVar8;
  FUN_7103778430(param_4 + 0x998,"set_%d",pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_12,pppplVar17,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0x960);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0xa28) = bVar7;
  plVar11 = (long *)(param_4 + 0xa30);
  *(undefined1 *)(param_4 + 0xa29) = 0;
  FUN_7103778430(param_4 + 0xa38,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  FUN_7103778430(param_4 + 0xa38,"name_con_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,
                 uVar23);
  FUN_7103778430(param_4 + 0xa48,"set_%d",(ulong)uVar8,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23)
  ;
  ppuVar18 = (undefined **)(ulong)uVar8;
  FUN_7103778430(param_4 + 0xa68,"set_%d",ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5900(plVar11,extraout_x1_13,ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee59f0(param_4,plVar11,(long ****)ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7101ee5c90(plVar11,extraout_x1_14,ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  piVar26 = *(int **)(param_4 + 0xa30);
  bVar7 = false;
  if (piVar26 != (int *)0x0) {
    if ((char)piVar26[0x1b] == '\0') {
      bVar7 = false;
    }
    else {
      bVar7 = *piVar26 == 0;
    }
  }
  *(bool *)(param_4 + 0xaf8) = bVar7;
  *(undefined1 *)(param_4 + 0xaf9) = 0;
  FUN_7101ee42f0(param_4,extraout_x1_15,(ulong)ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22,uVar23
                );
  *(undefined4 *)(param_4 + 0xb40) = 0;
  FUN_7103776640(&local_10a8,**(long **)(param_4 + 0xf0) + 8,(byte ****)"set_btn_decide",ppuVar18,
                 ppppbVar19,pppplVar20,puVar21,puVar22,uVar23);
  FUN_7103776910(&local_10b8,(long)&local_10a8,(long ****)"set_txt_guide",ppuVar18,ppppbVar19,
                 pppplVar20,puVar21,puVar22,uVar23);
  if (*(int *)(param_4 + 0x100) == 1) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
      FUN_7101764000();
      ppuVar18 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      piVar26 = (int *)((long)&DAT_7105307b68 + 4);
    }
    else {
      piVar26 = (int *)((long)&DAT_7105307b68 + 4);
    }
LAB_7101ee2288:
    iVar9 = *piVar26;
    FUN_7103776390(&local_10c8,&local_10a8,(long ****)ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22
                   ,uVar23);
    pcVar15 = "keyhelp_gc";
    if (iVar9 != 6) {
      pcVar15 = "keyhelp_normal";
    }
  }
  else {
    if ((((*(char *)(param_4 + 0x104) != '\0') && (DAT_71052c3420 != 0)) &&
        ((lVar29 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar29 + 0xb08) != 0 &&
         (uVar10 = (**(code **)(*(long *)(lVar29 + 0xb00) + 0x10))(), (uVar10 & 1) != 0)))) &&
       (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
        (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
      uVar8 = *(uint *)(*(long *)(**(long **)(lVar29 + 0xb08) + 0x1b8) + 0x1d0);
      if ((uVar8 != 0xffffffff) &&
         ((((puVar27 = &DAT_7105339830, 9 < uVar8 || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
           (puVar27 = (undefined8 *)(&DAT_7105339860)[(int)uVar8], puVar27 != (undefined8 *)0x0)) &&
          (uVar8 = *(int *)(puVar27[2] + 0x9c) - 1, uVar8 < 7)))) {
        piVar26 = (int *)(&DAT_7104753de0 + (long)(int)uVar8 * 4);
        goto LAB_7101ee2288;
      }
    }
    FUN_7103776390(&local_10c8,&local_10a8,(long ****)ppuVar18,ppppbVar19,pppplVar20,puVar21,puVar22
                   ,uVar23);
    iVar9 = 1;
    pcVar15 = "keyhelp_normal";
  }
  FUN_7103778300(0x3f800000,local_10c0,(long)pcVar15);
  uVar10 = local_10c0;
  local_10c8 = &PTR_FUN_710523d988;
  local_10c0 = 0;
  if (uVar10 != 0) {
    uVar12 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar10);
  }
  uVar10 = local_10b0;
  plVar11 = *(long **)(local_10b0 + 0x10);
  if (plVar11 != (long *)0x0) {
    pbVar16 = (byte *)plVar11[0x1c];
    *(int *)((long)plVar11 + 0x25c) = iVar9;
    if (((pbVar16 != (byte *)0x0) && (*pbVar16 != 0x23)) && (*pbVar16 != 0x40)) {
      puVar13 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar16);
      local_88[0] = *(int *)((long)plVar11 + 0x25c);
      memset(&local_1098,0,0x1000);
      uVar8 = FUN_71037ae170((long)&local_1098,puVar13,local_88);
      ppppbVar19 = (byte ****)0x0;
      FUN_71037a2270(plVar11,(ushort *)&local_1098,uVar8,0);
    }
  }
  (**(code **)(**(long **)(param_4 + 0xf8) + 0x60))(*(long **)(param_4 + 0xf8),0);
  FUN_710376b960(*(long *)(param_4 + 0xf8));
  *(undefined4 *)(*(long *)(*(long *)(param_4 + 0xb28) + 8) + 0x18) = 0x40000;
  FUN_7103778760(*(long *)(**(long **)(param_4 + 0xf0) + 0x10),0x71043bede9);
  puVar2 = &DAT_71043cd335;
  if (*(char *)(param_4 + 0x105) != '\0') {
    puVar2 = &DAT_710429257e;
  }
  FUN_7103778430(**(long **)(param_4 + 0xf0) + 8,"alert_%s",puVar2,ppppbVar19,pppplVar20,puVar21,
                 puVar22,uVar23);
  local_10b8 = &PTR_FUN_710523d9a8;
  local_10b0 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  uVar10 = local_10a0;
  local_10a8 = &PTR_FUN_710523d988;
  local_10a0 = 0;
  if (uVar10 != 0) {
    uVar12 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar10);
  }
  lVar25 = *(long *)(DAT_710532f730 + 8);
  lVar29 = 0;
  *(undefined8 *)(**(long **)(param_4 + 0xe8) + 0x70) = 0x1bc5f7241c;
  do {
    piVar26 = *(int **)(param_4 + 0x480 + lVar29);
    if (piVar26 != (int *)0x0) {
      uVar10 = *(ulong *)(piVar26 + 2);
      bVar7 = FUN_7103265e70(lVar25 + 0x160,uVar10);
      if (bVar7) {
        if (*piVar26 == 2) {
          uVar8 = 0;
        }
        else {
          if (*(int *)(param_4 + 0x100) != 0) {
            iVar9 = 1;
            uVar8 = 1;
            goto LAB_7101ee2600;
          }
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          uVar8 = (uint)(DAT_71052c51e9 != '\x03');
        }
        iVar9 = 1;
      }
      else {
        uVar8 = piVar26[4];
        iVar9 = 3;
        if ((uVar10 & 0xff0000ffffffffff) != 0xc100001389102cbf) {
          iVar9 = 1;
        }
      }
LAB_7101ee2600:
      uVar12 = FUN_7103263f80(*(long *)(lVar25 + 0x168),uVar10);
      plVar11 = *(long **)(param_4 + 0xe8);
      local_1098 = (undefined **)FUN_7103238a70(uVar10,(ulong)uVar8,iVar9);
      if (((ulong)local_1098 & 0xffffffffff) != 0) {
        lVar14 = *plVar11;
        FUN_710323c4e0(lVar14,(ulong *)&local_1098,(long *********)(long)*(int *)(lVar14 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar14 + 0x68),pppplVar20,puVar21,puVar22,uVar23)
        ;
      }
      plVar11 = *(long **)(param_4 + 0xe8);
      local_1098 = (undefined **)FUN_7103238d60(uVar12,0x11);
      if (((ulong)local_1098 & 0xffffffffff) != 0) {
        lVar14 = *plVar11;
        FUN_710323c4e0(lVar14,(ulong *)&local_1098,(long *********)(long)*(int *)(lVar14 + 0x70),
                       (byte ****)(ulong)*(uint *)(lVar14 + 0x68),pppplVar20,puVar21,puVar22,uVar23)
        ;
      }
    }
    lVar29 = lVar29 + 0xd0;
    if (lVar29 == 0x680) {
      *(undefined8 *)(**(long **)(param_4 + 0xe8) + 0x70) = 0;
      return;
    }
  } while( true );
}

