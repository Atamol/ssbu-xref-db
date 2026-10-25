// addr:      7102dcec00
// offset:    0x2dcec00
// name:      FUN_7102dcec00
// mangled:   
// signature: undefined __cdecl FUN_7102dcec00(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, undefined1[16] * param_5, long * * * * * * * * * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102dcec00(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   undefined1 (*param_5) [16],long *********param_6,long ***param_7,long ***param_8)

{
  long *********ppppppppplVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  long ***ppplVar12;
  long *plVar13;
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
  undefined8 uVar14;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  long ****pppplVar15;
  long ****pppplVar16;
  long *********ppppppppplVar17;
  undefined1 (*pauVar18) [16];
  byte ****ppppbVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long ********pppppppplVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  uint *puVar27;
  long *plVar28;
  long **pplVar29;
  ulong uVar30;
  long ********pppppppplVar31;
  undefined8 *puVar32;
  long *plVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  ulong uVar39;
  long lVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  void *pvVar44;
  byte ****ppppbVar45;
  long *********__n;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 local_400;
  long **local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  long ********local_3a0;
  ulong uStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_350;
  long ********local_340;
  undefined1 *puStack_338;
  undefined8 local_330 [5];
  undefined8 uStack_308;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined1 *puStack_1e8;
  long ********local_1e0 [3];
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  undefined4 local_18d;
  undefined5 uStack_189;
  undefined3 local_184;
  undefined5 uStack_181;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined1 *local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined1 local_14a;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined2 local_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined8 local_a0;
  undefined8 uStack_98;
  long ***local_90;
  undefined4 local_84 [5];
  
  for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
      plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
    if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0xa47bfa064))
    {
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar40 + 0x108),param_2,param_3,param_4,(long ****)param_5,param_6,
                       param_7,param_8);
        *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
        }
        param_2 = extraout_x1_04;
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
          cVar4 = *(char *)(param_1 + 0x972);
          goto joined_r0x007102dcfdd4;
        }
      }
      break;
    }
  }
  cVar4 = *(char *)(param_1 + 0x972);
joined_r0x007102dcfdd4:
  if (cVar4 != '\0') {
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x14,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
    param_2 = extraout_x1;
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
        local_1f0 = (long ********)&DAT_00000014;
        param_3 = (long ****)&local_1f0;
        auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
        param_2 = auVar50._8_8_;
        if (((auVar50._0_8_ & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x14,param_3,param_4,(long ****)param_5,param_6,param_7,
                                    param_8), param_2 = extraout_x1_00, puVar8 != (undefined8 *)0x0)
           ) goto LAB_7102dcecc8;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7102dcecc8:
    *(undefined8 *)((long)puVar8 + 0xc) = 0;
    *(undefined1 *)(puVar8 + 1) = 0;
    *puVar8 = 0;
    uVar22 = *(ulong *)(param_1 + 0x748);
    *(undefined8 **)(param_1 + 0x748) = puVar8;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
      param_2 = extraout_x1_01;
    }
  }
  if (*(char *)(param_1 + 0x975) == '\0') {
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
        plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
      if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0x845cb68d0)
         ) {
        if (lVar40 != 0) {
          *(undefined1 *)(lVar40 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar40 + 0x108),param_2,param_3,param_4,(long ****)param_5,param_6
                         ,param_7,param_8);
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
          if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar40 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar40 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
  }
  else {
    pppplVar16 = (long ****)(param_1 + 0x7b0);
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0xd0,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
        local_1f0 = (long ********)&DAT_000000d0;
        pppplVar15 = (long ****)&local_1f0;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
        if (((uVar22 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0xd0,pppplVar15,param_4,(long ****)param_5,param_6,param_7,
                                    param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102dced50;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7102dced50:
    FUN_7102dd8690(puVar8,param_1,pppplVar16,param_4,(long ****)param_5,param_6,param_7,param_8);
    plVar9 = *(long **)(param_1 + 0x738);
    *(undefined8 **)(param_1 + 0x738) = puVar8;
    param_3 = pppplVar16;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      param_3 = pppplVar16;
    }
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x1f0,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_000001f0;
      param_3 = (long ****)&local_1f0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar22 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x1f0,param_3,param_4,(long ****)param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102dcee1c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102dcee1c:
  FUN_7102ddca30(puVar8,param_1,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
  plVar9 = *(long **)(param_1 + 0x7a0);
  *(undefined8 **)(param_1 + 0x7a0) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  ppppppppplVar1 = (long *********)(param_1 + 0x7b0);
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0xf0,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_000000f0;
      param_3 = (long ****)&local_1f0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar22 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,param_3,param_4,(long ****)param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102dcee9c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102dcee9c:
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = ppppppppplVar1;
  *puVar8 = &PTR_FUN_710513cbf0;
  puVar8[1] = param_1;
  lVar40 = _DAT_7107521008;
  pppppppplVar23 = _ConstantZero;
  puVar8[7] = _DAT_7107521008;
  puVar8[6] = pppppppplVar23;
  puVar8[9] = lVar40;
  puVar8[8] = pppppppplVar23;
  *(undefined1 *)(puVar8 + 0x12) = 0;
  puVar8[0xb] = lVar40;
  puVar8[10] = pppppppplVar23;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  *(undefined8 *)((long)puVar8 + 0xac) = 0;
  *(undefined8 *)((long)puVar8 + 0xa4) = 0;
  *(undefined8 *)((long)puVar8 + 0x9c) = 0;
  *(undefined8 *)((long)puVar8 + 0x94) = 0;
  puVar8[0x10] = 0x3ffffffff;
  puVar8[0x11] = 0;
  puVar8[0x19] = lVar40;
  puVar8[0x18] = pppppppplVar23;
  puVar8[0x1b] = lVar40;
  puVar8[0x1a] = pppppppplVar23;
  plVar9 = *(long **)(param_1 + 0x750);
  *(undefined8 **)(param_1 + 0x750) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0xf0,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_000000f0;
      param_3 = (long ****)&local_1f0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar22 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,param_3,param_4,(long ****)param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102dcef64;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102dcef64:
  *puVar8 = &PTR_FUN_710513cbf0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = ppppppppplVar1;
  lVar40 = _DAT_7107521008;
  pppppppplVar23 = _ConstantZero;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  *(undefined1 *)(puVar8 + 0x12) = 0;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0;
  *(undefined8 *)((long)puVar8 + 0xac) = 0;
  *(undefined8 *)((long)puVar8 + 0xa4) = 0;
  *(undefined8 *)((long)puVar8 + 0x9c) = 0;
  *(undefined8 *)((long)puVar8 + 0x94) = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0x10] = 0x3ffffffff;
  puVar8[0x11] = 0;
  puVar8[0xb] = lVar40;
  puVar8[10] = pppppppplVar23;
  puVar8[7] = lVar40;
  puVar8[6] = pppppppplVar23;
  puVar8[9] = lVar40;
  puVar8[8] = pppppppplVar23;
  puVar8[0x19] = lVar40;
  puVar8[0x18] = pppppppplVar23;
  puVar8[0x1b] = lVar40;
  puVar8[0x1a] = pppppppplVar23;
  plVar9 = *(long **)(param_1 + 0x758);
  *(undefined8 **)(param_1 + 0x758) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0xf0,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_000000f0;
      pppplVar16 = (long ****)&local_1f0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar22 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,pppplVar16,param_4,(long ****)param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102dcf01c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102dcf01c:
  *puVar8 = &PTR_FUN_710513cbf0;
  puVar8[1] = param_1;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = ppppppppplVar1;
  lVar40 = _DAT_7107521008;
  pppppppplVar23 = _ConstantZero;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  *(undefined1 *)(puVar8 + 0x12) = 0;
  *(undefined8 *)((long)puVar8 + 0xb4) = 0;
  *(undefined8 *)((long)puVar8 + 0xac) = 0;
  *(undefined8 *)((long)puVar8 + 0xa4) = 0;
  *(undefined8 *)((long)puVar8 + 0x9c) = 0;
  *(undefined8 *)((long)puVar8 + 0x94) = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0x10] = 0x3ffffffff;
  puVar8[0x11] = 0;
  puVar8[0xb] = lVar40;
  puVar8[10] = pppppppplVar23;
  puVar8[7] = lVar40;
  puVar8[6] = pppppppplVar23;
  puVar8[9] = lVar40;
  puVar8[8] = pppppppplVar23;
  puVar8[0x19] = lVar40;
  puVar8[0x18] = pppppppplVar23;
  puVar8[0x1b] = lVar40;
  puVar8[0x1a] = pppppppplVar23;
  plVar9 = *(long **)(param_1 + 0x760);
  *(undefined8 **)(param_1 + 0x760) = puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  FUN_7102dd7140(0xc1700000,*(long *)(param_1 + 0x750),0x119623a077,(long ****)0x0,
                 *(byte *****)(param_1 + 0x9d8),(long ****)param_5,param_6,param_7,param_8);
  FUN_7102dd7140(0xc1a00000,*(long *)(param_1 + 0x758),0x136512ddcd,(long ****)0x1,
                 *(byte *****)(param_1 + 0x9d8),(long ****)param_5,param_6,param_7,param_8);
  ppppbVar19 = *(byte *****)(param_1 + 0x9d8);
  pppplVar16 = (long ****)0x2;
  FUN_7102dd7140(0xc1c80000,*(long *)(param_1 + 0x760),0x12392e3ca6,(long ****)0x2,ppppbVar19,
                 (long ****)param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x972) == '\0') {
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0); uVar14 = extraout_x1_02,
        plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
      if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0x9b7bfa770)
         ) {
        if (lVar40 != 0) {
          *(undefined1 *)(lVar40 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar40 + 0x108),extraout_x1_02,pppplVar16,ppppbVar19,
                         (long ****)param_5,param_6,param_7,param_8);
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
          if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar40 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
          }
          uVar14 = extraout_x1_09;
          if (*(char *)(lVar40 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
        plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
      if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0x8f4ac42c7)
         ) {
        if (lVar40 != 0) {
          *(undefined1 *)(lVar40 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar40 + 0x108),uVar14,pppplVar16,ppppbVar19,(long ****)param_5,
                         param_6,param_7,param_8);
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
          if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar40 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar40 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
  }
  else {
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x30,pppplVar16,ppppbVar19,(long ****)param_5,param_6,param_7,
                            param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
        local_1f0 = (long ********)&DAT_00000030;
        pppplVar16 = (long ****)&local_1f0;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
        if (((uVar22 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x30,pppplVar16,ppppbVar19,(long ****)param_5,param_6,
                                    param_7,param_8), puVar8 != (undefined8 *)0x0))
        goto LAB_7102dcf144;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7102dcf144:
    ppppppppplVar17 = ppppppppplVar1;
    FUN_7102dda610(puVar8,param_1,(long ****)ppppppppplVar1,ppppbVar19,(long ****)param_5,param_6,
                   param_7,param_8);
    plVar9 = *(long **)(param_1 + 0x768);
    *(undefined8 **)(param_1 + 0x768) = puVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
    }
    puVar8 = (undefined8 *)
             FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar17,ppppbVar19,(long ****)param_5,
                            param_6,param_7,param_8);
    if (puVar8 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
        local_1f0 = (long ********)&DAT_00000038;
        pppplVar16 = (long ****)&local_1f0;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
        if (((uVar22 & 1) != 0) &&
           (puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,0x38,pppplVar16,ppppbVar19,(long ****)param_5,param_6,
                                    param_7,param_8), puVar8 != (undefined8 *)0x0))
        goto LAB_7102dcf1c0;
      }
      puVar8 = (undefined8 *)0x0;
    }
