// addr:      71017c9660
// offset:    0x17c9660
// name:      FUN_71017c9660
// mangled:   
// signature: undefined __cdecl FUN_71017c9660(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017c9660(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long ****pppplVar6;
  Uid *pUVar7;
  uint uVar8;
  long **pplVar9;
  code *pcVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 local_380;
  uint uStack_37c;
  undefined4 local_378;
  byte local_374 [260];
  undefined8 local_270;
  byte local_268 [264];
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long ***local_70;
  code *local_68;
  undefined8 uStack_60;
  long local_58;
  long ****local_50;
  ulong local_38;
  
  if (*(long *)(param_1 + 0x60) != 0) goto LAB_71017c9d5c;
  uVar3 = *(ulong *)(param_1 + 0x18);
  *(ulong *)(param_1 + 0x20) = uVar3;
  if (*(ulong *)(param_1 + 0x28) != uVar3) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(ulong *)(param_1 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  local_268[0] = 0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_374[0] = 0;
  local_380 = 2;
  for (uVar3 = 0; "save:/save_data/stage"[uVar3] != 0; uVar3 = uVar3 + 2) {
    bVar1 = "save:/save_data/stage"[uVar3 + 1];
    local_374[uVar3] = "save:/save_data/stage"[uVar3];
    if (bVar1 == 0) {
      uVar3 = uVar3 + 1;
      break;
    }
    local_374[uVar3 + 1] = bVar1;
  }
  uVar8 = 0x811c9dc5;
  *(undefined1 *)(((ulong)&local_380 | 0xc) + (uVar3 & 0xffffffff)) = 0;
  local_378 = (undefined4)uVar3;
  uVar11 = (uint)local_374[0];
  uStack_37c = uVar8;
  if (local_374[0] != 0) {
    pbVar12 = (byte *)((ulong)&local_380 | 0xd);
    do {
      uStack_37c = uStack_37c * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (uVar11 != 0);
  }
  for (uVar3 = 0; "stage"[uVar3] != 0; uVar3 = uVar3 + 2) {
    bVar1 = "stage"[uVar3 + 1];
    local_268[uVar3] = "stage"[uVar3];
    if (bVar1 == 0) {
      uVar3 = uVar3 + 1;
      break;
    }
    local_268[uVar3 + 1] = bVar1;
  }
  local_268[uVar3 & 0xffffffff] = 0;
  uVar11 = (uint)local_268[0];
  if (local_268[0] != 0) {
    pbVar12 = local_268;
    do {
      pbVar12 = pbVar12 + 1;
      uVar8 = uVar8 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar12;
    } while (uVar11 != 0);
  }
  local_270 = CONCAT44((int)uVar3,uVar8);
  local_70 = (long ***)&DAT_710509f6e8;
  local_68 = FUN_71017c9d80;
  uStack_60 = 0;
  local_58 = param_1;
  local_50 = &local_70;
  FUN_71003cb050((long *)&local_70,alStack_160);
  if (&local_70 == local_50) {
    pplVar9 = (*local_50)[4];
LAB_71017c981c:
    (*(code *)pplVar9)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar9 = (*local_50)[5];
    goto LAB_71017c981c;
  }
  local_70 = (long ***)&DAT_710509f730;
  local_68 = (code *)param_1;
  local_50 = &local_70;
  FUN_71003cb050((long *)&local_70,alStack_130);
  if (&local_70 == local_50) {
    pplVar9 = (*local_50)[4];
LAB_71017c9868:
    (*(code *)pplVar9)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar9 = (*local_50)[5];
    goto LAB_71017c9868;
  }
  local_70 = (long ***)&PTR_FUN_710509f778;
  local_68 = (code *)param_1;
  local_50 = &local_70;
  FUN_71017c9f30((long *)&local_70,alStack_d0);
  if (&local_70 == local_50) {
    pplVar9 = (*local_50)[4];
LAB_71017c98b4:
    (*(code *)pplVar9)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar9 = (*local_50)[5];
    goto LAB_71017c98b4;
  }
  local_70 = (long ***)&PTR_FUN_710509f7c0;
  local_68 = (code *)param_1;
  local_50 = &local_70;
  FUN_71017c9f30((long *)&local_70,alStack_a0);
  if (&local_70 == local_50) {
    pplVar9 = (*local_50)[4];
LAB_71017c9900:
    (*(code *)pplVar9)();
  }
  else if (local_50 != (long ****)0x0) {
    pplVar9 = (*local_50)[5];
    goto LAB_71017c9900;
  }
  plVar4 = (long *)FUN_710392e290(0x10,0x4d0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_38 = local_38 & 0xffffffff00000000;
      local_70 = (long ***)0x4d0;
      pppplVar6 = &local_70;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_38);
      if (((uVar3 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,0x4d0,pppplVar6,param_4,param_5,param_6,param_7,
                                          param_8), plVar4 != (long *)0x0)) goto LAB_71017c9960;
    }
    plVar4 = (long *)0x0;
  }
