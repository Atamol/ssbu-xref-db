// addr:      7102b406f0
// offset:    0x2b406f0
// name:      FUN_7102b406f0
// mangled:   
// signature: undefined __cdecl FUN_7102b406f0(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102b406f0(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte ***pppbVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  char *pcVar9;
  byte ****ppppbVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  long *plVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  float fVar18;
  uint uVar19;
  byte ***local_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  char *local_198;
  char *pcStack_190;
  undefined *local_188;
  undefined *puStack_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined *local_158;
  undefined *puStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined1 uStack_74;
  long local_70;
  ulong uStack_68;
  undefined1 local_60;
  long ***local_50;
  undefined4 local_44;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar13 = *(long **)(*(long *)param_1[0x66] + 0x38);
  plVar4 = *(long **)(*(long *)param_1[0x66] + 0x40);
  if (plVar13 != plVar4) {
    uVar19 = *(uint *)(param_1 + 0xe8);
    do {
      lVar7 = *plVar13;
      *(undefined8 *)(lVar7 + 0x98) = 0;
      *(ulong *)(lVar7 + 0x90) = (ulong)uVar19 << 0x20;
      if (*(char *)(lVar7 + 0x80) == '\0') {
        *(undefined1 *)(lVar7 + 0x80) = 1;
      }
      FUN_71026178e0(lVar7);
      plVar13 = plVar13 + 1;
    } while (plVar4 != plVar13);
  }
  plVar13 = (long *)**(long **)(param_1[0x60] + 0x18);
  ppppbVar10 = (byte ****)(param_1 + 0xe7);
  while ((*(ulong *)(*plVar13 + 0xa0) & 0xffffffffff) != 0x7b569df99) {
    plVar13 = plVar13 + 1;
  }
  puVar17 = *(undefined8 **)(*plVar13 + 0x130);
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pcVar9 = "IPP0002";
  puVar3 = (undefined8 *)*puVar17;
  puVar17 = (undefined8 *)puVar17[1];
  if (DAT_71052c51ba == '\0') {
    FUN_71025f55b0(puVar3,puVar17,"IPP0002");
  }
  else {
    FUN_71025f5420(puVar3,puVar17,"IPP0002");
  }
  local_60 = 0;
  local_1c0 = PTR_s_stc_bg_s_03_set_7105115f58;
  uStack_74 = 0;
  local_1d0 = (byte ***)PTR_s_stc_bg_s_01_set_7105115f48;
  local_1c8 = PTR_s_stc_bg_s_02_set_7105115f50;
  local_1a8 = PTR_s_dyr_ufokinokor_set_7105115f70;
  puStack_1a0 = PTR_s_dyr_ufokinokoy_set_7105115f78;
  local_1b8 = PTR_s_dyr_bg_03_set_7105115f60;
  puStack_1b0 = PTR_s_dyr_bg_02_set_7105115f68;
  local_178 = PTR_s_dyr_flagk_all_set_7105115f90;
  puStack_170 = PTR_s_dyr_mario_ship_kemuri_p_set_7105115f98;
  local_188 = PTR_s_dyr_bg_02_set_7105115f80;
  puStack_180 = PTR_s_dyr_bg_03_set_7105115f88;
  local_158 = PTR_s_dyr_ufokinokog_set_7105115fb0;
  puStack_150 = PTR_s_dyr_ufokinokor_set_7105115fb8;
  local_168 = PTR_s_dye_effects_set_7105115fa0;
  puStack_160 = PTR_s_dyr_ufokinokoy_set_7105115fa8;
  uVar16 = 3;
  local_198 = "STG_GALAXY_STAR";
  pcStack_190 = "STG_GALAXY_SMOKE";
  local_148 = 6;
  local_144 = 7;
  local_140 = 4;
  local_13c = 5;
  local_138 = 8;
  uStack_134 = 0xffffffff;
  local_130 = 8;
  uStack_12c = 0xffffffff;
  puVar14 = (undefined4 *)param_1[0xf4];
  fVar18 = (float)puVar14[2];
  uVar1 = uVar16;
  if (0.0 < fVar18) {
    uVar1 = 1;
  }
  local_100 = CONCAT44(puVar14[1],*puVar14);
  uVar15 = 2;
  uVar2 = 0;
  if (fVar18 <= 0.0) {
    uVar2 = uVar15;
  }
  _local_128 = CONCAT44(uVar1,uVar2);
  uStack_f8 = (ulong)(uint)fVar18;
  local_f0 = *(undefined8 *)(puVar14 + 6);
  uStack_e8 = (ulong)(uint)puVar14[8];
  uVar1 = uVar16;
  uVar2 = uVar15;
  if (0.0 < (float)puVar14[8]) {
    uVar1 = 1;
    uVar2 = 0;
  }
  _local_120 = CONCAT44(uVar1,uVar2);
  _local_b0 = CONCAT44(puVar14[9],puVar14[3]);
  _local_88 = CONCAT44(puVar14[0xb],puVar14[5]);
  local_e0 = *(undefined8 *)(puVar14 + 0xc);
  uStack_d8 = (ulong)(uint)puVar14[0xe];
  uVar1 = uVar16;
  uVar2 = uVar15;
  if (0.0 < (float)puVar14[0xe]) {
    uVar1 = 1;
    uVar2 = 0;
  }
  _local_118 = CONCAT44(uVar1,uVar2);
  _local_98 = CONCAT44(puVar14[0x10],puVar14[10]);
  local_80 = puVar14[0x11];
  fVar18 = (float)puVar14[0x14];
  local_d0 = CONCAT44(puVar14[0x13],puVar14[0x12]);
  uVar1 = 0;
  if (fVar18 <= 0.0) {
    uVar1 = uVar15;
  }
  uStack_c8 = (ulong)(uint)fVar18;
  uVar2 = uVar16;
  if (0.0 < fVar18) {
    uVar2 = 1;
  }
  _local_110 = CONCAT44(uVar2,uVar1);
  _local_a8 = CONCAT44(puVar14[0x15],puVar14[0xf]);
  local_7c = puVar14[0x17];
  local_c0 = CONCAT44(puVar14[0x19],puVar14[0x18]);
  uStack_b8 = (ulong)(uint)puVar14[0x1a];
  if (0.0 < (float)puVar14[0x1a]) {
    uVar16 = 1;
    uVar15 = 0;
  }
  _local_108 = CONCAT44(uVar16,uVar15);
  _local_a0 = CONCAT44(puVar14[4],puVar14[0x1b]);
  _local_90 = CONCAT44(puVar14[0x1c],puVar14[0x16]);
  uStack_78 = puVar14[0x1d];
  local_70 = param_1[0xf2];
  uStack_68 = (ulong)*(uint *)(param_1 + 0xf3);
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x310,(long ****)pcVar9,(byte ****)param_4,(long ****)param_5,
                           param_6,param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)0x310;
      pppplVar12 = &local_50;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar8 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x310,pppplVar12,(byte ****)param_4,(long ****)param_5,
                                   param_6,param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_7102b40a9c;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_7102b40a9c:
  pppplVar12 = (long ****)param_1[0x67];
  ppppbVar11 = &local_1d0;
  FUN_7102b40c50(puVar17,(long)param_1,(long ****)ppppbVar10,ppppbVar11,pppplVar12,param_6,param_7,
                 param_8);
  plVar13 = (long *)param_1[0xfa];
  param_1[0xfa] = (long)puVar17;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  pppbVar5 = *(byte ****)(param_1[0x61] + 0xf8);
  uVar1 = *(undefined4 *)(param_1[0x61] + 0x100);
  puVar14 = (undefined4 *)
            FUN_710392e290(0x10,0x24,(long ****)ppppbVar10,ppppbVar11,pppplVar12,param_6,param_7,
                           param_8);
  if (puVar14 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_1d0 = (byte ***)&DAT_00000024;
      ppppbVar10 = &local_1d0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar8 & 1) != 0) &&
         (puVar14 = (undefined4 *)
                    FUN_710392e290(0x10,0x24,(long ****)ppppbVar10,ppppbVar11,pppplVar12,param_6,
                                   param_7,param_8), puVar14 != (undefined4 *)0x0))
      goto LAB_7102b40b34;
    }
    puVar14 = (undefined4 *)0x0;
  }
LAB_7102b40b34:
  *(undefined8 *)(puVar14 + 7) = 0;
  *(undefined8 *)(puVar14 + 5) = 0;
  *(undefined8 *)(puVar14 + 3) = 0;
  *(undefined8 *)(puVar14 + 1) = 0;
  local_1c8 = (undefined *)CONCAT44(0xc1d00000,uVar1);
  local_1d0 = pppbVar5;
  FUN_710318b620(puVar14,&local_1d0,(long ****)ppppbVar10,ppppbVar11,pppplVar12,param_6,param_7,
                 param_8);
  uVar8 = param_1[0xfb];
  param_1[0xfb] = (long)puVar14;
  if (uVar8 != 0) {
    FUN_710318b9b0(uVar8,extraout_x1,(long ****)ppppbVar10,ppppbVar11,pppplVar12,param_6,param_7,
                   param_8);
    FUN_710392eb40(uVar8);
  }
  return;
}