LAB_7102dcf1c0:
    *(undefined1 *)(puVar8 + 3) = 0;
    *puVar8 = &PTR_FUN_710513ccd8;
    puVar8[1] = param_1;
    puVar8[2] = 1;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    plVar9 = *(long **)(param_1 + 0x7a8);
    *(undefined8 **)(param_1 + 0x7a8) = puVar8;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))(plVar9);
    }
  }
  FUN_71025f7350(*(long *)(*(long *)(param_1 + 0x318) + 0x10),(byte *)"light00");
  FUN_7102633a10(*(long *)(param_1 + 0x318),(long *********)"chara_sunny",1,ppppbVar19,
                 (long ****)param_5,param_6,param_7,param_8);
  ppppppppplVar17 = (long *********)0x1;
  FUN_7102633b90(*(long *)(param_1 + 0x318),(long *********)"stage_sunny",1,ppppbVar19,
                 (long ****)param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x973) != '\0') {
    plVar9 = (long *)FUN_710392e290(0x10,0x3a0,(long ****)ppppppppplVar17,ppppbVar19,
                                    (long ****)param_5,param_6,param_7,param_8);
    if (plVar9 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
        local_1f0 = (long ********)0x3a0;
        pppplVar16 = (long ****)&local_1f0;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
        if (((uVar22 & 1) != 0) &&
           (plVar9 = (long *)FUN_710392e290(0x10,0x3a0,pppplVar16,ppppbVar19,(long ****)param_5,
                                            param_6,param_7,param_8), plVar9 != (long *)0x0))
        goto LAB_7102dcf328;
      }
      plVar9 = (long *)0x0;
    }
LAB_7102dcf328:
    *plVar9 = (long)&PTR_FUN_710513ca68;
    plVar9[1] = param_1;
    plVar9[2] = 0;
    plVar9[3] = (long)ppppppppplVar1;
    plVar9[9] = 0;
    plVar9[8] = 0x3f800000;
    plVar9[0xb] = 0;
    plVar9[10] = 0x3f80000000000000;
    plVar9[4] = 0;
    plVar9[0xd] = 0x3f800000;
    plVar9[0xc] = 0;
    plVar9[0xf] = 0x3f80000000000000;
    plVar9[0xe] = 0;
    memset(plVar9 + 0x10,0,0x250);
    *(undefined2 *)(plVar9 + 0x5e) = 0;
    *(undefined1 *)((long)plVar9 + 0x2f2) = 0;
    plVar9[0x5a] = 0xffffffff;
    plVar9[0x5d] = -1;
    plVar9[0x5c] = -1;
    plVar9[0x5b] = -1;
    lVar40 = _DAT_7107521008;
    pppppppplVar23 = _ConstantZero;
    *(undefined4 *)(plVar9 + 0x66) = 0x434e1f3b;
    ppppbVar19 = (byte ****)0x1;
    plVar9[0x65] = 0;
    plVar9[100] = -0x3d4c000000000000;
    plVar9[0x61] = lVar40;
    plVar9[0x60] = (long)pppppppplVar23;
    plVar9[99] = lVar40;
    plVar9[0x62] = (long)pppppppplVar23;
    *(undefined8 *)((long)plVar9 + 0x344) = 0;
    *(undefined8 *)((long)plVar9 + 0x334) = 0;
    *(undefined8 *)((long)plVar9 + 0x33c) = 0;
    *(undefined2 *)(plVar9 + 0x6c) = 0;
    *(undefined2 *)((long)plVar9 + 0x36c) = 0;
    plVar9[0x6b] = lVar40;
    plVar9[0x6a] = (long)pppppppplVar23;
    *(undefined8 *)((long)plVar9 + 0x364) = 0;
    *(undefined1 *)(plVar9 + 0x70) = 0;
    plVar9[0x6f] = 0;
    plVar9[0x6e] = 0;
    *(undefined1 *)(plVar9 + 0x73) = 0;
    plVar9[0x72] = 0;
    plVar9[0x71] = 0;
    plVar9[5] = -1;
    *(undefined4 *)(plVar9 + 6) = 0xffffffff;
    ppppppppplVar17 = *(long **********)(*(long *)(param_1 + 0x308) + 8);
    FUN_710315a0a0(&local_1f0,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                   (long ****)ppppppppplVar17,(byte ****)0x1,(long ****)param_5,param_6,param_7,
                   param_8);
    pppppppplVar23 = local_1f0;
    local_1f0 = (long ********)0x0;
    puVar8 = (undefined8 *)plVar9[0x71];
    plVar9[0x71] = (long)pppppppplVar23;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_71025e8370(puVar8);
      FUN_710392eb40((ulong)puVar8);
      pppppppplVar23 = (long ********)plVar9[0x71];
    }
    local_1f0 = (long ********)0x0;
    *(undefined4 *)((long)pppppppplVar23[1] + 0x14) = 1;
    lVar40 = plVar9[0x71];
    if (*(char *)(lVar40 + 0x10) == '\0') {
      lVar24 = *(long *)(lVar40 + 8);
      *(undefined1 *)(lVar40 + 0x10) = 1;
      if (*(char *)(lVar40 + 0x11) == '\0') {
        if (*(char *)(lVar24 + 0x1c) != '\0') {
          (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,lVar24);
          *(undefined1 *)(lVar24 + 0x1c) = 0;
        }
      }
      else if (*(char *)(lVar24 + 0x1c) == '\0') {
        (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x10))(*DAT_71052b8f00 + 0xa30,lVar24);
        *(undefined1 *)(lVar24 + 0x1c) = 1;
      }
    }
    *(undefined4 *)(*(long *)(plVar9[0x71] + 8) + 0x10) = 1;
    local_400 = 0;
    lVar24 = plVar9[1];
    lVar40 = *(long *)(**(long **)(lVar24 + 0x338) + 8);
    if (lVar40 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      ppppppppplVar17 = (long *********)0x0;
      uVar6 = FUN_7102405040(lVar40,&local_400,0,ppppbVar19,(long ****)param_5,param_6,param_7,
                             param_8);
      lVar24 = plVar9[1];
    }
    *(undefined4 *)(plVar9 + 0x59) = uVar6;
    plVar9[0x5c] = -1;
    plVar9[0x5d] = -1;
    plVar9[0x5b] = -1;
    *(undefined4 *)((long)plVar9 + 0x2d4) = 0;
    for (plVar13 = *(long **)(*(long *)(lVar24 + 0x310) + 0xd0);
        plVar13 != *(long **)(*(long *)(lVar24 + 0x310) + 0xd8); plVar13 = plVar13 + 2) {
      if ((*(uint *)(plVar13 + 1) < 2) &&
         (lVar40 = *plVar13, *(long *)(lVar40 + 0x68) == 0xa4dc022d2)) goto LAB_7102dcf5a8;
    }
    lVar40 = 0;
LAB_7102dcf5a8:
    plVar9[2] = lVar40;
    plVar13 = plVar9 + 0x6e;
    (**(code **)(*plVar9 + 0x88))(plVar9);
    uVar22 = 0;
LAB_7102dcf5e0:
    plVar33 = plVar9 + uVar22 * 3 + 0x11;
    plVar9[uVar22 * 3 + 0x12] = *plVar33;
    if (2 < *(uint *)(plVar9[1] + 0xb8)) goto LAB_7102dd16ec;
    lVar40 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(plVar9[1] + 0xb8) * 8);
    puVar27 = *(uint **)(lVar40 + 0x1c8);
    puVar2 = *(uint **)(lVar40 + 0x1d0);
    if (puVar27 != puVar2) {
      plVar28 = plVar9 + uVar22 * 3 + 0x12;
      do {
        uVar41 = *puVar27;
        uVar42 = (ulong)uVar41;
        if ((uVar41 == 0xffffff) ||
           (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar41)) {
          if (((&DAT_710455a4b8)[uVar22] & 0xffffffffff) == 0) goto LAB_7102dcf67c;
        }
        else if (*(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + uVar42 * 0x20 +
                           0x18) == ((&DAT_710455a4b8)[uVar22] & 0xffffffffff)) goto LAB_7102dcf67c;
        puVar27 = puVar27 + 1;
        if (puVar2 == puVar27) break;
      } while( true );
    }
    goto LAB_7102dcfe20;
  }
  for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0); uVar14 = extraout_x1_03,
      plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
    if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0xa4dc022d2))
    {
      if (lVar40 != 0) {
        *(undefined1 *)(lVar40 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar40 + 0x108),extraout_x1_03,(long ****)ppppppppplVar17,ppppbVar19
                       ,(long ****)param_5,param_6,param_7,param_8);
        *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
        if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar40 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
        }
        uVar14 = extraout_x1_10;
        if (*(char *)(lVar40 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
          cVar4 = *(char *)(param_1 + 0x974);
          goto joined_r0x007102dd0c68;
        }
      }
      break;
    }
  }
  goto LAB_7102dd0af4;
