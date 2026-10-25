// addr:      710284d340
// offset:    0x284d340
// name:      FUN_710284d340
// mangled:   
// signature: undefined __cdecl FUN_710284d340(long * param_1, undefined8 param_2, char * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_710284d340(long *param_1,undefined8 param_2,char *param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long ***ppplVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined8 extraout_x1;
  long ****pppplVar10;
  byte ****ppppbVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  char *pcVar15;
  undefined8 uVar16;
  int *piVar17;
  long lVar18;
  long ****pppplVar19;
  undefined8 uVar20;
  ulong *puVar21;
  undefined4 local_74;
  long ***local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  FUN_71025d9250(param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar8 = (long *)**(long **)(param_1[0x60] + 0x18);
  do {
    if (plVar8 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) goto LAB_710284d3e0;
    lVar18 = *plVar8;
    plVar8 = plVar8 + 1;
  } while ((*(ulong *)(lVar18 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  puVar6 = *(undefined8 **)(lVar18 + 0x130);
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  param_3 = "IPP0002";
  puVar1 = (undefined8 *)*puVar6;
  puVar6 = (undefined8 *)puVar6[1];
  if (DAT_71052c51ba == '\0') {
    FUN_71025f55b0(puVar1,puVar6,"IPP0002");
  }
  else {
    FUN_71025f5420(puVar1,puVar6,"IPP0002");
  }
LAB_710284d3e0:
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0xa8,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                          ,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_000000a8;
      param_3 = (char *)&local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0xa8,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8), puVar6 != (undefined8 *)0x0))
      goto LAB_710284d43c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_710284d43c:
  ppppbVar12 = (byte ****)(param_1 + 0xe7);
  pppplVar19 = (long ****)param_1[0x67];
  *(undefined8 *)((long)puVar6 + 6) = 0;
  *puVar6 = 0;
  puVar6[2] = param_1;
  puVar6[3] = ppppbVar12;
  puVar21 = puVar6 + 4;
  *puVar21 = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = param_1;
  puVar6[5] = 0;
  puVar6[6] = 0;
  lVar18 = param_1[0x68];
  puVar6[0xe] = 0;
  puVar6[10] = lVar18;
  puVar6[0xb] = &DAT_100000001;
  puVar6[0xc] = &DAT_100000001;
  puVar6[0xd] = 0x500000001;
  puVar6[0x11] = 0;
  puVar6[0x12] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = puVar6 + 0xe;
  puVar6[0x14] = 0;
  piVar17 = (int *)param_1[0xec];
  lVar18 = param_1[0xed] - (long)piVar17;
  if (lVar18 == 0) {
LAB_710284dc3c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  iVar5 = *piVar17;
  *(int *)((long)puVar6 + 0x6c) = iVar5 + 4;
  *(int *)(puVar6 + 0xb) = iVar5;
  if ((ulong)(lVar18 >> 2) < 2) goto LAB_710284dc3c;
  iVar5 = iVar5 + piVar17[1] + 3;
  *(int *)((long)puVar6 + 0x5c) = piVar17[1];
  *(int *)((long)puVar6 + 0x6c) = iVar5;
  if (lVar18 == 8) goto LAB_710284dc3c;
  iVar5 = iVar5 + piVar17[2] + -1;
  *(int *)(puVar6 + 0xc) = piVar17[2];
  *(int *)((long)puVar6 + 0x6c) = iVar5;
  if ((ulong)(lVar18 >> 2) < 4) goto LAB_710284dc3c;
  iVar2 = piVar17[3];
  *(int *)((long)puVar6 + 100) = iVar2;
  iVar5 = iVar5 + iVar2 + -1;
  *(int *)((long)puVar6 + 0x6c) = iVar5;
  if (lVar18 == 0x10) goto LAB_710284dc3c;
  iVar2 = piVar17[4];
  *(int *)(puVar6 + 0xd) = iVar2;
  *(int *)((long)puVar6 + 0x6c) = iVar5 + iVar2 + -1;
  plVar8 = (long *)FUN_710392e290(0x10,0x150,(long ****)param_3,(byte ****)param_4,
                                  (long ****)param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_00000150;
      pppplVar10 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,(byte ****)param_4,
                                          (long ****)param_5,param_6,param_7,param_8),
         plVar8 != (long *)0x0)) goto LAB_710284d57c;
    }
    plVar8 = (long *)0x0;
  }
