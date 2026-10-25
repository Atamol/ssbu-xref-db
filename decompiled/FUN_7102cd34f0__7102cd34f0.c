// addr:      7102cd34f0
// offset:    0x2cd34f0
// name:      FUN_7102cd34f0
// mangled:   
// signature: undefined __cdecl FUN_7102cd34f0(long * param_1)


void FUN_7102cd34f0(long *param_1)

{
  long ***ppplVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  void *pvVar10;
  ulong uVar11;
  char *pcVar12;
  string *psVar13;
  string *psVar14;
  string *psVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined8 in_x6;
  undefined8 in_x7;
  uint *puVar22;
  byte *pbVar23;
  void *pvVar24;
  long ***ppplVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  string local_b0;
  undefined7 uStack_af;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined6 uStack_9e;
  string local_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined6 uStack_86;
  ulong local_80 [4];
  long ***local_60;
  undefined4 local_54;
  
  psVar13 = &local_b0;
  psVar14 = &local_b0;
  psVar15 = &local_b0;
  pbVar5 = (byte *)param_1[0xe];
  pbVar23 = (byte *)param_1[0xf];
  while (pbVar6 = pbVar23, pbVar6 != pbVar5) {
    pbVar23 = pbVar6 + -0x20;
    if (((*pbVar23 & 1) != 0) && (*(ulong *)(pbVar6 + -0x10) != 0)) {
      FUN_710392eb40(*(ulong *)(pbVar6 + -0x10));
    }
  }
  param_1[0xf] = (long)pbVar5;
  puVar22 = *(uint **)(*param_1 + 0x340);
  uVar2 = *puVar22 ^ *puVar22 << 0xb;
  uVar4 = puVar22[3];
  uVar3 = uVar2 ^ uVar2 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
  lVar7 = param_1[0xd];
  *puVar22 = puVar22[1];
  puVar22[1] = puVar22[2];
  puVar22[2] = uVar4;
  puVar22[3] = uVar3;
  uVar2 = (int)lVar7 + 1;
  fVar27 = (float)uVar3 * 100.0 * 2.3283064e-10;
  fVar28 = *(float *)(param_1[2] + 0x680);
  *(bool *)((long)param_1 + 0x6c) = fVar27 <= fVar28;
  ppppbVar18 = (byte ****)"yokone";
  if (fVar28 < fVar27) {
    ppppbVar18 = (byte ****)&DAT_710433857b;
  }
  pcVar12 = "f2_cat_std_%s_%d%s";
  pcVar20 = "start";
  local_80[2] = 0;
  local_80[3] = 0;
  pppplVar19 = (long ****)(ulong)uVar2;
  local_80[0] = 0;
  local_80[1] = 0;
  ppppbVar17 = ppppbVar18;
  snprintf((char *)local_80,0x20,"f2_cat_std_%s_%d%s",(char *)ppppbVar18,uVar2,"start");
  local_90 = 0;
  uStack_8f = 0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_86 = 0;
  local_98 = (string)0x0;
  uStack_97 = 0;
  sVar8 = strlen((char *)local_80);
  if (0xffffffffffffffef < sVar8) goto LAB_7102cd3d28;
  pvVar24 = (void *)((ulong)&local_98 | 1);
  if (sVar8 < 0x17) {
    local_98 = SUB41((int)sVar8 << 1,0);
    pvVar10 = pvVar24;
    if (sVar8 != 0) goto LAB_7102cd3698;
  }
  else {
    uVar26 = sVar8 + 0x10 & 0xfffffffffffffff0;
    uVar11 = uVar26;
    if ((sVar8 + 0x10 & 0xfffffffffffffff0) == 0) {
      uVar11 = 1;
    }
    pvVar10 = (void *)FUN_710392e290(0x10,uVar11,(long ****)pcVar12,ppppbVar17,pppplVar19,pcVar20,
                                     in_x6,in_x7);
    if (pvVar10 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
        local_b0 = SUB81(uVar11,0);
        uStack_af = (undefined7)(uVar11 >> 8);
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
        if (((uVar9 & 1) != 0) &&
           (pvVar10 = (void *)FUN_710392e290(0x10,uVar11,(long ****)psVar13,ppppbVar17,pppplVar19,
                                             pcVar20,in_x6,in_x7), pvVar10 != (void *)0x0))
        goto LAB_7102cd368c;
      }
      pvVar10 = (void *)0x0;
    }
LAB_7102cd368c:
    local_98 = (string)((byte)uVar26 | 1);
    local_90 = (undefined1)sVar8;
    uStack_8f = (undefined7)(sVar8 >> 8);
    local_88 = SUB81(pvVar10,0);
    uStack_87 = (undefined1)((ulong)pvVar10 >> 8);
    uStack_86 = (undefined6)((ulong)pvVar10 >> 0x10);
    uStack_97 = (undefined7)(uVar26 >> 8);
LAB_7102cd3698:
    memcpy(pvVar10,local_80,sVar8);
  }
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  FUN_7102cd4500((long)param_1,&local_98,(long ****)0x0,0,pppplVar19,pcVar20,in_x6,in_x7);
  if ((((byte)local_98 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_86,CONCAT11(uStack_87,local_88)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  pcVar12 = "f2_cat_std_%s_%d%s";
  puVar21 = &DAT_7104328277;
  local_80[2] = 0;
  local_80[3] = 0;
  pppplVar19 = (long ****)(ulong)uVar2;
  local_80[0] = 0;
  local_80[1] = 0;
  ppppbVar17 = ppppbVar18;
  snprintf((char *)local_80,0x20,"f2_cat_std_%s_%d%s",(char *)ppppbVar18,uVar2,"loop");
  local_90 = 0;
  uStack_8f = 0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_86 = 0;
  local_98 = (string)0x0;
  uStack_97 = 0;
  sVar8 = strlen((char *)local_80);
  if (0xffffffffffffffef < sVar8) goto LAB_7102cd3d28;
  if (sVar8 < 0x17) {
    local_98 = SUB41((int)sVar8 << 1,0);
    pvVar10 = pvVar24;
    if (sVar8 != 0) goto LAB_7102cd37ac;
  }
  else {
    uVar26 = sVar8 + 0x10 & 0xfffffffffffffff0;
    uVar11 = uVar26;
    if ((sVar8 + 0x10 & 0xfffffffffffffff0) == 0) {
      uVar11 = 1;
    }
    pvVar10 = (void *)FUN_710392e290(0x10,uVar11,(long ****)pcVar12,ppppbVar17,pppplVar19,puVar21,
                                     in_x6,in_x7);
    if (pvVar10 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
        local_b0 = SUB81(uVar11,0);
        uStack_af = (undefined7)(uVar11 >> 8);
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
        if (((uVar9 & 1) != 0) &&
           (pvVar10 = (void *)FUN_710392e290(0x10,uVar11,(long ****)psVar14,ppppbVar17,pppplVar19,
                                             puVar21,in_x6,in_x7), pvVar10 != (void *)0x0))
        goto LAB_7102cd37a0;
      }
      pvVar10 = (void *)0x0;
    }
LAB_7102cd37a0:
    local_98 = (string)((byte)uVar26 | 1);
    local_90 = (undefined1)sVar8;
    uStack_8f = (undefined7)(sVar8 >> 8);
    local_88 = SUB81(pvVar10,0);
    uStack_87 = (undefined1)((ulong)pvVar10 >> 8);
    uStack_86 = (undefined6)((ulong)pvVar10 >> 0x10);
    uStack_97 = (undefined7)(uVar26 >> 8);
LAB_7102cd37ac:
    memcpy(pvVar10,local_80,sVar8);
  }
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  FUN_7102cd4500((long)param_1,&local_98,(long ****)0x1,0,pppplVar19,puVar21,in_x6,in_x7);
  if ((((byte)local_98 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_86,CONCAT11(uStack_87,local_88)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  pcVar12 = "f2_cat_std_%s_%d%s";
  puVar21 = &DAT_71044424dd;
  local_80[2] = 0;
  local_80[3] = 0;
  pppplVar19 = (long ****)(ulong)uVar2;
  local_80[0] = 0;
  local_80[1] = 0;
  snprintf((char *)local_80,0x20,"f2_cat_std_%s_%d%s",(char *)ppppbVar18,uVar2,"end");
  local_90 = 0;
  uStack_8f = 0;
  local_88 = 0;
  uStack_87 = 0;
  uStack_86 = 0;
  local_98 = (string)0x0;
  uStack_97 = 0;
  sVar8 = strlen((char *)local_80);
  if (0xffffffffffffffef < sVar8) {
LAB_7102cd3d28:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_98 = SUB41((int)sVar8 << 1,0);
    if (sVar8 != 0) goto LAB_7102cd38bc;
  }
  else {
    uVar26 = sVar8 + 0x10 & 0xfffffffffffffff0;
    uVar11 = uVar26;
    if ((sVar8 + 0x10 & 0xfffffffffffffff0) == 0) {
      uVar11 = 1;
    }
    pvVar24 = (void *)FUN_710392e290(0x10,uVar11,(long ****)pcVar12,ppppbVar18,pppplVar19,puVar21,
                                     in_x6,in_x7);
    if (pvVar24 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
        local_b0 = SUB81(uVar11,0);
        uStack_af = (undefined7)(uVar11 >> 8);
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
        if (((uVar9 & 1) != 0) &&
           (pvVar24 = (void *)FUN_710392e290(0x10,uVar11,(long ****)psVar15,ppppbVar18,pppplVar19,
                                             puVar21,in_x6,in_x7), pvVar24 != (void *)0x0))
        goto LAB_7102cd38b0;
      }
      pvVar24 = (void *)0x0;
    }
LAB_7102cd38b0:
    local_98 = (string)((byte)uVar26 | 1);
    local_90 = (undefined1)sVar8;
    uStack_8f = (undefined7)(sVar8 >> 8);
    local_88 = SUB81(pvVar24,0);
    uStack_87 = (undefined1)((ulong)pvVar24 >> 8);
    uStack_86 = (undefined6)((ulong)pvVar24 >> 0x10);
    uStack_97 = (undefined7)(uVar26 >> 8);
LAB_7102cd38bc:
    memcpy(pvVar24,local_80,sVar8);
  }
  *(undefined1 *)((long)pvVar24 + sVar8) = 0;
  FUN_7102cd4500((long)param_1,&local_98,(long ****)0x0,0,pppplVar19,puVar21,in_x6,in_x7);
  if ((((byte)local_98 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_86,CONCAT11(uStack_87,local_88)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  local_98 = (string)0x20;
  uStack_86 = 0;
  uStack_8f = 0x6b6c61775f6474;
  local_88 = 0x32;
  uStack_97 = 0x5f7461635f3266;
  local_90 = 0x73;
  uStack_87 = 0;
  FUN_7102cd4500((long)param_1,&local_98,(long ****)0x0,0xffffffff,pppplVar19,puVar21,in_x6,in_x7);
  pcVar12 = "f2_cat_std_koubako_%d%s";
  pcVar20 = "start";
  ppppbVar18 = (byte ****)(ulong)uVar2;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  snprintf((char *)local_80,0x20,"f2_cat_std_koubako_%d%s",uVar2,"start");
  local_a8 = 0;
  uStack_a7 = 0;
  local_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  local_b0 = (string)0x0;
  uStack_af = 0;
  sVar8 = strlen((char *)local_80);
  if (0xffffffffffffffef < sVar8) goto LAB_7102cd3d30;
  pvVar24 = (void *)((ulong)&local_b0 | 1);
  if (sVar8 < 0x17) {
    local_b0 = SUB41((int)sVar8 << 1,0);
    pvVar10 = pvVar24;
    if (sVar8 != 0) goto LAB_7102cd3a10;
  }
  else {
    ppplVar25 = (long ***)(sVar8 + 0x10 & 0xfffffffffffffff0);
    ppplVar1 = ppplVar25;
    if ((sVar8 + 0x10 & 0xfffffffffffffff0) == 0) {
      ppplVar1 = (long ***)0x1;
    }
    pvVar10 = (void *)FUN_710392e290(0x10,ppplVar1,(long ****)pcVar12,ppppbVar18,(long ****)pcVar20,
                                     puVar21,in_x6,in_x7);
    if (pvVar10 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        pppplVar19 = &local_60;
        local_60 = ppplVar1;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar11 & 1) != 0) &&
           (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar1,pppplVar19,ppppbVar18,(long ****)pcVar20,
                                             puVar21,in_x6,in_x7), pvVar10 != (void *)0x0))
        goto LAB_7102cd3a04;
      }
      pvVar10 = (void *)0x0;
    }
LAB_7102cd3a04:
    local_b0 = (string)((byte)ppplVar25 | 1);
    local_a8 = (undefined1)sVar8;
    uStack_a7 = (undefined7)(sVar8 >> 8);
    local_a0 = SUB81(pvVar10,0);
    uStack_9f = (undefined1)((ulong)pvVar10 >> 8);
    uStack_9e = (undefined6)((ulong)pvVar10 >> 0x10);
    uStack_af = (undefined7)((ulong)ppplVar25 >> 8);
LAB_7102cd3a10:
    memcpy(pvVar10,local_80,sVar8);
  }
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  FUN_7102cd4500((long)param_1,&local_b0,(long ****)0x0,1,(long ****)pcVar20,puVar21,in_x6,in_x7);
  if ((((byte)local_b0 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  pcVar12 = "f2_cat_std_koubako_%d%s";
  pppplVar19 = (long ****)&DAT_7104328277;
  ppppbVar18 = (byte ****)(ulong)uVar2;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  snprintf((char *)local_80,0x20,"f2_cat_std_koubako_%d%s",uVar2,"loop");
  local_a8 = 0;
  uStack_a7 = 0;
  local_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  local_b0 = (string)0x0;
  uStack_af = 0;
  sVar8 = strlen((char *)local_80);
  if (0xffffffffffffffef < sVar8) goto LAB_7102cd3d30;
  if (sVar8 < 0x17) {
    local_b0 = SUB41((int)sVar8 << 1,0);
    pvVar10 = pvVar24;
    if (sVar8 != 0) goto LAB_7102cd3b20;
  }
  else {
    ppplVar25 = (long ***)(sVar8 + 0x10 & 0xfffffffffffffff0);
    ppplVar1 = ppplVar25;
    if ((sVar8 + 0x10 & 0xfffffffffffffff0) == 0) {
      ppplVar1 = (long ***)0x1;
    }
    pvVar10 = (void *)FUN_710392e290(0x10,ppplVar1,(long ****)pcVar12,ppppbVar18,pppplVar19,puVar21,
                                     in_x6,in_x7);
    if (pvVar10 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        pppplVar16 = &local_60;
        local_60 = ppplVar1;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar11 & 1) != 0) &&
           (pvVar10 = (void *)FUN_710392e290(0x10,ppplVar1,pppplVar16,ppppbVar18,pppplVar19,puVar21,
                                             in_x6,in_x7), pvVar10 != (void *)0x0))
        goto LAB_7102cd3b14;
      }
      pvVar10 = (void *)0x0;
    }
LAB_7102cd3b14:
    local_b0 = (string)((byte)ppplVar25 | 1);
    local_a8 = (undefined1)sVar8;
    uStack_a7 = (undefined7)(sVar8 >> 8);
    local_a0 = SUB81(pvVar10,0);
    uStack_9f = (undefined1)((ulong)pvVar10 >> 8);
    uStack_9e = (undefined6)((ulong)pvVar10 >> 0x10);
    uStack_af = (undefined7)((ulong)ppplVar25 >> 8);
LAB_7102cd3b20:
    memcpy(pvVar10,local_80,sVar8);
  }
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  FUN_7102cd4500((long)param_1,&local_b0,(long ****)0x1,1,pppplVar19,puVar21,in_x6,in_x7);
  if ((((byte)local_b0 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  pcVar12 = "f2_cat_std_koubako_%d%s";
  pppplVar19 = (long ****)&DAT_71044424dd;
  ppppbVar18 = (byte ****)(ulong)uVar2;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  snprintf((char *)local_80,0x20,"f2_cat_std_koubako_%d%s",uVar2,"end");
  local_a8 = 0;
  uStack_a7 = 0;
  local_a0 = 0;
  uStack_9f = 0;
  uStack_9e = 0;
  local_b0 = (string)0x0;
  uStack_af = 0;
  sVar8 = strlen((char *)local_80);
  if (0xffffffffffffffef < sVar8) {
LAB_7102cd3d30:
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    local_b0 = SUB41((int)sVar8 << 1,0);
    if (sVar8 == 0) goto LAB_7102cd3c3c;
  }
  else {
    ppplVar25 = (long ***)(sVar8 + 0x10 & 0xfffffffffffffff0);
    ppplVar1 = ppplVar25;
    if ((sVar8 + 0x10 & 0xfffffffffffffff0) == 0) {
      ppplVar1 = (long ***)0x1;
    }
    pvVar24 = (void *)FUN_710392e290(0x10,ppplVar1,(long ****)pcVar12,ppppbVar18,pppplVar19,puVar21,
                                     in_x6,in_x7);
    if (pvVar24 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        pppplVar16 = &local_60;
        local_60 = ppplVar1;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar11 & 1) != 0) &&
           (pvVar24 = (void *)FUN_710392e290(0x10,ppplVar1,pppplVar16,ppppbVar18,pppplVar19,puVar21,
                                             in_x6,in_x7), pvVar24 != (void *)0x0))
        goto LAB_7102cd3c20;
      }
      pvVar24 = (void *)0x0;
    }
LAB_7102cd3c20:
    local_b0 = (string)((byte)ppplVar25 | 1);
    local_a8 = (undefined1)sVar8;
    uStack_a7 = (undefined7)(sVar8 >> 8);
    local_a0 = SUB81(pvVar24,0);
    uStack_9f = (undefined1)((ulong)pvVar24 >> 8);
    uStack_9e = (undefined6)((ulong)pvVar24 >> 0x10);
    uStack_af = (undefined7)((ulong)ppplVar25 >> 8);
  }
  memcpy(pvVar24,local_80,sVar8);