LAB_7102dcf67c:
  if (uVar41 == 0xffffff) goto LAB_7102dcfe20;
  FUN_7103540a00(DAT_7105332f20,uVar41);
  lVar40 = DAT_7105332f20;
  if (*(uint *)(DAT_7105332f20 + 0x18) <= uVar41) goto LAB_7102dcfe14;
  if (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar42 * 8 + 4) != '\0') {
    lVar24 = uVar42 * 8;
    uVar21 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + lVar24);
    if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(DAT_7105332f20 + 0x1c))) {
      plVar25 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18);
      if ((*(char *)((long)plVar25 + 0xc) != '\0' && plVar25 != (long *)0x0) &&
         ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18 + 0xd) == '\x03' &&
          (*plVar25 != 0)))) {
        lVar43 = **(long **)(DAT_7105332f20 + 0x78);
        if (*(uint *)(*(long *)(lVar43 + 0x40) + 4) <= uVar41) goto LAB_7102dcf984;
        uVar21 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar43 + 0x60) + uVar42 * 0x20) >> 0x20);
        uVar20 = uVar21 >> 8;
        if ((uVar20 == 0xffffff) ||
           (uVar3 = *(uint *)(*(long *)(lVar43 + 0x40) + 8), uVar21 = uVar21 >> 8,
           uVar3 < uVar20 || uVar3 == uVar21)) goto LAB_7102dcf984;
        uVar20 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) +
                           (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + lVar24) * 0x18 + 0x10);
        ppppppppplVar17 = (long *********)(ulong)uVar20;
        lVar10 = FUN_7103541e10(lVar43,*(long *)(lVar43 + 0x90) +
                                       ((ulong)*(uint *)(*(long *)(lVar43 + 0x68) +
                                                         (ulong)uVar21 * 8 + 4) & 0xffffff) * 0x10,
                                uVar20);
        uVar21 = *(uint *)(*(long *)(lVar43 + 0xa0) + (ulong)*(uint *)(lVar10 + 4) * 0x10 + 8) >> 3;
        if (uVar21 == 0) goto LAB_7102dcf984;
        if ((uVar41 < *(uint *)(lVar40 + 0x18)) &&
           (*(char *)(*(long *)(lVar40 + 8) + uVar42 * 8 + 4) != '\0')) {
          uVar20 = *(uint *)(*(long *)(lVar40 + 8) + lVar24);
          if ((uVar20 == 0xffffff) || (*(uint *)(lVar40 + 0x1c) <= uVar20)) goto LAB_7102dcf7f8;
          puVar26 = (undefined8 *)(*(long *)(lVar40 + 0x10) + (ulong)uVar20 * 0x18);
          puVar8 = (undefined8 *)0x0;
          if ((*(char *)((long)puVar26 + 0xc) != '\0') && (puVar26 != (undefined8 *)0x0)) {
            puVar8 = (undefined8 *)*puVar26;
          }
        }
        else {
LAB_7102dcf7f8:
          puVar8 = (undefined8 *)0x0;
        }
        uVar42 = 0;
        do {
          uVar14 = *puVar8;
          puVar32 = (undefined8 *)*plVar28;
          puVar26 = (undefined8 *)plVar9[uVar22 * 3 + 0x13];
          if (puVar32 < puVar26) {
            puVar32[1] = 0;
            *puVar32 = uVar14;
            *plVar28 = *plVar28 + 0x10;
          }
          else {
            pvVar44 = (void *)*plVar33;
            ppppppppplVar17 = (long *********)((long)puVar32 - (long)pvVar44);
            uVar37 = ((long)ppppppppplVar17 >> 4) + 1;
            if (uVar37 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar40 = (long)puVar26 - (long)pvVar44;
            if ((ulong)(lVar40 >> 4) < 0x7ffffffffffffff) {
              uVar30 = lVar40 >> 3;
              if (uVar37 <= uVar30) {
                uVar37 = uVar30;
              }
              if (uVar37 != 0) {
                if (uVar37 >> 0x3c == 0) goto LAB_7102dcf8b0;
                goto LAB_7102dd16ec;
              }
              uVar37 = 0;
              pvVar11 = (void *)0x0;
            }
            else {
              uVar37 = 0xfffffffffffffff;
LAB_7102dcf8b0:
              pppppppplVar23 = (long ********)(uVar37 * 0x10);
              if (pppppppplVar23 == (long ********)0x0) {
                pppppppplVar23 = (long ********)0x1;
              }
              pvVar11 = (void *)FUN_710392e290(0x10,pppppppplVar23,(long ****)ppppppppplVar17,
                                               ppppbVar19,(long ****)param_5,param_6,param_7,param_8
                                              );
              if (pvVar11 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
                  pppplVar16 = (long ****)&local_1f0;
                  local_1f0 = pppppppplVar23;
                  uVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
                  if (((uVar30 & 1) != 0) &&
                     (pvVar11 = (void *)FUN_710392e290(0x10,pppppppplVar23,pppplVar16,ppppbVar19,
                                                       (long ****)param_5,param_6,param_7,param_8),
                     pvVar11 != (void *)0x0)) goto LAB_7102dcf924;
                }
                pvVar11 = (void *)0x0;
              }
            }
LAB_7102dcf924:
            puVar26 = (undefined8 *)((long)pvVar11 + ((long)ppppppppplVar17 >> 4) * 0x10);
            puVar26[1] = 0;
            *puVar26 = uVar14;
            if (0 < (long)ppppppppplVar17) {
              memcpy(pvVar11,pvVar44,(size_t)ppppppppplVar17);
            }
            *plVar33 = (long)pvVar11;
            *plVar28 = (long)(puVar26 + 2);
            plVar9[uVar22 * 3 + 0x13] = (long)((long)pvVar11 + uVar37 * 0x10);
            if (pvVar44 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar44);
            }
          }
          uVar42 = uVar42 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar42 < uVar21);
LAB_7102dcf984:
        FUN_7103540b10(DAT_7105332f20,uVar41,ppppppppplVar17,ppppbVar19,(long ****)param_5,param_6,
                       param_7,param_8);
        plVar9[uVar22 * 3 + 0x36] = plVar9[uVar22 * 3 + 0x35];
        if (2 < *(uint *)(plVar9[1] + 0xb8)) goto LAB_7102dd16ec;
        lVar40 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(plVar9[1] + 0xb8) * 8);
        puVar27 = *(uint **)(lVar40 + 0x1c8);
        puVar2 = *(uint **)(lVar40 + 0x1d0);
        if (puVar27 != puVar2) {
          plVar33 = plVar9 + uVar22 * 3 + 0x36;
          do {
            uVar41 = *puVar27;
            uVar42 = (ulong)uVar41;
            if ((uVar41 == 0xffffff) ||
               (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar41)) {
              if ((*(ulong *)(&DAT_710455a518 + uVar22 * 8) & 0xffffffffff) == 0)
              goto LAB_7102dcfa50;
            }
            else if (*(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + uVar42 * 0x20
                               + 0x18) == (*(ulong *)(&DAT_710455a518 + uVar22 * 8) & 0xffffffffff))
            goto LAB_7102dcfa50;
            puVar27 = puVar27 + 1;
            if (puVar2 == puVar27) break;
          } while( true );
        }
        goto LAB_7102dcfe20;
      }
    }
  }
  goto LAB_7102dcfe08;
LAB_7102dcfa50:
  if (uVar41 == 0xffffff) goto LAB_7102dcfe20;
  FUN_7103540a00(DAT_7105332f20,uVar41);
  lVar40 = DAT_7105332f20;
  if (*(uint *)(DAT_7105332f20 + 0x18) <= uVar41) goto LAB_7102dcfe14;
  if (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar42 * 8 + 4) != '\0') {
    lVar24 = uVar42 * 8;
    uVar21 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + lVar24);
    if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(DAT_7105332f20 + 0x1c))) {
      plVar28 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18);
      if ((*(char *)((long)plVar28 + 0xc) != '\0' && plVar28 != (long *)0x0) &&
         ((*(char *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar21 * 0x18 + 0xd) == '\x03' &&
          (*plVar28 != 0)))) {
        lVar43 = **(long **)(DAT_7105332f20 + 0x78);
        if (*(uint *)(*(long *)(lVar43 + 0x40) + 4) <= uVar41) goto LAB_7102dcfd54;
        uVar21 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar43 + 0x60) + uVar42 * 0x20) >> 0x20);
        uVar20 = uVar21 >> 8;
        if ((uVar20 == 0xffffff) ||
           (uVar3 = *(uint *)(*(long *)(lVar43 + 0x40) + 8), uVar21 = uVar21 >> 8,
           uVar3 < uVar20 || uVar3 == uVar21)) goto LAB_7102dcfd54;
        uVar20 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) +
                           (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + lVar24) * 0x18 + 0x10);
        ppppppppplVar17 = (long *********)(ulong)uVar20;
        lVar10 = FUN_7103541e10(lVar43,*(long *)(lVar43 + 0x90) +
                                       ((ulong)*(uint *)(*(long *)(lVar43 + 0x68) +
                                                         (ulong)uVar21 * 8 + 4) & 0xffffff) * 0x10,
                                uVar20);
        uVar21 = *(uint *)(*(long *)(lVar43 + 0xa0) + (ulong)*(uint *)(lVar10 + 4) * 0x10 + 8) >> 3;
        if (uVar21 == 0) goto LAB_7102dcfd54;
        if ((uVar41 < *(uint *)(lVar40 + 0x18)) &&
           (*(char *)(*(long *)(lVar40 + 8) + uVar42 * 8 + 4) != '\0')) {
          uVar20 = *(uint *)(*(long *)(lVar40 + 8) + lVar24);
          if ((uVar20 == 0xffffff) || (*(uint *)(lVar40 + 0x1c) <= uVar20)) goto LAB_7102dcfbc4;
          puVar26 = (undefined8 *)(*(long *)(lVar40 + 0x10) + (ulong)uVar20 * 0x18);
          puVar8 = (undefined8 *)0x0;
          if ((*(char *)((long)puVar26 + 0xc) != '\0') && (puVar26 != (undefined8 *)0x0)) {
            puVar8 = (undefined8 *)*puVar26;
          }
        }
        else {
LAB_7102dcfbc4:
          puVar8 = (undefined8 *)0x0;
        }
        uVar42 = 0;
        do {
          uVar14 = *puVar8;
          puVar32 = (undefined8 *)*plVar33;
          puVar26 = (undefined8 *)plVar9[uVar22 * 3 + 0x37];
          if (puVar32 < puVar26) {
            puVar32[1] = 0;
            *puVar32 = uVar14;
            *plVar33 = *plVar33 + 0x10;
          }
          else {
            pvVar44 = (void *)plVar9[uVar22 * 3 + 0x35];
            __n = (long *********)((long)puVar32 - (long)pvVar44);
            uVar37 = ((long)__n >> 4) + 1;
            if (uVar37 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar40 = (long)puVar26 - (long)pvVar44;
            if ((ulong)(lVar40 >> 4) < 0x7ffffffffffffff) {
              uVar30 = lVar40 >> 3;
              if (uVar37 <= uVar30) {
                uVar37 = uVar30;
              }
              if (uVar37 != 0) {
                if (uVar37 >> 0x3c == 0) goto LAB_7102dcfc74;
                goto LAB_7102dd16ec;
              }
              pvVar11 = (void *)0x0;
            }
            else {
              uVar37 = 0xfffffffffffffff;
LAB_7102dcfc74:
              pppppppplVar23 = (long ********)(uVar37 * 0x10);
              if (pppppppplVar23 == (long ********)0x0) {
                pppppppplVar23 = (long ********)0x1;
              }
              pvVar11 = (void *)FUN_710392e290(0x10,pppppppplVar23,(long ****)ppppppppplVar17,
                                               ppppbVar19,(long ****)param_5,param_6,param_7,param_8
                                              );
              if (pvVar11 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
                  ppppppppplVar17 = (long *********)&local_1f0;
                  local_1f0 = pppppppplVar23;
                  uVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
                  if (((uVar30 & 1) != 0) &&
                     (pvVar11 = (void *)FUN_710392e290(0x10,pppppppplVar23,
                                                       (long ****)ppppppppplVar17,ppppbVar19,
                                                       (long ****)param_5,param_6,param_7,param_8),
                     pvVar11 != (void *)0x0)) goto LAB_7102dcfce0;
                }
                pvVar11 = (void *)0x0;
              }
            }
LAB_7102dcfce0:
            puVar26 = (undefined8 *)((long)pvVar11 + ((long)__n >> 4) * 0x10);
            puVar26[1] = 0;
            *puVar26 = uVar14;
            if (0 < (long)__n) {
              memcpy(pvVar11,pvVar44,(size_t)__n);
              ppppppppplVar17 = __n;
            }
            plVar9[uVar22 * 3 + 0x35] = (long)pvVar11;
            *plVar33 = (long)(puVar26 + 2);
            plVar9[uVar22 * 3 + 0x37] = (long)((long)pvVar11 + uVar37 * 0x10);
            if (pvVar44 != (void *)0x0) {
              FUN_710392eb40((ulong)pvVar44);
            }
          }
          uVar42 = uVar42 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar42 < uVar21);
