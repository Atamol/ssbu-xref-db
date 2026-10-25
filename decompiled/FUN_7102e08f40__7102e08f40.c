// addr:      7102e08f40
// offset:    0x2e08f40
// name:      FUN_7102e08f40
// mangled:   
// signature: undefined __cdecl FUN_7102e08f40(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102e08f40(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ***ppplVar11;
  long ****pppplVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  char *pcVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long ****pppplVar21;
  ulong *puVar22;
  undefined8 uVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  long ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long ***local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_64;
  
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      param_3 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7102e08fc0;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e08fc0:
  uVar23 = *(undefined8 *)(param_1 + 8);
  *puVar7 = &PTR_FUN_710513f810;
  puVar9 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&SUB_00000020;
      param_3 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar9 != (undefined8 *)0x0)) goto LAB_7102e09024;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7102e09024:
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = uVar23;
  puVar9[1] = 0;
  puVar7[1] = puVar9;
  plVar10 = *(long **)(param_1 + 0x350);
  *(undefined8 **)(param_1 + 0x350) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
    puVar7 = *(undefined8 **)(param_1 + 0x350);
  }
  FUN_7102dfe700((long *)puVar7[1],(byte *)"stc_f01_fireroom_bg_set",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7102dfe700(*(long **)(*(long *)(param_1 + 0x350) + 8),
                 (byte *)"stc_f01_fireroom_blend_buffer_set",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  lVar18 = *(long *)(*(long *)(param_1 + 0x350) + 8);
  if (lVar18 != 0) {
    plVar24 = *(long **)(lVar18 + 0x10);
    uVar23 = extraout_x1;
    for (plVar10 = *(long **)(lVar18 + 8); plVar10 != plVar24; plVar10 = plVar10 + 1) {
      lVar18 = *plVar10;
      if (lVar18 != 0) {
        *(undefined1 *)(lVar18 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar18 + 0x108),uVar23,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        lVar18 = *plVar10;
        uVar23 = extraout_x1_00;
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x118) = *(byte *)(lVar18 + 0x118) | 1;
        }
      }
    }
  }
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7102e09118;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e09118:
  pppplVar12 = *(long *****)(param_1 + 0x18);
  pcVar15 = "stc_f01_yakumono_fire_surinuke_set";
  pppplVar17 = (long ****)0x1;
  FUN_7102e1d840(puVar7,*(long *)(param_1 + 8),pppplVar12,
                 (byte ****)"stc_f01_yakumono_fire_surinuke_set",(long ****)0x1,param_6,param_7,
                 param_8);
  plVar10 = *(long **)(param_1 + 0x368);
  *(undefined8 **)(param_1 + 0x368) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar12,(byte ****)pcVar15,pppplVar17,param_6,param_7,param_8
                         );
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar12,(byte ****)pcVar15,pppplVar17,param_6,param_7
                                  ,param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102e091a8;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e091a8:
  ppppbVar13 = *(byte *****)(param_1 + 0x18);
  FUN_7102e10f10(puVar7,*(long *)(param_1 + 8),ppppbVar13,(byte ****)pcVar15,pppplVar17,param_6,
                 param_7,param_8);
  plVar10 = *(long **)(param_1 + 0x358);
  *(undefined8 **)(param_1 + 0x358) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,(byte ****)pcVar15,pppplVar17,param_6,
                          param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar12,(byte ****)pcVar15,pppplVar17,param_6,param_7
                                  ,param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102e0922c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e0922c:
  pppplVar12 = *(long *****)(param_1 + 0x18);
  pcVar15 = "stc_f01_fire_kakou_set";
  pppplVar17 = (long ****)0x0;
  FUN_7102e1d840(puVar7,*(long *)(param_1 + 8),pppplVar12,(byte ****)"stc_f01_fire_kakou_set",
                 (long ****)0x0,param_6,param_7,param_8);
  plVar10 = *(long **)(param_1 + 0x370);
  *(undefined8 **)(param_1 + 0x370) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
    puVar7 = *(undefined8 **)(param_1 + 0x370);
  }
  plVar24 = (long *)puVar7[1];
  plVar10 = (long *)plVar24[1];
  if (plVar10 != (long *)0x0) {
    if (((*(float *)(plVar24 + 3) < -400.0) && (*(float *)((long)plVar24 + 0x14) < -400.0)) &&
       ((char)plVar24[2] == '\0')) {
      pppplVar12 = (long ****)0x1;
      FUN_71025f4d80((long *)*plVar10,(long *)plVar10[1],1);
      *(undefined1 *)(plVar24 + 2) = 1;
      plVar10 = (long *)plVar24[1];
    }
    *(undefined4 *)(plVar24 + 3) = 0xc3c80000;
  }
  lVar18 = *plVar24;
  uStack_e8 = 0;
  local_f0 = (long ***)&DAT_3f800000;
  local_d8 = 0;
  local_e0 = 0x3f80000000000000;
  uStack_c8 = 0x3f800000;
  local_d0 = 0;
  uStack_b8 = 0x3f80000000000000;
  local_c0 = 0xc3c8000000000000;
  if (lVar18 != 0) {
    (**(code **)(**(long **)(lVar18 + 0x90) + 0x148))(*(long **)(lVar18 + 0x90),&local_f0);
    lVar18 = *(long *)(lVar18 + 0xd8);
    if (lVar18 != 0) {
      local_98 = local_d8;
      local_a0 = local_e0;
      local_a8 = uStack_e8;
      local_b0 = local_f0;
      local_78 = uStack_b8;
      local_80 = local_c0;
      local_88 = uStack_c8;
      local_90 = local_d0;
      if (*(char *)(*(long *)(lVar18 + 8) + 0xa8) != '\0') {
        plVar24 = *(long **)(*(long *)(lVar18 + 8) + 0x48);
        (**(code **)(*plVar24 + 0x20))(plVar24,&local_b0);
      }
      *(undefined1 *)(lVar18 + 0x20) = 1;
    }
  }
  if (plVar10 != (long *)0x0) {
    plVar24 = (long *)*plVar10;
    plVar10 = (long *)plVar10[1];
    if (plVar24 != plVar10) {
      do {
        lVar18 = *plVar24;
        if (*(char *)(lVar18 + 0x128) == '\0' ||
            (*(char *)(*(long *)(lVar18 + 8) + 0xe8) != '\0' ||
            *(char *)(*(long *)(lVar18 + 8) + 0xe7) != '\0')) {
          *(undefined1 *)(lVar18 + 0x129) = 1;
LAB_7102e093f8:
          *(undefined8 *)(lVar18 + 0x18) = 0;
          *(undefined8 *)(lVar18 + 0x10) = local_c0;
        }
        else if ((1e-05 < ABS((float)*(undefined8 *)(lVar18 + 0x10) - (float)local_c0)) ||
                (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar18 + 0x10) >> 0x20) -
                             (float)((ulong)local_c0 >> 0x20)))) {
          *(undefined1 *)(lVar18 + 0x12a) = 1;
          goto LAB_7102e093f8;
        }
        if (1e-05 <= ABS(*(float *)(lVar18 + 0x30))) {
          *(undefined4 *)(lVar18 + 0x30) = 0;
          *(undefined1 *)(lVar18 + 0x129) = 1;
        }
        uVar27 = *(undefined8 *)(lVar18 + 0x58);
        uVar23 = *(undefined8 *)(lVar18 + 0x50);
        if (1e-05 <= ABS((float)uVar23 + -1.0)) {
          uVar23 = CONCAT44((int)((ulong)uVar23 >> 0x20),0x3f800000);
          *(undefined1 *)(lVar18 + 0x129) = 1;
          *(undefined8 *)(lVar18 + 0x58) = uVar27;
          *(undefined8 *)(lVar18 + 0x50) = uVar23;
        }
        if (1e-05 <= ABS((float)((ulong)uVar23 >> 0x20) + -1.0)) {
          *(undefined1 *)(lVar18 + 0x129) = 1;
          *(undefined8 *)(lVar18 + 0x58) = uVar27;
          *(ulong *)(lVar18 + 0x50) = CONCAT44(0x3f800000,(int)uVar23);
        }
        plVar24 = plVar24 + 1;
      } while (plVar10 != plVar24);
    }
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar12,(byte ****)pcVar15,pppplVar17,param_6,param_7,param_8
                         );
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000010;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar12,(byte ****)pcVar15,pppplVar17,param_6,param_7
                                  ,param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102e094bc;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e094bc:
  ppppbVar13 = *(byte *****)(param_1 + 0x18);
  FUN_7102e10420(puVar7,*(long *)(param_1 + 8),ppppbVar13,(byte ****)pcVar15,pppplVar17,param_6,
                 param_7,param_8);
  plVar10 = *(long **)(param_1 + 0x360);
  *(undefined8 **)(param_1 + 0x360) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  lVar18 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 800) = *(undefined4 *)(lVar18 + 0x8e0);
  *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(lVar18 + 0x8f4);
  *(undefined4 *)(param_1 + 0x328) = *(undefined4 *)(lVar18 + 0x8f8);
  *(undefined4 *)(param_1 + 0x32c) = *(undefined4 *)(lVar18 + 0x8fc);
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(lVar18 + 0x8e4);
  *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(lVar18 + 0x8e8);
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(lVar18 + 0x8ec);
  *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(lVar18 + 0x8f0);
  pppplVar12 = (long ****)(param_1 + 800);
  ppppbVar16 = (byte ****)(*(long *)(lVar18 + 0x6d0) + 0x40);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x98,(long ****)ppppbVar13,(byte ****)pcVar15,pppplVar17,param_6,
                          param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000098;
      pppplVar14 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x98,pppplVar14,(byte ****)pcVar15,pppplVar17,param_6,param_7
                                  ,param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102e09590;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e09590:
  pcVar15 = "houou";
  FUN_7102e0f450(puVar7,*(undefined8 *)(param_1 + 8),pppplVar12,ppppbVar16,(long ****)"houou",
                 param_6,param_7,param_8);
  plVar10 = *(long **)(param_1 + 0x340);
  *(undefined8 **)(param_1 + 0x340) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar16,(long ****)pcVar15,param_6,param_7,param_8
                         );
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_f0 = (long ***)((ulong)local_f0 & 0xffffffff00000000);
      local_b0 = (long ***)&DAT_00000038;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x38,pppplVar12,ppppbVar16,(long ****)pcVar15,param_6,param_7
                                  ,param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102e09618;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102e09618:
  uVar23 = *(undefined8 *)(param_1 + 8);
  uVar27 = *(undefined8 *)(param_1 + 0x10);
  lVar18 = *(long *)(param_1 + 0x18);
  puVar7[4] = 0;
  puVar7[2] = uVar27;
  puVar7[3] = lVar18;
  *puVar7 = &PTR_FUN_710513fa70;
  puVar7[1] = uVar23;
  puVar7[5] = 0;
  puVar7[6] = 0;
  plVar10 = *(long **)(param_1 + 0x348);
  *(undefined8 **)(param_1 + 0x348) = puVar7;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
    puVar7 = *(undefined8 **)(param_1 + 0x348);
    lVar18 = *(long *)(param_1 + 0x18);
  }
  FUN_7102e14260(**(undefined4 **)(lVar18 + 0x990),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],**(undefined4 **)(lVar18 + 0x9f0),
                 (*(undefined4 **)(lVar18 + 0x9f0))[1],(long)puVar7,0x7104420790,
                 *(long *****)(lVar18 + 0x730),*(byte *****)(lVar18 + 0x6d0),(long ****)0xb,0xc,
                 param_7,param_8);
  lVar18 = *(long *)(param_1 + 0x18);
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar18 + 0x990) + 4),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0x9f0) + 8),
                 *(undefined4 *)(*(long *)(lVar18 + 0x9f0) + 0xc),*(long *)(param_1 + 0x348),
                 0x71044313e3,(long ****)(*(long *)(lVar18 + 0x730) + 0xc),
                 (byte ****)(*(long *)(lVar18 + 0x6d0) + 0x10),(long ****)0xb,0xc,param_7,param_8);
  lVar18 = *(long *)(param_1 + 0x18);
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar18 + 0x990) + 8),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0x9f0) + 0x10),
                 *(undefined4 *)(*(long *)(lVar18 + 0x9f0) + 0x14),*(long *)(param_1 + 0x348),
                 0x7104441ce5,(long ****)(*(long *)(lVar18 + 0x730) + 0x18),
                 (byte ****)(*(long *)(lVar18 + 0x6d0) + 0x20),(long ****)0xb,0xc,param_7,param_8);
  lVar18 = *(long *)(param_1 + 0x18);
  pppplVar12 = (long ****)(*(long *)(lVar18 + 0x730) + 0x24);
  ppppbVar13 = (byte ****)(*(long *)(lVar18 + 0x6d0) + 0x30);
  uVar23 = 0xc;
  pppplVar17 = (long ****)0xb;
  FUN_7102e14260(*(undefined4 *)(*(long *)(lVar18 + 0x990) + 0xc),**(undefined4 **)(lVar18 + 0x948),
                 (*(undefined4 **)(lVar18 + 0x948))[1],**(undefined4 **)(lVar18 + 0x960),
                 (*(undefined4 **)(lVar18 + 0x960))[1],
                 *(undefined4 *)(*(long *)(lVar18 + 0x9f0) + 0x18),
                 *(undefined4 *)(*(long *)(lVar18 + 0x9f0) + 0x1c),*(long *)(param_1 + 0x348),
                 0x710426e235,pppplVar12,ppppbVar13,(long ****)0xb,0xc,param_7,param_8);
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x348) + 0x20);
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x348) + 0x28);
  if (puVar7 != puVar9) {
    do {
      plVar10 = (long *)*puVar7;
      plVar24 = (long *)puVar7[1];
      if (plVar24 == (long *)0x0) {
        (**(code **)(*plVar10 + 0x18))(plVar10,0);
      }
      else {
        plVar2 = plVar24 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = *plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        (**(code **)(*plVar10 + 0x18))(plVar10,0);
        do {
          lVar18 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar7 = puVar7 + 2;
    } while (puVar7 != puVar9);
    plVar24 = *(long **)(*(long *)(param_1 + 0x348) + 0x28);
    for (plVar10 = *(long **)(*(long *)(param_1 + 0x348) + 0x20); plVar10 != plVar24;
        plVar10 = plVar10 + 2) {
      lVar18 = *plVar10;
      plVar2 = (long *)plVar10[1];
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar18 = *(long *)(lVar18 + 0x10);
      if (lVar18 != 0) {
        *(byte *)(lVar18 + 0x118) = *(byte *)(lVar18 + 0x118) | 1;
      }
      if (plVar2 != (long *)0x0) {
        plVar1 = plVar2 + 1;
        do {
          lVar18 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  local_f0 = (long ***)0x0;
  lVar19 = *(long *)(param_1 + 8);
  lVar18 = *(long *)(**(long **)(lVar19 + 0x338) + 8);
  if (lVar18 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    pppplVar12 = (long ****)0x0;
    uVar6 = FUN_7102405040(lVar18,&local_f0,0,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
    lVar19 = *(long *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x260) = uVar6;
  lVar18 = *(long *)(**(long **)(lVar19 + 0x338) + 8);
  uVar6 = 0xffffffff;
  if (lVar18 != 0) {
    pppplVar12 = (long ****)0x0;
    uVar6 = FUN_7102405040(lVar18,&local_f0,0,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  }
  *(undefined4 *)(param_1 + 0x264) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = 0;
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xec);
  fVar26 = *(float *)(*(long *)(param_1 + 0x18) + 0x5c);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e09994;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e09994:
  ppplVar11 = *(long ****)(param_1 + 8);
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar12 + 8) = 0;
  *pppplVar12 = ppplVar11;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)(ulong)(uint)((-44.0 - fVar25) + -10.0);
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(fVar26 + 25.0,fVar25 + -44.0 + 10.0);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x268);
  *(long *****)(param_1 + 0x268) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xec);
  fVar26 = *(float *)(*(long *)(param_1 + 0x18) + 0x5c);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e09b14;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e09b14:
  ppplVar11 = *(long ****)(param_1 + 8);
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar12 + 8) = 0;
  *pppplVar12 = ppplVar11;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)(ulong)(uint)((44.0 - fVar25) + -10.0);
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(fVar26 + 25.0,fVar25 + 44.0 + 10.0);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x270);
  *(long *****)(param_1 + 0x270) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  lVar18 = *(long *)(param_1 + 0x268);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  lVar18 = *(long *)(param_1 + 0x270);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xec);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e09d20;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e09d20:
  ppplVar11 = *(long ****)(param_1 + 8);
  *pppplVar12 = ppplVar11;
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar12 + 8) = 1;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)(ulong)(uint)((-44.0 - fVar25) + -10.0);
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(0x41c80000,fVar25 + -44.0 + 10.0);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x278);
  *(long *****)(param_1 + 0x278) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xec);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e09e84;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e09e84:
  ppplVar11 = *(long ****)(param_1 + 8);
  *pppplVar12 = ppplVar11;
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar12 + 8) = 1;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)(ulong)(uint)((44.0 - fVar25) + -10.0);
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(0x41c80000,fVar25 + 44.0 + 10.0);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x280);
  *(long *****)(param_1 + 0x280) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  lVar18 = *(long *)(param_1 + 0x278);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  lVar18 = *(long *)(param_1 + 0x280);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xec);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e0a098;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e0a098:
  ppplVar11 = *(long ****)(param_1 + 8);
  *pppplVar12 = ppplVar11;
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar12 + 8) = 0;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)(ulong)(uint)((-44.0 - fVar25) + -7.5);
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(0x41c80000,fVar25 + -44.0 + 7.5);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x288);
  *(long *****)(param_1 + 0x288) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xec);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e0a1fc;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e0a1fc:
  ppplVar11 = *(long ****)(param_1 + 8);
  *pppplVar12 = ppplVar11;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar12 + 8) = 0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)(ulong)(uint)((44.0 - fVar25) + -7.5);
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(0x41c80000,fVar25 + 44.0 + 7.5);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x290);
  *(long *****)(param_1 + 0x290) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  lVar18 = *(long *)(param_1 + 0x288);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  lVar18 = *(long *)(param_1 + 0x290);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xb8);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e0a408;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e0a408:
  ppplVar11 = *(long ****)(param_1 + 8);
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *pppplVar12 = ppplVar11;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  *(undefined4 *)(pppplVar12 + 8) = 0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)0xc2c80000c31b0000;
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(fVar25 + 180.0,0xc2be0000);
  pppplVar14 = pppplVar12;
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  pppplVar21 = *(long *****)(param_1 + 0x298);
  *(long *****)(param_1 + 0x298) = pppplVar12;
  if (pppplVar21 != (long ****)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pppplVar21 + 10) != '\0'))
    {
      if (*(char *)((long)pppplVar21 + 9) != '\0') {
        uVar3 = *(uint *)((long)pppplVar21 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)pppplVar21 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pppplVar21 + 9) = 0;
      }
      *(undefined1 *)((long)pppplVar21 + 10) = 0;
    }
    pppplVar14 = pppplVar21;
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                   (ulong)*pppplVar21,(long)pppplVar21);
    FUN_710392eb40((ulong)pppplVar21);
  }
  fVar25 = *(float *)(*(long *)(param_1 + 0x18) + 0xb8);
  pppplVar12 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar14,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  if (pppplVar12 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_b0 = (long ***)&DAT_00000050;
      pppplVar12 = &local_b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (pppplVar12 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,
                                      param_8), pppplVar12 != (long ****)0x0)) goto LAB_7102e0a564;
    }
    pppplVar12 = (long ****)0x0;
  }
