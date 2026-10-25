// addr:      71027f5470
// offset:    0x27f5470
// name:      FUN_71027f5470
// mangled:   
// signature: undefined __cdecl FUN_71027f5470(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71027f5470(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  float *pfVar14;
  long *plVar15;
  long *plVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  long ***local_140;
  undefined8 *puStack_138;
  long *local_120;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar9 = &local_140;
  pppplVar8 = &local_140;
  pppplVar10 = &local_140;
  uVar11 = *(undefined8 *)(param_2 + 0x338);
  *(undefined1 *)((long)param_1 + 0x11) = 0;
  *(byte *)(param_1 + 2) = (byte)param_4 & 1;
  *param_1 = uVar11;
  param_1[1] = param_3;
  puVar17 = param_1 + 3;
  *puVar17 = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  plVar4 = (long *)FUN_710392e290(0x10,0x58,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_140 = (long ***)&DAT_00000058;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      param_3 = pppplVar9;
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x58,pppplVar9,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar9, plVar4 != (long *)0x0))
      goto LAB_71027f5518;
    }
    plVar4 = (long *)0x0;
  }
LAB_71027f5518:
  *plVar4 = 0;
  for (plVar6 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar6 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar6 = plVar6 + 2) {
    if ((*(uint *)(plVar6 + 1) < 2) && (lVar18 = *plVar6, *(long *)(lVar18 + 0x68) == 0x806ae66ff))
    {
      *plVar4 = lVar18;
      lVar19 = 0;
      if (lVar18 == 0) goto LAB_71027f5568;
      if (*(long *)(lVar18 + 0xd8) == 0) {
        plVar6 = FUN_71026533a0((undefined8 *)(lVar18 + 0x90),0,param_3,param_4,param_5,param_6,
                                param_7,param_8);
        plVar13 = *(long **)(lVar18 + 0xd8);
        *(long **)(lVar18 + 0xd8) = plVar6;
        if (plVar13 != (long *)0x0) {
          (**(code **)(*plVar13 + 8))();
        }
      }
      lVar19 = *plVar4;
      if (lVar19 == 0) goto LAB_71027f5568;
      if (*(long *)(lVar19 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
        lVar19 = *plVar4;
        if (lVar19 == 0) goto LAB_71027f5568;
      }
      if (*(long *)(lVar19 + 0xd8) != 0) {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood01N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 1) = uVar3;
        if (lVar19 != 0) goto LAB_71027f5714;
        *(undefined4 *)((long)plVar4 + 0xc) = 0xffffffff;
LAB_71027f5744:
        *(undefined4 *)(plVar4 + 2) = 0xffffffff;
LAB_71027f5788:
        *(undefined4 *)((long)plVar4 + 0x14) = 0xffffffff;
LAB_71027f5790:
        *(undefined4 *)(plVar4 + 3) = 0xffffffff;
LAB_71027f5798:
        *(undefined4 *)((long)plVar4 + 0x1c) = 0xffffffff;
LAB_71027f57a0:
        *(undefined4 *)(plVar4 + 4) = 0xffffffff;
LAB_71027f57a8:
        *(undefined4 *)((long)plVar4 + 0x24) = 0xffffffff;
LAB_71027f57b0:
        *(undefined4 *)(plVar4 + 5) = 0xffffffff;
LAB_71027f57b8:
        *(undefined4 *)((long)plVar4 + 0x2c) = 0xffffffff;
LAB_71027f57c0:
        *(undefined4 *)(plVar4 + 6) = 0xffffffff;
LAB_71027f57c8:
        *(undefined4 *)((long)plVar4 + 0x34) = 0xffffffff;
LAB_71027f57d0:
        *(undefined4 *)(plVar4 + 7) = 0xffffffff;
LAB_71027f57d8:
        *(undefined4 *)((long)plVar4 + 0x3c) = 0xffffffff;
        *(undefined4 *)(plVar4 + 8) = 0xffffffff;
        goto LAB_71027f57ec;
      }
      *(undefined4 *)(plVar4 + 1) = 0xffffffff;
LAB_71027f5714:
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0xc) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood02N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0xc) = uVar3;
        if (lVar19 == 0) goto LAB_71027f5744;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)(plVar4 + 2) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood03N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 2) = uVar3;
        if (lVar19 == 0) goto LAB_71027f5788;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0x14) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood04N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0x14) = uVar3;
        if (lVar19 == 0) goto LAB_71027f5790;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)(plVar4 + 3) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood05N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 3) = uVar3;
        if (lVar19 == 0) goto LAB_71027f5798;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0x1c) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood06N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0x1c) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57a0;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)(plVar4 + 4) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood07N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 4) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57a8;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0x24) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood08N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0x24) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57b0;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)(plVar4 + 5) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood09N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 5) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57b8;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0x2c) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood10N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0x2c) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57c0;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)(plVar4 + 6) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood11N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 6) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57c8;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0x34) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood12N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0x34) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57d0;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)(plVar4 + 7) = 0xffffffff;
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood13N");
        lVar19 = *plVar4;
        *(undefined4 *)(plVar4 + 7) = uVar3;
        if (lVar19 == 0) goto LAB_71027f57d8;
      }
      if (*(long *)(lVar19 + 0xd8) == 0) {
        *(undefined4 *)((long)plVar4 + 0x3c) = 0xffffffff;
LAB_71027f6504:
        if (*(long *)(lVar19 + 0xd8) != 0) {
          plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
          uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood15N");
          lVar19 = *plVar4;
          *(undefined4 *)(plVar4 + 8) = uVar3;
          goto joined_r0x0071027f6530;
        }
      }
      else {
        plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood14N");
        lVar19 = *plVar4;
        *(undefined4 *)((long)plVar4 + 0x3c) = uVar3;
        if (lVar19 != 0) goto LAB_71027f6504;
      }
      *(undefined4 *)(plVar4 + 8) = 0xffffffff;
      goto joined_r0x0071027f6530;
    }
  }
  lVar19 = 0;
  *plVar4 = 0;
