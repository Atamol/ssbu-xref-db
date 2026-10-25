// addr:      71017c8910
// offset:    0x17c8910
// name:      FUN_71017c8910
// mangled:   
// signature: undefined __cdecl FUN_71017c8910(ulong * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71017c8910(ulong *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long ****pppplVar5;
  Uid *pUVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined4 local_350;
  uint uStack_34c;
  undefined4 local_348;
  byte local_344 [260];
  undefined8 local_240;
  byte local_238 [264];
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  ulong local_40;
  long ***local_38;
  
  if (*param_1 != 0) {
    return;
  }
  local_238[0] = 0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_80 = (long *)0x0;
  local_50 = (long *)0x0;
  local_344[0] = 0;
  local_350 = 5;
  for (uVar10 = 0; "save:/save_data/mii"[uVar10] != 0; uVar10 = uVar10 + 2) {
    bVar1 = "save:/save_data/mii"[uVar10 + 1];
    local_344[uVar10] = "save:/save_data/mii"[uVar10];
    if (bVar1 == 0) {
      uVar10 = uVar10 + 1;
      break;
    }
    local_344[uVar10 + 1] = bVar1;
  }
  uVar7 = 0x811c9dc5;
  *(undefined1 *)(((ulong)&local_350 | 0xc) + (uVar10 & 0xffffffff)) = 0;
  local_348 = (undefined4)uVar10;
  uVar9 = (uint)local_344[0];
  uStack_34c = uVar7;
  if (local_344[0] != 0) {
    pbVar11 = (byte *)((ulong)&local_350 | 0xd);
    do {
      uStack_34c = uStack_34c * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar9 != 0);
  }
  for (uVar10 = 0; (&DAT_710425eb1f)[uVar10] != 0; uVar10 = uVar10 + 2) {
    bVar1 = (&DAT_710425eb20)[uVar10];
    local_238[uVar10] = (&DAT_710425eb1f)[uVar10];
    if (bVar1 == 0) {
      uVar10 = uVar10 + 1;
      break;
    }
    local_238[uVar10 + 1] = bVar1;
  }
  local_238[uVar10 & 0xffffffff] = 0;
  uVar9 = (uint)local_238[0];
  if (local_238[0] != 0) {
    pbVar11 = local_238;
    do {
      pbVar11 = pbVar11 + 1;
      uVar7 = uVar7 * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar11;
    } while (uVar9 != 0);
  }
  local_240 = CONCAT44((int)uVar10,uVar7);
  plVar3 = (long *)FUN_710392e290(0x10,0x4d0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    local_40 = local_40 & 0xffffffff00000000;
    local_38 = (long ***)0x4d0;
    pppplVar5 = &local_38;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_40);
    plVar3 = (long *)FUN_710392e290(0x10,0x4d0,pppplVar5,param_4,param_5,param_6,param_7,param_8);
  }
  *plVar3 = (long)(param_1 + 1);
  FUN_71017c1e40((undefined4 *)(plVar3 + 2),&local_350);
  plVar3[0x94] = (long)FUN_71017c2130;
  plVar3[0x95] = (long)FUN_710143c880;
  plVar3[0x91] = (long)FUN_71017c2120;
  plVar3[0x69] = (long)FUN_71017c2150;
  plVar3[0x6b] = (long)FUN_71017c2160;
  plVar3[0x6d] = (long)FUN_71017c2220;
  plVar3[0x6f] = (long)FUN_71017c22e0;
  plVar3[0x71] = (long)FUN_71017c2530;
  plVar3[0x73] = (long)FUN_71017c2910;
  plVar3[0x75] = (long)FUN_71017c2d30;
  plVar3[0x77] = (long)FUN_71017c31d0;
  plVar3[0x79] = (long)FUN_71017c3fd0;
  plVar3[0x7b] = (long)FUN_71017c4290;
  plVar3[100] = (long)plVar3;
  plVar3[0x68] = 0;
  plVar3[0x67] = 0;
  plVar3[0x90] = 0;
  plVar3[0x8f] = 0;
  plVar3[0x8e] = 0;
  plVar3[0x8d] = 0;
  plVar3[0x8c] = 0;
  plVar3[0x8b] = 0;
  plVar3[0x93] = (long)plVar3;
  plVar3[0x92] = 0;
  *(undefined2 *)(plVar3 + 0x99) = 0;
  plVar3[0x98] = 0;
  plVar3[0x97] = 0;
  plVar3[0x96] = 0;
  plVar3[0x6a] = 0;
  plVar3[0x6c] = 0;
  plVar3[0x6e] = 0;
  plVar3[0x70] = 0;
  plVar3[0x72] = 0;
  plVar3[0x74] = 0;
  plVar3[0x76] = 0;
  plVar3[0x78] = 0;
  plVar3[0x7a] = 0;
  plVar3[0x7c] = 0;
  plVar3[0x7d] = (long)FUN_71017c47a0;
  plVar3[0x7e] = 0;
  plVar3[0x66] = 0;
  plVar3[0x65] = 0;
  *(undefined8 *)((long)plVar3 + 0x43c) = 0;
  *(undefined8 *)((long)plVar3 + 0x434) = 0;
  *(undefined8 *)((long)plVar3 + 0x42c) = 0;
  *(undefined8 *)((long)plVar3 + 0x424) = 0;
  *(undefined8 *)((long)plVar3 + 0x41c) = 0;
  *(undefined8 *)((long)plVar3 + 0x414) = 0;
  *(undefined8 *)((long)plVar3 + 0x40c) = 0;
  *(undefined8 *)((long)plVar3 + 0x3fc) = 0;
  *(undefined4 *)((long)plVar3 + 0x444) = 0;
  *(undefined8 *)((long)plVar3 + 0x404) = 0;
  *(undefined4 *)(plVar3 + 0x89) = 0xffffffff;
  *(undefined4 *)((long)plVar3 + 0x44c) = 0;
  *(undefined4 *)(plVar3 + 0x8a) = 0xffffffff;
  *(undefined1 *)((long)plVar3 + 0x454) = 0;
  *(undefined4 *)(plVar3 + 0x7f) = 0;
  FUN_71017c47e0(plVar3 + 100);
  local_40 = 0;
  local_38 = (long ***)0x0;
  pUVar6 = (Uid *)*DAT_710593b580;
  iVar2 = *(int *)(pUVar6 + 0x7300);
  if (iVar2 != -1) {
    if (*(ulong *)(pUVar6 + 0x72c0) <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pUVar6 = pUVar6 + (long)iVar2 * 0xcc0 + 0xcc0;
  }
  iVar2 = nn::fs::GetSaveDataSize((long *)&local_38,(long *)&local_40,pUVar6);
  uVar10 = local_40;
  if (iVar2 != 0) {
    nn::err::ShowError(iVar2);
    uVar10 = 0;
  }
  plVar3[0x97] = uVar10 - 0x80000;
  uVar10 = *param_1;
  *param_1 = (ulong)plVar3;
  if (uVar10 != 0) {
    uVar4 = *(ulong *)(uVar10 + 0x470);
    if (uVar4 != 0) {
      *(ulong *)(uVar10 + 0x478) = uVar4;
      FUN_710392eb40(uVar4);
    }
    uVar4 = *(ulong *)(uVar10 + 0x458);
    if (uVar4 != 0) {
      *(ulong *)(uVar10 + 0x460) = uVar4;
      FUN_710392eb40(uVar4);
    }
    plVar3 = *(long **)(uVar10 + 0x310);
    if ((long *)(uVar10 + 0x2f0) == plVar3) {
      pcVar8 = *(code **)(*plVar3 + 0x20);
LAB_71017c8cf0:
      (*pcVar8)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar3 + 0x28);
      goto LAB_71017c8cf0;
    }
    plVar3 = *(long **)(uVar10 + 0x2e0);
    if ((long *)(uVar10 + 0x2c0) == plVar3) {
      pcVar8 = *(code **)(*plVar3 + 0x20);
LAB_71017c8d1c:
      (*pcVar8)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar3 + 0x28);
      goto LAB_71017c8d1c;
    }
    plVar3 = *(long **)(uVar10 + 0x2b0);
    if ((long *)(uVar10 + 0x290) == plVar3) {
      pcVar8 = *(code **)(*plVar3 + 0x20);
LAB_71017c8d48:
      (*pcVar8)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar3 + 0x28);
      goto LAB_71017c8d48;
    }
    plVar3 = *(long **)(uVar10 + 0x280);
    if ((long *)(uVar10 + 0x260) == plVar3) {
      pcVar8 = *(code **)(*plVar3 + 0x20);
LAB_71017c8d74:
      (*pcVar8)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar3 + 0x28);
      goto LAB_71017c8d74;
    }
    plVar3 = *(long **)(uVar10 + 0x250);
    if ((long *)(uVar10 + 0x230) == plVar3) {
      pcVar8 = *(code **)(*plVar3 + 0x20);
LAB_71017c8da0:
      (*pcVar8)();
    }
    else if (plVar3 != (long *)0x0) {
      pcVar8 = *(code **)(*plVar3 + 0x28);
      goto LAB_71017c8da0;
    }
    FUN_710392eb40(uVar10);
  }
  if (alStack_70 == local_50) {
    pcVar8 = *(code **)(*local_50 + 0x20);
LAB_71017c8dd8:
    (*pcVar8)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar8 = *(code **)(*local_50 + 0x28);
    goto LAB_71017c8dd8;
  }
  if (alStack_a0 == local_80) {
    pcVar8 = *(code **)(*local_80 + 0x20);
LAB_71017c8e08:
    (*pcVar8)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar8 = *(code **)(*local_80 + 0x28);
    goto LAB_71017c8e08;
  }
  if (alStack_d0 == local_b0) {
    pcVar8 = *(code **)(*local_b0 + 0x20);
LAB_71017c8e38:
    (*pcVar8)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar8 = *(code **)(*local_b0 + 0x28);
    goto LAB_71017c8e38;
  }
  if (alStack_100 == local_e0) {
    pcVar8 = *(code **)(*local_e0 + 0x20);
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_71017c8e6c;
    pcVar8 = *(code **)(*local_e0 + 0x28);
  }
  (*pcVar8)();
LAB_71017c8e6c:
  if (alStack_130 == local_110) {
    pcVar8 = *(code **)(*local_110 + 0x20);
  }
  else {
    if (local_110 == (long *)0x0) {
      return;
    }
    pcVar8 = *(code **)(*local_110 + 0x28);
  }
  (*pcVar8)();
  return;
}

