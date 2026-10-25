// addr:      7102b63970
// offset:    0x2b63970
// name:      FUN_7102b63970
// mangled:   
// signature: undefined __cdecl FUN_7102b63970(int * param_1, undefined8 param_2, ulong param_3, uint param_4, uint param_5, uint param_6, ulong param_7, ulong param_8)


void FUN_7102b63970(int *param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
                   uint param_6,ulong param_7,ulong param_8)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 extraout_x1;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  byte bVar12;
  int iStack_124;
  byte local_120 [64];
  uint local_e0;
  int local_dc;
  byte local_d8 [64];
  uint auStack_98 [2];
  undefined1 auStack_90 [64];
  
  pbVar8 = (&PTR_DAT_7105117418)[param_6];
  uVar4 = param_3 & 0xffffffff;
  local_120[0] = 0;
  uVar9 = 0xffffffff;
  iStack_124 = 0;
  do {
    bVar12 = *pbVar8;
    if (bVar12 == 0) break;
    lVar11 = (long)iStack_124;
    uVar9 = uVar9 + 1;
    pbVar8 = pbVar8 + 1;
    iStack_124 = iStack_124 + 1;
    local_120[lVar11] = bVar12;
  } while (uVar9 < 0x3e);
  local_120[iStack_124] = 0;
  uVar9 = 0x811c9dc5;
  if (local_120[0] != 0) {
    pbVar8 = local_120;
    do {
      pbVar8 = pbVar8 + 1;
    } while (*pbVar8 != 0);
  }
  pbVar8 = (&PTR_DAT_7105117438)[(param_7 & 0xffffffff) * 4 + (param_8 & 0xffffffff)];
  if (pbVar8 != (byte *)0x0) {
    if (iStack_124 < 0x3f) {
      iVar10 = iStack_124 + -1;
      do {
        bVar12 = *pbVar8;
        if (bVar12 == 0) break;
        lVar11 = (long)iStack_124;
        iVar10 = iVar10 + 1;
        pbVar8 = pbVar8 + 1;
        iStack_124 = iStack_124 + 1;
        local_120[lVar11] = bVar12;
      } while (iVar10 < 0x3e);
    }
    local_120[iStack_124] = 0;
    if (local_120[0] != 0) {
      pbVar8 = local_120;
      do {
        pbVar8 = pbVar8 + 1;
      } while (*pbVar8 != 0);
    }
  }
  bVar12 = local_120[0];
  if (param_6 < 4) {
    iVar10 = *(int *)(&DAT_710446ab30 + (ulong)param_6 * 4);
  }
  else {
    iVar10 = 0;
  }
  pcVar1 = "Ground";
  if ((int)param_2 != 1) {
    pcVar1 = "Island";
  }
  pcVar2 = "Island";
  if ((int)param_2 != 0) {
    pcVar2 = pcVar1;
  }
  puVar3 = &DAT_710426e064;
  if (iVar10 != 1) {
    puVar3 = &DAT_710439b3be;
  }
  puVar5 = &DAT_71042b2c92;
  if (iVar10 != 2) {
    puVar5 = puVar3;
  }
  FUN_710176bcc0(auStack_98,param_2,"Land_%s_%02d_%s",pcVar2,uVar4,puVar5,param_7,param_8);
  FUN_710176bcc0(&local_e0,extraout_x1,"SP%d",(ulong)param_5,uVar4,puVar5,param_7,param_8);
  if (local_dc < 0x3f) {
    lVar11 = (long)local_dc;
    local_dc = local_dc + 1;
    local_d8[lVar11] = 0x5f;
  }
  local_d8[local_dc] = 0;
  uVar6 = (uint)local_d8[0];
  local_e0 = uVar9;
  if (local_d8[0] != 0) {
    pbVar8 = local_d8;
    do {
      pbVar8 = pbVar8 + 1;
      local_e0 = local_e0 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
  }
  if ((local_dc < 0x3f) && (bVar12 != 0)) {
    pbVar8 = local_120;
    iVar7 = local_dc;
    iVar10 = local_dc;
    while( true ) {
      pbVar8 = pbVar8 + 1;
      local_dc = iVar7 + 1;
      local_d8[iVar7] = bVar12;
      if ((0x3d < iVar10) || (bVar12 = *pbVar8, bVar12 == 0)) break;
      iVar10 = iVar10 + 1;
      iVar7 = iVar7 + 1;
    }
  }
  local_d8[local_dc] = 0;
  uVar6 = (uint)local_d8[0];
  if (local_d8[0] != 0) {
    pbVar8 = local_d8;
    do {
      pbVar8 = pbVar8 + 1;
      uVar9 = uVar9 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar8;
    } while (uVar6 != 0);
  }
  local_e0 = uVar9;
  FUN_7102b63800(param_1,(ulong)param_4,auStack_90,local_d8,uVar4,puVar5,param_7,param_8);
  return;
}