LAB_7102e0a564:
  ppplVar11 = *(long ****)(param_1 + 8);
  *(undefined2 *)(pppplVar12 + 1) = 1;
  *pppplVar12 = ppplVar11;
  *(undefined1 *)((long)pppplVar12 + 10) = 0;
  *(undefined4 *)((long)pppplVar12 + 0xc) = 0xffffffff;
  pppplVar12[6] = (long ***)0x0;
  pppplVar12[7] = (long ***)0x0;
  *(undefined4 *)(pppplVar12 + 8) = 0;
  pppplVar12[3] = (long ***)0x0;
  pppplVar12[2] = (long ***)0xc2c8000042be0000;
  pppplVar12[5] = (long ***)0x0;
  pppplVar12[4] = (long ***)CONCAT44(fVar25 + 180.0,0x431b0000);
  bVar5 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)ppplVar11,pppplVar12,ppppbVar13,pppplVar17,uVar23,param_7,param_8);
  *(bool *)(pppplVar12 + 1) = bVar5;
  puVar22 = *(ulong **)(param_1 + 0x2a0);
  *(long *****)(param_1 + 0x2a0) = pppplVar12;
  if (puVar22 != (ulong *)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)puVar22 + 10) != '\0')) {
      if (*(char *)((long)puVar22 + 9) != '\0') {
        uVar3 = *(uint *)((long)puVar22 + 0xc);
        if ((uVar3 < 0x38) &&
           (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
          *piVar20 = *piVar20 + -1;
        }
        *(undefined4 *)((long)puVar22 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)puVar22 + 9) = 0;
      }
      *(undefined1 *)((long)puVar22 + 10) = 0;
    }
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),*puVar22,
                   (long)puVar22);
    FUN_710392eb40((ulong)puVar22);
  }
  lVar18 = *(long *)(param_1 + 0x298);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  lVar18 = *(long *)(param_1 + 0x2a0);
  if (*(char *)(lVar18 + 9) != '\0') {
    uVar3 = *(uint *)(lVar18 + 0xc);
    if ((uVar3 < 0x38) &&
       (piVar20 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar20 + (long)(int)uVar3 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar20 + (long)(int)uVar3 + 0x464) = 0;
      *piVar20 = *piVar20 + -1;
    }
    *(undefined4 *)(lVar18 + 0xc) = 0xffffffff;
    *(undefined1 *)(lVar18 + 9) = 0;
  }
  *(undefined1 *)(lVar18 + 10) = 0;
  return;
}

