// addr:      710271cd60
// offset:    0x271cd60
// name:      FUN_710271cd60
// mangled:   
// signature: undefined __cdecl FUN_710271cd60(long * param_1, long param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, float * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_710271cd60(long *param_1,long param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   float *param_6,long ***param_7,long ***param_8)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 *puVar18;
  ulong uVar19;
  void *__dest;
  long *plVar20;
  undefined8 extraout_x1;
  byte ****ppppbVar21;
  ulong uVar22;
  undefined4 *puVar23;
  byte **ppbVar24;
  byte ****ppppbVar25;
  undefined4 *puVar26;
  code *pcVar27;
  uint uVar28;
  undefined4 *puVar29;
  ulong *puVar30;
  ulong uVar31;
  uint *puVar32;
  long lVar33;
  ulong *puVar34;
  char *pcVar35;
  float *pfVar36;
  long lVar37;
  float *pfVar38;
  long lVar39;
  ulong *puVar40;
  long lVar41;
  ulong uVar42;
  long lVar43;
  long *plVar44;
  float *pfVar45;
  byte ****ppppbVar46;
  ulong *puVar47;
  undefined8 uVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  long lVar51;
  undefined8 *puVar52;
  ulong *puVar53;
  long lVar54;
  long *plVar55;
  long ****pppplVar56;
  byte ***pppbVar57;
  void *pvVar58;
  int iVar59;
  long *plVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  float fVar68;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined **local_260;
  long *plStack_258;
  undefined ***local_240;
  undefined **local_230;
  long *plStack_228;
  undefined ***local_210;
  byte ***local_200;
  long *plStack_1f8;
  undefined8 local_1f0;
  long *plStack_1e8;
  byte ****local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *puStack_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined2 local_18f;
  undefined1 local_18d;
  undefined2 local_18c;
  undefined1 local_18a;
  ulong local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 *local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined2 local_138;
  undefined2 local_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined2 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 local_106;
  undefined8 local_100;
  long *plStack_f8;
  long *local_e0;
  byte ***local_d0;
  long *plStack_c8;
  byte ****local_b0;
  byte ***local_a0;
  long *plStack_98;
  byte ****local_80;
  
  *param_1 = param_2;
  param_1[1] = (long)param_3;
  plVar11 = param_1 + 2;
  *plVar11 = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar51 = *(long *)(param_2 + 0x308);
  FUN_7102624c20(*(undefined4 *)(param_3 + 1),*(undefined4 *)((long)param_3 + 0xc),lVar51);
  lVar43 = *(long *)(lVar51 + 0x100);
  param_1[0xd] = *(long *)(lVar51 + 0xf8);
  param_1[0xe] = lVar43;
  lVar43 = *(long *)(lVar51 + 0x120);
  param_1[0xf] = *(long *)(lVar51 + 0x118);
  param_1[0x10] = lVar43;
  if (DAT_710532a860 == (long *)0x0) {
LAB_710271ce34:
    iVar59 = 2;
  }
  else {
    if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) {
LAB_710271fe8c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar22 = (ulong)*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                              (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700 + 0x3d68c);
    if (3 < uVar22) goto LAB_710271ce34;
    iVar59 = (&DAT_7104470440)[uVar22];
  }
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0xa8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000000a8;
      param_3 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0xa8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_710271ce94;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271ce94:
  puVar10[0x13] = 0;
  puVar10[0x14] = 0;
  *puVar10 = 0;
  puVar10[0x11] = 0;
  puVar10[0x12] = 0;
  puVar10[0xf] = 0;
  puVar10[0x10] = 0;
  puVar10[0xd] = 0;
  puVar10[0xe] = 0;
  puVar10[0xb] = 0;
  puVar10[0xc] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar52 = (undefined8 *)*plVar11;
  *plVar11 = (long)puVar10;
  if (puVar52 != (undefined8 *)0x0) {
    FUN_71027253c0(puVar52);
    FUN_710392eb40((ulong)puVar52);
    puVar10 = (undefined8 *)*plVar11;
  }
  lVar43 = param_1[1];
  plVar11 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000030;
      param_3 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_710271cf40;
    }
    plVar11 = (long *)0x0;
  }
LAB_710271cf40:
  *plVar11 = lVar43;
  plVar11[1] = (long)puVar10;
  plVar11[2] = 0;
  if (iVar59 == 3) {
    puVar23 = (undefined4 *)(lVar43 + 0x24);
  }
  else {
    puVar23 = (undefined4 *)(lVar43 + 0x1c);
    if ((iVar59 != 1) && (iVar59 != 0)) {
      puVar23 = (undefined4 *)(lVar43 + 0x20);
    }
  }
  *(undefined4 *)(plVar11 + 3) = *puVar23;
  *(undefined8 *)((long)plVar11 + 0x1c) = 0xff80000000000000;
  *(undefined4 *)((long)plVar11 + 0x24) = 0x7f800000;
  *(undefined1 *)(plVar11 + 5) = 0;
  if (*(undefined4 **)(lVar43 + 0x60) != *(undefined4 **)(lVar43 + 0x58)) {
    *(undefined4 *)((long)plVar11 + 0x24) = **(undefined4 **)(lVar43 + 0x58);
  }
  local_200 = (byte ***)&PTR_FUN_71050d61e8;
  plStack_1f8 = plVar11;
  local_1e0 = &local_200;
  FUN_7102725970((long)puVar10,(long *)&local_200,(long ****)param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  if (&local_200 == local_1e0) {
    ppbVar24 = (*local_1e0)[4];
LAB_710271cfe0:
    (*(code *)ppbVar24)();
  }
  else if (local_1e0 != (byte ****)0x0) {
    ppbVar24 = (*local_1e0)[5];
    goto LAB_710271cfe0;
  }
  lVar43 = plVar11[1];
  local_a0 = (byte ***)&PTR_FUN_71050d6230;
  plStack_98 = plVar11;
  local_80 = &local_a0;
  uVar15 = *(ulong *)(lVar43 + 0x50);
  uVar22 = 0x555555555555555;
  if (uVar15 < *(ulong *)(lVar43 + 0x58)) {
    *(ulong *)(uVar15 + 0x20) = uVar15;
    (*(code *)PTR_FUN_71050d6248)();
    *(long *)(lVar43 + 0x50) = *(long *)(lVar43 + 0x50) + 0x30;
  }
  else {
    lVar51 = (long)(uVar15 - *(long *)(lVar43 + 0x48)) >> 4;
    uVar15 = lVar51 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar15) goto LAB_710271fe9c;
    lVar54 = (long)(*(ulong *)(lVar43 + 0x58) - *(long *)(lVar43 + 0x48)) >> 4;
    if ((ulong)(lVar54 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar19 = lVar54 * 0x5555555555555556;
      uVar22 = uVar15;
      if (uVar15 <= uVar19) {
        uVar22 = uVar19;
      }
      if (uVar22 != 0) goto LAB_710271d088;
      lVar54 = 0;
      lVar37 = lVar51 * 0x10;
      lVar33 = 0;
LAB_710271d11c:
      if (&local_a0 == local_80) {
        *(long *)(lVar54 + lVar51 * 0x10 + 0x20) = lVar37;
        (*(code *)(*local_80)[3])(local_80,lVar37);
      }
      else {
        *(byte *****)(lVar54 + lVar51 * 0x10 + 0x20) = local_80;
        local_80 = (byte ****)0x0;
      }
    }
    else {
LAB_710271d088:
      pppbVar57 = (byte ***)(uVar22 * 0x30);
      if (pppbVar57 == (byte ***)0x0) {
        pppbVar57 = (byte ***)0x1;
      }
      lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)param_3,param_4,param_5,param_6,param_7,
                              param_8);
      if (lVar54 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
          param_3 = &local_d0;
          local_d0 = pppbVar57;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
          if (((uVar15 & 1) != 0) &&
             (lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)param_3,param_4,param_5,param_6,
                                      param_7,param_8), lVar54 != 0)) goto LAB_710271d0e8;
        }
        lVar54 = 0;
      }
LAB_710271d0e8:
      lVar37 = lVar54 + lVar51 * 0x10;
      lVar33 = lVar54 + uVar22 * 0x30;
      if (local_80 != (byte ****)0x0) goto LAB_710271d11c;
      *(undefined8 *)(lVar54 + lVar51 * 0x10 + 0x20) = 0;
    }
    plVar12 = *(long **)(lVar43 + 0x48);
    plVar44 = *(long **)(lVar43 + 0x50);
    lVar51 = lVar37;
    if (*(long **)(lVar43 + 0x50) == plVar12) {
      *(long *)(lVar43 + 0x48) = lVar37;
      *(long *)(lVar43 + 0x50) = lVar37 + 0x30;
      *(long *)(lVar43 + 0x58) = lVar33;
    }
    else {
      do {
        plVar17 = (long *)plVar44[-2];
        lVar54 = lVar51 + -0x30;
        plVar14 = plVar44 + -6;
        if (plVar17 == (long *)0x0) {
          *(undefined8 *)(lVar51 + -0x10) = 0;
        }
        else if (plVar14 == plVar17) {
          *(long *)(lVar51 + -0x10) = lVar54;
          (**(code **)(*(long *)plVar44[-2] + 0x18))((long *)plVar44[-2],lVar54);
        }
        else {
          *(long **)(lVar51 + -0x10) = plVar17;
          plVar44[-2] = 0;
        }
        plVar44 = plVar14;
        lVar51 = lVar54;
      } while (plVar12 != plVar14);
      plVar12 = *(long **)(lVar43 + 0x48);
      plVar44 = *(long **)(lVar43 + 0x50);
      *(long *)(lVar43 + 0x48) = lVar54;
      *(long *)(lVar43 + 0x50) = lVar37 + 0x30;
      *(long *)(lVar43 + 0x58) = lVar33;
joined_r0x00710271d1d0:
      if (plVar44 != plVar12) {
        plVar17 = (long *)plVar44[-2];
        plVar44 = plVar44 + -6;
        if (plVar44 != plVar17) goto code_r0x00710271d1e4;
        pcVar27 = *(code **)(*plVar17 + 0x20);
        goto LAB_710271d1fc;
      }
    }
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
  }
  if (&local_a0 == local_80) {
    ppbVar24 = (*local_80)[4];
LAB_710271d23c:
    (*(code *)ppbVar24)();
  }
  else if (local_80 != (byte ****)0x0) {
    ppbVar24 = (*local_80)[5];
    goto LAB_710271d23c;
  }
  uVar22 = param_1[3];
  param_1[3] = (long)plVar11;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
    plVar11 = (long *)param_1[3];
  }
  lVar43 = *param_1;
  lVar51 = param_1[1];
  lVar54 = param_1[2];
  plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000030;
      param_3 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar12 != (long *)0x0))
      goto LAB_710271d2b8;
    }
    plVar12 = (long *)0x0;
  }
LAB_710271d2b8:
  *plVar12 = lVar43;
  *(int *)(plVar12 + 1) = iVar59;
  plVar12[4] = (long)plVar11;
  *(undefined4 *)(plVar12 + 5) = 0;
  plVar12[2] = lVar51;
  plVar12[3] = lVar54;
  uVar22 = param_1[4];
  param_1[4] = (long)plVar12;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
    plVar12 = (long *)param_1[4];
  }
  plVar11 = (long *)FUN_710392e290(0x10,0xb0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000000b0;
      param_3 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0xb0,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_710271d33c;
    }
    plVar11 = (long *)0x0;
  }
