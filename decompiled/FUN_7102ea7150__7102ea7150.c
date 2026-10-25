// addr:      7102ea7150
// offset:    0x2ea7150
// name:      FUN_7102ea7150
// mangled:   
// signature: undefined __cdecl FUN_7102ea7150(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x007102ea7ab0) */
/* WARNING: Removing unreachable block (ram,0x007102ea782c) */
/* WARNING: Removing unreachable block (ram,0x007102ea7b88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ea7150(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,long ***param_7,long ***param_8)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined2 *puVar21;
  long *plVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar23;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long ****pppplVar24;
  undefined **ppuVar25;
  long ****pppplVar26;
  char *pcVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  long ****pppplVar30;
  char *pcVar31;
  long ****pppplVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  int *piVar36;
  ulong *puVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auVar41 [16];
  long ***local_80;
  long **local_78;
  long local_70;
  undefined4 local_64;
  
  pppplVar24 = &local_80;
  pppplVar29 = &local_80;
  pppplVar26 = &local_80;
  pppplVar28 = &local_80;
  pppplVar30 = &local_80;
  puVar37 = *(ulong **)(param_1 + 0x738);
  plVar34 = *(long **)(*(long *)(*puVar37 + 0x300) + 0x18);
  plVar22 = (long *)*plVar34;
  do {
    if (plVar22 == (long *)plVar34[1]) goto LAB_7102ea7210;
    lVar35 = *plVar22;
    plVar22 = plVar22 + 1;
  } while ((*(ulong *)(lVar35 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  puVar18 = *(undefined8 **)(lVar35 + 0x130);
  puVar37[0x72] = (ulong)puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    FUN_71025f55b0((undefined8 *)*puVar18,(undefined8 *)puVar18[1],"IPP0002");
    FUN_71025f55b0(*(undefined8 **)puVar37[0x72],(undefined8 *)((undefined8 *)puVar37[0x72])[1],
                   "IPP0003");
    FUN_71025f55b0(*(undefined8 **)puVar37[0x72],(undefined8 *)((undefined8 *)puVar37[0x72])[1],
                   "IPP0004");
    param_3 = "IPP0005";
    FUN_71025f55b0(*(undefined8 **)puVar37[0x72],(undefined8 *)((undefined8 *)puVar37[0x72])[1],
                   "IPP0005");
  }
LAB_7102ea7210:
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x250,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)0x250;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar19 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x250,pppplVar24,param_4,param_5,param_6,param_7,param_8),
         puVar18 != (undefined8 *)0x0)) goto LAB_7102ea726c;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_7102ea726c:
  pppplVar32 = (long ****)puVar37[0x72];
  pppplVar24 = (long ****)(puVar37 + 1);
  pcVar31 = "S13_g";
  ppuVar25 = (undefined **)pppplVar24;
  FUN_7102eaaea0(puVar18,*puVar37,pppplVar24,(byte ****)"S13_g",pppplVar32,param_6,param_7,param_8);
  puVar20 = (undefined8 *)puVar37[0x59];
  puVar37[0x59] = (ulong)puVar18;
  if (puVar20 != (undefined8 *)0x0) {
    puVar20[0x23] = 0;
    puVar20[0x13] = 0;
    puVar20[0x10] = 0;
    puVar20[3] = 0;
    *puVar20 = 0;
    FUN_710392eb40((ulong)puVar20);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    ppuVar25 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052c51ba != '\0') {
    *(undefined1 *)(puVar37[0x59] + 0x248) = 1;
  }
  puVar21 = (undefined2 *)
            FUN_710392e290(0x10,0xb0,(long ****)ppuVar25,(byte ****)pcVar31,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar21 == (undefined2 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_000000b0;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar19 & 1) != 0) &&
         (puVar21 = (undefined2 *)
                    FUN_710392e290(0x10,0xb0,pppplVar29,(byte ****)pcVar31,pppplVar32,param_6,
                                   param_7,param_8), puVar21 != (undefined2 *)0x0))
      goto LAB_7102ea7334;
    }
    puVar21 = (undefined2 *)0x0;
  }
LAB_7102ea7334:
  pcVar31 = "S13_f_02";
  FUN_7102eae230(puVar21,*puVar37,(long ****)"S13_f",(byte ****)"S13_f_02",pppplVar32,param_6,
                 param_7,param_8);
  uVar19 = puVar37[0x58];
  puVar37[0x58] = (ulong)puVar21;
  if (uVar19 != 0) {
    *(undefined8 *)(uVar19 + 0x38) = 0;
    *(undefined ***)(uVar19 + 0x20) = &PTR_FUN_7105146950;
    FUN_710392eb40(uVar19);
    puVar21 = (undefined2 *)puVar37[0x58];
  }
  FUN_7102eae830((long)puVar21,0,(long ****)"S13_Siro_hole",(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7102eae830(puVar37[0x58],1,(long ****)"S13_Siro_koware",(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  FUN_7102eae830(puVar37[0x58],2,(long ****)"S13_e_03",(byte ****)pcVar31,pppplVar32,param_6,param_7
                 ,param_8);
  pcVar27 = "S13_enkei_break";
  FUN_7102eae830(puVar37[0x58],3,(long ****)"S13_enkei_break",(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  plVar22 = (long *)FUN_710392e290(0x10,0x1e0,(long ****)pcVar27,(byte ****)pcVar31,pppplVar32,
                                   param_6,param_7,param_8);
  uVar23 = extraout_x1;
  if (plVar22 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_000001e0;
      auVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar23 = auVar41._8_8_;
      pcVar27 = (char *)pppplVar26;
      if (((auVar41._0_8_ & 1) != 0) &&
         (plVar22 = (long *)FUN_710392e290(0x10,0x1e0,pppplVar26,(byte ****)pcVar31,pppplVar32,
                                           param_6,param_7,param_8), uVar23 = extraout_x1_00,
         pcVar27 = (char *)pppplVar26, plVar22 != (long *)0x0)) goto LAB_7102ea7420;
    }
    plVar22 = (long *)0x0;
  }
LAB_7102ea7420:
  uVar19 = *puVar37;
  *plVar22 = (long)&PTR_FUN_7105146980;
  plVar22[1] = uVar19;
  plVar22[2] = (long)pppplVar24;
  uVar40 = uRam000000710752100c;
  uVar16 = _DAT_7107521008;
  lVar33 = _ConstantZero;
  lVar35 = CONCAT44(uRam000000710752100c,_DAT_7107521008);
  uVar38 = (undefined4)_ConstantZero;
  uVar39 = (undefined4)((ulong)_ConstantZero >> 0x20);
  local_80 = (long ***)(plVar22 + 4);
  *(undefined4 *)(plVar22 + 8) = 0xffffffff;
  plVar22[5] = lVar35;
  plVar22[4] = lVar33;
  plVar22[7] = lVar35;
  plVar22[6] = lVar33;
  lVar35 = *(long *)(**(long **)(uVar19 + 0x338) + 8);
  if (lVar35 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    pcVar27 = (char *)0x0;
    uVar15 = FUN_7102405040(lVar35,&local_80,0,(byte ****)pcVar31,pppplVar32,param_6,param_7,param_8
                           );
    uVar38 = (undefined4)_ConstantZero;
    uVar39 = (undefined4)((ulong)_ConstantZero >> 0x20);
    uVar19 = plVar22[1];
    uVar23 = extraout_x1_01;
    uVar16 = _DAT_7107521008;
    uVar40 = uRam000000710752100c;
  }
  *(undefined4 *)(plVar22 + 3) = uVar15;
  *plVar22 = (long)&PTR_FUN_7105146ab0;
  *(undefined1 *)((long)plVar22 + 0x46) = 0;
  plVar22[0x24] = 0;
  plVar22[0x25] = 0;
  plVar34 = plVar22 + 0x21;
  plVar22[0x21] = 0;
  plVar22[0x29] = 0;
  plVar22[0x34] = 0x3f800000;
  *(undefined4 *)(plVar22 + 0x35) = 0;
  plVar22[0x22] = 0;
  plVar22[0x23] = 0;
  plVar22[0x2a] = 0;
  plVar22[0x2b] = 0;
  plVar22[0x32] = 0;
  plVar22[0x33] = 0;
  plVar22[0x30] = 0;
  plVar22[0x31] = 0;
  plVar22[0x38] = 0;
  plVar22[0x39] = 0;
  plVar22[0x27] = CONCAT44(uVar40,uVar16);
  plVar22[0x26] = CONCAT44(uVar39,uVar38);
  for (plVar2 = *(long **)(*(long *)(uVar19 + 0x310) + 0xd0);
      plVar2 != *(long **)(*(long *)(uVar19 + 0x310) + 0xd8); plVar2 = plVar2 + 2) {
    if ((*(uint *)(plVar2 + 1) < 2) && (lVar35 = *plVar2, *(long *)(lVar35 + 0x68) == 0x6209dd188))
    {
      *plVar34 = lVar35;
      lVar33 = 0;
      if (lVar35 != 0) {
        *(undefined1 *)(lVar35 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar35 + 0x108),uVar23,(long ****)pcVar27,(byte ****)pcVar31,
                       pppplVar32,param_6,param_7,param_8);
        lVar33 = *plVar34;
      }
      if (lVar33 != 0) {
        if ((*(char *)(lVar33 + 0xe0) != '\0') && (*(long *)(lVar33 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar33 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar33 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar33 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar33 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar33 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_7102ea7510;
    }
  }
  *plVar34 = 0;
LAB_7102ea7510:
  plVar22[0x3a] = 0;
  lVar35 = _ConstantZero;
  auVar5._8_4_ = _DAT_7107521008;
  auVar5._0_8_ = _ConstantZero;
  auVar41._8_4_ = _DAT_7107521008;
  auVar41._0_8_ = _ConstantZero;
  auVar41._12_4_ = uRam000000710752100c;
  auVar5._12_4_ = uRam000000710752100c;
  auVar41 = NEON_ext(auVar41,auVar5,8,1);
  lVar33 = plVar22[1];
  plVar22[0x25] = (ulong)auVar41._0_4_;
  plVar22[0x24] = lVar35;
  plVar22[0x39] = (ulong)auVar41._0_4_;
  plVar22[0x38] = lVar35;
  *(undefined2 *)(plVar22 + 0x28) = 0;
  plVar34 = *(long **)(*(long *)(*(long *)(*(long *)(lVar33 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar34;
  piVar4 = (int *)plVar34[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea75c8:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 ||
         (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x113bff47e5))));
        piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea75c8;
  }
  *(int *)(plVar22 + 0x2c) = (int)uVar19;
  plVar34 = *(long **)(*(long *)(*(long *)(*(long *)(lVar33 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar34;
  piVar4 = (int *)plVar34[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea7650:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 || (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xfe6c89450)
         ))); piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea7650;
  }
  *(int *)((long)plVar22 + 0x164) = (int)uVar19;
  plVar34 = *(long **)(*(long *)(*(long *)(*(long *)(lVar33 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar34;
  piVar4 = (int *)plVar34[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea76d8:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 || (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xf067e734d)
         ))); piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea76d8;
  }
  *(int *)(plVar22 + 0x2d) = (int)uVar19;
  plVar34 = *(long **)(*(long *)(*(long *)(*(long *)(lVar33 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar34;
  piVar4 = (int *)plVar34[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea7760:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 || (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xfe0223e2e)
         ))); piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea7760;
  }
  *(int *)((long)plVar22 + 0x16c) = (int)uVar19;
  plVar34 = *(long **)(*(long *)(*(long *)(*(long *)(lVar33 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar34;
  piVar4 = (int *)plVar34[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea77e8:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 || (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xee720f699)
         ))); piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea77e8;
  }
  *(int *)(plVar22 + 0x2e) = (int)uVar19;
  lVar35 = plVar22[0x2b];
  if (lVar35 != 0) {
    lVar33 = plVar22[0x29];
    plVar34 = (long *)plVar22[0x2a];
    *plVar34 = lVar33;
    *(long **)(lVar33 + 8) = plVar34;
    *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
    plVar22[0x29] = 0;
    plVar22[0x2a] = 0;
    plVar22[0x2b] = 0;
  }
  uVar16 = uRam000000710752100c;
  lVar35 = _ConstantZero;
  local_70 = 0;
  local_78 = (long **)0x0;
  local_80 = (long ***)0x0;
  auVar7._8_4_ = _DAT_7107521008;
  auVar7._0_8_ = _ConstantZero;
  auVar6._8_4_ = _DAT_7107521008;
  auVar6._0_8_ = _ConstantZero;
  *(undefined4 *)((long)plVar22 + 0x1ac) = 0;
  *(undefined1 *)(plVar22 + 0x36) = 0;
  *(undefined2 *)((long)plVar22 + 0x44) = 0;
  auVar6._12_4_ = uVar16;
  auVar7._12_4_ = uVar16;
  auVar41 = NEON_ext(auVar6,auVar7,8,1);
  plVar22[9] = (long)FUN_7102eb2c00;
  plVar22[10] = 0;
  plVar22[0xb] = (long)FUN_7102eb2fe0;
  plVar22[0xc] = 0;
  plVar22[0xf] = (long)FUN_7102eb3460;
  plVar22[0x10] = 0;
  *(undefined1 *)((long)plVar22 + 0x47) = 0;
  plVar22[0x3b] = 0;
  plVar22[0x15] = (long)FUN_7102eb4540;
  plVar22[0x16] = 0;
  plVar22[0x11] = (long)FUN_7102eb3a00;
  plVar22[0x12] = 0;
  plVar22[0x1d] = (long)FUN_7102eb5920;
  plVar22[0x1e] = 0;
  plVar22[0x13] = (long)FUN_7102eb3e80;
  plVar22[0x14] = 0;
  plVar22[0xd] = (long)FUN_7102eb3380;
  plVar22[0xe] = 0;
  plVar22[0x19] = (long)FUN_7102eb5220;
  plVar22[0x1a] = 0;
  plVar22[0x17] = (long)FUN_7102eb4a40;
  plVar22[0x18] = 0;
  plVar22[0x1b] = (long)FUN_7102eb59d0;
  plVar22[0x1c] = 0;
  plVar22[0x31] = (ulong)auVar41._0_4_;
  plVar22[0x30] = lVar35;
  plVar22[0x33] = (ulong)auVar41._0_4_;
  plVar22[0x32] = lVar35;
  (**(code **)(*plVar22 + 0x18))(plVar22);
  plVar34 = (long *)puVar37[0x5a];
  puVar37[0x5a] = (ulong)plVar22;
  if (plVar34 != (long *)0x0) {
    (**(code **)(*plVar34 + 8))();
  }
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x3b0,(long ****)pcVar27,(byte ****)pcVar31,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_000003b0;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar19 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x3b0,pppplVar28,(byte ****)pcVar31,pppplVar32,param_6,
                                   param_7,param_8), puVar18 != (undefined8 *)0x0))
      goto LAB_7102ea7980;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_7102ea7980:
  uVar19 = *puVar37;
  *puVar18 = &PTR_FUN_7105146980;
  puVar18[1] = uVar19;
  puVar18[2] = pppplVar24;
  lVar35 = _ConstantZero;
  uVar23 = CONCAT44(uRam000000710752100c,_DAT_7107521008);
  local_80 = (long ***)(puVar18 + 4);
  puVar18[5] = uVar23;
  puVar18[4] = lVar35;
  puVar18[7] = uVar23;
  puVar18[6] = lVar35;
  *(undefined4 *)(puVar18 + 8) = 0xffffffff;
  lVar35 = *(long *)(**(long **)(uVar19 + 0x338) + 8);
  if (lVar35 == 0) {
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = FUN_7102405040(lVar35,&local_80,0,(byte ****)pcVar31,pppplVar32,param_6,param_7,param_8
                           );
  }
  *(undefined4 *)(puVar18 + 3) = uVar16;
  *puVar18 = &PTR_FUN_7105146a10;
  *(undefined1 *)(puVar18 + 0x15) = 0;
  *(undefined1 *)((long)puVar18 + 0xaa) = 0;
  puVar18[0x24] = 0;
  puVar18[0x25] = 0;
  *(undefined8 *)((long)puVar18 + 0xc2) = 0;
  *(undefined8 *)((long)puVar18 + 0xbc) = 0;
  puVar18[0x29] = 0;
  puVar18[0x20] = 0;
  puVar18[0x21] = 0;
  puVar18[0x1e] = 0;
  puVar18[0x1f] = 0;
  puVar18[0x1c] = 0;
  puVar18[0x1d] = 0;
  puVar18[0x1a] = 0;
  puVar18[0x1b] = 0;
  puVar18[0x2a] = 0;
  puVar18[0x2b] = 0;
  uVar13 = uRam0000007107459008;
  uVar23 = _ConstantZero;
  puVar18[0x2c] = uVar19;
  *(undefined2 *)(puVar18 + 0x2d) = 1;
  *(undefined1 *)((long)puVar18 + 0x16a) = 0;
  *(undefined4 *)((long)puVar18 + 0x16c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x34) = 0;
  puVar18[0x32] = 0;
  puVar18[0x33] = 0;
  puVar18[0x2f] = uVar13;
  puVar18[0x2e] = uVar23;
  puVar18[0x31] = uVar13;
  puVar18[0x30] = uVar23;
  bVar14 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),uVar19,
                          (long ****)(puVar18 + 0x2c),(byte ****)pcVar31,pppplVar32,param_6,param_7,
                          param_8);
  *(bool *)(puVar18 + 0x2d) = bVar14;
  uVar16 = uRam000000710752100c;
  lVar35 = _ConstantZero;
  auVar9._8_4_ = _DAT_7107521008;
  auVar9._0_8_ = _ConstantZero;
  auVar8._8_4_ = _DAT_7107521008;
  auVar8._0_8_ = _ConstantZero;
  *(undefined4 *)(puVar18 + 0x26) = 0;
  *(undefined1 *)((long)puVar18 + 0x134) = 1;
  puVar18[0x27] = 0;
  auVar8._12_4_ = uVar16;
  auVar9._12_4_ = uVar16;
  auVar41 = NEON_ext(auVar8,auVar9,8,1);
  puVar18[0x25] = (ulong)auVar41._0_4_;
  puVar18[0x24] = lVar35;
  lVar35 = puVar18[0x2b];
  if (lVar35 != 0) {
    lVar33 = puVar18[0x29];
    plVar22 = (long *)puVar18[0x2a];
    *plVar22 = lVar33;
    *(long **)(lVar33 + 8) = plVar22;
    *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
    puVar18[0x29] = 0;
    puVar18[0x2a] = 0;
    puVar18[0x2b] = 0;
  }
  local_70 = 0;
  local_78 = (long **)0x0;
  local_80 = (long ***)0x0;
  *(undefined4 *)(puVar18 + 0x28) = 0xffffffff;
  puVar18[0x36] = 0xffffffff;
  pppplVar29 = (long ****)(puVar18 + 0x40);
  puVar18[0x38] = 0;
  puVar18[0x39] = 0;
  puVar18[0x3d] = 0;
  puVar18[0x3e] = 0;
  puVar18[0x3f] = 0;
  uVar13 = uRam0000007107459008;
  uVar23 = _ConstantZero;
  puVar18[0x40] = uVar19;
  *(undefined2 *)(puVar18 + 0x41) = 1;
  *(undefined1 *)((long)puVar18 + 0x20a) = 0;
  *(undefined4 *)((long)puVar18 + 0x20c) = 0xffffffff;
  *(undefined4 *)(puVar18 + 0x48) = 0;
  puVar18[0x47] = 0;
  puVar18[0x46] = 0;
  puVar18[0x43] = uVar13;
  puVar18[0x42] = uVar23;
  puVar18[0x45] = uVar13;
  puVar18[0x44] = uVar23;
  bVar14 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),uVar19,
                          pppplVar29,(byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  *(bool *)(puVar18 + 0x41) = bVar14;
  uVar16 = uRam000000710752100c;
  lVar35 = _ConstantZero;
  auVar11._8_4_ = _DAT_7107521008;
  auVar11._0_8_ = _ConstantZero;
  auVar10._8_4_ = _DAT_7107521008;
  auVar10._0_8_ = _ConstantZero;
  *(undefined4 *)(puVar18 + 0x3a) = 0;
  *(undefined1 *)((long)puVar18 + 0x1d4) = 1;
  puVar18[0x3b] = 0;
  auVar10._12_4_ = uVar16;
  auVar11._12_4_ = uVar16;
  auVar41 = NEON_ext(auVar10,auVar11,8,1);
  puVar18[0x39] = (ulong)auVar41._0_4_;
  puVar18[0x38] = lVar35;
  lVar35 = puVar18[0x3f];
  if (lVar35 != 0) {
    lVar33 = puVar18[0x3d];
    plVar22 = (long *)puVar18[0x3e];
    *plVar22 = lVar33;
    *(long **)(lVar33 + 8) = plVar22;
    *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
    puVar18[0x3d] = 0;
    puVar18[0x3e] = 0;
    puVar18[0x3f] = 0;
  }
  local_70 = 0;
  local_78 = (long **)0x0;
  local_80 = (long ***)0x0;
  *(undefined4 *)(puVar18 + 0x3c) = 0xffffffff;
  puVar18[0x4a] = 0xffffffff;
  *(undefined2 *)((long)puVar18 + 0x263) = 0;
  *(undefined1 *)((long)puVar18 + 0x265) = 0;
  puVar18[0x4d] = 0;
  lVar35 = _ConstantZero;
  uVar23 = CONCAT44(uRam000000710752100c,_DAT_7107521008);
  *(undefined1 *)((long)puVar18 + 0x364) = 0;
  *(undefined1 *)(puVar18 + 0x6e) = 0;
  puVar18[0x6d] = 0;
  *(undefined1 *)((long)puVar18 + 0x37c) = 0;
  puVar18[0x4f] = uVar23;
  puVar18[0x4e] = lVar35;
  *(undefined8 *)((long)puVar18 + 0x374) = 0;
  *(undefined1 *)(puVar18 + 0x71) = 0;
  puVar18[0x70] = 0;
  *(undefined8 *)((long)puVar18 + 0x38c) = 0;
  *(undefined1 *)((long)puVar18 + 0x394) = 0;
  *(undefined1 *)(puVar18 + 0x74) = 0;
  puVar18[0x73] = 0;
  *(undefined8 *)((long)puVar18 + 0x3a4) = 0;
  *(undefined1 *)(puVar18 + 0x6c) = 0;
  puVar18[0x6b] = 0;
  puVar18[0x6a] = 0;
  puVar18[0x69] = 0;
  puVar18[0x68] = 0;
  puVar18[0x67] = 0;
  puVar18[0x66] = 0;
  puVar18[0x65] = 0;
  puVar18[100] = 0;
  puVar18[99] = 0;
  puVar18[0x62] = 0;
  puVar18[0x61] = 0;
  puVar18[0x60] = 0;
  puVar18[0x5f] = 0;
  puVar18[0x5e] = 0;
  puVar18[0x5d] = 0;
  puVar18[0x5c] = 0;
  puVar18[0x5b] = 0;
  puVar18[0x5a] = 0;
  puVar18[0x59] = 0;
  puVar18[0x58] = 0;
  puVar18[0x57] = 0;
  puVar18[0x56] = 0;
  puVar18[0x55] = 0;
  puVar18[0x54] = 0;
  puVar18[0x53] = 0;
  puVar18[0x52] = 0;
  puVar18[0x51] = 0;
  puVar18[0x50] = 0;
  uVar19 = puVar37[5];
  uVar12 = puVar37[6];
  lVar35 = puVar18[1];
  *(undefined4 *)(puVar18 + 0x17) = 0;
  puVar18[5] = (ulong)(uint)uVar12;
  puVar18[4] = uVar19;
  plVar22 = *(long **)(*(long *)(*(long *)(*(long *)(lVar35 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar22;
  piVar4 = (int *)plVar22[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea7d20:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 || (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xf9afa1d19)
         ))); piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea7d20;
  }
  *(int *)((long)puVar18 + 0xac) = (int)uVar19;
  plVar22 = *(long **)(*(long *)(*(long *)(*(long *)(lVar35 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar22;
  piVar4 = (int *)plVar22[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea7da8:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 ||
         (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x15cdd2cb96))));
        piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea7da8;
  }
  *(int *)(puVar18 + 0x16) = (int)uVar19;
  plVar22 = *(long **)(*(long *)(*(long *)(*(long *)(lVar35 + 800) + 0x48) + 800) + 0x40);
  piVar3 = (int *)*plVar22;
  piVar4 = (int *)plVar22[1];
  if ((long)piVar4 - (long)piVar3 == 0) {
LAB_7102ea7e30:
    uVar19 = 0xffffffff;
  }
  else {
    piVar36 = piVar3;
    for (piVar1 = piVar3;
        (piVar1 != piVar4 &&
        ((*piVar1 != 0 || (piVar36 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0xf1e15df6a)
         ))); piVar1 = piVar1 + 0x1c) {
      piVar36 = piVar4;
    }
    uVar19 = ((long)piVar36 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar4 - (long)piVar3 >> 4) * 0x6db6db6db6db6db7) <= uVar19)
    goto LAB_7102ea7e30;
  }
  *(int *)((long)puVar18 + 0xb4) = (int)uVar19;
  *(undefined2 *)(puVar18 + 0x4c) = 0;
  *(undefined1 *)((long)puVar18 + 0x262) = 0;
  for (plVar22 = *(long **)(*(long *)(lVar35 + 0x310) + 0xd0);
      plVar22 != *(long **)(*(long *)(lVar35 + 0x310) + 0xd8); plVar22 = plVar22 + 2) {
    if ((*(uint *)(plVar22 + 1) < 2) && (lVar33 = *plVar22, *(long *)(lVar33 + 0x68) == 0x828932a91)
       ) {
      puVar18[0x4d] = lVar33;
      lVar35 = 0;
      if (lVar33 != 0) {
        *(undefined1 *)(lVar33 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar33 + 0x108),extraout_x1_02,pppplVar29,(byte ****)pcVar31,
                       pppplVar32,param_6,param_7,param_8);
        lVar35 = puVar18[0x4d];
      }
      if (lVar35 != 0) {
        if ((*(char *)(lVar35 + 0xe0) != '\0') && (*(long *)(lVar35 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar35 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar35 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar35 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar35 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar35 + 0xb0) + 0x10) = 0;
        }
      }
      goto LAB_7102ea7e88;
    }
  }
  puVar18[0x4d] = 0;
LAB_7102ea7e88:
  *(undefined4 *)((long)puVar18 + 0x36c) = 0x44278000;
  FUN_7102626be0((long ***)&local_80,*(ulong **)(puVar18[1] + 800),(long ****)0x10d94abe8e,
                 (byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = puVar18 + 0x52;
  if ((&local_80 != (long ****)plVar22) && (lVar35 = puVar18[0x54], lVar35 != local_70)) {
    if (local_70 == 0) {
      if (lVar35 != 0) {
        lVar33 = puVar18[0x52];
        plVar34 = (long *)puVar18[0x53];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x53] = 0;
        puVar18[0x54] = 0;
        *plVar22 = 0;
      }
    }
    else {
      if (lVar35 != 0) {
        lVar33 = *plVar22;
        plVar34 = (long *)puVar18[0x53];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x53] = 0;
        puVar18[0x54] = 0;
        *plVar22 = 0;
      }
      puVar20 = *(undefined8 **)(local_70 + 0x20);
      puVar18[0x52] = local_70 + 0x18;
      puVar18[0x53] = puVar20;
      *(long **)(local_70 + 0x20) = plVar22;
      *puVar20 = plVar22;
      *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
      puVar18[0x54] = local_70;
    }
  }
  if (local_70 != 0) {
    *local_78 = (long *)local_80;
    local_80[1] = local_78;
    *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + -1;
    local_78 = (long **)0x0;
    local_70 = 0;
    local_80 = (long ***)0x0;
  }
  *(undefined4 *)(puVar18 + 0x6f) = 0x44278000;
  FUN_7102626be0((long ***)&local_80,*(ulong **)(puVar18[1] + 800),(long ****)0x10472e2b2d,
                 (byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = puVar18 + 0x55;
  if ((&local_80 != (long ****)plVar22) && (lVar35 = puVar18[0x57], lVar35 != local_70)) {
    if (local_70 == 0) {
      if (lVar35 != 0) {
        lVar33 = puVar18[0x55];
        plVar34 = (long *)puVar18[0x56];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x56] = 0;
        puVar18[0x57] = 0;
        *plVar22 = 0;
      }
    }
    else {
      if (lVar35 != 0) {
        lVar33 = *plVar22;
        plVar34 = (long *)puVar18[0x56];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x56] = 0;
        puVar18[0x57] = 0;
        *plVar22 = 0;
      }
      puVar20 = *(undefined8 **)(local_70 + 0x20);
      puVar18[0x55] = local_70 + 0x18;
      puVar18[0x56] = puVar20;
      *(long **)(local_70 + 0x20) = plVar22;
      *puVar20 = plVar22;
      *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
      puVar18[0x57] = local_70;
    }
  }
  if (local_70 != 0) {
    *local_78 = (long *)local_80;
    local_80[1] = local_78;
    *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + -1;
    local_78 = (long **)0x0;
    local_70 = 0;
    local_80 = (long ***)0x0;
  }
  *(undefined4 *)((long)puVar18 + 900) = 0x43000000;
  FUN_7102626be0((long ***)&local_80,*(ulong **)(puVar18[1] + 800),(long ****)0x103744dfa2,
                 (byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = puVar18 + 0x58;
  if ((&local_80 != (long ****)plVar22) && (lVar35 = puVar18[0x5a], lVar35 != local_70)) {
    if (local_70 == 0) {
      if (lVar35 != 0) {
        lVar33 = puVar18[0x58];
        plVar34 = (long *)puVar18[0x59];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x59] = 0;
        puVar18[0x5a] = 0;
        *plVar22 = 0;
      }
    }
    else {
      if (lVar35 != 0) {
        lVar33 = *plVar22;
        plVar34 = (long *)puVar18[0x59];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x59] = 0;
        puVar18[0x5a] = 0;
        *plVar22 = 0;
      }
      puVar20 = *(undefined8 **)(local_70 + 0x20);
      puVar18[0x58] = local_70 + 0x18;
      puVar18[0x59] = puVar20;
      *(long **)(local_70 + 0x20) = plVar22;
      *puVar20 = plVar22;
      *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
      puVar18[0x5a] = local_70;
    }
  }
  if (local_70 != 0) {
    *local_78 = (long *)local_80;
    local_80[1] = local_78;
    *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + -1;
    local_78 = (long **)0x0;
    local_70 = 0;
    local_80 = (long ***)0x0;
  }
  *(undefined4 *)(puVar18 + 0x72) = 0x43000000;
  FUN_7102626be0((long ***)&local_80,*(ulong **)(puVar18[1] + 800),(long ****)0x10de277a97,
                 (byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = puVar18 + 0x5b;
  if ((&local_80 != (long ****)plVar22) && (lVar35 = puVar18[0x5d], lVar35 != local_70)) {
    if (local_70 == 0) {
      if (lVar35 != 0) {
        lVar33 = puVar18[0x5b];
        plVar34 = (long *)puVar18[0x5c];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x5c] = 0;
        puVar18[0x5d] = 0;
        *plVar22 = 0;
      }
    }
    else {
      if (lVar35 != 0) {
        lVar33 = *plVar22;
        plVar34 = (long *)puVar18[0x5c];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x5c] = 0;
        puVar18[0x5d] = 0;
        *plVar22 = 0;
      }
      puVar20 = *(undefined8 **)(local_70 + 0x20);
      puVar18[0x5b] = local_70 + 0x18;
      puVar18[0x5c] = puVar20;
      *(long **)(local_70 + 0x20) = plVar22;
      *puVar20 = plVar22;
      *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
      puVar18[0x5d] = local_70;
    }
  }
  if (local_70 != 0) {
    *local_78 = (long *)local_80;
    local_80[1] = local_78;
    *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + -1;
    local_78 = (long **)0x0;
    local_70 = 0;
    local_80 = (long ***)0x0;
  }
  *(undefined4 *)((long)puVar18 + 0x39c) = 0x44278000;
  FUN_7102626be0((long ***)&local_80,*(ulong **)(puVar18[1] + 800),(long ****)0x104043ef34,
                 (byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = puVar18 + 0x5e;
  if ((&local_80 != (long ****)plVar22) && (lVar35 = puVar18[0x60], lVar35 != local_70)) {
    if (local_70 == 0) {
      if (lVar35 != 0) {
        lVar33 = puVar18[0x5e];
        plVar34 = (long *)puVar18[0x5f];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x5f] = 0;
        puVar18[0x60] = 0;
        *plVar22 = 0;
      }
    }
    else {
      if (lVar35 != 0) {
        lVar33 = *plVar22;
        plVar34 = (long *)puVar18[0x5f];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x5f] = 0;
        puVar18[0x60] = 0;
        *plVar22 = 0;
      }
      puVar20 = *(undefined8 **)(local_70 + 0x20);
      puVar18[0x5e] = local_70 + 0x18;
      puVar18[0x5f] = puVar20;
      *(long **)(local_70 + 0x20) = plVar22;
      *puVar20 = plVar22;
      *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
      puVar18[0x60] = local_70;
    }
  }
  if (local_70 != 0) {
    *local_78 = (long *)local_80;
    local_80[1] = local_78;
    *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + -1;
    local_78 = (long **)0x0;
    local_70 = 0;
    local_80 = (long ***)0x0;
  }
  *(undefined4 *)(puVar18 + 0x75) = 0x44278000;
  FUN_7102626be0((long ***)&local_80,*(ulong **)(puVar18[1] + 800),(long ****)0x10a9204a01,
                 (byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = puVar18 + 0x61;
  if ((&local_80 != (long ****)plVar22) && (lVar35 = puVar18[99], lVar35 != local_70)) {
    if (local_70 == 0) {
      if (lVar35 != 0) {
        lVar33 = puVar18[0x61];
        plVar34 = (long *)puVar18[0x62];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x62] = 0;
        puVar18[99] = 0;
        *plVar22 = 0;
      }
    }
    else {
      if (lVar35 != 0) {
        lVar33 = *plVar22;
        plVar34 = (long *)puVar18[0x62];
        *plVar34 = lVar33;
        *(long **)(lVar33 + 8) = plVar34;
        *(long *)(lVar35 + 0x10) = *(long *)(lVar35 + 0x10) + -1;
        puVar18[0x62] = 0;
        puVar18[99] = 0;
        *plVar22 = 0;
      }
      puVar20 = *(undefined8 **)(local_70 + 0x20);
      puVar18[0x61] = local_70 + 0x18;
      puVar18[0x62] = puVar20;
      *(long **)(local_70 + 0x20) = plVar22;
      *puVar20 = plVar22;
      *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
      puVar18[99] = local_70;
    }
  }
  if (local_70 != 0) {
    *local_78 = (long *)local_80;
    local_80[1] = local_78;
    *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + -1;
    local_78 = (long **)0x0;
    local_70 = 0;
    local_80 = (long ***)0x0;
  }
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)0x0,(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  puVar18[100] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)0x1,(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  puVar18[0x65] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)0x2,(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  puVar18[0x66] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)0x3,(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  puVar18[0x67] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)&DAT_00000004,(byte ****)pcVar31,pppplVar32,
                 param_6,param_7,param_8);
  puVar18[0x68] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)0x5,(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  puVar18[0x69] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)0x6,(byte ****)pcVar31,pppplVar32,param_6,
                 param_7,param_8);
  pppplVar29 = (long ****)&DAT_00000007;
  puVar18[0x6a] = local_80;
  FUN_7102eb0f30(&local_80,(long)puVar18,(long ****)&DAT_00000007,(byte ****)pcVar31,pppplVar32,
                 param_6,param_7,param_8);
  puVar18[0x6b] = local_80;
  DAT_710532e758 = 0xc1480000;
  DAT_7105146a90 = 0x41480000;
  DAT_7105146a94 = 0x43700000;
  DAT_710532e760 = 1;
  DAT_710532e75c = 0;
  DAT_710532e764 = 0xbf800000;
  DAT_7105146a98 = 0x43700000;
  DAT_710532e768 = 0;
  DAT_710532e76c = 1;
  puVar18[0xd] = FUN_7102eb07b0;
  puVar18[0xe] = 0;
  *(undefined1 *)((long)puVar18 + 0x361) = 0;
  puVar18[9] = FUN_7102eafd40;
  puVar18[10] = 0;
  *(undefined1 *)((long)puVar18 + 0xa9) = 0;
  *(undefined1 *)(puVar18 + 0x4c) = 0;
  *(undefined2 *)((long)puVar18 + 0xca) = 0;
  puVar18[0xb] = FUN_7102eb02e0;
  puVar18[0xc] = 0;
  puVar18[0xf] = FUN_7102eb09f0;
  puVar18[0x10] = 0;
  puVar18[0x11] = FUN_7102eb0c50;
  puVar18[0x12] = 0;
  puVar18[0x13] = FUN_7102eb0da0;
  puVar18[0x14] = 0;
  plVar22 = (long *)puVar37[0x5b];
  puVar37[0x5b] = (ulong)puVar18;
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 8))();
  }
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x120,pppplVar29,(byte ****)pcVar31,pppplVar32,param_6,param_7,
                           param_8);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000120;
      uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar19 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x120,pppplVar30,(byte ****)pcVar31,pppplVar32,param_6,
                                   param_7,param_8), puVar18 != (undefined8 *)0x0))
      goto LAB_7102ea869c;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_7102ea869c:
  FUN_7102ea9920(puVar18,*puVar37,pppplVar24,(byte ****)pcVar31,pppplVar32,param_6,param_7,param_8);
  plVar22 = (long *)puVar37[0x5c];
  puVar37[0x5c] = (ulong)puVar18;
  if (plVar22 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007102ea86dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar22 + 8))();
  return;
}

