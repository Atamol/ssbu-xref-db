// addr:      710198b8d0
// offset:    0x198b8d0
// name:      FUN_710198b8d0
// mangled:   
// signature: undefined __cdecl FUN_710198b8d0(undefined1[16] param_1, float param_2, float param_3, undefined8 * param_4, ulong param_5, undefined * * param_6, byte * * * * param_7, long * * * * param_8, long param_9, undefined8 param_10, undefined8 param_11)


void FUN_710198b8d0(undefined1 param_1 [16],float param_2,float param_3,undefined8 *param_4,
                   ulong param_5,undefined **param_6,byte ****param_7,long ****param_8,long param_9,
                   undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  uint uVar2;
  short sVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ushort uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar14;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar15;
  undefined **ppuVar16;
  ulong uVar17;
  byte ****ppppbVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined1 *puVar23;
  long *plVar24;
  undefined2 extraout_h0;
  undefined2 extraout_h0_00;
  undefined2 uVar25;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar26;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 uVar27;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar28;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined **local_f0;
  ulong auStack_e8 [8];
  undefined **local_a8;
  long *local_a0;
  
  *(undefined1 *)(*(long *)(**(long **)param_4[1] + 0x600) + 0x4aa) = 1;
  if ((DAT_71050a7038 - 3U < 2) || ((param_5 & 1) == 0)) {
    FUN_7103778300(0x3f800000,param_4[3],0x7104421055);
    param_4[0x22] = 0;
    param_4[0x23] = 0;
    *(undefined8 *)((long)param_4 + 0x1a4) = 0;
    *(undefined8 *)((long)param_4 + 0x19c) = 0;
    *(undefined8 *)((long)param_4 + 0x194) = 0;
    *(undefined8 *)((long)param_4 + 0x18c) = 0;
    param_6 = (undefined **)0x0;
    *(undefined8 *)((long)param_4 + 0x184) = 0;
    *(undefined8 *)((long)param_4 + 0x17c) = 0;
    *(undefined8 *)((long)param_4 + 0x174) = 0;
    *(undefined8 *)((long)param_4 + 0x164) = 0;
    *(undefined4 *)((long)param_4 + 0x1ac) = 0;
    *(undefined8 *)((long)param_4 + 0x16c) = 0;
    param_4[0x36] = 0xffffffff;
    *(undefined4 *)(param_4 + 0x37) = 0xffffffff;
    *(undefined1 *)((long)param_4 + 0x1bc) = 0;
    *(undefined4 *)(param_4 + 0x2c) = 0;
    FUN_7103771a80(param_4 + 0x38,0,0);
    *(undefined4 *)(param_4 + 0x3a) = 0;
    if (0x12 < *(uint *)((long)param_4 + 0x43c)) goto LAB_710198c934;
    *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x43c) * 4 + 0x3f0) = 1;
    FUN_71022e6a40((long *)*DAT_7105328170,1,(char *)param_6,param_7,param_8,param_9,param_10,
                   param_11);
    uVar15 = extraout_x1;
    uVar25 = extraout_h0;
    uVar26 = extraout_var;
    uVar27 = extraout_var_01;
    uVar28 = extraout_var_03;
    uVar29 = extraout_var_05;
  }
  else {
    switch(DAT_71050a7038) {
    case 0:
      param_4[0x22] = 0;
      param_4[0x23] = 0;
      *(undefined8 *)((long)param_4 + 0x1a4) = 0;
      *(undefined8 *)((long)param_4 + 0x19c) = 0;
      *(undefined8 *)((long)param_4 + 0x194) = 0;
      *(undefined8 *)((long)param_4 + 0x18c) = 0;
      *(undefined8 *)((long)param_4 + 0x184) = 0;
      *(undefined8 *)((long)param_4 + 0x17c) = 0;
      *(undefined8 *)((long)param_4 + 0x174) = 0;
      *(undefined8 *)((long)param_4 + 0x164) = 0;
      *(undefined8 *)((long)param_4 + 0x16c) = 0;
      param_4[0x36] = 0xffffffff;
      *(undefined4 *)(param_4 + 0x37) = 0xffffffff;
      *(undefined4 *)((long)param_4 + 0x1ac) = 0;
      *(undefined1 *)((long)param_4 + 0x1bc) = 0;
      *(undefined4 *)(param_4 + 0x2c) = 1;
      FUN_7103771a80(param_4 + 0x39,3,0);
      param_6 = (undefined **)0x0;
      *(undefined4 *)(param_4 + 0x3a) = 3;
      FUN_7103771a80(param_4 + 0x3b,1,0);
      if (0x12 < *(uint *)((long)param_4 + 0x43c)) goto LAB_710198c934;
      *(undefined4 *)((long)param_4 + (long)(int)*(uint *)((long)param_4 + 0x43c) * 4 + 0x3f0) = 6;
      FUN_7103778760(param_4[3],0x7104421055);
      FUN_7103778760(param_4[3],0x710435ad98);
      iVar8 = 2;
      goto LAB_710198bcc4;
    case 1:
      FUN_7103778760(param_4[3],0x7104421055);
      param_4[0x22] = 0;
      param_4[0x23] = 0;
      *(undefined8 *)((long)param_4 + 0x1a4) = 0;
      *(undefined8 *)((long)param_4 + 0x19c) = 0;
      *(undefined8 *)((long)param_4 + 0x194) = 0;
      *(undefined8 *)((long)param_4 + 0x18c) = 0;
      param_6 = (undefined **)0x0;
      *(undefined8 *)((long)param_4 + 0x184) = 0;
      *(undefined8 *)((long)param_4 + 0x17c) = 0;
      *(undefined8 *)((long)param_4 + 0x174) = 0;
      *(undefined8 *)((long)param_4 + 0x164) = 0;
      *(undefined4 *)((long)param_4 + 0x1ac) = 0;
      *(undefined8 *)((long)param_4 + 0x16c) = 0;
      param_4[0x36] = 0xffffffff;
      *(undefined4 *)(param_4 + 0x37) = 0xffffffff;
      *(undefined1 *)((long)param_4 + 0x1bc) = 0;
      *(undefined4 *)(param_4 + 0x2c) = 0;
      FUN_7103771a80(param_4 + 0x38,0,0);
      *(undefined4 *)(param_4 + 0x3a) = 0;
      break;
    case 2:
      FUN_7103778760(param_4[3],0x7104421055);
      param_4[0x22] = 0;
      param_4[0x23] = 0;
      *(undefined8 *)((long)param_4 + 0x1a4) = 0;
      *(undefined8 *)((long)param_4 + 0x19c) = 0;
      *(undefined8 *)((long)param_4 + 0x194) = 0;
      *(undefined8 *)((long)param_4 + 0x18c) = 0;
      param_6 = (undefined **)0x0;
      *(undefined8 *)((long)param_4 + 0x184) = 0;
      *(undefined8 *)((long)param_4 + 0x17c) = 0;
      *(undefined8 *)((long)param_4 + 0x174) = 0;
      *(undefined8 *)((long)param_4 + 0x164) = 0;
      *(undefined4 *)((long)param_4 + 0x1ac) = 0;
      *(undefined8 *)((long)param_4 + 0x16c) = 0;
      param_4[0x36] = 0xffffffff;
      *(undefined4 *)(param_4 + 0x37) = 0xffffffff;
      *(undefined1 *)((long)param_4 + 0x1bc) = 0;
      *(undefined4 *)(param_4 + 0x2c) = 0;
      FUN_7103771a80(param_4 + 0x38,1,0);
      uVar7 = *(uint *)((long)param_4 + 0x43c);
      *(undefined4 *)(param_4 + 0x3a) = 1;
      goto joined_r0x00710198bb70;
    default:
      FUN_7103778300(0x3f800000,param_4[3],0x7104421055);
      break;
    case 5:
      FUN_7103778760(param_4[3],0x7104421055);
      param_4[0x22] = 0;
      param_4[0x23] = 0;
      *(undefined8 *)((long)param_4 + 0x1a4) = 0;
      *(undefined8 *)((long)param_4 + 0x19c) = 0;
      *(undefined8 *)((long)param_4 + 0x194) = 0;
      *(undefined8 *)((long)param_4 + 0x18c) = 0;
      param_6 = (undefined **)0x0;
      *(undefined8 *)((long)param_4 + 0x184) = 0;
      *(undefined8 *)((long)param_4 + 0x17c) = 0;
      *(undefined8 *)((long)param_4 + 0x174) = 0;
      *(undefined8 *)((long)param_4 + 0x164) = 0;
      *(undefined4 *)((long)param_4 + 0x1ac) = 0;
      *(undefined8 *)((long)param_4 + 0x16c) = 0;
      param_4[0x36] = 0xffffffff;
      *(undefined4 *)(param_4 + 0x37) = 0xffffffff;
      *(undefined1 *)((long)param_4 + 0x1bc) = 0;
      *(undefined4 *)(param_4 + 0x2c) = 0;
      FUN_7103771a80(param_4 + 0x38,2,0);
      *(undefined4 *)(param_4 + 0x3a) = 2;
    }
    uVar7 = *(uint *)((long)param_4 + 0x43c);
joined_r0x00710198bb70:
    if (0x12 < uVar7) {
LAB_710198c934:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar8 = 1;
    *(undefined4 *)((long)param_4 + (long)(int)uVar7 * 4 + 0x3f0) = 1;
LAB_710198bcc4:
    FUN_71022e6bc0((long *)*DAT_7105328170,iVar8,(char *)param_6,param_7,param_8,param_9,param_10,
                   param_11);
    uVar15 = extraout_x1_00;
    uVar25 = extraout_h0_00;
    uVar26 = extraout_var_00;
    uVar27 = extraout_var_02;
    uVar28 = extraout_var_04;
    uVar29 = extraout_var_06;
  }
  *(undefined4 *)(param_4 + 0xc9) = 0xffffffff;
  DAT_71050a7038 = 3;
  auVar4._2_2_ = uVar26;
  auVar4._0_2_ = uVar25;
  auVar4._4_4_ = uVar27;
  auVar4._8_4_ = uVar28;
  auVar4._12_4_ = uVar29;
  FUN_7101989ee0(auVar4,param_2,param_3,(long)param_4,uVar15,param_6,param_7,param_8,param_9,
                 param_10,param_11);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_6 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar9 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  if (*(char *)((long)piVar9 + 0x17) == '\0') {
    FUN_7103778300(0x3f800000,param_4[3],0x71043cecdb);
    lVar21 = *(long *)(param_4[0x3b] + 0x1b8);
    if (lVar21 != 0) {
      lVar22 = param_4[0x3b] + 0x1b8;
      lVar20 = lVar22;
      do {
        if (1 < *(int *)(lVar21 + 0x20)) {
          lVar20 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 2) * 8);
      } while (lVar21 != 0);
      if ((lVar20 != lVar22) && (*(int *)(lVar20 + 0x20) < 3)) goto LAB_710198bd78;
    }
  }
  else {
    FUN_7103778300(0x3f800000,param_4[3],0x71043df973);
    lVar21 = *(long *)(param_4[0x3b] + 0x1b8);
    if (lVar21 != 0) {
      lVar22 = param_4[0x3b] + 0x1b8;
      lVar20 = lVar22;
      do {
        if (0 < *(int *)(lVar21 + 0x20)) {
          lVar20 = lVar21;
        }
        lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 1) * 8);
      } while (lVar21 != 0);
      if ((lVar20 != lVar22) && (*(int *)(lVar20 + 0x20) < 2)) {
LAB_710198bd78:
        plVar24 = *(long **)(lVar20 + 0x28);
        if (plVar24 != (long *)0x0) {
          (**(code **)(*plVar24 + 0x1f8))(plVar24,0);
          param_6 = (undefined **)0x0;
          (**(code **)(*plVar24 + 0x388))(plVar24,1);
        }
      }
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_6 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar10 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  sVar3 = *(short *)((long)piVar10 + 0xa6);
  iVar8 = piVar10[0x2a];
  puVar1 = param_4 + 2;
  FUN_7103776910(&local_f0,(long)puVar1,(long ****)"set_txt_atk_num",param_6,param_7,param_8,param_9
                 ,param_10,param_11);
  uVar15 = 1;
  uVar17 = (long)sVar3 & 0xffffffff;
  FUN_710377a280((long)&local_f0,(byte *)"mnu_amiibo_attack_n",1);
  uVar11 = auStack_e8[0];
  local_f0 = &PTR_FUN_710523d9a8;
  auStack_e8[0] = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_f0,(long)puVar1,(long ****)"set_txt_def_num",uVar15,uVar17,param_8,param_9,
                 param_10,param_11);
  uVar15 = 1;
  uVar17 = (long)(short)iVar8 & 0xffffffff;
  FUN_710377a280((long)&local_f0,(byte *)"mnu_amiibo_defense_n",1);
  uVar11 = auStack_e8[0];
  local_f0 = &PTR_FUN_710523d9a8;
  auStack_e8[0] = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  fVar30 = (float)(int)sVar3;
  fVar32 = (float)(int)(short)iVar8;
  fVar31 = fVar32;
  if (fVar32 <= fVar30) {
    fVar31 = fVar30;
  }
  fVar35 = 0.0;
  fVar33 = (float)NEON_ucvtf((uint)*(ushort *)
                                    (*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8) + 0x194));
  fVar33 = 10000.0 / fVar33;
  fVar31 = fVar31 * fVar33;
  fVar34 = (fVar33 * fVar30) / 10000.0;
  fVar32 = (fVar33 * fVar32) / 10000.0;
  fVar30 = fVar34;
  if (1.0 < fVar34) {
    fVar30 = 1.0;
  }
  fVar33 = 0.0;
  if (0.0 <= fVar34) {
    fVar33 = fVar30;
  }
  fVar30 = fVar32;
  if (1.0 < fVar32) {
    fVar30 = 1.0;
  }
  fVar34 = fVar35;
  if (0.0 <= fVar32) {
    fVar34 = fVar30;
  }
  if (1.0 <= fVar31) {
    if (10000.0 < fVar31) {
      fVar31 = 10000.0;
    }
    fVar31 = fVar31 / 10000.0;
  }
  else {
    fVar31 = 0.0001;
  }
  fVar30 = *(float *)(*DAT_7105329fa0 + 0x2d0);
  if (*(float *)(*DAT_7105329fa0 + 0x2d0) <= 0.001) {
    fVar30 = 0.001;
  }
  fVar32 = powf(ABS(1.0 - fVar31),fVar30);
  fVar30 = powf(fVar31,1.0 / fVar30);
  fVar31 = (((1.0 - fVar32) + fVar30) * 0.5) / fVar31;
  fVar33 = fVar33 * fVar31;
  fVar34 = fVar34 * fVar31;
  fVar31 = fVar33;
  if (1.0 < fVar33) {
    fVar31 = 1.0;
  }
  FUN_7103776910(&local_a8,(long)puVar1,(long ****)"set_pic_atk_bar",uVar15,uVar17,param_8,param_9,
                 param_10,param_11);
  plVar24 = local_a0;
  lVar21 = *local_a0;
  fVar30 = 0.0;
  if (lVar21 != 0) {
    fVar35 = ABS(*(float *)(lVar21 + 0x50));
    fVar30 = ABS(*(float *)(lVar21 + 0x54));
  }
  fVar32 = -1.0;
  if (0.0 <= fVar33) {
    fVar32 = fVar31 + -1.0;
  }
  local_f0 = (undefined **)
             (ulong)(uint)(fVar32 * (fVar35 + -34.0) *
                                    ((fVar30 * -0.57735026) / (fVar35 + -34.0) + 1.0));
  auStack_e8[0] = 0;
  FUN_7103779770(1.0,(long)local_a0,&local_f0);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  FUN_7103776910(&local_a8,(long)puVar1,(long ****)"set_pic_atk_bar_shadow",uVar15,uVar17,param_8,
                 param_9,param_10,param_11);
  plVar24 = local_a0;
  lVar21 = *local_a0;
  if (lVar21 == 0) {
    fVar31 = 0.0;
    fVar30 = fVar31;
  }
  else {
    fVar31 = ABS(*(float *)(lVar21 + 0x54));
    fVar30 = ABS(*(float *)(lVar21 + 0x50));
  }
  local_f0 = (undefined **)
             (ulong)(uint)(fVar32 * (fVar30 + -34.0) *
                                    ((fVar31 * -0.57735026) / (fVar30 + -34.0) + 1.0));
  auStack_e8[0] = 0;
  FUN_7103779770(1.0,(long)local_a0,&local_f0);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  fVar31 = fVar34;
  if (1.0 < fVar34) {
    fVar31 = 1.0;
  }
  FUN_7103776910(&local_a8,(long)puVar1,(long ****)"set_pic_def_bar",uVar15,uVar17,param_8,param_9,
                 param_10,param_11);
  plVar24 = local_a0;
  lVar21 = *local_a0;
  if (lVar21 == 0) {
    fVar30 = 0.0;
    fVar32 = fVar30;
  }
  else {
    fVar30 = ABS(*(float *)(lVar21 + 0x54));
    fVar32 = ABS(*(float *)(lVar21 + 0x50));
  }
  fVar33 = -1.0;
  if (0.0 <= fVar34) {
    fVar33 = fVar31 + -1.0;
  }
  local_f0 = (undefined **)
             (ulong)(uint)(fVar33 * (fVar32 + -34.0) *
                                    ((fVar30 * -0.57735026) / (fVar32 + -34.0) + 1.0));
  auStack_e8[0] = 0;
  FUN_7103779770(1.0,(long)local_a0,&local_f0);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  FUN_7103776910(&local_a8,(long)puVar1,(long ****)"set_pic_def_bar_shadow",uVar15,uVar17,param_8,
                 param_9,param_10,param_11);
  plVar24 = local_a0;
  lVar21 = *local_a0;
  if (lVar21 == 0) {
    fVar31 = 0.0;
    fVar30 = fVar31;
  }
  else {
    fVar31 = ABS(*(float *)(lVar21 + 0x54));
    fVar30 = ABS(*(float *)(lVar21 + 0x50));
  }
  local_f0 = (undefined **)
             (ulong)(uint)(fVar33 * (fVar30 + -34.0) *
                                    ((fVar31 * -0.57735026) / (fVar30 + -34.0) + 1.0));
  auStack_e8[0] = 0;
  FUN_7103779770(1.0,(long)local_a0,&local_f0);
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  uVar7 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),
                         *(ushort *)((long)piVar10 + 0xa2));
  FUN_7103776910(&local_f0,(long)puVar1,(long ****)"set_text_level_num",uVar15,uVar17,param_8,
                 param_9,param_10,param_11);
  ppppbVar18 = (byte ****)(ulong)(uVar7 & 0xff);
  ppuVar16 = (undefined **)0x1;
  FUN_710377a280((long)&local_f0,(byte *)"mnu_amiibo_level_n",1);
  uVar11 = auStack_e8[0];
  local_f0 = &PTR_FUN_710523d9a8;
  auStack_e8[0] = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  switch(*(undefined1 *)((long)piVar10 + 0x103)) {
  case 0:
    lVar21 = param_4[3];
    pcVar14 = "attribute_none";
    break;
  case 1:
    lVar21 = param_4[3];
    pcVar14 = "attribute_attack";
    break;
  case 2:
    lVar21 = param_4[3];
    pcVar14 = "attribute_defense";
    break;
  case 3:
    lVar21 = param_4[3];
    pcVar14 = "attribute_throw";
    break;
  default:
    goto switchD_710198c238_default;
  }
  FUN_7103778300(0x3f800000,lVar21,(long)pcVar14);