LAB_710271d33c:
  plVar44 = plVar11 + 2;
  *plVar44 = 0;
  plVar11[3] = 0;
  *plVar11 = (long)plVar12;
  plVar11[1] = (long)plVar44;
  *(undefined4 *)(plVar11 + 9) = 0;
  plVar14 = plVar11 + 5;
  *plVar14 = 0;
  plVar17 = plVar11 + 6;
  *plVar17 = 0;
  *(undefined1 *)(plVar11 + 10) = 0;
  *(undefined4 *)(plVar11 + 0x14) = 0;
  plVar11[7] = 0;
  plVar11[8] = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000030;
      param_3 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_710271d3c0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271d3c0:
  *puVar10 = plVar12;
  *(undefined1 *)(puVar10 + 1) = 0;
  *(undefined4 *)((long)puVar10 + 0x2c) = 0;
  *(undefined8 *)((long)puVar10 + 0x24) = 0;
  *(undefined8 *)((long)puVar10 + 0x1c) = 0;
  *(undefined8 *)((long)puVar10 + 0x14) = 0;
  *(undefined8 *)((long)puVar10 + 0xc) = 0;
  plVar11[4] = (long)puVar10;
  piVar13 = (int *)FUN_710392e290(0x10,0xb0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (piVar13 == (int *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000000b0;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (piVar13 = (int *)FUN_710392e290(0x10,0xb0,(long ****)ppppbVar21,param_4,param_5,param_6,
                                          param_7,param_8), piVar13 != (int *)0x0))
      goto LAB_710271d43c;
    }
    piVar13 = (int *)0x0;
  }
LAB_710271d43c:
  ppppbVar21 = (byte ****)0x0;
  FUN_7102718840(piVar13,plVar12,(long *********)0x0,param_4,param_5,param_6,param_7,param_8);
  plVar60 = (long *)*plVar44;
  plVar55 = plVar44;
  plVar20 = plVar44;
  while (plVar60 != (long *)0x0) {
    while (plVar20 = plVar60, 0 < (int)plVar20[4]) {
      plVar60 = (long *)*plVar20;
      plVar55 = plVar20;
      if ((long *)*plVar20 == (long *)0x0) {
        plVar60 = (long *)*plVar20;
        goto joined_r0x00710271d4b0;
      }
    }
    if (-1 < (int)plVar20[4]) break;
    plVar55 = plVar20 + 1;
    plVar60 = (long *)*plVar55;
  }
  plVar60 = (long *)*plVar55;
joined_r0x00710271d4b0:
  if (plVar60 == (long *)0x0) {
    plVar60 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,param_4,param_5,param_6,param_7
                                     ,param_8);
    if (plVar60 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
        local_200 = (byte ***)&DAT_00000030;
        ppppbVar21 = &local_200;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar22 & 1) != 0) &&
           (plVar60 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,param_4,param_5,param_6
                                             ,param_7,param_8), plVar60 != (long *)0x0))
        goto LAB_710271d510;
      }
      plVar60 = (long *)0x0;
    }
LAB_710271d510:
    *(undefined4 *)(plVar60 + 4) = 0;
    plVar60[5] = 0;
    plVar60[2] = (long)plVar20;
    *plVar60 = 0;
    plVar60[1] = 0;
    *plVar55 = (long)plVar60;
    plVar20 = plVar60;
    if (*(long *)plVar11[1] != 0) {
      plVar11[1] = *(long *)plVar11[1];
      plVar20 = (long *)*plVar55;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar11[2],plVar20);
    plVar11[3] = plVar11[3] + 1;
  }
  uVar22 = plVar60[5];
  plVar60[5] = (long)piVar13;
  if (uVar22 != 0) {
    lVar43 = *(long *)(uVar22 + 0x30);
    if (lVar43 != 0) {
      lVar51 = *(long *)(uVar22 + 0x20);
      plVar55 = *(long **)(uVar22 + 0x28);
      *plVar55 = lVar51;
      *(long **)(lVar51 + 8) = plVar55;
      *(long *)(lVar43 + 0x10) = *(long *)(lVar43 + 0x10) + -1;
      *(undefined8 *)(uVar22 + 0x20) = 0;
      *(undefined8 *)(uVar22 + 0x28) = 0;
      *(undefined8 *)(uVar22 + 0x30) = 0;
    }
    FUN_710392eb40(uVar22);
  }
  piVar13 = (int *)FUN_710392e290(0x10,0xb0,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                  param_8);
  if (piVar13 == (int *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000000b0;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (piVar13 = (int *)FUN_710392e290(0x10,0xb0,(long ****)ppppbVar21,param_4,param_5,param_6,
                                          param_7,param_8), piVar13 != (int *)0x0))
      goto LAB_710271d5fc;
    }
    piVar13 = (int *)0x0;
  }
LAB_710271d5fc:
  ppppbVar21 = (byte ****)0x1;
  FUN_7102718840(piVar13,plVar12,(long *********)0x1,param_4,param_5,param_6,param_7,param_8);
  plVar55 = (long *)*plVar44;
  plVar12 = plVar44;
  if ((long *)*plVar44 == (long *)0x0) {
    plVar55 = (long *)*plVar44;
  }
  else {
    do {
      while (plVar44 = plVar55, 1 < (int)plVar44[4]) {
        plVar55 = (long *)*plVar44;
        plVar12 = plVar44;
        if ((long *)*plVar44 == (long *)0x0) {
          plVar55 = (long *)*plVar44;
          goto joined_r0x00710271d67c;
        }
      }
      if ((int)plVar44[4] == 1) break;
      plVar12 = plVar44 + 1;
      plVar55 = (long *)*plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
    plVar55 = (long *)*plVar12;
  }
joined_r0x00710271d67c:
  if (plVar55 == (long *)0x0) {
    plVar55 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,param_4,param_5,param_6,param_7
                                     ,param_8);
    if (plVar55 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
        local_200 = (byte ***)&DAT_00000030;
        ppppbVar21 = &local_200;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar22 & 1) != 0) &&
           (plVar55 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,param_4,param_5,param_6
                                             ,param_7,param_8), plVar55 != (long *)0x0))
        goto LAB_710271d6dc;
      }
      plVar55 = (long *)0x0;
    }
