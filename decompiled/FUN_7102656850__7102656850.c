// addr:      7102656850
// offset:    0x2656850
// name:      FUN_7102656850
// mangled:   
// signature: undefined __cdecl FUN_7102656850(long * param_1, long * * * param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102656850(long *param_1,long ***param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  undefined4 uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  bool bVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  byte ****ppppbVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  long lVar19;
  uint *puVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  byte ***local_1b0;
  undefined1 *puStack_1a8;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined1 local_146;
  undefined8 local_145;
  undefined1 local_13d;
  undefined2 local_13c;
  undefined1 local_13a;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  long local_120;
  long lStack_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined1 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined2 local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  long ***local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  
  ppppbVar14 = &local_1b0;
  ppppbVar17 = &local_1b0;
  local_1b0 = (byte ***)0x0;
  puStack_1a8 = &DAT_100000001;
  uVar4 = (undefined4)param_6;
  local_1a0 = 0x1000000001;
  ppppbVar16 = param_4;
  pppplVar18 = param_5;
  FUN_710313e6a0(param_1,(long)param_2,(long ****)&local_1b0,param_4,param_5,param_6,param_7,param_8
                );
  param_1[0xb] = (long)param_2;
  param_1[0xc] = param_3;
  param_1[9] = (long)param_4;
  param_1[10] = 0;
  *param_1 = (long)&PTR_FUN_71050c83e0;
  param_1[0xd] = (long)param_5;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  param_1[0x10] = 0;
  plVar21 = param_1 + 0x18;
  *plVar21 = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar6 = lRam0000007107459008;
  lVar19 = _ConstantZero;
  pppplVar13 = (long ****)(param_1 + 0x1c);
  *pppplVar13 = param_2;
  *(undefined2 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)((long)param_1 + 0xea) = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1f] = lVar6;
  param_1[0x1e] = lVar19;
  param_1[0x21] = lVar6;
  param_1[0x20] = lVar19;
  bVar7 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)param_2,pppplVar13,ppppbVar16,pppplVar18,param_6,param_7,param_8);
  *(bool *)(param_1 + 0x1d) = bVar7;
  lVar19 = param_1[0xb];
  uVar4 = *(undefined4 *)(param_1[0xc] + 0xac);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x110,pppplVar13,ppppbVar16,pppplVar18,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000110;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar9 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x110,(long ****)ppppbVar14,ppppbVar16,pppplVar18,param_6,
                                  param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_71026569a4;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71026569a4:
  pcVar15 = "stc_stgdonkey_fireball_set";
  ppppbVar16 = (byte ****)&DAT_ffffffff;
  FUN_7103141660(puVar8,lVar19,(byte *)"stc_stgdonkey_fireball_set",(byte ****)&DAT_ffffffff,
                 pppplVar18,param_6,param_7,param_8);
  *plVar21 = (long)puVar8;
  uStack_8c = 0;
  uStack_98 = _DAT_7107521008;
  uStack_a0 = _ConstantZero;
  uVar22 = (undefined4)_ConstantZero;
  uVar24 = (undefined4)((ulong)_ConstantZero >> 0x20);
  uStack_a8 = DAT_7104466b80._8_8_;
  local_b0 = (long ***)DAT_7104466b80;
  local_90 = uVar4;
  if (puVar8[7] != 0) {
    plVar10 = *(long **)(puVar8[7] + 0x130);
    pcVar15 = (char *)&local_b0;
    ppppbVar16 = (byte ****)0x7f;
    pppplVar18 = (long ****)0x3;
    param_6 = 0;
    (**(code **)(*plVar10 + 0x100))(plVar10,0);
    uVar22 = (undefined4)_ConstantZero;
    uVar24 = (undefined4)((ulong)_ConstantZero >> 0x20);
  }
  auVar26._4_4_ = uVar24;
  auVar26._0_4_ = uVar22;
  auVar26._8_8_ = _DAT_7107521008;
  auVar5._4_4_ = uVar24;
  auVar5._0_4_ = uVar22;
  auVar5._8_8_ = _DAT_7107521008;
  auVar26 = NEON_ext(auVar26,auVar5,8,1);
  local_168 = 0x31ed91fca;
  uStack_198 = (ulong)auVar26._0_4_;
  local_128 = 0x31ed91fca;
  local_f8 = 0x425cbfc4f;
  local_f0 = 0x7fb997a80;
  local_108 = &DAT_3f8000003f800000;
  local_13a = 0xe;
  local_e0 = 0xbf800000;
  local_110 = 0;
  local_10a = 0;
  local_10c = 0;
  local_178 = 0x3f800000;
  lStack_118 = lRam0000007107459008;
  local_120 = _ConstantZero;
  local_1a0 = CONCAT44(uVar24,uVar22);
  local_170 = 0x3f800000;
  local_13c = 0;
  local_145 = 0;
  local_138 = 0x3c;
  local_130 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_dc = 0;
  local_c4 = 0xffffffff;
  local_c0 = 3;
  local_bc = 0x3f800000;
  local_b8 = 0;
  local_b6 = 0;
  lVar19 = param_1[0xc];
  local_190 = *(undefined4 *)(lVar19 + 0xb0);
  local_188 = *(undefined4 *)(lVar19 + 0xb4);
  local_184 = *(undefined4 *)(lVar19 + 0xb8);
  local_180 = *(undefined4 *)(lVar19 + 0xbc);
  uStack_17c = *(undefined4 *)(lVar19 + 0xc0);
  local_1b0 = (byte ***)0x0;
  puStack_1a8 = (undefined1 *)0x0;
  local_158 = 0x13beb18342;
  local_150 = 0x801;
  local_160 = 0x7003f;
  local_15c = 0x1f;
  local_148 = 0;
  local_146 = 0;
  local_174 = 0;
  local_13d = 0;
  plVar10 = (long *)param_1[0x18];
  uStack_18c = uVar4;
  if (plVar10[7] != 0) {
    plVar10 = *(long **)(plVar10[7] + 0xa0);
    pcVar15 = (char *)0x0;
    (**(code **)(*plVar10 + 0x68))(plVar10,0);
    plVar10 = (long *)*plVar21;
    ppppbVar16 = ppppbVar17;
  }
  FUN_710313ef20(plVar10);
  FUN_710313ef20(param_1);
  puVar20 = *(uint **)(param_1[0xb] + 0x340);
  fVar23 = *(float *)(param_1[0xc] + 0x7c);
  fVar25 = *(float *)(param_1[0xc] + 0x80);
  uVar1 = *puVar20;
  *puVar20 = puVar20[1];
  uVar2 = puVar20[3];
  uVar1 = uVar1 ^ uVar1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  puVar20[1] = puVar20[2];
  puVar20[2] = uVar2;
  puVar20[3] = uVar1;
  plVar21 = (long *)param_1[0x18];
  *(float *)((long)param_1 + 0xcc) = fVar23 + (fVar25 - fVar23) * (float)uVar1 * 2.3283064e-10;
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(param_1[0xc] + 0x94);
  uVar12 = extraout_x1;
  if ((char)plVar21[8] != '\0') {
    plVar10 = (long *)plVar21[6];
    if (((plVar10 != (long *)0x0) && ((char)plVar10[2] != '\0')) &&
       (*(undefined1 *)(plVar10 + 2) = 0, (char)plVar10[10] != '\0')) {
      plVar11 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar10 + 8));
      (**(code **)(*plVar11 + 0x48))(plVar11,0);
      *(undefined1 *)(plVar10 + 10) = 0;
    }
    (**(code **)(*plVar21 + 0x30))(plVar21);
    uVar12 = extraout_x1_00;
  }
  *(undefined1 *)(plVar21 + 8) = 0;
  lVar19 = param_1[9];
  if (lVar19 != 0) {
    *(undefined1 *)(lVar19 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar19 + 0x108),uVar12,(long ****)pcVar15,ppppbVar16,pppplVar18,param_6,
                   param_7,param_8);
  }
  puVar20 = *(uint **)(param_1[0xb] + 0x340);
  fVar23 = *(float *)(param_1[0xc] + 0x74);
  fVar25 = *(float *)(param_1[0xc] + 0x78);
  uVar1 = *puVar20;
  *puVar20 = puVar20[1];
  uVar2 = puVar20[3];
  uVar1 = uVar1 ^ uVar1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  puVar20[1] = puVar20[2];
  puVar20[2] = uVar2;
  puVar20[3] = uVar1;
  uVar2 = *(uint *)(param_1 + 0xe);
  *(float *)(param_1 + 0x1a) = fVar23 + (fVar25 - fVar23) * (float)uVar1 * 2.3283064e-10;
  if (uVar2 < 2) {
    pauVar3 = (undefined1 (*) [16])(&DAT_710532aa70)[(ulong)uVar2 * 3];
    if ((undefined1 (*) [16])(&DAT_710532aa78)[(ulong)uVar2 * 3] != pauVar3) {
      lVar19 = *(long *)*pauVar3;
      auVar26 = NEON_ext(*pauVar3,*pauVar3,8,1);
      param_1[0x11] = (ulong)auVar26._0_4_;
      param_1[0x10] = lVar19;
      return;
    }
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

