// addr:      71002a8a80
// offset:    0x2a8a80
// name:      FUN_71002a8a80
// mangled:   
// signature: undefined8 __cdecl FUN_71002a8a80(long param_1, long param_2)


undefined8 FUN_71002a8a80(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  undefined1 uVar7;
  char *pcVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  ulong uVar13;
  long *local_d8;
  undefined1 *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [4];
  char acStack_64 [20];
  
  local_78 = 0;
  uStack_70 = 0x100;
  local_d8 = &local_98;
  local_d0 = auStack_68;
  local_98 = 0;
  local_90 = 0;
  local_9c = 0;
  local_c8 = 0;
  local_b0 = 0;
  uStack_a8 = 0x200;
  local_a0 = 0x144;
  local_88 = 0;
  local_80 = 0;
  local_c0 = 0;
  local_b8 = 0;
  FUN_71001b3160(&local_d8);
  lVar4 = local_b8;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x38);
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar9 = (byte *)"requestId";
  do {
    while( true ) {
      bVar2 = *pbVar9;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar12 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar2;
LAB_71002a8b98:
      pbVar12 = pbVar9 + -0x71042d5805;
      pbVar9 = pbVar9 + 1;
      if (&DAT_00000008 < pbVar12) goto LAB_71002a8c48;
    }
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a8b98;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar12 = pbVar9 + -0x71042d5805;
    pbVar9 = pbVar9 + 1;
  } while (pbVar12 < &DAT_00000009);
LAB_71002a8c48:
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  iVar5 = FUN_71001b34a0(0xffffffff);
  lVar4 = local_b8;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  pcVar6 = FUN_71001b9fe0((ulong)(iVar5 + 1),acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar6 - (long)acStack_64);
  lVar4 = local_b8;
  if (acStack_64 != pcVar6) {
    pcVar11 = acStack_64;
    do {
      pcVar8 = pcVar11 + 1;
      cVar3 = *pcVar11;
      pcVar11 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar11 + 1);
      *pcVar11 = cVar3;
      pcVar11 = pcVar8;
    } while (pcVar6 != pcVar8);
  }
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x38);
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar9 = (byte *)"parameter";
  do {
    while( true ) {
      bVar2 = *pbVar9;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar12 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar2;
LAB_71002a8d98:
      pbVar12 = pbVar9 + -0x710434985a;
      pbVar9 = pbVar9 + 1;
      if (&DAT_00000008 < pbVar12) goto LAB_71002a8e48;
    }
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a8d98;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar12 = pbVar9 + -0x710434985a;
    pbVar9 = pbVar9 + 1;
  } while (pbVar12 < &DAT_00000009);
LAB_71002a8e48:
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  FUN_71001b3160(&local_d8);
  lVar4 = local_b8;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x26);
  lVar4 = local_b8;
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar9 = (byte *)"roomId";
  do {
    while( true ) {
      bVar2 = *pbVar9;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar12 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar2;
LAB_71002a8f00:
      pbVar12 = pbVar9 + -0x71043184b6;
      pbVar9 = pbVar9 + 1;
      if ((byte *)0x5 < pbVar12) goto LAB_71002a8fb0;
    }
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a8f00;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar12 = pbVar9 + -0x71043184b6;
    pbVar9 = pbVar9 + 1;
  } while (pbVar12 < (byte *)0x6);
LAB_71002a8fb0:
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  uVar13 = *(ulong *)(param_1 + 8);
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  pcVar6 = FUN_71001b9950(uVar13,acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar6 - (long)acStack_64);
  lVar4 = local_b8;
  if (acStack_64 != pcVar6) {
    pcVar11 = acStack_64;
    do {
      pcVar8 = pcVar11 + 1;
      cVar3 = *pcVar11;
      pcVar11 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar11 + 1);
      *pcVar11 = cVar3;
      pcVar11 = pcVar8;
    } while (pcVar6 != pcVar8);
  }
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x38);
  lVar4 = local_b8;
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar9 = (byte *)"channelId";
  do {
    while( true ) {
      bVar2 = *pbVar9;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar12 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar2;
LAB_71002a90f8:
      pbVar12 = pbVar9 + -0x71043184bd;
      pbVar9 = pbVar9 + 1;
      if (&DAT_00000008 < pbVar12) goto LAB_71002a91a8;
    }
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a90f8;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar12 = pbVar9 + -0x71043184bd;
    pbVar9 = pbVar9 + 1;
  } while (pbVar12 < &DAT_00000009);
LAB_71002a91a8:
  puVar10 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar7 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar7 = 0x3a;
        }
      }
      else {
        uVar7 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar7);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  pcVar6 = FUN_71001b9fe0((ulong)uVar1,acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar6 - (long)acStack_64);
  if (acStack_64 != pcVar6) {
    pcVar11 = acStack_64;
    do {
      pcVar8 = pcVar11 + 1;
      cVar3 = *pcVar11;
      pcVar11 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar11 + 1);
      *pcVar11 = cVar3;
      pcVar11 = pcVar8;
    } while (pcVar6 != pcVar8);
  }
  local_b8 = local_b8 + -0x10;
  FUN_71002ad5d0(local_d8,0x7d);
  local_b8 = local_b8 + -0x10;
  FUN_71002ad5d0(local_d8,0x7d);
  pcVar6 = (char *)FUN_71002ac3d0(&local_98);
  FUN_71001b3cb0(param_2,pcVar6);
  FUN_71001b1870(local_c0);
  if (local_c8 != 0) {
    FUN_71001b1870(local_c8);
  }
  FUN_71001b1870(local_88);
  if (local_90 != 0) {
    FUN_71001b1870(local_90);
  }
  return 1;
}