LAB_710271d6dc:
    *(undefined4 *)(plVar55 + 4) = 1;
    plVar55[5] = 0;
    *plVar55 = 0;
    plVar55[1] = 0;
    plVar55[2] = (long)plVar44;
    *plVar12 = (long)plVar55;
    plVar44 = plVar55;
    if (*(long *)plVar11[1] != 0) {
      plVar11[1] = *(long *)plVar11[1];
      plVar44 = (long *)*plVar12;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar11[2],plVar44);
    plVar11[3] = plVar11[3] + 1;
  }
  uVar22 = plVar55[5];
  plVar55[5] = (long)piVar13;
  if (uVar22 != 0) {
    lVar43 = *(long *)(uVar22 + 0x30);
    if (lVar43 != 0) {
      lVar51 = *(long *)(uVar22 + 0x20);
      plVar12 = *(long **)(uVar22 + 0x28);
      *plVar12 = lVar51;
      *(long **)(lVar51 + 8) = plVar12;
      *(long *)(lVar43 + 0x10) = *(long *)(lVar43 + 0x10) + -1;
      *(undefined8 *)(uVar22 + 0x20) = 0;
      *(undefined8 *)(uVar22 + 0x28) = 0;
      *(undefined8 *)(uVar22 + 0x30) = 0;
    }
    FUN_710392eb40(uVar22);
  }
  lVar43 = *(long *)*plVar11;
  local_200 = (byte ***)&DAT_00000004;
  plStack_1f8 = (long *)&DAT_100000001;
  local_1f0 = (byte ***)0x1000000001;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_00000048;
      ppppbVar21 = &local_a0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_710271d7e0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271d7e0:
  ppppbVar21 = &local_200;
  FUN_710313e6a0(puVar10,lVar43,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  plVar11[5] = (long)puVar10;
  lVar43 = *plVar11;
  plStack_1f8 = _DAT_7107521008;
  local_200 = _ConstantZero;
  plVar12 = (long *)(lVar43 + 0x10);
  local_1e0 = (byte ****)(ulong)*(uint *)(*plVar12 + 0x94);
  if (puVar10[7] != 0) {
    plVar12 = *(long **)(puVar10[7] + 0x130);
    ppppbVar21 = &local_200;
    param_4 = (byte ****)0x0;
    param_5 = (long ****)0x0;
    param_6 = (float *)0x0;
    local_1f0 = local_200;
    plStack_1e8 = plStack_1f8;
    (**(code **)(*plVar12 + 0x100))(plVar12,0);
    lVar43 = *plVar11;
    plVar12 = (long *)(lVar43 + 0x10);
  }
  local_1f0 = (byte ***)0x0;
  plStack_1e8 = (long *)0x0;
  local_200 = (byte ***)0x0;
  plStack_1f8 = (long *)0x0;
  puStack_1c8 = &DAT_3f8000003f800000;
  local_1c0 = 0x3f800000;
  local_1b8 = 0x31ed91fca;
  local_18f = 0;
  local_1ac = 0;
  local_1b0 = 0;
  local_18d = 0;
  local_18c = 0;
  local_180 = 0;
  local_190 = 0;
  local_198 = 0;
  local_178 = 0x31ed91fca;
  local_1a8 = 0x15a2c502b3;
  uStack_1a0 = 0;
  local_18a = 0xe;
  uStack_168 = uRam0000007107459008;
  local_170 = _ConstantZero;
  local_158 = &DAT_3f8000003f800000;
  local_148 = 0x425cbfc4f;
  local_140 = 0x7fb997a80;
  local_130 = 0xbf800000;
  local_160 = 0;
  local_15a = 0;
  local_15c = 0;
  local_150 = 0;
  local_138 = 0;
  local_134 = 0;
  local_11c = 0;
  local_124 = 0;
  local_12c = 0;
  local_114 = 0xffffffff;
  local_110 = 3;
  local_10c = 0x3f800000;
  local_108 = 0;
  local_106 = 0;
  iVar59 = *(int *)(lVar43 + 8);
  lVar51 = *(long *)(lVar43 + 0x10);
  if (iVar59 == 3) {
    puVar32 = (uint *)(lVar51 + 0xa0);
  }
  else {
    puVar32 = (uint *)(lVar51 + 0x98);
    if ((iVar59 != 1) && (iVar59 != 0)) {
      puVar32 = (uint *)(lVar51 + 0x9c);
    }
  }
  local_1e0 = (byte ****)(ulong)*puVar32;
  iVar59 = *(int *)(lVar43 + 8);
  lVar51 = *plVar12;
  if (iVar59 == 3) {
    puVar23 = (undefined4 *)(lVar51 + 0xb0);
  }
  else {
    puVar23 = (undefined4 *)(lVar51 + 0xa8);
    if ((iVar59 != 1) && (iVar59 != 0)) {
      puVar23 = (undefined4 *)(lVar51 + 0xac);
    }
  }
  local_1d8 = CONCAT44(*puVar23,*(undefined4 *)(*plVar12 + 0xa4));
  iVar59 = *(int *)(lVar43 + 8);
  lVar51 = *plVar12;
  if (iVar59 == 3) {
    puVar23 = (undefined4 *)(lVar51 + 0xbc);
  }
  else {
    puVar23 = (undefined4 *)(lVar51 + 0xb4);
    if ((iVar59 != 1) && (iVar59 != 0)) {
      puVar23 = (undefined4 *)(lVar51 + 0xb8);
    }
  }
  iVar59 = *(int *)(lVar43 + 8);
  lVar43 = *plVar12;
  if (iVar59 == 3) {
    puVar29 = (undefined4 *)(lVar43 + 200);
  }
  else {
    puVar29 = (undefined4 *)(lVar43 + 0xc0);
    if ((iVar59 != 1) && (iVar59 != 0)) {
      puVar29 = (undefined4 *)(lVar43 + 0xc4);
    }
  }
  local_1d0 = CONCAT44(*puVar29,*puVar23);
  local_188 = (ulong)(uint)(int)*(float *)(*plVar12 + 0x88);
  plVar12 = (long *)*plVar14;
  if (plVar12[7] != 0) {
    plVar12 = *(long **)(plVar12[7] + 0xa0);
    param_4 = &local_200;
    ppppbVar21 = (byte ****)0x0;
    (**(code **)(*plVar12 + 0x68))(plVar12,0);
    plVar12 = (long *)*plVar14;
  }
  if ((char)plVar12[8] != '\0') {
    plVar44 = (long *)plVar12[6];
    if (((plVar44 != (long *)0x0) && ((char)plVar44[2] != '\0')) &&
       (*(undefined1 *)(plVar44 + 2) = 0, (char)plVar44[10] != '\0')) {
      plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar44 + 8));
      (**(code **)(*plVar14 + 0x48))(plVar14,0);
      *(undefined1 *)(plVar44 + 10) = 0;
    }
    (**(code **)(*plVar12 + 0x30))(plVar12);
  }
  *(undefined1 *)(plVar12 + 8) = 0;
  lVar43 = *plVar11;
  if (*(int *)(lVar43 + 8) != 0) {
    lVar51 = *(long *)(lVar43 + 0x10);
    pfVar45 = *(float **)(lVar51 + 0xd0);
    pfVar2 = *(float **)(lVar51 + 0xd8);
    if (pfVar45 != pfVar2) {
      pppplVar56 = (long ****)((ulong)&local_200 | 4);
LAB_710271dadc:
      bVar3 = *(byte *)(pfVar45 + 6);
      local_a0 = (byte ***)CONCAT44(local_a0._4_4_,(uint)bVar3);
      fVar62 = *pfVar45;
      local_d0 = (byte ***)CONCAT44(local_d0._4_4_,fVar62);
      fVar61 = *(float *)(lVar51 + 0x84);
      lVar51 = **(long **)(lVar43 + 0x20);
      pfVar1 = *(float **)(lVar51 + 0x28);
      pfVar38 = *(float **)(lVar51 + 0x30);
      pfVar36 = pfVar38;
      do {
        pfVar36 = pfVar36 + -2;
        if (pfVar1 == pfVar38) goto LAB_710271db58;
        pfVar38 = pfVar38 + -2;
      } while (fVar62 < *pfVar38);
      fVar64 = fVar62;
      fVar65 = *pfVar38;
      while( true ) {
        fVar68 = pfVar36[1] * *(float *)(*(long **)(lVar43 + 0x20) + 3);
        fVar66 = (fVar64 - fVar65) / fVar68;
        if (fVar61 < fVar66) break;
        if (pfVar1 == pfVar36) goto LAB_710271db58;
        fVar61 = fVar61 - fVar66;
        pfVar36 = pfVar36 + -2;
        fVar64 = fVar65;
        fVar65 = *pfVar36;
      }
      fVar64 = fVar64 - fVar61 * fVar68;
      local_200 = (byte ***)((ulong)(uint)fVar64 << 0x20 | 1);
      if (((pfVar45[1] == 0.0) && (pfVar45[2] == 0.0)) &&
         ((pfVar45[3] == 0.0 && (pfVar45[4] == 0.0)))) {
        local_100 = (undefined **)((ulong)local_100._4_4_ << 0x20);
        puVar23 = (undefined4 *)plVar11[7];
        param_6 = pfVar45 + 5;
        if (puVar23 < (undefined4 *)plVar11[8]) {
          fVar61 = *param_6;
          *puVar23 = 0;
          puVar23[1] = (uint)bVar3;
          puVar23[2] = fVar62;
          puVar23[3] = fVar64;
          puVar23[4] = fVar61;
          *(undefined8 *)(puVar23 + 0xc) = 0;
          *(undefined8 *)(puVar23 + 0xe) = 0;
          *(undefined8 *)(puVar23 + 8) = 0;
          *(undefined8 *)(puVar23 + 10) = 0;
          plVar11[7] = plVar11[7] + 0x40;
        }
        else {
          ppppbVar21 = &local_a0;
          param_4 = &local_d0;
          param_5 = pppplVar56;
          FUN_710272bfc0(plVar17,(undefined4 *)&local_100,(long ****)ppppbVar21,param_4,pppplVar56,
                         param_6,param_7,param_8);
        }
      }
      else {
        local_100 = (undefined **)CONCAT44(local_100._4_4_,1);
        puVar23 = (undefined4 *)plVar11[7];
        param_6 = pfVar45 + 5;
        if (puVar23 < (undefined4 *)plVar11[8]) {
          fVar61 = *param_6;
          *puVar23 = 1;
          puVar23[1] = (uint)bVar3;
          puVar23[2] = fVar62;
          puVar23[3] = fVar64;
          puVar23[4] = fVar61;
          *(undefined8 *)(puVar23 + 0xc) = 0;
          *(undefined8 *)(puVar23 + 0xe) = 0;
          *(undefined8 *)(puVar23 + 8) = 0;
          *(undefined8 *)(puVar23 + 10) = 0;
          lVar43 = plVar11[7] + 0x40;
          plVar11[7] = lVar43;
        }
        else {
          ppppbVar21 = &local_a0;
          param_4 = &local_d0;
          param_5 = pppplVar56;
          FUN_710272bfc0(plVar17,(undefined4 *)&local_100,(long ****)ppppbVar21,param_4,pppplVar56,
                         param_6,param_7,param_8);
          lVar43 = plVar11[7];
        }
        uVar48 = *(undefined8 *)(pfVar45 + 1);
        *(undefined8 *)(lVar43 + -0x18) = 0;
        *(undefined8 *)(lVar43 + -0x20) = uVar48;
        uVar48 = *(undefined8 *)(pfVar45 + 3);
        lVar43 = plVar11[7];
        *(undefined8 *)(lVar43 + -8) = 0;
        *(undefined8 *)(lVar43 + -0x10) = uVar48;
      }
      goto LAB_710271dc7c;
    }
  }
LAB_710271dca8:
  uVar22 = param_1[5];
  param_1[5] = (long)plVar11;
  if (uVar22 != 0) {
    if (*(char *)(uVar22 + 0x50) != '\0') {
      *(undefined1 *)(uVar22 + 0x50) = 0;
    }
    uVar15 = *(ulong *)(uVar22 + 0x30);
    if (uVar15 != 0) {
      *(ulong *)(uVar22 + 0x38) = uVar15;
      FUN_710392eb40(uVar15);
    }
    uVar15 = *(ulong *)(uVar22 + 0x20);
    *(undefined8 *)(uVar22 + 0x20) = 0;
    *(undefined8 *)(uVar22 + 0x28) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710272c160(*(undefined8 **)(uVar22 + 0x10));
    FUN_710392eb40(uVar22);
  }
  plVar11 = (long *)param_1[4];
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0xb0,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000000b0;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0xb0,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_710271dd50;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271dd50:
  *(undefined4 *)(puVar10 + 2) = 0;
  *(undefined1 *)(puVar10 + 9) = 0;
  puVar10[6] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0;
  *(undefined8 *)((long)puVar10 + 6) = 0;
  *puVar10 = 0;
  puVar10[0x11] = 0;
  puVar10[7] = 0;
  puVar10[8] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar52 = puVar10 + 0x10;
  *puVar52 = 0;
  puVar10[0x13] = 0;
  puVar10[0xe] = plVar11;
  puVar10[0xf] = puVar52;
  puVar47 = puVar10 + 0x12;
  *puVar47 = 0;
  puVar10[0x14] = 0;
  puVar10[0x15] = 0;
  uVar28 = *(uint *)(plVar11[2] + 0x120);
  ppppbVar25 = (byte ****)(ulong)uVar28;
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000030;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_710271de08;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_710271de08:
  *puVar16 = plVar11;
  *(undefined1 *)(puVar16 + 1) = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  lVar43 = *plVar11;
  local_200 = (byte ***)&DAT_00000004;
  plStack_1f8 = (long *)&DAT_100000001;
  local_1f0 = (byte ***)0x1000000001;
  plVar12 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_00000048;
      ppppbVar21 = &local_a0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar22 & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,
                                           param_7,param_8), plVar12 != (long *)0x0))
      goto LAB_710271de84;
    }
    plVar12 = (long *)0x0;
  }
LAB_710271de84:
  ppppbVar21 = &local_200;
  FUN_710313e6a0(plVar12,lVar43,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  puVar16[4] = plVar12;
  plStack_1f8 = _DAT_7107521008;
  local_200 = _ConstantZero;
  local_1e0 = (byte ****)(ulong)*(uint *)(plVar11[2] + 0x114);
  local_1f0 = local_200;
  plStack_1e8 = plStack_1f8;
  if (plVar12[7] != 0) {
    plVar44 = *(long **)(plVar12[7] + 0x130);
    ppppbVar21 = &local_200;
    param_4 = (byte ****)0x0;
    param_5 = (long ****)0x0;
    param_6 = (float *)0x0;
    (**(code **)(*plVar44 + 0x100))(plVar44,0);
  }
  if ((char)plVar12[8] != '\0') {
    plVar44 = (long *)plVar12[6];
    if (((plVar44 != (long *)0x0) && ((char)plVar44[2] != '\0')) &&
       (*(undefined1 *)(plVar44 + 2) = 0, (char)plVar44[10] != '\0')) {
      plVar17 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar44 + 8));
      (**(code **)(*plVar17 + 0x48))(plVar17,0);
      *(undefined1 *)(plVar44 + 10) = 0;
    }
    (**(code **)(*plVar12 + 0x30))(plVar12);
  }
  *(undefined1 *)(plVar12 + 8) = 0;
  uVar22 = *puVar47;
  *puVar47 = (ulong)puVar16;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  plVar44 = (long *)puVar10[0xe];
  plVar12 = (long *)FUN_710392e290(0x10,0x40,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar12 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000040;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar12 = (long *)FUN_710392e290(0x10,0x40,(long ****)ppppbVar21,param_4,param_5,param_6,
                                           param_7,param_8), plVar12 != (long *)0x0))
      goto LAB_710271dfb0;
    }
    plVar12 = (long *)0x0;
  }
LAB_710271dfb0:
  *plVar12 = (long)plVar44;
  *(undefined1 *)(plVar12 + 1) = 0;
  *(undefined4 *)((long)plVar12 + 0xc) = 0;
  plVar12[2] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  lVar43 = *plVar44;
  local_200 = (byte ***)0x241;
  plStack_1f8 = (long *)&DAT_100000001;
  local_1f0 = (byte ***)0x1000000001;
  plVar17 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar17 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_00000048;
      ppppbVar21 = &local_a0;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar22 & 1) != 0) &&
         (plVar17 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,
                                           param_7,param_8), plVar17 != (long *)0x0))
      goto LAB_710271e034;
    }
    plVar17 = (long *)0x0;
  }
