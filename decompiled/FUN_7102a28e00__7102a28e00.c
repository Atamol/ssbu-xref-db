// addr:      7102a28e00
// offset:    0x2a28e00
// name:      FUN_7102a28e00
// mangled:   
// signature: undefined __cdecl FUN_7102a28e00(long * param_1, undefined8 param_2, string * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7102a28e00(long *param_1,undefined8 param_2,string *param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  uint uVar1;
  long ***ppplVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  undefined7 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  size_t __n;
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
  undefined8 uVar13;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  string *psVar14;
  byte ****ppppbVar15;
  int iVar16;
  long *plVar17;
  undefined2 uVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  char *__s;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  long ****pppplVar27;
  long *********ppppppppplVar28;
  long *********ppppppppplVar29;
  long lVar30;
  long ***ppplVar31;
  long *plVar32;
  undefined1 auVar33 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long ***local_88;
  undefined4 local_7c;
  string local_78;
  undefined4 uStack_77;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 local_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  FUN_71025e5bd0(param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar32 = (long *)param_1[0xee];
  if (plVar32 == (long *)0x0) {
    return;
  }
  lVar24 = param_1[0xe7];
  lVar25 = *plVar32;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                          ,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0x10;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      param_3 = &local_78;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_7102a28e98;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7102a28e98:
  *puVar9 = &PTR_FUN_71051043f0;
  plVar11 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,(byte ****)param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
  if (plVar11 == (long *)0x0) {
    local_a0 = local_a0 & 0xffffffff00000000;
    local_78 = (string)0x18;
    uStack_77 = 0;
    uStack_73 = 0;
    uStack_71 = 0;
    param_3 = &local_78;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
    plVar11 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,(byte ****)param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
  }
  *plVar11 = lVar25;
  plVar11[1] = (long)(plVar32 + 1);
  *(char *)(plVar11 + 2) = (char)lVar24;
  puVar9[1] = plVar11;
  plVar11 = (long *)plVar32[0xaa];
  plVar32[0xaa] = (long)puVar9;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x70,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                          ,param_7,param_8);
  uVar13 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0x70;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      param_3 = &local_78;
      auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar13 = auVar33._8_8_;
      if (((auVar33._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x70,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8), uVar13 = extraout_x1_00,
         puVar9 != (undefined8 *)0x0)) goto LAB_7102a28f68;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7102a28f68:
  FUN_7102a2a310(puVar9,uVar13,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  uVar10 = plVar32[0xab];
  plVar32[0xab] = (long)puVar9;
  if (uVar10 != 0) {
    FUN_7102a2a870(*(undefined8 **)(uVar10 + 0x60));
    FUN_710392eb40(uVar10);
    puVar9 = (undefined8 *)plVar32[0xab];
  }
  uVar8 = FUN_7102a2ae70(*(uint *)(**(long **)(plVar32[0xaa] + 8) + 8),
                         *(ulong *)(**(long **)(plVar32[0xaa] + 8) + 0x30),param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
  *(undefined4 *)puVar9 = uVar8;
  lVar25 = plVar32[0xaa];
  pppplVar27 = (long ****)plVar32[0xab];
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                          ,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0x10;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      param_3 = &local_78;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_7102a29010;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7102a29010:
  *puVar9 = &PTR_FUN_7105103b28;
  plVar11 = (long *)FUN_710392e290(0x10,0xf8,(long ****)param_3,(byte ****)param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0xf8;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      param_3 = &local_78;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0xf8,(long ****)param_3,(byte ****)param_4,
                                           (long ****)param_5,param_6,param_7,param_8),
         plVar11 != (long *)0x0)) goto LAB_7102a29078;
    }
    plVar11 = (long *)0x0;
  }