LAB_71027f5568:
  *(undefined4 *)(plVar4 + 8) = 0xffffffff;
  plVar4[6] = -1;
  plVar4[7] = -1;
  plVar4[1] = -1;
  plVar4[4] = -1;
  plVar4[5] = -1;
  plVar4[2] = -1;
  plVar4[3] = -1;
joined_r0x0071027f6530:
  if (lVar19 == 0) {
LAB_71027f57ec:
    *(undefined4 *)((long)plVar4 + 0x44) = 0xffffffff;
LAB_71027f57f4:
    *(undefined4 *)(plVar4 + 9) = 0xffffffff;
LAB_71027f57fc:
    uVar3 = 0xffffffff;
    *(undefined4 *)((long)plVar4 + 0x4c) = 0xffffffff;
  }
  else {
    if (*(long *)(lVar19 + 0xd8) == 0) {
      *(undefined4 *)((long)plVar4 + 0x44) = 0xffffffff;
      lVar18 = *(long *)(lVar19 + 0xd8);
      if (lVar18 != 0) goto LAB_71027f55c0;
LAB_71027f5650:
      *(undefined4 *)(plVar4 + 9) = 0xffffffff;
      lVar18 = *(long *)(lVar19 + 0xd8);
      if (lVar18 != 0) goto LAB_71027f55f0;
LAB_71027f5660:
      *(undefined4 *)((long)plVar4 + 0x4c) = 0xffffffff;
      lVar18 = *(long *)(lVar19 + 0xd8);
joined_r0x0071027f561c:
      if (lVar18 != 0) {
        plVar6 = *(long **)(*(long *)(lVar18 + 8) + 8);
        uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood13N_joint3");
        goto LAB_71027f5804;
      }
    }
    else {
      plVar6 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood03N_joint2");
      lVar19 = *plVar4;
      *(undefined4 *)((long)plVar4 + 0x44) = uVar3;
      if (lVar19 == 0) goto LAB_71027f57f4;
      lVar18 = *(long *)(lVar19 + 0xd8);
      if (lVar18 == 0) goto LAB_71027f5650;
LAB_71027f55c0:
      plVar6 = *(long **)(*(long *)(lVar18 + 8) + 8);
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood13N_joint2");
      lVar19 = *plVar4;
      *(undefined4 *)(plVar4 + 9) = uVar3;
      if (lVar19 == 0) goto LAB_71027f57fc;
      lVar18 = *(long *)(lVar19 + 0xd8);
      if (lVar18 == 0) goto LAB_71027f5660;
LAB_71027f55f0:
      plVar6 = *(long **)(*(long *)(lVar18 + 8) + 8);
      uVar3 = (**(code **)(*plVar6 + 0x18))(plVar6,"Wood03N_joint3");
      *(undefined4 *)((long)plVar4 + 0x4c) = uVar3;
      if (*plVar4 != 0) {
        lVar18 = *(long *)(*plVar4 + 0xd8);
        goto joined_r0x0071027f561c;
      }
    }
    uVar3 = 0xffffffff;
  }
