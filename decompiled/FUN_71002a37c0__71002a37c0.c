// addr:      71002a37c0
// offset:    0x2a37c0
// name:      FUN_71002a37c0
// mangled:   
// signature: undefined8 __cdecl FUN_71002a37c0(long param_1, long param_2)


undefined8 FUN_71002a37c0(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
  char *pcVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  long *local_d0;
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [4];
  char acStack_5c [12];
  
  local_70 = 0;
  uStack_68 = 0x100;
  local_d0 = &local_90;
  local_c8 = auStack_60;
  local_90 = 0;
  local_88 = 0;
  local_94 = 0;
  local_c0 = 0;
  local_a8 = 0;
  uStack_a0 = 0x200;
  local_98 = 0x144;
  local_80 = 0;
  local_78 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_71001b3160(&local_d0);
  lVar3 = local_b0;
  if (local_b0 == local_b8) {
    local_94 = 1;
  }
  else {
    if (*(ulong *)(local_b0 + -0x10) != 0) {
      if (*(char *)(local_b0 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b0 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d0,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d0,0x38);
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar8 = (byte *)"requestId";
  do {
    while( true ) {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 != '\0') break;
      pbVar12 = (byte *)local_d0[3];
      local_d0[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar1;
LAB_71002a38d8:
      pbVar12 = pbVar8 + -0x71042d5805;
      pbVar8 = pbVar8 + 1;
      if (&DAT_00000008 < pbVar12) goto LAB_71002a3988;
    }
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar5 = (char *)local_d0[3];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    if (cVar2 != 'u') goto LAB_71002a38d8;
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
    pcVar5 = (char *)local_d0[3];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pcVar5 = (char *)local_d0[3];
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pbVar12 = pbVar8 + -0x71042d5805;
    pbVar8 = pbVar8 + 1;
  } while (pbVar12 < &DAT_00000009);
LAB_71002a3988:
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  iVar4 = FUN_71001b34a0(0xffffffff);
  lVar3 = local_b0;
  if (local_b0 == local_b8) {
    local_94 = 1;
  }
  else {
    if (*(ulong *)(local_b0 + -0x10) != 0) {
      if (*(char *)(local_b0 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b0 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d0,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  pcVar5 = FUN_71001b9fe0((ulong)(iVar4 + 1),acStack_5c);
  FUN_71002ad6c0(local_d0,(long)pcVar5 - (long)acStack_5c);
  lVar3 = local_b0;
  if (acStack_5c != pcVar5) {
    pcVar11 = acStack_5c;
    do {
      pcVar7 = pcVar11 + 1;
      cVar2 = *pcVar11;
      pcVar11 = (char *)local_d0[3];
      local_d0[3] = (long)(pcVar11 + 1);
      *pcVar11 = cVar2;
      pcVar11 = pcVar7;
    } while (pcVar5 != pcVar7);
  }
  if (local_b0 == local_b8) {
    local_94 = 1;
  }
  else {
    if (*(ulong *)(local_b0 + -0x10) != 0) {
      if (*(char *)(local_b0 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b0 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d0,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d0,0x38);
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar8 = (byte *)"parameter";
  do {
    while( true ) {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 != '\0') break;
      pbVar12 = (byte *)local_d0[3];
      local_d0[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar1;
LAB_71002a3ad8:
      pbVar12 = pbVar8 + -0x710434985a;
      pbVar8 = pbVar8 + 1;
      if (&DAT_00000008 < pbVar12) goto LAB_71002a3b88;
    }
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar5 = (char *)local_d0[3];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    if (cVar2 != 'u') goto LAB_71002a3ad8;
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
    pcVar5 = (char *)local_d0[3];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pcVar5 = (char *)local_d0[3];
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pbVar12 = pbVar8 + -0x710434985a;
    pbVar8 = pbVar8 + 1;
  } while (pbVar12 < &DAT_00000009);
LAB_71002a3b88:
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  FUN_71001b3160(&local_d0);
  lVar3 = local_b0;
  if (local_b0 == local_b8) {
    local_94 = 1;
  }
  else {
    if (*(ulong *)(local_b0 + -0x10) != 0) {
      if (*(char *)(local_b0 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b0 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d0,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  FUN_71002ad6c0(local_d0,0x3e);
  lVar3 = local_b0;
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar8 = (byte *)"nsaIdToken";
  do {
    while( true ) {
      bVar1 = *pbVar8;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
      if (cVar2 != '\0') break;
      pbVar12 = (byte *)local_d0[3];
      local_d0[3] = (long)(pbVar12 + 1);
      *pbVar12 = bVar1;
LAB_71002a3c40:
      pbVar12 = pbVar8 + -0x7104339735;
      pbVar8 = pbVar8 + 1;
      if (&DAT_00000009 < pbVar12) goto LAB_71002a3cf0;
    }
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x5c;
    pcVar5 = (char *)local_d0[3];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    if (cVar2 != 'u') goto LAB_71002a3c40;
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    puVar10 = (undefined1 *)local_d0[3];
    local_d0[3] = (long)(puVar10 + 1);
    *puVar10 = 0x30;
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
    pcVar5 = (char *)local_d0[3];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pcVar5 = (char *)local_d0[3];
    cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
    local_d0[3] = (long)(pcVar5 + 1);
    *pcVar5 = cVar2;
    pbVar12 = pbVar8 + -0x7104339735;
    pbVar8 = pbVar8 + 1;
  } while (pbVar12 < (byte *)0xa);
LAB_71002a3cf0:
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  pbVar12 = *(byte **)(param_1 + 0x20);
  pbVar8 = pbVar12 + -1;
  do {
    pbVar8 = pbVar8 + 1;
  } while (*pbVar8 != 0);
  if (local_b0 == local_b8) {
    local_94 = 1;
  }
  else {
    if (*(ulong *)(local_b0 + -0x10) != 0) {
      if (*(char *)(local_b0 + -8) == '\0') {
        uVar6 = 0x2c;
        if ((*(ulong *)(local_b0 + -0x10) & 1) != 0) {
          uVar6 = 0x3a;
        }
      }
      else {
        uVar6 = 0x2c;
      }
      FUN_71002ad5d0(local_d0,uVar6);
    }
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
  }
  iVar4 = (int)((long)pbVar8 - (long)pbVar12);
  FUN_71002ad6c0(local_d0,(ulong)(iVar4 * 6 + 2));
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  if (iVar4 != 0) {
    uVar9 = (long)pbVar8 - (long)pbVar12 & 0xffffffff;
    pbVar8 = pbVar12;
    do {
      while( true ) {
        bVar1 = *pbVar8;
        cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 + 0x10];
        if (cVar2 != '\0') break;
        pbVar13 = (byte *)local_d0[3];
        local_d0[3] = (long)(pbVar13 + 1);
        *pbVar13 = bVar1;
LAB_71002a3dbc:
        pbVar8 = pbVar8 + 1;
        if (uVar9 <= (ulong)((long)pbVar8 - (long)pbVar12)) goto LAB_71002a3e6c;
      }
      puVar10 = (undefined1 *)local_d0[3];
      local_d0[3] = (long)(puVar10 + 1);
      *puVar10 = 0x5c;
      pcVar5 = (char *)local_d0[3];
      pbVar13 = pbVar8 + 1;
      local_d0[3] = (long)(pcVar5 + 1);
      *pcVar5 = cVar2;
      if (cVar2 != 'u') goto LAB_71002a3dbc;
      puVar10 = (undefined1 *)local_d0[3];
      local_d0[3] = (long)(puVar10 + 1);
      *puVar10 = 0x30;
      puVar10 = (undefined1 *)local_d0[3];
      local_d0[3] = (long)(puVar10 + 1);
      *puVar10 = 0x30;
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[bVar1 >> 4];
      pcVar5 = (char *)local_d0[3];
      local_d0[3] = (long)(pcVar5 + 1);
      *pcVar5 = cVar2;
      pcVar5 = (char *)local_d0[3];
      cVar2 = "0123456789ABCDEFuuuuuuuubtnufruuuuuuuuuuuuuuuuuu"[(ulong)bVar1 & 0xf];
      local_d0[3] = (long)(pcVar5 + 1);
      *pcVar5 = cVar2;
      pbVar8 = pbVar13;
    } while ((ulong)((long)pbVar13 - (long)pbVar12) < uVar9);
  }
LAB_71002a3e6c:
  puVar10 = (undefined1 *)local_d0[3];
  local_d0[3] = (long)(puVar10 + 1);
  *puVar10 = 0x22;
  local_b0 = local_b0 + -0x10;
  FUN_71002ad5d0(local_d0,0x7d);
  local_b0 = local_b0 + -0x10;
  FUN_71002ad5d0(local_d0,0x7d);
  pcVar5 = (char *)FUN_71002ac3d0(&local_90);
  FUN_71001b3cb0(param_2,pcVar5);
  FUN_71001b1870(local_b8);
  if (local_c0 != 0) {
    FUN_71001b1870(local_c0);
  }
  FUN_71001b1870(local_80);
  if (local_88 != 0) {
    FUN_71001b1870(local_88);
  }
  return 1;
}