LAB_710271e034:
  ppppbVar21 = &local_200;
  FUN_710313e6a0(plVar17,lVar43,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  plVar12[6] = (long)plVar17;
  plStack_1f8 = _DAT_7107521008;
  local_200 = _ConstantZero;
  local_1e0 = (byte ****)(ulong)*(uint *)(plVar44[2] + 0x100);
  local_1f0 = local_200;
  plStack_1e8 = plStack_1f8;
  if (plVar17[7] == 0) {
LAB_710271e1ac:
    cVar4 = (char)plVar17[8];
  }
  else {
    plVar14 = *(long **)(plVar17[7] + 0x130);
    ppppbVar21 = &local_200;
    param_4 = (byte ****)0x0;
    param_5 = (long ****)0x0;
    param_6 = (float *)0x0;
    (**(code **)(*plVar14 + 0x58))(plVar14,0);
    if (plVar17[7] == 0) goto LAB_710271e1ac;
    lVar43 = (**(code **)(**(long **)(plVar17[7] + 0x130) + 0x1a0))();
    lVar51 = *(long *)(lVar43 + 8);
    *(uint *)(lVar43 + 0x48) = *(uint *)(lVar43 + 0x48) & 0xffffe07f | 0x100;
    if (0 < *(int *)(lVar51 + 0x10)) {
      lVar37 = *(long *)(lVar43 + 0x40);
      lVar54 = 0;
      lVar33 = 0x30;
      do {
        if (0 < *(int *)(lVar37 + lVar54 * 0x20)) {
          lVar39 = 0;
          do {
            lVar41 = *(long *)(*(long *)(lVar51 + 0x18) + lVar33 + lVar39 * 8);
            if (lVar41 != 0) {
              *(undefined8 *)(lVar41 + 8) = *(undefined8 *)(lVar43 + 0x48);
              lVar37 = *(long *)(lVar43 + 0x40);
              lVar51 = *(long *)(lVar43 + 8);
            }
            lVar39 = lVar39 + 1;
          } while (lVar39 < *(int *)(lVar37 + lVar54 * 0x20));
        }
        lVar54 = lVar54 + 1;
        lVar33 = lVar33 + 0x2d0;
      } while (lVar54 < *(int *)(lVar51 + 0x10));
    }
    if (plVar17[7] == 0) goto LAB_710271e1ac;
    (**(code **)(**(long **)(plVar17[7] + 0x130) + 0x98))(*(undefined4 *)(plVar44[2] + 0x110));
    cVar4 = (char)plVar17[8];
  }
  if (cVar4 != '\0') {
    plVar44 = (long *)plVar17[6];
    if (((plVar44 != (long *)0x0) && ((char)plVar44[2] != '\0')) &&
       (*(undefined1 *)(plVar44 + 2) = 0, (char)plVar44[10] != '\0')) {
      plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar44 + 8));
      (**(code **)(*plVar14 + 0x48))(plVar14,0);
      *(undefined1 *)(plVar44 + 10) = 0;
    }
    (**(code **)(*plVar17 + 0x30))(plVar17);
  }
  *(undefined1 *)(plVar17 + 8) = 0;
  uVar22 = puVar10[0x13];
  puVar10[0x13] = plVar12;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  plVar12 = (long *)puVar10[0xe];
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x70,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000070;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x70,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_710271e230;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_710271e230:
  *(undefined4 *)(puVar16 + 3) = 0;
  puVar16[4] = 0;
  puVar16[10] = 0;
  *(undefined8 *)((long)puVar16 + 0xe) = 0;
  *puVar16 = plVar12;
  puVar16[1] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  puVar16[8] = 0;
  puVar16[9] = 0;
  puVar16[6] = 0;
  puVar16[7] = 0;
  if (uVar28 != 0) {
    pppbVar57 = (byte ***)((long)ppppbVar25 << 3);
    lVar43 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                            param_8);
    if (lVar43 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
        ppppbVar21 = &local_200;
        local_200 = pppbVar57;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar22 & 1) != 0) &&
           (lVar43 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,param_4,param_5,param_6,
                                    param_7,param_8), lVar43 != 0)) goto LAB_710271e2b8;
      }
      lVar43 = 0;
    }
LAB_710271e2b8:
    puVar16[10] = lVar43;
    puVar16[0xb] = lVar43;
    ppppbVar46 = (byte ****)0x0;
    puVar16[0xc] = lVar43 + (long)ppppbVar25 * 8;
    do {
      puVar18 = (undefined8 *)
                FUN_710392e290(0x10,0x40,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                               param_8);
      if (puVar18 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
          local_200 = (byte ***)&DAT_00000040;
          ppppbVar21 = &local_200;
          uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar22 & 1) != 0) &&
             (puVar18 = (undefined8 *)
                        FUN_710392e290(0x10,0x40,(long ****)ppppbVar21,param_4,param_5,param_6,
                                       param_7,param_8), puVar18 != (undefined8 *)0x0))
          goto LAB_710271e338;
        }
        puVar18 = (undefined8 *)0x0;
      }
LAB_710271e338:
      *puVar18 = ppppbVar46;
      puVar18[1] = plVar12;
      *(undefined1 *)(puVar18 + 4) = 0;
      *(undefined8 *)((long)puVar18 + 0x16) = 0;
      puVar18[2] = 0;
      *(undefined4 *)((long)puVar18 + 0x2c) = 0;
      *(undefined8 *)((long)puVar18 + 0x24) = 0;
      *(undefined4 *)(puVar18 + 7) = 0xffffffff;
      *(undefined1 *)((long)puVar18 + 0x3c) = 0;
      lVar43 = *plVar12;
      local_200 = (byte ***)&DAT_00000004;
      plStack_1f8 = (long *)&DAT_100000001;
      local_1f0 = (byte ***)0x1000000001;
      plVar44 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,param_6,
                                       param_7,param_8);
      if (plVar44 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
          local_a0 = (byte ***)&DAT_00000048;
          ppppbVar21 = &local_a0;
          uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar22 & 1) != 0) &&
             (plVar44 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,param_4,param_5,
                                               param_6,param_7,param_8), plVar44 != (long *)0x0))
          goto LAB_710271e3c4;
        }
        plVar44 = (long *)0x0;
      }
LAB_710271e3c4:
      ppppbVar21 = &local_200;
      FUN_710313e6a0(plVar44,lVar43,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
      puVar18[6] = plVar44;
      plStack_1f8 = _DAT_7107521008;
      local_200 = _ConstantZero;
      local_1e0 = (byte ****)(ulong)*(uint *)(plVar12[2] + 0x13c);
      local_1f0 = local_200;
      plStack_1e8 = plStack_1f8;
      if (plVar44[7] != 0) {
        plVar17 = *(long **)(plVar44[7] + 0x130);
        ppppbVar21 = &local_200;
        param_4 = (byte ****)0x0;
        param_5 = (long ****)0x0;
        param_6 = (float *)0x0;
        (**(code **)(*plVar17 + 0x100))(plVar17,0);
      }
      if ((char)plVar44[8] != '\0') {
        plVar17 = (long *)plVar44[6];
        if (((plVar17 != (long *)0x0) && ((char)plVar17[2] != '\0')) &&
           (*(undefined1 *)(plVar17 + 2) = 0, (char)plVar17[10] != '\0')) {
          plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar17 + 8));
          (**(code **)(*plVar14 + 0x48))(plVar14,0);
          *(undefined1 *)(plVar17 + 10) = 0;
        }
        (**(code **)(*plVar44 + 0x30))(plVar44);
      }
      *(undefined1 *)(plVar44 + 8) = 0;
      local_200 = (byte ***)0x0;
      lVar43 = *(long *)(**(long **)(*plVar12 + 0x338) + 8);
      if (lVar43 == 0) {
        uVar9 = 0xffffffff;
      }
      else {
        ppppbVar21 = (byte ****)0x0;
        uVar9 = FUN_7102405040(lVar43,&local_200,0,param_4,param_5,param_6,param_7,param_8);
      }
      *(undefined4 *)(puVar18 + 7) = uVar9;
      puVar47 = (ulong *)puVar16[0xb];
      if (puVar47 < (ulong *)puVar16[0xc]) {
        *puVar47 = (ulong)puVar18;
        puVar16[0xb] = puVar16[0xb] + 8;
      }
      else {
        puVar53 = (ulong *)puVar16[10];
        lVar43 = (long)puVar47 - (long)puVar53 >> 3;
        uVar22 = lVar43 + 1;
        if (uVar22 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar51 = (long)puVar16[0xc] - (long)puVar53;
        if ((ulong)(lVar51 >> 3) < 0xfffffffffffffff) {
          uVar15 = lVar51 >> 2;
          if (uVar22 <= uVar15) {
            uVar22 = uVar15;
          }
          if (uVar22 != 0) {
            if (uVar22 >> 0x3d == 0) goto LAB_710271e518;
            goto LAB_710271fe8c;
          }
          lVar51 = 0;
        }
        else {
          uVar22 = 0x1fffffffffffffff;
LAB_710271e518:
          pppbVar57 = (byte ***)(uVar22 * 8);
          if (pppbVar57 == (byte ***)0x0) {
            pppbVar57 = (byte ***)0x1;
          }
          lVar51 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,param_4,param_5,param_6,
                                  param_7,param_8);
          if (lVar51 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
              ppppbVar21 = &local_200;
              local_200 = pppbVar57;
              uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
              if (((uVar15 & 1) != 0) &&
                 (lVar51 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,param_4,param_5,
                                          param_6,param_7,param_8), lVar51 != 0))
              goto LAB_710271e574;
            }
            lVar51 = 0;
          }