LAB_71017c9960:
  *plVar4 = param_1;
  FUN_71017ca070((undefined4 *)(plVar4 + 2),&local_380);
  plVar4[0x94] = (long)FUN_71017ca360;
  plVar4[0x95] = (long)FUN_710143c880;
  plVar4[0x91] = (long)FUN_71017ca350;
  plVar4[0x69] = (long)FUN_71017ca380;
  plVar4[0x6b] = (long)FUN_71017ca390;
  plVar4[0x6d] = (long)FUN_71017ca660;
  plVar4[0x6f] = (long)FUN_71017ca720;
  plVar4[0x71] = (long)FUN_71017ca970;
  plVar4[0x73] = (long)FUN_71017cad50;
  plVar4[0x75] = (long)FUN_71017cb170;
  plVar4[0x77] = (long)FUN_71017cb9d0;
  plVar4[0x79] = (long)FUN_71017cc7e0;
  plVar4[0x7b] = (long)FUN_71017ccaa0;
  plVar4[100] = (long)plVar4;
  plVar4[0x68] = 0;
  plVar4[0x67] = 0;
  plVar4[0x90] = 0;
  plVar4[0x8f] = 0;
  plVar4[0x8e] = 0;
  plVar4[0x8d] = 0;
  plVar4[0x8c] = 0;
  plVar4[0x8b] = 0;
  plVar4[0x93] = (long)plVar4;
  plVar4[0x92] = 0;
  *(undefined2 *)(plVar4 + 0x99) = 0;
  plVar4[0x98] = 0;
  plVar4[0x97] = 0;
  plVar4[0x96] = 0;
  plVar4[0x6a] = 0;
  plVar4[0x6c] = 0;
  plVar4[0x6e] = 0;
  plVar4[0x70] = 0;
  plVar4[0x72] = 0;
  plVar4[0x74] = 0;
  plVar4[0x76] = 0;
  plVar4[0x78] = 0;
  plVar4[0x7a] = 0;
  plVar4[0x7c] = 0;
  plVar4[0x7d] = (long)FUN_71017ccfb0;
  plVar4[0x7e] = 0;
  plVar4[0x66] = 0;
  plVar4[0x65] = 0;
  *(undefined8 *)((long)plVar4 + 0x43c) = 0;
  *(undefined8 *)((long)plVar4 + 0x434) = 0;
  *(undefined8 *)((long)plVar4 + 0x42c) = 0;
  *(undefined8 *)((long)plVar4 + 0x424) = 0;
  *(undefined8 *)((long)plVar4 + 0x41c) = 0;
  *(undefined8 *)((long)plVar4 + 0x414) = 0;
  *(undefined8 *)((long)plVar4 + 0x40c) = 0;
  *(undefined8 *)((long)plVar4 + 0x3fc) = 0;
  *(undefined4 *)((long)plVar4 + 0x444) = 0;
  *(undefined8 *)((long)plVar4 + 0x404) = 0;
  *(undefined4 *)(plVar4 + 0x89) = 0xffffffff;
  *(undefined4 *)((long)plVar4 + 0x44c) = 0;
  *(undefined4 *)(plVar4 + 0x8a) = 0xffffffff;
  *(undefined1 *)((long)plVar4 + 0x454) = 0;
  *(undefined4 *)(plVar4 + 0x7f) = 0;
  FUN_71017ccff0(plVar4 + 100);
  local_70 = (long ***)0x0;
  local_38 = 0;
  pUVar7 = (Uid *)*DAT_710593b580;
  iVar2 = *(int *)(pUVar7 + 0x7300);
  if (iVar2 != -1) {
    if (*(ulong *)(pUVar7 + 0x72c0) <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pUVar7 = pUVar7 + (long)iVar2 * 0xcc0 + 0xcc0;
  }
  iVar2 = nn::fs::GetSaveDataSize((long *)&local_70,(long *)&local_38,pUVar7);
  uVar3 = local_38;
  if (iVar2 != 0) {
    nn::err::ShowError(iVar2);
    uVar3 = 0;
  }
  plVar4[0x97] = uVar3 - 0x80000;
  uVar3 = *(ulong *)(param_1 + 0x60);
  *(long **)(param_1 + 0x60) = plVar4;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x470);
    if (uVar5 != 0) {
      *(ulong *)(uVar3 + 0x478) = uVar5;
      FUN_710392eb40(uVar5);
    }
    uVar5 = *(ulong *)(uVar3 + 0x458);
    if (uVar5 != 0) {
      *(ulong *)(uVar3 + 0x460) = uVar5;
      FUN_710392eb40(uVar5);
    }
    plVar4 = *(long **)(uVar3 + 0x310);
    if ((long *)(uVar3 + 0x2f0) == plVar4) {
      pcVar10 = *(code **)(*plVar4 + 0x20);
LAB_71017c9bb0:
      (*pcVar10)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x28);
      goto LAB_71017c9bb0;
    }
    plVar4 = *(long **)(uVar3 + 0x2e0);
    if ((long *)(uVar3 + 0x2c0) == plVar4) {
      pcVar10 = *(code **)(*plVar4 + 0x20);
LAB_71017c9bdc:
      (*pcVar10)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x28);
      goto LAB_71017c9bdc;
    }
    plVar4 = *(long **)(uVar3 + 0x2b0);
    if ((long *)(uVar3 + 0x290) == plVar4) {
      pcVar10 = *(code **)(*plVar4 + 0x20);
LAB_71017c9c08:
      (*pcVar10)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x28);
      goto LAB_71017c9c08;
    }
    plVar4 = *(long **)(uVar3 + 0x280);
    if ((long *)(uVar3 + 0x260) == plVar4) {
      pcVar10 = *(code **)(*plVar4 + 0x20);
LAB_71017c9c34:
      (*pcVar10)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x28);
      goto LAB_71017c9c34;
    }
    plVar4 = *(long **)(uVar3 + 0x250);
    if ((long *)(uVar3 + 0x230) == plVar4) {
      pcVar10 = *(code **)(*plVar4 + 0x20);
LAB_71017c9c60:
      (*pcVar10)();
    }
    else if (plVar4 != (long *)0x0) {
      pcVar10 = *(code **)(*plVar4 + 0x28);
      goto LAB_71017c9c60;
    }
    FUN_710392eb40(uVar3);
  }
  if (alStack_a0 == local_80) {
    pcVar10 = *(code **)(*local_80 + 0x20);
LAB_71017c9c98:
    (*pcVar10)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar10 = *(code **)(*local_80 + 0x28);
    goto LAB_71017c9c98;
  }
  if (alStack_d0 == local_b0) {
    pcVar10 = *(code **)(*local_b0 + 0x20);
LAB_71017c9cc8:
    (*pcVar10)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar10 = *(code **)(*local_b0 + 0x28);
    goto LAB_71017c9cc8;
  }
  if (alStack_100 == local_e0) {
    pcVar10 = *(code **)(*local_e0 + 0x20);
LAB_71017c9cf8:
    (*pcVar10)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar10 = *(code **)(*local_e0 + 0x28);
    goto LAB_71017c9cf8;
  }
  if (alStack_130 == local_110) {
    pcVar10 = *(code **)(*local_110 + 0x20);
LAB_71017c9d28:
    (*pcVar10)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar10 = *(code **)(*local_110 + 0x28);
    goto LAB_71017c9d28;
  }
  if (alStack_160 == local_140) {
    pcVar10 = *(code **)(*local_140 + 0x20);
  }
  else {
    if (local_140 == (long *)0x0) goto LAB_71017c9d5c;
    pcVar10 = *(code **)(*local_140 + 0x28);
  }
  (*pcVar10)();
LAB_71017c9d5c:
  *(undefined1 *)(param_1 + 0xfc) = 0;
  return;
}