LAB_710284d57c:
  uVar20 = 0x12a3c74544;
  pppplVar13 = (long ****)0x164de8f459;
  pcVar15 = "dyr_left_floor_r_a_locator_set";
  pppplVar10 = pppplVar19;
  ppppbVar11 = ppppbVar12;
  pppplVar14 = pppplVar13;
  uVar16 = uVar20;
  FUN_710284e490(plVar8,(long)param_1,pppplVar19,ppppbVar12,(long ****)0x164de8f459,0x164de8f459,
                 (byte *)"dyr_left_floor_r_a_locator_set",0x12a3c74544,0x1b782d5cd9,0,0x189e5f2e29,
                 0x1c2bbb9bb6,0,0,1,2,3,(byte *)"SE_0001",0x8b34c82c8,0x10cf5e8480);
  uVar7 = *puVar21;
  *puVar21 = (ulong)plVar8;
  if (uVar7 != 0) {
    FUN_7102414190(*(long *)(**(long **)(uVar7 + 0x120) + 8),*(uint *)(uVar7 + 0x128));
    *(undefined4 *)(uVar7 + 0x128) = 0xffffffff;
    FUN_710392eb40(uVar7);
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,pcVar15,
                                  uVar16);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_00000150;
      pppplVar10 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,
                                          pcVar15,uVar16), plVar8 != (long *)0x0))
      goto LAB_710284d6b8;
    }
    plVar8 = (long *)0x0;
  }
LAB_710284d6b8:
  pppplVar13 = (long ****)0x1b5b214895;
  pcVar15 = "dyr_center_floor_down_a_locator_set";
  pppplVar10 = pppplVar19;
  ppppbVar11 = ppppbVar12;
  pppplVar14 = pppplVar13;
  uVar16 = uVar20;
  FUN_710284e490(plVar8,(long)param_1,pppplVar19,ppppbVar12,(long ****)0x1b5b214895,0x1b5b214895,
                 (byte *)"dyr_center_floor_down_a_locator_set",0x12a3c74544,0x207c88fb8f,
                 0x21fea7f9fd,0x189e5f2e29,0x21a9b7cad0,0x2205a68aa9,4,5,6,7,(byte *)"SE_0002",
                 0x8b34c82c8,0x11ec59b0cc);
  uVar7 = puVar6[5];
  puVar6[5] = plVar8;
  if (uVar7 != 0) {
    FUN_7102414190(*(long *)(**(long **)(uVar7 + 0x120) + 8),*(uint *)(uVar7 + 0x128));
    *(undefined4 *)(uVar7 + 0x128) = 0xffffffff;
    FUN_710392eb40(uVar7);
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,pcVar15,
                                  uVar16);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_00000150;
      pppplVar10 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,
                                          pcVar15,uVar16), plVar8 != (long *)0x0))
      goto LAB_710284d7ec;
    }
    plVar8 = (long *)0x0;
  }
LAB_710284d7ec:
  pppplVar13 = (long ****)0x1927e652df;
  pcVar15 = "dyr_center_floor_up_b_locator_set";
  pppplVar10 = pppplVar19;
  ppppbVar11 = ppppbVar12;
  pppplVar14 = pppplVar13;
  uVar16 = uVar20;
  FUN_710284e490(plVar8,(long)param_1,pppplVar19,ppppbVar12,(long ****)0x1927e652df,0x1927e652df,
                 (byte *)"dyr_center_floor_up_b_locator_set",0x12a3c74544,0x1e4a0304b3,0,
                 0x189e5f2e29,0x1f86ee3da8,0,8,9,10,0xb,(byte *)"SE_0003",0x8b34c82c8,0x11ddb1aa51);
  uVar7 = puVar6[6];
  puVar6[6] = plVar8;
  if (uVar7 != 0) {
    FUN_7102414190(*(long *)(**(long **)(uVar7 + 0x120) + 8),*(uint *)(uVar7 + 0x128));
    *(undefined4 *)(uVar7 + 0x128) = 0xffffffff;
    FUN_710392eb40(uVar7);
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,pcVar15,
                                  uVar16);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_00000150;
      pppplVar10 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,
                                          pcVar15,uVar16), plVar8 != (long *)0x0))
      goto LAB_710284d908;
    }
    plVar8 = (long *)0x0;
  }