switchD_710198c238_default:
  uVar15 = FUN_71032626e0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),*(ulong *)(piVar10 + 2));
  bVar5 = FUN_7101767150((undefined8 *)((long)piVar10 + 0xc5),(int)uVar15);
  FUN_71003a4ca0((uint *)&local_f0,"mnu_amiibo_personal_%02d",(ulong)bVar5,ppuVar16,ppppbVar18,
                 param_8,param_9,param_10,param_11);
  FUN_7103776910(&local_a8,(long)puVar1,(long ****)"set_txt_personality",ppuVar16,ppppbVar18,param_8
                 ,param_9,param_10,param_11);
  FUN_710377a120((long)&local_a8,(char *)auStack_e8,ppuVar16,ppppbVar18,param_8,param_9,param_10,
                 param_11);
  plVar24 = local_a0;
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = (long *)0x0;
  if (plVar24 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar24);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar16 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar10 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  bVar5 = *(byte *)((long)piVar10 + 0xaa);
  uVar7 = bVar5 + 0x2e;
  uVar19 = (uint)bVar5;
  uVar2 = uVar19;
  if (0xde < bVar5) {
    uVar2 = uVar7;
  }
  if (uVar2 == 0) {
LAB_710198c3fc:
    FUN_7103778300(0x3f800000,param_4[0x13],0x7104339aab);
  }
  else {
    if (0xde < uVar2) {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      uVar13 = (ushort)uVar2;
      bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),uVar13);
      if ((bVar6) && (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),uVar13), (int)uVar11 < 0xe))
      {
        lVar21 = *(long *)(DAT_710532f730 + 8);
        bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),uVar13);
        if ((bVar6) &&
           (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),uVar13), (int)uVar11 < 0xe)) {
          uVar19 = (uint)*(byte *)((long)piVar10 + 0xaa);
          uVar7 = uVar19 + 0x2e;
          goto joined_r0x00710198c3c8;
        }
      }
      goto LAB_710198c3fc;
    }
