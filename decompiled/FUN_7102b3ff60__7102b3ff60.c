// addr:      7102b3ff60
// offset:    0x2b3ff60
// name:      FUN_7102b3ff60
// mangled:   
// signature: undefined __cdecl FUN_7102b3ff60(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102b3ff60(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  long ****pppplVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  float fVar14;
  byte ***local_1c0;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  undefined *puStack_190;
  char *local_188;
  char *local_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined *local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
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
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  long local_60;
  ulong uStack_58;
  undefined1 local_50;
  long ***local_40;
  undefined4 local_34;
  
  ppppbVar8 = &local_1c0;
  FUN_71025e5bd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_50 = 0;
  local_1b0 = PTR_s_stc_bg_s_03_set_7105115f58;
  uStack_64 = 0;
  pppplVar7 = (long ****)(param_1 + 0xee);
  local_1c0 = (byte ***)PTR_s_stc_bg_s_01_set_7105115f48;
  puStack_1b8 = PTR_s_stc_bg_s_02_set_7105115f50;
  local_198 = PTR_s_dyr_ufokinokor_set_7105115f70;
  puStack_190 = PTR_s_dyr_ufokinokoy_set_7105115f78;
  local_1a8 = PTR_s_dyr_bg_03_set_7105115f60;
  puStack_1a0 = PTR_s_dyr_bg_02_set_7105115f68;
  local_168 = PTR_s_dyr_flagk_all_set_7105115f90;
  puStack_160 = PTR_s_dyr_mario_ship_kemuri_p_set_7105115f98;
  local_178 = PTR_s_dyr_bg_02_set_7105115f80;
  puStack_170 = PTR_s_dyr_bg_03_set_7105115f88;
  local_148 = PTR_s_dyr_ufokinokog_set_7105115fb0;
  puStack_140 = PTR_s_dyr_ufokinokor_set_7105115fb8;
  local_188 = "STG_GALAXY_STAR";
  local_180 = "STG_GALAXY_SMOKE";
  local_138 = 6;
  local_134 = 7;
  local_130 = 4;
  local_12c = 5;
  local_158 = PTR_s_dye_effects_set_7105115fa0;
  puStack_150 = PTR_s_dyr_ufokinokoy_set_7105115fa8;
  uVar12 = 3;
  local_128 = 8;
  uStack_124 = 0xffffffff;
  local_120 = 8;
  uStack_11c = 0xffffffff;
  puVar10 = (undefined4 *)param_1[0xfe];
  fVar14 = (float)puVar10[2];
  uVar1 = uVar12;
  if (0.0 < fVar14) {
    uVar1 = 1;
  }
  local_f0 = CONCAT44(puVar10[1],*puVar10);
  uVar11 = 2;
  uVar2 = 0;
  if (fVar14 <= 0.0) {
    uVar2 = uVar11;
  }
  _local_118 = CONCAT44(uVar1,uVar2);
  uStack_e8 = (ulong)(uint)fVar14;
  local_e0 = *(undefined8 *)(puVar10 + 6);
  uStack_d8 = (ulong)(uint)puVar10[8];
  uVar1 = uVar12;
  uVar2 = uVar11;
  if (0.0 < (float)puVar10[8]) {
    uVar1 = 1;
    uVar2 = 0;
  }
  _local_110 = CONCAT44(uVar1,uVar2);
  _local_a0 = CONCAT44(puVar10[9],puVar10[3]);
  _local_78 = CONCAT44(puVar10[0xb],puVar10[5]);
  local_d0 = *(undefined8 *)(puVar10 + 0xc);
  uStack_c8 = (ulong)(uint)puVar10[0xe];
  uVar1 = uVar12;
  uVar2 = uVar11;
  if (0.0 < (float)puVar10[0xe]) {
    uVar1 = 1;
    uVar2 = 0;
  }
  _local_108 = CONCAT44(uVar1,uVar2);
  _local_88 = CONCAT44(puVar10[0x10],puVar10[10]);
  local_70 = puVar10[0x11];
  fVar14 = (float)puVar10[0x14];
  local_c0 = CONCAT44(puVar10[0x13],puVar10[0x12]);
  uVar1 = 0;
  if (fVar14 <= 0.0) {
    uVar1 = uVar11;
  }
  uStack_b8 = (ulong)(uint)fVar14;
  uVar2 = uVar12;
  if (0.0 < fVar14) {
    uVar2 = 1;
  }
  _local_100 = CONCAT44(uVar2,uVar1);
  _local_98 = CONCAT44(puVar10[0x15],puVar10[0xf]);
  local_6c = puVar10[0x17];
  local_b0 = CONCAT44(puVar10[0x19],puVar10[0x18]);
  uStack_a8 = (ulong)(uint)puVar10[0x1a];
  if (0.0 < (float)puVar10[0x1a]) {
    uVar12 = 1;
    uVar11 = 0;
  }
  _local_f8 = CONCAT44(uVar12,uVar11);
  _local_90 = CONCAT44(puVar10[4],puVar10[0x1b]);
  _local_80 = CONCAT44(puVar10[0x1c],puVar10[0x16]);
  uStack_68 = puVar10[0x1d];
  local_60 = param_1[0xf9];
  uStack_58 = (ulong)*(uint *)(param_1 + 0xfa);
  puVar3 = (undefined8 *)
           FUN_710392e290(0x10,0x310,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                          param_6,param_7,param_8);
  if (puVar3 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)0x310;
      pppplVar9 = &local_40;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar4 & 1) != 0) &&
         (puVar3 = (undefined8 *)
                   FUN_710392e290(0x10,0x310,pppplVar9,(byte ****)param_4,(long ****)param_5,param_6
                                  ,param_7,param_8), puVar3 != (undefined8 *)0x0))
      goto LAB_7102b40250;
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_7102b40250:
  pppplVar9 = (long ****)param_1[0x67];
  FUN_7102b40c50(puVar3,(long)param_1,pppplVar7,&local_1c0,pppplVar9,param_6,param_7,param_8);
  plVar5 = (long *)param_1[0x101];
  param_1[0x101] = (long)puVar3;
  uVar6 = extraout_x1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    uVar6 = extraout_x1_00;
  }
  if (*(int *)((long)param_1 + 0x734) == 1) {
    for (plVar5 = *(long **)(param_1[0x62] + 0xd0); plVar5 != *(long **)(param_1[0x62] + 0xd8);
        plVar5 = plVar5 + 2) {
      if ((*(uint *)(plVar5 + 1) < 2) &&
         (lVar13 = *plVar5, *(long *)(lVar13 + 0x68) == 0x1f0178d015)) {
        if (lVar13 == 0) {
          return;
        }
        *(undefined1 *)(lVar13 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar13 + 0x108),uVar6,pppplVar7,ppppbVar8,pppplVar9,param_6,param_7,
                       param_8);
        if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar13 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar13 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar13 + 0xe0) == '\0') {
          return;
        }
        *(undefined1 *)(*(long *)(lVar13 + 0xb0) + 0x10) = 0;
        return;
      }
    }
  }
  return;
}

