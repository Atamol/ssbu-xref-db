// addr:      7102e7f540
// offset:    0x2e7f540
// name:      FUN_7102e7f540
// mangled:   
// signature: undefined __cdecl FUN_7102e7f540(float param_1, long * param_2)


void FUN_7102e7f540(float param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = 3;
  if (*(int *)((long)param_2 + 0x24) == 0) {
    uVar4 = 1;
  }
  auVar10 = FUN_7102e7f380(param_2[2],uVar4);
  uVar4 = 2;
  if (*(int *)((long)param_2 + 0x24) != 0) {
    uVar4 = 4;
  }
  auVar11 = FUN_7102e7f380(param_2[2],uVar4);
  lVar5 = *param_2;
  fVar14 = auVar11._4_4_;
  fVar13 = auVar10._4_4_;
  if (*(char *)(lVar5 + 0x18) == '\0') {
    auVar11 = NEON_ext(auVar10,auVar10,8,1);
    param_2[7] = (ulong)auVar11._0_4_;
    param_2[6] = CONCAT44(fVar13 + (fVar14 - fVar13) * 0.6,auVar10._0_4_);
    lVar5 = param_2[3];
    goto joined_r0x007102e7f6b8;
  }
  fVar12 = *(float *)(param_2 + 5) - param_1;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)(param_2 + 5) = fVar12;
  switch((int)param_2[4]) {
  case 0:
    auVar11 = NEON_ext(auVar10,auVar10,8,1);
    param_2[7] = (ulong)auVar11._0_4_;
    param_2[6] = CONCAT44(fVar13 + (fVar14 - fVar13) * 0.6,auVar10._0_4_);
    puVar6 = *(uint **)(lVar5 + 0x340);
    uVar1 = *puVar6;
    *puVar6 = puVar6[1];
    uVar2 = puVar6[3];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar6[1] = puVar6[2];
    puVar6[2] = uVar2;
    puVar6[3] = uVar1;
    fVar12 = *(float *)(param_2 + 5);
    *(bool *)(param_2 + 9) = (float)uVar1 * 2.3283064e-10 < 0.5;
    *(undefined4 *)(param_2 + 4) = 1;
  case 1:
    if (fVar12 != 0.0) goto switchD_7102e7f5d4_default;
    uVar4 = 2;
    *(undefined4 *)((long)param_2 + 0x44) = 0;
    *(undefined1 *)((long)param_2 + 0x49) = 0;
LAB_7102e7fa88:
    *(undefined4 *)(param_2 + 4) = uVar4;
    lVar5 = param_2[3];
    break;
  case 2:
    lVar7 = param_2[1];
    fVar12 = *(float *)(lVar7 + 8) + *(float *)((long)param_2 + 0x44);
    *(float *)((long)param_2 + 0x44) = fVar12;
    fVar9 = *(float *)(lVar7 + 0xc);
    if (fVar9 < fVar12) {
      *(float *)((long)param_2 + 0x44) = fVar9;
      fVar12 = fVar9;
    }
    if ((*(char *)((long)param_2 + 0x49) != '\0') || (fVar12 != *(float *)(lVar7 + 0xc))) {
LAB_7102e7f8a4:
      if ((char)param_2[9] == '\0') {
        fVar12 = *(float *)((long)param_2 + 0x34) - fVar12 * param_1;
        *(int *)(param_2 + 7) = (int)param_2[7];
        *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
        *(int *)(param_2 + 6) = (int)param_2[6];
        *(float *)((long)param_2 + 0x34) = fVar12;
        if (fVar12 <= fVar14) goto LAB_7102e7fa7c;
      }
      else {
        fVar12 = fVar12 * param_1 + *(float *)((long)param_2 + 0x34);
        *(int *)(param_2 + 7) = (int)param_2[7];
        *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
        *(int *)(param_2 + 6) = (int)param_2[6];
        *(float *)((long)param_2 + 0x34) = fVar12;
        if (fVar13 <= fVar12) goto LAB_7102e7fa7c;
      }
      goto switchD_7102e7f5d4_default;
    }
    puVar6 = *(uint **)(lVar5 + 0x340);
    uVar1 = *puVar6;
    *puVar6 = puVar6[1];
    uVar2 = puVar6[3];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar6[1] = puVar6[2];
    puVar6[2] = uVar2;
    puVar6[3] = uVar1;
    fVar12 = *(float *)(param_2[1] + 0x1c);
    *(undefined1 *)((long)param_2 + 0x49) = 1;
    if (fVar12 <= (float)uVar1 * 100.0 * 2.3283064e-10) {
      fVar12 = *(float *)((long)param_2 + 0x44);
      goto LAB_7102e7f8a4;
    }
    fVar12 = *(float *)((long)param_2 + 0x34);
LAB_7102e7fa7c:
    *(float *)(param_2 + 8) = fVar12;
    uVar4 = 3;
    goto LAB_7102e7fa88;
  case 3:
    fVar14 = *(float *)((long)param_2 + 0x44) - *(float *)(param_2[1] + 8);
    *(float *)((long)param_2 + 0x44) = fVar14;
    fVar13 = -*(float *)(param_2[1] + 0xc);
    if (fVar14 <= fVar13) {
      *(float *)((long)param_2 + 0x44) = fVar13;
      fVar14 = fVar13;
    }
    if ((char)param_2[9] == '\0') {
      fVar14 = *(float *)((long)param_2 + 0x34) - fVar14 * param_1;
      lVar7 = CONCAT44(fVar14,(int)param_2[6]);
      *(int *)(param_2 + 7) = (int)param_2[7];
      *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
      param_2[6] = lVar7;
      if (*(float *)(param_2 + 8) < fVar14) goto LAB_7102e7f9c0;
    }
    else {
      fVar14 = fVar14 * param_1 + *(float *)((long)param_2 + 0x34);
      lVar7 = CONCAT44(fVar14,(int)param_2[6]);
      *(int *)(param_2 + 7) = (int)param_2[7];
      *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
      param_2[6] = lVar7;
      if (fVar14 < *(float *)(param_2 + 8)) {
LAB_7102e7f9c0:
        puVar6 = *(uint **)(lVar5 + 0x340);
        uVar1 = *puVar6;
        *puVar6 = puVar6[1];
        uVar2 = puVar6[3];
        uVar1 = uVar1 ^ uVar1 << 0xb;
        uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar6[1] = puVar6[2];
        puVar6[2] = uVar2;
        puVar6[3] = uVar1;
        lVar5 = param_2[1];
        if (*(float *)(lVar5 + 0x10) <= (float)uVar1 * 100.0 * 2.3283064e-10) {
          uVar4 = 2;
        }
        else {
          puVar6 = *(uint **)(*param_2 + 0x340);
          fVar14 = *(float *)(lVar5 + 0x14);
          fVar13 = *(float *)(lVar5 + 0x18);
          uVar1 = *puVar6;
          *puVar6 = puVar6[1];
          uVar2 = puVar6[3];
          uVar1 = uVar1 ^ uVar1 << 0xb;
          uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar6[3] = uVar1;
          uVar4 = 1;
          puVar6[1] = puVar6[2];
          puVar6[2] = uVar2;
          *(float *)(param_2 + 5) = fVar14 + (fVar13 - fVar14) * (float)uVar1 * 2.3283064e-10;
        }
        *(undefined4 *)(param_2 + 4) = uVar4;
        lVar7 = param_2[6];
        *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) ^ 1;
      }
    }
    *(int *)(param_2 + 8) = (int)((ulong)lVar7 >> 0x20);
  default:
