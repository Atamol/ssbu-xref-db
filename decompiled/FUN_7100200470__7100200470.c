// addr:      7100200470
// offset:    0x200470
// name:      FUN_7100200470
// mangled:   
// signature: undefined __cdecl FUN_7100200470(long * param_1, long param_2, long param_3, long param_4, undefined1 param_5)


void FUN_7100200470(long *param_1,long param_2,long param_3,long param_4,undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong *__s;
  ulonglong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined2 local_6c [2];
  ulong local_68;
  
  *param_1 = (long)&DAT_7104f572b0;
  param_1[2] = (long)&PTR_FUN_7104f57900;
  param_1[6] = 0;
  param_1[5] = (long)(param_1 + 6);
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = (long)(param_1 + 9);
  param_1[0xc] = 0;
  param_1[10] = 0;
  param_1[0xb] = (long)(param_1 + 0xc);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  *(undefined1 *)((long)param_1 + 0x7a) = 0;
  puVar5 = FUN_71001af850(0x90);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_71001beb40(puVar5);
  }
  param_1[3] = (long)puVar5;
  FUN_71001f1f40((long)(param_1 + 2),param_3);
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_7104f57c68;
  param_1[1] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  puVar5 = FUN_71001b1820(8);
  param_1[0x19] = (long)puVar5;
  param_1[0x1a] = (long)puVar5;
  param_1[0x1b] = (long)(puVar5 + 1);
  *puVar5 = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = param_1[0x1a] + 8;
  puVar5 = FUN_71001b1820(8);
  param_1[0x1c] = (long)puVar5;
  param_1[0x1d] = (long)puVar5;
  param_1[0x1e] = (long)(puVar5 + 1);
  *puVar5 = 0;
  param_1[0x1d] = param_1[0x1d] + 8;
  uVar2 = *(uint *)(param_2 + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_71002005f4:
    lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 == 0) goto LAB_71002005f4;
    lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
  }
  iVar12 = *(int *)(lVar9 + 0xdc);
  *(undefined4 *)((long)param_1 + 300) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(int *)(param_1 + 0x26) = iVar12;
  *(int *)(param_1 + 0x25) = iVar12 << 3;
  *(undefined1 *)((long)param_1 + 0x134) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  param_1[0x33] = 0;
  param_1[0x24] = (long)&PTR_FUN_7104f581d8;
  param_1[0x29] = (long)&PTR_FUN_7104f59348;
  param_1[0x2b] = (long)&PTR_FUN_7104f59348;
  param_1[0x2e] = (long)&PTR_FUN_7104f59348;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar5 = FUN_71001b1820(8);
  param_1[0x37] = (long)puVar5;
  param_1[0x38] = (long)puVar5;
  param_1[0x39] = (long)(puVar5 + 1);
  *puVar5 = 0;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = param_1[0x38] + 8;
  puVar5 = FUN_71001b1820(1);
  param_1[0x3a] = (long)puVar5;
  param_1[0x3b] = (long)puVar5;
  param_1[0x3c] = (long)puVar5 + 1;
  *(undefined1 *)puVar5 = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3b] = param_1[0x3b] + 1;
  __s = FUN_71001b1820(8);
  param_1[0x40] = (long)__s;
  param_1[0x42] = 1;
  param_1[0x41] = 1;
  memset(__s,0,0);
  *__s = *__s & 0xfffffffffffffffe;
  FUN_71001b38e0(param_1 + 0x43,"Send",1000);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = (long)&PTR_FUN_7104f591b8;
  param_1[0x61] = 0;
  param_1[0x68] = 0;
  FUN_71001b12a0(&local_68);
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined2 *)((long)param_1 + 0x34c) = 0;
  *(undefined1 *)((long)param_1 + 0x34e) = 0;
  param_1[0x6a] = 0;
  param_1[0x68] = local_68;
  param_1[0x93] = -0x100000000;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x96] = (long)(param_1 + 0x97);
  uVar2 = *(uint *)(param_2 + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_710020085c:
    lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 == 0) goto LAB_710020085c;
    lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
  }
  iVar12 = *(int *)(lVar9 + 0x148);
  param_1[0x99] = (long)&PTR_FUN_7104f581d8;
  *(int *)(param_1 + 0x9b) = iVar12;
  *(undefined1 *)((long)param_1 + 0x4dc) = 1;
  param_1[0x9f] = (long)&PTR_FUN_7104f59348;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined4 *)((long)param_1 + 0x4d4) = 0;
  *(int *)(param_1 + 0x9a) = iVar12 << 3;
  (**(code **)(*param_1 + 0xa0))(param_1);
  *(undefined1 *)(param_1 + 0x66) = 0;
  puVar5 = FUN_71001af850(0x30);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 0;
    puVar5[1] = puVar5 + 2;
    puVar5[3] = 0;
    puVar5[4] = &PTR_FUN_7104f59348;
    *(undefined2 *)(puVar5 + 5) = 1;
  }
  *(undefined8 **)param_1[0x19] = puVar5;
  puVar5 = FUN_71001af850(0x68);
  if (puVar5 != (undefined8 *)0x0) {
    uVar2 = *(uint *)(param_1[1] + 8);
    if (DAT_71052af1d8 == '\0') {
LAB_7100200938:
      lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar6 == 0) goto LAB_7100200938;
      lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
    }
    uVar3 = *(undefined2 *)(lVar9 + 0xc0);
    uVar2 = *(uint *)(param_1[1] + 8);
    if (DAT_71052af1d8 == '\0') {
LAB_7100200998:
      lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar6 == 0) goto LAB_7100200998;
      lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
    }
    uVar10 = *(undefined8 *)(lVar9 + 200);
    puVar5[2] = 0;
    puVar5[1] = puVar5 + 2;
    puVar5[3] = 0;
    puVar5[5] = &PTR_FUN_7104f59348;
    puVar5[7] = &PTR_FUN_7104f59348;
    puVar5[9] = &PTR_FUN_7104f59348;
    *(undefined2 *)(puVar5 + 4) = uVar3;
    *(undefined2 *)(puVar5 + 6) = 1;
    *(undefined2 *)(puVar5 + 8) = 1;
    *(undefined2 *)(puVar5 + 10) = 1;
    *(undefined4 *)(puVar5 + 0xb) = 0;
    puVar5[0xc] = uVar10;
  }
  *(undefined8 **)param_1[0x1c] = puVar5;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  param_1[0x2d] = param_4;
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = 0;
  *(undefined1 *)((long)param_1 + 0x1eb) = param_5;
  uVar7 = FUN_71001f2ba0(param_3,"Tpt",0xffffffff);
  iVar12 = (int)uVar7;
  if (iVar12 == -1) {
    uVar2 = *(uint *)(param_1[1] + 8);
    if (DAT_71052af1d8 == '\0') {
LAB_7100200ad0:
      iVar12 = *(int *)(&DAT_71052af630 + (ulong)uVar2 * 0x2e8);
      uVar15 = *(undefined4 *)(param_1[1] + 8);
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar6 == 0) goto LAB_7100200ad0;
      iVar12 = *(int *)(*(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168 +
                       0x140);
      uVar15 = *(undefined4 *)(param_1[1] + 8);
    }
    if (iVar12 == 0) goto LAB_7100200af4;
LAB_7100200a40:
    plVar8 = FUN_71001af850(0x18);
    if (plVar8 != (long *)0x0) {
      *(undefined4 *)(plVar8 + 1) = uVar15;
      *plVar8 = (long)&PTR_FUN_7104f58120;
      plVar8[2] = (long)&DAT_7104f591f8;
    }
  }
  else {
    uVar15 = *(undefined4 *)(param_1[1] + 8);
    if (iVar12 != 0) goto LAB_7100200a40;
LAB_7100200af4:
    plVar8 = FUN_71001af850(0xd0);
    if (plVar8 != (long *)0x0) {
      *(undefined4 *)(plVar8 + 1) = uVar15;
      *plVar8 = (long)&PTR_FUN_7104f58088;
      FUN_71001efc00(plVar8 + 2);
    }
  }
  param_1[100] = (long)plVar8;
  local_6c[0] = 0;
  (**(code **)(*plVar8 + 0x10))(plVar8,(long)param_1 + 0x1ec,local_6c);
  puVar5 = FUN_71001af850(0x238);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_7100216320(puVar5,param_1,0,0x40,0,0);
  }
  param_1[0x20] = (long)puVar5;
  *(undefined1 *)(puVar5 + 8) = param_5;
  *(undefined4 *)(puVar5 + 0x1a) = *(undefined4 *)((long)param_1 + 0x1ec);
  *(undefined1 *)((long)puVar5 + 0xa3) = (undefined1)local_6c[0];
  *(int *)(puVar5 + 0x3d) = iVar12;
  *(undefined8 *)param_1[0x37] = 0;
  *(undefined1 *)param_1[0x3a] = 1;
  pcVar13 = &DAT_71052b5200;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 != 0) {
      pcVar13 = (char *)(DAT_71052b51f8 + (ulong)*puVar6);
    }
  }
  if (*pcVar13 == '\0') {
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_68);
    }
    else {
      FUN_71001b68a0(&local_68,0);
    }
    DAT_71052aeba8 = local_68;
    iVar4 = FUN_71001b34a0(0xff);
    cVar1 = (char)iVar4 + (char)local_68;
    if (DAT_71052af1d8 != '\0') {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar6;
joined_r0x007100200ca8:
      if (uVar2 != 0) {
        *(char *)(DAT_71052b51f8 + (ulong)uVar2) = cVar1;
        cVar1 = DAT_71052b5200;
      }
    }