LAB_710271e574:
          puVar53 = (ulong *)puVar16[10];
          puVar47 = (ulong *)puVar16[0xb];
        }
        puVar34 = (ulong *)(lVar51 + lVar43 * 8);
        puVar30 = puVar34 + 1;
        *puVar34 = (ulong)puVar18;
        if (puVar47 != puVar53) {
          uVar19 = (long)(puVar47 + -1) - (long)puVar53;
          uVar31 = uVar19 >> 3;
          uVar28 = (int)uVar31 + 1;
          uVar15 = (ulong)uVar28 & 3;
          if ((uVar28 & 3) != 0) {
            lVar54 = -uVar15;
            puVar40 = puVar47 + -1;
            do {
              puVar34 = puVar34 + -1;
              uVar42 = *puVar40;
              lVar54 = lVar54 + 1;
              *puVar40 = 0;
              *puVar34 = uVar42;
              puVar40 = puVar40 + -1;
            } while (lVar54 != 0);
            puVar34 = (ulong *)(lVar51 + (lVar43 - uVar15) * 8);
            puVar47 = puVar47 + -uVar15;
          }
          if (0x17 < uVar19) {
            uVar15 = (long)puVar47 + (-0x20 - (long)puVar53);
            if (((uint)uVar15 >> 5 & 1) == 0) {
              uVar19 = puVar47[-1];
              puVar47[-1] = 0;
              puVar34[-1] = uVar19;
              uVar19 = puVar47[-2];
              puVar47[-2] = 0;
              puVar34[-2] = uVar19;
              uVar19 = puVar47[-3];
              puVar47[-3] = 0;
              puVar34[-3] = uVar19;
              puVar47 = puVar47 + -4;
              uVar19 = *puVar47;
              *puVar47 = 0;
              puVar34[-4] = uVar19;
              puVar34 = puVar34 + -4;
            }
            if (0x1f < uVar15) {
              puVar34 = puVar34 + -4;
              do {
                uVar15 = puVar47[-1];
                puVar47[-1] = 0;
                puVar34[3] = uVar15;
                uVar15 = puVar47[-2];
                puVar47[-2] = 0;
                puVar34[2] = uVar15;
                uVar15 = puVar47[-3];
                puVar47[-3] = 0;
                puVar34[1] = uVar15;
                uVar15 = puVar47[-4];
                puVar47[-4] = 0;
                *puVar34 = uVar15;
                uVar15 = puVar47[-5];
                puVar47[-5] = 0;
                puVar34[-1] = uVar15;
                uVar15 = puVar47[-6];
                puVar47[-6] = 0;
                puVar34[-2] = uVar15;
                uVar15 = puVar47[-7];
                puVar47[-7] = 0;
                puVar34[-3] = uVar15;
                puVar47 = puVar47 + -8;
                uVar15 = *puVar47;
                *puVar47 = 0;
                puVar34[-4] = uVar15;
                puVar34 = puVar34 + -8;
              } while (puVar53 != puVar47);
            }
          }
          puVar53 = (ulong *)puVar16[10];
          puVar47 = (ulong *)puVar16[0xb];
          puVar34 = (ulong *)(lVar51 + (lVar43 + ~uVar31) * 8);
        }
        puVar16[10] = puVar34;
        puVar16[0xb] = puVar30;
        puVar16[0xc] = lVar51 + uVar22 * 8;
        while (puVar47 != puVar53) {
          puVar47 = puVar47 + -1;
          uVar22 = *puVar47;
          *puVar47 = 0;
          if (uVar22 != 0) {
            FUN_710392eb40(uVar22);
          }
        }
        if (puVar53 != (ulong *)0x0) {
          FUN_710392eb40((ulong)puVar53);
        }
      }
      ppppbVar46 = (byte ****)((long)ppppbVar46 + 1);
    } while (ppppbVar46 != ppppbVar25);
  }
  uVar22 = puVar10[0x14];
  puVar10[0x14] = puVar16;
  if (uVar22 != 0) {
    puVar47 = *(ulong **)(uVar22 + 0x50);
    if (puVar47 != (ulong *)0x0) {
      puVar53 = *(ulong **)(uVar22 + 0x58);
      if (puVar53 == puVar47) {
        *(ulong **)(uVar22 + 0x58) = puVar47;
        puVar53 = puVar47;
      }
      else {
        do {
          puVar53 = puVar53 + -1;
          uVar15 = *puVar53;
          *puVar53 = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
        } while (puVar47 != puVar53);
        puVar53 = *(ulong **)(uVar22 + 0x50);
        *(ulong **)(uVar22 + 0x58) = puVar47;
      }
      if (puVar53 != (ulong *)0x0) {
        FUN_710392eb40((ulong)puVar53);
      }
    }
    FUN_710392eb40(uVar22);
  }
  uVar48 = puVar10[0xe];
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x10,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000010;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_710271e7bc;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_710271e7bc:
  *puVar16 = uVar48;
  *(undefined4 *)((long)puVar16 + 0xc) = 0;
  *(undefined1 *)(puVar16 + 1) = 0xff;
  uVar22 = puVar10[0x15];
  puVar10[0x15] = puVar16;
  lVar43 = DAT_71052c3610;
  if (uVar22 != 0) {
    if (((ulong)*(byte *)(uVar22 + 8) != 0xff) && (DAT_71052c3610 != 0)) {
      lVar51 = DAT_71052c3610 + (ulong)*(byte *)(uVar22 + 8) * 2;
      pcVar35 = (char *)(lVar51 + 0x20);
      if (*pcVar35 != '\0') {
        *pcVar35 = '\0';
        *(undefined1 *)(lVar51 + 0x21) = 1;
        *(undefined1 *)(lVar43 + 0x40) = 1;
      }
    }
    FUN_710392eb40(uVar22);
  }
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x90,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000090;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x90,(long ****)ppppbVar21,param_4,param_5,param_6,param_7,
                                   param_8), puVar16 != (undefined8 *)0x0)) goto LAB_710271e870;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_710271e870:
  ppppbVar21 = (byte ****)0x0;
  ppppbVar46 = ppppbVar25;
  FUN_7102719d20(puVar16,plVar11,(long *********)0x0,ppppbVar25,param_5,param_6,param_7,param_8);
  puVar49 = (undefined8 *)*puVar52;
  puVar18 = puVar52;
  puVar50 = puVar52;
  while (puVar49 != (undefined8 *)0x0) {
    while (puVar50 = puVar49, 0 < *(int *)(puVar50 + 4)) {
      puVar49 = (undefined8 *)*puVar50;
      puVar18 = puVar50;
      if ((undefined8 *)*puVar50 == (undefined8 *)0x0) {
        plVar12 = (long *)*puVar50;
        goto joined_r0x00710271e8e8;
      }
    }
    if (-1 < *(int *)(puVar50 + 4)) break;
    puVar18 = puVar50 + 1;
    puVar49 = (undefined8 *)*puVar18;
  }
  plVar12 = (long *)*puVar18;
joined_r0x00710271e8e8:
  if (plVar12 == (long *)0x0) {
    plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,ppppbVar46,param_5,param_6,
                                     param_7,param_8);
    if (plVar12 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
        local_200 = (byte ***)&DAT_00000030;
        ppppbVar21 = &local_200;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar22 & 1) != 0) &&
           (plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,ppppbVar46,param_5,
                                             param_6,param_7,param_8), plVar12 != (long *)0x0))
        goto LAB_710271e948;
      }
      plVar12 = (long *)0x0;
    }
LAB_710271e948:
    *(undefined4 *)(plVar12 + 4) = 0;
    plVar12[5] = 0;
    plVar12[2] = (long)puVar50;
    *plVar12 = 0;
    plVar12[1] = 0;
    *puVar18 = plVar12;
    plVar44 = plVar12;
    if (*(long *)puVar10[0xf] != 0) {
      puVar10[0xf] = *(long *)puVar10[0xf];
      plVar44 = (long *)*puVar18;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar10[0x10],plVar44);
    puVar10[0x11] = puVar10[0x11] + 1;
  }
  uVar22 = plVar12[5];
  plVar12[5] = (long)puVar16;
  if (uVar22 != 0) {
    uVar15 = *(ulong *)(uVar22 + 0x60);
    if (uVar15 != 0) {
      *(ulong *)(uVar22 + 0x68) = uVar15;
      FUN_710392eb40(uVar15);
    }
    lVar43 = *(long *)(uVar22 + 0x48);
    if (lVar43 != 0) {
      lVar51 = *(long *)(uVar22 + 0x38);
      plVar12 = *(long **)(uVar22 + 0x40);
      *plVar12 = lVar51;
      *(long **)(lVar51 + 8) = plVar12;
      *(long *)(lVar43 + 0x10) = *(long *)(lVar43 + 0x10) + -1;
      *(undefined8 *)(uVar22 + 0x38) = 0;
      *(undefined8 *)(uVar22 + 0x40) = 0;
      *(undefined8 *)(uVar22 + 0x48) = 0;
    }
    FUN_710392eb40(uVar22);
  }
  puVar16 = (undefined8 *)
            FUN_710392e290(0x10,0x90,(long ****)ppppbVar21,ppppbVar46,param_5,param_6,param_7,
                           param_8);
  if (puVar16 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000090;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar16 = (undefined8 *)
                    FUN_710392e290(0x10,0x90,(long ****)ppppbVar21,ppppbVar46,param_5,param_6,
                                   param_7,param_8), puVar16 != (undefined8 *)0x0))
      goto LAB_710271ea4c;
    }
    puVar16 = (undefined8 *)0x0;
  }
LAB_710271ea4c:
  ppppbVar21 = (byte ****)0x1;
  FUN_7102719d20(puVar16,plVar11,(long *********)0x1,ppppbVar25,param_5,param_6,param_7,param_8);
  puVar50 = (undefined8 *)*puVar52;
  puVar18 = puVar52;
  if ((undefined8 *)*puVar52 == (undefined8 *)0x0) {
    plVar11 = (long *)*puVar52;
  }
  else {
    do {
      while (puVar52 = puVar50, 1 < *(int *)(puVar52 + 4)) {
        puVar50 = (undefined8 *)*puVar52;
        puVar18 = puVar52;
        if ((undefined8 *)*puVar52 == (undefined8 *)0x0) {
          plVar11 = (long *)*puVar52;
          goto joined_r0x00710271ead0;
        }
      }
      if (*(int *)(puVar52 + 4) == 1) break;
      puVar18 = puVar52 + 1;
      puVar50 = (undefined8 *)*puVar18;
    } while ((undefined8 *)*puVar18 != (undefined8 *)0x0);
    plVar11 = (long *)*puVar18;
  }
joined_r0x00710271ead0:
  if (plVar11 == (long *)0x0) {
    plVar11 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                     param_7,param_8);
    if (plVar11 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
        local_200 = (byte ***)&DAT_00000030;
        ppppbVar21 = &local_200;
        uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar22 & 1) != 0) &&
           (plVar11 = (long *)FUN_710392e290(0x10,0x30,(long ****)ppppbVar21,ppppbVar25,param_5,
                                             param_6,param_7,param_8), plVar11 != (long *)0x0))
        goto LAB_710271eb30;
      }
      plVar11 = (long *)0x0;
    }
LAB_710271eb30:
    *(undefined4 *)(plVar11 + 4) = 1;
    plVar11[5] = 0;
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = (long)puVar52;
    *puVar18 = plVar11;
    plVar12 = plVar11;
    if (*(long *)puVar10[0xf] != 0) {
      puVar10[0xf] = *(long *)puVar10[0xf];
      plVar12 = (long *)*puVar18;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)puVar10[0x10],plVar12);
    puVar10[0x11] = puVar10[0x11] + 1;
  }
  uVar22 = plVar11[5];
  plVar11[5] = (long)puVar16;
  if (uVar22 != 0) {
    uVar15 = *(ulong *)(uVar22 + 0x60);
    if (uVar15 != 0) {
      *(ulong *)(uVar22 + 0x68) = uVar15;
      FUN_710392eb40(uVar15);
    }
    lVar43 = *(long *)(uVar22 + 0x48);
    if (lVar43 != 0) {
      lVar51 = *(long *)(uVar22 + 0x38);
      plVar11 = *(long **)(uVar22 + 0x40);
      *plVar11 = lVar51;
      *(long **)(lVar51 + 8) = plVar11;
      *(long *)(lVar43 + 0x10) = *(long *)(lVar43 + 0x10) + -1;
      *(undefined8 *)(uVar22 + 0x38) = 0;
      *(undefined8 *)(uVar22 + 0x40) = 0;
      *(undefined8 *)(uVar22 + 0x48) = 0;
    }
    FUN_710392eb40(uVar22);
  }
  puVar23 = *(undefined4 **)(*(long *)(puVar10[0xe] + 0x10) + 0x188);
  puVar29 = *(undefined4 **)(*(long *)(puVar10[0xe] + 0x10) + 400);
  if (puVar23 != puVar29) {
    do {
      bVar3 = *(byte *)(puVar23 + 1);
      bVar5 = *(byte *)((long)puVar23 + 5);
      puVar26 = (undefined4 *)puVar10[7];
      if (puVar26 < (undefined4 *)puVar10[8]) {
        *puVar26 = *puVar23;
        puVar26[1] = (uint)bVar5;
        puVar26[2] = bVar3 ^ 1;
        puVar10[7] = puVar10[7] + 0xc;
      }
      else {
        pvVar58 = (void *)puVar10[6];
        ppppbVar46 = (byte ****)((long)puVar26 - (long)pvVar58);
        uVar22 = ((long)ppppbVar46 >> 2) * -0x5555555555555555 + 1;
        if (0x1555555555555555 < uVar22) goto LAB_710271fe7c;
        lVar43 = (long)puVar10[8] - (long)pvVar58 >> 2;
        uVar15 = 0x1555555555555555;
        if ((ulong)(lVar43 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
          uVar19 = lVar43 * 0x5555555555555556;
          uVar15 = uVar22;
          if (uVar22 <= uVar19) {
            uVar15 = uVar19;
          }
          if (uVar15 != 0) goto LAB_710271ec74;
LAB_710271ecd0:
          lVar43 = 0;
        }
        else {
LAB_710271ec74:
          pppbVar57 = (byte ***)(uVar15 * 0xc);
          if (pppbVar57 == (byte ***)0x0) {
            pppbVar57 = (byte ***)0x1;
          }
          lVar43 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                  param_7,param_8);
          if (lVar43 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
              ppppbVar21 = &local_200;
              local_200 = pppbVar57;
              uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
              if (((uVar22 & 1) != 0) &&
                 (lVar43 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,
                                          param_6,param_7,param_8), lVar43 != 0))
              goto LAB_710271ecd4;
            }
            goto LAB_710271ecd0;
          }
        }
LAB_710271ecd4:
        puVar26 = (undefined4 *)(lVar43 + ((long)ppppbVar46 >> 2) * 4);
        *puVar26 = *puVar23;
        puVar26[1] = (uint)bVar5;
        lVar51 = SUB168(SEXT816((long)ppppbVar46) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
        puVar26[2] = bVar3 ^ 1;
        if (0 < (long)ppppbVar46) {
          memcpy(puVar26 + ((lVar51 >> 1) - (lVar51 >> 0x3f)) * 3,pvVar58,(size_t)ppppbVar46);
          ppppbVar21 = ppppbVar46;
        }
        puVar10[6] = puVar26 + ((lVar51 >> 1) - (lVar51 >> 0x3f)) * 3;
        puVar10[7] = puVar26 + 3;
        puVar10[8] = lVar43 + uVar15 * 0xc;
        if (pvVar58 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar58);
        }
      }
      puVar23 = puVar23 + 2;
    } while (puVar29 != puVar23);
  }
  uVar22 = param_1[6];
  param_1[6] = (long)puVar10;
  if (uVar22 != 0) {
    FUN_710272c1e0(uVar22);
    FUN_710392eb40(uVar22);
  }
  lVar43 = param_1[4];
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x3c0,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000003c0;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x3c0,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_710271edd0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271edd0:
  FUN_7102723c70(puVar10,lVar43,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,param_8);
  uVar22 = param_1[7];
  param_1[7] = (long)puVar10;
  if (uVar22 != 0) {
    FUN_71027247d0(uVar22,extraout_x1,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,
                   param_8);
    FUN_710392eb40(uVar22);
  }
  plVar12 = (long *)param_1[4];
  plVar11 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                   param_7,param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000048;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x48,(long ****)ppppbVar21,ppppbVar25,param_5,
                                           param_6,param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_710271ee58;
    }
    plVar11 = (long *)0x0;
  }