joined_r0x00710198c3c8:
    if ((uVar19 < 0xdf) && (uVar7 = uVar19, uVar19 == 0)) goto LAB_710198c3fc;
    if (0xde < uVar7) {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),(ushort)uVar7);
      if ((!bVar6) ||
         (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),(ushort)uVar7), 0xd < (int)uVar11))
      goto LAB_710198c3fc;
    }
    FUN_7103778300(0x3f800000,param_4[0x13],0x71042b3c6d);
    ppuVar16 = (undefined **)(ulong)uVar7;
    FUN_71019b6cd0((long)(param_4 + 0x12),(long *)*param_4,(long *********)ppuVar16,ppppbVar18,
                   param_8,param_9,param_10,param_11);
  }
  bVar5 = *(byte *)((long)piVar10 + 0xab);
  uVar7 = bVar5 + 0x2e;
  uVar19 = (uint)bVar5;
  uVar2 = uVar19;
  if (0xde < bVar5) {
    uVar2 = uVar7;
  }
  if (uVar2 == 0) {
LAB_710198c508:
    FUN_7103778300(0x3f800000,param_4[0x18],0x7104339aab);
  }
  else {
    if (0xde < uVar2) {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      uVar13 = (ushort)uVar2;
      bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),uVar13);
      if ((bVar6) && (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),uVar13), (int)uVar11 < 0xe))
      {
        lVar21 = *(long *)(DAT_710532f730 + 8);
        bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),uVar13);
        if ((bVar6) &&
           (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),uVar13), (int)uVar11 < 0xe)) {
          uVar19 = (uint)*(byte *)((long)piVar10 + 0xab);
          uVar7 = uVar19 + 0x2e;
          goto joined_r0x00710198c4d4;
        }
      }
      goto LAB_710198c508;
    }
