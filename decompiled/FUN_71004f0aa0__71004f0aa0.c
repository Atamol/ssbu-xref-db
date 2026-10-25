// addr:      71004f0aa0
// offset:    0x4f0aa0
// name:      FUN_71004f0aa0
// mangled:   
// signature: undefined __cdecl FUN_71004f0aa0(undefined8 * param_1, undefined8 param_2, undefined * * param_3, undefined * * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71004f0aa0(undefined8 *param_1,undefined8 param_2,undefined **param_3,undefined ***param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  byte bVar17;
  uint uVar18;
  long *plVar19;
  undefined8 uVar20;
  char *pcVar21;
  long lVar22;
  code *pcVar23;
  uint *puVar24;
  long lVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  int *piVar29;
  int *piVar30;
  bool bVar31;
  undefined4 uVar32;
  long *plVar33;
  float fVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined4 local_94;
  undefined **local_90;
  int *piStack_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined ***local_70;
  
  piVar29 = (int *)*param_1;
  if (((DAT_71052b92e0 & 1) == 0) && (iVar35 = __cxa_guard_acquire(&DAT_71052b92e0), iVar35 != 0)) {
    __cxa_guard_release(&DAT_71052b92e0);
  }
  iVar35 = (int)DAT_71052b92e8;
  if (((DAT_71053144d8 & 1) == 0) && (iVar36 = __cxa_guard_acquire(&DAT_71053144d8), iVar36 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  fVar40 = DAT_71052c5190;
  if (iVar35 == 0) {
    piVar30 = *(int **)(piVar29 + 0x290);
    if (piVar29 + 0x28e != piVar30) {
      fVar49 = DAT_71052c5190 * 0.2;
      fVar50 = DAT_71052c5190 * 0.1;
      do {
        FUN_7100519ee0((long)piVar30);
        if (*(char *)((long)piVar30 + 0x1d) != '\0') {
          fVar34 = (float)piVar30[0x2b];
          fVar39 = (float)piVar30[0x2c];
          fVar42 = (float)piVar30[0x27];
          fVar43 = (float)piVar30[0x28];
          fVar46 = (float)piVar30[0x2d];
          fVar47 = (float)piVar30[0x2e];
          fVar51 = (float)piVar30[0x29];
          fVar53 = (float)piVar30[0x2a];
          fVar44 = fVar50 * (fVar34 - fVar42);
          if (ABS(fVar34 - fVar42) <= fVar49) {
            fVar44 = fVar34 - fVar42;
          }
          fVar52 = fVar50 * (fVar39 - fVar43);
          if (ABS(fVar39 - fVar43) <= fVar49) {
            fVar52 = fVar39 - fVar43;
          }
          fVar54 = fVar50 * (fVar46 - fVar51);
          if (ABS(fVar46 - fVar51) <= fVar49) {
            fVar54 = fVar46 - fVar51;
          }
          fVar55 = fVar50 * (fVar47 - fVar53);
          if (ABS(fVar47 - fVar53) <= fVar49) {
            fVar55 = fVar47 - fVar53;
          }
          piVar30[0x2f] = (int)(fVar34 - (fVar42 + fVar44));
          piVar30[0x30] = (int)(fVar39 - (fVar43 + fVar52));
          piVar30[0x27] = (int)(fVar42 + fVar44);
          piVar30[0x28] = (int)(fVar43 + fVar52);
          piVar30[0x29] = (int)(fVar51 + fVar54);
          piVar30[0x2a] = (int)(fVar53 + fVar55);
          piVar30[0x31] = (int)(fVar46 - (fVar51 + fVar54));
          piVar30[0x32] = (int)(fVar47 - (fVar53 + fVar55));
        }
        piVar30 = *(int **)(piVar30 + 2);
      } while (piVar29 + 0x28e != piVar30);
    }
  }
  FUN_7100515e10(1.0,(float *)(piVar29 + 0xac));
  if ((((piVar29[1] == 0xf) && (lVar22 = *(long *)(piVar29 + 0x4c), lVar22 != 0)) &&
      (*(char *)(lVar22 + 0x150) != '\0')) &&
     ((*(char *)(lVar22 + 0x78) == '\0' ||
      ((*(char *)(lVar22 + 0x13c) == '\0' && (1 < *(int *)(lVar22 + 0x140))))))) {
    param_4 = &local_90;
    param_3 = (undefined **)0x0;
    param_5 = 0;
    local_90 = &PTR_FUN_7104f74ca0;
    local_70 = &local_90;
    FUN_71004ee480(piVar29,*(uint *)(lVar22 + 0x160),0,(long *)param_4,0);
    if (&local_90 == local_70) {
      pcVar23 = (code *)(*local_70)[4];
    }
    else {
      if (local_70 == (undefined ***)0x0) goto LAB_71004f0c68;
      pcVar23 = (code *)(*local_70)[5];
    }
    (*pcVar23)();
  }
LAB_71004f0c68:
  if (*(long *)(piVar29 + 6) == 0) {
    plVar19 = (long *)0x0;
LAB_71004f0c8c:
    plVar33 = (long *)0x0;
    if (iVar35 == 0) goto LAB_71004f0cb4;
LAB_71004f0c94:
    puVar27 = (undefined8 *)(**(code **)(*plVar33 + 0x68))(plVar33);
    uVar26 = (**(code **)*puVar27)();
    if ((uVar26 & 1) != 0) goto LAB_71004f0cb4;
  }
  else {
    plVar19 = (long *)std::__shared_weak_count::lock();
    if (plVar19 == (long *)0x0) goto LAB_71004f0c8c;
    plVar33 = *(long **)(piVar29 + 4);
    if (iVar35 != 0) goto LAB_71004f0c94;
LAB_71004f0cb4:
    (**(code **)(*plVar33 + 0x30))(fVar40,plVar33);
  }
  (**(code **)(*plVar33 + 0x38))(plVar33);
  if ((char)piVar29[0x325] == '\0') goto LAB_71004f0d50;
  lVar22 = *(long *)(DAT_710532f820 + 8);
  uVar20 = FUN_7101eefe30(*(long *)(*(long *)(lVar22 + 0x110) + 0x80));
  if ((*(int *)(lVar22 + 0xf8) != 0 || (((uint)uVar20 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar22 + 0x142) != '\0') goto LAB_71004f0d50;
  lVar22 = *(long *)(DAT_710532f828 + 8);
  uVar20 = FUN_7101eefe30(*(long *)(*(long *)(lVar22 + 0x110) + 0x80));
  if ((*(int *)(lVar22 + 0xf8) != 0 || (((uint)uVar20 ^ 0xffffffff) & 1) != 0) ||
      *(char *)(lVar22 + 0x142) != '\0') goto LAB_71004f0d50;
  uVar18 = piVar29[1];
  uVar1 = piVar29[0x327];
  if (uVar18 < 0xe) {
    uVar28 = 1;
    if ((1 << (ulong)(uVar18 & 0x1f) & 0x3204U) == 0) {
      if ((1 << (ulong)(uVar18 & 0x1f) & 0x12U) == 0) goto LAB_71004f0f98;
      uVar28 = 0;
      if (*(long *)(piVar29 + 0xc) != 0) {
        uVar28 = (uint)*(byte *)(*(long *)(piVar29 + 0xc) + 0x124);
      }
    }
  }
  else {
LAB_71004f0f98:
    uVar28 = 0;
  }
  if ((uVar28 & (uVar1 >> 0x1f ^ 1)) == 0) {
    bVar31 = false;
    if (-1 < (int)uVar1) goto LAB_71004f0fc8;
LAB_71004f1034:
    local_7f = false;
  }
  else {
    bVar31 = piVar29[0x322] < 1;
    if ((int)uVar1 < 0) goto LAB_71004f1034;
LAB_71004f0fc8:
    local_7f = false;
    if (uVar18 < 0xe) {
      uVar1 = 1 << (ulong)(uVar18 & 0x1f);
      if ((uVar1 & 0x3204) == 0) {
        if ((uVar1 & 0x12) == 0) {
          if (uVar18 != 0xb) goto LAB_71004f1038;
        }
        else if ((*(long *)(piVar29 + 0xc) == 0) ||
                (*(char *)(*(long *)(piVar29 + 0xc) + 0x124) == '\0')) goto LAB_71004f1034;
      }
      if (((DAT_71052b92e0 & 1) == 0) &&
         (iVar35 = __cxa_guard_acquire(&DAT_71052b92e0), iVar35 != 0)) {
        __cxa_guard_release(&DAT_71052b92e0);
      }
      if (((char)DAT_71052b92f0 == '\0') || (*(char *)(*(long *)(piVar29 + 0x294) + 0x1dd) != '\0'))
      goto LAB_71004f1034;
      local_7f = piVar29[0x322] < 1;
    }
  }
LAB_71004f1038:
  local_90 = (undefined **)(piVar29 + 0x3f0);
  piStack_88 = piVar29 + 0x2d4;
  lVar22 = *(long *)(piVar29 + 0x294);
  puVar24 = *(uint **)(lVar22 + 0x1b8);
  if ((*(long *)(puVar24 + 2) == 0) ||
     (lVar25 = *(long *)(*(long *)(puVar24 + 2) + 0x10), *(char *)(lVar25 + 0xb8) == '\0')) {
LAB_71004f10d0:
    uVar26 = 0;
    do {
      puVar27 = &DAT_7105339830;
      if (((*(char *)(DAT_71053398b0 + 8) == '\0') ||
          (puVar27 = (undefined8 *)(&DAT_7105339860)[uVar26],
          (undefined8 *)(&DAT_7105339860)[uVar26] != (undefined8 *)0x0)) &&
         (lVar25 = puVar27[2], *(char *)(lVar25 + 0xb8) != '\0')) {
        if (*(int *)(lVar25 + 8) == 0) {
          iVar35 = -(uint)((float)*(undefined8 *)(lVar25 + 0x10) == 0.0);
          iVar36 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) == 0.0);
          iVar37 = -(uint)((float)*(undefined8 *)(lVar25 + 0x18) == 0.0);
          iVar38 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) == 0.0);
          auVar8._4_4_ = iVar36;
          auVar8._0_4_ = iVar35;
          auVar8._8_4_ = iVar37;
          auVar8._12_4_ = iVar38;
          auVar9._4_4_ = iVar36;
          auVar9._0_4_ = iVar35;
          auVar9._8_4_ = iVar37;
          auVar9._12_4_ = iVar38;
          auVar63 = NEON_ext(auVar8,auVar9,8,1);
          uVar14 = CONCAT44(iVar36,iVar35) & auVar63._0_8_;
          if (((uint)uVar14 & (uint)(uVar14 >> 0x20)) != 0) {
            iVar35 = -(uint)((float)*(undefined8 *)(lVar25 + 0x20) == 0.0);
            iVar36 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x20) >> 0x20) == 0.0);
            iVar37 = -(uint)((float)*(undefined8 *)(lVar25 + 0x28) == 0.0);
            iVar38 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x28) >> 0x20) == 0.0);
            auVar10._4_4_ = iVar36;
            auVar10._0_4_ = iVar35;
            auVar10._8_4_ = iVar37;
            auVar10._12_4_ = iVar38;
            auVar11._4_4_ = iVar36;
            auVar11._0_4_ = iVar35;
            auVar11._8_4_ = iVar37;
            auVar11._12_4_ = iVar38;
            auVar63 = NEON_ext(auVar10,auVar11,8,1);
            uVar14 = CONCAT44(iVar36,iVar35) & auVar63._0_8_;
            if (((uint)uVar14 & (uint)(uVar14 >> 0x20)) != 0) {
              iVar35 = -(uint)((float)*(undefined8 *)(lVar25 + 0x30) == 0.0);
              iVar36 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20) == 0.0);
              iVar37 = -(uint)((float)*(undefined8 *)(lVar25 + 0x38) == 0.0);
              iVar38 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x38) >> 0x20) == 0.0);
              auVar12._4_4_ = iVar36;
              auVar12._0_4_ = iVar35;
              auVar12._8_4_ = iVar37;
              auVar12._12_4_ = iVar38;
              auVar13._4_4_ = iVar36;
              auVar13._0_4_ = iVar35;
              auVar13._8_4_ = iVar37;
              auVar13._12_4_ = iVar38;
              auVar63 = NEON_ext(auVar12,auVar13,8,1);
              uVar14 = CONCAT44(iVar36,iVar35) & auVar63._0_8_;
              if (((uint)uVar14 & (uint)(uVar14 >> 0x20)) != 0) goto LAB_71004f1178;
            }
          }
        }
        *puVar24 = (uint)uVar26;
        *(undefined8 **)(puVar24 + 2) = puVar27;
        puVar24[4] = *(uint *)(lVar25 + 0x9c);
        puVar24 = *(uint **)(lVar22 + 0x1b8);
        break;
      }
