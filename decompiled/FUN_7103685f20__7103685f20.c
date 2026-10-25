// addr:      7103685f20
// offset:    0x3685f20
// name:      FUN_7103685f20
// mangled:   
// signature: undefined4 __cdecl FUN_7103685f20(long * param_1)


undefined4 FUN_7103685f20(long *param_1)

{
  uint uVar1;
  void *pvVar2;
  long ***ppplVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  long *****ppppplVar9;
  byte ****ppppbVar10;
  long ****in_x4;
  undefined8 in_x5;
  long ***in_x6;
  long ***in_x7;
  long **pplVar11;
  long ***ppplVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long ****pppplVar21;
  long **pplVar22;
  long **pplVar23;
  long ***ppplVar24;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined2 uStack_df;
  undefined1 uStack_dd;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined1 uStack_d3;
  undefined2 uStack_d2;
  undefined8 uStack_d0;
  long ***local_c8;
  long **local_c0;
  long *local_b8;
  long ****local_b0;
  long local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 uStack_87;
  undefined1 uStack_83;
  undefined2 uStack_82;
  undefined1 local_80;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  long **local_78;
  uint local_70 [2];
  long local_68;
  
  if (((*param_1 == 0) || ((long *)param_1[0xd] == (long *)0x0)) ||
     (*(long *)param_1[0xd] != param_1[0xe])) {
    return 0;
  }
  uStack_7a = 0;
  uStack_7f = 0x65636170;
  uStack_87 = 0x69646e65;
  uStack_83 = 0x6e;
  uStack_82 = 0x5f67;
  local_80 = 0x73;
  local_90._0_4_ = 0x72756328;
  local_90._4_1_ = 0x76;
  local_90._5_2_ = 0x5f65;
  local_90._7_1_ = 0x62;
  local_88 = 0x6c;
  uStack_7b = 0;
  FUN_71038db170(&uStack_d0,param_1[2],(byte *)&local_90);
  if ((local_c0 != (long **)0x0) && (*local_c0 == local_b8)) {
    return 0;
  }
  if ((long *)param_1[0xdc] == (long *)0x0) {
    return 0;
  }
  if (*(long *)param_1[0xdc] != param_1[0xdd]) {
    return 0;
  }
  uStack_d2 = 0;
  local_e8._0_1_ = 0x28;
  uStack_df = 0x6e65;
  uStack_dd = 100;
  uStack_dc = 0x5f676e69;
  local_d8 = 0x73;
  local_e8._1_4_ = 0x76727563;
  local_e8._5_2_ = 0x5f65;
  local_e8._7_1_ = 0x62;
  local_e0 = 0x6c;
  uStack_d7 = 0x65636170;
  uStack_d3 = 0;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  local_b0 = (long ****)&PTR_FUN_7105239630;
  local_a8 = 0;
  if (((long *)param_1[0xd] != (long *)0x0) && (*(long *)param_1[0xd] == param_1[0xe])) {
    local_a8 = param_1[0xc];
    if (local_a8 == 0) {
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
    }
    else {
      local_a0 = *(undefined8 **)(local_a8 + 8);
      local_98 = *local_a0;
    }
  }
  pbVar8 = (byte *)&local_e8;
  ppppplVar9 = &local_b0;
  FUN_71038d9f10(&local_90,param_1[2],pbVar8,ppppplVar9,in_x4,in_x5,in_x6,in_x7);
  plVar20 = (long *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
  if ((plVar20 == (long *)0x0) || ((long **)*plVar20 != local_78)) {
    local_c8 = (long ***)0x0;
LAB_71036860b8:
    plVar20 = (long *)0x0;
    local_c0 = (long **)0x0;
  }
  else {
    local_c8 = (long ***)CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88)));
    if (local_c8 == (long ***)0x0) goto LAB_71036860b8;
    local_c0 = local_c8[1];
    plVar20 = *local_c0;
  }
  pplVar11 = local_c0;
  ppplVar3 = local_c8;
  local_b8 = plVar20;
  if (((byte)local_e8 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT41(uStack_d7,local_d8)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  uStack_7a = 0;
  uStack_87 = 0x69646e65;
  uStack_83 = 0x6e;
  uStack_82 = 0x5f67;
  local_80 = 0x73;
  local_90._0_4_ = 0x72756328;
  local_90._4_1_ = 0x76;
  local_90._5_2_ = 0x5f65;
  local_90._7_1_ = 0x62;
  local_88 = 0x6c;
  uStack_7f = 0x65636170;
  uStack_7b = 0;
  FUN_7103676c70(param_1 + 0x17,&local_90,pbVar8,(byte ****)ppppplVar9,in_x4,in_x5,in_x6,in_x7);
  if (((uint)local_90 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  pplVar22 = ppplVar3[0x32];
  *(undefined4 *)(ppplVar3 + 0xe) = 5;
  if (pplVar22 != (long **)0x0) {
    pplVar23 = ppplVar3[0x31];
    do {
      pplVar22 = (long **)((long)pplVar22 + -1);
      (*(code *)**pplVar23)(pplVar23);
      pplVar23 = pplVar23 + 4;
    } while (pplVar22 != (long **)0x0);
  }
  ppplVar3[0x32] = (long **)0x0;
  if (ppplVar3[0x33] < (long **)0x5) {
    iVar4 = FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_000000a0,(byte ****)ppppplVar9,in_x4,in_x5
                           ,in_x6,in_x7);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_90._0_4_ = 0xa0;
      local_90._4_1_ = 0;
      local_90._5_2_ = 0;
      local_90._7_1_ = 0;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_000000a0,(byte ****)ppppplVar9,in_x4,in_x5,
                       in_x6,in_x7);
      }
    }
    nu::VirtualAllocHook(0xa0,0x10,local_b0);
    FUN_71038d87d0((long *)(ppplVar3 + 0x31),local_b0,5,ppplVar3[0x31] + (long)ppplVar3[0x32] * 4);
  }
  if ((pplVar11 == (long **)0x0) || (*pplVar11 != plVar20)) {
    plVar20 = (long *)0x0;
    param_1[0xe1] = 0;
    param_1[0xe2] = 0;
  }
  else {
    param_1[0xe1] = (long)ppplVar3;
    pplVar11 = ppplVar3[1];
    param_1[0xe2] = (long)pplVar11;
    plVar20 = *pplVar11;
  }
  param_1[0xe3] = (long)plVar20;
  local_90._7_1_ = 0;
  ppppplVar9 = (long *****)&local_90;
  local_90._5_2_ = 0x6372;
  ppppbVar10 = (byte ****)0x0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_83 = 0;
  uStack_82 = 0;
  local_80 = 0;
  uStack_7f = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  local_90._0_4_ = 0x5f72740c;
  local_90._4_1_ = 0x73;
  plVar20 = FUN_7103686e90((long)param_1,ppplVar3,ppppplVar9,(byte ****)0x0,in_x4,in_x5,in_x6,in_x7)
  ;
  if (((uint)local_90 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  local_e8._7_1_ = 0;
  local_e8._0_1_ = 10;
  local_e8._1_4_ = 0x6e656c62;
  local_e8._5_2_ = 100;
  local_e0 = 0;
  uStack_df = 0;
  uStack_dd = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d7 = 0;
  uStack_d3 = 0;
  uStack_d2 = 0;
  plVar6 = FUN_71036836c0((long)(param_1 + 5),(long *****)&local_e8,ppppplVar9,ppppbVar10,in_x4,
                          in_x5,in_x6,in_x7);
  ppppbVar10 = (byte ****)0x2;
  FUN_71038d8950(&local_90,ppplVar3,(long ****)&local_e8,(byte ****)0x2,in_x4,in_x5,in_x6,in_x7);
  plVar14 = (long *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
  if ((plVar14 == (long *)0x0) || ((long **)*plVar14 != local_78)) {
    plVar6[6] = 0;
LAB_710368632c:
    lVar13 = 0;
    lVar15 = 0;
    plVar6[7] = 0;
  }
  else {
    lVar13 = CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88)));
    plVar6[6] = lVar13;
    if (lVar13 == 0) goto LAB_710368632c;
    plVar14 = *(long **)(lVar13 + 8);
    plVar6[7] = (long)plVar14;
    lVar15 = *plVar14;
  }
  plVar6[8] = lVar15;
  *(undefined1 *)(lVar13 + 0x114) = 0;
  iVar4 = FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000040,ppppbVar10,in_x4,in_x5,in_x6,in_x7)
  ;
  if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_90._0_4_ = 0x40;
    local_90._4_1_ = 0;
    local_90._5_2_ = 0;
    local_90._7_1_ = 0;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000040,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
    }
  }
  nu::VirtualAllocHook(0x40,0x10,local_b0);
  pppplVar21 = local_b0;
  FUN_71037c3a70(local_b0);
  *pppplVar21 = (long ***)&PTR_FUN_7105239800;
  *(undefined2 *)(pppplVar21 + 3) = 0;
  pppplVar21[2] = (long ***)0x0;
  *(undefined8 *)((long)pppplVar21 + 0x31) = 0;
  *(undefined8 *)((long)pppplVar21 + 0x2c) = 0;
  *(undefined8 *)((long)pppplVar21 + 0x24) = 0;
  *(undefined8 *)((long)pppplVar21 + 0x1c) = 0;
  *(undefined1 *)((long)pppplVar21 + 0x39) = 1;
  if (pppplVar21 == (long ****)0x0) {
    ppplVar24 = (long ***)0x0;
    pplVar11 = (long **)0x0;
  }
  else {
    ppplVar24 = pppplVar21[1];
    pplVar11 = *ppplVar24;
  }
  local_80 = 0;
  uStack_7f = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  local_78 = (long **)0x0;
  local_90._0_4_ = 0x5239650;
  local_90._4_1_ = 0x71;
  local_90._5_2_ = 0;
  local_90._7_1_ = 0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_83 = 0;
  uStack_82 = 0;
  if ((ppplVar24 != (long ***)0x0) && (*ppplVar24 == pplVar11)) {
    local_88 = SUB81(pppplVar21,0);
    uStack_87 = (undefined4)((ulong)pppplVar21 >> 8);
    uStack_83 = (undefined1)((ulong)pppplVar21 >> 0x28);
    uStack_82 = (undefined2)((ulong)pppplVar21 >> 0x30);
    if (pppplVar21 == (long ****)0x0) {
      ppplVar12 = (long ***)0x0;
      local_78 = (long **)0x0;
    }
    else {
      ppplVar12 = pppplVar21[1];
      local_78 = *ppplVar12;
    }
    ppplVar24 = (long ***)0x0;
    pppplVar21 = (long ****)0x0;
    pplVar11 = (long **)0x0;
    local_80 = SUB81(ppplVar12,0);
    uStack_7f = (undefined4)((ulong)ppplVar12 >> 8);
    uStack_7b = (undefined1)((ulong)ppplVar12 >> 0x28);
    uStack_7a = (undefined2)((ulong)ppplVar12 >> 0x30);
  }
  FUN_71038d78d0(plVar6[6],(long)&local_90);
  plVar14 = (long *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
  local_90._0_4_ = 0x5239650;
  local_90._4_1_ = 0x71;
  local_90._5_2_ = 0;
  local_90._7_1_ = 0;
  if (((plVar14 != (long *)0x0) && ((long **)*plVar14 == local_78)) &&
     (plVar14 = (long *)CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88))),
     plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 8))();
  }
  lVar13 = plVar6[6];
  uVar1 = *(uint *)(lVar13 + 0x48);
  FUN_71038d74f0(&local_b0,uVar1 ^ (int)uVar1 >> 0x1f,lVar13 + 0x50);
  uVar1 = *(uint *)(plVar6 + 9);
  uVar1 = uVar1 ^ (int)uVar1 >> 0x1f;
  if ((uVar1 < 0xd) || (uVar1 - 0xe < 5)) {
    local_68 = local_a8;
    local_70[0] = 0xd;
    FUN_7103683c00((uint *)(plVar6 + 9),local_70);
  }
  else {
    if (uVar1 != 0xd) goto LAB_7103686e80;
    plVar6[10] = local_a8;
  }
  if (((ppplVar24 != (long ***)0x0) && (pppplVar21 != (long ****)0x0)) && (*ppplVar24 == pplVar11))
  {
    (*(code *)(*pppplVar21)[1])(pppplVar21);
  }
  if (((byte)local_e8 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT41(uStack_d7,local_d8)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  local_88 = 0;
  uStack_87 = 0;
  uStack_83 = 0;
  uStack_82 = 0;
  local_80 = 0;
  uStack_7f = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  ppppplVar9 = (long *****)&local_90;
  local_90._5_2_ = 0x7473;
  ppppbVar10 = (byte ****)0x1;
  local_90._0_4_ = 0x5f72740c;
  local_90._4_1_ = 100;
  local_90._7_1_ = 0;
  plVar14 = FUN_7103686e90((long)param_1,ppplVar3,ppppplVar9,(byte ****)0x1,in_x4,in_x5,in_x6,in_x7)
  ;
  if (((uint)local_90 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  uStack_dc = 0;
  local_e8._0_1_ = 0x14;
  local_e8._1_4_ = 0x6e617274;
  local_e8._5_2_ = 0x6973;
  local_e8._7_1_ = 0x74;
  local_e0 = 0x69;
  local_d8 = 0;
  uStack_d7 = 0;
  uStack_d3 = 0;
  uStack_d2 = 0;
  uStack_dd = 0;
  uStack_df = 0x6e6f;
  plVar7 = FUN_71036836c0((long)(param_1 + 5),(long *****)&local_e8,ppppplVar9,ppppbVar10,in_x4,
                          in_x5,in_x6,in_x7);
  ppppbVar10 = (byte ****)0x2;
  FUN_71038d8950(&local_90,ppplVar3,(long ****)&local_e8,(byte ****)0x2,in_x4,in_x5,in_x6,in_x7);
  plVar16 = (long *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
  if ((plVar16 == (long *)0x0) || ((long **)*plVar16 != local_78)) {
    plVar7[6] = 0;
LAB_7103686614:
    lVar13 = 0;
    lVar15 = 0;
    plVar7[7] = 0;
  }
  else {
    lVar13 = CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88)));
    plVar7[6] = lVar13;
    if (lVar13 == 0) goto LAB_7103686614;
    plVar16 = *(long **)(lVar13 + 8);
    plVar7[7] = (long)plVar16;
    lVar15 = *plVar16;
  }
  plVar7[8] = lVar15;
  *(undefined1 *)(lVar13 + 0x114) = 0;
  iVar4 = FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000040,ppppbVar10,in_x4,in_x5,in_x6,in_x7)
  ;
  if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_90._0_4_ = 0x40;
    local_90._4_1_ = 0;
    local_90._5_2_ = 0;
    local_90._7_1_ = 0;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_90);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_b0,0x10,(long ****)&DAT_00000040,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
    }
  }
  nu::VirtualAllocHook(0x40,0x10,local_b0);
  pppplVar21 = local_b0;
  FUN_71037c3a70(local_b0);
  *(undefined4 *)(pppplVar21 + 2) = 0;
  *(undefined1 *)((long)pppplVar21 + 0x14) = 1;
  *pppplVar21 = (long ***)&PTR_FUN_7105239838;
  *(undefined4 *)((long)pppplVar21 + 0x34) = 0;
  *(undefined1 *)(pppplVar21 + 7) = 0;
  *(undefined1 *)(pppplVar21 + 6) = 0;
  pppplVar21[3] = (long ***)0x0;
  pppplVar21[4] = (long ***)0x0;
  pppplVar21[5] = (long ***)0x0;
  if (pppplVar21 == (long ****)0x0) {
    ppplVar24 = (long ***)0x0;
    pplVar11 = (long **)0x0;
  }
  else {
    ppplVar24 = pppplVar21[1];
    pplVar11 = *ppplVar24;
  }
  local_80 = 0;
  uStack_7f = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  local_78 = (long **)0x0;
  local_90._0_4_ = 0x5239650;
  local_90._4_1_ = 0x71;
  local_90._5_2_ = 0;
  local_90._7_1_ = 0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_83 = 0;
  uStack_82 = 0;
  if ((ppplVar24 != (long ***)0x0) && (*ppplVar24 == pplVar11)) {
    local_88 = SUB81(pppplVar21,0);
    uStack_87 = (undefined4)((ulong)pppplVar21 >> 8);
    uStack_83 = (undefined1)((ulong)pppplVar21 >> 0x28);
    uStack_82 = (undefined2)((ulong)pppplVar21 >> 0x30);
    if (pppplVar21 == (long ****)0x0) {
      ppplVar12 = (long ***)0x0;
      local_78 = (long **)0x0;
    }
    else {
      ppplVar12 = pppplVar21[1];
      local_78 = *ppplVar12;
    }
    ppplVar24 = (long ***)0x0;
    pppplVar21 = (long ****)0x0;
    pplVar11 = (long **)0x0;
    local_80 = SUB81(ppplVar12,0);
    uStack_7f = (undefined4)((ulong)ppplVar12 >> 8);
    uStack_7b = (undefined1)((ulong)ppplVar12 >> 0x28);
    uStack_7a = (undefined2)((ulong)ppplVar12 >> 0x30);
  }
  FUN_71038d78d0(plVar7[6],(long)&local_90);
  plVar16 = (long *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
  local_90._0_4_ = 0x5239650;
  local_90._4_1_ = 0x71;
  local_90._5_2_ = 0;
  local_90._7_1_ = 0;
  if (((plVar16 != (long *)0x0) && ((long **)*plVar16 == local_78)) &&
     (plVar16 = (long *)CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88))),
     plVar16 != (long *)0x0)) {
    (**(code **)(*plVar16 + 8))();
  }
  lVar13 = plVar7[6];
  uVar1 = *(uint *)(lVar13 + 0x48);
  FUN_71038d74f0(&local_b0,uVar1 ^ (int)uVar1 >> 0x1f,lVar13 + 0x50);
  uVar1 = *(uint *)(plVar7 + 9);
  uVar1 = uVar1 ^ (int)uVar1 >> 0x1f;
  if ((uVar1 < 0xf) || (uVar1 - 0x10 < 3)) {
    local_68 = local_a8;
    local_70[0] = 0xf;
    FUN_7103683c00((uint *)(plVar7 + 9),local_70);
  }
  else {
    if (uVar1 != 0xf) {
LAB_7103686e80:
                    /* WARNING: Subroutine does not return */
      FUN_71035da970();
    }
    plVar7[10] = local_a8;
  }
  if (((ppplVar24 != (long ***)0x0) && (pppplVar21 != (long ****)0x0)) && (*ppplVar24 == pplVar11))
  {
    (*(code *)(*pppplVar21)[1])(pppplVar21);
  }
  if (((byte)local_e8 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_d2,CONCAT15(uStack_d3,CONCAT41(uStack_d7,local_d8)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  uStack_82 = 0;
  local_90._0_4_ = 0x656c6218;
  local_90._4_1_ = 0x6e;
  local_90._5_2_ = 0x5f64;
  local_90._7_1_ = 0x72;
  local_88 = 0x65;
  ppppbVar10 = (byte ****)0x1;
  local_80 = 0;
  uStack_7f = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  uStack_87 = 0x746c7573;
  uStack_83 = 0;
  plVar16 = FUN_7103686e90((long)param_1,ppplVar3,(long *****)&local_90,(byte ****)0x1,in_x4,in_x5,
                           in_x6,in_x7);
  param_1[0xe8] = (long)plVar16;
  if (((uint)local_90 & 1) != 0) {
    pvVar2 = (void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,local_80)));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  param_1[0xe4] = (long)plVar20;
  param_1[0xe5] = (long)plVar14;
  param_1[0xe6] = (long)(plVar7 + 5);
  uVar1 = *(uint *)(plVar7[6] + 0x48);
  FUN_71038d74f0(&local_90,uVar1 ^ (int)uVar1 >> 0x1f,plVar7[6] + 0x50);
  lVar13 = CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88)));
  lVar19 = param_1[0xc];
  uVar5 = *(ulong *)(lVar19 + 0x48);
  local_90._0_4_ = 0x1f;
  lVar15 = *(long *)(lVar13 + 0x18);
  uVar17 = *(long *)(lVar13 + 0x20) - lVar15 >> 2;
  if (uVar5 < uVar17 || uVar5 - uVar17 == 0) {
    if (uVar5 < uVar17) {
      *(ulong *)(lVar13 + 0x20) = lVar15 + uVar5 * 4;
    }
  }
  else {
    FUN_7102756040((long *)(lVar13 + 0x18),uVar5 - uVar17,(long ****)&local_90,ppppbVar10,in_x4,
                   in_x5,in_x6,in_x7);
  }
  *(undefined1 *)(lVar13 + 0x14) = 1;
  *(bool *)(lVar13 + 0x38) = *(long *)(lVar19 + 0x48) != 0;
  if (((((long *)plVar20[2] != (long *)0x0) && (*(long *)plVar20[2] == plVar20[3])) &&
      ((long *)plVar7[7] != (long *)0x0)) && (*(long *)plVar7[7] == plVar7[8])) {
    lVar13 = plVar7[6];
    if ((*(long **)(lVar13 + 0x38) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x38) == *(long *)(lVar13 + 0x40))) {
      lVar15 = plVar20[1];
      if ((*(long **)(lVar15 + 0x38) != (long *)0x0) &&
         ((**(long **)(lVar15 + 0x38) == *(long *)(lVar15 + 0x40) &&
          (*(long *)(lVar13 + 0x30) == *(long *)(lVar15 + 0x30))))) {
        FUN_71038d7c40(lVar13,(long)plVar20,0,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      }
    }
  }
  if (((((long *)plVar14[2] != (long *)0x0) && (*(long *)plVar14[2] == plVar14[3])) &&
      ((long *)plVar7[7] != (long *)0x0)) && (*(long *)plVar7[7] == plVar7[8])) {
    lVar13 = plVar7[6];
    if ((*(long **)(lVar13 + 0x38) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x38) == *(long *)(lVar13 + 0x40))) {
      lVar15 = plVar14[1];
      if ((*(long **)(lVar15 + 0x38) != (long *)0x0) &&
         ((**(long **)(lVar15 + 0x38) == *(long *)(lVar15 + 0x40) &&
          (*(long *)(lVar13 + 0x30) == *(long *)(lVar15 + 0x30))))) {
        FUN_71038d7c40(lVar13,(long)plVar14,1,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      }
    }
  }
  lVar13 = param_1[0xde];
  if ((((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) &&
      ((long *)plVar14[2] != (long *)0x0)) && (*(long *)plVar14[2] == plVar14[3])) {
    lVar15 = *(long *)(plVar14[1] + 0x30);
    if ((*(long **)(lVar15 + 0x20) != (long *)0x0) &&
       (**(long **)(lVar15 + 0x20) == *(long *)(lVar15 + 0x28))) {
      lVar19 = *(long *)(*(long *)(lVar13 + 8) + 0x30);
      if ((*(long **)(lVar19 + 0x20) != (long *)0x0) &&
         ((**(long **)(lVar19 + 0x20) == *(long *)(lVar19 + 0x28) &&
          (*(long *)(lVar15 + 0x18) == *(long *)(lVar19 + 0x18))))) {
        FUN_71038d7c40(plVar14[1],lVar13,0,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      }
    }
  }
  lVar13 = param_1[0xdf];
  if ((((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) &&
      ((long *)plVar14[2] != (long *)0x0)) && (*(long *)plVar14[2] == plVar14[3])) {
    lVar15 = *(long *)(plVar14[1] + 0x30);
    if ((*(long **)(lVar15 + 0x20) != (long *)0x0) &&
       (**(long **)(lVar15 + 0x20) == *(long *)(lVar15 + 0x28))) {
      lVar19 = *(long *)(*(long *)(lVar13 + 8) + 0x30);
      if ((*(long **)(lVar19 + 0x20) != (long *)0x0) &&
         ((**(long **)(lVar19 + 0x20) == *(long *)(lVar19 + 0x28) &&
          (*(long *)(lVar15 + 0x18) == *(long *)(lVar19 + 0x18))))) {
        FUN_71038d7c40(plVar14[1],lVar13,1,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      }
    }
  }
  param_1[0xe7] = (long)(plVar6 + 5);
  uVar1 = *(uint *)(plVar6[6] + 0x48);
  FUN_71038d74f0(&local_90,uVar1 ^ (int)uVar1 >> 0x1f,plVar6[6] + 0x50);
  lVar13 = CONCAT26(uStack_82,CONCAT15(uStack_83,CONCAT41(uStack_87,local_88)));
  lVar19 = param_1[0xc];
  uVar5 = *(ulong *)(lVar19 + 0x48);
  local_90._0_4_ = 0x1f;
  lVar15 = *(long *)(lVar13 + 0x20);
  uVar17 = *(long *)(lVar13 + 0x28) - lVar15 >> 2;
  if (uVar5 < uVar17 || uVar5 - uVar17 == 0) {
    if (uVar5 < uVar17) {
      *(ulong *)(lVar13 + 0x28) = lVar15 + uVar5 * 4;
    }
  }
  else {
    FUN_7102756040((long *)(lVar13 + 0x20),uVar5 - uVar17,(long ****)&local_90,ppppbVar10,in_x4,
                   in_x5,in_x6,in_x7);
  }
  *(undefined1 *)(lVar13 + 0x39) = 1;
  *(bool *)(lVar13 + 0x38) = *(long *)(lVar19 + 0x48) != 0;
  lVar13 = param_1[0xde];
  lVar15 = param_1[0xe7];
  if ((((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) &&
      (*(long **)(lVar15 + 0x10) != (long *)0x0)) &&
     (**(long **)(lVar15 + 0x10) == *(long *)(lVar15 + 0x18))) {
    lVar19 = *(long *)(*(long *)(lVar15 + 8) + 0x30);
    if ((*(long **)(lVar19 + 0x20) != (long *)0x0) &&
       (**(long **)(lVar19 + 0x20) == *(long *)(lVar19 + 0x28))) {
      lVar18 = *(long *)(*(long *)(lVar13 + 8) + 0x30);
      if ((*(long **)(lVar18 + 0x20) != (long *)0x0) &&
         ((**(long **)(lVar18 + 0x20) == *(long *)(lVar18 + 0x28) &&
          (*(long *)(lVar19 + 0x18) == *(long *)(lVar18 + 0x18))))) {
        FUN_71038d7c40(*(long *)(lVar15 + 8),lVar13,0,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
        lVar15 = param_1[0xe7];
      }
    }
  }
  lVar13 = param_1[0xdf];
  if ((((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) &&
      (*(long **)(lVar15 + 0x10) != (long *)0x0)) &&
     (**(long **)(lVar15 + 0x10) == *(long *)(lVar15 + 0x18))) {
    lVar19 = *(long *)(*(long *)(lVar15 + 8) + 0x30);
    if ((*(long **)(lVar19 + 0x20) != (long *)0x0) &&
       (**(long **)(lVar19 + 0x20) == *(long *)(lVar19 + 0x28))) {
      lVar18 = *(long *)(*(long *)(lVar13 + 8) + 0x30);
      if ((*(long **)(lVar18 + 0x20) != (long *)0x0) &&
         ((**(long **)(lVar18 + 0x20) == *(long *)(lVar18 + 0x28) &&
          (*(long *)(lVar19 + 0x18) == *(long *)(lVar18 + 0x18))))) {
        FUN_71038d7c40(*(long *)(lVar15 + 8),lVar13,1,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      }
    }
  }
  lVar13 = param_1[0xe6];
  lVar15 = param_1[0xe8];
  if ((((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) &&
      (*(long **)(lVar15 + 0x10) != (long *)0x0)) &&
     (**(long **)(lVar15 + 0x10) == *(long *)(lVar15 + 0x18))) {
    lVar19 = *(long *)(lVar15 + 8);
    if ((*(long **)(lVar19 + 0x38) != (long *)0x0) &&
       (**(long **)(lVar19 + 0x38) == *(long *)(lVar19 + 0x40))) {
      lVar18 = *(long *)(lVar13 + 8);
      if ((*(long **)(lVar18 + 0x38) != (long *)0x0) &&
         ((**(long **)(lVar18 + 0x38) == *(long *)(lVar18 + 0x40) &&
          (*(long *)(lVar19 + 0x30) == *(long *)(lVar18 + 0x30))))) {
        FUN_71038d7c40(lVar19,lVar13,0,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
        lVar15 = param_1[0xe8];
      }
    }
  }
  lVar13 = param_1[0xe7];
  plVar20 = *(long **)(lVar13 + 0x10);
  if (plVar20 != (long *)0x0) {
    if (((*plVar20 == *(long *)(lVar13 + 0x18)) && (*(long **)(lVar15 + 0x10) != (long *)0x0)) &&
       (**(long **)(lVar15 + 0x10) == *(long *)(lVar15 + 0x18))) {
      lVar15 = *(long *)(lVar15 + 8);
      if ((*(long **)(lVar15 + 0x38) != (long *)0x0) &&
         (**(long **)(lVar15 + 0x38) == *(long *)(lVar15 + 0x40))) {
        lVar19 = *(long *)(lVar13 + 8);
        if ((*(long **)(lVar19 + 0x38) != (long *)0x0) &&
           ((**(long **)(lVar19 + 0x38) == *(long *)(lVar19 + 0x40) &&
            (*(long *)(lVar15 + 0x30) == *(long *)(lVar19 + 0x30))))) {
          FUN_71038d7c40(lVar15,lVar13,1,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
          lVar13 = param_1[0xe7];
          plVar20 = *(long **)(lVar13 + 0x10);
          if (plVar20 == (long *)0x0) {
            return 1;
          }
        }
      }
    }
    lVar15 = param_1[0xe5];
    if (((*plVar20 == *(long *)(lVar13 + 0x18)) && (*(long **)(lVar15 + 0x10) != (long *)0x0)) &&
       (**(long **)(lVar15 + 0x10) == *(long *)(lVar15 + 0x18))) {
      lVar15 = *(long *)(lVar15 + 8);
      if ((*(long **)(lVar15 + 0x38) != (long *)0x0) &&
         (**(long **)(lVar15 + 0x38) == *(long *)(lVar15 + 0x40))) {
        lVar19 = *(long *)(lVar13 + 8);
        if ((*(long **)(lVar19 + 0x38) != (long *)0x0) &&
           ((**(long **)(lVar19 + 0x38) == *(long *)(lVar19 + 0x40) &&
            (*(long *)(lVar15 + 0x30) == *(long *)(lVar19 + 0x30))))) {
          FUN_71038d7c40(lVar15,lVar13,2,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
        }
      }
    }
  }
  return 1;
}