LAB_71027f5804:
  *(undefined4 *)(plVar4 + 10) = uVar3;
  uVar5 = *puVar17;
  *puVar17 = (ulong)plVar4;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  plVar4 = (long *)FUN_710392e290(0x10,0x260,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_140 = (long ***)0x260;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x260,pppplVar8,param_4,param_5,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_71027f5874;
    }
    plVar4 = (long *)0x0;
  }
LAB_71027f5874:
  pppplVar9 = (long ****)&DAT_00000210;
  local_140 = (long ***)&PTR_FUN_71050e4a68;
  puStack_138 = param_1;
  local_120 = (long *)&local_140;
  memset(plVar4,0,0x210);
  plVar4[0x46] = (long)(plVar4 + 0x42);
  FUN_71027f8880((long)&local_140,plVar4 + 0x42);
  plVar4[0x4a] = 0;
  plVar4[0x49] = 0;
  plVar4[0x48] = (long)(plVar4 + 0x49);
  plVar13 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
  plVar6 = (long *)*plVar13;
  do {
    if (plVar6 == (long *)plVar13[1]) goto LAB_71027f5b38;
    lVar18 = *plVar6;
    plVar6 = plVar6 + 1;
  } while ((*(ulong *)(lVar18 + 0xa0) & 0xffffffffff) != 0xc2c84ed18);
  plVar6 = *(long **)(lVar18 + 0x110);
  if ((plVar6 != (long *)0x0) && ((long *)*plVar6 != (long *)plVar6[1])) {
    lVar18 = *(long *)*plVar6;
    *plVar4 = lVar18;
    uVar22 = uRam0000007107459008;
    uVar11 = _ConstantZero;
    if (*(char *)(lVar18 + 0x128) == '\0' ||
        (*(char *)(*(long *)(lVar18 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar18 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar18 + 0x129) = 1;
LAB_71027f5988:
      *(undefined8 *)(lVar18 + 0x18) = uVar22;
      *(undefined8 *)(lVar18 + 0x10) = uVar11;
    }
    else if ((1e-05 < ABS((float)*(undefined8 *)(lVar18 + 0x10) - (float)_ConstantZero)) ||
            (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar18 + 0x10) >> 0x20) -
                         (float)((ulong)_ConstantZero >> 0x20)))) {
      *(undefined1 *)(lVar18 + 0x12a) = 1;
      goto LAB_71027f5988;
    }
    if (1e-05 <= ABS(*(float *)(lVar18 + 0x30))) {
      *(undefined4 *)(lVar18 + 0x30) = 0;
      *(undefined1 *)(lVar18 + 0x129) = 1;
    }
    uVar22 = *(undefined8 *)(lVar18 + 0x58);
    uVar11 = *(undefined8 *)(lVar18 + 0x50);
    if (1e-05 <= ABS((float)uVar11 + -1.0)) {
      uVar11 = CONCAT44((int)((ulong)uVar11 >> 0x20),0x3f800000);
      *(undefined1 *)(lVar18 + 0x129) = 1;
      *(undefined8 *)(lVar18 + 0x58) = uVar22;
      *(undefined8 *)(lVar18 + 0x50) = uVar11;
    }
    if (1e-05 <= ABS((float)((ulong)uVar11 >> 0x20) + -1.0)) {
      *(undefined1 *)(lVar18 + 0x129) = 1;
      *(undefined8 *)(lVar18 + 0x58) = uVar22;
      *(ulong *)(lVar18 + 0x50) = CONCAT44(0x3f800000,(int)uVar11);
    }
    lVar19 = *plVar4;
    lVar18 = *(long *)(lVar19 + 0x60);
    if (lVar18 != 0) {
      sVar2 = *(short *)(lVar18 + 8) + -1;
      *(short *)(lVar18 + 8) = sVar2;
      if ((sVar2 < 1) && (*(long **)(lVar19 + 0x60) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar19 + 0x60) + 8))();
      }
      *(undefined8 *)(lVar19 + 0x60) = 0;
    }
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_50 = (long ***)&SUB_00000020;
        pppplVar9 = &local_50;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar5 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8),
           puVar7 != (undefined8 *)0x0)) goto LAB_71027f5a94;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71027f5a94:
    *(undefined4 *)(puVar7 + 1) = 0x10001;
    *puVar7 = &PTR_FUN_710507f650;
    puVar7[2] = plVar4;
    puVar7[3] = FUN_71027f82e0;
    *(undefined8 **)(lVar19 + 0x60) = puVar7;
    lVar18 = *(long *)(*plVar4 + 8);
    uVar1 = *(uint *)(lVar18 + 0x60);
    plVar4[1] = (ulong)uVar1;
    plVar6 = (long *)(lVar18 + 0x68);
    plVar13 = (long *)*plVar6;
    if ((plVar6 != plVar13) && ((ulong)uVar1 != 0)) {
      uVar5 = 0;
      plVar15 = plVar4;
      do {
        plVar15[3] = plVar13[3];
        plVar15[2] = plVar13[2];
        plVar13 = (long *)*plVar13;
        if (plVar6 == plVar13) break;
        uVar5 = uVar5 + 1;
        plVar15 = plVar15 + 2;
      } while (uVar5 < (ulong)plVar4[1]);
    }
    for (plVar6 = *(long **)(lVar18 + 0x80); (long *)(lVar18 + 0x80) != plVar6;
        plVar6 = (long *)*plVar6) {
      *(undefined1 *)((long)plVar6 + 0xe9) = 0;
      *(undefined4 *)((long)plVar6 + 0xc4) = 0x800;
    }
  }
