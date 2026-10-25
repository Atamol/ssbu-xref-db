// addr:      710323af70
// offset:    0x323af70
// name:      FUN_710323af70
// mangled:   
// signature: ulong __cdecl FUN_710323af70(long param_1, ulong param_2)


ulong FUN_710323af70(long param_1,ulong param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar9;
  uint local_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined2 local_454;
  undefined8 local_350;
  byte local_348 [264];
  undefined8 local_240;
  byte local_238 [264];
  uint uStack_130;
  uint local_12c;
  byte abStack_128 [264];
  byte *pbVar8;
  
  uVar4 = 0;
  pcVar1 = "ui/replace_patch/localize/localize_";
  if ((param_2 & 1) == 0) {
    pcVar1 = "ui/replace/localize/localize_";
  }
  while( true ) {
    bVar2 = pcVar1[uVar4];
    if (bVar2 == 0) break;
    local_238[uVar4] = bVar2;
    if (0x102 < (int)uVar4 + 1U) {
      uVar4 = (ulong)((int)uVar4 + 1);
      break;
    }
    bVar2 = (pcVar1 + uVar4)[1];
    if (bVar2 == 0) {
      uVar4 = uVar4 + 1;
      break;
    }
    local_238[uVar4 + 1] = bVar2;
    uVar4 = uVar4 + 2;
  }
  uVar9 = 0x811c9dc5;
  local_238[uVar4 & 0xffffffff] = 0;
  local_240 = uVar4 << 0x20;
  uVar3 = (uint)local_238[0];
  uVar6 = uVar9;
  if (local_238[0] != 0) {
    pbVar8 = local_238;
    do {
      pbVar8 = pbVar8 + 1;
      uVar6 = uVar6 * 0x89 ^ uVar3;
      uVar3 = (uint)*pbVar8;
    } while (uVar3 != 0);
  }
  local_240 = CONCAT44((int)uVar4,uVar6);
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    while( true ) {
      bVar2 = *(byte *)(param_1 + uVar4);
      if (bVar2 == 0) break;
      local_348[uVar4] = bVar2;
      if (0x102 < (int)uVar4 + 1U) {
        uVar4 = (ulong)((int)uVar4 + 1);
        break;
      }
      bVar2 = ((byte *)(param_1 + uVar4))[1];
      if (bVar2 == 0) {
        uVar4 = uVar4 + 1;
        break;
      }
      local_348[uVar4 + 1] = bVar2;
      uVar4 = uVar4 + 2;
    }
  }
  local_348[uVar4 & 0xffffffff] = 0;
  local_350 = uVar4 << 0x20;
  uVar3 = (uint)local_348[0];
  uVar6 = uVar9;
  if (local_348[0] != 0) {
    pbVar8 = local_348;
    do {
      pbVar8 = pbVar8 + 1;
      uVar6 = uVar6 * 0x89 ^ uVar3;
      uVar3 = (uint)*pbVar8;
    } while (uVar3 != 0);
  }
  local_350 = CONCAT44((int)uVar4,uVar6);
  uVar6 = 0x2e;
  local_458 = 0x746e622e;
  lVar5 = 9;
  local_454 = 0x78;
  do {
    uVar9 = uVar9 * 0x89 ^ uVar6;
    uVar6 = (uint)*(byte *)((long)&local_460 + lVar5);
    lVar5 = lVar5 + 1;
  } while (uVar6 != 0);
  _local_460 = CONCAT44(5,uVar9);
  FUN_710323b190(&uStack_130,(long)&local_240,(long)&local_350,(long)&local_460);
  if (local_12c == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0xffffffff;
    pbVar8 = abStack_128;
    do {
      pbVar7 = pbVar8 + 1;
      bVar2 = *pbVar8;
      uVar9 = bVar2 + 0x20;
      if (0x19 < bVar2 - 0x41) {
        uVar9 = (uint)bVar2;
      }
      uVar6 = (&DAT_7104754084)[(uVar9 ^ uVar6) & 0xff] ^ uVar6 >> 8;
      pbVar8 = pbVar7;
    } while (pbVar7 < abStack_128 + local_12c);
    uVar4 = (ulong)~uVar6;
  }
  return uVar4 | ((long)(int)local_12c & 0xffU) << 0x20;
}