LAB_710284d908:
  pppplVar13 = (long ****)0x18830b8074;
  pcVar15 = "dyr_center_floor_r_a_locator_set";
  pppplVar10 = pppplVar19;
  ppppbVar11 = ppppbVar12;
  pppplVar14 = pppplVar13;
  uVar16 = uVar20;
  FUN_710284e490(plVar8,(long)param_1,pppplVar19,ppppbVar12,(long ****)0x18830b8074,0x18830b8074,
                 (byte *)"dyr_center_floor_r_a_locator_set",0x12a3c74544,0x1d257f405b,0x1e7f40188b,
                 0x189e5f2e29,0x1e28502ba6,0x1fbc41b941,0xc,0xd,0xe,0xf,(byte *)"SE_0004",
                 0x8b34c82c8,0x11ba6f369f);
  uVar7 = puVar6[7];
  puVar6[7] = plVar8;
  if (uVar7 != 0) {
    FUN_7102414190(*(long *)(**(long **)(uVar7 + 0x120) + 8),*(uint *)(uVar7 + 0x128));
    *(undefined4 *)(uVar7 + 0x128) = 0xffffffff;
    FUN_710392eb40(uVar7);
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,pcVar15,
                                  uVar16);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_00000150;
      pppplVar10 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x150,pppplVar10,ppppbVar11,pppplVar13,pppplVar14,
                                          pcVar15,uVar16), plVar8 != (long *)0x0))
      goto LAB_710284da40;
    }
    plVar8 = (long *)0x0;
  }
LAB_710284da40:
  pppplVar14 = (long ****)0x18fe03c80d;
  pcVar15 = "dyr_right_floor_down_locator_set";
  pppplVar10 = pppplVar14;
  FUN_710284e490(plVar8,(long)param_1,pppplVar19,ppppbVar12,(long ****)0x18fe03c80d,0x18fe03c80d,
                 (byte *)"dyr_right_floor_down_locator_set",0x12a3c74544,0x1d0754bcf5,0x1e4e0cbd98,
                 0x189e5f2e29,0x1e191c8eb5,0x1f38ceb43a,0x10,0x11,0x12,0x13,(byte *)"SE_0005",
                 0x8b34c82c8,0x10a66fa799);
  uVar7 = puVar6[8];
  puVar6[8] = plVar8;
  if (uVar7 != 0) {
    FUN_7102414190(*(long *)(**(long **)(uVar7 + 0x120) + 8),*(uint *)(uVar7 + 0x128));
    *(undefined4 *)(uVar7 + 0x128) = 0xffffffff;
    FUN_710392eb40(uVar7);
  }
  uVar7 = param_1[0xf2];
  param_1[0xf2] = (long)puVar6;
  if (uVar7 != 0) {
    FUN_710284f610(uVar7);
    FUN_710392eb40(uVar7);
  }
  ppplVar4 = *(long ****)(param_1[0x61] + 0xf8);
  uVar3 = *(undefined4 *)(param_1[0x61] + 0x100);
  puVar9 = (undefined4 *)
           FUN_710392e290(0x10,0x24,pppplVar19,ppppbVar12,pppplVar14,pppplVar10,pcVar15,uVar20);
  if (puVar9 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74 = 0;
      local_70 = (long ***)&DAT_00000024;
      pppplVar19 = &local_70;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
      if (((uVar7 & 1) != 0) &&
         (puVar9 = (undefined4 *)
                   FUN_710392e290(0x10,0x24,pppplVar19,ppppbVar12,pppplVar14,pppplVar10,pcVar15,
                                  uVar20), puVar9 != (undefined4 *)0x0)) goto LAB_710284db98;
    }
    puVar9 = (undefined4 *)0x0;
  }
LAB_710284db98:
  *(undefined8 *)(puVar9 + 7) = 0;
  *(undefined8 *)(puVar9 + 5) = 0;
  *(undefined8 *)(puVar9 + 3) = 0;
  *(undefined8 *)(puVar9 + 1) = 0;
  uStack_64 = 0xc1d80000;
  local_70 = ppplVar4;
  local_68 = uVar3;
  FUN_710318b620(puVar9,&local_70,pppplVar19,ppppbVar12,pppplVar14,pppplVar10,pcVar15,uVar20);
  uVar7 = param_1[0xf3];
  param_1[0xf3] = (long)puVar9;
  if (uVar7 != 0) {
    FUN_710318b9b0(uVar7,extraout_x1,pppplVar19,ppppbVar12,pppplVar14,pppplVar10,pcVar15,uVar20);
    FUN_710392eb40(uVar7);
  }
  return;
}