LAB_71027f5b38:
  if (&local_140 == (long ****)local_120) {
    pcVar12 = *(code **)(*local_120 + 0x20);
LAB_71027f5b5c:
    (*pcVar12)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar12 = *(code **)(*local_120 + 0x28);
    goto LAB_71027f5b5c;
  }
  uVar5 = param_1[4];
  param_1[4] = plVar4;
  if (uVar5 != 0) {
    FUN_71027f6550(*(undefined8 **)(uVar5 + 0x248));
    plVar4 = *(long **)(uVar5 + 0x230);
    if ((long *)(uVar5 + 0x210) == plVar4) {
      pcVar12 = *(code **)(*plVar4 + 0x20);
LAB_71027f5b9c:
      (*pcVar12)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar12 = *(code **)(*plVar4 + 0x28);
      goto LAB_71027f5b9c;
    }
    FUN_710392eb40(uVar5);
  }
  plVar4 = (long *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_50 = (long ***)((ulong)local_50 & 0xffffffff00000000);
      local_140 = (long ***)&SUB_00000020;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_50);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_71027f5bfc;
    }
    plVar4 = (long *)0x0;
  }
LAB_71027f5bfc:
  plVar4[2] = 0;
  plVar4[3] = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  lVar18 = *(long *)(param_2 + 0x300);
  plVar6 = (long *)**(long **)(lVar18 + 0x18);
  plVar13 = (long *)(*(long **)(lVar18 + 0x18))[1];
  plVar15 = plVar6;
  if (plVar6 != plVar13) {
    do {
      plVar16 = plVar15 + 1;
      lVar19 = *plVar15;
      if ((*(ulong *)(lVar19 + 0xa0) & 0xffffffffff) == 0xccf348e04) {
        plVar15 = *(long **)(lVar19 + 0x110);
        if ((plVar15 != (long *)0x0) && (*plVar15 != plVar15[1])) {
          *plVar4 = lVar19;
          plVar6 = (long *)**(long **)(lVar18 + 0x18);
          plVar13 = (long *)(*(long **)(lVar18 + 0x18))[1];
        }
        break;
      }
      plVar15 = plVar16;
    } while (plVar13 != plVar16);
    plVar15 = plVar6;
    if (plVar6 != plVar13) {
      do {
        plVar16 = plVar15 + 1;
        lVar19 = *plVar15;
        if ((*(ulong *)(lVar19 + 0xa0) & 0xffffffffff) == 0x924db402d) {
          plVar15 = *(long **)(lVar19 + 0x110);
          if ((plVar15 != (long *)0x0) && (*plVar15 != plVar15[1])) {
            plVar4[1] = lVar19;
            plVar6 = (long *)**(long **)(lVar18 + 0x18);
            plVar13 = (long *)(*(long **)(lVar18 + 0x18))[1];
          }
          break;
        }
        plVar15 = plVar16;
      } while (plVar13 != plVar16);
      plVar15 = plVar6;
      if (plVar6 != plVar13) {
        do {
          plVar16 = plVar15 + 1;
          lVar19 = *plVar15;
          if ((*(ulong *)(lVar19 + 0xa0) & 0xffffffffff) == 0xcab3617e7) {
            plVar15 = *(long **)(lVar19 + 0x110);
            if ((plVar15 != (long *)0x0) && (*plVar15 != plVar15[1])) {
              plVar4[2] = lVar19;
              plVar13 = (long *)(*(long **)(lVar18 + 0x18))[1];
              plVar6 = (long *)**(long **)(lVar18 + 0x18);
            }
            break;
          }
          plVar15 = plVar16;
        } while (plVar13 != plVar16);
        do {
          if (plVar6 == plVar13) goto LAB_71027f5d64;
          lVar18 = *plVar6;
          plVar6 = plVar6 + 1;
        } while ((*(ulong *)(lVar18 + 0xa0) & 0xffffffffff) != 0x91d0723c6);
        plVar6 = *(long **)(lVar18 + 0x110);
        if ((plVar6 != (long *)0x0) && (*plVar6 != plVar6[1])) {
          plVar4[3] = lVar18;
        }
      }
    }
  }
