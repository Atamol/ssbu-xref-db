// addr:      710149f450
// offset:    0x149f450
// name:      FUN_710149f450
// mangled:   
// signature: undefined __cdecl FUN_710149f450(undefined8 * param_1, long param_2)


void FUN_710149f450(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  long local_b8;
  char *pcStack_b0;
  long local_a8;
  char *pcStack_a0;
  uint local_98 [2];
  byte local_90 [64];
  byte *pbVar12;
  
  local_90[0] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  *param_1 = &DAT_3f8000003f800000;
  param_1[1] = &DAT_3f8000003f800000;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = &DAT_3f8000003f800000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  FUN_710062dc20(local_98,"edge_start_%s");
  FUN_710149ebc0(local_98,"%s");
  if (local_98[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar12 = local_90;
    do {
      pbVar11 = pbVar12 + 1;
      bVar3 = *pbVar12;
      uVar14 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar14 = (uint)bVar3;
      }
      uVar5 = (&DAT_7104754084)[(uVar14 ^ uVar5) & 0xff] ^ uVar5 >> 8;
      pbVar12 = pbVar11;
    } while (pbVar11 < local_90 + local_98[1]);
    uVar6 = (ulong)~uVar5;
  }
  pcVar8 = *(char **)(*(long *)(param_2 + 8) + 0x10);
  if ((*pcVar8 == '\f') && (iVar10 = *(int *)(pcVar8 + 1) + -1, 0 < *(int *)(pcVar8 + 1))) {
    uVar6 = uVar6 | ((long)(int)local_98[1] & 0xffU) << 0x20;
    lVar9 = *(long *)(*(long *)(param_2 + 8) + 8);
    iVar13 = 0;
    do {
      iVar2 = iVar10 + iVar13;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar9 + 0x28) + (long)*(int *)(pcVar8 + 5) + (long)iVar2 * 8);
      uVar15 = *(ulong *)(*(long *)(lVar9 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar15 == uVar6) {
        uVar6 = (ulong)(int)puVar1[1];
        local_a8 = 0;
        pcStack_a0 = "";
        if ((uVar6 & 0x80000000) == 0) {
          local_a8 = lVar9;
          pcStack_a0 = pcVar8 + uVar6;
        }
        goto LAB_710149f5ec;
      }
      iVar4 = iVar2 + -1;
      if (uVar15 <= uVar6) {
        iVar13 = iVar2 + 1;
        iVar4 = iVar10;
      }
      iVar10 = iVar4;
    } while (iVar13 <= iVar10);
    local_a8 = 0;
    pcStack_a0 = "";
  }
  else {
    local_a8 = 0;
    pcStack_a0 = "";
  }
LAB_710149f5ec:
  FUN_710149f9c0((undefined4 *)param_1,&local_a8);
  FUN_710062dc20(local_98,"edge_end_%s");
  FUN_710149ebc0(local_98,"%s");
  if (local_98[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar12 = local_90;
    do {
      pbVar11 = pbVar12 + 1;
      bVar3 = *pbVar12;
      uVar14 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar14 = (uint)bVar3;
      }
      uVar5 = (&DAT_7104754084)[(uVar14 ^ uVar5) & 0xff] ^ uVar5 >> 8;
      pbVar12 = pbVar11;
    } while (pbVar11 < local_90 + local_98[1]);
    uVar6 = (ulong)~uVar5;
  }
  pcVar8 = *(char **)(*(long *)(param_2 + 8) + 0x10);
  if ((*pcVar8 == '\f') && (iVar10 = *(int *)(pcVar8 + 1) + -1, 0 < *(int *)(pcVar8 + 1))) {
    lVar9 = *(long *)(*(long *)(param_2 + 8) + 8);
    uVar6 = uVar6 | ((long)(int)local_98[1] & 0xffU) << 0x20;
    iVar13 = 0;
    pcVar7 = "";
    do {
      iVar2 = iVar10 + iVar13;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar9 + 0x28) + (long)*(int *)(pcVar8 + 5) + (long)iVar2 * 8);
      uVar15 = *(ulong *)(*(long *)(lVar9 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar15 == uVar6) {
        uVar5 = puVar1[1];
        if ((int)uVar5 < 0) goto LAB_710149f734;
        pcVar7 = pcVar8 + (int)uVar5;
        goto LAB_710149f740;
      }
      iVar4 = iVar2 + -1;
      if (uVar15 <= uVar6) {
        iVar13 = iVar2 + 1;
        iVar4 = iVar10;
      }
      iVar10 = iVar4;
    } while (iVar13 <= iVar10);
    lVar9 = 0;
  }
  else {
LAB_710149f734:
    lVar9 = 0;
    pcVar7 = "";
  }
