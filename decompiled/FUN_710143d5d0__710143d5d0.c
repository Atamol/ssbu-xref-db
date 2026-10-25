// addr:      710143d5d0
// offset:    0x143d5d0
// name:      FUN_710143d5d0
// mangled:   
// signature: undefined __cdecl FUN_710143d5d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710143d5d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  undefined8 uVar11;
  code *pcVar12;
  uint uVar13;
  long lVar14;
  undefined **local_350;
  ulong local_348;
  ulong local_340;
  long *local_330;
  long ***local_318;
  ulong local_310;
  ulong local_308;
  code *pcStack_300;
  code *local_2f8;
  undefined **local_2f0;
  ulong local_2e8;
  ulong local_2e0;
  undefined ***local_2d0;
  byte local_188 [8];
  long ****local_180;
  ulong local_178;
  byte local_170 [16];
  ulong local_160;
  byte local_158 [16];
  ulong local_148;
  byte local_140 [16];
  ulong local_130;
  byte local_128 [16];
  ulong local_118;
  byte local_110 [16];
  ulong local_100;
  byte local_f8 [16];
  ulong local_e8;
  byte local_e0;
  char local_df [16];
  undefined6 uStack_cf;
  undefined1 local_c9;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  byte local_80;
  undefined6 uStack_7f;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  ulong local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined8 local_58;
  
  plVar4 = DAT_710593b218;
  if (*(int *)(param_1 + 0xfc) == 0) {
    local_58 = 0;
    iVar6 = nn::time::StandardUserSystemClock::GetCurrentTime((PosixTime *)&local_2f0);
    if (iVar6 == 0) {
      FUN_7103741810(local_2f0,&local_58);
      uVar13 = (uint)local_58;
    }
    else {
      uVar13 = 0;
    }
    local_e0 = 0x2c;
    uStack_cf = 0x79616c706572;
    builtin_strncpy(local_df + 8,"ve_data/",8);
    builtin_strncpy(local_df,"save:/sa",8);
    local_c9 = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_e0);
    local_c8 = *puVar7;
    local_c0 = puVar7[1];
    local_b8 = puVar7[2];
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    local_f8[0] = 0xc;
    local_f8[8] = 0;
    local_f8[9] = 0;
    local_f8[10] = 0;
    local_f8[0xb] = 0;
    local_f8[0xc] = 0;
    local_f8[0xd] = 0;
    local_f8[0xe] = 0;
    local_f8[0xf] = 0;
    local_e8 = 0;
    local_f8[5] = 0x61;
    local_f8[6] = 0x79;
    local_f8[1] = 0x72;
    local_f8[2] = 0x65;
    local_f8[3] = 0x70;
    local_f8[4] = 0x6c;
    local_f8[7] = 0;
    puVar7 = (ulong *)std::string::append((char *)&local_c8,(ulong)local_f8 | 1);
    local_b0 = *puVar7;
    local_a8 = puVar7[1];
    local_a0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    std::to_string(uVar13 & 0xfff);
    uVar3 = (ulong)local_110 | 1;
    if ((local_110[0] & 1) != 0) {
      uVar3 = local_100;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_b0,uVar3);
    local_98 = *puVar7;
    local_90 = puVar7[1];
    local_88 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    std::to_string(uVar13 >> 0xc & 0xf);
    uVar3 = (ulong)local_128 | 1;
    if ((local_128[0] & 1) != 0) {
      uVar3 = local_118;
    }
    puVar8 = (undefined8 *)std::string::append((char *)&local_98,uVar3);
    uVar11 = *puVar8;
    local_70 = puVar8[2];
    uStack_78 = (undefined7)puVar8[1];
    uStack_71 = (undefined1)((ulong)puVar8[1] >> 0x38);
    local_80 = (byte)uVar11;
    uStack_7f = (undefined6)((ulong)uVar11 >> 8);
    local_79 = (undefined1)((ulong)uVar11 >> 0x38);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    std::to_string(uVar13 >> 0x10 & 0x1f);
    uVar3 = (ulong)local_140 | 1;
    if ((local_140[0] & 1) != 0) {
      uVar3 = local_130;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_80,uVar3);
    local_318 = (long ***)*puVar7;
    local_310 = puVar7[1];
    local_308 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uVar13 = (uint)local_58;
    uVar5 = local_58._4_4_;
    std::to_string((uint)local_58 >> 0x15 & 0x1f);
    uVar3 = (ulong)local_158 | 1;
    if ((local_158[0] & 1) != 0) {
      uVar3 = local_148;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_318,uVar3);
    local_350 = (undefined **)*puVar7;
    local_348 = puVar7[1];
    local_340 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    std::to_string(uVar13 >> 0x1a);
    uVar3 = (ulong)local_170 | 1;
    if ((local_170[0] & 1) != 0) {
      uVar3 = local_160;
    }
    puVar7 = (ulong *)std::string::append((char *)&local_350,uVar3);
    local_2f0 = (undefined **)*puVar7;
    local_2e8 = puVar7[1];
    local_2e0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    std::to_string(uVar5 & 0x3f);
    pppplVar9 = (long ****)(ulong)(local_188[0] >> 1);
    uVar3 = (ulong)local_188 | 1;
    if ((local_188[0] & 1) != 0) {
      pppplVar9 = local_180;
      uVar3 = local_178;
    }
    puVar8 = (undefined8 *)std::string::append((char *)&local_2f0,uVar3);
    uVar11 = puVar8[2];
    uVar2 = *(undefined1 *)puVar8;
    uStack_60 = (undefined7)((ulong)puVar8[1] >> 8);
    uStack_68 = (undefined7)*(undefined8 *)((long)puVar8 + 1);
    local_61 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 1) >> 0x38);
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 0;
    pbVar1 = (byte *)(param_1 + 0x158);
    if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
      *(undefined2 *)(param_1 + 0x158) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      if ((*(byte *)(param_1 + 0x158) & 1) != 0) {
        if (*(ulong *)(param_1 + 0x168) != 0) {
          FUN_710392eb40(*(ulong *)(param_1 + 0x168));
        }
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x158) = uVar2;
    *(ulong *)(param_1 + 0x160) = CONCAT71(uStack_60,local_61);
    *(ulong *)(param_1 + 0x159) = CONCAT17(local_61,uStack_68);
    *(undefined8 *)(param_1 + 0x168) = uVar11;
    uStack_60 = 0;
    uStack_68 = 0;
    local_61 = 0;
    if (((local_188[0] & 1) != 0) && (local_178 != 0)) {
      FUN_710392eb40(local_178);
    }
    if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
      FUN_710392eb40(local_2e0);
    }
    if (((local_170[0] & 1) != 0) && (local_160 != 0)) {
      FUN_710392eb40(local_160);
    }
    if ((((ulong)local_350 & 1) != 0) && (local_340 != 0)) {
      FUN_710392eb40(local_340);
    }
    if (((local_158[0] & 1) != 0) && (local_148 != 0)) {
      FUN_710392eb40(local_148);
    }
    if ((((ulong)local_318 & 1) != 0) && (local_308 != 0)) {
      FUN_710392eb40(local_308);
    }
    if (((local_140[0] & 1) != 0) && (local_130 != 0)) {
      FUN_710392eb40(local_130);
    }
    if (((local_80 & 1) != 0) && (local_70 != 0)) {
      FUN_710392eb40(local_70);
    }
    if (((local_128[0] & 1) != 0) && (local_118 != 0)) {
      FUN_710392eb40(local_118);
    }
    if (((local_98 & 1) != 0) && (local_88 != 0)) {
      FUN_710392eb40(local_88);
    }
    if (((local_110[0] & 1) != 0) && (local_100 != 0)) {
      FUN_710392eb40(local_100);
    }
    if (((local_b0 & 1) != 0) && (local_a0 != 0)) {
      FUN_710392eb40(local_a0);
    }
    if (((local_f8[0] & 1) != 0) && (local_e8 != 0)) {
      FUN_710392eb40(local_e8);
    }
    if (((local_c8 & 1) != 0) && (local_b8 != 0)) {
      FUN_710392eb40(local_b8);
    }
    if (((local_e0 & 1) != 0) &&
       (uVar3 = CONCAT17(local_c9,CONCAT61(uStack_cf,local_df[0xf])), uVar3 != 0)) {
      FUN_710392eb40(uVar3);
    }
    plVar4 = DAT_710593b218;
    std::operator+((ulong *)&local_2f0,pbVar1,".bin",pppplVar9,param_4,param_5,param_6,param_7,
                   param_8);
    puVar7 = (ulong *)(param_1 + 0x170);
    if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
      *(undefined2 *)puVar7 = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x180) = 0;
      *(undefined8 *)(param_1 + 0x178) = 0;
      if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
        if (*(ulong *)(param_1 + 0x180) != 0) {
          FUN_710392eb40(*(ulong *)(param_1 + 0x180));
        }
        *puVar7 = 0;
      }
    }
    *(ulong *)(param_1 + 0x178) = local_2e8;
    *(ulong *)(param_1 + 0x180) = local_2e0;
    *puVar7 = (ulong)local_2f0;
    if (((ulong)local_2f0 & 1) == 0) {
      lVar14 = param_1 + 0x171;
    }
    else {
      lVar14 = *(long *)(param_1 + 0x180);
    }
    local_350 = &PTR_FUN_7105067b90;
    local_2f0 = &PTR_FUN_7105067b90;
    local_348 = param_1;
    local_330 = (long *)&local_350;
    local_2e8 = param_1;
    local_2d0 = &local_2f0;
    FUN_710143c6e0((long *)&local_2f0,(long *)(param_1 + 0x120));
    if (&local_2f0 == local_2d0) {
      pcVar12 = (code *)(*local_2d0)[4];
LAB_710143dbb8:
      (*pcVar12)();
    }
    else if (local_2d0 != (undefined ***)0x0) {
      pcVar12 = (code *)(*local_2d0)[5];
      goto LAB_710143dbb8;
    }
    ppppbVar10 = (byte ****)(param_1 + 0x11c);
    pcStack_300 = FUN_710143c860;
    local_2f8 = FUN_710143c880;
    pppplVar9 = &local_318;
    local_318 = (long ***)FUN_710143c820;
    local_310 = 0;
    local_308 = param_1;
    FUN_710143df30(&local_2f0,lVar14,pppplVar9,(undefined4 *)ppppbVar10);
    FUN_71037222b0(*plVar4,(undefined4 *)&local_2f0,pppplVar9,ppppbVar10,param_5,param_6,param_7,
                   param_8);
    if (&local_350 == (undefined ***)local_330) {
      pcVar12 = *(code **)(*local_330 + 0x20);
LAB_710143dc28:
      (*pcVar12)();
    }
    else if (local_330 != (long *)0x0) {
      pcVar12 = *(code **)(*local_330 + 0x28);
      goto LAB_710143dc28;
    }
    iVar6 = 1;
    goto LAB_710143ddbc;
  }
  if (*(int *)(param_1 + 0x11c) != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x150) == 0) {
    if (*(uint *)(param_1 + 0xf4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 6;
      return;
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  std::operator+((ulong *)&local_350,(byte *)(param_1 + 0x158),"_",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  std::to_string(*(uint *)(param_1 + 0x188));
  uVar3 = (ulong)&local_318 | 1;
  if (((ulong)local_318 & 1) != 0) {
    uVar3 = local_308;
  }
  puVar7 = (ulong *)std::string::append((char *)&local_350,uVar3);
  local_2f0 = (undefined **)*puVar7;
  local_2e8 = puVar7[1];
  local_2e0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar8 = (undefined8 *)std::string::append((char *)&local_2f0);
  uVar11 = *(undefined8 *)((long)puVar8 + 1);
  lVar14 = puVar8[2];
  uVar2 = *(undefined1 *)puVar8;
  uStack_78 = (undefined7)((ulong)puVar8[1] >> 8);
  local_80 = (byte)uVar11;
  uStack_7f = (undefined6)((ulong)uVar11 >> 8);
  local_79 = (undefined1)((ulong)uVar11 >> 0x38);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  pbVar1 = (byte *)(param_1 + 0x170);
  if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x170) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
      if (*(ulong *)(param_1 + 0x180) != 0) {
        FUN_710392eb40(*(ulong *)(param_1 + 0x180));
      }
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x170) = uVar2;
  *(ulong *)(param_1 + 0x178) = CONCAT71(uStack_78,local_79);
  *(ulong *)(param_1 + 0x171) = CONCAT17(local_79,CONCAT61(uStack_7f,local_80));
  *(long *)(param_1 + 0x180) = lVar14;
  uStack_78 = 0;
  local_80 = 0;
  uStack_7f = 0;
  local_79 = 0;
  if ((((ulong)local_2f0 & 1) != 0) && (local_2e0 != 0)) {
    FUN_710392eb40(local_2e0);
  }
  if ((((byte)local_318 & 1) != 0) && (local_308 != 0)) {
    FUN_710392eb40(local_308);
  }
  if ((((byte)local_350 & 1) != 0) && (local_340 != 0)) {
    FUN_710392eb40(local_340);
  }
  ppppbVar10 = (byte ****)(param_1 + 0x11c);
  if ((*pbVar1 & 1) == 0) {
    lVar14 = param_1 + 0x171;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x180);
  }
  local_350 = &PTR_FUN_7105067bd8;
  local_2f0 = &PTR_FUN_7105067bd8;
  local_348 = param_1;
  local_330 = (long *)&local_350;
  local_2e8 = param_1;
  local_2d0 = &local_2f0;
  FUN_710143c6e0((long *)&local_2f0,(long *)(param_1 + 0x120));
  if (&local_2f0 == local_2d0) {
    pcVar12 = (code *)(*local_2d0)[4];
LAB_710143dd40:
    (*pcVar12)();
  }
  else if (local_2d0 != (undefined ***)0x0) {
    pcVar12 = (code *)(*local_2d0)[5];
    goto LAB_710143dd40;
  }
  pcStack_300 = FUN_710143c860;
  local_2f8 = FUN_710143c880;
  pppplVar9 = &local_318;
  local_318 = (long ***)FUN_710143c820;
  local_310 = 0;
  local_308 = param_1;
  FUN_710143df30(&local_2f0,lVar14,pppplVar9,(undefined4 *)ppppbVar10);
  FUN_71037222b0(*plVar4,(undefined4 *)&local_2f0,pppplVar9,ppppbVar10,param_5,param_6,param_7,
                 param_8);
  if (&local_350 == (undefined ***)local_330) {
    pcVar12 = *(code **)(*local_330 + 0x20);
LAB_710143ddb0:
    (*pcVar12)();
  }
  else if (local_330 != (long *)0x0) {
    pcVar12 = *(code **)(*local_330 + 0x28);
    goto LAB_710143ddb0;
  }
  iVar6 = *(int *)(param_1 + 0x188) + 1;
LAB_710143ddbc:
  *(int *)(param_1 + 0x188) = iVar6;
  return;
}