LAB_7102dcfd54:
        FUN_7103540b10(DAT_7105332f20,uVar41,ppppppppplVar17,ppppbVar19,(long ****)param_5,param_6,
                       param_7,param_8);
        uVar22 = uVar22 + 1;
        if (0xb < uVar22) goto LAB_7102dcfe20;
        goto LAB_7102dcf5e0;
      }
    }
  }
LAB_7102dcfe08:
  if (uVar41 == 0xffffff) goto LAB_7102dcfe20;
LAB_7102dcfe14:
  FUN_7103540b10(DAT_7105332f20,uVar41,ppppppppplVar17,ppppbVar19,(long ****)param_5,param_6,param_7
                 ,param_8);
LAB_7102dcfe20:
  lVar40 = plVar9[1];
  uVar6 = *(undefined4 *)(*(long *)(lVar40 + 0x308) + 0x124);
  memset(&local_1f0,0,0x160);
  lVar24 = (long)(int)*(uint *)((long)plVar9 + 0x84);
  if (0xb < *(uint *)((long)plVar9 + 0x84)) {
LAB_7102dd16ec:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = plVar9[lVar24 * 3 + 0x11];
  lVar43 = plVar9[0x10];
  uVar41 = (int)lVar43 * 0x14;
  uVar22 = plVar9[lVar24 * 3 + 0x12] - lVar10 >> 4;
  if (uVar22 <= uVar41) {
LAB_7102dd16f4:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  local_1f0 = (long ********)CONCAT44(uVar6,*(undefined4 *)(lVar10 + (ulong)uVar41 * 0x10));
  puStack_1e8 = (undefined1 *)0x0;
  if (uVar22 <= uVar41 + 0x13) goto LAB_7102dd16f4;
  local_a0 = CONCAT44(uVar6,*(undefined4 *)(lVar10 + (ulong)(uVar41 + 0x13) * 0x10));
  uStack_98 = 0;
  memset(local_330,0,0x130);
  local_3a0 = (long ********)CONCAT44(local_3a0._4_4_,0x200);
  local_350 = 0x100;
  local_3f8 = (long **)0x900000009;
  uStack_3f0 = 0x900000009;
  local_3e8 = 0x900000009;
  uStack_3e0 = 0x900000009;
  local_3d8 = 0x900000009;
  uStack_3d0 = 0x900000009;
  uVar42 = 0;
  local_3a8 = 9;
  local_3c8 = 0x900000009;
  uStack_3c0 = 0x900000009;
  puStack_338 = (undefined1 *)0x0;
  local_340 = (long ********)0xbf800000;
  local_3b8 = 0x900000009;
  uStack_3b0 = 0x900000009;
  ppppppppplVar17 = local_1e0;
  uStack_1f8 = 0;
  local_200 = 0x3f800000;
  puVar8 = local_330;
  do {
    uVar37 = (ulong)(uVar41 + (int)uVar42);
    if (uVar22 <= uVar37) goto LAB_7102dd16f4;
    puVar26 = (undefined8 *)(lVar10 + uVar37 * 0x10);
    ppppppppplVar17[1] = (long ********)puVar26[1];
    *ppppppppplVar17 = (long ********)*puVar26;
    if (uVar42 == 0x13) break;
    if (0x12 < uVar42) goto LAB_7102dd16ec;
    *(undefined4 *)(((ulong)&local_3a0 | 4) + uVar42 * 4) = (&DAT_710455a46c)[uVar42];
    uVar37 = (ulong)(uint)((int)lVar43 * 0x13 + (int)uVar42);
    if ((ulong)(plVar9[lVar24 * 3 + 0x36] - plVar9[lVar24 * 3 + 0x35] >> 4) <= uVar37)
    goto LAB_7102dd16f4;
    puVar26 = (undefined8 *)(plVar9[lVar24 * 3 + 0x35] + uVar37 * 0x10);
    puVar8[1] = puVar26[1];
    uVar42 = uVar42 + 1;
    ppppppppplVar17 = ppppppppplVar17 + 2;
    *puVar8 = *puVar26;
    puVar8 = puVar8 + 2;
  } while (uVar42 < 0x14);
  uStack_398 = uStack_398 | 0x400000000000;
  uVar22 = *(ulong *)(*(long *)(lVar40 + 0x300) + 0x10);
  plVar33 = (long *)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8) + 0x50);
  if ((long *)*plVar33 != (long *)0x0) {
    plVar28 = (long *)*plVar33;
    plVar33 = (long *)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8) + 0x50);
    do {
      while (plVar25 = plVar28, (ulong)plVar25[4] <= uVar22) {
        if (uVar22 <= (ulong)plVar25[4]) goto LAB_7102dd0038;
        plVar33 = plVar25 + 1;
        plVar28 = (long *)*plVar33;
        if ((long *)*plVar33 == (long *)0x0) goto LAB_7102dd0038;
      }
      plVar28 = (long *)*plVar25;
      plVar33 = plVar25;
    } while ((long *)*plVar25 != (long *)0x0);
  }
LAB_7102dd0038:
  lVar40 = *(long *)(*plVar33 + 0x28);
  ppppbVar19 = (byte ****)0x16;
  pauVar18 = (undefined1 (*) [16])&local_1f0;
  param_5 = (undefined1 (*) [16])&local_340;
  param_6 = &local_3a0;
  param_7 = &local_3f8;
  param_8 = (long ***)0x0;
  ppplVar12 = FUN_7100523f10(DAT_71052b9298,**(uint **)(lVar40 + 0xc0),pauVar18,
                             (undefined1 (*) [16])0x16,param_5,(uint *)param_6,(uint *)param_7,0);
  FUN_71031653d0(lVar40,(long)ppplVar12,(long ****)pauVar18,ppppbVar19,(long ****)param_5,param_6,
                 param_7,param_8);
  plVar9[4] = (long)ppplVar12;
  pplVar29 = ppplVar12[0xc];
  if (pplVar29 != (long **)0x0) {
    sVar5 = *(short *)(pplVar29 + 1);
    *(short *)(pplVar29 + 1) = sVar5 + -1;
    if (((short)(sVar5 + -1) < 1) && (ppplVar12[0xc] != (long **)0x0)) {
      (*(code *)(*ppplVar12[0xc])[1])();
    }
    ppplVar12[0xc] = (long **)0x0;
  }
  pplVar29 = (long **)FUN_710392e290(0x10,0x28,(long ****)pauVar18,ppppbVar19,(long ****)param_5,
                                     param_6,param_7,param_8);
  if (pplVar29 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_84[0] = 0;
      local_90 = (long ***)&DAT_00000028;
      pppplVar16 = &local_90;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
      if (((uVar22 & 1) != 0) &&
         (pplVar29 = (long **)FUN_710392e290(0x10,0x28,pppplVar16,ppppbVar19,(long ****)param_5,
                                             param_6,param_7,param_8), pplVar29 != (long **)0x0))
      goto LAB_7102dd0114;
    }
    pplVar29 = (long **)0x0;
  }
