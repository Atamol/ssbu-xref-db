// addr:      7102df0260
// offset:    0x2df0260
// name:      FUN_7102df0260
// mangled:   
// signature: undefined __cdecl FUN_7102df0260(long param_1)


void FUN_7102df0260(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  long alStack_1ca0 [7];
  undefined8 uStack_1c68;
  undefined8 local_1c60;
  uint auStack_1c58 [894];
  undefined8 local_e60 [2];
  uint local_e50 [892];
  
  FUN_71025e0bc0(param_1);
  if (*(int *)(param_1 + 0x990) != 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x8b0);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar17._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar17._12_4_ = auVar16._12_4_;
    auVar17._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar17._8_8_;
    local_e60[0] = auVar17._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8b8);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar18._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar18._12_4_ = auVar16._12_4_;
    auVar18._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar18._8_8_;
    local_e60[0] = auVar18._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8c0);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar19._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar19._12_4_ = auVar16._12_4_;
    auVar19._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar19._8_8_;
    local_e60[0] = auVar19._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8c8);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar20._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar20._12_4_ = auVar16._12_4_;
    auVar20._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar20._8_8_;
    local_e60[0] = auVar20._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8d0);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar21._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar21._12_4_ = auVar16._12_4_;
    auVar21._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar21._8_8_;
    local_e60[0] = auVar21._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8d8);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar22._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar22._12_4_ = auVar16._12_4_;
    auVar22._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar22._8_8_;
    local_e60[0] = auVar22._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8e0);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar23._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar23._12_4_ = auVar16._12_4_;
    auVar23._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar23._8_8_;
    local_e60[0] = auVar23._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8e8);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar24._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar24._12_4_ = auVar16._12_4_;
    auVar24._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar24._8_8_;
    local_e60[0] = auVar24._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8f0);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar25._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar25._12_4_ = auVar16._12_4_;
    auVar25._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar25._8_8_;
    local_e60[0] = auVar25._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x8f8);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar26._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar26._12_4_ = auVar16._12_4_;
    auVar26._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar26._8_8_;
    local_e60[0] = auVar26._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x900);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar27._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar27._12_4_ = auVar16._12_4_;
    auVar27._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar27._8_8_;
    local_e60[0] = auVar27._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x908);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar28._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar28._12_4_ = auVar16._12_4_;
    auVar28._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar28._8_8_;
    local_e60[0] = auVar28._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x910);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar29._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar29._12_4_ = auVar16._12_4_;
    auVar29._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar29._8_8_;
    local_e60[0] = auVar29._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x918);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar30._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar30._12_4_ = auVar16._12_4_;
    auVar30._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar30._8_8_;
    local_e60[0] = auVar30._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x920);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar31._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar31._12_4_ = auVar16._12_4_;
    auVar31._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar31._8_8_;
    local_e60[0] = auVar31._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  lVar9 = *(long *)(param_1 + 0x928);
  lVar7 = *(long *)(lVar9 + 0x18);
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x110) != '\0')) && (*(char *)(lVar7 + 0xe0) != '\0')) {
    pfVar10 = (float *)(*(long *)(*(long *)(lVar9 + 8) + 0xb0) +
                       (ulong)*(byte *)(*(long *)(lVar9 + 0x28) + 0x11) * 0xc);
    auVar16 = NEON_fmov(0x3f800000,4);
    auVar32._0_8_ = CONCAT44(pfVar10[1] / 255.0,*pfVar10 / 255.0);
    auVar32._12_4_ = auVar16._12_4_;
    auVar32._8_4_ = pfVar10[2] / 255.0;
    local_e60[1] = auVar32._8_8_;
    local_e60[0] = auVar32._0_8_;
    (**(code **)(**(long **)(lVar7 + 0x90) + 0x268))(*(long **)(lVar7 + 0x90),"ripple",3,local_e60);
  }
  fVar37 = *(float *)(param_1 + 0xc60);
  fVar36 = *(float *)(param_1 + 0xc70) - fVar37;
  fVar38 = fVar36 * 0.0078125 * 48.0;
  memset(local_e60,0,0xe00);
  memset(&local_1c60,0,0xe00);
  uVar14 = *(undefined4 *)(param_1 + 0xc84);
  fVar15 = *(float *)(param_1 + 0xc94);
  uVar8 = 0;
  pfVar10 = (float *)(param_1 + 0x10b0);
  do {
    fVar34 = (float)(uVar8 & 0xffffffff) / 223.0;
    if (1.0 < fVar34) {
      fVar34 = 1.0;
    }
    fVar34 = (fVar37 - fVar38) + (fVar36 + fVar38 + fVar38) * fVar34;
    uVar1 = uVar8 + 1;
    (auStack_1c58 + uVar8 * 4)[0] = 0x3f800000;
    (auStack_1c58 + uVar8 * 4)[1] = 0;
    (&local_1c60)[uVar8 * 2] = CONCAT44(uVar14,fVar34);
    fVar35 = *pfVar10;
    local_e60[uVar8 * 2 + 1] = 0x3f800000;
    local_e60[uVar8 * 2] = CONCAT44(fVar35 + fVar15,fVar34);
    uVar8 = uVar1;
    pfVar10 = pfVar10 + 3;
  } while (uVar1 != 0xe0);
  puVar3 = (uint *)(param_1 + 0x17940);
  *puVar3 = 0;
  lVar7 = DAT_7105335b00;
  *(undefined4 *)(DAT_7105335b00 + 0x538) = 1;
  *(long *)(lVar7 + 0x540) = lVar7 + 0x65ee0;
  iVar6 = DAT_7105231618;
  DAT_7105231610 = 3;
  lVar9 = *(long *)(lVar7 + 0x4dcdd0);
  if ((ulong)(*(long *)(lVar7 + 0x4dcdd8) - lVar9 >> 5) < 5) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if ((*(long **)(lVar9 + 0x90) == (long *)0x0) ||
     (**(long **)(lVar9 + 0x90) != *(long *)(lVar9 + 0x98))) {
    *(undefined8 *)(lVar7 + 0x4dcdb8) = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x88);
    *(long *)(lVar7 + 0x4dcdb8) = lVar9;
    if (lVar9 != 0) {
      puVar11 = *(undefined8 **)(lVar9 + 8);
      *(undefined8 **)(lVar7 + 0x4dcdc0) = puVar11;
      uVar12 = *puVar11;
      goto LAB_7102df0c74;
    }
  }
  uVar12 = 0;
  *(undefined8 *)(lVar7 + 0x4dcdc0) = 0;