LAB_710271ee58:
  FUN_7102726560(plVar11,plVar12,ppppbVar21,ppppbVar25,param_5,param_6,param_7,param_8);
  uVar22 = param_1[8];
  param_1[8] = (long)plVar11;
  if (uVar22 != 0) {
    uVar15 = *(ulong *)(uVar22 + 0x20);
    if (uVar15 != 0) {
      *(ulong *)(uVar22 + 0x28) = uVar15;
      FUN_710392eb40(uVar15);
    }
    plVar11 = *(long **)(uVar22 + 8);
    if (plVar11 != (long *)0x0) {
      plVar12 = *(long **)(uVar22 + 0x10);
      if (plVar12 == plVar11) {
        *(long **)(uVar22 + 0x10) = plVar11;
        plVar12 = plVar11;
      }
      else {
        do {
          plVar12 = plVar12 + -1;
          plVar44 = (long *)*plVar12;
          *plVar12 = 0;
          if (plVar44 != (long *)0x0) {
            (**(code **)(*plVar44 + 8))();
          }
        } while (plVar11 != plVar12);
        plVar12 = *(long **)(uVar22 + 8);
        *(long **)(uVar22 + 0x10) = plVar11;
      }
      if (plVar12 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar12);
      }
    }
    FUN_710392eb40(uVar22);
  }
  plVar11 = (long *)param_1[4];
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0xc0,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_000000c0;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0xc0,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_710271ef2c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271ef2c:
  FUN_710272a0b0(puVar10,plVar11,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,param_8);
  uVar22 = param_1[9];
  param_1[9] = (long)puVar10;
  if (uVar22 != 0) {
    FUN_710272a910(*(undefined8 **)(uVar22 + 0x78));
    FUN_710272a910(*(undefined8 **)(uVar22 + 0x60));
    FUN_710272a910(*(undefined8 **)(uVar22 + 0x48));
    FUN_710392eb40(uVar22);
  }
  lVar43 = param_1[4];
  plVar11 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                   param_7,param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000010;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppppbVar21,ppppbVar25,param_5,
                                           param_6,param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_710271efc4;
    }
    plVar11 = (long *)0x0;
  }
LAB_710271efc4:
  *plVar11 = lVar43;
  *(undefined1 *)(plVar11 + 1) = 0;
  *(undefined4 *)((long)plVar11 + 0xc) = 0;
  local_200 = (byte ***)&PTR_FUN_71050d61a0;
  plStack_1f8 = plVar11;
  local_1e0 = &local_200;
  FUN_71027256d0(*(ulong **)(lVar43 + 0x18),(long *)&local_200,(long ****)ppppbVar21,ppppbVar25,
                 param_5,param_6,param_7,param_8);
  if (&local_200 == local_1e0) {
    ppbVar24 = (*local_1e0)[4];
LAB_710271f014:
    (*(code *)ppbVar24)();
  }
  else if (local_1e0 != (byte ****)0x0) {
    ppbVar24 = (*local_1e0)[5];
    goto LAB_710271f014;
  }
  uVar22 = param_1[10];
  param_1[10] = (long)plVar11;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  plVar11 = (long *)param_1[4];
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x40,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000040;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_710271f088;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710271f088:
  FUN_7102717ad0(puVar10,plVar11,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,param_8);
  uVar22 = param_1[0xb];
  param_1[0xb] = (long)puVar10;
  if (uVar22 != 0) {
    FUN_71027181b0(uVar22);
    FUN_710392eb40(uVar22);
  }
  plVar12 = (long *)param_1[4];
  plVar11 = (long *)FUN_710392e290(0x10,0x70,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                   param_7,param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_200 = (byte ***)&DAT_00000070;
      ppppbVar21 = &local_200;
      uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar22 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,0x70,(long ****)ppppbVar21,ppppbVar25,param_5,
                                           param_6,param_7,param_8), plVar11 != (long *)0x0))
      goto LAB_710271f110;
    }
    plVar11 = (long *)0x0;
  }
LAB_710271f110:
  *plVar11 = (long)plVar12;
  *(undefined4 *)(plVar11 + 1) = 0;
  plVar11[2] = 0;
  plVar11[7] = 0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[6] = 0;
  plVar11[0xc] = 0;
  plVar11[0xd] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  lVar43 = *(long *)(*plVar12 + 0x300);
  uVar22 = *(long *)(*(long *)(lVar43 + 0x60) + 0x20) - *(long *)(*(long *)(lVar43 + 0x60) + 0x18);
  uVar15 = uVar22 >> 4 & 0xffffffff;
  if (uVar15 != 0) {
    pppbVar57 = (byte ***)(uVar15 << 4);
    lVar51 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,param_7,
                            param_8);
    if (lVar51 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
        ppppbVar21 = &local_200;
        local_200 = pppbVar57;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar19 & 1) != 0) &&
           (lVar51 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                                    param_7,param_8), lVar51 != 0)) goto LAB_710271f1b8;
      }
      lVar51 = 0;
    }
LAB_710271f1b8:
    plVar11[2] = lVar51;
    plVar11[3] = lVar51;
    plVar11[4] = lVar51 + uVar15 * 0x10;
  }
  if ((int)(uVar22 >> 4) != 0) {
    uVar22 = 0;
    uStack_268 = 0;
    local_270 = 0x4334000000000000;
    do {
      lVar51 = *(long *)(*(long *)(lVar43 + 0x60) + 0x18);
      lVar54 = *(long *)(*(long *)(lVar43 + 0x60) + 0x20);
      uVar48 = local_270;
      uVar63 = uStack_268;
      if (lVar51 != lVar54) {
        uVar31 = lVar54 - lVar51 >> 4;
        uVar19 = 0;
        if (uVar31 != 0) {
          uVar19 = uVar22 / uVar31;
        }
        puVar10 = (undefined8 *)(lVar51 + (uVar22 - uVar19 * uVar31) * 0x10);
        uVar63 = puVar10[1];
        uVar48 = *puVar10;
      }
      puVar10 = (undefined8 *)plVar11[3];
      if (puVar10 < (undefined8 *)plVar11[4]) {
        puVar10[1] = uVar63;
        *puVar10 = uVar48;
        plVar11[3] = plVar11[3] + 0x10;
      }
      else {
        pvVar58 = (void *)plVar11[2];
        ppppbVar46 = (byte ****)((long)puVar10 - (long)pvVar58);
        uVar19 = ((long)ppppbVar46 >> 4) + 1;
        if (uVar19 >> 0x3c != 0) {
LAB_710271fe7c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar51 = plVar11[4] - (long)pvVar58;
        if ((ulong)(lVar51 >> 4) < 0x7ffffffffffffff) {
          uVar31 = lVar51 >> 3;
          if (uVar19 <= uVar31) {
            uVar19 = uVar31;
          }
          if (uVar19 != 0) {
            if (uVar19 >> 0x3c == 0) goto LAB_710271f284;
            goto LAB_710271fe8c;
          }
          __dest = (void *)0x0;
        }
        else {
          uVar19 = 0xfffffffffffffff;
LAB_710271f284:
          pppbVar57 = (byte ***)(uVar19 * 0x10);
          if (pppbVar57 == (byte ***)0x0) {
            pppbVar57 = (byte ***)0x1;
          }
          __dest = (void *)FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,
                                          param_6,param_7,param_8);
          if (__dest == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
              ppppbVar21 = &local_200;
              local_200 = pppbVar57;
              uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
              if (((uVar31 & 1) != 0) &&
                 (__dest = (void *)FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,
                                                  param_5,param_6,param_7,param_8),
                 __dest != (void *)0x0)) goto LAB_710271f2ec;
            }
            __dest = (void *)0x0;
          }
        }
LAB_710271f2ec:
        puVar10 = (undefined8 *)((long)__dest + ((long)ppppbVar46 >> 4) * 0x10);
        puVar10[1] = uVar63;
        *puVar10 = uVar48;
        if (0 < (long)ppppbVar46) {
          memcpy(__dest,pvVar58,(size_t)ppppbVar46);
          ppppbVar21 = ppppbVar46;
        }
        plVar11[2] = (long)__dest;
        plVar11[3] = (long)(puVar10 + 2);
        plVar11[4] = (long)((long)__dest + uVar19 * 0x10);
        if (pvVar58 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar58);
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar15);
  }
  local_200 = *(byte ****)(lVar43 + 8);
  uVar22 = 0x555555555555555;
  plStack_1f8 = (long *)((ulong)plStack_1f8 & 0xffffffff00000000);
  if ((local_200 == (byte ***)0x0) ||
     ((int)((ulong)((long)local_200[0x36] - (long)local_200[0x35]) >> 3) == 0)) {
    local_1f0 = (byte ***)((ulong)local_1f0._4_4_ << 0x20);
  }
  else {
    local_1f0 = (byte ***)((ulong)local_1f0._4_4_ << 0x20);
    uVar15 = (long)local_200[0x36] - (long)local_200[0x35];
    uVar28 = 0;
    do {
      if ((ulong)((long)uVar15 >> 3) <= (ulong)uVar28) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar43 = *(long *)(local_200[0x35][uVar28] + 0x10);
      if ((*(int *)(lVar43 + 0xf8) != 0) && (*(long *)(lVar43 + 0x100) != 0)) {
        if (local_200 != (byte ***)0x0) goto LAB_710271f5d8;
        break;
      }
      uVar28 = uVar28 + 1;
      plStack_1f8 = (long *)CONCAT44(plStack_1f8._4_4_,uVar28);
    } while (uVar28 < (uint)(uVar15 >> 3));
  }