LAB_71004f1178:
      uVar26 = uVar26 + 1;
    } while (uVar26 < 10);
  }
  else if (*(int *)(lVar25 + 8) == 0) {
    iVar35 = -(uint)((float)*(undefined8 *)(lVar25 + 0x10) == 0.0);
    iVar36 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x10) >> 0x20) == 0.0);
    iVar37 = -(uint)((float)*(undefined8 *)(lVar25 + 0x18) == 0.0);
    iVar38 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x18) >> 0x20) == 0.0);
    auVar63._4_4_ = iVar36;
    auVar63._0_4_ = iVar35;
    auVar63._8_4_ = iVar37;
    auVar63._12_4_ = iVar38;
    auVar3._4_4_ = iVar36;
    auVar3._0_4_ = iVar35;
    auVar3._8_4_ = iVar37;
    auVar3._12_4_ = iVar38;
    auVar63 = NEON_ext(auVar63,auVar3,8,1);
    uVar26 = CONCAT44(iVar36,iVar35) & auVar63._0_8_;
    if (((uint)uVar26 & (uint)(uVar26 >> 0x20)) != 0) {
      iVar35 = -(uint)((float)*(undefined8 *)(lVar25 + 0x20) == 0.0);
      iVar36 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x20) >> 0x20) == 0.0);
      iVar37 = -(uint)((float)*(undefined8 *)(lVar25 + 0x28) == 0.0);
      iVar38 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x28) >> 0x20) == 0.0);
      auVar4._4_4_ = iVar36;
      auVar4._0_4_ = iVar35;
      auVar4._8_4_ = iVar37;
      auVar4._12_4_ = iVar38;
      auVar5._4_4_ = iVar36;
      auVar5._0_4_ = iVar35;
      auVar5._8_4_ = iVar37;
      auVar5._12_4_ = iVar38;
      auVar63 = NEON_ext(auVar4,auVar5,8,1);
      uVar26 = CONCAT44(iVar36,iVar35) & auVar63._0_8_;
      if (((uint)uVar26 & (uint)(uVar26 >> 0x20)) != 0) {
        iVar35 = -(uint)((float)*(undefined8 *)(lVar25 + 0x30) == 0.0);
        iVar36 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20) == 0.0);
        iVar37 = -(uint)((float)*(undefined8 *)(lVar25 + 0x38) == 0.0);
        iVar38 = -(uint)((float)((ulong)*(undefined8 *)(lVar25 + 0x38) >> 0x20) == 0.0);
        auVar6._4_4_ = iVar36;
        auVar6._0_4_ = iVar35;
        auVar6._8_4_ = iVar37;
        auVar6._12_4_ = iVar38;
        auVar7._4_4_ = iVar36;
        auVar7._0_4_ = iVar35;
        auVar7._8_4_ = iVar37;
        auVar7._12_4_ = iVar38;
        auVar63 = NEON_ext(auVar6,auVar7,8,1);
        uVar26 = CONCAT44(iVar36,iVar35) & auVar63._0_8_;
        if (((uint)uVar26 & (uint)(uVar26 >> 0x20)) != 0) goto LAB_71004f10d0;
      }
    }
  }
  uVar18 = *puVar24;
  local_80 = bVar31;
  if (*(uint *)(*(long *)(lVar22 + 0x1a8) + 0x130) != uVar18) {
    *(uint *)(*(long *)(lVar22 + 0x1a8) + 0x130) = uVar18;
    puVar27 = &DAT_7105339830;
    if (((((9 < uVar18) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
         (puVar27 = (undefined8 *)(&DAT_7105339860)[(int)uVar18], puVar27 != (undefined8 *)0x0)) &&
        ((*(uint *)(puVar27[2] + 0x9c) < 8 &&
         ((1 << (ulong)(*(uint *)(puVar27[2] + 0x9c) & 0x1f) & 0x98U) != 0)))) &&
       (lVar25 = *(long *)(lVar22 + 0x1c8), *(char *)(lVar25 + 0x2d0) != '\0')) {
      *(undefined1 *)(lVar25 + 0x104) = 0;
      *(undefined1 *)(lVar25 + 0x2d0) = 0;
      *(undefined8 *)(lVar25 + 0x31c) = 0;
      *(undefined1 *)(lVar25 + 0x324) = 0;
      *(undefined4 *)(lVar25 + 0x338) = 0;
      *(undefined1 *)(lVar25 + 0x334) = 0;
      if (0x12 < *(uint *)(lVar25 + 0x9c)) goto LAB_71004f1a98;
      *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar25 + 0x9c) * 4 + 0x50) = 0;
    }
    if (*(char *)(*(long *)(lVar22 + 0x1c8) + 0x2d0) != '\0') {
      *(undefined1 *)(*(long *)(lVar22 + 0x1c8) + 0x2d2) = 1;
    }
  }
  if (0x12 < *(uint *)(lVar22 + 0x194)) {
LAB_71004f1a98:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar18 = *(uint *)(lVar22 + (long)(int)*(uint *)(lVar22 + 0x194) * 4 + 0x148);
  if (*(uint *)(lVar22 + 0x198) != uVar18) {
    *(uint *)(lVar22 + 0x1a0) = *(uint *)(lVar22 + 0x198);
    *(uint *)(lVar22 + 0x198) = uVar18;
    if (5 < uVar18) goto LAB_71004f1a98;
    lVar25 = lVar22 + (long)(int)uVar18 * 0x10;
    uVar20 = *(undefined8 *)(lVar25 + 0xf0);
    *(undefined8 *)(lVar22 + 200) = *(undefined8 *)(lVar25 + 0xe8);
    *(undefined8 *)(lVar22 + 0xd0) = uVar20;
    pcVar23 = *(code **)(lVar22 + 0xd8);
    uVar26 = *(ulong *)(lVar22 + 0xe0) & 1;
    if (uVar26 != 0 || pcVar23 != (code *)0x0) {
      if (uVar26 != 0) {
        pcVar23 = *(code **)(pcVar23 +
                            *(long *)(*(long *)(lVar22 + 0xc0) +
                                     ((long)*(ulong *)(lVar22 + 0xe0) >> 1)));
      }
      (*pcVar23)();
    }
    *(undefined4 *)(lVar22 + 0x19c) = 0;
  }
  if (*(char *)(lVar22 + 0x1a4) != '\0') {
    pcVar23 = *(code **)(lVar22 + 0xd8);
    uVar26 = *(ulong *)(lVar22 + 0xe0) & 1;
    if (uVar26 != 0 || pcVar23 != (code *)0x0) {
      if (uVar26 != 0) {
        pcVar23 = *(code **)(pcVar23 +
                            *(long *)(*(long *)(lVar22 + 0xc0) +
                                     ((long)*(ulong *)(lVar22 + 0xe0) >> 1)));
      }
      (*pcVar23)();
    }
    *(undefined4 *)(lVar22 + 0x19c) = 0;
    *(undefined1 *)(lVar22 + 0x1a4) = 0;
  }
  if (*(long *)(lVar22 + 0xc0) != 0) {
    pcVar23 = *(code **)(lVar22 + 200);
    uVar26 = *(ulong *)(lVar22 + 0xd0) & 1;
    if (uVar26 != 0 || pcVar23 != (code *)0x0) {
      plVar33 = (long *)(*(long *)(lVar22 + 0xc0) + ((long)*(ulong *)(lVar22 + 0xd0) >> 1));
      if (uVar26 != 0) {
        pcVar23 = *(code **)(pcVar23 + *plVar33);
      }
      (*pcVar23)(plVar33,&local_90);
    }
  }
  *(int *)(lVar22 + 0x19c) = *(int *)(lVar22 + 0x19c) + 1;
  if (0x12 < *(uint *)(lVar22 + 0xac)) goto LAB_71004f1a98;
  uVar18 = *(uint *)(lVar22 + (long)(int)*(uint *)(lVar22 + 0xac) * 4 + 0x60);
  if (*(uint *)(lVar22 + 0xb0) != uVar18) {
    *(uint *)(lVar22 + 0xb8) = *(uint *)(lVar22 + 0xb0);
    *(uint *)(lVar22 + 0xb0) = uVar18;
    if (2 < uVar18) goto LAB_71004f1a98;
    lVar25 = lVar22 + (long)(int)uVar18 * 0x10;
    uVar20 = *(undefined8 *)(lVar25 + 0x38);
    *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar25 + 0x30);
    *(undefined8 *)(lVar22 + 0x18) = uVar20;
    pcVar23 = *(code **)(lVar22 + 0x20);
    uVar26 = *(ulong *)(lVar22 + 0x28) & 1;
    if (uVar26 != 0 || pcVar23 != (code *)0x0) {
      if (uVar26 != 0) {
        pcVar23 = *(code **)(pcVar23 +
                            *(long *)(*(long *)(lVar22 + 8) + ((long)*(ulong *)(lVar22 + 0x28) >> 1)
                                     ));
      }
      (*pcVar23)();
    }
    *(undefined4 *)(lVar22 + 0xb4) = 0;
  }
  if (*(char *)(lVar22 + 0xbc) != '\0') {
    pcVar23 = *(code **)(lVar22 + 0x20);
    uVar26 = *(ulong *)(lVar22 + 0x28) & 1;
    if (uVar26 != 0 || pcVar23 != (code *)0x0) {
      if (uVar26 != 0) {
        pcVar23 = *(code **)(pcVar23 +
                            *(long *)(*(long *)(lVar22 + 8) + ((long)*(ulong *)(lVar22 + 0x28) >> 1)
                                     ));
      }
      (*pcVar23)();
    }
    *(undefined4 *)(lVar22 + 0xb4) = 0;
    *(undefined1 *)(lVar22 + 0xbc) = 0;
  }
  if (*(long *)(lVar22 + 8) != 0) {
    pcVar23 = *(code **)(lVar22 + 0x10);
    uVar26 = *(ulong *)(lVar22 + 0x18) & 1;
    if (uVar26 != 0 || pcVar23 != (code *)0x0) {
      if (uVar26 != 0) {
        pcVar23 = *(code **)(pcVar23 +
                            *(long *)(*(long *)(lVar22 + 8) + ((long)*(ulong *)(lVar22 + 0x18) >> 1)
                                     ));
      }
      (*pcVar23)();
    }
  }
  puVar27 = *(undefined8 **)(lVar22 + 0x1b0);
  *(int *)(lVar22 + 0xb4) = *(int *)(lVar22 + 0xb4) + 1;
  uVar18 = (**(code **)(*(long *)*puVar27 + 0x20))();
  if ((((DAT_71052c3420 != 0) &&
       (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) &&
      (uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))(), (uVar26 & 1) != 0)) &&
     (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
      (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
    FUN_71013be800(*(long *)(**(long **)(lVar22 + 0xb20) + 0x898),uVar18);
  }
  if (*(char *)(*lib::Singleton<lib::EffectManager>::instance_ + 0x194bd) == '\0') {
    iVar35 = (uint)(*(char *)(*lib::Singleton<lib::EffectManager>::instance_ + 0x194be) == '\0') <<
             1;
  }
  else {
    iVar35 = 1;
  }
  if (((DAT_71052c3420 != 0) &&
      (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) &&
     ((uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))(), (uVar26 & 1) != 0 &&
      ((((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
        (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')) &&
       (lVar22 = *(long *)(**(long **)(lVar22 + 0xb20) + 0x898), *(int *)(lVar22 + 0x214) != iVar35)
       ))))) {
    *(int *)(lVar22 + 0x214) = iVar35;
    FUN_7101b958e0(*(long *)(*(long *)(lVar22 + 0x10) + 0x80),iVar35,param_3,param_4,param_5,param_6
                   ,param_7,param_8);
  }
  lVar22 = *(long *)(DAT_71052c3360 + 0x18);
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != *(long *)(lVar22 + 8))) {
    if ((DAT_71052c3420 != 0) &&
       (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) {
      iVar35 = *(int *)(DAT_71052c3360 + 0x10);
      uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))();
      if (((uVar26 & 1) != 0) &&
         (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
          (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
        FUN_71013be5c0(*(long *)(**(long **)(lVar22 + 0xb20) + 0x898),iVar35,param_3,param_4,param_5
                       ,param_6,param_7,param_8);
      }
    }
    lVar22 = *(long *)(DAT_71052c3360 + 0x18);
    if ((((lVar22 != 0) && (*(long *)(lVar22 + 0x10) != *(long *)(lVar22 + 8))) &&
        (DAT_71052c3420 != 0)) &&
       (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) {
      iVar35 = *(int *)(DAT_71052c3360 + 0xc);
      uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))();
      if (((uVar26 & 1) != 0) &&
         (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
          (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
        FUN_71013be6e0(*(long *)(**(long **)(lVar22 + 0xb20) + 0x898),iVar35,param_3,param_4,param_5
                       ,param_6,param_7,param_8);
      }
    }
  }
  (**(code **)(*(long *)*puVar27 + 0x68))();
  bVar17 = (**(code **)(*(long *)*puVar27 + 0x80))();
  if (((DAT_71052c3420 != 0) &&
      (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) &&
     ((uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))(), (uVar26 & 1) != 0 &&
      (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
       (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))))) {
    lVar22 = *(long *)(**(long **)(lVar22 + 0xb20) + 0x898);
    if (*(byte *)(lVar22 + 0x224) != (bVar17 & 1)) {
      *(byte *)(lVar22 + 0x224) = bVar17 & 1;
      plVar33 = (long *)**(long **)(*(long *)(*(long *)(lVar22 + 0x10) + 0x80) + 0x418);
      if (plVar33 != (long *)0x0) {
        param_3 = (undefined **)0x0;
        (**(code **)(*plVar33 + 0x2f0))(plVar33,bVar17 & 1);
      }
    }
  }
  uVar32 = 2;
  uVar26 = (**(code **)(*(long *)*puVar27 + 0x88))((long *)*puVar27,2);
  if ((uVar26 & 1) == 0) {
    uVar32 = 4;
    uVar26 = (**(code **)(*(long *)*puVar27 + 0x88))((long *)*puVar27,4);
    if ((uVar26 & 1) != 0) goto LAB_71004f1788;
    uVar32 = 3;
    uVar26 = (**(code **)(*(long *)*puVar27 + 0x88))((long *)*puVar27,3);
    if ((uVar26 & 1) != 0) goto LAB_71004f1788;
    uVar32 = 1;
    uVar26 = (**(code **)(*(long *)*puVar27 + 0x88))((long *)*puVar27,1);
    if ((uVar26 & 1) != 0) goto LAB_71004f1788;
  }
  else {
LAB_71004f1788:
    if ((((DAT_71052c3420 != 0) &&
         (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) &&
        (uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))(), (uVar26 & 1) != 0)) &&
       (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
        (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
      FUN_7101b95a70(*(long *)(*(long *)(*(long *)(**(long **)(lVar22 + 0xb20) + 0x898) + 0x10) +
                              0x80),uVar32);
    }
  }
  uVar18 = (**(code **)(*(long *)*puVar27 + 0x58))();
  if (uVar18 < 3) {
    iVar35 = *(int *)(&DAT_710453b664 + (long)(int)uVar18 * 4);
  }
  else {
    iVar35 = 0;
  }
  if ((((DAT_71052c3420 != 0) &&
       (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) &&
      (uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))(), (uVar26 & 1) != 0)) &&
     ((((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
       (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')) &&
      (lVar22 = *(long *)(**(long **)(lVar22 + 0xb20) + 0x898), *(int *)(lVar22 + 0x218) != iVar35))
     )) {
    *(int *)(lVar22 + 0x218) = iVar35;
    lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + 0x80);
    if (iVar35 == 1) {
      pcVar21 = "mnu_replay_movie_camera_melee";
    }
    else if (iVar35 == 2) {
      pcVar21 = "mnu_replay_movie_camera_free";
    }
    else {
      if (iVar35 != 3) {
        plVar33 = *(long **)(*(long *)(lVar22 + 0x1a8) + 0x10);
        if (plVar33 != (long *)0x0) {
          local_94 = 0;
          FUN_71037a2270(plVar33,(ushort *)&local_94,0,0);
        }
        goto LAB_71004f190c;
      }
      pcVar21 = "mnu_replay_movie_camera_fighter";
    }
    FUN_710377a120(lVar22 + 0x1a0,pcVar21,param_3,param_4,param_5,param_6,param_7,param_8);
  }
LAB_71004f190c:
  uVar26 = (**(code **)(*(long *)*puVar27 + 0x38))();
  if ((uVar26 & 1) == 0) {
    bVar17 = 0;
  }
  else {
    bVar17 = (**(code **)(*(long *)*puVar27 + 0x30))();
    bVar17 = bVar17 ^ 1;
  }
  if (((DAT_71052c3420 != 0) &&
      (lVar22 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar22 + 0xb20) != 0)) &&
     ((uVar26 = (**(code **)(*(long *)(lVar22 + 0xb18) + 0x10))(), (uVar26 & 1) != 0 &&
      ((((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
        (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')) &&
       (lVar22 = *(long *)(**(long **)(lVar22 + 0xb20) + 0x898),
       *(byte *)(lVar22 + 0x225) != (bVar17 & 1))))))) {
    if ((bVar17 & 1) == 0) {
      *(undefined2 *)(lVar22 + 0x227) = 0x100;
    }
    else {
      bVar17 = *(byte *)(lVar22 + 0x226);
      *(byte *)(lVar22 + 0x227) = bVar17 ^ 1;
      *(byte *)(lVar22 + 0x228) = bVar17;
      if (bVar17 == 0) goto LAB_71004f0d50;
    }
    lVar25 = *(long *)(*(long *)(lVar22 + 0x10) + 0x80);
    FUN_710377b140(lVar25 + 0x40);
    FUN_710377b140(lVar25 + 0x4e0);
    FUN_710377b140(lVar25 + 0x520);
    lVar22 = *(long *)(*(long *)(lVar22 + 0x10) + 0x80);
    FUN_710377b140(lVar22 + 0x4e0);
    FUN_710377b140(lVar22 + 0x520);
  }
LAB_71004f0d50:
  *(char *)(piVar29 + 0x468) = (char)piVar29[0x325];
  lVar22 = *DAT_71052b8f00 + 0xca0;
  if ((char)piVar29[0x325] != '\0') {
    lVar22 = *DAT_71052b8f00 + 0xfc0;
  }
  fVar52 = (float)*(undefined8 *)(lVar22 + 0x50) * 0.0;
  fVar47 = (float)((ulong)*(undefined8 *)(lVar22 + 0x50) >> 0x20);
  fVar53 = (float)*(undefined8 *)(lVar22 + 0x40);
  fVar51 = (float)((ulong)*(undefined8 *)(lVar22 + 0x40) >> 0x20) * 0.0;
  fVar40 = -*(float *)(lVar22 + 0x108);
  uVar45 = *(undefined8 *)(lVar22 + 0x60);
  uVar20 = *(undefined8 *)(lVar22 + 0x70);
  fVar39 = (float)uVar45;
  fVar44 = (float)uVar20;
  fVar42 = (float)((ulong)uVar45 >> 0x20);
  fVar34 = (float)((ulong)uVar20 >> 0x20);
  fVar43 = (float)*(undefined8 *)(lVar22 + 0x68);
  fVar54 = fVar53 * 0.0 + fVar52;
  fVar55 = fVar51 + fVar47 * 0.0;
  fVar56 = (float)*(undefined8 *)(lVar22 + 0x48) * 0.0 + (float)*(undefined8 *)(lVar22 + 0x58) * 0.0
  ;
  fVar49 = (float)((ulong)*(undefined8 *)(lVar22 + 0x78) >> 0x20);
  fVar60 = fVar44 + fVar54 + fVar39 * 0.0;
  fVar57 = fVar34 + fVar55 + fVar42 * 0.0;
  fVar50 = (float)*(undefined8 *)(lVar22 + 0x78);
  fVar58 = fVar50 + fVar56 + fVar43 * 0.0;
  fVar59 = (float)((ulong)*(undefined8 *)(lVar22 + 0x48) >> 0x20) * 0.0 +
           (float)((ulong)*(undefined8 *)(lVar22 + 0x58) >> 0x20) * 0.0;
  fVar46 = (float)((ulong)*(undefined8 *)(lVar22 + 0x68) >> 0x20);
  fVar62 = fVar49 + fVar59 + fVar46 * 0.0;
  fVar61 = 0.0;
  if (fVar62 != 0.0) {
    fVar60 = fVar60 / fVar62;
    fVar57 = fVar57 / fVar62;
    fVar58 = fVar58 / fVar62;
    fVar61 = 0.0 / fVar62;
  }
  auVar15._4_4_ = fVar57;
  auVar15._0_4_ = fVar60;
  auVar15._8_4_ = fVar58;
  auVar15._12_4_ = fVar61;
  auVar16._4_4_ = fVar57;
  auVar16._0_4_ = fVar60;
  auVar16._8_4_ = fVar58;
  auVar16._12_4_ = fVar61;
  auVar63 = NEON_ext(auVar15,auVar16,8,1);
  fVar51 = fVar51 + fVar47 * 0.0;
  fVar49 = fVar49 + fVar59 + fVar46 * fVar40;
  fVar47 = fVar44 + fVar53 * 0.0 + fVar52 + fVar39 * fVar40;
  fVar46 = fVar34 + fVar51 + fVar42 * fVar40;
  *(ulong *)(piVar29 + 0x45e) = (ulong)auVar63._0_4_;
  *(ulong *)(piVar29 + 0x45c) = CONCAT44(fVar57,fVar60);
  uVar48 = CONCAT44(fVar46,fVar47);
  fVar50 = fVar50 + fVar56 + fVar40 * fVar43;
  if (fVar49 != 0.0) {
    uVar48 = CONCAT44(fVar46 / fVar49,fVar47 / fVar49);
    fVar50 = fVar50 / fVar49;
  }
  piVar29[0x462] = (int)fVar50;
  piVar29[0x463] = 0;
  *(undefined8 *)(piVar29 + 0x460) = uVar48;
  auVar63 = *(undefined1 (*) [16])(lVar22 + 0xb0);
  auVar41._12_4_ = 0;
  auVar41._0_12_ = auVar63._0_12_;
  *(ulong *)(piVar29 + 0x466) = (ulong)auVar63._8_4_;
  *(long *)(piVar29 + 0x464) = auVar63._0_8_;
  piVar29[0x458] = *(int *)(lVar22 + 0x110);
  piVar29[0x459] = *(int *)(lVar22 + 0x118);
  piVar29[0x456] = *(int *)(lVar22 + 0x124);
  piVar29[0x457] = *(int *)(lVar22 + 0x128);
  if (plVar19 != (long *)0x0) {
    plVar33 = plVar19 + 1;
    do {
      lVar22 = *plVar33;
      cVar2 = '\x01';
      bVar31 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar31) {
        *plVar33 = lVar22 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar22 == 0) {
      (**(code **)(*plVar19 + 0x10))
                (auVar63._8_4_,auVar41,
                 CONCAT44(fVar34 + fVar55 + fVar42 * 0.0,fVar44 + fVar54 + fVar39 * 0.0),uVar20,
                 uVar45,CONCAT44(fVar51,fVar51),plVar19);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