LAB_710149f740:
  local_b8 = lVar9;
  pcStack_b0 = pcVar7;
  FUN_710149f9c0((undefined4 *)(param_1 + 6),&local_b8);
  if ((*pcVar7 == '\f') && (iVar10 = *(int *)(pcVar7 + 1) + -1, 0 < *(int *)(pcVar7 + 1))) {
    iVar13 = 0;
    pcVar8 = "";
    do {
      iVar2 = iVar10 + iVar13;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar9 + 0x28) + (long)*(int *)(pcVar7 + 5) + (long)iVar2 * 8);
      uVar6 = *(ulong *)(*(long *)(lVar9 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar6 == 0x5b5f83ccd) {
        uVar5 = puVar1[1];
        if ((int)uVar5 < 0) goto LAB_710149f7dc;
        pcVar8 = pcVar7 + (int)uVar5;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar6 < 0x5b5f83cce) {
        iVar13 = iVar2 + 1;
        iVar4 = iVar10;
      }
      iVar10 = iVar4;
    } while (iVar13 <= iVar10);
  }
  else {
LAB_710149f7dc:
    pcVar8 = "";
  }
  switch(*pcVar8) {
  case '\x01':
  case '\x03':
    uVar5 = (uint)(byte)pcVar8[1];
    break;
  case '\x02':
    uVar5 = (uint)pcVar8[1];
    break;
  case '\x04':
    uVar5 = (uint)*(short *)(pcVar8 + 1);
    break;
  case '\x05':
    uVar5 = (uint)*(ushort *)(pcVar8 + 1);
    break;
  case '\x06':
  case '\a':
    uVar5 = *(uint *)(pcVar8 + 1);
    break;
  default:
    uVar5 = 0;
  }
  *(uint *)((long)param_1 + 100) = uVar5;
  FUN_710062dc20(local_98,"edge_color_grading_start_frame_%s");
  FUN_710149ebc0(local_98,"%s");
  if (local_98[1] == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar12 = local_90;
    do {
      pbVar11 = pbVar12 + 1;
      bVar3 = *pbVar12;
      uVar14 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar14 = (uint)bVar3;
      }
      uVar5 = (&DAT_7104754084)[(uVar14 ^ uVar5) & 0xff] ^ uVar5 >> 8;
      pbVar12 = pbVar11;
    } while (pbVar11 < local_90 + local_98[1]);
    uVar6 = (ulong)~uVar5;
  }
  pcVar8 = *(char **)(*(long *)(param_2 + 8) + 0x10);
  if ((*pcVar8 == '\f') && (iVar10 = *(int *)(pcVar8 + 1) + -1, 0 < *(int *)(pcVar8 + 1))) {
    lVar9 = *(long *)(*(long *)(param_2 + 8) + 8);
    uVar6 = uVar6 | ((long)(int)local_98[1] & 0xffU) << 0x20;
    iVar13 = 0;
    pcVar7 = "";
    do {
      iVar2 = iVar10 + iVar13;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar9 + 0x28) + (long)*(int *)(pcVar8 + 5) + (long)iVar2 * 8);
      uVar15 = *(ulong *)(*(long *)(lVar9 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar15 == uVar6) {
        uVar5 = puVar1[1];
        if ((int)uVar5 < 0) goto LAB_710149f948;
        pcVar7 = pcVar8 + (int)uVar5;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar15 <= uVar6) {
        iVar13 = iVar2 + 1;
        iVar4 = iVar10;
      }
      iVar10 = iVar4;
    } while (iVar13 <= iVar10);
  }
  else {
LAB_710149f948:
    pcVar7 = "";
  }
  switch(*pcVar7) {
  case '\x01':
  case '\x03':
    uVar5 = (uint)(byte)pcVar7[1];
    break;
  case '\x02':
    uVar5 = (uint)pcVar7[1];
    break;
  case '\x04':
    uVar5 = (uint)*(short *)(pcVar7 + 1);
    break;
  case '\x05':
    uVar5 = (uint)*(ushort *)(pcVar7 + 1);
    break;
  case '\x06':
  case '\a':
    uVar5 = *(uint *)(pcVar7 + 1);
    break;
  default:
    uVar5 = 0;
  }
  *(uint *)(param_1 + 0xc) = uVar5;
  return;
}

