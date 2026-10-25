// addr:      71032cdd90
// offset:    0x32cdd90
// name:      FUN_71032cdd90
// mangled:   
// signature: undefined __cdecl FUN_71032cdd90(long param_1)


void FUN_71032cdd90(long param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  bool bVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar17;
  undefined8 uVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined1 auVar25 [16];
  
  fVar13 = *(float *)(param_1 + 0x10c);
  *(undefined1 *)(param_1 + 0x124) = 0;
  if (*(float *)(param_1 + 0x108) != fVar13) {
    *(float *)(param_1 + 0x108) = fVar13;
    lVar8 = **(long **)(*(long *)(param_1 + 0x28) + 0x18);
    if (lVar8 != 0) {
      *(float *)(lVar8 + 0x48) = fVar13;
      *(float *)(lVar8 + 0x4c) = fVar13;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
    }
    fVar13 = *(float *)(param_1 + 0x100);
    *(ulong *)(param_1 + 0xb8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20) * fVar13 * 0.8,
                  (float)*(undefined8 *)(param_1 + 0xa8) * fVar13 * 0.8);
    *(ulong *)(param_1 + 0xb0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xa0) >> 0x20) * fVar13 * 0.8,
                  (float)*(undefined8 *)(param_1 + 0xa0) * fVar13 * 0.8);
  }
  if (*(char *)(param_1 + 0x125) != '\0') {
    return;
  }
  puVar11 = (undefined8 *)(param_1 + 0xf0);
  uVar16 = *(undefined8 *)(param_1 + 0xf8);
  uVar14 = *puVar11;
  cVar7 = *(char *)(param_1 + 0x11f);
  puVar10 = (undefined8 *)(param_1 + 0xe0);
  fVar13 = (float)*puVar10;
  iVar21 = -(uint)(fVar13 == (float)uVar14);
  fVar19 = (float)((ulong)*puVar10 >> 0x20);
  iVar22 = -(uint)(fVar19 == (float)((ulong)uVar14 >> 0x20));
  fVar15 = (float)*(undefined8 *)(param_1 + 0xe8);
  iVar23 = -(uint)(fVar15 == (float)uVar16);
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20);
  iVar24 = -(uint)(fVar17 == (float)((ulong)uVar16 >> 0x20));
  auVar25._4_4_ = iVar22;
  auVar25._0_4_ = iVar21;
  auVar25._8_4_ = iVar23;
  auVar25._12_4_ = iVar24;
  auVar2._4_4_ = iVar22;
  auVar2._0_4_ = iVar21;
  auVar2._8_4_ = iVar23;
  auVar2._12_4_ = iVar24;
  auVar25 = NEON_ext(auVar25,auVar2,8,1);
  uVar3 = CONCAT44(iVar22,iVar21) & auVar25._0_8_;
  if (((uint)uVar3 & (uint)(uVar3 >> 0x20)) == 0) {
    if (cVar7 == '\0') {
      bVar4 = false;
    }
    else {
      if (*(long *)(param_1 + 0x110) == 0) {
        puVar12 = (undefined8 *)&nn::util::Vector4f::ConstantZero;
      }
      else {
        puVar12 = (undefined8 *)
                  (*(long *)(*(long *)(*(long *)(param_1 + 0x110) + 8) + 0x100) + 0x70);
      }
      uVar16 = puVar12[1];
      uVar14 = *puVar12;
      bVar4 = true;
      *(undefined8 *)(param_1 + 0xf8) = uVar16;
      *(undefined8 *)(param_1 + 0xf0) = uVar14;
    }
    fVar18 = (float)uVar14 - fVar13;
    fVar20 = (float)((ulong)uVar14 >> 0x20) - fVar19;
    if (fVar18 * fVar18 + fVar20 * fVar20 <= *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xb0)
       ) {
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf8);
      *puVar10 = *puVar11;
      if (*(char *)(param_1 + 0x123) != '\0') {
        *(undefined2 *)(param_1 + 0x123) = 0x100;
      }
      cVar7 = '\x01';
      uVar16 = *(undefined8 *)(param_1 + 0xe8);
      uVar14 = *puVar10;
    }
    else {
      *(ulong *)(param_1 + 0xe8) =
           CONCAT44(fVar17 + ((float)((ulong)uVar16 >> 0x20) - fVar17) * 0.4,
                    fVar15 + ((float)uVar16 - fVar15) * 0.4);
      *puVar10 = CONCAT44(fVar19 + fVar20 * 0.4,fVar13 + fVar18 * 0.4);
      uVar16 = *(undefined8 *)(param_1 + 0xe8);
      uVar14 = *puVar10;
    }
    if (!bVar4) {
      fVar13 = *(float *)(param_1 + 0xd0);
      if (*(float *)(param_1 + 0xd0) <= (float)uVar14) {
        fVar13 = (float)uVar14;
      }
      fVar19 = *(float *)(param_1 + 0xd4);
      if (fVar13 <= *(float *)(param_1 + 0xd4)) {
        fVar19 = fVar13;
      }
      fVar15 = (float)((ulong)uVar14 >> 0x20);
      fVar13 = *(float *)(param_1 + 0xd8);
      if (*(float *)(param_1 + 0xd8) <= fVar15) {
        fVar13 = fVar15;
      }
      uVar16 = 0;
      fVar15 = *(float *)(param_1 + 0xdc);
      if (fVar13 <= *(float *)(param_1 + 0xdc)) {
        fVar15 = fVar13;
      }
      uVar14 = CONCAT44(fVar15,fVar19);
    }
    *(undefined8 *)(param_1 + 0xe8) = uVar16;
    *(undefined8 *)(param_1 + 0xe0) = uVar14;
    lVar8 = **(long **)(*(long *)(param_1 + 0x28) + 0x18);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x30) = uVar14;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
      uVar14 = *puVar10;
    }
    if (((*(float *)(param_1 + 0xc4) < (float)uVar14) ||
        ((float)uVar14 < *(float *)(param_1 + 0xc0))) ||
       (fVar13 = (float)((ulong)uVar14 >> 0x20), *(float *)(param_1 + 0xcc) < fVar13)) {
      bVar6 = 0;
      *(undefined1 *)(param_1 + 0x118) = 0;
    }
    else {
      fVar19 = *(float *)(param_1 + 200);
      *(bool *)(param_1 + 0x118) = fVar13 > fVar19 || fVar19 == fVar13;
      if (fVar13 <= fVar19 && fVar19 != fVar13) {
        bVar6 = 0;
      }
      else {
        bVar6 = 0;
        if (((*(char *)(param_1 + 0x119) != '\0') && (bVar6 = 0, *(char *)(param_1 + 0x11a) != '\0')
            ) && (bVar6 = 0, *(char *)(param_1 + 0x11b) != '\0')) {
          bVar6 = *(byte *)(param_1 + 0x11c);
        }
      }
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar6;
    }
  }
  else if ((*(long *)(param_1 + 0x110) != 0) && (cVar7 != '\0')) {
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x110) + 8) + 0x100);
    uVar14 = *(undefined8 *)(lVar8 + 0x70);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(lVar8 + 0x78);
    *(undefined8 *)(param_1 + 0xf0) = uVar14;
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xf8);
    *puVar10 = *puVar11;
    uVar14 = *(undefined8 *)(param_1 + 0xe0);
    lVar8 = **(long **)(*(long *)(param_1 + 0x28) + 0x18);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x30) = uVar14;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
      uVar14 = *puVar10;
    }
    if (((*(float *)(param_1 + 0xc4) < (float)uVar14) ||
        ((float)uVar14 < *(float *)(param_1 + 0xc0))) ||
       (fVar13 = (float)((ulong)uVar14 >> 0x20), *(float *)(param_1 + 0xcc) < fVar13)) {
      bVar6 = 0;
      *(undefined1 *)(param_1 + 0x118) = 0;
    }
    else {
      fVar19 = *(float *)(param_1 + 200);
      *(bool *)(param_1 + 0x118) = fVar13 > fVar19 || fVar19 == fVar13;
      if (fVar13 <= fVar19 && fVar19 != fVar13) {
        bVar6 = 0;
      }
      else {
        bVar6 = 0;
        if (((*(char *)(param_1 + 0x119) != '\0') && (bVar6 = 0, *(char *)(param_1 + 0x11a) != '\0')
            ) && (bVar6 = 0, *(char *)(param_1 + 0x11b) != '\0')) {
          bVar6 = *(byte *)(param_1 + 0x11c);
        }
      }
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)) {
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe | bVar6;
    }
    cVar7 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x11e);
  if (((cVar1 == *(char *)(param_1 + 0x120)) &&
      ((cVar7 != '\0') == (bool)*(char *)(param_1 + 0x121))) && (*(char *)(param_1 + 0x122) == '\0')
     ) goto LAB_71032ce194;
  if (cVar7 == '\0') {
    if (cVar1 == '\0') {
      plVar9 = (long *)(param_1 + 0x58);
    }
    else {
      plVar9 = (long *)(param_1 + 0x68);
    }
  }
  else {
    plVar9 = (long *)(param_1 + 0x78);
  }
  **(undefined8 **)(param_1 + 0x48) = *(undefined8 *)*plVar9;
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 8) = *(undefined8 *)(*plVar9 + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10) = *(undefined8 *)(*plVar9 + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18) = *(undefined8 *)(*plVar9 + 0x18);
  if (((**(long **)(param_1 + 0x48) != 0) && (lVar8 = **(long **)(param_1 + 0x38), lVar8 != 0)) &&
     (*(long *)(lVar8 + 0x18) != 0)) {
    FUN_7100058290(*(long *)(lVar8 + 0x18),lVar8);
    FUN_7100058250(**(long **)(param_1 + 0x48),**(long **)(param_1 + 0x38));
  }
  *(undefined1 *)(param_1 + 0x122) = 0;
  if (*(char *)(param_1 + 0x120) == cVar1) goto LAB_71032ce194;
  if (*(char *)(param_1 + 0x126) == '\0') {
    if (cVar1 != '\0') goto LAB_71032ce144;
LAB_71032ce180:
    lVar8 = *(long *)(param_1 + 0x28);
    pcVar5 = "loop_off";
  }
  else {
    if (cVar1 == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71043ef055);
      goto LAB_71032ce180;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71042d4aad);
LAB_71032ce144:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71044641ee);
    lVar8 = *(long *)(param_1 + 0x28);
    pcVar5 = "loop_on";
  }
  FUN_7103778300(0x3f800000,lVar8,(long)pcVar5);
LAB_71032ce194:
  *(char *)(param_1 + 0x120) = cVar1;
  *(bool *)(param_1 + 0x121) = cVar7 != '\0';
  return;
}