LAB_710271f3b8:
  fVar62 = *(float *)(((long *)*plVar11)[4] + 0x1c);
  lVar43 = *(long *)(*(long *)*plVar11 + 0x300);
  lVar51 = *(long *)(lVar43 + 0x60);
  puVar10 = *(undefined8 **)(lVar51 + 0x18);
  if ((*(long *)(lVar51 + 0x20) - (long)puVar10 & 0xffffffff0U) != 0) {
    fVar61 = (float)plVar11[(long)(int)plVar11[1] * 2 + 6] + 0.0;
    fVar64 = (float)((ulong)plVar11[(long)(int)plVar11[1] * 2 + 6] >> 0x20) + fVar62;
    fVar65 = (float)plVar11[(long)(int)plVar11[1] * 2 + 7] + 0.0;
    fVar66 = (float)((ulong)plVar11[(long)(int)plVar11[1] * 2 + 7] >> 0x20) + 0.0;
    auVar67._4_4_ = fVar64;
    auVar67._0_4_ = fVar61;
    auVar67._8_4_ = fVar65;
    auVar67._12_4_ = fVar66;
    auVar6._4_4_ = fVar64;
    auVar6._0_4_ = fVar61;
    auVar6._8_4_ = fVar65;
    auVar6._12_4_ = fVar66;
    auVar67 = NEON_ext(auVar67,auVar6,8,1);
    puVar10[1] = (ulong)auVar67._0_4_;
    *puVar10 = CONCAT44(fVar64,fVar61);
  }
  lVar51 = plVar11[2];
  lVar54 = plVar11[3];
  if (1 < (ulong)(lVar54 - lVar51 >> 4)) {
    uVar15 = 1;
    do {
      lVar37 = *(long *)(lVar43 + 0x60);
      lVar33 = *(long *)(lVar37 + 0x18);
      uVar19 = *(long *)(lVar37 + 0x20) - lVar33;
      if ((uint)uVar15 < (uint)(uVar19 >> 4) && (uVar15 & 0xffffffff) < (ulong)((long)uVar19 >> 4))
      {
        puVar10 = (undefined8 *)(lVar51 + uVar15 * 0x10);
        uVar63 = puVar10[1];
        uVar48 = *puVar10;
        fVar61 = (float)uVar48 + 0.0;
        fVar64 = fVar62 + (float)((ulong)uVar48 >> 0x20);
        fVar65 = (float)uVar63 + 0.0;
        fVar66 = (float)((ulong)uVar63 >> 0x20) + 0.0;
        auVar7._4_4_ = fVar64;
        auVar7._0_4_ = fVar61;
        auVar7._8_4_ = fVar65;
        auVar7._12_4_ = fVar66;
        auVar8._4_4_ = fVar64;
        auVar8._0_4_ = fVar61;
        auVar8._8_4_ = fVar65;
        auVar8._12_4_ = fVar66;
        auVar67 = NEON_ext(auVar7,auVar8,8,1);
        puVar10 = (undefined8 *)(lVar33 + (uVar15 & 0xffffffff) * 0x10);
        puVar10[1] = (ulong)auVar67._0_4_;
        *puVar10 = CONCAT44(fVar64,fVar61);
        lVar51 = plVar11[2];
        lVar54 = plVar11[3];
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (ulong)(lVar54 - lVar51 >> 4));
  }
  lVar43 = *(long *)(*plVar11 + 0x18);
  local_200 = (byte ***)&PTR_FUN_71050d5f48;
  plStack_1f8 = plVar11;
  local_1e0 = &local_200;
  uVar15 = *(ulong *)(lVar43 + 0x68);
  if (uVar15 < *(ulong *)(lVar43 + 0x70)) {
    *(ulong *)(uVar15 + 0x20) = uVar15;
    (*(code *)PTR_FUN_71050d5f60)();
    *(long *)(lVar43 + 0x68) = *(long *)(lVar43 + 0x68) + 0x30;
  }
  else {
    lVar51 = (long)(uVar15 - *(long *)(lVar43 + 0x60)) >> 4;
    uVar15 = lVar51 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar15) goto LAB_710271fe9c;
    lVar54 = (long)(*(ulong *)(lVar43 + 0x70) - *(long *)(lVar43 + 0x60)) >> 4;
    uVar19 = uVar22;
    if ((ulong)(lVar54 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar31 = lVar54 * 0x5555555555555556;
      uVar19 = uVar15;
      if (uVar15 <= uVar31) {
        uVar19 = uVar31;
      }
      if (uVar19 != 0) goto LAB_710271f520;
      lVar54 = 0;
      lVar37 = lVar51 * 0x10;
      lVar33 = 0;
LAB_710271f750:
      if (&local_200 == local_1e0) {
        *(long *)(lVar54 + lVar51 * 0x10 + 0x20) = lVar37;
        (*(code *)(*local_1e0)[3])(local_1e0,lVar37);
      }
      else {
        *(byte *****)(lVar54 + lVar51 * 0x10 + 0x20) = local_1e0;
        local_1e0 = (byte ****)0x0;
      }
    }
    else {
LAB_710271f520:
      pppbVar57 = (byte ***)(uVar19 * 0x30);
      if (pppbVar57 == (byte ***)0x0) {
        pppbVar57 = (byte ***)0x1;
      }
      lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                              param_7,param_8);
      if (lVar54 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d0 = (byte ***)((ulong)local_d0 & 0xffffffff00000000);
          ppppbVar21 = &local_a0;
          local_a0 = pppbVar57;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
          if (((uVar15 & 1) != 0) &&
             (lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,
                                      param_6,param_7,param_8), lVar54 != 0)) goto LAB_710271f580;
        }
        lVar54 = 0;
      }
LAB_710271f580:
      lVar37 = lVar54 + lVar51 * 0x10;
      lVar33 = lVar54 + uVar19 * 0x30;
      if (local_1e0 != (byte ****)0x0) goto LAB_710271f750;
      *(undefined8 *)(lVar54 + lVar51 * 0x10 + 0x20) = 0;
    }
    plVar12 = *(long **)(lVar43 + 0x60);
    plVar44 = *(long **)(lVar43 + 0x68);
    lVar51 = lVar37;
    if (*(long **)(lVar43 + 0x68) == plVar12) {
      *(long *)(lVar43 + 0x60) = lVar37;
      *(long *)(lVar43 + 0x68) = lVar37 + 0x30;
      *(long *)(lVar43 + 0x70) = lVar33;
    }
    else {
      do {
        plVar17 = (long *)plVar44[-2];
        lVar54 = lVar51 + -0x30;
        plVar14 = plVar44 + -6;
        if (plVar17 == (long *)0x0) {
          *(undefined8 *)(lVar51 + -0x10) = 0;
        }
        else if (plVar14 == plVar17) {
          *(long *)(lVar51 + -0x10) = lVar54;
          (**(code **)(*(long *)plVar44[-2] + 0x18))((long *)plVar44[-2],lVar54);
        }
        else {
          *(long **)(lVar51 + -0x10) = plVar17;
          plVar44[-2] = 0;
        }
        plVar44 = plVar14;
        lVar51 = lVar54;
      } while (plVar12 != plVar14);
      plVar12 = *(long **)(lVar43 + 0x60);
      plVar44 = *(long **)(lVar43 + 0x68);
      *(long *)(lVar43 + 0x60) = lVar54;
      *(long *)(lVar43 + 0x68) = lVar37 + 0x30;
      *(long *)(lVar43 + 0x70) = lVar33;
joined_r0x00710271f804:
      if (plVar44 != plVar12) {
        plVar17 = (long *)plVar44[-2];
        plVar44 = plVar44 + -6;
        if (plVar44 != plVar17) goto code_r0x00710271f818;
        pcVar27 = *(code **)(*plVar17 + 0x20);
        goto LAB_710271f830;
      }
    }
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
  }
  if (&local_200 == local_1e0) {
    ppbVar24 = (*local_1e0)[4];
LAB_710271f870:
    (*(code *)ppbVar24)();
  }
  else if (local_1e0 != (byte ****)0x0) {
    ppbVar24 = (*local_1e0)[5];
    goto LAB_710271f870;
  }
  lVar43 = *(long *)(*plVar11 + 0x18);
  local_a0 = (byte ***)&PTR_FUN_71050d5f90;
  plStack_98 = plVar11;
  local_80 = &local_a0;
  uVar15 = *(ulong *)(lVar43 + 0x80);
  if (uVar15 < *(ulong *)(lVar43 + 0x88)) {
    *(ulong *)(uVar15 + 0x20) = uVar15;
    (*(code *)PTR_FUN_71050d5fa8)();
    *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + 0x30;
  }
  else {
    lVar51 = (long)(uVar15 - *(long *)(lVar43 + 0x78)) >> 4;
    uVar15 = lVar51 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar15) goto LAB_710271fe9c;
    lVar54 = (long)(*(ulong *)(lVar43 + 0x88) - *(long *)(lVar43 + 0x78)) >> 4;
    uVar19 = uVar22;
    if ((ulong)(lVar54 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar31 = lVar54 * 0x5555555555555556;
      uVar19 = uVar15;
      if (uVar15 <= uVar31) {
        uVar19 = uVar31;
      }
      if (uVar19 != 0) goto LAB_710271f918;
      lVar54 = 0;
      lVar37 = lVar51 * 0x10;
      lVar33 = 0;
LAB_710271f9bc:
      if (&local_a0 == local_80) {
        *(long *)(lVar54 + lVar51 * 0x10 + 0x20) = lVar37;
        (*(code *)(*local_80)[3])(local_80,lVar37);
      }
      else {
        *(byte *****)(lVar54 + lVar51 * 0x10 + 0x20) = local_80;
        local_80 = (byte ****)0x0;
      }
    }
    else {
LAB_710271f918:
      pppbVar57 = (byte ***)(uVar19 * 0x30);
      if (pppbVar57 == (byte ***)0x0) {
        pppbVar57 = (byte ***)0x1;
      }
      lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                              param_7,param_8);
      if (lVar54 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_100 = (undefined **)((ulong)local_100 & 0xffffffff00000000);
          ppppbVar21 = &local_d0;
          local_d0 = pppbVar57;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_100);
          if (((uVar15 & 1) != 0) &&
             (lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,
                                      param_6,param_7,param_8), lVar54 != 0)) goto LAB_710271f978;
        }
        lVar54 = 0;
      }