switchD_7102e7f5d4_default:
    lVar5 = param_2[3];
  }
joined_r0x007102e7f6b8:
  if (lVar5 == 0) {
    return;
  }
  if (*(char *)(lVar5 + 0x110) == '\0') {
    return;
  }
  uStack_a8 = 0;
  local_b0 = 0x3f800000;
  uStack_98 = 0;
  local_a0 = 0x3f80000000000000;
  uStack_88 = 0x3f800000;
  local_90 = 0;
  auVar11._0_12_ = SUB1612(*(undefined1 (*) [16])(param_2 + 6),0);
  auVar11._12_4_ = 0x3f800000;
  auVar10 = NEON_ext(auVar11,*(undefined1 (*) [16])(param_2 + 6),0xc,1);
  auVar11 = NEON_ext(auVar10,auVar11,4,1);
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  auVar10 = NEON_ext(auVar11,auVar10,0xc,1);
  uStack_78 = auVar10._8_8_;
  local_80 = auVar10._0_8_;
  (**(code **)(**(long **)(lVar5 + 0x90) + 0x148))(*(long **)(lVar5 + 0x90),&local_b0);
  lVar5 = *(long *)(lVar5 + 0xd8);
  if (lVar5 != 0) {
    local_58 = uStack_98;
    local_60 = local_a0;
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    local_38 = uStack_78;
    local_40 = local_80;
    local_48 = uStack_88;
    local_50 = local_90;
    if (*(char *)(*(long *)(lVar5 + 8) + 0xa8) != '\0') {
      plVar3 = *(long **)(*(long *)(lVar5 + 8) + 0x48);
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_70);
    }
    *(undefined1 *)(lVar5 + 0x20) = 1;
  }
  fVar14 = *(float *)(param_2 + 0xe);
  if (fVar14 <= 0.0) {
    fVar13 = *(float *)(param_2 + 10);
    fVar12 = *(float *)((long)param_2 + 0x54);
    fVar9 = *(float *)(param_2 + 0xb);
  }
  else {
    fVar16 = *(float *)((long)param_2 + 0x74) + param_1;
    *(float *)((long)param_2 + 0x74) = fVar16;
    fVar13 = 1.0 - fVar16 / fVar14;
    if ((char)param_2[0xf] != '\0') {
      fVar13 = fVar16 / fVar14;
    }
    fVar12 = 1.0;
    if (fVar13 <= 1.0) {
      fVar12 = fVar13;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar13) {
      fVar8 = fVar12;
    }
    fVar17 = 1.0 - fVar8;
    fVar13 = fVar17 + *(float *)(param_2 + 0xc) * fVar8;
    fVar12 = fVar17 + *(float *)((long)param_2 + 100) * fVar8;
    fVar9 = fVar17 + *(float *)(param_2 + 0xd) * fVar8;
    *(float *)(param_2 + 10) = fVar13;
    *(float *)((long)param_2 + 0x54) = fVar12;
    *(float *)(param_2 + 0xb) = fVar9;
    *(float *)((long)param_2 + 0x5c) = fVar17 + *(float *)((long)param_2 + 0x6c) * fVar8;
    if (fVar14 <= fVar16) {
      *(undefined4 *)(param_2 + 0xe) = 0;
      lVar5 = param_2[3];
      goto joined_r0x007102e7f86c;
    }
  }
  lVar5 = param_2[3];
joined_r0x007102e7f86c:
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xe0) != '\0')) {
    auVar10 = NEON_fmov(0x3f800000,4);
    auVar15._0_8_ = CONCAT44(fVar12,fVar13);
    auVar15._12_4_ = auVar10._12_4_;
    auVar15._8_4_ = fVar9;
    uStack_68 = auVar15._8_8_;
    local_70 = auVar15._0_8_;
    (**(code **)(**(long **)(lVar5 + 0x90) + 0x268))
              (*(long **)(lVar5 + 0x90),"sfx_100_ashiba_emi",3,&local_70);
  }
  return;
}