LAB_7102cd3c3c:
  *(undefined1 *)((long)pvVar24 + sVar8) = 0;
  FUN_7102cd4500((long)param_1,&local_b0,(long ****)0x0,1,pppplVar19,puVar21,in_x6,in_x7);
  if ((((byte)local_b0 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  local_b0 = (string)0x20;
  uStack_9e = 0;
  uStack_a7 = 0x6b6c61775f6474;
  local_a0 = 0x31;
  uStack_af = 0x5f7461635f3266;
  local_a8 = 0x73;
  uStack_9f = 0;
  FUN_7102cd4500((long)param_1,&local_b0,(long ****)0x0,0xffffffff,pppplVar19,puVar21,in_x6,in_x7);
  psVar14 = (string *)param_1[0xf];
  for (psVar13 = (string *)param_1[0xe]; psVar13 != psVar14; psVar13 = psVar13 + 0x20) {
    std::string::string((string *)local_80,psVar13);
    local_80[3] = *(ulong *)(psVar13 + 0x18);
    if (((local_80[0] & 1) != 0) && (local_80[2] != 0)) {
      FUN_710392eb40(local_80[2]);
    }
  }
  if ((((byte)local_b0 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_9e,CONCAT11(uStack_9f,local_a0)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  if ((((byte)local_98 & 1) != 0) &&
     (uVar11 = CONCAT62(uStack_86,CONCAT11(uStack_87,local_88)), uVar11 != 0)) {
    FUN_710392eb40(uVar11);
  }
  return;
}