LAB_7102a29078:
  *plVar11 = lVar25;
  plVar11[1] = (long)pppplVar27;
  plVar17 = plVar11 + 2;
  *plVar17 = 0;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x1c) = 0xffffffff;
  plVar11[5] = 0;
  *(undefined1 *)((long)plVar11 + 0xe4) = 0;
  *(undefined2 *)(plVar11 + 0x1e) = 0;
  plVar11[0x1d] = 0;
  *(undefined1 *)((long)plVar11 + 0xf4) = 1;
  plVar11[3] = 0;
  plVar11[4] = (long)plVar11;
  plVar11[6] = 0;
  plVar11[7] = 0;
  plVar11[0x18] = 0;
  plVar11[0x19] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  plVar11[0x14] = 0;
  plVar11[0x15] = 0;
  plVar11[0x12] = 0;
  plVar11[0x13] = 0;
  plVar11[0x10] = 0;
  plVar11[0x11] = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                           param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0x8;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      psVar14 = &local_78;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)psVar14,(byte ****)param_4,(long ****)param_5,
                                   param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7102a29130;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7102a29130:
  FUN_7102a399e0(puVar12,lVar25,pppplVar27,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  puVar26 = (ulong *)*plVar17;
  *plVar17 = (long)puVar12;
  if (puVar26 != (ulong *)0x0) {
    uVar10 = *puVar26;
    *puVar26 = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)puVar26);
  }
  lVar25 = *plVar11;
  ppppppppplVar28 = (long *********)plVar11[1];
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar27,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                           param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0x8;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      psVar14 = &local_78;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)psVar14,(byte ****)param_4,(long ****)param_5,
                                   param_6,param_7,param_8), puVar12 != (undefined8 *)0x0))
      goto LAB_7102a291c4;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7102a291c4:
  ppppbVar15 = (byte ****)0x0;
  FUN_7102a36b10(puVar12,lVar25,ppppppppplVar28,(long *********)0x0,(long ****)param_5,param_6,
                 (long ***)param_7,param_8);
  puVar26 = (ulong *)plVar11[3];
  plVar11[3] = (long)puVar12;
  if (puVar26 != (ulong *)0x0) {
    FUN_7102a38bb0(puVar26,extraout_x1_01,(long ****)ppppppppplVar28,ppppbVar15,(long ****)param_5,
                   param_6,param_7,param_8);
    FUN_710392eb40((ulong)puVar26);
  }
  plVar11[9] = (long)FUN_7102a2b0e0;
  plVar11[10] = 0;
  plVar11[0xd] = (long)FUN_7102a2b180;
  plVar11[0xe] = 0;
  plVar11[0xb] = (long)FUN_7102a2b0f0;
  plVar11[0xc] = 0;
  plVar11[0xf] = (long)FUN_7102a2b1f0;
  plVar11[0x10] = 0;
  if (0x12 < *(uint *)((long)plVar11 + 0xd4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar11 + (long)(int)*(uint *)((long)plVar11 + 0xd4) * 4 + 0x88) = 0;
  FUN_7102a2b2b0(plVar11);
  puVar9[1] = plVar11;
  plVar11 = (long *)plVar32[0xac];
  plVar32[0xac] = (long)puVar9;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  lVar25 = plVar32[0xaa];
  pppplVar27 = (long ****)plVar32[0xab];
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar28,ppppbVar15,(long ****)param_5,param_6
                          ,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = local_a0 & 0xffffffff00000000;
      local_78 = (string)0x10;
      uStack_77 = 0;
      uStack_73 = 0;
      uStack_71 = 0;
      psVar14 = &local_78;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)psVar14,ppppbVar15,(long ****)param_5,param_6
                                  ,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_7102a292c0;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7102a292c0:
  FUN_7102a2dbf0(puVar9,lVar25,pppplVar27,ppppbVar15,(long ****)param_5,param_6,param_7,param_8);
  plVar11 = (long *)plVar32[0xad];
  plVar32[0xad] = (long)puVar9;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 8))();
  }
  lVar25 = plVar32[0xaa];
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0x35705f06;
  if ((*(int *)plVar32[0xab] == 1) || (*(int *)plVar32[0xab] == 0)) {
    std::string::assign((char *)&local_a0);
  }
  uVar21 = *(uint *)(**(long **)(lVar25 + 8) + 8);
  if (uVar21 < 0x16c) {
    iVar16 = (&DAT_710454a7f0)[(long)(int)uVar21 * 0x12];
  }
  else {
    iVar16 = 0;
  }
  uStack_b0 = 0;
  __s = (char *)((ulong)&local_b8 | 1);
  uVar18 = 0x5f45;
  if (iVar16 != 1) {
    uVar18 = 0x5f42;
  }
  uStack_6f = 0;
  local_78 = (string)0xe;
  uStack_71 = 0x30;
  local_70 = 0;
  uStack_73 = 0x3074;
  local_a8 = 0;
  local_b8 = (ulong)CONCAT21(uVar18,4);
  local_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  uStack_77 = 0x6867696c;
  std::string::append((char *)&local_78);
  ppppppppplVar28 = (long *********)((ulong)&local_78 | 1);
  if (((byte)local_78 & 1) != 0) {
    ppppppppplVar28 =
         (long *********)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)));
  }
  FUN_71025f7350(*(long *)(*(long *)(**(long **)(lVar25 + 8) + 0x318) + 0x10),
                 (byte *)ppppppppplVar28);
  if ((((byte)local_78 & 1) != 0) &&
     (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))), uVar10 != 0)) {
    FUN_710392eb40(uVar10);
  }
  local_78 = (string)0x24;
  uStack_77 = 0x6c666572;
  uStack_73 = 0x6365;
  uStack_71 = 0x74;
  local_70 = 0x69;
  uStack_64 = 0;
  uStack_6f = 0x656275635f6e6f;
  local_68 = 0x6d;
  uStack_67 = 0x7061;
  uStack_65 = 0;
  std::string::append((char *)&local_78);
  ppppppppplVar28 = (long *********)((ulong)&local_78 | 1);
  if (((byte)local_78 & 1) != 0) {
    ppppppppplVar28 =
         (long *********)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)));
  }
  FUN_7102633800(*(long *)(**(long **)(lVar25 + 8) + 0x318),ppppppppplVar28,pppplVar27,ppppbVar15,
                 (long ****)param_5,param_6,param_7,param_8);
  if ((((byte)local_78 & 1) != 0) &&
     (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))), uVar10 != 0)) {
    FUN_710392eb40(uVar10);
  }
  local_78 = (string)0x0;
  uStack_77 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  local_70 = 0;
  uStack_6f = 0;
  local_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  __n = strlen(__s);
  uVar6 = uStack_6f;
  uVar4 = local_70;
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  local_70 = (undefined1)__n;
  uVar5 = local_70;
  uStack_6f = (undefined7)(__n >> 8);
  uVar7 = uStack_6f;
  local_70 = uVar4;
  uStack_6f = uVar6;
  if (__n < 0x17) {
    local_78 = SUB41((int)__n << 1,0);
    ppppppppplVar28 = (long *********)((ulong)&local_78 | 1);
    ppppppppplVar29 = ppppppppplVar28;
    if (__n != 0) goto LAB_7102a29570;
  }
  else {
    ppplVar31 = (long ***)(__n + 0x10 & 0xfffffffffffffff0);
    ppplVar2 = ppplVar31;
    if ((__n + 0x10 & 0xfffffffffffffff0) == 0) {
      ppplVar2 = (long ***)0x1;
    }
    ppppppppplVar28 =
         (long *********)
         FUN_710392e290(0x10,ppplVar2,pppplVar27,ppppbVar15,(long ****)param_5,param_6,param_7,
                        param_8);
    if (ppppppppplVar28 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c = 0;
        pppplVar27 = &local_88;
        local_88 = ppplVar2;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_7c);
        if (((uVar10 & 1) != 0) &&
           (ppppppppplVar28 =
                 (long *********)
                 FUN_710392e290(0x10,ppplVar2,pppplVar27,ppppbVar15,(long ****)param_5,param_6,
                                param_7,param_8), ppppppppplVar28 != (long *********)0x0))
        goto LAB_7102a2955c;
      }
      ppppppppplVar28 = (long *********)0x0;
    }