joined_r0x007100200cbc:
    DAT_71052b5200 = cVar1;
    pcVar13 = &DAT_71052b5200;
    if (DAT_71052af1d8 != '\0') {
      pcVar13 = &DAT_71052b5200;
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar6 != 0) {
        pcVar13 = (char *)(DAT_71052b51f8 + (ulong)*puVar6);
      }
    }
  }
  else {
    if (DAT_71052af1d8 != '\0') {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      pcVar13 = &DAT_71052b5200;
      if (*puVar6 != 0) {
        pcVar13 = (char *)(DAT_71052b51f8 + (ulong)*puVar6);
      }
      cVar1 = *pcVar13 + '\x01';
      if (DAT_71052af1d8 != '\0') {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar6;
        goto joined_r0x007100200ca8;
      }
      goto joined_r0x007100200cbc;
    }
    DAT_71052b5200 = DAT_71052b5200 + '\x01';
    pcVar13 = &DAT_71052b5200;
  }
  cVar1 = DAT_71052b5200;
  if (*pcVar13 == '\0') {
    if (DAT_71052af1d8 == '\0') {
      cVar1 = DAT_71052b5200 + '\x01';
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      pcVar13 = &DAT_71052b5200;
      if (*puVar6 != 0) {
        pcVar13 = (char *)(DAT_71052b51f8 + (ulong)*puVar6);
      }
      cVar1 = *pcVar13 + '\x01';
      if (DAT_71052af1d8 != '\0') {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        if (*puVar6 != 0) {
          *(char *)(DAT_71052b51f8 + (ulong)*puVar6) = cVar1;
          cVar1 = DAT_71052b5200;
        }
      }
    }
  }
  DAT_71052b5200 = cVar1;
  puVar14 = &DAT_71052b5200;
  if (DAT_71052af1d8 != '\0') {
    puVar14 = &DAT_71052b5200;
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 != 0) {
      puVar14 = (undefined1 *)(DAT_71052b51f8 + (ulong)*puVar6);
    }
  }
  *(undefined1 *)((long)param_1 + 0x1e9) = *puVar14;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((long)param_1 + 0x1ea) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  uVar2 = *(uint *)(param_1[1] + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_7100200e0c:
    lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 == 0) goto LAB_7100200e0c;
    lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
  }
  *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)(lVar9 + 0xb8);
  uVar2 = *(uint *)(param_1[1] + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_7100200e70:
    lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 == 0) goto LAB_7100200e70;
    lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
  }
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(lVar9 + 0xb0);
  plVar8 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_7100200ed8:
    lVar9 = 0;
    if (*plVar8 != 0) {
      lVar9 = *(long *)(*plVar8 + 0x10);
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_7100200ed8;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
      goto LAB_7100200ed8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar9 = 0;
  }
  plVar8 = (long *)(lVar9 + 0x1b0);
  if (1 < iVar12 - 1U) {
    plVar8 = (long *)(lVar9 + 0x1a8);
  }
  param_1[99] = *plVar8;
  lVar9 = (**(code **)(*(long *)param_1[100] + 0x20))();
  param_1[0x65] = lVar9;
  (**(code **)(*param_1 + 0x10))(param_1);
  uVar2 = *(uint *)(param_1[1] + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_7100200fe0:
    iVar12 = *(int *)(&DAT_71052af64c + (ulong)uVar2 * 0x2e8);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 == 0) goto LAB_7100200fe0;
    iVar12 = *(int *)(*(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168 +
                     0x15c);
  }
  if (iVar12 == 1) {
    *(undefined1 *)((long)param_1 + 0x4e4) = 1;
    uVar2 = *(uint *)(param_1[1] + 8);
    if (DAT_71052af1d8 == '\0') {
LAB_7100201068:
      lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
    }
    else {
      puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar6 == 0) goto LAB_7100201068;
      lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
    }
    puVar11 = (undefined4 *)(lVar9 + 0x150);
    goto LAB_7100201080;
  }
  *(undefined1 *)((long)param_1 + 0x4e4) = 0;
  uVar2 = *(uint *)(param_1[1] + 8);
  if (DAT_71052af1d8 == '\0') {
LAB_710020104c:
    lVar9 = (ulong)uVar2 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar6 == 0) goto LAB_710020104c;
    lVar9 = *(long *)(&DAT_71052af4e8 + (ulong)uVar2 * 0x2e8) + (ulong)*puVar6 * 0x168;
  }
  puVar11 = (undefined4 *)(lVar9 + 0x14c);
LAB_7100201080:
  uVar15 = *puVar11;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9c) = uVar15;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  return;
}