LAB_7102dd0114:
  *pplVar29 = (long *)&DAT_710513cb40;
  *(undefined4 *)(pplVar29 + 1) = 1;
  pplVar29[2] = plVar9;
  pplVar29[3] = (long *)FUN_7102dd43b0;
  pplVar29[4] = (long *)0x0;
  ppplVar12[0xc] = pplVar29;
  *(undefined1 *)(*(long *)(plVar9[4] + 8) + 0xe9) = 1;
  lVar40 = plVar9[4];
  *(undefined1 *)(lVar40 + 0x128) = 1;
  if (*(long *)(lVar40 + 8) != 0) {
    *(undefined8 *)(*(long *)(lVar40 + 8) + 0xd8) = 0xffffffffffffffff;
    FUN_7100532bc0(*(long *)(lVar40 + 8),0);
  }
  pppplVar16 = (long ****)0x0;
  FUN_7103165120(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                 *(ulong *)(*(long *)(plVar9[1] + 0x300) + 0x10),(long ****)0x0,ppppbVar19,
                 (long ****)param_5,param_6,param_7,param_8);
  plVar28 = (long *)(*(long *)(plVar9[4] + 8) + 0x98);
  for (plVar33 = (long *)*plVar28; plVar28 != plVar33; plVar33 = (long *)*plVar33) {
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
    *(undefined1 *)((long)plVar33 + 0x44) = 0;
  }
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
  *(undefined2 *)((long)plVar9 + 0x36c) = 0;
  plVar9[0x61] = 0;
  plVar9[0x60] = -0x3cd5e459bc29e8b4;
  auVar50._8_8_ = _DAT_7107521008;
  auVar50._0_8_ = _ConstantZero;
  auVar50 = NEON_ext(auVar50,auVar50,8,1);
  puStack_1e8 = (undefined1 *)(ulong)auVar50._0_4_;
  local_160 = _ConstantZero;
  uStack_158 = uRam0000007107459008;
  local_1f0 = _ConstantZero;
  local_1e0[2] = (long ********)&DAT_3f8000003f800000;
  local_1c8 = 0x169;
  local_1b8 = &DAT_3f8000003f800000;
  local_1a0 = 0x3003f;
  local_19c = 0x19;
  local_14a = 0;
  local_148 = 0x3f800000;
  local_1c0 = 0;
  local_1b0 = 0x3f800000;
  local_1a8 = 0x31ed91fca;
  local_190 = 0;
  local_18e = 0;
  local_18d = 0x100;
  local_17a = 0xe;
  local_17c = 0;
  uStack_181 = 0;
  uStack_189 = 0;
  local_184 = 0;
  local_178 = &DAT_100000001;
  local_168 = 0x31ed91fca;
  local_150 = 0;
  local_170 = 0;
  local_14c = 0;
  local_144 = 0x3f800000;
  local_124 = 0;
  local_330[0] = 0x1000000001;
  local_138 = 0x425cbfc4f;
  local_130 = 0x7fb997a80;
  local_128 = 0;
  local_120 = 0xbf800000;
  local_10c = 0;
  local_114 = 0;
  local_11c = 0;
  local_fc = 0x3f800000;
  local_1c4 = 100;
  local_104 = 0xffffffff;
  local_100 = 3;
  local_198 = 0x1474a84539;
  local_f8 = 0;
  local_f6 = 0;
  local_18f = 0;
  local_340 = (long ********)&DAT_00000004;
  puStack_338 = &DAT_100000001;
  local_1e0[0] = local_1f0;
  local_1e0[1] = (long ********)puStack_1e8;
  plVar33 = (long *)FUN_710392e290(0x10,0x48,pppplVar16,ppppbVar19,(long ****)param_5,param_6,
                                   param_7,param_8);
  if (plVar33 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3f8 = (long **)((ulong)local_3f8 & 0xffffffff00000000);
      local_3a0 = (long ********)&DAT_00000048;
      ppppppppplVar17 = &local_3a0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3f8);
      if (((uVar22 & 1) != 0) &&
         (plVar33 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar17,ppppbVar19,
                                           (long ****)param_5,param_6,param_7,param_8),
         plVar33 != (long *)0x0)) goto LAB_7102dd0368;
    }
    plVar33 = (long *)0x0;
  }
LAB_7102dd0368:
  ppppppppplVar17 = &local_340;
  FUN_710313e6a0(plVar33,plVar9[1],(long ****)ppppppppplVar17,ppppbVar19,(long ****)param_5,param_6,
                 param_7,param_8);
  plVar9[0x6e] = (long)plVar33;
  fVar46 = *(float *)(plVar9[3] + 0xbc);
  local_380 = *(undefined4 *)(plVar9[3] + 0xc0);
  local_37c = 2;
  auVar48._4_12_ = SUB1612(ZEXT816(0),4);
  auVar48._0_4_ = fVar46;
  local_3a0 = (long ********)CONCAT44(local_380,fVar46 * -0.5);
  uStack_398 = 0;
  uStack_388 = 0;
  uStack_390 = auVar48._0_8_;
  if (plVar33[7] != 0) {
    plVar33 = *(long **)(plVar33[7] + 0xa0);
    ppppbVar19 = (byte ****)&local_1f0;
    ppppppppplVar17 = (long *********)0x0;
    (**(code **)(*plVar33 + 0x68))(plVar33,0);
    plVar33 = (long *)*plVar13;
  }
  if (plVar33[7] != 0) {
    plVar33 = *(long **)(plVar33[7] + 0x130);
    ppppppppplVar17 = &local_3a0;
    ppppbVar19 = (byte ****)0x0;
    param_5 = (undefined1 (*) [16])0x0;
    param_6 = (long *********)0x0;
    (**(code **)(*plVar33 + 0x100))(plVar33,0);
    plVar33 = (long *)*plVar13;
  }
  if ((char)plVar33[8] != '\0') {
    plVar28 = (long *)plVar33[6];
    if (((plVar28 != (long *)0x0) && ((char)plVar28[2] != '\0')) &&
       (*(undefined1 *)(plVar28 + 2) = 0, (char)plVar28[10] != '\0')) {
      plVar25 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar28 + 8));
      (**(code **)(*plVar25 + 0x48))(plVar25,0);
      *(undefined1 *)(plVar28 + 10) = 0;
    }
    (**(code **)(*plVar33 + 0x30))(plVar33);
  }
  *(undefined1 *)(plVar33 + 8) = 0;
  if (*(long *)(*plVar13 + 0x38) != 0) {
    lVar40 = (**(code **)(**(long **)(*(long *)(*plVar13 + 0x38) + 0x130) + 0x1a8))();
    lVar24 = *(long *)(lVar40 + 8);
    *(uint *)(lVar40 + 0x4c) = *(uint *)(lVar40 + 0x4c) & 0xffffe07f | 0x80;
    if (0 < *(int *)(lVar24 + 0x10)) {
      lVar34 = *(long *)(lVar40 + 0x40);
      lVar43 = 0;
      lVar10 = 0x30;
      do {
        if (0 < *(int *)(lVar34 + lVar43 * 0x20)) {
          lVar36 = 0;
          do {
            lVar38 = *(long *)(*(long *)(lVar24 + 0x18) + lVar10 + lVar36 * 8);
            if (lVar38 != 0) {
              *(undefined8 *)(lVar38 + 8) = *(undefined8 *)(lVar40 + 0x48);
              lVar34 = *(long *)(lVar40 + 0x40);
              lVar24 = *(long *)(lVar40 + 8);
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 < *(int *)(lVar34 + lVar43 * 0x20));
        }
        lVar43 = lVar43 + 1;
        lVar10 = lVar10 + 0x2d0;
      } while (lVar43 < *(int *)(lVar24 + 0x10));
    }
  }
  if (*(long *)(*plVar13 + 0x38) != 0) {
    lVar40 = (**(code **)(**(long **)(*(long *)(*plVar13 + 0x38) + 0x130) + 0x1a8))();
    lVar24 = *(long *)(lVar40 + 8);
    *(uint *)(lVar40 + 0x4c) = *(uint *)(lVar40 + 0x4c) & 0xff1fffff | 0x200000;
    if (0 < *(int *)(lVar24 + 0x10)) {
      lVar34 = *(long *)(lVar40 + 0x40);
      lVar43 = 0;
      lVar10 = 0x30;
      do {
        if (0 < *(int *)(lVar34 + lVar43 * 0x20)) {
          lVar36 = 0;
          do {
            lVar38 = *(long *)(*(long *)(lVar24 + 0x18) + lVar10 + lVar36 * 8);
            if (lVar38 != 0) {
              *(undefined8 *)(lVar38 + 8) = *(undefined8 *)(lVar40 + 0x48);
              lVar34 = *(long *)(lVar40 + 0x40);
              lVar24 = *(long *)(lVar40 + 8);
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 < *(int *)(lVar34 + lVar43 * 0x20));
        }
        lVar43 = lVar43 + 1;
        lVar10 = lVar10 + 0x2d0;
      } while (lVar43 < *(int *)(lVar24 + 0x10));
    }
  }
  lVar40 = (**(code **)(**(long **)(*(long *)(*plVar13 + 0x38) + 0x130) + 0x1a8))();
  if (0 < *(int *)(*(long *)(lVar40 + 8) + 0x10)) {
    *(code **)(*(long *)(lVar40 + 0x38) + 0x2c8) = FUN_7102dd42b0;
  }
  puStack_338 = (undefined1 *)0x0;
  local_340 = (long ********)&DAT_3f800000;
  local_330[1] = 0;
  local_330[0] = 0x3f80000000000000;
  local_330[3] = 0x3f800000;
  local_330[2] = 0;
  auVar47._0_12_ = SUB1612(*(undefined1 (*) [16])(plVar9 + 0x60),0);
  auVar47._12_4_ = 0x3f800000;
  auVar50 = NEON_ext(auVar47,*(undefined1 (*) [16])(plVar9 + 0x60),0xc,1);
  auVar48 = NEON_ext(auVar50,auVar47,4,1);
  auVar50 = NEON_ext(auVar50,auVar50,8,1);
  auVar50 = NEON_ext(auVar48,auVar50,0xc,1);
  uStack_308 = auVar50._8_8_;
  local_330[4] = auVar50._0_8_;
  if (*(long *)(plVar9[0x6e] + 0x38) != 0) {
    plVar13 = *(long **)(*(long *)(plVar9[0x6e] + 0x38) + 0x130);
    ppppppppplVar17 = &local_340;
    ppppbVar19 = (byte ****)0x1;
    (**(code **)(*plVar13 + 0x178))(plVar13,&local_340);
  }
  local_340 = (long ********)&DAT_00000004;
  puStack_338 = &DAT_100000001;
  local_330[0] = 0x1000000001;
  plVar13 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar17,ppppbVar19,
                                   (long ****)param_5,param_6,param_7,param_8);
  if (plVar13 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3f8 = (long **)((ulong)local_3f8 & 0xffffffff00000000);
      local_3a0 = (long ********)&DAT_00000048;
      ppppppppplVar17 = &local_3a0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3f8);
      if (((uVar22 & 1) != 0) &&
         (plVar13 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar17,ppppbVar19,
                                           (long ****)param_5,param_6,param_7,param_8),
         plVar13 != (long *)0x0)) goto LAB_7102dd06ac;
    }
    plVar13 = (long *)0x0;
  }
