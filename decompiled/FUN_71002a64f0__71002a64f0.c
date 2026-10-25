// addr:      71002a64f0
// offset:    0x2a64f0
// name:      FUN_71002a64f0
// mangled:   
// signature: undefined8 __cdecl FUN_71002a64f0(long param_1, long param_2)


undefined8 FUN_71002a64f0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  ulong uVar12;
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
  lVar3 = local_b8;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x38);
  puVar9 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  pbVar8 = (byte *)"requestId";
  do {
    while( true ) {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 != '\0') break;
      pbVar11 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar11 + 1);
      *pbVar11 = bVar1;
LAB_71002a6608:
      pbVar11 = pbVar8 + -0x71042d5805;
      pbVar8 = pbVar8 + 1;
      if (&DAT_00000008 < pbVar11) goto LAB_71002a66b8;
    }
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x5c;
    pcVar5 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    if (cVar2 != 'u') goto LAB_71002a6608;
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x30;
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x30;
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
    pcVar5 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pcVar5 = (char *)local_d8[3];
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pbVar11 = pbVar8 + -0x71042d5805;
    pbVar8 = pbVar8 + 1;
  } while (pbVar11 < &DAT_00000009);
LAB_71002a66b8:
  puVar9 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  iVar4 = FUN_71001b34a0(0xffffffff);
  lVar3 = local_b8;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  pcVar5 = FUN_71001b9fe0((ulong)(iVar4 + 1),acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar5 - (long)acStack_64);
  lVar3 = local_b8;
  if (acStack_64 != pcVar5) {
    pcVar10 = acStack_64;
    do {
      pcVar7 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar10 + 1);
      *pcVar10 = cVar2;
      pcVar10 = pcVar7;
    } while (pcVar5 != pcVar7);
  }
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x38);
  puVar9 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  pbVar8 = (byte *)"parameter";
  do {
    while( true ) {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 != '\0') break;
      pbVar11 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar11 + 1);
      *pbVar11 = bVar1;
LAB_71002a6808:
      pbVar11 = pbVar8 + -0x710434985a;
      pbVar8 = pbVar8 + 1;
      if (&DAT_00000008 < pbVar11) goto LAB_71002a68b8;
    }
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x5c;
    pcVar5 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    if (cVar2 != 'u') goto LAB_71002a6808;
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x30;
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x30;
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
    pcVar5 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pcVar5 = (char *)local_d8[3];
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pbVar11 = pbVar8 + -0x710434985a;
    pbVar8 = pbVar8 + 1;
  } while (pbVar11 < &DAT_00000009);
LAB_71002a68b8:
  puVar9 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  FUN_71001b3160(&local_d8);
  lVar3 = local_b8;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x26);
  lVar3 = local_b8;
  puVar9 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  pbVar8 = (byte *)"roomId";
  do {
    while( true ) {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 != '\0') break;
      pbVar11 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar11 + 1);
      *pbVar11 = bVar1;
LAB_71002a6970:
      pbVar11 = pbVar8 + -0x71043184b6;
      pbVar8 = pbVar8 + 1;
      if ((byte *)0x5 < pbVar11) goto LAB_71002a6a20;
    }
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x5c;
    pcVar5 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    if (cVar2 != 'u') goto LAB_71002a6970;
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x30;
    puVar9 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar9 + 1);
    *puVar9 = 0x30;
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
    pcVar5 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pcVar5 = (char *)local_d8[3];
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
    local_d8[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pbVar11 = pbVar8 + -0x71043184b6;
    pbVar8 = pbVar8 + 1;
  } while (pbVar11 < (byte *)0x6);
LAB_71002a6a20:
  puVar9 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar9 + 1);
  *puVar9 = 0x22;
  uVar12 = *(ulong *)(param_1 + 8);
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  pcVar5 = FUN_71001b9950(uVar12,acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar5 - (long)acStack_64);
  if (acStack_64 != pcVar5) {
    pcVar10 = acStack_64;
    do {
      pcVar7 = pcVar10 + 1;
      cVar2 = *pcVar10;
      pcVar10 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar10 + 1);
      *pcVar10 = cVar2;
      pcVar10 = pcVar7;
    } while (pcVar5 != pcVar7);
  }
  local_b8 = local_b8 + -0x10;
  FUN_71002ad5d0(local_d8,0x7d);
  local_b8 = local_b8 + -0x10;
  FUN_71002ad5d0(local_d8,0x7d);
  pcVar5 = (char *)FUN_71002ac3d0(&local_98);
  FUN_71001b3cb0(param_2,pcVar5);
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