joined_r0x00710198c4d4:
    if ((uVar19 < 0xdf) && (uVar7 = uVar19, uVar19 == 0)) goto LAB_710198c508;
    if (0xde < uVar7) {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),(ushort)uVar7);
      if ((!bVar6) ||
         (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),(ushort)uVar7), 0xd < (int)uVar11))
      goto LAB_710198c508;
    }
    FUN_7103778300(0x3f800000,param_4[0x18],0x71042b3c6d);
    ppuVar16 = (undefined **)(ulong)uVar7;
    FUN_71019b6cd0((long)(param_4 + 0x17),(long *)*param_4,(long *********)ppuVar16,ppppbVar18,
                   param_8,param_9,param_10,param_11);
  }
  bVar5 = *(byte *)(piVar10 + 0x2b);
  uVar7 = bVar5 + 0x2e;
  uVar19 = (uint)bVar5;
  uVar2 = uVar19;
  if (0xde < bVar5) {
    uVar2 = uVar7;
  }
  if (uVar2 != 0) {
    if (uVar2 < 0xdf) {
joined_r0x00710198c5e0:
      if ((0xde < uVar19) || (uVar7 = uVar19, uVar19 != 0)) {
        if (0xde < uVar7) {
          lVar21 = *(long *)(DAT_710532f730 + 8);
          bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),(ushort)uVar7);
          if ((!bVar6) ||
             (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),(ushort)uVar7), 0xd < (int)uVar11))
          goto LAB_710198c614;
        }
        FUN_7103778300(0x3f800000,param_4[0x1d],0x71042b3c6d);
        ppuVar16 = (undefined **)(ulong)uVar7;
        FUN_71019b6cd0((long)(param_4 + 0x1c),(long *)*param_4,(long *********)ppuVar16,ppppbVar18,
                       param_8,param_9,param_10,param_11);
        uVar15 = extraout_x1_01;
        goto LAB_710198c628;
      }
    }
    else {
      lVar21 = *(long *)(DAT_710532f730 + 8);
      uVar13 = (ushort)uVar2;
      bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),uVar13);
      if ((bVar6) && (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),uVar13), (int)uVar11 < 0xe))
      {
        lVar21 = *(long *)(DAT_710532f730 + 8);
        bVar6 = FUN_71032a2c10(*(long *)(lVar21 + 0x218),uVar13);
        if ((bVar6) &&
           (uVar11 = FUN_71032a2f50(*(long *)(lVar21 + 0x218),uVar13), (int)uVar11 < 0xe)) {
          uVar19 = (uint)*(byte *)(piVar10 + 0x2b);
          uVar7 = uVar19 + 0x2e;
          goto joined_r0x00710198c5e0;
        }
      }
    }
  }