LAB_710271f978:
      lVar37 = lVar54 + lVar51 * 0x10;
      lVar33 = lVar54 + uVar19 * 0x30;
      if (local_80 != (byte ****)0x0) goto LAB_710271f9bc;
      *(undefined8 *)(lVar54 + lVar51 * 0x10 + 0x20) = 0;
    }
    plVar12 = *(long **)(lVar43 + 0x78);
    plVar44 = *(long **)(lVar43 + 0x80);
    lVar51 = lVar37;
    if (*(long **)(lVar43 + 0x80) == plVar12) {
      *(long *)(lVar43 + 0x78) = lVar37;
      *(long *)(lVar43 + 0x80) = lVar37 + 0x30;
      *(long *)(lVar43 + 0x88) = lVar33;
    }
    else {
      do {
        plVar17 = (long *)plVar44[-2];
        lVar54 = lVar51 + -0x30;
        plVar14 = plVar44 + -6;
        if (plVar17 == (long *)0x0) {
          *(undefined8 *)(lVar51 + -0x10) = 0;
        }
        else if (plVar14 == plVar17) {
          *(long *)(lVar51 + -0x10) = lVar54;
          (**(code **)(*(long *)plVar44[-2] + 0x18))((long *)plVar44[-2],lVar54);
        }
        else {
          *(long **)(lVar51 + -0x10) = plVar17;
          plVar44[-2] = 0;
        }
        plVar44 = plVar14;
        lVar51 = lVar54;
      } while (plVar12 != plVar14);
      plVar12 = *(long **)(lVar43 + 0x78);
      plVar44 = *(long **)(lVar43 + 0x80);
      *(long *)(lVar43 + 0x78) = lVar54;
      *(long *)(lVar43 + 0x80) = lVar37 + 0x30;
      *(long *)(lVar43 + 0x88) = lVar33;
joined_r0x00710271fa70:
      if (plVar44 != plVar12) {
        plVar17 = (long *)plVar44[-2];
        plVar44 = plVar44 + -6;
        if (plVar44 != plVar17) goto code_r0x00710271fa84;
        pcVar27 = *(code **)(*plVar17 + 0x20);
        goto LAB_710271fa9c;
      }
    }
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
  }
  if (&local_a0 == local_80) {
    ppbVar24 = (*local_80)[4];
LAB_710271fadc:
    (*(code *)ppbVar24)();
  }
  else if (local_80 != (byte ****)0x0) {
    ppbVar24 = (*local_80)[5];
    goto LAB_710271fadc;
  }
  local_d0 = (byte ***)&PTR_FUN_71050d5fd8;
  plStack_c8 = plVar11;
  local_b0 = &local_d0;
  FUN_71027256d0(*(ulong **)(*plVar11 + 0x18),(long *)&local_d0,(long ****)ppppbVar21,ppppbVar25,
                 param_5,param_6,param_7,param_8);
  if (&local_d0 == local_b0) {
    ppbVar24 = (*local_b0)[4];
LAB_710271fb28:
    (*(code *)ppbVar24)();
  }
  else if (local_b0 != (byte ****)0x0) {
    ppbVar24 = (*local_b0)[5];
    goto LAB_710271fb28;
  }
  local_100 = &PTR_FUN_71050d6020;
  plStack_f8 = plVar11;
  local_e0 = &local_100;
  FUN_7102725970(*(long *)(*plVar11 + 0x18),&local_100,(long ****)ppppbVar21,ppppbVar25,param_5,
                 param_6,param_7,param_8);
  if (&local_100 == local_e0) {
    pcVar27 = *(code **)(*local_e0 + 0x20);
LAB_710271fb74:
    (*pcVar27)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar27 = *(code **)(*local_e0 + 0x28);
    goto LAB_710271fb74;
  }
  uVar15 = param_1[0xc];
  param_1[0xc] = (long)plVar11;
  if (uVar15 != 0) {
    uVar19 = *(ulong *)(uVar15 + 0x10);
    if (uVar19 != 0) {
      *(ulong *)(uVar15 + 0x18) = uVar19;
      FUN_710392eb40(uVar19);
    }
    FUN_710392eb40(uVar15);
  }
  lVar43 = param_1[2];
  local_230 = &PTR_FUN_71050d5e40;
  plStack_228 = param_1;
  local_210 = &local_230;
  uVar15 = *(ulong *)(lVar43 + 0x20);
  if (uVar15 < *(ulong *)(lVar43 + 0x28)) {
    *(ulong *)(uVar15 + 0x20) = uVar15;
    (*(code *)PTR_FUN_71050d5e58)();
    *(long *)(lVar43 + 0x20) = *(long *)(lVar43 + 0x20) + 0x30;
  }
  else {
    lVar51 = (long)(uVar15 - *(long *)(lVar43 + 0x18)) >> 4;
    uVar15 = lVar51 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar15) {
LAB_710271fe9c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar54 = (long)(*(ulong *)(lVar43 + 0x28) - *(long *)(lVar43 + 0x18)) >> 4;
    if ((ulong)(lVar54 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar19 = lVar54 * 0x5555555555555556;
      uVar22 = uVar15;
      if (uVar15 <= uVar19) {
        uVar22 = uVar19;
      }
      if (uVar22 != 0) goto LAB_710271fc38;
      lVar37 = 0;
      lVar54 = 0;
      lVar33 = lVar51 * 0x10;
LAB_710271fce0:
      if (&local_230 == local_210) {
        *(long *)(lVar54 + lVar51 * 0x10 + 0x20) = lVar33;
        (*(code *)(*local_210)[3])(local_210,lVar33);
      }
      else {
        *(undefined ****)(lVar54 + lVar51 * 0x10 + 0x20) = local_210;
        local_210 = (undefined ***)0x0;
      }
    }
    else {
LAB_710271fc38:
      pppbVar57 = (byte ***)(uVar22 * 0x30);
      if (pppbVar57 == (byte ***)0x0) {
        pppbVar57 = (byte ***)0x1;
      }
      lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                              param_7,param_8);
      if (lVar54 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
          ppppbVar21 = &local_200;
          local_200 = pppbVar57;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar15 & 1) != 0) &&
             (lVar54 = FUN_710392e290(0x10,pppbVar57,(long ****)ppppbVar21,ppppbVar25,param_5,
                                      param_6,param_7,param_8), lVar54 != 0)) goto LAB_710271fc98;
        }
        lVar54 = 0;
      }
LAB_710271fc98:
      lVar33 = lVar54 + lVar51 * 0x10;
      lVar37 = lVar54 + uVar22 * 0x30;
      if (local_210 != (undefined ***)0x0) goto LAB_710271fce0;
      *(undefined8 *)(lVar54 + lVar51 * 0x10 + 0x20) = 0;
    }
    plVar11 = *(long **)(lVar43 + 0x18);
    plVar12 = *(long **)(lVar43 + 0x20);
    lVar51 = lVar33;
    if (*(long **)(lVar43 + 0x20) == plVar11) {
      *(long *)(lVar43 + 0x18) = lVar33;
      *(long *)(lVar43 + 0x20) = lVar33 + 0x30;
      *(long *)(lVar43 + 0x28) = lVar37;
    }
    else {
      do {
        plVar44 = (long *)plVar12[-2];
        lVar54 = lVar51 + -0x30;
        plVar17 = plVar12 + -6;
        if (plVar44 == (long *)0x0) {
          *(undefined8 *)(lVar51 + -0x10) = 0;
        }
        else if (plVar17 == plVar44) {
          *(long *)(lVar51 + -0x10) = lVar54;
          (**(code **)(*(long *)plVar12[-2] + 0x18))((long *)plVar12[-2],lVar54);
        }
        else {
          *(long **)(lVar51 + -0x10) = plVar44;
          plVar12[-2] = 0;
        }
        plVar12 = plVar17;
        lVar51 = lVar54;
      } while (plVar11 != plVar17);
      plVar11 = *(long **)(lVar43 + 0x18);
      plVar12 = *(long **)(lVar43 + 0x20);
      *(long *)(lVar43 + 0x18) = lVar54;
      *(long *)(lVar43 + 0x20) = lVar33 + 0x30;
      *(long *)(lVar43 + 0x28) = lVar37;
joined_r0x00710271fd94:
      if (plVar12 != plVar11) {
        plVar44 = (long *)plVar12[-2];
        plVar12 = plVar12 + -6;
        if (plVar12 != plVar44) goto code_r0x00710271fda8;
        pcVar27 = *(code **)(*plVar44 + 0x20);
        goto LAB_710271fdc0;
      }
    }
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
  }
  if (&local_230 == local_210) {
    pcVar27 = (code *)(*local_210)[4];
  }
  else {
    if (local_210 == (undefined ***)0x0) goto LAB_710271fe04;
    pcVar27 = (code *)(*local_210)[5];
  }
  (*pcVar27)();
LAB_710271fe04:
  local_260 = &PTR_FUN_71050d5e88;
  plStack_258 = param_1;
  local_240 = &local_260;
  FUN_7102725970(param_1[2],(long *)&local_260,(long ****)ppppbVar21,ppppbVar25,param_5,param_6,
                 param_7,param_8);
  if (&local_260 == local_240) {
    pcVar27 = (code *)(*local_240)[4];
  }
  else {
    if (local_240 == (undefined ***)0x0) {
      return;
    }
    pcVar27 = (code *)(*local_240)[5];
  }
  (*pcVar27)();
  return;
code_r0x00710271d1e4:
  if (plVar17 != (long *)0x0) {
    pcVar27 = *(code **)(*plVar17 + 0x28);
LAB_710271d1fc:
    (*pcVar27)();
  }
  goto joined_r0x00710271d1d0;
LAB_710271db58:
  local_200 = (byte ***)0x0;
LAB_710271dc7c:
  pfVar45 = pfVar45 + 7;
  if (pfVar45 == pfVar2) goto LAB_710271dca8;
  lVar43 = *plVar11;
  lVar51 = *(long *)(lVar43 + 0x10);
  goto LAB_710271dadc;
LAB_710271f5d8:
  if ((ulong)((long)local_200[0x36] - (long)local_200[0x35] >> 3) <= (ulong)uVar28) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar43 = *(long *)(local_200[0x35][uVar28] + 0x10);
  uVar15 = (ulong)local_1f0 & 0xffffffff;
  if (*(int *)(*(long *)(lVar43 + 0x100) + uVar15 * 0x140 + 0x108) == 1) {
    if ((uint)local_1f0 < *(uint *)(lVar43 + 0xf8)) {
      pcVar35 = strstr((char *)(*(long *)(lVar43 + 0x100) + uVar15 * 0x140 + 0x48),"RestartOrdinary"
                      );
      lVar51 = *(long *)(lVar43 + 0x100) + uVar15 * 0x140;
      if (pcVar35 == (char *)0x0) {
        pcVar35 = strstr((char *)(lVar51 + 0x48),"RestartLeft");
        lVar51 = *(long *)(lVar43 + 0x100) + uVar15 * 0x140;
        if (pcVar35 == (char *)0x0) {
          pcVar35 = strstr((char *)(lVar51 + 0x48),"RestartRight");
          lVar51 = *(long *)(lVar43 + 0x100) + uVar15 * 0x140;
          if (pcVar35 == (char *)0x0) goto LAB_710271f684;
          lVar43 = *(long *)(lVar51 + 0x10c);
          plVar11[0xb] = 0;
          plVar11[10] = lVar43;
        }
        else {
          lVar43 = *(long *)(lVar51 + 0x10c);
          plVar11[9] = 0;
          plVar11[8] = lVar43;
        }
      }
      else {
        lVar43 = *(long *)(lVar51 + 0x10c);
        plVar11[7] = 0;
        plVar11[6] = lVar43;
      }
    }
    else {
      strstr(&DAT_00000048,"RestartOrdinary");
      strstr(&DAT_00000048,"RestartLeft");
      strstr(&DAT_00000048,"RestartRight");
      lVar51 = 0;
LAB_710271f684:
      pcVar35 = strstr((char *)(lVar51 + 0x48),"RestartBattle");
      if (pcVar35 != (char *)0x0) {
        lVar43 = *(long *)(*(long *)(lVar43 + 0x100) + uVar15 * 0x140 + 0x10c);
        plVar11[0xd] = 0;
        plVar11[0xc] = lVar43;
      }
    }
  }
  FUN_710262cb10((long *)&local_200);
  if (local_200 == (byte ***)0x0) goto LAB_710271f3b8;
  uVar28 = (uint)plStack_1f8;
  goto LAB_710271f5d8;
code_r0x00710271f818:
  if (plVar17 != (long *)0x0) {
    pcVar27 = *(code **)(*plVar17 + 0x28);
LAB_710271f830:
    (*pcVar27)();
  }
  goto joined_r0x00710271f804;
code_r0x00710271fa84:
  if (plVar17 != (long *)0x0) {
    pcVar27 = *(code **)(*plVar17 + 0x28);
LAB_710271fa9c:
    (*pcVar27)();
  }
  goto joined_r0x00710271fa70;
code_r0x00710271fda8:
  if (plVar44 != (long *)0x0) {
    pcVar27 = *(code **)(*plVar44 + 0x28);
LAB_710271fdc0:
    (*pcVar27)();
  }
  goto joined_r0x00710271fd94;
}