LAB_7102df0c74:
  *(undefined8 *)(lVar7 + 0x4dcdc8) = uVar12;
  *(int *)(lVar7 + 0x4dcda4) = iVar6 + 4;
  FUN_71035a2f20(*(uint *)(param_1 + 0x1b38),0);
  lVar7 = DAT_7105335b00;
  alStack_1ca0[6] = *(undefined8 *)(param_1 + 0x980);
  uStack_1c68 = CONCAT44(0x3f800000,(int)*(undefined8 *)(param_1 + 0x988));
  alStack_1ca0[1] = 0;
  alStack_1ca0[0] = 0x3f800000;
  alStack_1ca0[3] = 0;
  alStack_1ca0[2] = 0x3f80000000000000;
  alStack_1ca0[5] = 0x3f800000;
  alStack_1ca0[4] = 0;
  FUN_7103594510(DAT_7105335b00,alStack_1ca0);
  lVar9 = 0;
  puVar11 = (undefined8 *)(param_1 + 0x1b40);
  do {
    fVar36 = *(float *)(param_1 + 0x9a4);
    uVar13 = (uint)(*(float *)(param_1 + 0x9a0) * 255.01);
    fVar15 = *(float *)(param_1 + 0x9a8);
    *(undefined4 *)(param_1 + 0x9ac) = 0x3f25a5a6;
    uVar33 = *(undefined8 *)((long)local_e60 + lVar9 + 8);
    uVar12 = *(undefined8 *)((long)local_e60 + lVar9);
    puVar11[2] = 0;
    puVar11[3] = 0;
    uVar13 = uVar13 & 0xff000000 |
             uVar13 & 0xff | ((int)(fVar36 * 255.01) & 0xffU) << 8 |
             ((int)(fVar15 * 255.01) & 0xffU) << 0x10 | 0xa5000000;
    *(uint *)(puVar11 + 4) = uVar13;
    *(int *)(puVar11 + 1) = (int)uVar33;
    *(undefined4 *)((long)puVar11 + 0xc) = 0;
    *puVar11 = uVar12;
    uVar14 = *(undefined4 *)((long)local_e50 + lVar9);
    uVar4 = *(undefined4 *)((long)local_e50 + lVar9 + 4);
    uVar5 = *(uint *)((long)local_e50 + lVar9 + 8);
    *(uint *)(puVar11 + 0xc) = uVar13;
    lVar2 = lVar9 + 0x10;
    puVar11[9] = (ulong)uVar5;
    *(undefined4 *)(puVar11 + 8) = uVar14;
    *(undefined4 *)((long)puVar11 + 0x44) = uVar4;
    puVar11[0xb] = 0;
    puVar11[10] = 0x3f800000;
    uVar14 = *(undefined4 *)((long)&local_1c60 + lVar9);
    uVar4 = *(undefined4 *)((long)&local_1c60 + lVar9 + 4);
    uVar5 = *(uint *)((long)auStack_1c58 + lVar9);
    *(uint *)(puVar11 + 0x14) = uVar13;
    puVar11[0x11] = (ulong)uVar5;
    *(undefined4 *)(puVar11 + 0x10) = uVar14;
    *(undefined4 *)((long)puVar11 + 0x84) = uVar4;
    puVar11[0x13] = 0;
    puVar11[0x12] = &DAT_3f8000003f800000;
    uVar14 = *(undefined4 *)((long)local_e50 + lVar9);
    uVar4 = *(undefined4 *)((long)local_e50 + lVar9 + 4);
    uVar5 = *(uint *)((long)local_e50 + lVar9 + 8);
    *(uint *)(puVar11 + 0x1c) = uVar13;
    puVar11[0x19] = (ulong)uVar5;
    *(undefined4 *)(puVar11 + 0x18) = uVar14;
    *(undefined4 *)((long)puVar11 + 0xc4) = uVar4;
    puVar11[0x1b] = 0;
    puVar11[0x1a] = 0x3f800000;
    uVar14 = *(undefined4 *)((long)auStack_1c58 + lVar9 + 8);
    uVar4 = *(undefined4 *)((long)auStack_1c58 + lVar9 + 0xc);
    uVar5 = *(uint *)((long)auStack_1c58 + lVar9 + 0x10);
    *(uint *)(puVar11 + 0x24) = uVar13;
    puVar11[0x21] = (ulong)uVar5;
    *(undefined4 *)(puVar11 + 0x20) = uVar14;
    *(undefined4 *)((long)puVar11 + 0x104) = uVar4;
    puVar11[0x23] = 0;
    puVar11[0x22] = 0x3f80000000000000;
    uVar14 = *(undefined4 *)((long)&local_1c60 + lVar9);
    uVar4 = *(undefined4 *)((long)&local_1c60 + lVar9 + 4);
    uVar5 = *(uint *)((long)auStack_1c58 + lVar9);
    *(uint *)(puVar11 + 0x2c) = uVar13;
    puVar11[0x29] = (ulong)uVar5;
    *(undefined4 *)(puVar11 + 0x28) = uVar14;
    *(undefined4 *)((long)puVar11 + 0x144) = uVar4;
    puVar11[0x2b] = 0;
    puVar11[0x2a] = &DAT_3f8000003f800000;
    uVar13 = *puVar3;
    puVar11 = puVar11 + 0x30;
    *puVar3 = uVar13 + 6;
    lVar9 = lVar2;
  } while (lVar2 != 0xdf0);
  uVar13 = uVar13 + 6 & 0xffff;
  *(undefined1 *)(lVar7 + 0x4dca9c) = 0;
  FUN_710359a740(lVar7,(undefined4 *)(param_1 + 0x1b40),uVar13,(ushort *)0x0,uVar13,in_x5,in_x6,
                 in_x7);
  return;
}

