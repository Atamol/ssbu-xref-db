// addr:      7101df9480
// offset:    0x1df9480
// name:      FUN_7101df9480
// mangled:   
// signature: undefined __cdecl FUN_7101df9480(undefined8 * param_1, undefined8 * param_2, uint * param_3, long param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101df9480(undefined8 *param_1,undefined8 *param_2,uint *param_3,long param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long *plVar2;
  long ****pppplVar3;
  short *psVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  byte **ppbVar11;
  long ****pppplVar12;
  byte ***pppbVar13;
  int iVar14;
  undefined *puVar15;
  char *pcVar16;
  long ****pppplVar17;
  undefined8 uVar18;
  byte ****ppppbVar19;
  long ****pppplVar20;
  byte *pbVar21;
  long lVar22;
  code *pcVar23;
  int *piVar24;
  long **pplVar25;
  byte ***pppbVar26;
  long ***ppplVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  undefined1 uVar31;
  ulong uVar32;
  long ****pppplVar33;
  size_t sVar34;
  byte ***pppbVar35;
  byte ***pppbVar36;
  float fVar37;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined2 local_228;
  undefined1 uStack_226;
  undefined1 uStack_225;
  undefined2 uStack_224;
  undefined1 uStack_222;
  undefined1 uStack_221;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined2 uStack_21e;
  long alStack_210 [4];
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  undefined4 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  long ****local_c8;
  long ****local_c0;
  long ****local_b8;
  long ***local_b0;
  long *local_a8;
  long ****local_90;
  undefined4 local_7c [3];
  
  uVar18 = *param_2;
  param_1[200] = param_2[1];
  param_1[199] = uVar18;
  local_f4 = 0;
  uStack_108 = (byte ***)&DAT_747261705f746573;
  local_f8 = 0x7265746c;
  uVar28 = 0x811c9dc5;
  uVar30 = 0x73;
  local_100 = 0x69665f6e74625f73;
  pbVar21 = (byte *)((long)&uStack_108 + 1);
  do {
    uVar28 = uVar28 * 0x89 ^ uVar30;
    uVar30 = (uint)*pbVar21;
    pbVar21 = pbVar21 + 1;
  } while (uVar30 != 0);
  local_110 = CONCAT44(0x14,uVar28);
  uVar18 = *(undefined8 *)(param_3 + 2);
  uVar28 = param_3[4];
  param_1[0xc9] = *(undefined8 *)param_3;
  *(char *)(param_1 + 0xcb) = (char)uVar28;
  param_1[0xca] = uVar18;
  puVar15 = &DAT_71045459b0;
  uVar18 = 1;
  pppplVar20 = param_5;
  FUN_71032cbf30(param_1 + 2,*(long *)param_1[1],(ulong *)&DAT_71045459b0,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar22 = **(long **)*param_1;
  puVar1 = param_1 + 3;
  if (puVar1 != (undefined8 *)(lVar22 + 8)) {
    *(undefined8 *)param_1[4] = **(undefined8 **)(lVar22 + 0x10);
    *(undefined8 *)(param_1[4] + 8) = *(undefined8 *)(*(long *)(lVar22 + 0x10) + 8);
    lVar29 = *(long *)(lVar22 + 0x10);
    lVar22 = param_1[4];
    if (lVar22 != lVar29) {
      **(undefined8 **)(lVar22 + 0x18) = **(undefined8 **)(lVar29 + 0x18);
      *(undefined8 *)(*(long *)(lVar22 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar29 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x18);
    }
  }
  FUN_7103776640(&local_240,(long)puVar1,(byte ****)(param_4 + 8),puVar15,uVar18,pppplVar20,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_238;
  if (param_1 + 8 != &local_240) {
    local_238 = (byte ***)0x0;
    uVar32 = param_1[9];
    param_1[9] = uVar9;
    if (uVar32 != 0) {
      uVar9 = *(ulong *)(uVar32 + 0x18);
      *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar32 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar32);
    }
  }
  uVar9 = (ulong)local_238;
  local_240 = &PTR_FUN_710523d988;
  local_238 = (byte ***)0x0;
  if (uVar9 != 0) {
    uVar32 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_240,(long)puVar1,(byte ****)&uStack_108,puVar15,uVar18,pppplVar20,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_238;
  if (param_1 + 10 != &local_240) {
    local_238 = (byte ***)0x0;
    uVar32 = param_1[0xb];
    param_1[0xb] = uVar9;
    if (uVar32 != 0) {
      uVar9 = *(ulong *)(uVar32 + 0x18);
      *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar32 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar32);
    }
  }
  uVar9 = (ulong)local_238;
  local_240 = &PTR_FUN_710523d988;
  local_238 = (byte ***)0x0;
  if (uVar9 != 0) {
    uVar32 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar32 != 0) {
      FUN_710392eb40(uVar32);
    }
    FUN_710392eb40(uVar9);
  }
  param_1[0x57] = param_1[200];
  FUN_7103776cd0(&local_240,(long)puVar1,"scr_item",puVar15,uVar18,pppplVar20,param_6,param_7,
                 param_8);
  pppbVar36 = local_238;
  pppbVar13 = (byte ***)local_240;
  uVar8 = local_230;
  for (pppbVar26 = (byte ***)local_240; pppbVar26 != pppbVar36; pppbVar26 = pppbVar26 + 2) {
    ppppbVar19 = (byte ****)&DAT_7104867c2e;
    if (*pppbVar26[1] != (byte *)0x0) {
      ppppbVar19 = (byte ****)(*pppbVar26[1] + 0xb0);
    }
    local_230 = (byte ***)uVar8;
    FUN_7103776640(&local_b0,(long)puVar1,ppppbVar19,puVar15,uVar18,pppplVar20,param_6,param_7,
                   param_8);
    plVar2 = local_a8;
    uVar28 = DAT_71052391c0;
    DAT_71052391c0 = DAT_71052391c4;
    uVar28 = uVar28 ^ uVar28 << 0xb;
    uVar28 = uVar28 ^ uVar28 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    DAT_71052391cc = uVar28;
    FUN_7103778300(0x3f800000,(long)local_a8,0x710445504c);
    fVar37 = (float)(uVar28 % 100);
    if ((*(long *)((long)plVar2 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)plVar2 + 8),0x710445504c),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    FUN_7103778300(0x3f800000,(long)plVar2,0x710434a8f0);
    if ((*(long *)((long)plVar2 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)plVar2 + 8),0x710434a8f0),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    FUN_7103778300(0x3f800000,(long)plVar2,0x71042c53b8);
    if ((*(long *)((long)plVar2 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)plVar2 + 8),0x71042c53b8),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    FUN_7103778300(0x3f800000,(long)plVar2,0x710428105d);
    if ((*(long *)((long)plVar2 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)plVar2 + 8),0x710428105d),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_legend",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    FUN_7103778300(0x3f800000,(long)local_c0,0x710436ac3e);
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = (ulong)pppplVar17[3];
      pppplVar17[2] = (long ***)&PTR_FUN_710523d9a8;
      pppplVar17[3] = (long ***)0x0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_legend",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    if ((*(long *)((long)local_c0 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)local_c0 + 8),0x710436ac3e),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_ace",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    FUN_7103778300(0x3f800000,(long)local_c0,0x71044530ac);
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_ace",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    if ((*(long *)((long)local_c0 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)local_c0 + 8),0x71044530ac),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_hope",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    FUN_7103778300(0x3f800000,(long)local_c0,0x7104442147);
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_hope",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    if ((*(long *)((long)local_c0 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)local_c0 + 8),0x7104442147),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_none",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    FUN_7103778300(0x3f800000,(long)local_c0,0x7104464374);
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    FUN_7103776640(&local_c8,(long)&local_b0,(byte ****)"set_parts_class_none",puVar15,uVar18,
                   pppplVar20,param_6,param_7,param_8);
    pppplVar17 = local_c0;
    if ((*(long *)((long)local_c0 + 8) != 0) &&
       (plVar10 = (long *)FUN_71037964b0(*(long *)((long)local_c0 + 8),0x7104464374),
       plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1a0))(fVar37);
    }
    local_c8 = (long ****)&PTR_FUN_710523d988;
    local_c0 = (long ****)0x0;
    if (pppplVar17 != (long ****)0x0) {
      uVar9 = *(ulong *)((long)pppplVar17 + 0x18);
      *(undefined ***)((long)pppplVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppplVar17 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppplVar17);
    }
    local_b0 = (long ***)&PTR_FUN_710523d988;
    local_a8 = (long *)0x0;
    uVar9 = *(ulong *)((long)plVar2 + 0x18);
    *(undefined ***)((long)plVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar2 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)plVar2);
    uVar8 = local_230;
  }
  local_230._7_1_ = (undefined1)((ulong)uVar8 >> 0x38);
  if (pppbVar13 != (byte ***)0x0) {
    while (local_230 = (byte ***)uVar8, pppbVar13 != pppbVar36) {
      pppbVar36 = pppbVar36 + -2;
      (*(code *)**pppbVar36)(pppbVar36);
      uVar8 = local_230;
    }
    local_238 = pppbVar13;
    FUN_710392eb40((ulong)pppbVar13);
  }
  local_240 = (undefined **)0x0;
  local_238 = (byte ***)0x101;
  local_230 = (byte ***)CONCAT17(local_230._7_1_,0x1000100000001);
  local_228 = 0;
  uStack_226 = 0;
  uStack_225 = 0;
  uStack_224 = 0;
  uStack_222 = 0xf0;
  uStack_221 = 0x41;
  uStack_220 = 0;
  uStack_21f = 0;
  uStack_21e = 0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_120 = 0;
  FUN_710337df20((long)&local_240);
  plVar2 = param_1 + 5;
  ppppbVar19 = (byte ****)&local_240;
  FUN_7103770b30(plVar2,puVar1,(long ****)"selector_0",ppppbVar19,pppplVar20,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar2,100,(char *)(param_4 + 8),ppppbVar19,pppplVar20,param_6,param_7,param_8);
  ppppbVar19 = (byte ****)0x0;
  FUN_7103771930(param_1[5],100,(long ****)(ulong)*param_3,(byte ****)0x0,pppplVar20,param_6,param_7
                 ,param_8);
  local_b0 = (long ***)0x7fc420ce8;
  pppplVar17 = &local_b0;
  FUN_7103772070(param_1[5],100,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  FUN_7103776640(&local_b0,(long)puVar1,(byte ****)&uStack_108,pppplVar17,ppppbVar19,pppplVar20,
                 param_6,param_7,param_8);
  plVar10 = local_a8;
  lVar22 = *(long *)((long)local_a8 + 8);
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    uVar9 = *(ulong *)((long)plVar10 + 0x18);
    *(undefined ***)((long)plVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar10 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)plVar10);
  }
  if (lVar22 != 0) {
    FUN_71037717d0(plVar2,0x65,(char *)&uStack_108,ppppbVar19,pppplVar20,param_6,param_7,param_8);
    ppppbVar19 = (byte ****)0x0;
    FUN_7103771930(*plVar2,0x65,(long ****)(ulong)param_3[2],(byte ****)0x0,pppplVar20,param_6,
                   param_7,param_8);
    local_b0 = (long ***)0x7fc420ce8;
    FUN_7103772070(*plVar2,0x65,&local_b0,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  }
  FUN_71037717d0(plVar2,0x66,"scr_ctrl",ppppbVar19,pppplVar20,param_6,param_7,param_8);
  (**(code **)(*(long *)*plVar2 + 0x70))((long *)*plVar2,0);
  (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,0);
  if (alStack_150 == local_130) {
    pcVar23 = *(code **)(*local_130 + 0x20);
LAB_7101df9d5c:
    (*pcVar23)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar23 = *(code **)(*local_130 + 0x28);
    goto LAB_7101df9d5c;
  }
  if (alStack_180 == local_160) {
    pcVar23 = *(code **)(*local_160 + 0x20);
LAB_7101df9d8c:
    (*pcVar23)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar23 = *(code **)(*local_160 + 0x28);
    goto LAB_7101df9d8c;
  }
  if (alStack_1b0 == local_190) {
    pcVar23 = *(code **)(*local_190 + 0x20);
LAB_7101df9dbc:
    (*pcVar23)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar23 = *(code **)(*local_190 + 0x28);
    goto LAB_7101df9dbc;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar23 = *(code **)(*local_1c0 + 0x20);
LAB_7101df9dec:
    (*pcVar23)();
  }
  else if (local_1c0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_1c0 + 0x28);
    goto LAB_7101df9dec;
  }
  if (alStack_210 == local_1f0) {
    pcVar23 = *(code **)(*local_1f0 + 0x20);
LAB_7101df9e1c:
    (*pcVar23)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101df9e1c;
  }
  local_240 = (undefined **)0x0;
  local_238 = (byte ***)0x101;
  local_230 = (byte ***)CONCAT17(local_230._7_1_,0x1000100000001);
  local_228 = 0;
  uStack_226 = 0;
  uStack_225 = 0;
  uStack_224 = 0;
  uStack_222 = 0xf0;
  uStack_221 = 0x41;
  uStack_220 = 0;
  uStack_21f = 0;
  uStack_21e = 0;
  local_1f0 = (long *)0x0;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_120 = 0;
  FUN_710337df20((long)&local_240);
  local_238._0_3_ = CONCAT12(1,(undefined2)local_238);
  plVar2 = param_1 + 6;
  ppppbVar19 = (byte ****)&local_240;
  FUN_7103770b30(plVar2,puVar1,(long ****)"selector_1",ppppbVar19,pppplVar20,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar2,0x67,"set_parts_det_key",ppppbVar19,pppplVar20,param_6,param_7,param_8);
  ppppbVar19 = (byte ****)0x0;
  FUN_7103771930(param_1[6],0x67,(long ****)(ulong)param_3[1],(byte ****)0x0,pppplVar20,param_6,
                 param_7,param_8);
  pcVar16 = (char *)0x67;
  FUN_7103771d60(&local_c8,param_1[6],(long ****)0x67,ppppbVar19,pppplVar20,param_6,param_7,param_8)
  ;
  pppplVar17 = local_c0;
  FUN_710377ad90(&local_b0,(long)*local_c0,(long ****)pcVar16,ppppbVar19,pppplVar20,param_6,param_7,
                 param_8);
  plVar10 = local_a8;
  lVar22 = *local_a8;
  if (lVar22 != 0) {
    *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe | (byte)param_3[4];
  }
  local_b0 = (long ***)&PTR_FUN_710523d9a8;
  local_a8 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar10);
  }
  local_c8 = (long ****)&PTR_FUN_710523d9c8;
  local_c0 = (long ****)0x0;
  if (pppplVar17 != (long ****)0x0) {
    FUN_710392eb40((ulong)pppplVar17);
  }
  (**(code **)(*(long *)*plVar2 + 0x70))((long *)*plVar2,0);
  (**(code **)(*(long *)*plVar2 + 0x60))((long *)*plVar2,0);
  if (alStack_150 == local_130) {
    (**(code **)(*local_130 + 0x20))();
  }
  else if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x28))();
  }
  if (alStack_180 == local_160) {
    pcVar23 = *(code **)(*local_160 + 0x20);
LAB_7101df9fb0:
    (*pcVar23)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar23 = *(code **)(*local_160 + 0x28);
    goto LAB_7101df9fb0;
  }
  if (alStack_1b0 == local_190) {
    pcVar23 = *(code **)(*local_190 + 0x20);
LAB_7101df9fe0:
    (*pcVar23)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar23 = *(code **)(*local_190 + 0x28);
    goto LAB_7101df9fe0;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar23 = *(code **)(*local_1c0 + 0x20);
LAB_7101dfa010:
    (*pcVar23)();
  }
  else if (local_1c0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_1c0 + 0x28);
    goto LAB_7101dfa010;
  }
  if (alStack_210 == local_1f0) {
    pcVar23 = *(code **)(*local_1f0 + 0x20);
LAB_7101dfa040:
    (*pcVar23)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101dfa040;
  }
  iVar14 = *(int *)(param_1 + 199);
  if ((iVar14 == 0xd) || (iVar14 == 4)) {
    lVar22 = param_1[0xdc];
    if (*(char *)(lVar22 + 0x90) != '\0') {
      *(undefined4 *)(lVar22 + 0xa0) = *(undefined4 *)(lVar22 + 0xa4);
      if (*(long *)(lVar22 + 0x88) != 0) {
        FUN_710373b540(*(long *)(lVar22 + 0x88),0);
        uVar9 = *(ulong *)(lVar22 + 0x88);
        *(undefined8 *)(lVar22 + 0x88) = 0;
        if (uVar9 != 0) {
          *(undefined ***)(uVar9 + 8) = &PTR_FUN_7104f73d50;
          if (((*(long *)(uVar9 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
             (*(int *)(uVar9 + 0x18) == DAT_7106dd53ac)) {
            piVar24 = (int *)(*(long *)(uVar9 + 0x10) + 0x38);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar24,0x10);
              if (bVar7) {
                *piVar24 = *piVar24 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          *(undefined8 *)(uVar9 + 0x10) = 0;
          *(undefined1 *)(uVar9 + 0x20) = 0;
          FUN_710392eb40(uVar9);
        }
      }
    }
    FUN_7103776640(&local_b0,(long)puVar1,(byte ****)"set_parts_sp",pcVar16,ppppbVar19,pppplVar20,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_240,(long)&local_b0,(byte ****)"set_parts_num_sp",pcVar16,ppppbVar19,
                   pppplVar20,param_6,param_7,param_8);
    plVar2 = local_a8;
    local_b0 = (long ***)&PTR_FUN_710523d988;
    local_a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      uVar9 = *(ulong *)((long)plVar2 + 0x18);
      *(undefined ***)((long)plVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar2 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar2);
    }
    FUN_7103399950((undefined1 *)param_1[0xdc],(long)&local_240,(long ****)"set_txt_num",
                   0x71043beb6c,pppplVar20,param_6,param_7,param_8);
    pcVar16 = "anim_count";
    FUN_7103399a70(param_1[0xdc],(long)&local_240,(long ****)"anim_count",(byte ****)"anim_stop",
                   pppplVar20,param_6,param_7,param_8);
    lVar22 = param_1[0xdc];
    *(undefined8 *)(lVar22 + 0x58) = 0x205bf6fc80;
    *(undefined8 *)(lVar22 + 0x60) = 0x257123f4dd;
    lVar22 = param_1[0xdc];
    *(undefined8 *)(lVar22 + 0x68) = 0x21fc221a56;
    *(undefined8 *)(lVar22 + 0x70) = 0x26ef44d702;
    uVar28 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
    ppppbVar19 = (byte ****)(ulong)uVar28;
    lVar22 = param_1[0xdc];
    *(uint *)(param_1 + 0xda) = uVar28;
    if (*(uint *)(lVar22 + 0x94) != uVar28) {
      pcVar16 = (char *)0x1;
      *(uint *)(lVar22 + 0x94) = uVar28;
      FUN_710377a280(lVar22,(byte *)(lVar22 + 0x18),1);
    }
    pppbVar26 = local_238;
    local_240 = &PTR_FUN_710523d988;
    local_238 = (byte ***)0x0;
    if (pppbVar26 != (byte ***)0x0) {
      ppbVar11 = pppbVar26[3];
      pppbVar26[2] = &PTR_FUN_710523d9a8;
      pppbVar26[3] = (byte **)0x0;
      if (ppbVar11 != (byte **)0x0) {
        FUN_710392eb40((ulong)ppbVar11);
      }
      FUN_710392eb40((ulong)pppbVar26);
    }
    iVar14 = *(int *)(param_1 + 199);
  }
  FUN_7101df4b10((long)param_1,iVar14,(long ****)pcVar16,ppppbVar19,pppplVar20,param_6,param_7,
                 param_8);
  FUN_7101df5560((long)param_1);
  iVar14 = *(int *)(param_1 + 199);
  uVar31 = 1;
  if ((iVar14 != 4) && (iVar14 != 0xd)) {
    uVar31 = 0;
  }
  local_c8 = (long ****)0x0;
  local_c0 = (long ****)0x0;
  local_b8 = (long ****)0x0;
  lVar22 = *DAT_7105329f98;
  switch(iVar14) {
  default:
    lVar22 = *(long *)(lVar22 + 0x30);
    pppplVar17 = (long ****)0x0;
    goto LAB_7101dfa28c;
  case 2:
  case 5:
  case 8:
  case 9:
  case 0xb:
    lVar22 = *(long *)(lVar22 + 0x30);
    pppplVar17 = (long ****)0x1;
LAB_7101dfa28c:
    FUN_7102527570(lVar22,&local_c8,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7,param_8);
    break;
  case 3:
  case 0xc:
    pppplVar17 = (long ****)0x2;
    FUN_7102527570(*(long *)(lVar22 + 0x30),&local_c8,(long ****)0x2,ppppbVar19,pppplVar20,param_6,
                   param_7,param_8);
    cVar6 = *(char *)((long)param_1 + 0x6a7);
    local_238 = (byte ***)0x0;
    local_230 = (byte ***)0x0;
    local_240 = (undefined **)0x0;
    if (cVar6 == '\0') {
LAB_7101dfa888:
      pppbVar26 = (byte ***)local_240;
      sVar5 = *(short *)((long)param_1 + 0x69c);
      local_238 = local_230;
      if (sVar5 != -1) {
        pppplVar33 = (long ****)((long)local_230 - (long)local_240);
        local_238 = local_230;
        if ((long)pppplVar33 < -2) goto LAB_7101dfab30;
        uVar9 = (long)pppplVar33 >> 1;
        pppplVar12 = (long ****)(uVar9 + 1);
        if ((long ****)(uVar9 + 1) <= pppplVar33) {
          pppplVar12 = pppplVar33;
        }
        if (0x3ffffffffffffffe < uVar9) {
          pppplVar12 = (long ****)0x7fffffffffffffff;
        }
        if (pppplVar12 == (long ****)0x0) goto LAB_7101dfa92c;
        if ((long)pppplVar12 < 0) goto LAB_7101dfab2c;
        ppplVar27 = (long ***)((long)pppplVar12 * 2);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        pppbVar13 = (byte ***)
                    FUN_710392e290(0x10,ppplVar27,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7,
                                   param_8);
        if (pppbVar13 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_7c[0] = 0;
            pppplVar17 = &local_b0;
            local_b0 = ppplVar27;
            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
            if (((uVar32 & 1) != 0) &&
               (pppbVar13 = (byte ***)
                            FUN_710392e290(0x10,ppplVar27,pppplVar17,ppppbVar19,pppplVar20,param_6,
                                           param_7,param_8), pppbVar13 != (byte ***)0x0))
            goto LAB_7101dfa930;
          }
LAB_7101dfa92c:
          pppbVar13 = (byte ***)0x0;
        }
LAB_7101dfa930:
        psVar4 = (short *)((long)pppbVar13 + uVar9 * 2);
        pppbVar36 = (byte ***)((long)pppbVar13 + (long)pppplVar12 * 2);
        pppbVar35 = (byte ***)(psVar4 + 1);
        *psVar4 = sVar5;
        if (0 < (long)pppplVar33) {
          memcpy(pppbVar13,pppbVar26,(size_t)pppplVar33);
          pppplVar17 = pppplVar33;
        }
        local_240 = (undefined **)pppbVar13;
        local_238 = pppbVar35;
        local_230 = pppbVar36;
        if (pppbVar26 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar26);
        }
      }
      if (cVar6 != '\x02') goto LAB_7101dfa970;
    }
    else {
      sVar5 = *(short *)((long)param_1 + 0x69a);
      if (sVar5 != -1) {
        pppbVar26 = (byte ***)
                    FUN_710392e290(0x10,2,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7,param_8);
        if (pppbVar26 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_7c[0] = 0;
            local_b0 = (long ***)0x2;
            pppplVar17 = &local_b0;
            uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
            if (((uVar9 & 1) != 0) &&
               (pppbVar26 = (byte ***)
                            FUN_710392e290(0x10,2,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7,
                                           param_8), pppbVar26 != (byte ***)0x0))
            goto LAB_7101dfa5d0;
          }
          pppbVar26 = (byte ***)0x0;
        }
LAB_7101dfa5d0:
        local_238 = (byte ***)((long)pppbVar26 + 2);
        *(short *)pppbVar26 = sVar5;
        local_240 = (undefined **)pppbVar26;
      }
      local_230 = local_238;
      if (cVar6 != '\x01') goto LAB_7101dfa888;
LAB_7101dfa970:
      pppbVar26 = (byte ***)local_240;
      sVar5 = *(short *)((long)param_1 + 0x69e);
      if (sVar5 != -1) {
        if (local_238 == local_230) {
          sVar34 = (long)local_238 - (long)local_240;
          if ((long)sVar34 < -2) {
LAB_7101dfab30:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar9 = ((long)sVar34 >> 1) + 1;
          uVar32 = (long)local_230 - (long)local_240;
          if (uVar9 <= uVar32) {
            uVar9 = uVar32;
          }
          if (0x3ffffffffffffffe < (ulong)((long)uVar32 >> 1)) {
            uVar9 = 0x7fffffffffffffff;
          }
          if (uVar9 == 0) goto LAB_7101dfaa40;
          if ((long)uVar9 < 0) {
LAB_7101dfab2c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          ppplVar27 = (long ***)(uVar9 * 2);
          if (ppplVar27 == (long ***)0x0) {
            ppplVar27 = (long ***)0x1;
          }
          pppbVar13 = (byte ***)
                      FUN_710392e290(0x10,ppplVar27,pppplVar17,ppppbVar19,pppplVar20,param_6,param_7
                                     ,param_8);
          if (pppbVar13 == (byte ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_7c[0] = 0;
              pppplVar17 = &local_b0;
              local_b0 = ppplVar27;
              uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
              if (((uVar32 & 1) != 0) &&
                 (pppbVar13 = (byte ***)
                              FUN_710392e290(0x10,ppplVar27,pppplVar17,ppppbVar19,pppplVar20,param_6
                                             ,param_7,param_8), pppbVar13 != (byte ***)0x0))
              goto LAB_7101dfaa44;
            }
LAB_7101dfaa40:
            pppbVar13 = (byte ***)0x0;
          }
LAB_7101dfaa44:
          psVar4 = (short *)((long)pppbVar13 + ((long)sVar34 >> 1) * 2);
          pppbVar36 = (byte ***)((long)pppbVar13 + uVar9 * 2);
          pppbVar35 = (byte ***)(psVar4 + 1);
          *psVar4 = sVar5;
          if (0 < (long)sVar34) {
            memcpy(pppbVar13,pppbVar26,sVar34);
          }
          local_240 = (undefined **)pppbVar13;
          local_238 = pppbVar35;
          local_230 = pppbVar36;
          if (pppbVar26 != (byte ***)0x0) {
            FUN_710392eb40((ulong)pppbVar26);
          }
        }
        else {
          *(short *)local_238 = sVar5;
          local_238 = (byte ***)((long)local_238 + 2);
        }
      }
    }
    pppbVar26 = (byte ***)local_240;
    if (local_238 != (byte ***)local_240) {
      uVar9 = 0;
      pppplVar17 = local_c0;
      do {
        pppplVar33 = local_c8;
        if (local_c8 != pppplVar17) {
          do {
            while (*(short *)((long)pppbVar26 + uVar9 * 2) == *(short *)*pppplVar33) {
              sVar34 = (long)pppplVar17 - (long)(pppplVar33 + 1);
              if (sVar34 != 0) {
                memmove(pppplVar33,pppplVar33 + 1,sVar34);
              }
              pppplVar17 = pppplVar33 + ((long)sVar34 >> 3);
              pppbVar26 = (byte ***)local_240;
              local_c0 = pppplVar17;
              if (pppplVar33 == pppplVar17) goto LAB_7101dfaaf4;
            }
            pppplVar33 = pppplVar33 + 1;
            pppbVar26 = (byte ***)local_240;
          } while (pppplVar33 != pppplVar17);
        }
LAB_7101dfaaf4:
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (uVar9 < (ulong)((long)local_238 - (long)pppbVar26 >> 1));
    }
    if (pppbVar26 != (byte ***)0x0) {
      local_238 = pppbVar26;
      FUN_710392eb40((ulong)pppbVar26);
    }
    break;
  case 0xd:
    lVar29 = *(long *)(lVar22 + 0x30);
    ppplVar27 = (long ***)(lVar29 + 72000);
    lVar22 = 480000;
    local_c0 = (long ****)0x0;
    do {
      pppplVar17 = local_c8;
      if (*(short *)(ppplVar27 + 1) != -1) {
        if (local_c0 < local_b8) {
          *local_c0 = ppplVar27;
          local_c0 = local_c0 + 1;
        }
        else {
          pppplVar33 = (long ****)((long)local_c0 - (long)local_c8);
          uVar9 = ((long)pppplVar33 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) goto LAB_7101dfab1c;
          if ((ulong)((long)local_b8 - (long)local_c8 >> 3) < 0xfffffffffffffff) {
            uVar32 = (long)local_b8 - (long)local_c8 >> 2;
            if (uVar9 <= uVar32) {
              uVar9 = uVar32;
            }
            if (uVar9 != 0) {
              if (uVar9 >> 0x3d == 0) goto LAB_7101dfa684;
              goto LAB_7101dfab2c;
            }
LAB_7101dfa6e4:
            pppplVar12 = (long ****)0x0;
          }
          else {
            uVar9 = 0x1fffffffffffffff;
LAB_7101dfa684:
            pppbVar26 = (byte ***)(uVar9 * 8);
            if (pppbVar26 == (byte ***)0x0) {
              pppbVar26 = (byte ***)0x1;
            }
            pppplVar12 = (long ****)
                         FUN_710392e290(0x10,pppbVar26,(long ****)pcVar16,ppppbVar19,pppplVar20,
                                        param_6,param_7,param_8);
            if (pppplVar12 == (long ****)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
                pcVar16 = (char *)&local_240;
                local_240 = (undefined **)pppbVar26;
                uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                if (((uVar32 & 1) != 0) &&
                   (pppplVar12 = (long ****)
                                 FUN_710392e290(0x10,pppbVar26,(long ****)pcVar16,ppppbVar19,
                                                pppplVar20,param_6,param_7,param_8),
                   pppplVar12 != (long ****)0x0)) goto LAB_7101dfa6e8;
              }
              goto LAB_7101dfa6e4;
            }
          }
LAB_7101dfa6e8:
          pppplVar3 = pppplVar12 + ((long)pppplVar33 >> 3);
          *pppplVar3 = ppplVar27;
          if (0 < (long)pppplVar33) {
            memcpy(pppplVar12,pppplVar17,(size_t)pppplVar33);
            pcVar16 = (char *)pppplVar33;
          }
          local_c8 = pppplVar12;
          local_c0 = pppplVar3 + 1;
          local_b8 = pppplVar12 + uVar9;
          if (pppplVar17 != (long ****)0x0) {
            FUN_710392eb40((ulong)pppplVar17);
          }
        }
      }
      ppplVar27 = ppplVar27 + 10;
      lVar22 = lVar22 + -0x50;
    } while (lVar22 != 0);
    ppplVar27 = (long ***)(lVar29 + 0x88cc0);
    lVar22 = 8000;
    do {
      pppplVar17 = local_c8;
      if (*(short *)(ppplVar27 + 1) != -1) {
        if (local_c0 < local_b8) {
          *local_c0 = ppplVar27;
          local_c0 = local_c0 + 1;
        }
        else {
          pppplVar33 = (long ****)((long)local_c0 - (long)local_c8);
          uVar9 = ((long)pppplVar33 >> 3) + 1;
          if (uVar9 >> 0x3d != 0) {
LAB_7101dfab1c:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_b8 - (long)local_c8 >> 3) < 0xfffffffffffffff) {
            uVar32 = (long)local_b8 - (long)local_c8 >> 2;
            if (uVar9 <= uVar32) {
              uVar9 = uVar32;
            }
            if (uVar9 != 0) {
              if (uVar9 >> 0x3d == 0) goto LAB_7101dfa7bc;
              goto LAB_7101dfab2c;
            }
LAB_7101dfa81c:
            pppplVar12 = (long ****)0x0;
          }
          else {
            uVar9 = 0x1fffffffffffffff;
LAB_7101dfa7bc:
            pppbVar26 = (byte ***)(uVar9 * 8);
            if (pppbVar26 == (byte ***)0x0) {
              pppbVar26 = (byte ***)0x1;
            }
            pppplVar12 = (long ****)
                         FUN_710392e290(0x10,pppbVar26,(long ****)pcVar16,ppppbVar19,pppplVar20,
                                        param_6,param_7,param_8);
            if (pppplVar12 == (long ****)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
                pcVar16 = (char *)&local_240;
                local_240 = (undefined **)pppbVar26;
                uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
                if (((uVar32 & 1) != 0) &&
                   (pppplVar12 = (long ****)
                                 FUN_710392e290(0x10,pppbVar26,(long ****)pcVar16,ppppbVar19,
                                                pppplVar20,param_6,param_7,param_8),
                   pppplVar12 != (long ****)0x0)) goto LAB_7101dfa820;
              }
              goto LAB_7101dfa81c;
            }
          }
LAB_7101dfa820:
          pppplVar3 = pppplVar12 + ((long)pppplVar33 >> 3);
          *pppplVar3 = ppplVar27;
          if (0 < (long)pppplVar33) {
            memcpy(pppplVar12,pppplVar17,(size_t)pppplVar33);
            pcVar16 = (char *)pppplVar33;
          }
          local_c8 = pppplVar12;
          local_c0 = pppplVar3 + 1;
          local_b8 = pppplVar12 + uVar9;
          if (pppplVar17 != (long ****)0x0) {
            FUN_710392eb40((ulong)pppplVar17);
          }
        }
      }
      ppplVar27 = ppplVar27 + 10;
      lVar22 = lVar22 + -0x50;
    } while (lVar22 != 0);
  }
  if ((ulong)((long)(param_1[0xcf] - param_1[0xce]) >> 2) <= (ulong)*(uint *)(param_1 + 0xd1)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  iVar14 = *(int *)(param_1[0xce] + (ulong)*(uint *)(param_1 + 0xd1) * 4);
  cVar6 = *(char *)((long)param_1 + 0x63e);
  *(undefined4 *)((long)param_1 + 0x30c) = *(undefined4 *)(param_1 + 199);
  pppplVar17 = (long ****)(param_1 + 0xc);
  if ((long *****)(param_1 + 0x48) != &local_c8) {
    FUN_7101958040(param_1 + 0x48,local_c8,local_c0,ppppbVar19,pppplVar20,param_6,param_7,param_8);
  }
  param_1[0x4b] = param_1[0x49];
  FUN_7101dfe6f0((long)pppplVar17,iVar14);
  *(int *)((long)param_1 + 0x304) = (int)cVar6;
  *(undefined1 *)(param_1 + 0x60) = uVar31;
  memset(param_1 + 0x62,0,0x2fc);
  local_240 = (undefined **)0x0;
  local_238 = (byte ***)0x4248000041800000;
  local_228 = 0;
  uStack_226 = 1;
  local_1f0 = (long *)0x0;
  local_230 = (byte ***)0x101013f800000;
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  uStack_21f = 0;
  uStack_221 = 0;
  uStack_220 = 0;
  uStack_225 = 0;
  uStack_224 = 0;
  uStack_222 = 0;
  FUN_710337e790((long)&local_240);
  if (((ulong)param_5 & 1) == 0) {
    local_b0 = (long ***)&DAT_71050b0ec0;
    local_90 = &local_b0;
    FUN_71003cb050((long *)&local_b0,alStack_210);
    if (&local_b0 == local_90) {
      pplVar25 = (*local_90)[4];
    }
    else {
      if (local_90 == (long ****)0x0) goto LAB_7101dfa3ac;
      pplVar25 = (*local_90)[5];
    }
    (*(code *)pplVar25)();
  }
LAB_7101dfa3ac:
  local_230 = (byte ***)CONCAT44(1,(undefined4)local_230);
  uStack_224 = 0x101;
  uStack_222 = *(undefined1 *)((long)param_1 + 0x63c);
  uStack_221 = *(undefined1 *)((long)param_1 + 0x63d);
  pcVar16 = "scroll";
  ppppbVar19 = (byte ****)&local_240;
  local_240 = (undefined **)
              CONCAT44((int)((ulong)((long)local_c0 - (long)local_c8) >> 3),(undefined4)local_240);
  FUN_7103781a20(param_1 + 7,puVar1,(byte ****)"scroll",ppppbVar19,pppplVar17,param_6,param_7,
                 param_8);
  (**(code **)(*(long *)param_1[7] + 0x70))((long *)param_1[7],0);
  FUN_7101df6240((long)param_1,local_c8 != local_c0,pcVar16,ppppbVar19,pppplVar17,param_6,param_7,
                 param_8);
  if (alStack_150 == local_130) {
    pcVar23 = *(code **)(*local_130 + 0x20);
LAB_7101dfa440:
    (*pcVar23)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar23 = *(code **)(*local_130 + 0x28);
    goto LAB_7101dfa440;
  }
  if (alStack_180 == local_160) {
    pcVar23 = *(code **)(*local_160 + 0x20);
LAB_7101dfa470:
    (*pcVar23)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar23 = *(code **)(*local_160 + 0x28);
    goto LAB_7101dfa470;
  }
  if (alStack_1b0 == local_190) {
    pcVar23 = *(code **)(*local_190 + 0x20);
LAB_7101dfa4a0:
    (*pcVar23)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar23 = *(code **)(*local_190 + 0x28);
    goto LAB_7101dfa4a0;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar23 = *(code **)(*local_1c0 + 0x20);
LAB_7101dfa4d0:
    (*pcVar23)();
  }
  else if (local_1c0 != (long *)0x0) {
    pcVar23 = *(code **)(*local_1c0 + 0x28);
    goto LAB_7101dfa4d0;
  }
  if (alStack_210 == local_1f0) {
    pcVar23 = *(code **)(*local_1f0 + 0x20);
  }
  else {
    if (local_1f0 == (long *)0x0) goto LAB_7101dfa504;
    pcVar23 = *(code **)(*local_1f0 + 0x28);
  }
  (*pcVar23)();
LAB_7101dfa504:
  if (local_c8 != (long ****)0x0) {
    local_c0 = local_c8;
    FUN_710392eb40((ulong)local_c8);
  }
  FUN_7101df5790((long)param_1,(ulong)*(uint *)(param_1 + 199),(long ****)pcVar16,ppppbVar19,
                 pppplVar17,param_6,param_7,param_8);
  return;
}

