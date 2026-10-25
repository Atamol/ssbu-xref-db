// addr:      7101c79160
// offset:    0x1c79160
// name:      FUN_7101c79160
// mangled:   
// signature: undefined __cdecl FUN_7101c79160(uint * param_1, undefined8 * param_2, ulong param_3)


void FUN_7101c79160(uint *param_1,undefined8 *param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint local_68 [2];
  char local_60 [64];
  
  plVar5 = (long *)param_2[2];
  plVar11 = param_2 + 2;
  if (plVar5 != (long *)0x0) {
    plVar11 = param_2 + 2;
    do {
      while (plVar6 = plVar5, (param_3 & 0xffffffffff) < (plVar6[4] & 0xffffffffffU)) {
        plVar5 = (long *)*plVar6;
        plVar11 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_7101c791c8;
      }
      if ((param_3 & 0xffffffffff) <= (plVar6[4] & 0xffffffffffU)) break;
      plVar11 = plVar6 + 1;
      plVar5 = (long *)*plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
LAB_7101c791c8:
  plVar5 = (long *)*param_2;
  pcVar10 = (char *)plVar5[1];
  iVar15 = *(int *)(*plVar11 + 0x28);
  if ((*pcVar10 == '\f') && (iVar17 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
    lVar12 = *plVar5;
    iVar18 = 0;
    do {
      iVar2 = iVar17 + iVar18;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(pcVar10 + 5) + (long)iVar2 * 8);
      uVar4 = *(ulong *)(*(long *)(lVar12 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar4 == 0x72a5a6784) {
        uVar4 = (ulong)(int)puVar1[1];
        pcVar7 = "";
        lVar16 = 0;
        if ((uVar4 & 0x80000000) == 0) {
          pcVar7 = pcVar10 + uVar4;
          lVar16 = lVar12;
        }
        goto LAB_7101c79268;
      }
      iVar3 = iVar2 + -1;
      if (uVar4 < 0x72a5a6785) {
        iVar18 = iVar2 + 1;
        iVar3 = iVar17;
      }
      iVar17 = iVar3;
    } while (iVar18 <= iVar17);
    pcVar7 = "";
    lVar16 = 0;
  }
  else {
    pcVar7 = "";
    lVar16 = 0;
  }
LAB_7101c79268:
  pcVar13 = "";
  lVar12 = 0;
  if ((-1 < iVar15) && (*pcVar7 == '\v')) {
    if (iVar15 < *(int *)(pcVar7 + 1)) {
      pcVar13 = pcVar7 + *(int *)(pcVar7 + (long)iVar15 * 4 + 5);
      lVar12 = lVar16;
    }
    else {
      lVar12 = 0;
      pcVar13 = "";
    }
  }
  if ((*pcVar13 == '\f') && (iVar17 = *(int *)(pcVar13 + 1) + -1, 0 < *(int *)(pcVar13 + 1))) {
    iVar18 = 0;
    pcVar7 = "";
    do {
      iVar2 = iVar17 + iVar18;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(pcVar13 + 5) + (long)iVar2 * 8);
      uVar4 = *(ulong *)(*(long *)(lVar12 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar4 == 0x43bc4bcd9) {
        uVar19 = puVar1[1];
        if ((int)uVar19 < 0) goto LAB_7101c79360;
        pcVar7 = pcVar13 + (int)uVar19;
        goto LAB_7101c7936c;
      }
      iVar3 = iVar2 + -1;
      if (uVar4 < 0x43bc4bcda) {
        iVar18 = iVar2 + 1;
        iVar3 = iVar17;
      }
      iVar17 = iVar3;
    } while (iVar18 <= iVar17);
    lVar12 = 0;
  }
  else {
LAB_7101c79360:
    lVar12 = 0;
    pcVar7 = "";
  }
LAB_7101c7936c:
  if (*pcVar7 == '\t') {
    uVar4 = *(ulong *)(*(long *)(lVar12 + 0x20) + (long)*(int *)(pcVar7 + 1) * 8) & 0xffffffffff;
    if (uVar4 < 0x15749886a1) {
      if (uVar4 == 0x12bb186070) {
        uVar14 = 2;
        goto joined_r0x007101c794ac;
      }
      if (uVar4 == 0x1476819dc7) {
        uVar14 = 1;
        goto joined_r0x007101c794ac;
      }
    }
    else {
      if (uVar4 == 0x15749886a1) {
        uVar14 = 4;
        goto joined_r0x007101c794ac;
      }
      if (uVar4 == 0x18e4e3b8c4) {
        uVar14 = 3;
        goto joined_r0x007101c794ac;
      }
    }
  }
  uVar14 = 0;
joined_r0x007101c794ac:
  if ((*pcVar10 == '\f') && (iVar17 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
    lVar16 = *plVar5;
    iVar18 = 0;
    pcVar7 = "";
    do {
      iVar2 = iVar17 + iVar18;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar16 + 0x28) + (long)*(int *)(pcVar10 + 5) + (long)iVar2 * 8);
      uVar4 = *(ulong *)(*(long *)(lVar16 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar4 == 0x72a5a6784) {
        uVar19 = puVar1[1];
        if ((int)uVar19 < 0) goto LAB_7101c794c0;
        pcVar7 = pcVar10 + (int)uVar19;
        goto LAB_7101c794cc;
      }
      iVar3 = iVar2 + -1;
      if (uVar4 < 0x72a5a6785) {
        iVar18 = iVar2 + 1;
        iVar3 = iVar17;
      }
      iVar17 = iVar3;
    } while (iVar18 <= iVar17);
    lVar16 = 0;
  }
  else {
LAB_7101c794c0:
    lVar16 = 0;
    pcVar7 = "";
  }
LAB_7101c794cc:
  pcVar10 = "";
  lVar12 = 0;
  if ((-1 < iVar15) && (*pcVar7 == '\v')) {
    if (iVar15 < *(int *)(pcVar7 + 1)) {
      pcVar10 = pcVar7 + *(int *)(pcVar7 + (long)iVar15 * 4 + 5);
      lVar12 = lVar16;
    }
    else {
      lVar12 = 0;
      pcVar10 = "";
    }
  }
  if ((*pcVar10 == '\f') && (iVar15 = *(int *)(pcVar10 + 1) + -1, 0 < *(int *)(pcVar10 + 1))) {
    iVar17 = 0;
    pcVar7 = "";
    do {
      iVar18 = iVar15 + iVar17;
      if (iVar18 < 0) {
        iVar18 = iVar18 + 1;
      }
      iVar18 = iVar18 >> 1;
      puVar1 = (uint *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(pcVar10 + 5) + (long)iVar18 * 8);
      uVar4 = *(ulong *)(*(long *)(lVar12 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar4 == 0x8eb2a6076) {
        uVar19 = puVar1[1];
        if ((int)uVar19 < 0) goto LAB_7101c795a0;
        pcVar7 = pcVar10 + (int)uVar19;
        break;
      }
      iVar2 = iVar18 + -1;
      if (uVar4 < 0x8eb2a6077) {
        iVar17 = iVar18 + 1;
        iVar2 = iVar15;
      }
      iVar15 = iVar2;
    } while (iVar17 <= iVar15);
  }
  else {
LAB_7101c795a0:
    pcVar7 = "";
  }
  switch(*pcVar7) {
  case '\x01':
  case '\x03':
  case '\x06':
  case '\a':
    break;
  case '\x02':
    break;
  case '\x04':
    break;
  case '\x05':
  }
  uVar19 = 0x811c9dc5;
  local_60[0] = '\0';
  local_68[0] = 0x811c9dc5;
  local_68[1] = 0;
  switch(uVar14) {
  case 0:
    pcVar10 = "mnu_online_room_inside_chat_greet_%02d";
    break;
  case 1:
    pcVar10 = "mnu_online_room_inside_chat_prepare_%02d";
    break;
  case 2:
    pcVar10 = "mnu_online_room_inside_chat_melee_%02d";
    break;
  case 3:
    pcVar10 = "mnu_online_room_inside_chat_impression_%02d";
    break;
  case 4:
    pcVar10 = "mnu_online_room_inside_chat_farewell_%02d";
    break;
  default:
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = 0x811c9dc5;
    param_1[1] = 0;
    return;
  }
  FUN_710062dc20(local_68,pcVar10);
  *param_1 = 0;
  uVar4 = 0;
  do {
    if (local_60[uVar4] == '\0') {
LAB_7101c796ac:
      *(undefined1 *)((long)param_1 + (uVar4 & 0xffffffff) + 8) = 0;
      uVar9 = (uint)(byte)param_1[2];
      param_1[1] = (uint)uVar4;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar19 = 0x811c9dc5;
        do {
          uVar19 = uVar19 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar9 != 0);
      }
      *param_1 = uVar19;
      return;
    }
    *(char *)((long)param_1 + uVar4 + 8) = local_60[uVar4];
    if (0x3e < (int)uVar4 + 1U) {
      uVar4 = (ulong)((int)uVar4 + 1);
      goto LAB_7101c796ac;
    }
    if (local_60[uVar4 + 1] == '\0') {
      uVar4 = uVar4 + 1;
      goto LAB_7101c796ac;
    }
    *(char *)((long)param_1 + uVar4 + 9) = local_60[uVar4 + 1];
    uVar4 = uVar4 + 2;
  } while( true );
}

