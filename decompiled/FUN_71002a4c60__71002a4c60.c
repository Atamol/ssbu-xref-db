// addr:      71002a4c60
// offset:    0x2a4c60
// name:      FUN_71002a4c60
// mangled:   
// signature: undefined8 __cdecl FUN_71002a4c60(long param_1, long param_2)


undefined8 FUN_71002a4c60(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  char *pcVar12;
  byte *pbVar13;
  ulong uVar14;
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
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  pbVar10 = (byte *)"requestId";
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar13 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar13 + 1);
      *pbVar13 = bVar2;
LAB_71002a4d78:
      pbVar13 = pbVar10 + -0x71042d5805;
      pbVar10 = pbVar10 + 1;
      if (&DAT_00000008 < pbVar13) goto LAB_71002a4e28;
    }
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a4d78;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar13 = pbVar10 + -0x71042d5805;
    pbVar10 = pbVar10 + 1;
  } while (pbVar13 < &DAT_00000009);
LAB_71002a4e28:
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
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
    pcVar12 = acStack_64;
    do {
      pcVar9 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar12 + 1);
      *pcVar12 = cVar3;
      pcVar12 = pcVar9;
    } while (pcVar6 != pcVar9);
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
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  pbVar10 = (byte *)"parameter";
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar13 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar13 + 1);
      *pbVar13 = bVar2;
LAB_71002a4f78:
      pbVar13 = pbVar10 + -0x710434985a;
      pbVar10 = pbVar10 + 1;
      if (&DAT_00000008 < pbVar13) goto LAB_71002a5028;
    }
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a4f78;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar13 = pbVar10 + -0x710434985a;
    pbVar10 = pbVar10 + 1;
  } while (pbVar13 < &DAT_00000009);
LAB_71002a5028:
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
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
  lVar4 = local_b8;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  pbVar10 = (byte *)"sessionId";
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar13 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar13 + 1);
      *pbVar13 = bVar2;
LAB_71002a50e0:
      pbVar13 = pbVar10 + -0x7104400934;
      pbVar10 = pbVar10 + 1;
      if (&DAT_00000008 < pbVar13) goto LAB_71002a5190;
    }
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a50e0;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar13 = pbVar10 + -0x7104400934;
    pbVar10 = pbVar10 + 1;
  } while (pbVar13 < &DAT_00000009);
LAB_71002a5190:
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  uVar14 = *(ulong *)(param_1 + 8);
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
  pcVar6 = FUN_71001b9950(uVar14,acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar6 - (long)acStack_64);
  lVar4 = local_b8;
  if (acStack_64 != pcVar6) {
    pcVar12 = acStack_64;
    do {
      pcVar9 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar12 + 1);
      *pcVar12 = cVar3;
      pcVar12 = pcVar9;
    } while (pcVar6 != pcVar9);
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
  FUN_71002ad6c0(local_d8,0x3e);
  lVar4 = local_b8;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  pbVar10 = (byte *)"gameModeId";
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar13 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar13 + 1);
      *pbVar13 = bVar2;
LAB_71002a52d8:
      pbVar13 = pbVar10 + -0x7104307a86;
      pbVar10 = pbVar10 + 1;
      if (&DAT_00000009 < pbVar13) goto LAB_71002a5388;
    }
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a52d8;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar13 = pbVar10 + -0x7104307a86;
    pbVar10 = pbVar10 + 1;
  } while (pbVar13 < (byte *)0xa);
LAB_71002a5388:
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
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
  lVar4 = local_b8;
  if (acStack_64 != pcVar6) {
    pcVar12 = acStack_64;
    do {
      pcVar9 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar12 + 1);
      *pcVar12 = cVar3;
      pcVar12 = pcVar9;
    } while (pcVar6 != pcVar9);
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
  FUN_71002ad6c0(local_d8,0x2c);
  lVar4 = local_b8;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  pbVar10 = (byte *)"channel";
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar13 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar13 + 1);
      *pbVar13 = bVar2;
LAB_71002a54d4:
      pbVar13 = pbVar10 + -0x71042f770d;
      pbVar10 = pbVar10 + 1;
      if ((byte *)0x6 < pbVar13) goto LAB_71002a5584;
    }
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a54d4;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar13 = pbVar10 + -0x71042f770d;
    pbVar10 = pbVar10 + 1;
  } while (pbVar13 < &DAT_00000007);
LAB_71002a5584:
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar7 = 0x2c;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar8 = uVar7;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar8 = 0x3a;
        }
      }
      else {
        uVar8 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar8);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  pcVar6 = FUN_71001b9fe0((ulong)uVar1,acStack_64);
  FUN_71002ad6c0(local_d8,(long)pcVar6 - (long)acStack_64);
  lVar4 = local_b8;
  if (acStack_64 != pcVar6) {
    pcVar12 = acStack_64;
    do {
      pcVar9 = pcVar12 + 1;
      cVar3 = *pcVar12;
      pcVar12 = (char *)local_d8[3];
      local_d8[3] = (long)(pcVar12 + 1);
      *pcVar12 = cVar3;
      pcVar12 = pcVar9;
    } while (pcVar6 != pcVar9);
  }
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
        uVar8 = uVar7;
        if ((*(ulong *)(local_b8 + -0x10) & 1) != 0) {
          uVar8 = 0x3a;
        }
      }
      else {
        uVar8 = 0x2c;
      }
      FUN_71002ad5d0(local_d8,uVar8);
    }
    *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d8,0x62);
  lVar4 = local_b8;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  pbVar10 = (byte *)"createIfNotExist";
  do {
    while( true ) {
      bVar2 = *pbVar10;
      cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 + 0x10];
      if (cVar3 != '\0') break;
      pbVar13 = (byte *)local_d8[3];
      local_d8[3] = (long)(pbVar13 + 1);
      *pbVar13 = bVar2;
LAB_71002a56c4:
      pbVar13 = pbVar10 + -0x71042b382c;
      pbVar10 = pbVar10 + 1;
      if (&DAT_0000000f < pbVar13) goto LAB_71002a5774;
    }
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x5c;
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    if (cVar3 != 'u') goto LAB_71002a56c4;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    puVar11 = (undefined1 *)local_d8[3];
    local_d8[3] = (long)(puVar11 + 1);
    *puVar11 = 0x30;
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar2 >> 4];
    pcVar6 = (char *)local_d8[3];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pcVar6 = (char *)local_d8[3];
    cVar3 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar2 & 0xf];
    local_d8[3] = (long)(pcVar6 + 1);
    *pcVar6 = cVar3;
    pbVar13 = pbVar10 + -0x71042b382c;
    pbVar10 = pbVar10 + 1;
  } while (pbVar13 < &DAT_00000010);
LAB_71002a5774:
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x22;
  if (local_b8 == local_c0) {
    local_9c = 1;
  }
  else {
    if (*(ulong *)(local_b8 + -0x10) != 0) {
      if (*(char *)(local_b8 + -8) == '\0') {
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
  FUN_71002ad6c0(local_d8,4);
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x74;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x72;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x75;
  puVar11 = (undefined1 *)local_d8[3];
  local_d8[3] = (long)(puVar11 + 1);
  *puVar11 = 0x65;
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