LAB_7102a2955c:
    local_78 = (string)((byte)ppplVar31 | 1);
    uStack_77 = (undefined4)((ulong)ppplVar31 >> 8);
    uStack_73 = (undefined2)((ulong)ppplVar31 >> 0x28);
    uStack_71 = (undefined1)((ulong)ppplVar31 >> 0x38);
    local_68 = SUB81(ppppppppplVar28,0);
    uStack_67 = (undefined2)((ulong)ppppppppplVar28 >> 8);
    uStack_65 = (undefined1)((ulong)ppppppppplVar28 >> 0x18);
    uStack_64 = (undefined4)((ulong)ppppppppplVar28 >> 0x20);
    ppppppppplVar29 = (long *********)((ulong)&local_78 | 1);
    local_70 = uVar5;
    uStack_6f = uVar7;
LAB_7102a29570:
    memcpy(ppppppppplVar28,__s,__n);
  }
  *(undefined1 *)((long)ppppppppplVar28 + __n) = 0;
  std::string::append((char *)&local_78);
  std::string::append((char *)&local_78);
  if (((byte)local_78 & 1) != 0) {
    ppppppppplVar29 =
         (long *********)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)));
  }
  pppplVar27 = (long ****)0x1;
  FUN_7102633a10(*(long *)(**(long **)(lVar25 + 8) + 0x318),ppppppppplVar29,1,ppppbVar15,
                 (long ****)param_5,param_6,param_7,param_8);
  if ((((byte)local_78 & 1) != 0) &&
     (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))), uVar10 != 0)) {
    FUN_710392eb40(uVar10);
  }
  local_70 = 0;
  uStack_6f = 0;
  local_68 = 0;
  uStack_67 = 0;
  uStack_65 = 0;
  uStack_64 = 0;
  local_78 = (string)0x0;
  uStack_77 = 0;
  uStack_73 = 0;
  uStack_71 = 0;
  if (__n < 0x17) {
    local_78 = SUB41((int)__n << 1,0);
    ppppppppplVar28 = (long *********)((ulong)&local_78 | 1);
    ppppppppplVar29 = ppppppppplVar28;
    if (__n == 0) goto LAB_7102a296a0;
  }
  else {
    ppplVar31 = (long ***)(__n + 0x10 & 0xfffffffffffffff0);
    ppplVar2 = ppplVar31;
    if ((__n + 0x10 & 0xfffffffffffffff0) == 0) {
      ppplVar2 = (long ***)0x1;
    }
    ppppppppplVar28 =
         (long *********)
         FUN_710392e290(0x10,ppplVar2,pppplVar27,ppppbVar15,(long ****)param_5,param_6,param_7,
                        param_8);
    if (ppppppppplVar28 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c = 0;
        pppplVar27 = &local_88;
        local_88 = ppplVar2;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_7c);
        if (((uVar10 & 1) != 0) &&
           (ppppppppplVar28 =
                 (long *********)
                 FUN_710392e290(0x10,ppplVar2,pppplVar27,ppppbVar15,(long ****)param_5,param_6,
                                param_7,param_8), ppppppppplVar28 != (long *********)0x0))
        goto LAB_7102a2967c;
      }
      ppppppppplVar28 = (long *********)0x0;
    }