LAB_7102dd06ac:
  ppppppppplVar17 = &local_340;
  FUN_710313e6a0(plVar13,plVar9[1],(long ****)ppppppppplVar17,ppppbVar19,(long ****)param_5,param_6,
                 param_7,param_8);
  plVar9[0x6f] = (long)plVar13;
  fVar46 = *(float *)(plVar9[3] + 0xc4);
  local_380 = *(undefined4 *)(plVar9[3] + 200);
  local_37c = 2;
  local_3a0 = (long ********)CONCAT44(local_380,fVar46 * -0.5);
  uStack_390 = (ulong)(uint)fVar46;
  uStack_398 = 0;
  uStack_388 = 0;
  if (plVar13[7] != 0) {
    plVar13 = *(long **)(plVar13[7] + 0xa0);
    ppppbVar19 = (byte ****)&local_1f0;
    ppppppppplVar17 = (long *********)0x0;
    (**(code **)(*plVar13 + 0x68))(plVar13,0);
    plVar13 = (long *)plVar9[0x6f];
  }
  if (plVar13[7] != 0) {
    plVar13 = *(long **)(plVar13[7] + 0x130);
    ppppppppplVar17 = &local_3a0;
    ppppbVar19 = (byte ****)0x0;
    param_5 = (undefined1 (*) [16])0x0;
    param_6 = (long *********)0x0;
    (**(code **)(*plVar13 + 0x100))(plVar13,0);
    plVar13 = (long *)plVar9[0x6f];
  }
  if ((char)plVar13[8] != '\0') {
    plVar33 = (long *)plVar13[6];
    if (((plVar33 != (long *)0x0) && ((char)plVar33[2] != '\0')) &&
       (*(undefined1 *)(plVar33 + 2) = 0, (char)plVar33[10] != '\0')) {
      plVar28 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar33 + 8));
      (**(code **)(*plVar28 + 0x48))(plVar28,0);
      *(undefined1 *)(plVar33 + 10) = 0;
    }
    (**(code **)(*plVar13 + 0x30))(plVar13);
  }
  *(undefined1 *)(plVar13 + 8) = 0;
  if (*(long *)(plVar9[0x6f] + 0x38) != 0) {
    lVar40 = (**(code **)(**(long **)(*(long *)(plVar9[0x6f] + 0x38) + 0x130) + 0x1a8))();
    lVar24 = *(long *)(lVar40 + 8);
    *(uint *)(lVar40 + 0x4c) = *(uint *)(lVar40 + 0x4c) & 0xffffe07f | 0x80;
    if (0 < *(int *)(lVar24 + 0x10)) {
      lVar34 = *(long *)(lVar40 + 0x40);
      lVar43 = 0;
      lVar10 = 0x30;
      do {
        if (0 < *(int *)(lVar34 + lVar43 * 0x20)) {
          lVar36 = 0;
          do {
            lVar38 = *(long *)(*(long *)(lVar24 + 0x18) + lVar10 + lVar36 * 8);
            if (lVar38 != 0) {
              *(undefined8 *)(lVar38 + 8) = *(undefined8 *)(lVar40 + 0x48);
              lVar34 = *(long *)(lVar40 + 0x40);
              lVar24 = *(long *)(lVar40 + 8);
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 < *(int *)(lVar34 + lVar43 * 0x20));
        }
        lVar43 = lVar43 + 1;
        lVar10 = lVar10 + 0x2d0;
      } while (lVar43 < *(int *)(lVar24 + 0x10));
    }
  }
  if (*(long *)(plVar9[0x6f] + 0x38) != 0) {
    lVar40 = (**(code **)(**(long **)(*(long *)(plVar9[0x6f] + 0x38) + 0x130) + 0x1a8))();
    lVar24 = *(long *)(lVar40 + 8);
    *(uint *)(lVar40 + 0x4c) = *(uint *)(lVar40 + 0x4c) & 0xff1fffff | 0x200000;
    if (0 < *(int *)(lVar24 + 0x10)) {
      lVar34 = *(long *)(lVar40 + 0x40);
      lVar43 = 0;
      lVar10 = 0x30;
      do {
        if (0 < *(int *)(lVar34 + lVar43 * 0x20)) {
          lVar36 = 0;
          do {
            lVar38 = *(long *)(*(long *)(lVar24 + 0x18) + lVar10 + lVar36 * 8);
            if (lVar38 != 0) {
              *(undefined8 *)(lVar38 + 8) = *(undefined8 *)(lVar40 + 0x48);
              lVar34 = *(long *)(lVar40 + 0x40);
              lVar24 = *(long *)(lVar40 + 8);
            }
            lVar36 = lVar36 + 1;
          } while (lVar36 < *(int *)(lVar34 + lVar43 * 0x20));
        }
        lVar43 = lVar43 + 1;
        lVar10 = lVar10 + 0x2d0;
      } while (lVar43 < *(int *)(lVar24 + 0x10));
    }
  }
  lVar40 = (**(code **)(**(long **)(*(long *)(plVar9[0x6f] + 0x38) + 0x130) + 0x1a8))();
  if (0 < *(int *)(*(long *)(lVar40 + 8) + 0x10)) {
    *(code **)(*(long *)(lVar40 + 0x38) + 0x2c8) = FUN_7102dd42b0;
  }
  puStack_338 = (undefined1 *)0x0;
  local_340 = (long ********)&DAT_3f800000;
  local_330[1] = 0;
  local_330[0] = 0x3f80000000000000;
  local_330[3] = 0x3f800000;
  local_330[2] = 0;
  auVar49._0_12_ = SUB1612(*(undefined1 (*) [16])(plVar9 + 0x60),0);
  auVar49._12_4_ = 0x3f800000;
  auVar50 = NEON_ext(auVar49,*(undefined1 (*) [16])(plVar9 + 0x60),0xc,1);
  auVar48 = NEON_ext(auVar50,auVar49,4,1);
  auVar50 = NEON_ext(auVar50,auVar50,8,1);
  auVar50 = NEON_ext(auVar48,auVar50,0xc,1);
  uStack_308 = auVar50._8_8_;
  local_330[4] = auVar50._0_8_;
  if (*(long *)(plVar9[0x6f] + 0x38) != 0) {
    plVar13 = *(long **)(*(long *)(plVar9[0x6f] + 0x38) + 0x130);
    ppppppppplVar17 = &local_340;
    ppppbVar19 = (byte ****)0x1;
    (**(code **)(*plVar13 + 0x178))(plVar13,&local_340);
  }
  (**(code **)(*plVar9 + 0x68))(plVar9);
  *(undefined2 *)((long)plVar9 + 0x2cd) = 1;
  *(undefined1 *)((long)plVar9 + 0x2cf) = 0;
  lVar40 = *lib::Singleton<app::FighterManager>::instance_;
  plVar13 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar17,ppppbVar19,
                                   (long ****)param_5,param_6,param_7,param_8);
  if (plVar13 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000028;
      ppppppppplVar17 = (long *********)&local_1f0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar22 & 1) != 0) &&
         (plVar13 = (long *)FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar17,ppppbVar19,
                                           (long ****)param_5,param_6,param_7,param_8),
         plVar13 != (long *)0x0)) goto LAB_7102dd0a08;
    }
    plVar13 = (long *)0x0;
  }
LAB_7102dd0a08:
  *(undefined4 *)(plVar13 + 1) = 1;
  *plVar13 = (long)&DAT_710513cb10;
  plVar13[2] = (long)plVar9;
  plVar13[3] = (long)FUN_7102dd40c0;
  plVar13[4] = 0;
  lVar40 = *(long *)(lVar40 + 8);
  plVar33 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar17,ppppbVar19,
                                   (long ****)param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_05;
  if (plVar33 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&SUB_00000018;
      ppppppppplVar17 = (long *********)&local_1f0;
      auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      uVar14 = auVar50._8_8_;
      if (((auVar50._0_8_ & 1) != 0) &&
         (plVar33 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar17,ppppbVar19,
                                           (long ****)param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_06, plVar33 != (long *)0x0)) goto LAB_7102dd0a84;
    }
    plVar33 = (long *)0x0;
  }
LAB_7102dd0a84:
  plVar33[2] = (long)plVar13;
  *(short *)(plVar13 + 1) = (short)plVar13[1] + 1;
  puVar8 = *(undefined8 **)(lVar40 + 0x808);
  *plVar33 = lVar40 + 0x800;
  plVar33[1] = (long)puVar8;
  *(long **)(lVar40 + 0x808) = plVar33;
  *puVar8 = plVar33;
  *(long *)(lVar40 + 0x7f8) = *(long *)(lVar40 + 0x7f8) + 1;
  plVar9[0x72] = (long)plVar33;
  sVar5 = (short)plVar13[1] + -1;
  *(short *)(plVar13 + 1) = sVar5;
  if (sVar5 < 1) {
    (**(code **)(*plVar13 + 8))(plVar13);
    uVar14 = extraout_x1_07;
  }
  plVar13 = *(long **)(param_1 + 0x740);
  *(long **)(param_1 + 0x740) = plVar9;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 8))();
    uVar14 = extraout_x1_08;
  }
LAB_7102dd0af4:
  cVar4 = *(char *)(param_1 + 0x974);
joined_r0x007102dd0c68:
  if (cVar4 == '\0') {
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
    uVar22 = 1;
  }
  else {
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
    uVar22 = (ulong)*(byte *)(param_1 + 0x7f4);
    if (uVar22 == 0) {
LAB_7102dd140c:
      plVar9 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppppppplVar17,ppppbVar19,
                                      (long ****)param_5,param_6,param_7,param_8);
      if (plVar9 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
          local_1f0 = (long ********)&DAT_00000048;
          pppplVar16 = (long ****)&local_1f0;
          uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
          if (((uVar22 & 1) != 0) &&
             (plVar9 = (long *)FUN_710392e290(0x10,0x48,pppplVar16,ppppbVar19,(long ****)param_5,
                                              param_6,param_7,param_8), plVar9 != (long *)0x0))
          goto LAB_7102dd1468;
        }
        plVar9 = (long *)0x0;
      }