LAB_710198c614:
  FUN_7103778300(0x3f800000,param_4[0x1d],0x7104339aab);
  uVar15 = extraout_x1_02;
LAB_710198c628:
  FUN_710198af00((long)param_4,uVar15,ppuVar16,ppppbVar18,param_8,param_9,param_10,param_11);
  lVar21 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  auStack_e8[0] = auStack_e8[0] & 0xffffffffffffff00;
  local_f0 = (undefined **)0x811c9dc5;
  FUN_7101af53d0(*(long *)(lVar21 + 0x80),(uint *)&local_f0,ppuVar16,ppppbVar18,param_8,param_9,
                 param_10,param_11);
  lVar21 = *(long *)(lVar21 + 0x80);
  pcVar14 = (char *)(lVar21 + 0x11b4);
  if (*pcVar14 != '\0') {
    *pcVar14 = '\0';
  }
  lVar21 = *(long *)(lVar21 + 0x2268);
  if ((lVar21 != 0) && (lVar22 = *(long *)(lVar21 + 0x1b8), lVar22 != 0)) {
    lVar20 = lVar21 + 0x1b8;
    do {
      if (2 < *(int *)(lVar22 + 0x20)) {
        lVar20 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 3) * 8);
    } while (lVar22 != 0);
    if (((lVar20 != lVar21 + 0x1b8) && (*(int *)(lVar20 + 0x20) < 4)) &&
       (plVar24 = *(long **)(lVar20 + 0x28), plVar24 != (long *)0x0)) {
      (**(code **)(*plVar24 + 0x1f8))(plVar24,1);
      (**(code **)(*plVar24 + 0x388))(plVar24,0,0);
    }
  }
  if (*(char *)((long)piVar9 + 0x17) != '\0') {
    puVar23 = *(undefined1 **)(piVar9 + 2);
    lVar21 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar7 = FUN_71032632a0(lVar21,(ulong)puVar23);
    if ((uVar7 & 1) != 0) {
      puVar23 = FUN_71032631a0(lVar21,0x11b1ccb807);
    }
    puVar12 = FUN_71032631a0(lVar21,0x15d7061f77);
    if ((((ulong)puVar23 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar23 & 0xffffffffff) != 0)) {
      if (((((ulong)puVar12 & 0xff00000000000000) != 0xc100000000000000) ||
          (((ulong)puVar12 & 0xffffffffff) == 0)) ||
         ((((ulong)puVar12 ^ (ulong)puVar23) & 0xffffffffff) != 0)) {
        FUN_71032631a0(lVar21,0x1257ab1d87);
      }
    }
    else if (((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)puVar12 & 0xffffffffff) != 0) {
      FUN_71032631a0(lVar21,0x1257ab1d87);
    }
    if (*(long **)*DAT_7105328170 != (long *)0x0) {
      FUN_7103375650(*(long **)*DAT_7105328170,"EDIT_MII_TYPE",&DAT_71042b2a84);
    }
  }
  return;
}

