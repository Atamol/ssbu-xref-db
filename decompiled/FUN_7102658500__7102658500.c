// addr:      7102658500
// offset:    0x2658500
// name:      FUN_7102658500
// mangled:   
// signature: undefined __cdecl FUN_7102658500(long * param_1, long * * * param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102658500(long *param_1,long ***param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long ****pppplVar10;
  char *pcVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  long **pplVar14;
  undefined4 *puVar15;
  long lVar16;
  long *plVar17;
  long ***ppplVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  long ***local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_180;
  undefined4 uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  ulong uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 local_119;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  long local_f0;
  long lStack_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined2 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_74 [5];
  
  local_180 = 0;
  uStack_17c = 0;
  uStack_178 = 1;
  uStack_174 = 1;
  local_170 = 0x1000000001;
  ppppbVar12 = param_4;
  pppplVar13 = param_5;
  FUN_710313e6a0(param_1,(long)param_2,(long ****)&local_180,param_4,param_5,param_6,param_7,param_8
                );
  param_1[0xd] = (long)param_5;
  *param_1 = (long)&PTR_FUN_71050c85b0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffff00000000;
  param_1[9] = (long)param_4;
  param_1[10] = 0;
  param_1[0xb] = (long)param_2;
  param_1[0xc] = param_3;
  param_1[0x14] = -1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pplVar14 = param_2[0x67];
  plVar7 = param_1 + 0x15;
  *plVar7 = (long)&PTR_FUN_71050c8880;
  *(undefined4 *)(param_1 + 0x1a) = 0xbf800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = (long)pplVar14;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar4 = lRam0000007107459008;
  lVar16 = _ConstantZero;
  pppplVar10 = (long ****)(param_1 + 0x1e);
  *pppplVar10 = param_2;
  *(undefined2 *)(param_1 + 0x1f) = 1;
  *(undefined1 *)((long)param_1 + 0xfa) = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x21] = lVar4;
  param_1[0x20] = lVar16;
  param_1[0x23] = lVar4;
  param_1[0x22] = lVar16;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)param_2,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,param_8);
  *(bool *)(param_1 + 0x1f) = bVar5;
  param_1[0x28] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  local_180 = 2;
  uStack_17c = 0;
  uStack_178 = 0x3f800000;
  uStack_174 = 0;
  FUN_710265be30((long)plVar7,(undefined8 *)&local_180,pppplVar10,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  local_180 = 2;
  uStack_17c = 0;
  uStack_178 = 0x41e80000;
  uStack_174 = 0;
  FUN_710265be30((long)plVar7,(undefined8 *)&local_180,pppplVar10,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  local_180 = 2;
  uStack_17c = 0;
  uStack_178 = 0x426c0000;
  uStack_174 = 0;
  FUN_710265be30((long)plVar7,(undefined8 *)&local_180,pppplVar10,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  local_180 = 2;
  uStack_17c = 0;
  uStack_178 = 0x42b20000;
  uStack_174 = 0;
  FUN_710265be30((long)plVar7,(undefined8 *)&local_180,pppplVar10,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  local_180 = 2;
  uStack_17c = 0;
  uStack_178 = 0x42ee0000;
  uStack_174 = 0;
  FUN_710265be30((long)plVar7,(undefined8 *)&local_180,pppplVar10,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  puVar15 = *(undefined4 **)(param_1[0xc] + 200);
  if (*(undefined4 **)(param_1[0xc] + 0xd0) == puVar15) goto LAB_7102658ce4;
  uVar6 = *puVar15;
  local_da = 0;
  local_170 = _ConstantZero;
  auVar1._8_8_ = _DAT_7107521008;
  auVar1._0_8_ = _ConstantZero;
  auVar19._8_8_ = _DAT_7107521008;
  auVar19._0_8_ = _ConstantZero;
  auVar19 = NEON_ext(auVar19,auVar1,8,1);
  uStack_178 = auVar19._0_4_;
  uStack_168 = (ulong)uStack_178;
  local_f0 = _ConstantZero;
  lStack_e8 = lRam0000007107459008;
  local_d8 = 0x3f800000;
  local_138 = 0x31ed91fca;
  local_10c = 0;
  local_10a = 0xe;
  uStack_111 = 0;
  uStack_10e = 0;
  uStack_115 = 0;
  local_f8 = 0x31ed91fca;
  local_e0 = 0;
  local_100 = 0;
  local_dc = 0;
  local_d4 = 0x3f800000;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0xbf800000;
  local_c8 = 0x425cbfc4f;
  local_c0 = 0x7fb997a80;
  local_9c = 0;
  local_a4 = 0;
  local_ac = 0;
  local_94 = 0xffffffff;
  local_90 = 3;
  local_8c = 0x3f800000;
  local_88 = 0;
  local_86 = 0;
  _local_160 = CONCAT44(uVar6,puVar15[1]);
  local_158 = *(undefined8 *)(puVar15 + 2);
  local_150 = *(undefined8 *)(puVar15 + 4);
  uStack_174 = 0;
  local_180 = (undefined4)_ConstantZero;
  uStack_17c = (undefined4)((ulong)_ConstantZero >> 0x20);
  _local_148 = CONCAT44(puVar15[6],0x3f800000);
  local_140 = puVar15[7];
  local_128 = 0x15a2c502b3;
  local_120 = 0x202;
  uStack_11c = 1;
  uStack_11b = 0;
  uStack_11a = 0;
  local_119 = 0;
  local_12c = 0x1f;
  local_130 = 0x7003f;
  local_108 = 0x3c;
  uStack_118 = 0;
  uStack_116 = 0;
  uStack_114 = 0;
  uStack_112 = 0;
  uStack_110 = 0;
  uStack_10d = 0;
  lVar16 = param_1[0xb];
  plVar7 = (long *)FUN_710392e290(0x10,0x110,pppplVar10,ppppbVar12,pppplVar13,param_6,param_7,
                                  param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74[0] = 0;
      local_1b0 = (long ***)&DAT_00000110;
      pppplVar10 = &local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
      if (((uVar8 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x110,pppplVar10,ppppbVar12,pppplVar13,param_6,
                                          param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_71026588a4;
    }
    plVar7 = (long *)0x0;
  }
LAB_71026588a4:
  pcVar11 = "dyr_stgdonkey_jack_set";
  ppppbVar12 = (byte ****)&DAT_ffffffff;
  FUN_7103141660(plVar7,lVar16,(byte *)"dyr_stgdonkey_jack_set",(byte ****)&DAT_ffffffff,pppplVar13,
                 param_6,param_7,param_8);
  param_1[0x1b] = (long)plVar7;
  uStack_198 = _DAT_7107521008;
  local_1a0 = _ConstantZero;
  uVar20 = DAT_7104465ce0._8_8_;
  ppplVar18 = (long ***)DAT_7104465ce0;
  uStack_18c = 0;
  local_1b0 = ppplVar18;
  uStack_1a8 = uVar20;
  local_190 = uVar6;
  if (plVar7[7] != 0) {
    plVar7 = *(long **)(plVar7[7] + 0x130);
    pcVar11 = (char *)&local_1b0;
    ppppbVar12 = (byte ****)0x7f;
    pppplVar13 = (long ****)0x3;
    param_6 = 0;
    (**(code **)(*plVar7 + 0x100))(plVar7,0);
    plVar7 = (long *)param_1[0x1b];
  }
  if (plVar7[7] != 0) {
    plVar7 = *(long **)(plVar7[7] + 0xa0);
    ppppbVar12 = (byte ****)&local_180;
    pcVar11 = (char *)0x0;
    (**(code **)(*plVar7 + 0x68))(plVar7,0);
    plVar7 = (long *)param_1[0x1b];
  }
  if ((char)plVar7[8] != '\0') {
    plVar17 = (long *)plVar7[6];
    if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
       (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
      plVar9 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
      (**(code **)(*plVar9 + 0x48))(plVar9,0);
      *(undefined1 *)(plVar17 + 10) = 0;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7);
  }
  *(undefined1 *)(plVar7 + 8) = 0;
  lVar16 = *(long *)(param_1[0xc] + 200);
  if ((ulong)((*(long *)(param_1[0xc] + 0xd0) - lVar16 >> 2) * -0x71c71c71c71c71c7) < 2) {
LAB_7102658ce4:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar6 = *(undefined4 *)(lVar16 + 0x24);
  local_da = 0;
  local_170 = _ConstantZero;
  auVar3._8_8_ = _DAT_7107521008;
  auVar3._0_8_ = _ConstantZero;
  auVar2._8_8_ = _DAT_7107521008;
  auVar2._0_8_ = _ConstantZero;
  auVar19 = NEON_ext(auVar2,auVar3,8,1);
  uStack_178 = auVar19._0_4_;
  uStack_168 = (ulong)uStack_178;
  local_d8 = 0x3f800000;
  local_f0 = _ConstantZero;
  lStack_e8 = lRam0000007107459008;
  local_10a = 0xe;
  local_138 = 0x31ed91fca;
  local_10c = 0;
  uStack_111 = 0;
  uStack_10e = 0;
  uStack_115 = 0;
  local_f8 = 0x31ed91fca;
  local_e0 = 0;
  local_100 = 0;
  local_dc = 0;
  local_d4 = 0x3f800000;
  local_c8 = 0x425cbfc4f;
  local_c0 = 0x7fb997a80;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0xbf800000;
  local_9c = 0;
  local_a4 = 0;
  local_ac = 0;
  local_94 = 0xffffffff;
  local_90 = 3;
  local_8c = 0x3f800000;
  local_88 = 0;
  local_86 = 0;
  _local_160 = CONCAT44(uVar6,*(undefined4 *)(lVar16 + 0x28));
  local_158 = *(undefined8 *)(lVar16 + 0x2c);
  local_150 = *(undefined8 *)(lVar16 + 0x34);
  uStack_174 = 0;
  local_180 = (undefined4)_ConstantZero;
  uStack_17c = (undefined4)((ulong)_ConstantZero >> 0x20);
  local_140 = *(undefined4 *)(lVar16 + 0x40);
  _local_148 = CONCAT44(*(undefined4 *)(lVar16 + 0x3c),0x3f800000);
  local_130 = 0x7003f;
  local_128 = 0x15a2c502b3;
  local_120 = 0x202;
  uStack_11c = 1;
  uStack_11b = 0;
  uStack_11a = 0;
  local_119 = 0;
  local_12c = 0x1f;
  local_108 = 0x3c;
  uStack_118 = 0;
  uStack_116 = 3;
  uStack_114 = 0;
  uStack_112 = 0;
  uStack_110 = 0;
  uStack_10d = 0;
  lVar16 = param_1[0xb];
  plVar7 = (long *)FUN_710392e290(0x10,0x110,(long ****)pcVar11,ppppbVar12,pppplVar13,param_6,
                                  param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74[0] = 0;
      local_1b0 = (long ***)&DAT_00000110;
      pppplVar10 = &local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
      if (((uVar8 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x110,pppplVar10,ppppbVar12,pppplVar13,param_6,
                                          param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102658b9c;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102658b9c:
  FUN_7103141660(plVar7,lVar16,(byte *)"dyr_stgdonkey_jack_set",(byte ****)&DAT_ffffffff,pppplVar13,
                 param_6,param_7,param_8);
  param_1[0x1c] = (long)plVar7;
  uStack_198 = _DAT_7107521008;
  local_1a0 = _ConstantZero;
  uStack_18c = 0;
  local_1b0 = ppplVar18;
  uStack_1a8 = uVar20;
  local_190 = uVar6;
  if (plVar7[7] != 0) {
    plVar7 = *(long **)(plVar7[7] + 0x130);
    (**(code **)(*plVar7 + 0x100))(plVar7,0,&local_1b0,0x7f,3,0);
    plVar7 = (long *)param_1[0x1c];
  }
  if (plVar7[7] != 0) {
    plVar7 = *(long **)(plVar7[7] + 0xa0);
    (**(code **)(*plVar7 + 0x68))(plVar7,0,0,&local_180);
    plVar7 = (long *)param_1[0x1c];
  }
  if ((char)plVar7[8] != '\0') {
    plVar17 = (long *)plVar7[6];
    if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
       (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
      plVar9 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
      (**(code **)(*plVar9 + 0x48))(plVar9,0);
      *(undefined1 *)(plVar17 + 10) = 0;
    }
    (**(code **)(*plVar7 + 0x30))(plVar7);
  }
  *(undefined1 *)(plVar7 + 8) = 0;
  if (param_1[9] != 0) {
    lVar16 = *(long *)(param_1[9] + 0xd8);
    if (lVar16 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      plVar7 = *(long **)(*(long *)(lVar16 + 8) + 8);
      uVar6 = (**(code **)(*plVar7 + 0x20))(plVar7,0x100120b288);
    }
    *(undefined4 *)(param_1 + 0x28) = uVar6;
  }
  FUN_710313ef20(param_1);
  return;
}