LAB_7102dd1468:
      local_1f0 = (long ********)&SUB_00000020;
      pppplVar16 = (long ****)&local_1f0;
      puStack_1e8 = &DAT_100000001;
      local_1e0[0] = (long ********)0x1000000001;
      FUN_710313e6a0(plVar9,param_1,pppplVar16,ppppbVar19,(long ****)param_5,param_6,param_7,param_8
                    );
      *plVar9 = (long)&PTR_FUN_710513cb70;
      *(undefined1 *)((long)plVar9 + 0x43) = 0;
      *(long **)(param_1 + 0x968) = plVar9;
      if (plVar9[7] != 0) {
        lVar40 = (**(code **)(**(long **)(plVar9[7] + 0x130) + 0x1c8))();
        *(undefined4 *)(lVar40 + 0x300) = 0;
        *(undefined8 *)(lVar40 + 0x60) = 0x121a06;
        auVar50 = _DAT_7104469450;
        *(undefined8 *)(lVar40 + 0x70) = 0x31ed91fca;
        *(undefined4 *)(lVar40 + 0x68) = 0;
        *(undefined8 *)(lVar40 + 0x78) = 0;
        *(undefined8 *)(lVar40 + 0x80) = 0;
        *(undefined1 *)(lVar40 + 0x304) = 1;
        *(undefined8 *)(lVar40 + 0x2d8) = 0;
        *(undefined8 *)(lVar40 + 0x2d0) = 0xc1e12b02c1b6d0e5;
        *(long *)(lVar40 + 0x2e8) = auVar50._8_8_;
        *(long *)(lVar40 + 0x2e0) = auVar50._0_8_;
        auVar50 = _DAT_7104465b70;
        *(undefined2 *)(lVar40 + 0x2c0) = 4;
        *(long *)(lVar40 + 0x2f8) = auVar50._8_8_;
        *(long *)(lVar40 + 0x2f0) = auVar50._0_8_;
        *(undefined2 *)(lVar40 + 0x305) = (undefined2)local_1f0;
        *(undefined2 *)(lVar40 + 0x268) = 4;
        *(undefined1 *)(lVar40 + 0x307) = local_1f0._2_1_;
        *(undefined1 *)(lVar40 + 0x310) = 0;
        *(undefined8 *)(lVar40 + 0x308) = 0xc234000000000000;
        *(undefined8 *)(lVar40 + 0x26c) = 0xc234000000000000;
        *(undefined1 *)(lVar40 + 0x288) = 0;
        if (plVar9[7] != 0) {
          auVar50 = (**(code **)(**(long **)(plVar9[7] + 0x130) + 0x1c8))();
          FUN_7103148ab0(auVar50._0_8_,auVar50._8_8_,(undefined **)pppplVar16,ppppbVar19,
                         (long ****)param_5,param_6,param_7,param_8);
          if (plVar9[7] != 0) {
            plVar13 = (long *)(**(code **)(**(long **)(plVar9[7] + 0x130) + 0x1c8))();
            uVar6 = (**(code **)(*plVar13 + 0x108))(plVar13,0);
            if ((plVar9[7] != 0) &&
               (lVar40 = (**(code **)(**(long **)(plVar9[7] + 0x130) + 0x1c8))(),
               *(short *)(lVar40 + 0x2a0) != 0)) {
              *(undefined4 *)(lVar40 + 0x2a4) = uVar6;
            }
          }
        }
      }
      FUN_710313ef20(plVar9);
      if ((plVar9[6] == 0) || (*(char *)(plVar9[6] + 0x10) == '\0')) {
        FUN_710313f0a0((long)plVar9);
      }
      *(undefined1 *)((long)plVar9 + 0x43) = 1;
      plVar13 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
      plVar9 = (long *)*plVar13;
      do {
        if (plVar9 == (long *)plVar13[1]) goto LAB_7102dd163c;
        lVar40 = *plVar9;
        plVar9 = plVar9 + 1;
      } while ((*(ulong *)(lVar40 + 0xa0) & 0xffffffffff) != 0x7b569df99);
      if (lVar40 == 0) {
LAB_7102dd163c:
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = *(undefined8 **)(lVar40 + 0x130);
        if (puVar8 != (undefined8 *)0x0) {
          FUN_71025f5420((undefined8 *)*puVar8,(undefined8 *)puVar8[1],"IPP0001");
        }
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51ba == '\0') {
        if (puVar8 != (undefined8 *)0x0) {
          FUN_71025f55b0((undefined8 *)*puVar8,(undefined8 *)puVar8[1],"IPP0002");
        }
      }
      else if (puVar8 != (undefined8 *)0x0) {
        FUN_71025f5420((undefined8 *)*puVar8,(undefined8 *)puVar8[1],"IPP0002");
      }
      return;
    }
  }
  uVar42 = 0;
  pauVar18 = param_5;
  if (cVar4 == '\0') goto LAB_7102dd104c;
LAB_7102dd0ca8:
  ppppbVar45 = (byte ****)(*(long *)(param_1 + 0x9d8) + uVar42 * 0x90);
  pppppppplVar23 =
       (long ********)
       FUN_710392e290(0x10,0xa0,(long ****)ppppppppplVar17,ppppbVar19,(long ****)param_5,param_6,
                      param_7,param_8);
  if (pppppppplVar23 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_000000a0;
      pppplVar16 = (long ****)&local_1f0;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar37 & 1) != 0) &&
         (pppppppplVar23 =
               (long ********)
               FUN_710392e290(0x10,0xa0,pppplVar16,ppppbVar19,(long ****)param_5,param_6,param_7,
                              param_8), pppppppplVar23 != (long ********)0x0)) goto LAB_7102dd0d0c;
    }
    pppppppplVar23 = (long ********)0x0;
  }
LAB_7102dd0d0c:
  ppppppppplVar17 = (long *********)(ulong)(uVar42 != 0);
  FUN_7102ddb2a0(pppppppplVar23,param_1,ppppppppplVar17,ppppbVar45,(long ****)param_5,param_6,
                 param_7,param_8);
  plVar9 = *(long **)(param_1 + 0x790);
  uVar14 = extraout_x1_11;
  if (plVar9 < *(long **)(param_1 + 0x798)) {
    *plVar9 = (long)pppppppplVar23;
    *(long *)(param_1 + 0x790) = *(long *)(param_1 + 0x790) + 8;
    local_340 = (long ********)0x0;
    cVar4 = *(char *)(param_1 + 0x974);
    ppppbVar19 = ppppbVar45;
    pauVar18 = param_5;
    goto joined_r0x007102dd0d54;
  }
  plVar13 = *(long **)(param_1 + 0x788);
  lVar40 = (long)plVar9 - (long)plVar13 >> 3;
  uVar37 = lVar40 + 1;
  local_340 = pppppppplVar23;
  if (uVar37 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar24 = (long)*(long **)(param_1 + 0x798) - (long)plVar13;
  if ((ulong)(lVar24 >> 3) < 0xfffffffffffffff) {
    uVar30 = lVar24 >> 2;
    if (uVar37 <= uVar30) {
      uVar37 = uVar30;
    }
    if (uVar37 != 0) {
      if (uVar37 >> 0x3d == 0) goto LAB_7102dd0de4;
      goto LAB_7102dd16ec;
    }
    lVar24 = 0;
  }
  else {
    uVar37 = 0x1fffffffffffffff;
LAB_7102dd0de4:
    pppppppplVar31 = (long ********)(uVar37 * 8);
    if (pppppppplVar31 == (long ********)0x0) {
      pppppppplVar31 = (long ********)0x1;
    }
    lVar24 = FUN_710392e290(0x10,pppppppplVar31,(long ****)ppppppppplVar17,ppppbVar45,
                            (long ****)param_5,param_6,param_7,param_8);
    uVar14 = extraout_x1_12;
    if (lVar24 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_3a0 = (long ********)((ulong)local_3a0 & 0xffffffff00000000);
        ppppppppplVar17 = (long *********)&local_1f0;
        local_1f0 = pppppppplVar31;
        auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3a0);
        uVar14 = auVar50._8_8_;
        if (((auVar50._0_8_ & 1) != 0) &&
           (lVar24 = FUN_710392e290(0x10,pppppppplVar31,(long ****)ppppppppplVar17,ppppbVar45,
                                    (long ****)param_5,param_6,param_7,param_8),
           uVar14 = extraout_x1_13, lVar24 != 0)) goto LAB_7102dd0e40;
      }
      lVar24 = 0;
    }
LAB_7102dd0e40:
    plVar13 = *(long **)(param_1 + 0x788);
    plVar9 = *(long **)(param_1 + 0x790);
  }
  plVar33 = (long *)(lVar24 + lVar40 * 8);
  local_340 = (long ********)0x0;
  plVar28 = plVar33 + 1;
  *plVar33 = (long)pppppppplVar23;
  if (plVar9 != plVar13) {
    uVar35 = (long)(plVar9 + -1) - (long)plVar13;
    uVar39 = uVar35 >> 3;
    uVar41 = (int)uVar39 + 1;
    uVar30 = (ulong)uVar41 & 3;
    if ((uVar41 & 3) != 0) {
      lVar43 = -uVar30;
      plVar25 = plVar9 + -1;
      do {
        plVar33 = plVar33 + -1;
        lVar10 = *plVar25;
        lVar43 = lVar43 + 1;
        *plVar25 = 0;
        *plVar33 = lVar10;
        plVar25 = plVar25 + -1;
      } while (lVar43 != 0);
      plVar33 = (long *)(lVar24 + (lVar40 - uVar30) * 8);
      plVar9 = plVar9 + -uVar30;
    }
    if (0x17 < uVar35) {
      uVar30 = (long)plVar9 + (-0x20 - (long)plVar13);
      if (((uint)uVar30 >> 5 & 1) == 0) {
        lVar43 = plVar9[-1];
        plVar9[-1] = 0;
        plVar33[-1] = lVar43;
        lVar43 = plVar9[-2];
        plVar9[-2] = 0;
        plVar33[-2] = lVar43;
        lVar43 = plVar9[-3];
        plVar9[-3] = 0;
        plVar33[-3] = lVar43;
        plVar9 = plVar9 + -4;
        lVar43 = *plVar9;
        *plVar9 = 0;
        plVar33[-4] = lVar43;
        plVar33 = plVar33 + -4;
      }
      if (0x1f < uVar30) {
        plVar33 = plVar33 + -4;
        do {
          lVar43 = plVar9[-1];
          plVar9[-1] = 0;
          plVar33[3] = lVar43;
          lVar43 = plVar9[-2];
          plVar9[-2] = 0;
          plVar33[2] = lVar43;
          lVar43 = plVar9[-3];
          plVar9[-3] = 0;
          plVar33[1] = lVar43;
          lVar43 = plVar9[-4];
          plVar9[-4] = 0;
          *plVar33 = lVar43;
          lVar43 = plVar9[-5];
          plVar9[-5] = 0;
          plVar33[-1] = lVar43;
          lVar43 = plVar9[-6];
          plVar9[-6] = 0;
          plVar33[-2] = lVar43;
          lVar43 = plVar9[-7];
          plVar9[-7] = 0;
          plVar33[-3] = lVar43;
          plVar9 = plVar9 + -8;
          lVar43 = *plVar9;
          *plVar9 = 0;
          plVar33[-4] = lVar43;
          plVar33 = plVar33 + -8;
        } while (plVar13 != plVar9);
      }
    }
    plVar13 = *(long **)(param_1 + 0x788);
    plVar9 = *(long **)(param_1 + 0x790);
    plVar33 = (long *)(lVar24 + (lVar40 + ~uVar39) * 8);
  }
  *(long **)(param_1 + 0x788) = plVar33;
  *(long **)(param_1 + 0x790) = plVar28;
  *(ulong *)(param_1 + 0x798) = lVar24 + uVar37 * 8;
  ppppbVar19 = ppppbVar45;
  pauVar18 = param_5;
  while (plVar9 != plVar13) {
    plVar9 = plVar9 + -1;
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
    plVar33 = (long *)*plVar9;
    *plVar9 = 0;
    if (plVar33 != (long *)0x0) {
      (**(code **)(*plVar33 + 8))();
      uVar14 = extraout_x1_14;
    }
  }
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
  if (plVar13 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar13);
    uVar14 = extraout_x1_15;
  }
  pppppppplVar23 = local_340;
  local_340 = (long ********)0x0;
  if (pppppppplVar23 == (long ********)0x0) goto LAB_7102dd1084;
  (*(code *)(*pppppppplVar23)[1])();
  cVar4 = *(char *)(param_1 + 0x974);
  uVar14 = extraout_x1_16;