LAB_7102a2967c:
    local_78 = (string)((byte)ppplVar31 | 1);
    uStack_77 = (undefined4)((ulong)ppplVar31 >> 8);
    uStack_73 = (undefined2)((ulong)ppplVar31 >> 0x28);
    uStack_71 = (undefined1)((ulong)ppplVar31 >> 0x38);
    local_68 = SUB81(ppppppppplVar28,0);
    uStack_67 = (undefined2)((ulong)ppppppppplVar28 >> 8);
    uStack_65 = (undefined1)((ulong)ppppppppplVar28 >> 0x18);
    uStack_64 = (undefined4)((ulong)ppppppppplVar28 >> 0x20);
    ppppppppplVar29 = (long *********)((ulong)&local_78 | 1);
    local_70 = uVar5;
    uStack_6f = uVar7;
  }
  memcpy(ppppppppplVar28,__s,__n);
LAB_7102a296a0:
  *(undefined1 *)((long)ppppppppplVar28 + __n) = 0;
  std::string::append((char *)&local_78);
  std::string::append((char *)&local_78);
  if (((byte)local_78 & 1) != 0) {
    ppppppppplVar29 =
         (long *********)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)));
  }
  pppplVar27 = (long ****)0x1;
  FUN_7102633b90(*(long *)(**(long **)(lVar25 + 8) + 0x318),ppppppppplVar29,1,ppppbVar15,
                 (long ****)param_5,param_6,param_7,param_8);
  uVar13 = extraout_x1_02;
  if ((((byte)local_78 & 1) != 0) &&
     (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))), uVar10 != 0)) {
    FUN_710392eb40(uVar10);
    uVar13 = extraout_x1_03;
  }
  if (((local_a0 & 1) != 0) && (local_90 != 0)) {
    FUN_710392eb40(local_90);
    uVar13 = extraout_x1_04;
  }
  iVar16 = *(int *)plVar32[0xab];
  if ((undefined8 **)DAT_710532d6c0 != &DAT_710532d6c8) {
    lVar25 = **(long **)(plVar32[0xaa] + 8);
    plVar11 = DAT_710532d6c0;
    do {
      if ((int)plVar11[4] != iVar16) {
        lVar30 = 0;
        do {
          std::string::string(&local_78,(string *)(plVar11 + 5));
          std::string::append((char *)&local_78);
          pbVar22 = (byte *)((ulong)&local_78 | 1);
          uVar13 = extraout_x1_06;
          if ((((byte)local_78 & 1) == 0) ||
             (pbVar22 = (byte *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)))
             , pbVar22 != (byte *)0x0)) {
            uVar21 = (uint)*pbVar22;
            if (*pbVar22 != 0) {
              lVar19 = *(long *)(lVar25 + 0x310);
              plVar17 = *(long **)(lVar19 + 0xd0);
              plVar20 = *(long **)(lVar19 + 0xd8);
              if (plVar17 != plVar20) {
                uVar10 = 0;
                uVar23 = 0xffffffff;
                do {
                  pbVar22 = pbVar22 + 1;
                  uVar1 = uVar21 + 0x20;
                  if (0x19 < uVar21 - 0x41) {
                    uVar1 = uVar21;
                  }
                  uVar23 = (&DAT_7104754084)[(uVar1 ^ uVar23) & 0xff] ^ uVar23 >> 8;
                  uVar21 = (uint)*pbVar22;
                  uVar10 = uVar10 + 0x100000000;
                } while (uVar21 != 0);
                do {
                  if ((*(uint *)(plVar17 + 1) < 2) &&
                     (lVar19 = *plVar17,
                     (uVar10 & 0xff00000000 | (ulong)~uVar23) == *(ulong *)(lVar19 + 0x68))) {
                    if (lVar19 != 0) {
                      *(undefined1 *)(lVar19 + 0x110) = 0;
                      FUN_71025e9d50((long *)(lVar19 + 0x108),extraout_x1_06,pppplVar27,ppppbVar15,
                                     (long ****)param_5,param_6,param_7,param_8);
                      *(byte *)(lVar19 + 0x118) = *(byte *)(lVar19 + 0x118) | 1;
                      if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
                        *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
                      }
                      if (*(long *)(lVar19 + 0xd8) != 0) {
                        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
                      }
                      uVar13 = extraout_x1_05;
                      if (*(char *)(lVar19 + 0xe0) != '\0') {
                        *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
                      }
                    }
                    break;
                  }
                  plVar17 = plVar17 + 2;
                } while (plVar20 != plVar17);
              }
            }
            if ((((byte)local_78 & 1) != 0) &&
               (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
               uVar10 != 0)) {
              FUN_710392eb40(uVar10);
              uVar13 = extraout_x1_07;
            }
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 != 8);
      }
      plVar17 = (long *)plVar11[1];
      if ((long *)plVar11[1] == (long *)0x0) {
        plVar17 = plVar11 + 2;
        plVar20 = (long *)*plVar17;
        if ((long *)*plVar20 != plVar11) {
          do {
            lVar30 = *plVar17;
            plVar17 = (long *)(lVar30 + 0x10);
            plVar20 = (long *)*plVar17;
          } while (*plVar20 != lVar30);
        }
      }
      else {
        do {
          plVar20 = plVar17;
          plVar17 = (long *)*plVar20;
        } while ((long *)*plVar20 != (long *)0x0);
      }
      plVar11 = plVar20;
    } while ((undefined8 **)plVar20 != &DAT_710532d6c8);
  }
  lVar25 = *plVar32;
  if ((*(uint *)(lVar25 + 8) < 0x16c) &&
     ((&DAT_710454a7f0)[(long)(int)*(uint *)(lVar25 + 8) * 0x12] == 1)) {
    for (plVar11 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd0);
        plVar11 != *(long **)(*(long *)(lVar25 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) &&
         (lVar30 = *plVar11, *(long *)(lVar30 + 0x68) == 0x1112a3bc44)) {
        if (lVar30 != 0) {
          *(undefined1 *)(lVar30 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar30 + 0x108),uVar13,pppplVar27,ppppbVar15,(long ****)param_5,
                         param_6,param_7,param_8);
          *(byte *)(lVar30 + 0x118) = *(byte *)(lVar30 + 0x118) | 1;
          if ((*(char *)(lVar30 + 0xe0) != '\0') && (*(long *)(lVar30 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar30 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar30 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar30 + 0xd8) + 0x21) = 1;
          }
          uVar13 = extraout_x1_13;
          if (*(char *)(lVar30 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar30 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
    plVar11 = DAT_710532d6c0;
    if ((undefined8 **)DAT_710532d6c0 != &DAT_710532d6c8) {
      do {
        std::string::string(&local_78,(string *)(plVar11 + 5));
        std::string::append((char *)&local_78);
        pbVar22 = (byte *)((ulong)&local_78 | 1);
        uVar13 = extraout_x1_10;
        if ((((byte)local_78 & 1) == 0) ||
           (pbVar22 = (byte *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
           pbVar22 != (byte *)0x0)) {
          uVar21 = (uint)*pbVar22;
          if (*pbVar22 != 0) {
            plVar17 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd0);
            plVar20 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd8);
            if (plVar17 != plVar20) {
              uVar10 = 0;
              uVar23 = 0xffffffff;
              do {
                pbVar22 = pbVar22 + 1;
                uVar1 = uVar21 + 0x20;
                if (0x19 < uVar21 - 0x41) {
                  uVar1 = uVar21;
                }
                uVar23 = (&DAT_7104754084)[(uVar1 ^ uVar23) & 0xff] ^ uVar23 >> 8;
                uVar21 = (uint)*pbVar22;
                uVar10 = uVar10 + 0x100000000;
              } while (uVar21 != 0);
              do {
                if ((*(uint *)(plVar17 + 1) < 2) &&
                   (lVar30 = *plVar17,
                   (uVar10 & 0xff00000000 | (ulong)~uVar23) == *(ulong *)(lVar30 + 0x68))) {
                  if (lVar30 != 0) {
                    *(undefined1 *)(lVar30 + 0x110) = 0;
                    FUN_71025e9d50((long *)(lVar30 + 0x108),extraout_x1_10,pppplVar27,ppppbVar15,
                                   (long ****)param_5,param_6,param_7,param_8);
                    *(byte *)(lVar30 + 0x118) = *(byte *)(lVar30 + 0x118) | 1;
                    if ((*(char *)(lVar30 + 0xe0) != '\0') && (*(long *)(lVar30 + 200) != 0)) {
                      *(undefined2 *)(*(long *)(lVar30 + 200) + 0x30) = 0x101;
                    }
                    if (*(long *)(lVar30 + 0xd8) != 0) {
                      *(undefined1 *)(*(long *)(lVar30 + 0xd8) + 0x21) = 1;
                    }
                    uVar13 = extraout_x1_09;
                    if (*(char *)(lVar30 + 0xe0) != '\0') {
                      *(undefined1 *)(*(long *)(lVar30 + 0xb0) + 0x10) = 0;
                    }
                  }
                  break;
                }
                plVar17 = plVar17 + 2;
              } while (plVar20 != plVar17);
            }
          }
          if ((((byte)local_78 & 1) != 0) &&
             (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
             uVar10 != 0)) {
            FUN_710392eb40(uVar10);
            uVar13 = extraout_x1_11;
          }
        }
        plVar17 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar17 = plVar11 + 2;
          plVar20 = (long *)*plVar17;
          if ((long *)*plVar20 != plVar11) {
            do {
              lVar30 = *plVar17;
              plVar17 = (long *)(lVar30 + 0x10);
              plVar20 = (long *)*plVar17;
            } while (*plVar20 != lVar30);
          }
        }
        else {
          do {
            plVar20 = plVar17;
            plVar17 = (long *)*plVar20;
          } while ((long *)*plVar20 != (long *)0x0);
        }
        plVar11 = plVar20;
      } while ((undefined8 **)plVar20 != &DAT_710532d6c8);
    }
    for (plVar11 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd0);
        plVar11 != *(long **)(*(long *)(lVar25 + 0x310) + 0xd8); plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) &&
         (lVar30 = *plVar11, *(long *)(lVar30 + 0x68) == 0x12bf759851)) {
        if (lVar30 != 0) {
          *(undefined1 *)(lVar30 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar30 + 0x108),uVar13,pppplVar27,ppppbVar15,(long ****)param_5,
                         param_6,param_7,param_8);
          *(byte *)(lVar30 + 0x118) = *(byte *)(lVar30 + 0x118) | 1;
          if ((*(char *)(lVar30 + 0xe0) != '\0') && (*(long *)(lVar30 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar30 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar30 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar30 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar30 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar30 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
    plVar11 = DAT_710532d6c0;
    if ((undefined8 **)DAT_710532d6c0 != &DAT_710532d6c8) {
LAB_7102a29e24:
      do {
        std::string::string(&local_78,(string *)(plVar11 + 5));
        std::string::append((char *)&local_78);
        pbVar22 = (byte *)((ulong)&local_78 | 1);
        if ((((byte)local_78 & 1) == 0) ||
           (pbVar22 = (byte *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
           pbVar22 != (byte *)0x0)) {
          uVar21 = (uint)*pbVar22;
          if (*pbVar22 != 0) {
            plVar17 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd0);
            plVar20 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd8);
            if (plVar17 != plVar20) {
              uVar10 = 0;
              uVar23 = 0xffffffff;
              do {
                pbVar22 = pbVar22 + 1;
                uVar1 = uVar21 + 0x20;
                if (0x19 < uVar21 - 0x41) {
                  uVar1 = uVar21;
                }
                uVar23 = (&DAT_7104754084)[(uVar1 ^ uVar23) & 0xff] ^ uVar23 >> 8;
                uVar21 = (uint)*pbVar22;
                uVar10 = uVar10 + 0x100000000;
              } while (uVar21 != 0);
              do {
                if ((*(uint *)(plVar17 + 1) < 2) &&
                   (lVar30 = *plVar17,
                   (uVar10 & 0xff00000000 | (ulong)~uVar23) == *(ulong *)(lVar30 + 0x68))) {
                  if (lVar30 != 0) {
                    *(undefined1 *)(lVar30 + 0x110) = 0;
                    FUN_71025e9d50((long *)(lVar30 + 0x108),extraout_x1_12,pppplVar27,ppppbVar15,
                                   (long ****)param_5,param_6,param_7,param_8);
                    *(byte *)(lVar30 + 0x118) = *(byte *)(lVar30 + 0x118) | 1;
                    if ((*(char *)(lVar30 + 0xe0) != '\0') && (*(long *)(lVar30 + 200) != 0)) {
                      *(undefined2 *)(*(long *)(lVar30 + 200) + 0x30) = 0x101;
                    }
                    if (*(long *)(lVar30 + 0xd8) != 0) {
                      *(undefined1 *)(*(long *)(lVar30 + 0xd8) + 0x21) = 1;
                    }
                    if (*(char *)(lVar30 + 0xe0) != '\0') {
                      *(undefined1 *)(*(long *)(lVar30 + 0xb0) + 0x10) = 0;
                    }
                  }
                  break;
                }
                plVar17 = plVar17 + 2;
              } while (plVar20 != plVar17);
            }
          }
          if ((((byte)local_78 & 1) != 0) &&
             (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
             uVar10 != 0)) {
            FUN_710392eb40(uVar10);
          }
        }
        plVar17 = (long *)plVar11[1];
        if ((long *)plVar11[1] == (long *)0x0) {
          plVar17 = plVar11 + 2;
          plVar20 = (long *)*plVar17;
          if ((long *)*plVar20 == plVar11) {
            plVar11 = plVar20;
            if ((undefined8 **)plVar20 == &DAT_710532d6c8) break;
            goto LAB_7102a29e24;
          }
          do {
            lVar30 = *plVar17;
            plVar17 = (long *)(lVar30 + 0x10);
            plVar11 = (long *)*plVar17;
          } while (*plVar11 != lVar30);
        }
        else {
          do {
            plVar11 = plVar17;
            plVar17 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      } while ((undefined8 **)plVar11 != &DAT_710532d6c8);
    }
    if ((((char)lVar24 != '\0') && (*(char *)((long)plVar32 + 0x54c) != '\0')) &&
       (DAT_710532d6c8 != (undefined8 *)0x0)) {
      lVar24 = *plVar32;
      puVar9 = &DAT_710532d6c8;
      iVar16 = *(int *)plVar32[0xab];
      puVar12 = DAT_710532d6c8;
      do {
        if (iVar16 <= *(int *)(puVar12 + 4)) {
          puVar9 = puVar12;
        }
        puVar12 = (undefined8 *)puVar12[*(int *)(puVar12 + 4) < iVar16];
      } while (puVar12 != (undefined8 *)0x0);
      if (((undefined8 **)puVar9 != &DAT_710532d6c8) && (*(int *)(puVar9 + 4) <= iVar16)) {
        std::string::string(&local_78,(string *)(puVar9 + 5));
        std::string::append((char *)&local_78);
        if (((byte)local_78 & 1) == 0) {
          pbVar22 = (byte *)((ulong)&local_78 | 1);
          bVar3 = *pbVar22;
        }
        else {
          pbVar22 = (byte *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)));
          if (pbVar22 == (byte *)0x0) {
            return;
          }
          bVar3 = *pbVar22;
        }
        if (bVar3 != 0) {
          uVar21 = (uint)bVar3;
          plVar32 = *(long **)(*(long *)(lVar24 + 0x310) + 0xd0);
          plVar11 = *(long **)(*(long *)(lVar24 + 0x310) + 0xd8);
          if (plVar32 != plVar11) {
            uVar10 = 0;
            uVar23 = 0xffffffff;
            do {
              pbVar22 = pbVar22 + 1;
              uVar1 = uVar21 + 0x20;
              if (0x19 < uVar21 - 0x41) {
                uVar1 = uVar21;
              }
              uVar23 = (&DAT_7104754084)[(uVar1 ^ uVar23) & 0xff] ^ uVar23 >> 8;
              uVar21 = (uint)*pbVar22;
              uVar10 = uVar10 + 0x100000000;
            } while (uVar21 != 0);
            do {
              if ((*(uint *)(plVar32 + 1) < 2) &&
                 (lVar24 = *plVar32,
                 (uVar10 & 0xff00000000 | (ulong)~uVar23) == *(ulong *)(lVar24 + 0x68))) {
                if (lVar24 != 0) {
                  if (*(char *)(lVar24 + 0xe0) != '\0') {
                    (**(code **)(**(long **)(lVar24 + 0x90) + 0x180))
                              (*(long **)(lVar24 + 0x90),0x675c0caa8,0);
                  }
                  if (*(char *)(lVar24 + 0xe0) != '\0') {
                    (**(code **)(**(long **)(lVar24 + 0x90) + 0x180))
                              (*(long **)(lVar24 + 0x90),0x6ecc99b12,0);
                  }
                }
                break;
              }
              plVar32 = plVar32 + 2;
            } while (plVar11 != plVar32);
          }
        }
        if ((((byte)local_78 & 1) != 0) &&
           (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
           uVar10 != 0)) {
          FUN_710392eb40(uVar10);
        }
      }
    }
  }
  else {
    iVar16 = *(int *)plVar32[0xab];
    if ((undefined8 **)DAT_710532d6c0 != &DAT_710532d6c8) {
      plVar32 = DAT_710532d6c0;
LAB_7102a29a80:
      do {
        if ((int)plVar32[4] != iVar16) {
          std::string::string(&local_78,(string *)(plVar32 + 5));
          std::string::append((char *)&local_78);
          pbVar22 = (byte *)((ulong)&local_78 | 1);
          if ((((byte)local_78 & 1) == 0) ||
             (pbVar22 = (byte *)CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68)))
             , pbVar22 != (byte *)0x0)) {
            uVar21 = (uint)*pbVar22;
            if (*pbVar22 != 0) {
              plVar11 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd0);
              plVar17 = *(long **)(*(long *)(lVar25 + 0x310) + 0xd8);
              if (plVar11 != plVar17) {
                uVar10 = 0;
                uVar23 = 0xffffffff;
                do {
                  pbVar22 = pbVar22 + 1;
                  uVar1 = uVar21 + 0x20;
                  if (0x19 < uVar21 - 0x41) {
                    uVar1 = uVar21;
                  }
                  uVar23 = (&DAT_7104754084)[(uVar1 ^ uVar23) & 0xff] ^ uVar23 >> 8;
                  uVar21 = (uint)*pbVar22;
                  uVar10 = uVar10 + 0x100000000;
                } while (uVar21 != 0);
                do {
                  if ((*(uint *)(plVar11 + 1) < 2) &&
                     (lVar24 = *plVar11,
                     (uVar10 & 0xff00000000 | (ulong)~uVar23) == *(ulong *)(lVar24 + 0x68))) {
                    if (lVar24 != 0) {
                      *(undefined1 *)(lVar24 + 0x110) = 0;
                      FUN_71025e9d50((long *)(lVar24 + 0x108),extraout_x1_08,pppplVar27,ppppbVar15,
                                     (long ****)param_5,param_6,param_7,param_8);
                      *(byte *)(lVar24 + 0x118) = *(byte *)(lVar24 + 0x118) | 1;
                      if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
                        *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
                      }
                      if (*(long *)(lVar24 + 0xd8) != 0) {
                        *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 1;
                      }
                      if (*(char *)(lVar24 + 0xe0) != '\0') {
                        *(undefined1 *)(*(long *)(lVar24 + 0xb0) + 0x10) = 0;
                      }
                    }
                    break;
                  }
                  plVar11 = plVar11 + 2;
                } while (plVar17 != plVar11);
              }
            }
            if ((((byte)local_78 & 1) != 0) &&
               (uVar10 = CONCAT44(uStack_64,CONCAT13(uStack_65,CONCAT21(uStack_67,local_68))),
               uVar10 != 0)) {
              FUN_710392eb40(uVar10);
            }
          }
        }
        plVar11 = (long *)plVar32[1];
        if ((long *)plVar32[1] == (long *)0x0) {
          plVar11 = plVar32 + 2;
          plVar17 = (long *)*plVar11;
          if ((long *)*plVar17 == plVar32) {
            plVar32 = plVar17;
            if ((undefined8 **)plVar17 == &DAT_710532d6c8) {
              return;
            }
            goto LAB_7102a29a80;
          }
          do {
            lVar24 = *plVar11;
            plVar11 = (long *)(lVar24 + 0x10);
            plVar32 = (long *)*plVar11;
          } while (*plVar32 != lVar24);
        }
        else {
          do {
            plVar32 = plVar11;
            plVar11 = (long *)*plVar32;
          } while ((long *)*plVar32 != (long *)0x0);
        }
        if ((undefined8 **)plVar32 == &DAT_710532d6c8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

