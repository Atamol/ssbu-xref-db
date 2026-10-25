// addr:      7103686f80
// offset:    0x3686f80
// name:      FUN_7103686f80
// mangled:   
// signature: undefined4 __cdecl FUN_7103686f80(long * param_1)


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_7103686f80(long *param_1)

{
  uint uVar1;
  void *pvVar2;
  long ***ppplVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long ****pppplVar8;
  uint *puVar9;
  long *****ppppplVar10;
  byte ****ppppbVar11;
  long ****in_x4;
  undefined8 in_x5;
  long ***in_x6;
  long ***in_x7;
  long **pplVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long **pplVar17;
  long **pplVar18;
  long ***appplStack_258 [4];
  undefined8 auStack_238 [4];
  long ***appplStack_218 [4];
  undefined8 auStack_1f8 [4];
  long ***local_1d8;
  long *local_1d0;
  long *local_1c8;
  long local_1c0;
  undefined8 auStack_1b8 [4];
  long ***local_198;
  long *local_190;
  long *local_188;
  long local_180;
  undefined8 auStack_178 [4];
  long ***local_158;
  long *local_150;
  long *local_148;
  long local_140;
  undefined8 auStack_138 [4];
  long ***local_118;
  long *local_110;
  long *local_108;
  long local_100;
  undefined8 auStack_f8 [4];
  long ****local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  byte local_b8 [18];
  undefined6 uStack_a6;
  long ****local_a0;
  undefined1 local_98;
  undefined2 uStack_97;
  undefined1 uStack_95;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  long local_88;
  undefined8 uStack_80;
  long ***local_78;
  long **local_70;
  long *local_68;
  
  if (((*param_1 == 0) || ((long *)param_1[0xd] == (long *)0x0)) ||
     (*(long *)param_1[0xd] != param_1[0xe])) {
    return 0;
  }
  uStack_8e = 0;
  local_a0._0_1_ = 0x20;
  uStack_97 = 0x7473;
  uStack_95 = 0x5f;
  uStack_94 = 0x63617073;
  local_90 = 0x65;
  local_a0._1_7_ = 0x705f6c61636f6c;
  local_98 = 0x6f;
  uStack_8f = 0;
  FUN_71038db170(&uStack_80,param_1[2],(byte *)&local_a0);
  if ((local_70 != (long **)0x0) && (*local_70 == local_68)) {
    return 0;
  }
  if ((long *)param_1[0xe2] == (long *)0x0) {
    return 0;
  }
  if (*(long *)param_1[0xe2] != param_1[0xe3]) {
    return 0;
  }
  uStack_a6 = 0;
  local_b8[0] = 0x20;
  local_b8[9] = 0x73;
  local_b8[10] = 0x74;
  local_b8[0xb] = 0x5f;
  local_b8[0xc] = 0x73;
  local_b8[0xd] = 0x70;
  local_b8[0xe] = 0x61;
  local_b8[0xf] = 99;
  local_b8[0x10] = 0x65;
  local_b8[1] = 0x6c;
  local_b8[2] = 0x6f;
  local_b8[3] = 99;
  local_b8[4] = 0x61;
  local_b8[5] = 0x6c;
  local_b8[6] = 0x5f;
  local_b8[7] = 0x70;
  local_b8[8] = 0x6f;
  local_b8[0x11] = 0;
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_d8 = (long ****)&PTR_FUN_7105239630;
  local_d0 = 0;
  if (((long *)param_1[0xd] != (long *)0x0) && (*(long *)param_1[0xd] == param_1[0xe])) {
    local_d0 = param_1[0xc];
    if (local_d0 == 0) {
      local_c8 = (undefined8 *)0x0;
      local_c0 = 0;
    }
    else {
      local_c8 = *(undefined8 **)(local_d0 + 8);
      local_c0 = *local_c8;
    }
  }
  pbVar7 = local_b8;
  ppppplVar10 = &local_d8;
  FUN_71038d9f10(&local_a0,param_1[2],pbVar7,ppppplVar10,in_x4,in_x5,in_x6,in_x7);
  plVar16 = (long *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
  if ((plVar16 == (long *)0x0) || (*plVar16 != local_88)) {
    local_78 = (long ***)0x0;
LAB_7103687110:
    plVar16 = (long *)0x0;
    local_70 = (long **)0x0;
  }
  else {
    local_78 = (long ***)CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
    if (local_78 == (long ***)0x0) goto LAB_7103687110;
    local_70 = local_78[1];
    plVar16 = *local_70;
  }
  pplVar12 = local_70;
  ppplVar3 = local_78;
  local_68 = plVar16;
  if ((local_b8[0] & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_a6,CONCAT11(local_b8[0x11],local_b8[0x10]));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  uStack_8e = 0;
  local_a0._0_1_ = 0x20;
  uStack_97 = 0x7473;
  uStack_95 = 0x5f;
  uStack_94 = 0x63617073;
  local_90 = 0x65;
  local_a0._1_7_ = 0x705f6c61636f6c;
  local_98 = 0x6f;
  uStack_8f = 0;
  FUN_7103676c70(param_1 + 0x17,&local_a0,pbVar7,(byte ****)ppppplVar10,in_x4,in_x5,in_x6,in_x7);
  if (((byte)local_a0 & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  pplVar17 = ppplVar3[0x32];
  *(undefined4 *)(ppplVar3 + 0xe) = 5;
  if (pplVar17 != (long **)0x0) {
    pplVar18 = ppplVar3[0x31];
    do {
      pplVar17 = (long **)((long)pplVar17 + -1);
      (*(code *)**pplVar18)(pplVar18);
      pplVar18 = pplVar18 + 4;
    } while (pplVar17 != (long **)0x0);
  }
  ppplVar3[0x32] = (long **)0x0;
  if (ppplVar3[0x33] < (long **)0x5) {
    iVar4 = FUN_710392e1f0(&local_d8,0x10,(long ****)&DAT_000000a0,(byte ****)ppppplVar10,in_x4,
                           in_x5,in_x6,in_x7);
    if ((iVar4 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_a0._0_1_ = 0xa0;
      local_a0._1_7_ = 0;
      uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_a0);
      if ((uVar5 & 1) != 0) {
        FUN_710392e1f0(&local_d8,0x10,(long ****)&DAT_000000a0,(byte ****)ppppplVar10,in_x4,in_x5,
                       in_x6,in_x7);
      }
    }
    nu::VirtualAllocHook(0xa0,0x10,local_d8);
    FUN_71038d87d0((long *)(ppplVar3 + 0x31),local_d8,5,ppplVar3[0x31] + (long)ppplVar3[0x32] * 4);
  }
  if ((pplVar12 == (long **)0x0) || (*pplVar12 != plVar16)) {
    plVar16 = (long *)0x0;
    param_1[0xea] = 0;
    param_1[0xeb] = 0;
  }
  else {
    param_1[0xea] = (long)ppplVar3;
    pplVar12 = ppplVar3[1];
    param_1[0xeb] = (long)pplVar12;
    plVar16 = *pplVar12;
  }
  param_1[0xec] = (long)plVar16;
  local_90 = 0;
  uStack_8f = 0;
  uStack_8e = 0;
  uStack_94 = 0;
  local_a0._0_1_ = 0x14;
  local_a0._1_7_ = 0x705f7473726966;
  local_98 = 0x6f;
  uStack_97 = 0x7473;
  uStack_95 = 0;
  plVar16 = FUN_7103685540((long)param_1,ppplVar3,&local_a0,(byte ****)0x1,in_x4,in_x5,in_x6,in_x7);
  param_1[0xed] = (long)plVar16;
  if (((byte)local_a0 & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  local_90 = 0;
  uStack_8f = 0;
  uStack_8e = 0;
  uStack_94 = 0;
  local_a0._0_1_ = 0x14;
  local_a0._1_7_ = 0x745f7473726966;
  local_98 = 0x65;
  uStack_97 = 0x6d72;
  uStack_95 = 0;
  plVar16 = FUN_7103686e90((long)param_1,ppplVar3,&local_a0,(byte ****)0x1,in_x4,in_x5,in_x6,in_x7);
  param_1[0xee] = (long)plVar16;
  if (((byte)local_a0 & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  local_90 = 0;
  uStack_8f = 0;
  uStack_8e = 0;
  local_a0._0_1_ = 0x16;
  local_a0._1_7_ = 0x5f646e6f636573;
  local_98 = 0x70;
  uStack_97 = 0x736f;
  uStack_95 = 0x74;
  uStack_94 = 0;
  plVar16 = FUN_7103685540((long)param_1,ppplVar3,&local_a0,(byte ****)0x0,in_x4,in_x5,in_x6,in_x7);
  param_1[0xef] = (long)plVar16;
  if (((byte)local_a0 & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  local_a0._0_1_ = 0x1e;
  uStack_97 = 0x736f;
  uStack_95 = 0x74;
  uStack_94 = 0x746c615f;
  uStack_8f = 0;
  uStack_8e = 0;
  local_a0._1_7_ = 0x5f646e6f636573;
  local_98 = 0x70;
  local_90 = 0;
  plVar16 = FUN_7103685540((long)param_1,ppplVar3,&local_a0,(byte ****)0x0,in_x4,in_x5,in_x6,in_x7);
  param_1[0xf0] = (long)plVar16;
  if (((byte)local_a0 & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  local_90 = 0;
  uStack_8f = 0;
  uStack_8e = 0;
  local_a0._0_1_ = 0x16;
  ppppbVar11 = (byte ****)0x1;
  local_a0._1_7_ = 0x5f646e6f636573;
  local_98 = 0x74;
  uStack_97 = 0x7265;
  uStack_95 = 0x6d;
  uStack_94 = 0;
  plVar16 = FUN_7103686e90((long)param_1,ppplVar3,&local_a0,(byte ****)0x1,in_x4,in_x5,in_x6,in_x7);
  param_1[0xf1] = (long)plVar16;
  if (((byte)local_a0 & 1) != 0) {
    pvVar2 = (void *)CONCAT62(uStack_8e,CONCAT11(uStack_8f,local_90));
    nu::VirtualFreeHook(pvVar2);
    FUN_710392eb40((ulong)pvVar2);
  }
  uVar1 = *(uint *)(*(long *)(param_1[0xed] + 8) + 0x48);
  pppplVar8 = (long ****)(*(long *)(param_1[0xed] + 8) + 0x50);
  FUN_71038d74f0(&local_a0,uVar1 ^ (int)uVar1 >> 0x1f,(long)pppplVar8);
  lVar6 = CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
  local_110 = (long *)FUN_710392e290(0x10,0x30,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  if (local_110 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ****)((ulong)local_d8 & 0xffffffff00000000);
      local_a0._0_1_ = 0x30;
      local_a0._1_7_ = 0;
      pppplVar8 = (long ****)&local_a0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar5 & 1) != 0) &&
         (local_110 = (long *)FUN_710392e290(0x10,0x30,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7)
         , local_110 != (long *)0x0)) goto LAB_7103687520;
    }
    local_110 = (long *)0x0;
  }
LAB_7103687520:
  FUN_71037c3a70(local_110);
  *(undefined1 *)(local_110 + 2) = 1;
  local_108 = (long *)local_110[1];
  local_110[4] = (long)(local_110 + 3);
  local_110[5] = 0;
  local_110[3] = (long)(local_110 + 3);
  *local_110 = (long)&DAT_7105239740;
  local_100 = *local_108;
  local_118 = (long ***)&PTR_FUN_7105239690;
  FUN_71036857e0(auStack_f8,lVar6,&local_118,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  local_118 = (long ***)&PTR_FUN_7105239690;
  if (((local_108 != (long *)0x0) && (*local_108 == local_100)) && (local_110 != (long *)0x0)) {
    (**(code **)(*local_110 + 8))();
  }
  lVar13 = param_1[0xe8];
  lVar6 = param_1[0xed];
  if (((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
      (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) &&
     ((*(long **)(lVar6 + 0x10) != (long *)0x0 &&
      (**(long **)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18))))) {
    lVar14 = *(long *)(*(long *)(lVar6 + 8) + 0x30);
    if ((*(long **)(lVar14 + 0x20) != (long *)0x0) &&
       (**(long **)(lVar14 + 0x20) == *(long *)(lVar14 + 0x28))) {
      lVar15 = *(long *)(*(long *)(lVar13 + 8) + 0x30);
      if ((*(long **)(lVar15 + 0x20) != (long *)0x0) &&
         ((**(long **)(lVar15 + 0x20) == *(long *)(lVar15 + 0x28) &&
          (*(long *)(lVar14 + 0x18) == *(long *)(lVar15 + 0x18))))) {
        FUN_71038d7c40(*(long *)(lVar6 + 8),lVar13,0,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
        lVar6 = param_1[0xed];
      }
    }
  }
  if ((*(long **)(lVar6 + 0x10) != (long *)0x0) &&
     (**(long **)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18))) {
    lVar13 = param_1[0xee];
    if ((*(long **)(lVar13 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) {
      lVar13 = *(long *)(lVar13 + 8);
      if ((*(long **)(lVar13 + 0x38) != (long *)0x0) &&
         (**(long **)(lVar13 + 0x38) == *(long *)(lVar13 + 0x40))) {
        lVar14 = *(long *)(lVar6 + 8);
        if ((*(long **)(lVar14 + 0x38) != (long *)0x0) &&
           ((**(long **)(lVar14 + 0x38) == *(long *)(lVar14 + 0x40) &&
            (*(long *)(lVar13 + 0x30) == *(long *)(lVar14 + 0x30))))) {
          FUN_71038d7c40(lVar13,lVar6,0,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
        }
      }
    }
  }
  uVar1 = *(uint *)(*(long *)(param_1[0xef] + 8) + 0x48);
  pppplVar8 = (long ****)(*(long *)(param_1[0xef] + 8) + 0x50);
  FUN_71038d74f0(&local_a0,uVar1 ^ (int)uVar1 >> 0x1f,(long)pppplVar8);
  lVar6 = CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
  local_150 = (long *)FUN_710392e290(0x10,0x18,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  if (local_150 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ****)((ulong)local_d8 & 0xffffffff00000000);
      local_a0._0_1_ = 0x18;
      local_a0._1_7_ = 0;
      pppplVar8 = (long ****)&local_a0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar5 & 1) != 0) &&
         (local_150 = (long *)FUN_710392e290(0x10,0x18,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7)
         , local_150 != (long *)0x0)) goto LAB_710368773c;
    }
    local_150 = (long *)0x0;
  }
LAB_710368773c:
  FUN_71037c3a70(local_150);
  *(undefined2 *)(local_150 + 2) = 1;
  *local_150 = (long)&PTR_FUN_7105239718;
  local_148 = (long *)local_150[1];
  *(undefined1 *)((long)local_150 + 0x12) = 0;
  *(undefined4 *)((long)local_150 + 0x14) = 0;
  local_140 = *local_148;
  pppplVar8 = &local_158;
  local_158 = (long ***)&PTR_FUN_7105239690;
  FUN_71036857e0(auStack_138,lVar6,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  local_158 = (long ***)&PTR_FUN_7105239690;
  if (((local_148 != (long *)0x0) && (*local_148 == local_140)) && (local_150 != (long *)0x0)) {
    (**(code **)(*local_150 + 8))();
  }
  local_190 = (long *)FUN_710392e290(0x10,0x30,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  if (local_190 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ****)((ulong)local_d8 & 0xffffffff00000000);
      local_a0._0_1_ = 0x30;
      local_a0._1_7_ = 0;
      pppplVar8 = (long ****)&local_a0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar5 & 1) != 0) &&
         (local_190 = (long *)FUN_710392e290(0x10,0x30,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7)
         , local_190 != (long *)0x0)) goto LAB_7103687810;
    }
    local_190 = (long *)0x0;
  }
LAB_7103687810:
  FUN_71037c3a70(local_190);
  *(undefined1 *)(local_190 + 2) = 1;
  local_190[3] = (long)(local_190 + 3);
  local_190[4] = (long)(local_190 + 3);
  local_188 = (long *)local_190[1];
  *local_190 = (long)&DAT_7105239740;
  pppplVar8 = &local_198;
  local_190[5] = 0;
  local_180 = *local_188;
  local_198 = (long ***)&PTR_FUN_7105239690;
  FUN_71036857e0(auStack_178,lVar6,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  local_198 = (long ***)&PTR_FUN_7105239690;
  if (((local_188 != (long *)0x0) && (*local_188 == local_180)) && (local_190 != (long *)0x0)) {
    (**(code **)(*local_190 + 8))();
  }
  local_1d0 = (long *)FUN_710392e290(0x10,0xb8,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  if (local_1d0 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ****)((ulong)local_d8 & 0xffffffff00000000);
      local_a0._0_1_ = 0xb8;
      local_a0._1_7_ = 0;
      pppplVar8 = (long ****)&local_a0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar5 & 1) != 0) &&
         (local_1d0 = (long *)FUN_710392e290(0x10,0xb8,pppplVar8,ppppbVar11,in_x4,in_x5,in_x6,in_x7)
         , local_1d0 != (long *)0x0)) goto LAB_71036878e0;
    }
    local_1d0 = (long *)0x0;
  }
LAB_71036878e0:
  FUN_71037c3a70(local_1d0);
  local_1d0[0xf] = 0;
  *local_1d0 = (long)&PTR_FUN_7105239a80;
  *(undefined4 *)(local_1d0 + 0x16) = 0x3f800000;
  *(undefined4 *)(local_1d0 + 0xe) = 0x3f800000;
  local_1c8 = (long *)local_1d0[1];
  *(undefined1 *)(local_1d0 + 2) = 1;
  *(undefined4 *)((long)local_1d0 + 0x14) = 0;
  *(undefined1 *)(local_1d0 + 3) = 0;
  local_1d0[0xc] = 0;
  local_1d0[0xd] = 0;
  local_1d0[10] = 0;
  local_1d0[0xb] = 0;
  local_1d0[8] = 0;
  local_1d0[9] = 0;
  local_1d0[6] = 0;
  local_1d0[7] = 0;
  local_1d0[4] = 0;
  local_1d0[5] = 0;
  local_1d0[0x14] = 0;
  local_1d0[0x15] = 0;
  local_1d0[0x12] = 0;
  local_1d0[0x13] = 0;
  local_1d0[0x10] = 0;
  local_1d0[0x11] = 0;
  local_1c0 = *local_1c8;
  local_1d8 = (long ***)&PTR_FUN_7105239690;
  FUN_71036857e0(auStack_1b8,lVar6,&local_1d8,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  local_1d8 = (long ***)&PTR_FUN_7105239690;
  if (((local_1c8 != (long *)0x0) && (*local_1c8 == local_1c0)) && (local_1d0 != (long *)0x0)) {
    (**(code **)(*local_1d0 + 8))();
  }
  uVar1 = **(uint **)(lVar6 + 0x10);
  FUN_7103685a50(&local_a0,uVar1 ^ (int)uVar1 >> 0x1f,(long)(*(uint **)(lVar6 + 0x10) + 2));
  *(undefined1 *)(CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98))) + 0x12) = 1;
  lVar6 = param_1[0xee];
  lVar13 = param_1[0xef];
  if (((*(long **)(lVar6 + 0x10) != (long *)0x0) &&
      (**(long **)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18))) &&
     ((*(long **)(lVar13 + 0x10) != (long *)0x0 &&
      (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))))) {
    lVar14 = *(long *)(lVar13 + 8);
    if ((*(long **)(lVar14 + 0x38) != (long *)0x0) &&
       (**(long **)(lVar14 + 0x38) == *(long *)(lVar14 + 0x40))) {
      lVar15 = *(long *)(lVar6 + 8);
      if ((*(long **)(lVar15 + 0x38) != (long *)0x0) &&
         ((**(long **)(lVar15 + 0x38) == *(long *)(lVar15 + 0x40) &&
          (*(long *)(lVar14 + 0x30) == *(long *)(lVar15 + 0x30))))) {
        FUN_71038d7c40(lVar14,lVar6,0,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
        lVar13 = param_1[0xef];
      }
    }
  }
  uVar1 = *(uint *)(*(long *)(lVar13 + 8) + 0x48);
  FUN_71038d74f0(&local_a0,uVar1 ^ (int)uVar1 >> 0x1f,*(long *)(lVar13 + 8) + 0x50);
  uVar1 = *(uint *)(*(long *)(param_1[0xf0] + 8) + 0x48);
  lVar6 = CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
  FUN_71038d74f0(&local_a0,uVar1 ^ (int)uVar1 >> 0x1f,*(long *)(param_1[0xf0] + 8) + 0x50);
  puVar9 = *(uint **)(lVar6 + 0x10);
  lVar13 = CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98)));
  uVar1 = *puVar9;
  FUN_7103685a50(appplStack_218,uVar1 ^ (int)uVar1 >> 0x1f,(long)(puVar9 + 2));
  FUN_7103687c90(auStack_1f8,lVar13,appplStack_218,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  lVar6 = *(long *)(lVar6 + 0x10);
  uVar1 = *(uint *)(lVar6 + 0x50);
  FUN_7103685a50(appplStack_258,uVar1 ^ (int)uVar1 >> 0x1f,lVar6 + 0x58);
  FUN_7103687c90(auStack_238,lVar13,appplStack_258,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  uVar1 = **(uint **)(lVar13 + 0x10);
  FUN_7103685a50(&local_a0,uVar1 ^ (int)uVar1 >> 0x1f,(long)(*(uint **)(lVar13 + 0x10) + 2));
  *(undefined1 *)(CONCAT44(uStack_94,CONCAT13(uStack_95,CONCAT21(uStack_97,local_98))) + 0x12) = 1;
  lVar6 = param_1[0xee];
  plVar16 = *(long **)(lVar6 + 0x10);
  if (plVar16 != (long *)0x0) {
    if (*plVar16 == *(long *)(lVar6 + 0x18)) {
      lVar13 = param_1[0xf0];
      if ((*(long **)(lVar13 + 0x10) == (long *)0x0) ||
         (**(long **)(lVar13 + 0x10) != *(long *)(lVar13 + 0x18))) goto LAB_7103687b58;
      lVar13 = *(long *)(lVar13 + 8);
      if ((*(long **)(lVar13 + 0x38) == (long *)0x0) ||
         (**(long **)(lVar13 + 0x38) != *(long *)(lVar13 + 0x40))) goto LAB_7103687b58;
      lVar14 = *(long *)(lVar6 + 8);
      if (((*(long **)(lVar14 + 0x38) == (long *)0x0) ||
          (**(long **)(lVar14 + 0x38) != *(long *)(lVar14 + 0x40))) ||
         (*(long *)(lVar13 + 0x30) != *(long *)(lVar14 + 0x30))) goto LAB_7103687b58;
      FUN_71038d7c40(lVar13,lVar6,0,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
      lVar6 = param_1[0xee];
      plVar16 = *(long **)(lVar6 + 0x10);
      lVar13 = param_1[0xf1];
      if (plVar16 == (long *)0x0) goto LAB_7103687bd8;
    }
    else {
LAB_7103687b58:
      lVar13 = param_1[0xf1];
    }
    if (((*plVar16 != *(long *)(lVar6 + 0x18)) || (*(long **)(lVar13 + 0x10) == (long *)0x0)) ||
       (**(long **)(lVar13 + 0x10) != *(long *)(lVar13 + 0x18))) goto LAB_7103687bd8;
    lVar14 = *(long *)(lVar13 + 8);
    if ((*(long **)(lVar14 + 0x38) == (long *)0x0) ||
       (**(long **)(lVar14 + 0x38) != *(long *)(lVar14 + 0x40))) goto LAB_7103687bd8;
    lVar15 = *(long *)(lVar6 + 8);
    if ((*(long **)(lVar15 + 0x38) == (long *)0x0) ||
       ((**(long **)(lVar15 + 0x38) != *(long *)(lVar15 + 0x40) ||
        (*(long *)(lVar14 + 0x30) != *(long *)(lVar15 + 0x30))))) goto LAB_7103687bd8;
    FUN_71038d7c40(lVar14,lVar6,0,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
  }
  lVar13 = param_1[0xf1];
LAB_7103687bd8:
  lVar6 = param_1[0xef];
  if ((((*(long **)(lVar6 + 0x10) != (long *)0x0) &&
       (**(long **)(lVar6 + 0x10) == *(long *)(lVar6 + 0x18))) &&
      (*(long **)(lVar13 + 0x10) != (long *)0x0)) &&
     (**(long **)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18))) {
    lVar13 = *(long *)(lVar13 + 8);
    if ((*(long **)(lVar13 + 0x38) != (long *)0x0) &&
       (**(long **)(lVar13 + 0x38) == *(long *)(lVar13 + 0x40))) {
      lVar14 = *(long *)(lVar6 + 8);
      if ((*(long **)(lVar14 + 0x38) != (long *)0x0) &&
         (**(long **)(lVar14 + 0x38) == *(long *)(lVar14 + 0x40))) {
        if (*(long *)(lVar13 + 0x30) == *(long *)(lVar14 + 0x30)) {
          FUN_71038d7c40(lVar13,lVar6,1,ppppbVar11,in_x4,in_x5,in_x6,in_x7);
          return 1;
        }
        return 1;
      }
    }
  }
  return 1;
}