joined_r0x007102dd0d54:
  param_5 = pauVar18;
  if (cVar4 != '\0') goto LAB_7102dd108c;
  do {
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
        plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
      if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0x8ea2569d6)
         ) {
        if (lVar40 != 0) {
          *(undefined1 *)(lVar40 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar40 + 0x108),uVar14,(long ****)ppppppppplVar17,ppppbVar19,
                         (long ****)param_5,param_6,param_7,param_8);
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
          if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar40 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
          }
          uVar14 = extraout_x1_17;
          if (*(char *)(lVar40 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
          }
        }
        break;
      }
    }
LAB_7102dd1388:
    uVar42 = uVar42 + 1;
    if (uVar42 == uVar22) goto LAB_7102dd140c;
    pauVar18 = param_5;
    if (*(char *)(param_1 + 0x974) != '\0') goto LAB_7102dd0ca8;
LAB_7102dd104c:
    for (plVar9 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
        plVar9 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar9 = plVar9 + 2) {
      if ((*(uint *)(plVar9 + 1) < 2) && (lVar40 = *plVar9, *(long *)(lVar40 + 0x68) == 0xda392cd36)
         ) {
        if (lVar40 != 0) {
          *(undefined1 *)(lVar40 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar40 + 0x108),uVar14,(long ****)ppppppppplVar17,ppppbVar19,
                         (long ****)pauVar18,param_6,param_7,param_8);
          *(byte *)(lVar40 + 0x118) = *(byte *)(lVar40 + 0x118) | 1;
          if ((*(char *)(lVar40 + 0xe0) != '\0') && (*(long *)(lVar40 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar40 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar40 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar40 + 0xd8) + 0x21) = 1;
          }
          uVar14 = extraout_x1_24;
          if (*(char *)(lVar40 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar40 + 0xb0) + 0x10) = 0;
            cVar4 = *(char *)(param_1 + 0x974);
            goto joined_r0x007102dd0d54;
          }
        }
        break;
      }
    }
LAB_7102dd1084:
    param_5 = pauVar18;
  } while (*(char *)(param_1 + 0x974) == '\0');
LAB_7102dd108c:
  param_5 = (undefined1 (*) [16])(*(long *)(param_1 + 0x9d8) + uVar42 * 0x90);
  pppppppplVar23 =
       (long ********)
       FUN_710392e290(0x10,0x70,(long ****)ppppppppplVar17,ppppbVar19,(long ****)pauVar18,param_6,
                      param_7,param_8);
  if (pppppppplVar23 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_340 = (long ********)((ulong)local_340 & 0xffffffff00000000);
      local_1f0 = (long ********)&DAT_00000070;
      pppplVar16 = (long ****)&local_1f0;
      uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_340);
      if (((uVar37 & 1) != 0) &&
         (pppppppplVar23 =
               (long ********)
               FUN_710392e290(0x10,0x70,pppplVar16,ppppbVar19,(long ****)pauVar18,param_6,param_7,
                              param_8), pppppppplVar23 != (long ********)0x0)) goto LAB_7102dd10f0;
    }
    pppppppplVar23 = (long ********)0x0;
  }
LAB_7102dd10f0:
  ppppbVar19 = (byte ****)(ulong)(uVar42 != 0);
  ppppppppplVar17 = ppppppppplVar1;
  FUN_7102ddac30(pppppppplVar23,param_1,ppppppppplVar1,ppppbVar19,(long ****)param_5,param_6,param_7
                 ,param_8);
  plVar9 = *(long **)(param_1 + 0x778);
  uVar14 = extraout_x1_18;
  if (plVar9 < *(long **)(param_1 + 0x780)) {
    *plVar9 = (long)pppppppplVar23;
    *(long *)(param_1 + 0x778) = *(long *)(param_1 + 0x778) + 8;
    local_340 = (long ********)0x0;
  }
  else {
    plVar13 = *(long **)(param_1 + 0x770);
    lVar40 = (long)plVar9 - (long)plVar13 >> 3;
    uVar37 = lVar40 + 1;
    local_340 = pppppppplVar23;
    if (uVar37 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar24 = (long)*(long **)(param_1 + 0x780) - (long)plVar13;
    if ((ulong)(lVar24 >> 3) < 0xfffffffffffffff) {
      uVar30 = lVar24 >> 2;
      if (uVar37 <= uVar30) {
        uVar37 = uVar30;
      }
      if (uVar37 != 0) {
        if (uVar37 >> 0x3d == 0) goto LAB_7102dd118c;
        goto LAB_7102dd16ec;
      }
      lVar24 = 0;
    }
    else {
      uVar37 = 0x1fffffffffffffff;
LAB_7102dd118c:
      pppppppplVar31 = (long ********)(uVar37 * 8);
      if (pppppppplVar31 == (long ********)0x0) {
        pppppppplVar31 = (long ********)0x1;
      }
      lVar24 = FUN_710392e290(0x10,pppppppplVar31,(long ****)ppppppppplVar17,ppppbVar19,
                              (long ****)param_5,param_6,param_7,param_8);
      uVar14 = extraout_x1_19;
      if (lVar24 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_3a0 = (long ********)((ulong)local_3a0 & 0xffffffff00000000);
          ppppppppplVar17 = (long *********)&local_1f0;
          local_1f0 = pppppppplVar31;
          auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3a0);
          uVar14 = auVar50._8_8_;
          if (((auVar50._0_8_ & 1) != 0) &&
             (lVar24 = FUN_710392e290(0x10,pppppppplVar31,(long ****)ppppppppplVar17,ppppbVar19,
                                      (long ****)param_5,param_6,param_7,param_8),
             uVar14 = extraout_x1_20, lVar24 != 0)) goto LAB_7102dd11e8;
        }
        lVar24 = 0;
      }
LAB_7102dd11e8:
      plVar13 = *(long **)(param_1 + 0x770);
      plVar9 = *(long **)(param_1 + 0x778);
    }
    plVar33 = (long *)(lVar24 + lVar40 * 8);
    local_340 = (long ********)0x0;
    plVar28 = plVar33 + 1;
    *plVar33 = (long)pppppppplVar23;
    if (plVar9 != plVar13) {
      uVar35 = (long)(plVar9 + -1) - (long)plVar13;
      uVar39 = uVar35 >> 3;
      uVar41 = (int)uVar39 + 1;
      uVar30 = (ulong)uVar41 & 3;
      if ((uVar41 & 3) != 0) {
        lVar43 = -uVar30;
        plVar25 = plVar9 + -1;
        do {
          plVar33 = plVar33 + -1;
          lVar10 = *plVar25;
          lVar43 = lVar43 + 1;
          *plVar25 = 0;
          *plVar33 = lVar10;
          plVar25 = plVar25 + -1;
        } while (lVar43 != 0);
        plVar33 = (long *)(lVar24 + (lVar40 - uVar30) * 8);
        plVar9 = plVar9 + -uVar30;
      }
      if (0x17 < uVar35) {
        uVar30 = (long)plVar9 + (-0x20 - (long)plVar13);
        if (((uint)uVar30 >> 5 & 1) == 0) {
          lVar43 = plVar9[-1];
          plVar9[-1] = 0;
          plVar33[-1] = lVar43;
          lVar43 = plVar9[-2];
          plVar9[-2] = 0;
          plVar33[-2] = lVar43;
          lVar43 = plVar9[-3];
          plVar9[-3] = 0;
          plVar33[-3] = lVar43;
          plVar9 = plVar9 + -4;
          lVar43 = *plVar9;
          *plVar9 = 0;
          plVar33[-4] = lVar43;
          plVar33 = plVar33 + -4;
        }
        if (0x1f < uVar30) {
          plVar33 = plVar33 + -4;
          do {
            lVar43 = plVar9[-1];
            plVar9[-1] = 0;
            plVar33[3] = lVar43;
            lVar43 = plVar9[-2];
            plVar9[-2] = 0;
            plVar33[2] = lVar43;
            lVar43 = plVar9[-3];
            plVar9[-3] = 0;
            plVar33[1] = lVar43;
            lVar43 = plVar9[-4];
            plVar9[-4] = 0;
            *plVar33 = lVar43;
            lVar43 = plVar9[-5];
            plVar9[-5] = 0;
            plVar33[-1] = lVar43;
            lVar43 = plVar9[-6];
            plVar9[-6] = 0;
            plVar33[-2] = lVar43;
            lVar43 = plVar9[-7];
            plVar9[-7] = 0;
            plVar33[-3] = lVar43;
            plVar9 = plVar9 + -8;
            lVar43 = *plVar9;
            *plVar9 = 0;
            plVar33[-4] = lVar43;
            plVar33 = plVar33 + -8;
          } while (plVar13 != plVar9);
        }
      }
      plVar13 = *(long **)(param_1 + 0x770);
      plVar9 = *(long **)(param_1 + 0x778);
      plVar33 = (long *)(lVar24 + (lVar40 + ~uVar39) * 8);
    }
    *(long **)(param_1 + 0x770) = plVar33;
    *(long **)(param_1 + 0x778) = plVar28;
    *(ulong *)(param_1 + 0x780) = lVar24 + uVar37 * 8;
    while (plVar9 != plVar13) {
      plVar9 = plVar9 + -1;
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
      plVar33 = (long *)*plVar9;
      *plVar9 = 0;
      if (plVar33 != (long *)0x0) {
        (**(code **)(*plVar33 + 8))();
        uVar14 = extraout_x1_21;
      }
    }
                    /* WARNING: Read-only address (ram,0x007104465b70) is written */
                    /* WARNING: Read-only address (ram,0x007104469450) is written */
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
      uVar14 = extraout_x1_22;
    }
    pppppppplVar23 = local_340;
    local_340 = (long ********)0x0;
    if (pppppppplVar23 != (long ********)0x0) {
      (*(code *)(*pppppppplVar23)[1])();
      uVar14 = extraout_x1_23;
    }
  }
  goto LAB_7102dd1388;
}