LAB_71027f5d64:
  uVar5 = param_1[5];
  param_1[5] = plVar4;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  fVar20 = *(float *)(param_1[1] + 0x14c);
  fVar21 = -fVar20;
  fVar23 = (float)NEON_fminnm(fVar20,0x40800000);
  fVar35 = fVar21;
  if (-4.0 <= fVar20) {
    fVar35 = fVar23;
  }
  fVar24 = (float)NEON_fminnm(fVar20,0);
  fVar23 = fVar21;
  if (-0.0 <= fVar20) {
    fVar23 = fVar24;
  }
  fVar25 = (float)NEON_fminnm(fVar20,0xc0400000);
  fVar36 = (float)NEON_fminnm(fVar20,0x40400000);
  fVar24 = fVar21;
  if (3.0 <= fVar20) {
    fVar24 = fVar25;
  }
  fVar26 = (float)NEON_fminnm(fVar20,0xc0c00000);
  fVar25 = fVar21;
  if (6.0 <= fVar20) {
    fVar25 = fVar26;
  }
  fVar27 = (float)NEON_fminnm(fVar20,0xc1000000);
  fVar26 = fVar21;
  if (8.0 <= fVar20) {
    fVar26 = fVar27;
  }
  fVar28 = (float)NEON_fminnm(fVar20,0xc1100000);
  fVar27 = fVar21;
  if (9.0 <= fVar20) {
    fVar27 = fVar28;
  }
  fVar29 = (float)NEON_fminnm(fVar20,0xc1400000);
  fVar28 = fVar21;
  if (12.0 <= fVar20) {
    fVar28 = fVar29;
  }
  fVar30 = (float)NEON_fminnm(fVar20,0xc1580000);
  fVar29 = fVar21;
  if (13.5 <= fVar20) {
    fVar29 = fVar30;
  }
  fVar31 = (float)NEON_fminnm(fVar20,0xc1280000);
  fVar30 = fVar21;
  if (10.5 <= fVar20) {
    fVar30 = fVar31;
  }
  fVar32 = (float)NEON_fminnm(fVar20,0xc0f00000);
  fVar31 = fVar21;
  if (7.5 <= fVar20) {
    fVar31 = fVar32;
  }
  fVar33 = (float)NEON_fminnm(fVar20,0xc0900000);
  fVar32 = fVar21;
  if (4.5 <= fVar20) {
    fVar32 = fVar33;
  }
  fVar34 = (float)NEON_fminnm(fVar20,0xbfc00000);
  fVar33 = fVar21;
  if (1.5 <= fVar20) {
    fVar33 = fVar34;
  }
  fVar34 = fVar21;
  if (-3.0 <= fVar20) {
    fVar34 = fVar36;
  }
  fVar36 = (float)NEON_fminnm(fVar20,0x40c00000);
  if (-6.0 <= fVar20) {
    fVar21 = fVar36;
  }
  if ((ulong)param_1[0x2c] < 0xf) {
    puVar7 = param_1 + 6;
    pfVar14 = (float *)((long)puVar7 + param_1[0x2c] * 0x14);
    puVar17 = param_1 + 0x2c;
    pfVar14[1] = 0.0;
    *pfVar14 = fVar35 * 0.017453292;
    pfVar14[2] = fVar35 * 0.017453292;
    pfVar14[3] = 0.0;
    pfVar14[4] = 0.0;
    uVar5 = *puVar17 + 1;
    *puVar17 = uVar5;
    if (uVar5 < 0xf) {
      fVar23 = fVar23 * 0.017453292;
      pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
      *pfVar14 = fVar23;
      pfVar14[1] = 0.0;
      pfVar14[2] = fVar23;
      pfVar14[3] = 0.0;
      pfVar14[4] = 0.0;
      uVar5 = *puVar17 + 1;
      *puVar17 = uVar5;
      if (uVar5 < 0xf) {
        pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
        *pfVar14 = fVar24 * 0.017453292;
        pfVar14[1] = 0.0;
        pfVar14[2] = fVar24 * 0.017453292;
        pfVar14[3] = 0.0;
        pfVar14[4] = 0.0;
        uVar5 = *puVar17 + 1;
        *puVar17 = uVar5;
        if (uVar5 < 0xf) {
          pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
          *pfVar14 = fVar25 * 0.017453292;
          pfVar14[1] = 0.0;
          pfVar14[2] = fVar25 * 0.017453292;
          pfVar14[3] = 0.0;
          pfVar14[4] = 0.0;
          uVar5 = *puVar17 + 1;
          *puVar17 = uVar5;
          if (uVar5 < 0xf) {
            pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
            *pfVar14 = fVar26 * 0.017453292;
            pfVar14[1] = 0.0;
            pfVar14[2] = fVar26 * 0.017453292;
            pfVar14[3] = 0.0;
            pfVar14[4] = 0.0;
            uVar5 = *puVar17 + 1;
            *puVar17 = uVar5;
            if (uVar5 < 0xf) {
              pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
              *pfVar14 = fVar27 * 0.017453292;
              pfVar14[1] = 0.0;
              pfVar14[2] = fVar27 * 0.017453292;
              pfVar14[3] = 0.0;
              pfVar14[4] = 0.0;
              uVar5 = *puVar17 + 1;
              *puVar17 = uVar5;
              if (uVar5 < 0xf) {
                pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                *pfVar14 = fVar28 * 0.017453292;
                pfVar14[1] = 0.0;
                pfVar14[2] = fVar28 * 0.017453292;
                pfVar14[3] = 0.0;
                pfVar14[4] = 0.0;
                uVar5 = *puVar17 + 1;
                *puVar17 = uVar5;
                if (uVar5 < 0xf) {
                  pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                  *pfVar14 = fVar29 * 0.017453292;
                  pfVar14[1] = 0.0;
                  pfVar14[2] = fVar29 * 0.017453292;
                  pfVar14[3] = 0.0;
                  pfVar14[4] = 0.0;
                  uVar5 = *puVar17 + 1;
                  *puVar17 = uVar5;
                  if (uVar5 < 0xf) {
                    pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                    *pfVar14 = fVar30 * 0.017453292;
                    pfVar14[1] = 0.0;
                    pfVar14[2] = fVar30 * 0.017453292;
                    pfVar14[3] = 0.0;
                    pfVar14[4] = 0.0;
                    uVar5 = *puVar17 + 1;
                    *puVar17 = uVar5;
                    if (uVar5 < 0xf) {
                      pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                      *pfVar14 = fVar31 * 0.017453292;
                      pfVar14[1] = 0.0;
                      pfVar14[2] = fVar31 * 0.017453292;
                      pfVar14[3] = 0.0;
                      pfVar14[4] = 0.0;
                      uVar5 = *puVar17 + 1;
                      *puVar17 = uVar5;
                      if (uVar5 < 0xf) {
                        pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                        *pfVar14 = fVar32 * 0.017453292;
                        pfVar14[1] = 0.0;
                        pfVar14[2] = fVar32 * 0.017453292;
                        pfVar14[3] = 0.0;
                        pfVar14[4] = 0.0;
                        uVar5 = *puVar17 + 1;
                        *puVar17 = uVar5;
                        if (uVar5 < 0xf) {
                          pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                          *pfVar14 = fVar33 * 0.017453292;
                          pfVar14[1] = 0.0;
                          pfVar14[2] = fVar33 * 0.017453292;
                          pfVar14[3] = 0.0;
                          pfVar14[4] = 0.0;
                          uVar5 = *puVar17 + 1;
                          *puVar17 = uVar5;
                          if (uVar5 < 0xf) {
                            pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                            *pfVar14 = fVar23;
                            pfVar14[1] = 0.0;
                            pfVar14[2] = fVar23;
                            pfVar14[3] = 0.0;
                            pfVar14[4] = 0.0;
                            uVar5 = *puVar17 + 1;
                            *puVar17 = uVar5;
                            if (uVar5 < 0xf) {
                              pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                              *pfVar14 = fVar34 * 0.017453292;
                              pfVar14[1] = 0.0;
                              pfVar14[2] = fVar34 * 0.017453292;
                              pfVar14[3] = 0.0;
                              pfVar14[4] = 0.0;
                              uVar5 = *puVar17 + 1;
                              *puVar17 = uVar5;
                              if (uVar5 < 0xf) {
                                pfVar14 = (float *)((long)puVar7 + uVar5 * 0x14);
                                *pfVar14 = fVar21 * 0.017453292;
                                pfVar14[1] = 0.0;
                                pfVar14[2] = fVar21 * 0.017453292;
                                pfVar14[3] = 0.0;
                                pfVar14[4] = 0.0;
                                param_1[0x2c] = param_1[0x2c] + 1;
                                uVar5 = param_1[0x31];
                                if (uVar5 < 2) {
                                  param_1[uVar5 * 2 + 0x2d] = 2;
                                  (param_1 + uVar5 * 2 + 0x2d)[1] = 0;
                                  param_1[0x31] = param_1[0x31] + 1;
                                  if ((ulong)param_1[0x34] < 2) {
                                    param_1[param_1[0x34] + 0x32] = 0;
                                    param_1[0x34] = param_1[0x34] + 1;
                                    uVar5 = param_1[0x31];
                                    if (uVar5 < 2) {
                                      param_1[uVar5 * 2 + 0x2d] = 0xc;
                                      (param_1 + uVar5 * 2 + 0x2d)[1] = 0;
                                      param_1[0x31] = param_1[0x31] + 1;
                                      if ((ulong)param_1[0x34] < 2) {
                                        param_1[param_1[0x34] + 0x32] = 0;
                                        param_1[0x34] = param_1[0x34] + 1;
                                        if ((param_1[0x31] != 0) &&
                                           (param_1[0x2e] = 0x3db2b8c23cb46ffc, param_1[0x31] != 1))
                                        {
                                          param_1[0x30] = 0xbdb2b8c200000000;
                                          FUN_71027f6590((long *)param_1[3],(long)puVar7);
                                          FUN_71027f7190((float *)&local_140,(long *)param_1[4],
                                                         (long)puVar7);
                                          FUN_71027f79b0(param_1[5],(long)puVar7);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

