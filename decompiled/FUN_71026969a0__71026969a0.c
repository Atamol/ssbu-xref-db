// addr:      71026969a0
// offset:    0x26969a0
// name:      FUN_71026969a0
// mangled:   
// signature: undefined __cdecl FUN_71026969a0(byte * * * * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71026969a0(byte ****param_1,long *param_2,long ****param_3,byte ****param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte ***pppbVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  byte ****ppppbVar8;
  undefined4 *puVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  byte *pbVar23;
  byte *pbVar24;
  ulong uVar25;
  long *plVar26;
  byte ***pppbVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  size_t sVar30;
  void *__s;
  byte *pbVar31;
  ulong uVar32;
  undefined4 uVar33;
  long ***local_70;
  undefined4 local_64;
  
  plVar26 = param_2 + 1;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1581ca23ee) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696a60;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1581ca23ef) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696a60:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 1) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x15bdc71cb7) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696b1c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x15bdc71cb8) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696b1c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44e10000;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12353ec208) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696bd8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12353ec209) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696bd8:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x28;
  }
  *(uint *)(param_1 + 2) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1622b9f945) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696cc8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1622b9f946) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696cc8:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44340000;
  }
  *(undefined4 *)((long)param_1 + 0x14) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x161eb4c61c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696d84;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x161eb4c61d) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696d84:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x45034000;
  }
  *(undefined4 *)(param_1 + 3) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12ffba6004) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696e40;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12ffba6005) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696e40:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 5;
  }
  *(uint *)((long)param_1 + 0x1c) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14747afd2e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102696f30;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14747afd2f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102696f30:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 3;
  }
  *(uint *)(param_1 + 4) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x133568550e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697020;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x133568550f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697020:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 2;
  }
  *(uint *)((long)param_1 + 0x24) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x15ae0deed1) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697110;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x15ae0deed2) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697110:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x43f00000;
  }
  *(undefined4 *)(param_1 + 5) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x108837f7bb) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026971cc;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x108837f7bc) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026971cc:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0xf;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1316c6edf6) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026972bc;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1316c6edf7) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026972bc:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 1;
  }
  *(bool *)(param_1 + 6) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1587295215) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026973b4;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1587295216) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026973b4:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x14;
  }
  *(uint *)((long)param_1 + 0x34) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10873700a2) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026974a4;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10873700a3) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026974a4:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x3c;
  }
  *(uint *)(param_1 + 7) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xf0acae258) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697594;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xf0acae259) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697594:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 7;
  }
  *(uint *)((long)param_1 + 0x3c) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12ef2f1fe1) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697684;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12ef2f1fe2) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697684:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[9] - (long)param_1[8] >> 2;
  if (uVar19 < uVar25) {
    FUN_7102588b90(param_1 + 8,uVar25 - uVar19,param_3,param_4,(long ****)param_1,param_6,param_7,
                   param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[9] = (byte ***)((long)param_1[8] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      switch(*pbVar24) {
      case 1:
      case 3:
        uVar22 = (uint)pbVar24[1];
        break;
      case 2:
        uVar22 = (uint)(char)pbVar24[1];
        break;
      case 4:
        uVar22 = (uint)*(short *)(pbVar24 + 1);
        break;
      case 5:
        uVar22 = (uint)*(ushort *)(pbVar24 + 1);
        break;
      case 6:
      case 7:
        uVar22 = *(uint *)(pbVar24 + 1);
        break;
      default:
        uVar22 = 0xf;
      }
      *(uint *)((long)param_1[8] + lVar17 * 4) = uVar22;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1409cf80de) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697868;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_7102697874;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1409cf80df) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_7102697868:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_7102697874:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  pppbVar27 = param_1[0xb];
  pppbVar5 = param_1[0xc];
  pppplVar28 = (long ****)((long)pppbVar5 - (long)pppbVar27);
  uVar19 = (long)pppplVar28 >> 3;
  if (uVar19 < uVar25) {
    uVar32 = uVar25 - uVar19;
    if ((ulong)((long)param_1[0xd] - (long)pppbVar5 >> 3) < uVar32) {
      if (iVar11 < 0) goto LAB_71026a6bdc;
      lVar13 = (long)param_1[0xd] - (long)pppbVar27;
      if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar13 >> 2;
        uVar16 = uVar25;
        if (uVar25 <= uVar14) {
          uVar16 = uVar14;
        }
        if (uVar16 != 0) {
          if (uVar16 >> 0x3d != 0) goto LAB_71026a66a0;
          goto LAB_710269796c;
        }
LAB_71026979d0:
        pppbVar5 = (byte ***)0x0;
      }
      else {
        uVar16 = 0x1fffffffffffffff;
LAB_710269796c:
        ppplVar15 = (long ***)(uVar16 * 8);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        ppppbVar8 = param_1;
        pppbVar5 = (byte ***)
                   FUN_710392e290(0x10,ppplVar15,param_3,param_4,(long ****)param_1,param_6,param_7,
                                  param_8);
        if (pppbVar5 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar29 = &local_70;
            local_70 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar14 & 1) != 0) &&
               (pppbVar5 = (byte ***)
                           FUN_710392e290(0x10,ppplVar15,pppplVar29,param_4,(long ****)ppppbVar8,
                                          param_6,param_7,param_8), pppbVar5 != (byte ***)0x0))
            goto LAB_71026979d4;
          }
          goto LAB_71026979d0;
        }
      }
LAB_71026979d4:
      param_3 = (long ****)(uVar32 * 8);
      memset(pppbVar5 + uVar19,0,(size_t)param_3);
      if (0 < (long)pppplVar28) {
        memcpy(pppbVar5,pppbVar27,(size_t)pppplVar28);
        param_3 = pppplVar28;
      }
      param_1[0xb] = pppbVar5;
      param_1[0xc] = pppbVar5 + uVar25;
      param_1[0xd] = pppbVar5 + uVar16;
      if (pppbVar27 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar27);
      }
    }
    else {
      uVar25 = uVar32;
      if ((uVar32 & 1) != 0) {
        *pppbVar5 = (byte **)0x0;
        pppbVar5 = param_1[0xc] + 1;
        uVar25 = uVar32 - 1;
        param_1[0xc] = pppbVar5;
      }
      if (uVar32 != 1) {
        do {
          *pppbVar5 = (byte **)0x0;
          pppbVar5 = param_1[0xc];
          param_1[0xc] = pppbVar5 + 1;
          pppbVar5[1] = (byte **)0x0;
          pppbVar5 = param_1[0xc] + 1;
          uVar25 = uVar25 - 2;
          param_1[0xc] = pppbVar5;
        } while (uVar25 != 0);
      }
    }
  }
  else if (uVar19 != uVar25) {
    param_1[0xc] = pppbVar27 + uVar25;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_7102697a70:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_7102697aa8:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_7102697aa8;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xb5acb86be) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (param_3 < (long ****)0xb5acb86bf) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(param_1[0xb] + lVar13) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xa8dd7ca8e) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xa8dd7ca8f) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 8;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)param_1[0xb] + lVar21 + 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_7102697a70;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1441b669ad) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697cb4;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1441b669ae) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697cb4:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0xf] - (long)param_1[0xe] >> 2;
  if (uVar19 < uVar25) {
    FUN_7100813660(param_1 + 0xe,uVar25 - uVar19,param_3,param_4,(long ****)param_1,param_6,param_7,
                   param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0xf] = (byte ***)((long)param_1[0xe] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      switch(*pbVar24) {
      case 1:
      case 3:
        uVar22 = (uint)pbVar24[1];
        break;
      case 2:
        uVar22 = (uint)(char)pbVar24[1];
        break;
      case 4:
        uVar22 = (uint)*(short *)(pbVar24 + 1);
        break;
      case 5:
        uVar22 = (uint)*(ushort *)(pbVar24 + 1);
        break;
      case 6:
      case 7:
        uVar22 = *(uint *)(pbVar24 + 1);
        break;
      default:
        uVar22 = 0x13;
      }
      *(uint *)((long)param_1[0xe] + lVar17 * 4) = uVar22;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x152b069cf6) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697e98;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x152b069cf7) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697e98:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x1e;
  }
  *(uint *)(param_1 + 0x11) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x13131c85fe) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102697f8c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x13131c85ff) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102697f8c:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 5;
  }
  *(uint *)((long)param_1 + 0x8c) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x145ce78478) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698084;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_7102698090;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x145ce78479) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_7102698084:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_7102698090:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x13] - (long)param_1[0x12] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x12;
  if (uVar19 < uVar25) {
    FUN_71026a6bf0(ppppbVar8,uVar25 + lVar13 * 0x5555555555555555,param_3,param_4,(long ****)param_1
                   ,param_6,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x13] = (byte ***)((long)param_1[0x12] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_7102698158:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_7102698190:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_7102698190;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (uVar22 = *(int *)(pbVar24 + 1) - 1, 0 < *(int *)(pbVar24 + 1))) {
        iVar11 = 0;
        do {
          iVar20 = uVar22 + iVar11;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          iVar20 = iVar20 >> 1;
          param_3 = (long ****)
                    (*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar20 * 8);
          param_4 = *(byte *****)(*(long *)(lVar21 + 0x20) + (ulong)*(uint *)param_3 * 8);
          if (param_4 == (byte ****)0xf9cec829c) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar23 = pbVar24 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (long ****)(ulong)(iVar20 - 1U);
          uVar4 = iVar20 - 1U;
          if (param_4 < (byte ****)0xf9cec829d) {
            iVar11 = iVar20 + 1;
            uVar4 = uVar22;
          }
          uVar22 = uVar4;
        } while (iVar11 <= (int)uVar22);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (uVar22 = *(int *)(pbVar24 + 1) - 1, 0 < *(int *)(pbVar24 + 1))) {
        iVar11 = 0;
        do {
          iVar20 = uVar22 + iVar11;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          iVar20 = iVar20 >> 1;
          param_3 = (long ****)
                    (*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar20 * 8);
          param_4 = *(byte *****)(*(long *)(lVar21 + 0x20) + (ulong)*(uint *)param_3 * 8);
          if (param_4 == (byte ****)0xfebebb20a) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar23 = pbVar24 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (long ****)(ulong)(iVar20 - 1U);
          uVar4 = iVar20 - 1U;
          if (param_4 < (byte ****)0xfebebb20b) {
            iVar11 = iVar20 + 1;
            uVar4 = uVar22;
          }
          uVar22 = uVar4;
        } while (iVar11 <= (int)uVar22);
      }
      uVar33 = 0x41200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0x63b7c6e5a) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (param_3 < (long ****)0x63b7c6e5b) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_7102698158;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x131df52c58) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698440;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_710269844c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x131df52c59) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_7102698440:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269844c:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x16] - (long)param_1[0x15] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x15;
  if (uVar19 < uVar25) {
    FUN_71026a6bf0(ppppbVar8,uVar25 + lVar13 * 0x5555555555555555,param_3,param_4,(long ****)param_1
                   ,param_6,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x16] = (byte ***)((long)param_1[0x15] + uVar25 * 0xc);
  }
  puVar9 = &DAT_7104473000;
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_7102698508:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_7102698540:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_7102698540;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          param_4 = *(byte *****)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (param_4 == (byte ****)0xf9cec829c) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (param_4 < (byte ****)0xf9cec829d) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          param_4 = *(byte *****)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (param_4 == (byte ****)0xfebebb20a) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (param_4 < (byte ****)0xfebebb20b) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x63b7c6e5a) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x63b7c6e5b) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_7102698508;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x18538145b1) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026987ec;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x18538145b2) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026987ec:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44610000;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x186f8c7ae8) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026988ac;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x186f8c7ae9) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026988ac:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44e10000;
  }
  *(undefined4 *)((long)param_1 + 0xc4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10305bcb81) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698968;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10305bcb82) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698968:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x14;
  }
  *(uint *)(param_1 + 0x19) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10f9e9d5ac) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698a5c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10f9e9d5ad) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698a5c:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x14;
  }
  *(uint *)((long)param_1 + 0xcc) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x109aa2ba16) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698b50;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x109aa2ba17) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698b50:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x14;
  }
  *(uint *)(param_1 + 0x1a) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x148c6a8e29) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698c44;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x148c6a8e2a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698c44:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x14;
  }
  *(uint *)((long)param_1 + 0xd4) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10bf46e719) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698d38;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10bf46e71a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698d38:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x14;
  }
  *(uint *)(param_1 + 0x1b) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14b5e15088) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698e2c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14b5e15089) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698e2c:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 10;
  }
  *(uint *)((long)param_1 + 0xdc) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x141e6e0108) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698f20;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x141e6e0109) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698f20:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x43d20000;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14f80eaee9) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102698fe0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14f80eaeea) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102698fe0:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44340000;
  }
  *(undefined4 *)((long)param_1 + 0xe4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14d7dc1f25) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269909c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14d7dc1f26) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269909c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x43f00000;
  }
  *(undefined4 *)(param_1 + 0x1d) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1431bcb0c4) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269915c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1431bcb0c5) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269915c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44610000;
  }
  *(undefined4 *)((long)param_1 + 0xec) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14b497709f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699218;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14b49770a0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699218:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x43960000;
  }
  *(undefined4 *)(param_1 + 0x1e) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1452f7df7e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026992d8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1452f7df7f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026992d8:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44160000;
  }
  *(undefined4 *)((long)param_1 + 0xf4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x18fee4ab77) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699398;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x18fee4ab78) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699398:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44340000;
  }
  *(undefined4 *)(param_1 + 0x1f) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x186e97bb9d) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699454;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x186e97bb9e) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699454:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44960000;
  }
  *(undefined4 *)((long)param_1 + 0xfc) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x17030085cc) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699514;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x17030085cd) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699514:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44340000;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x17020c1f78) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026995d0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x17020c1f79) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026995d0:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44960000;
  }
  *(undefined4 *)((long)param_1 + 0x104) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x128d855b81) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269968c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x128d855b82) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269968c:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x28;
  }
  *(uint *)(param_1 + 0x21) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x17f737b174) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699780;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x17f737b175) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699780:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 10;
  }
  *(uint *)((long)param_1 + 0x10c) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x15159d6108) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699874;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x15159d6109) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699874:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44bb8000;
  }
  *(undefined4 *)(param_1 + 0x22) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1529905e51) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699934;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1529905e52) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_7102699934:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44e10000;
  }
  *(undefined4 *)((long)param_1 + 0x114) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    pppplVar28 = (long ****)*param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)((long)pppplVar28[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar12 + 5));
      if (pppplVar28[4][*puVar1] == (long **)0xea7e059ba) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026999f4;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_7102699a00;
      }
      iVar3 = iVar2 + -1;
      if (pppplVar28[4][*puVar1] < (long **)0xea7e059bb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    pppplVar28 = (long ****)0x0;
  }
  else {
LAB_71026999f4:
    pppplVar28 = (long ****)0x0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_7102699a00:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar17 = (long)param_1[0x24] - (long)param_1[0x23] >> 3;
  uVar19 = lVar17 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x23;
  if (uVar19 < uVar25) {
    FUN_71026a6e00(ppppbVar8,uVar25 + lVar17 * 0x5555555555555555,pppplVar28,param_4,
                   (long ****)param_1,&DAT_7104473000,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x24] = param_1[0x23] + uVar25 * 3;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar17 = 0;
LAB_7102699b08:
    do {
      iVar11 = (int)lVar17;
      if (iVar11 < 0) {
LAB_7102699b40:
        pppplVar29 = (long ****)0x0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        pppplVar29 = (long ****)0x0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_7102699b40;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          pppplVar29 = pppplVar28;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0xcf975da72) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0xcf975da73) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar17 * 3) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0xcc578e52b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0xcc578e52c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar17 * 0x18 + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0xcbed5a0a2) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0xcbed5a0a3) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc2340000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar17 * 3 + 1) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0xc82d89ffb) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0xc82d89ffc) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar17 * 0x18 + 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0xc83b58912) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0xc83b58913) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x40a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar17 * 3 + 2) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0xcbfb8b64b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0xcbfb8b64c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x42340000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar13 = lVar17 * 0x18;
      lVar17 = lVar17 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar13 + 0x14) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar17) break;
        goto LAB_7102699b08;
      }
    } while (lVar17 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xe21742b14) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7102699fd4;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_7102699fe0;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xe21742b15) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_7102699fd4:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_7102699fe0:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x27] - (long)param_1[0x26] >> 3;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x26;
  if (uVar19 < uVar25) {
    FUN_71026a6e00(ppppbVar8,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_4,
                   (long ****)param_1,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x27] = param_1[0x26] + uVar25 * 3;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_710269a090:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710269a0c8:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_710269a0c8;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcf975da72) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcf975da73) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcc578e52b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcc578e52c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbed5a0a2) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbed5a0a3) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 1) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc82d89ffb) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc82d89ffc) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc83b58912) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc83b58913) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x40a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 2) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbfb8b64b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbfb8b64c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0x18;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar21 + 0x14) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_710269a090;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xeea28f8b1) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269a55c;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_710269a568;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xeea28f8b2) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269a55c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269a568:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x2a] - (long)param_1[0x29] >> 3;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x29;
  if (uVar19 < uVar25) {
    FUN_71026a6e00(ppppbVar8,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_4,
                   (long ****)param_1,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x2a] = param_1[0x29] + uVar25 * 3;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_710269a614:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710269a64c:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_710269a64c;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcf975da72) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcf975da73) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcc578e52b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcc578e52c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbed5a0a2) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbed5a0a3) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 1) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc82d89ffb) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc82d89ffc) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x40a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc83b58912) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc83b58913) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 2) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbfb8b64b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbfb8b64c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0x18;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar21 + 0x14) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_710269a614;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xef72dc809) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269aae0;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_710269aaec;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xef72dc80a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269aae0:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269aaec:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x2d] - (long)param_1[0x2c] >> 3;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x2c;
  if (uVar19 < uVar25) {
    FUN_71026a6e00(ppppbVar8,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_4,
                   (long ****)param_1,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x2d] = param_1[0x2c] + uVar25 * 3;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_710269ab9c:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710269abd4:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_710269abd4;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcf975da72) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcf975da73) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc20c0000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcc578e52b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcc578e52c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbed5a0a2) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbed5a0a3) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 1) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc82d89ffb) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc82d89ffc) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc83b58912) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc83b58913) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 2) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbfb8b64b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbfb8b64c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0x18;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar21 + 0x14) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_710269ab9c;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xe3c711bac) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269b068;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_710269b074;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xe3c711bad) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269b068:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269b074:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x30] - (long)param_1[0x2f] >> 3;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar8 = param_1 + 0x2f;
  if (uVar19 < uVar25) {
    FUN_71026a6e00(ppppbVar8,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_4,
                   (long ****)param_1,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x30] = param_1[0x2f] + uVar25 * 3;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_710269b134:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710269b16c:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_710269b16c;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcf975da72) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcf975da73) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcc578e52b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcc578e52c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x420c0000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbed5a0a2) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbed5a0a3) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 1) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc82d89ffb) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc82d89ffc) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar8 + lVar13 * 0x18 + 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xc83b58912) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xc83b58913) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(*ppppbVar8 + lVar13 * 3 + 2) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0xcbfb8b64b) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0xcbfb8b64c) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0x18;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar8 + lVar21 + 0x14) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_710269b134;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_710269b614:
      pcVar18 = "";
    }
    else {
      iVar20 = 0;
      pcVar18 = "";
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8
                         );
        uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x15631243b2) {
          uVar22 = puVar1[1];
          if ((int)uVar22 < 0) goto LAB_710269b614;
          pcVar18 = pcVar12 + (int)uVar22;
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x15631243b3) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
  }
  else {
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x447a0000;
  }
  *(undefined4 *)(param_1 + 0x32) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x158572ec53) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269b6d4;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x158572ec54) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269b6d4:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44960000;
  }
  *(undefined4 *)((long)param_1 + 0x194) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x103c861692) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269b794;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x103c861693) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269b794:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x37;
  }
  *(uint *)(param_1 + 0x33) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x17884ddefc) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269b888;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x17884ddefd) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269b888:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44bb8000;
  }
  *(undefined4 *)((long)param_1 + 0x19c) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x17b440e1a5) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269b948;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x17b440e1a6) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269b948:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x44e10000;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xfebc4812f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269ba04;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xfebc48130) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269ba04:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42200000;
  }
  *(undefined4 *)((long)param_1 + 0x1a4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1661b9ee36) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269bac4;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1661b9ee37) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269bac4:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x35) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1023effb33) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269bb80;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1023effb34) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269bb80:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42200000;
  }
  *(undefined4 *)((long)param_1 + 0x1ac) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1c2aabe7ec) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269bc3c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1c2aabe7ed) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269bc3c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42c80000;
  }
  *(undefined4 *)(param_1 + 0x36) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x2074352b45) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269bcfc;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x2074352b46) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269bcfc:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x40a00000;
  }
  *(undefined4 *)((long)param_1 + 0x1b4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x2381a49848) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269bdb8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x2381a49849) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269bdb8:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 10;
  }
  *(uint *)(param_1 + 0x37) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x23a61fff79) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269beac;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x23a61fff7a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269beac:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0xf;
  }
  *(uint *)((long)param_1 + 0x1bc) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xc037c7adc) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269bfa4;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_710269bfb0;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xc037c7add) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269bfa4:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269bfb0:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x58c1a452f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c03c;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x58c1a4530) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c03c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x6f54de50f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c0ec;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x6f54de510) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c0ec:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x1c4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb5ae8328e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c1ac;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_710269c1b8;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb5ae8328f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269c1ac:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269c1b8:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x63b7c6e5a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c238;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x63b7c6e5b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c238:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0;
  }
  *(undefined4 *)(param_1 + 0x39) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x5ab8a01a0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c2e8;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x5ab8a01a1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c2e8:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x1cc) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x61b6e485b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c398;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x61b6e485c) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c398:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)(param_1 + 0x3a) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3262bd895) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c480;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3262bd896) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c480:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)((long)param_1 + 0x1d4) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x359fa4760) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c568;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x359fa4761) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c568:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)(param_1 + 0x3b) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3fd1a73e7) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c650;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3fd1a73e8) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c650:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)((long)param_1 + 0x1dc) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x958330948) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c738;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x958330949) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c738:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)(param_1 + 0x3c) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa381ad7fa) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c820;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa381ad7fb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c820:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x3f000000;
  }
  *(undefined4 *)((long)param_1 + 0x1e4) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x79d16c4f9) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c8d0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x79d16c4fa) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269c8d0:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)(param_1 + 0x3d) = uVar22 != 0;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x89ee54ab3) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269c9c8;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269c9d4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x89ee54ab4) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269c9c8:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269c9d4:
  ppppbVar8 = param_1;
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)((long)param_1 + 0x1ec) = (int)(uVar25 >> 0x20);
    cVar10 = *pcVar18;
  }
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x4047e2314) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269ca88;
        pcVar12 = pcVar18 + (int)uVar22;
        lVar13 = lVar17;
        goto LAB_710269ca94;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x4047e2315) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269ca88:
    lVar13 = 0;
    pcVar12 = "";
  }
LAB_710269ca94:
  if (*pcVar12 == '\t') {
    pppbVar5 = *(byte ****)(*(long *)(lVar13 + 0x20) + (long)*(int *)(pcVar12 + 1) * 8);
  }
  else {
    pppbVar5 = (byte ***)0x0;
  }
  param_1[0x3e] = pppbVar5;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb8d17072a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269cb4c;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269cb58;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb8d17072b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269cb4c:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269cb58:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)(param_1 + 0x3f) = (int)(uVar25 >> 0x20);
    cVar10 = *pcVar18;
  }
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa4e0b598a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269cbf8;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        goto LAB_710269cc04;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa4e0b598b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269cbf8:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269cc04:
  uVar25 = FUN_71026a8450(lVar17,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)((long)param_1 + 0x1fc) = (int)(uVar25 >> 0x20);
  }
  pcVar12 = (char *)*plVar26;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_710269ccec:
      pcVar18 = "";
    }
    else {
      iVar20 = 0;
      pcVar18 = "";
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8
                         );
        uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0xef0c3148b) {
          uVar22 = puVar1[1];
          if ((int)uVar22 < 0) goto LAB_710269ccec;
          pcVar18 = pcVar12 + (int)uVar22;
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0xef0c3148c) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
  }
  else {
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41000000;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x18aed18c19) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269cda8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x18aed18c1a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269cda8:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 1;
  }
  *(bool *)((long)param_1 + 0x204) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x196450ddae) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269cea8;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_710269ceb4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x196450ddaf) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269cea8:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269ceb4:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x58c1a452f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269cf40;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x58c1a4530) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269cf40:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x41d00000;
  }
  *(undefined4 *)(param_1 + 0x41) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x6f54de50f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269cff0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x6f54de510) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269cff0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x40400000;
  }
  *(undefined4 *)((long)param_1 + 0x20c) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x15c76e457a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d0b0;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_710269d0bc;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x15c76e457b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269d0b0:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269d0bc:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x63b7c6e5a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d13c;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x63b7c6e5b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269d13c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x40400000;
  }
  *(undefined4 *)(param_1 + 0x42) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x5ab8a01a0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d1e0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x5ab8a01a1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269d1e0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x41200000;
  }
  *(undefined4 *)((long)param_1 + 0x214) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x61b6e485b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269d294;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x61b6e485c) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269d294:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x5a;
  }
  *(uint *)(param_1 + 0x43) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3262bd895) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269d3a0;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3262bd896) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269d3a0:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x1e;
  }
  *(uint *)((long)param_1 + 0x21c) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x359fa4760) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d494;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x359fa4761) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269d494:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)(param_1 + 0x44) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3fd1a73e7) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269d57c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3fd1a73e8) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269d57c:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x78;
  }
  *(uint *)((long)param_1 + 0x224) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x958330948) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269d67c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x958330949) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269d67c:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x20;
  }
  *(uint *)(param_1 + 0x45) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa381ad7fa) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d770;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa381ad7fb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269d770:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x3f000000;
  }
  *(undefined4 *)((long)param_1 + 0x22c) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x79d16c4f9) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d814;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x79d16c4fa) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269d814:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)(param_1 + 0x46) = uVar22 != 0;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x89ee54ab3) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d900;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269d90c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x89ee54ab4) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269d900:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269d90c:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) == 0) {
    if (cVar10 == '\f') goto LAB_710269d940;
LAB_710269d9bc:
    pcVar12 = "";
    lVar13 = 0;
  }
  else {
    *(int *)((long)param_1 + 0x234) = (int)(uVar25 >> 0x20);
    if (*pcVar18 != '\f') goto LAB_710269d9bc;
LAB_710269d940:
    iVar11 = *(int *)(pcVar18 + 1) + -1;
    if (*(int *)(pcVar18 + 1) < 1) goto LAB_710269d9bc;
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x4047e2314) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269d9bc;
        pcVar12 = pcVar18 + (int)uVar22;
        lVar13 = lVar17;
        goto LAB_710269d9c8;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x4047e2315) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
LAB_710269d9c8:
  if (*pcVar12 == '\t') {
    pppbVar5 = *(byte ****)(*(long *)(lVar13 + 0x20) + (long)*(int *)(pcVar12 + 1) * 8);
  }
  else {
    pppbVar5 = (byte ***)0x0;
  }
  param_1[0x47] = pppbVar5;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb8d17072a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269da74;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269da80;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb8d17072b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269da74:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269da80:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)(param_1 + 0x48) = (int)(uVar25 >> 0x20);
    cVar10 = *pcVar18;
  }
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa4e0b598a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269db14;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        goto LAB_710269db20;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa4e0b598b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269db14:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269db20:
  uVar25 = FUN_71026a8450(lVar17,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)((long)param_1 + 0x244) = (int)(uVar25 >> 0x20);
  }
  pcVar12 = (char *)*plVar26;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_710269dc28:
      lVar17 = 0;
      pcVar18 = "";
    }
    else {
      lVar17 = *param_2;
      iVar20 = 0;
      pcVar18 = "";
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x1b73a40e7e) {
          uVar22 = puVar1[1];
          if ((int)uVar22 < 0) goto LAB_710269dc28;
          pcVar18 = pcVar12 + (int)uVar22;
          goto LAB_710269dc34;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x1b73a40e7f) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
      lVar17 = 0;
    }
  }
  else {
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269dc34:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x63b7c6e5a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269dcb4;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x63b7c6e5b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269dcb4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x40c00000;
  }
  *(undefined4 *)(param_1 + 0x49) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x5ab8a01a0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269dd58;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x5ab8a01a1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269dd58:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x41e00000;
  }
  *(undefined4 *)((long)param_1 + 0x24c) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x61b6e485b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269ddfc;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x61b6e485c) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269ddfc:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x46;
  }
  *(uint *)(param_1 + 0x4a) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3262bd895) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269dee4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3262bd896) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269dee4:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x3c;
  }
  *(uint *)((long)param_1 + 0x254) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x359fa4760) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269dfe4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x359fa4761) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269dfe4:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)(param_1 + 0x4b) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3fd1a73e7) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269e0e4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3fd1a73e8) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269e0e4:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x73;
  }
  *(uint *)((long)param_1 + 0x25c) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x958330948) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269e1e4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x958330949) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269e1e4:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x20;
  }
  *(uint *)(param_1 + 0x4c) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa381ad7fa) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e2d8;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa381ad7fb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269e2d8:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x3f800000;
  }
  *(undefined4 *)((long)param_1 + 0x264) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x79d16c4f9) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e37c;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x79d16c4fa) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269e37c:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)(param_1 + 0x4d) = uVar22 != 0;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x89ee54ab3) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e468;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269e474;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x89ee54ab4) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269e468:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269e474:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) == 0) {
    if (cVar10 == '\f') goto LAB_710269e4a8;
LAB_710269e524:
    pcVar12 = "";
    lVar13 = 0;
  }
  else {
    *(int *)((long)param_1 + 0x26c) = (int)(uVar25 >> 0x20);
    if (*pcVar18 != '\f') goto LAB_710269e524;
LAB_710269e4a8:
    iVar11 = *(int *)(pcVar18 + 1) + -1;
    if (*(int *)(pcVar18 + 1) < 1) goto LAB_710269e524;
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x4047e2314) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e524;
        pcVar12 = pcVar18 + (int)uVar22;
        lVar13 = lVar17;
        goto LAB_710269e530;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x4047e2315) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
LAB_710269e530:
  if (*pcVar12 == '\t') {
    pppbVar5 = *(byte ****)(*(long *)(lVar13 + 0x20) + (long)*(int *)(pcVar12 + 1) * 8);
  }
  else {
    pppbVar5 = (byte ***)0x0;
  }
  param_1[0x4e] = pppbVar5;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb8d17072a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e5dc;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269e5e8;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb8d17072b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269e5dc:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269e5e8:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)(param_1 + 0x4f) = (int)(uVar25 >> 0x20);
    cVar10 = *pcVar18;
  }
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa4e0b598a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e67c;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        goto LAB_710269e688;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa4e0b598b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269e67c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269e688:
  uVar25 = FUN_71026a8450(lVar17,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)((long)param_1 + 0x27c) = (int)(uVar25 >> 0x20);
  }
  pcVar12 = (char *)*plVar26;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_710269e790:
      lVar17 = 0;
      pcVar18 = "";
    }
    else {
      lVar17 = *param_2;
      iVar20 = 0;
      pcVar18 = "";
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x1a518fb4e8) {
          uVar22 = puVar1[1];
          if ((int)uVar22 < 0) goto LAB_710269e790;
          pcVar18 = pcVar12 + (int)uVar22;
          goto LAB_710269e79c;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x1a518fb4e9) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
      lVar17 = 0;
    }
  }
  else {
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269e79c:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x63b7c6e5a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e81c;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x63b7c6e5b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269e81c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x40c00000;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x5ab8a01a0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e8c0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x5ab8a01a1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269e8c0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x41e00000;
  }
  *(undefined4 *)((long)param_1 + 0x284) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x61b6e485b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269e964;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x61b6e485c) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269e964:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x46;
  }
  *(uint *)(param_1 + 0x51) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3262bd895) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269ea4c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3262bd896) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269ea4c:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x3c;
  }
  *(uint *)((long)param_1 + 0x28c) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x359fa4760) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269eb4c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x359fa4761) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269eb4c:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(uint *)(param_1 + 0x52) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x3fd1a73e7) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269ec4c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x3fd1a73e8) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269ec4c:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x73;
  }
  *(uint *)((long)param_1 + 0x294) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x958330948) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) {
          pcVar12 = "";
        }
        else {
          pcVar12 = pcVar18 + (int)uVar22;
        }
        goto LAB_710269ed48;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x958330949) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  pcVar12 = "";
LAB_710269ed48:
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0x20;
  }
  *(uint *)(param_1 + 0x53) = uVar22;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa381ad7fa) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269ee38;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa381ad7fb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269ee38:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x3f800000;
  }
  *(undefined4 *)((long)param_1 + 0x29c) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x79d16c4f9) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269eedc;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x79d16c4fa) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269eedc:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)(param_1 + 0x54) = uVar22 != 0;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x89ee54ab3) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269efc8;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269efd4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x89ee54ab4) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269efc8:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269efd4:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) == 0) {
    if (cVar10 == '\f') goto LAB_710269f008;
LAB_710269f084:
    pcVar12 = "";
    lVar13 = 0;
  }
  else {
    *(int *)((long)param_1 + 0x2a4) = (int)(uVar25 >> 0x20);
    if (*pcVar18 != '\f') goto LAB_710269f084;
LAB_710269f008:
    iVar11 = *(int *)(pcVar18 + 1) + -1;
    if (*(int *)(pcVar18 + 1) < 1) goto LAB_710269f084;
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x4047e2314) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f084;
        pcVar12 = pcVar18 + (int)uVar22;
        lVar13 = lVar17;
        goto LAB_710269f090;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x4047e2315) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
LAB_710269f090:
  if (*pcVar12 == '\t') {
    pppbVar5 = *(byte ****)(*(long *)(lVar13 + 0x20) + (long)*(int *)(pcVar12 + 1) * 8);
  }
  else {
    pppbVar5 = (byte ***)0x0;
  }
  param_1[0x55] = pppbVar5;
  cVar10 = *pcVar18;
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb8d17072a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f130;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        lVar13 = lVar17;
        goto LAB_710269f13c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb8d17072b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar13 = 0;
  }
  else {
LAB_710269f130:
    lVar13 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269f13c:
  uVar25 = FUN_71026a8450(lVar13,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)(param_1 + 0x56) = (int)(uVar25 >> 0x20);
    cVar10 = *pcVar18;
  }
  if ((cVar10 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa4e0b598a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f1d0;
        pbVar31 = (byte *)(pcVar18 + (int)uVar22);
        goto LAB_710269f1dc;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa4e0b598b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269f1d0:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710269f1dc:
  uVar25 = FUN_71026a8450(lVar17,pbVar31);
  if ((uVar25 & 0xff) != 0) {
    *(int *)((long)param_1 + 0x2b4) = (int)(uVar25 >> 0x20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x186412a62c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f2b4;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x186412a62d) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f2b4:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42dc0000;
  }
  *(undefined4 *)(param_1 + 0x57) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1af017b0a8) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f370;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1af017b0a9) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f370:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 4;
  }
  *(uint *)((long)param_1 + 700) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x11ed588b52) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f460;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x11ed588b53) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f460:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x32;
  }
  *(uint *)(param_1 + 0x58) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x98751e700) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f550;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x98751e701) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f550:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x40400000;
  }
  *(undefined4 *)((long)param_1 + 0x2c4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x907307745) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f608;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x907307746) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f608:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x40600000;
  }
  *(undefined4 *)(param_1 + 0x59) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xd05e8311a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f6c0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xd05e8311b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f6c0:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 3;
  }
  *(uint *)((long)param_1 + 0x2cc) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xfe4632b79) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f7b0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xfe4632b7a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f7b0:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41400000;
  }
  *(undefined4 *)(param_1 + 0x5a) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xf93641bef) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f868;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xf93641bf0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f868:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x2d4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x18bd3c3cea) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f920;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x18bd3c3ceb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f920:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x5b) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x18879cc466) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269f9d8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x18879cc467) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269f9d8:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41800000;
  }
  *(undefined4 *)((long)param_1 + 0x2dc) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1dad4b4e3c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fa90;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1dad4b4e3d) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269fa90:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 1;
  }
  *(bool *)(param_1 + 0x5c) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10aa39600f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fb8c;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_710269fb98;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10aa396010) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269fb8c:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269fb98:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x6b16e4679) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fc24;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x6b16e467a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269fc24:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc3660000;
  }
  *(undefined4 *)((long)param_1 + 0x2e4) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x6c66976ef) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fcd8;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x6c66976f0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269fcd8:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 0x5d) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x72ce54c46) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fd88;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x72ce54c47) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269fd88:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x43660000;
  }
  *(undefined4 *)((long)param_1 + 0x2ec) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x75be27cd0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fe3c;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x75be27cd1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269fe3c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 0x5e) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10828acc65) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269fef8;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_710269ff04;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10828acc66) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_710269fef8:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_710269ff04:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x6b16e4679) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_710269ff90;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x6b16e467a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_710269ff90:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc3660000;
  }
  *(undefined4 *)((long)param_1 + 0x2f4) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x6c66976ef) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0040;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x6c66976f0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0040:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 0x5f) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x72ce54c46) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a00f0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x72ce54c47) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a00f0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x43660000;
  }
  *(undefined4 *)((long)param_1 + 0x2fc) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x75be27cd0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a01a0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x75be27cd1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a01a0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xf2181538b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a025c;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_71026a0268;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xf2181538c) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a025c:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_71026a0268:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xdaf58c7e4) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a02f4;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xdaf58c7e5) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a02f4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc32a0000;
  }
  *(undefined4 *)((long)param_1 + 0x304) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xdd85ff772) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a03a8;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xdd85ff773) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a03a8:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 0x61) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xea245953e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0458;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xea245953f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0458:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x432a0000;
  }
  *(undefined4 *)((long)param_1 + 0x30c) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xed542a5a8) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a050c;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xed542a5a9) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a050c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 0x62) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xf0932ffe1) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a05c8;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_71026a05d4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xf0932ffe2) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a05c8:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_71026a05d4:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xdaf58c7e4) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0660;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xdaf58c7e5) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0660:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc32a0000;
  }
  *(undefined4 *)((long)param_1 + 0x314) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xdd85ff772) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0710;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xdd85ff773) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0710:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 99) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xea245953e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a07c0;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xea245953f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a07c0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x432a0000;
  }
  *(undefined4 *)((long)param_1 + 0x31c) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xed542a5a8) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0870;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xed542a5a9) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0870:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc1400000;
  }
  *(undefined4 *)(param_1 + 100) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1222d91768) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a092c;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a0938;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1222d91769) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a092c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a0938:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  pppbVar5 = param_1[0x66];
  pppbVar27 = param_1[0x65];
  pppplVar29 = (long ****)((long)pppbVar5 - (long)pppbVar27);
  uVar19 = (long)pppplVar29 >> 3;
  if (uVar19 < uVar25) {
    uVar32 = uVar25 - uVar19;
    if ((ulong)((long)param_1[0x67] - (long)pppbVar5 >> 3) < uVar32) {
      if (iVar11 < 0) goto LAB_71026a6bdc;
      lVar13 = (long)param_1[0x67] - (long)pppbVar27;
      if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar13 >> 2;
        uVar16 = uVar25;
        if (uVar25 <= uVar14) {
          uVar16 = uVar14;
        }
        if (uVar16 != 0) {
          if (uVar16 >> 0x3d != 0) goto LAB_71026a66a0;
          goto LAB_71026a0a24;
        }
LAB_71026a0a88:
        pppbVar5 = (byte ***)0x0;
      }
      else {
        uVar16 = 0x1fffffffffffffff;
LAB_71026a0a24:
        ppplVar15 = (long ***)(uVar16 * 8);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        ppppbVar6 = param_1;
        pppbVar5 = (byte ***)
                   FUN_710392e290(0x10,ppplVar15,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                                  param_7,param_8);
        if (pppbVar5 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar28 = &local_70;
            local_70 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar14 & 1) != 0) &&
               (pppbVar5 = (byte ***)
                           FUN_710392e290(0x10,ppplVar15,pppplVar28,ppppbVar6,(long ****)ppppbVar8,
                                          puVar9,param_7,param_8), pppbVar5 != (byte ***)0x0))
            goto LAB_71026a0a8c;
          }
          goto LAB_71026a0a88;
        }
      }
LAB_71026a0a8c:
      pppplVar28 = (long ****)(uVar32 * 8);
      memset(pppbVar5 + uVar19,0,(size_t)pppplVar28);
      if (0 < (long)pppplVar29) {
        memcpy(pppbVar5,pppbVar27,(size_t)pppplVar29);
        pppplVar28 = pppplVar29;
      }
      param_1[0x67] = pppbVar5 + uVar16;
      param_1[0x65] = pppbVar5;
      param_1[0x66] = pppbVar5 + uVar25;
      if (pppbVar27 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar27);
      }
    }
    else {
      uVar25 = uVar32;
      if ((uVar32 & 1) != 0) {
        *pppbVar5 = (byte **)0x0;
        pppbVar5 = param_1[0x66] + 1;
        uVar25 = uVar32 - 1;
        param_1[0x66] = pppbVar5;
      }
      if (uVar32 != 1) {
        do {
          *pppbVar5 = (byte **)0x0;
          pppbVar5 = param_1[0x66];
          param_1[0x66] = pppbVar5 + 1;
          pppbVar5[1] = (byte **)0x0;
          pppbVar5 = param_1[0x66] + 1;
          uVar25 = uVar25 - 2;
          param_1[0x66] = pppbVar5;
        } while (uVar25 != 0);
      }
    }
  }
  else if (uVar19 != uVar25) {
    param_1[0x66] = pppbVar27 + uVar25;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a0b2c:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a0b64:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a0b64;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          pppplVar28 = *(long *****)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (pppplVar28 == (long ****)0x8afaa2d47) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar28 < (long ****)0x8afaa2d48) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x40a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(param_1[0x65] + lVar13) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x836a37cfd) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x836a37cfe) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x40a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 8;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)param_1[0x65] + lVar21 + 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a0b2c;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_71026a0d88:
      pcVar18 = "";
    }
    else {
      iVar20 = 0;
      pcVar18 = "";
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8
                         );
        uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x1833d509f7) {
          uVar22 = puVar1[1];
          if ((int)uVar22 < 0) goto LAB_71026a0d88;
          pcVar18 = pcVar12 + (int)uVar22;
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x1833d509f8) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
  }
  else {
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41200000;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x2b399fdfdc) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0e40;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x2b399fdfdd) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0e40:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)((long)param_1 + 0x344) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14e5272869) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a0f38;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14e527286a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a0f38:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0x6a] - (long)param_1[0x69] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0x69,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0x6a] = (byte ***)((long)param_1[0x69] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0xc3160000;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0x69] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x113abcaf2d) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a10e4;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x113abcaf2e) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a10e4:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0x6d] - (long)param_1[0x6c] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0x6c,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0x6d] = (byte ***)((long)param_1[0x6c] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0xc3200000;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0x6c] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14307379b9) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a1290;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14307379ba) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a1290:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x40a00000;
  }
  *(undefined4 *)(param_1 + 0x6f) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xf1cf1c150) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a1348;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xf1cf1c151) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a1348:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41200000;
  }
  *(undefined4 *)((long)param_1 + 0x37c) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1cc1251810) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a1400;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1cc1251811) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a1400:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0x71] - (long)param_1[0x70] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0x70,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0x71] = (byte ***)((long)param_1[0x70] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0x40a00000;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0x70] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) +
                         (ulong)*(uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) +
                                         (long)iVar2 * 8) * 8);
      if (uVar25 == 0xe15804a56) break;
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xe15804a57) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  std::string::assign((char *)(param_1 + 0x73));
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) +
                         (ulong)*(uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) +
                                         (long)iVar2 * 8) * 8);
      if (uVar25 == 0xe528d218c) break;
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xe528d218d) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  std::string::assign((char *)(param_1 + 0x76));
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa37876b1a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a173c;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a1748;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa37876b1b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a173c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a1748:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x7a] - (long)param_1[0x79] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x79;
  if (uVar19 < uVar25) {
    FUN_71026a7010(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x7a] = (byte ***)((long)param_1[0x79] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a1808:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a1840:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a1840;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0000000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a1808;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xa5904f3c6) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a1b0c;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a1b18;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xa5904f3c7) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a1b0c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a1b18:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x7d] - (long)param_1[0x7c] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x7c;
  if (uVar19 < uVar25) {
    FUN_71026a7220(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x7d] = (byte ***)((long)param_1[0x7c] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a1bb4:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a1bec:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a1bec;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41000000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a1bb4;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x90ae10813) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a1e98;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a1ea4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x90ae10814) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a1e98:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a1ea4:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x80] - (long)param_1[0x7f] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x7f;
  if (uVar19 < uVar25) {
    FUN_71026a7430(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x80] = (byte ***)((long)param_1[0x7f] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a1f3c:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a1f74:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a1f74;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a1f3c;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xbf5b534c2) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a2220;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a222c;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xbf5b534c3) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a2220:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a222c:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x83] - (long)param_1[0x82] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x82;
  if (uVar19 < uVar25) {
    FUN_71026a7010(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x83] = (byte ***)((long)param_1[0x82] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a22cc:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a2304:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a2304;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a22cc;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb9b36ac1e) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a25b0;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a25bc;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb9b36ac1f) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a25b0:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a25bc:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x86] - (long)param_1[0x85] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x85;
  if (uVar19 < uVar25) {
    FUN_71026a7220(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x86] = (byte ***)((long)param_1[0x85] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a2658:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a2690:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a2690;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41000000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a2658;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xaef4177af) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a293c;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a2948;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xaef4177b0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a293c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a2948:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x89] - (long)param_1[0x88] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x88;
  if (uVar19 < uVar25) {
    FUN_71026a7430(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x89] = (byte ***)((long)param_1[0x88] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a29e0:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a2a18:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a2a18;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a29e0;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xb809f9d41) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a2cc4;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a2cd0;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xb809f9d42) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a2cc4:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a2cd0:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x8c] - (long)param_1[0x8b] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x8b;
  if (uVar19 < uVar25) {
    FUN_71026a7010(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x8c] = (byte ***)((long)param_1[0x8b] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a2d70:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a2da8:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a2da8;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xbf800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a2d70;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xbee1c059d) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a3054;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a3060;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xbee1c059e) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a3054:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a3060:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x8f] - (long)param_1[0x8e] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x8e;
  if (uVar19 < uVar25) {
    FUN_71026a7220(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x8f] = (byte ***)((long)param_1[0x8e] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a30fc:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a3134:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a3134;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41000000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a30fc;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xaaf4b686d) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a33e0;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a33ec;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xaaf4b686e) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a33e0:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a33ec:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x92] - (long)param_1[0x91] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x91;
  if (uVar19 < uVar25) {
    FUN_71026a7430(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x92] = (byte ***)((long)param_1[0x91] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a3484:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a34bc:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a34bc;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x3f800000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a3484;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12ea1f98cb) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a3768;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a3774;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12ea1f98cc) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a3768:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a3774:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x95] - (long)param_1[0x94] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x94;
  if (uVar19 < uVar25) {
    FUN_71026a7640(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x95] = (byte ***)((long)param_1[0x94] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a3814:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a384c:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a384c;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41c80000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc0a00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a3814;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12849c0017) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a3af8;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a3b04;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12849c0018) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a3af8:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a3b04:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar13 = (long)param_1[0x98] - (long)param_1[0x97] >> 2;
  uVar19 = lVar13 * -0x5555555555555555;
  uVar25 = (ulong)iVar11;
  ppppbVar6 = param_1 + 0x97;
  if (uVar19 < uVar25) {
    FUN_71026a7640(ppppbVar6,uVar25 + lVar13 * 0x5555555555555555,pppplVar28,param_1,
                   (long ****)ppppbVar8,puVar9,param_7,param_8);
  }
  else if (uVar19 - uVar25 != 0) {
    param_1[0x98] = (byte ***)((long)param_1[0x97] + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a3ba0:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a3bd8:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a3bd8;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x40c00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 0xc;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar21 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a3ba0;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    pppplVar28 = (long ****)*param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)((long)pppplVar28[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar12 + 5));
      if (pppplVar28[4][*puVar1] == (long **)0x116c710895) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a3e84;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a3e90;
      }
      iVar3 = iVar2 + -1;
      if (pppplVar28[4][*puVar1] < (long **)0x116c710896) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    pppplVar28 = (long ****)0x0;
  }
  else {
LAB_71026a3e84:
    pppplVar28 = (long ****)0x0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a3e90:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  pppbVar5 = param_1[0x9b];
  pppbVar27 = param_1[0x9a];
  sVar30 = (long)pppbVar5 - (long)pppbVar27;
  lVar17 = (long)sVar30 >> 2;
  ppppbVar6 = param_1 + 0x9a;
  if ((ulong)(lVar17 * -0x5555555555555555) < uVar25) {
    uVar19 = uVar25 + lVar17 * 0x5555555555555555;
    if ((ulong)(((long)param_1[0x9c] - (long)pppbVar5 >> 2) * -0x5555555555555555) < uVar19) {
      if (iVar11 < 0) goto LAB_71026a6bdc;
      lVar13 = (long)param_1[0x9c] - (long)pppbVar27 >> 2;
      if ((ulong)(lVar13 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar16 = lVar13 * 0x5555555555555556;
        uVar32 = uVar25;
        if (uVar25 <= uVar16) {
          uVar32 = uVar16;
        }
        if (uVar32 != 0) goto LAB_71026a3fb4;
        lVar13 = 0;
      }
      else {
        uVar32 = 0x1555555555555555;
LAB_71026a3fb4:
        ppplVar15 = (long ***)(uVar32 * 0xc);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        ppppbVar7 = param_1;
        lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                                param_7,param_8);
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar29 = &local_70;
            local_70 = ppplVar15;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar16 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar29,ppppbVar7,(long ****)ppppbVar8,
                                        puVar9,param_7,param_8), lVar13 != 0)) goto LAB_71026a4028;
          }
          lVar13 = 0;
        }
      }
LAB_71026a4028:
      __s = (void *)(lVar13 + lVar17 * 4);
      memset(__s,0,uVar19 * 0xc);
      lVar17 = SUB168(SEXT816((long)sVar30) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pppbVar5 = (byte ***)((long)__s + ((lVar17 >> 1) - (lVar17 >> 0x3f)) * 0xc);
      if (0 < (long)sVar30) {
        memcpy(pppbVar5,pppbVar27,sVar30);
      }
      param_1[0x9a] = pppbVar5;
      param_1[0x9b] = (byte ***)(lVar13 + uVar25 * 0xc);
      param_1[0x9c] = (byte ***)(lVar13 + uVar32 * 0xc);
      if (pppbVar27 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar27);
      }
    }
    else {
      uVar25 = uVar19;
      if ((uVar19 & 1) != 0) {
        *(undefined4 *)(pppbVar5 + 1) = 0;
        *pppbVar5 = (byte **)0x0;
        pppbVar5 = (byte ***)((long)param_1[0x9b] + 0xc);
        uVar25 = uVar19 - 1;
        param_1[0x9b] = pppbVar5;
      }
      if (uVar19 != 1) {
        do {
          *(undefined4 *)(pppbVar5 + 1) = 0;
          *pppbVar5 = (byte **)0x0;
          pppbVar5 = param_1[0x9b];
          param_1[0x9b] = (byte ***)((long)pppbVar5 + 0xc);
          *(undefined4 *)((long)pppbVar5 + 0x14) = 0;
          *(undefined8 *)((long)pppbVar5 + 0xc) = 0;
          pppbVar5 = (byte ***)((long)param_1[0x9b] + 0xc);
          uVar25 = uVar25 - 2;
          param_1[0x9b] = pppbVar5;
        } while (uVar25 != 0);
      }
    }
  }
  else if (lVar17 * -0x5555555555555555 - uVar25 != 0) {
    param_1[0x9b] = (byte ***)((long)pppbVar27 + uVar25 * 0xc);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar17 = 0;
LAB_71026a40ec:
    do {
      iVar11 = (int)lVar17;
      if (iVar11 < 0) {
LAB_71026a4124:
        pppplVar29 = (long ****)0x0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        pppplVar29 = (long ****)0x0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a4124;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          pppplVar29 = pppplVar28;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41f00000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar17 * 0xc) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41700000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)((long)*ppppbVar6 + lVar17 * 0xc + 4) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar24 + 5));
          if (pppplVar29[4][*puVar1] == (long **)0x162d277af) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar29[4][*puVar1] < (long **)0x162d277b0) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc1400000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar13 = lVar17 * 0xc;
      lVar17 = lVar17 + 1;
      *(undefined4 *)((long)*ppppbVar6 + lVar13 + 8) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar17) break;
        goto LAB_71026a40ec;
      }
    } while (lVar17 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x109f60bd70) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a43cc;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x109f60bd71) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a43cc:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)(param_1 + 0x9d) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x10e7579b5c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a44c8;
        pcVar18 = pcVar12 + (int)uVar22;
        goto LAB_71026a44d4;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x10e7579b5d) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a44c8:
    lVar17 = 0;
    pcVar18 = "";
  }
LAB_71026a44d4:
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x18cdc1683) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4554;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x18cdc1684) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4554:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0x42400000;
  }
  *(undefined4 *)((long)param_1 + 0x4ec) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1fbdb2615) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a45fc;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1fbdb2616) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a45fc:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc3f60000;
  }
  *(undefined4 *)(param_1 + 0x9e) = uVar33;
  if ((*pcVar18 == '\f') && (iVar11 = *(int *)(pcVar18 + 1) + -1, 0 < *(int *)(pcVar18 + 1))) {
    iVar20 = 0;
    pcVar12 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar18 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x162d277af) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a46a4;
        pcVar12 = pcVar18 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x162d277b0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a46a4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar33 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar33 = 0xc2dc0000;
  }
  *(undefined4 *)((long)param_1 + 0x4f4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x17bd18fef0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4760;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x17bd18fef1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4760:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41200000;
  }
  *(undefined4 *)(param_1 + 0x9f) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x154d179917) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4818;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x154d179918) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4818:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x3e19999a;
  }
  *(undefined4 *)((long)param_1 + 0x4fc) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x188b111306) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a48d4;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x188b111307) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a48d4:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14a4dedd1a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4990;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14a4dedd1b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4990:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41400000;
  }
  *(undefined4 *)((long)param_1 + 0x504) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1895c3bc53) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4a48;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1895c3bc54) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4a48:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x3da3d70a;
  }
  *(undefined4 *)(param_1 + 0xa1) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x16206b97ed) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4b04;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x16206b97ee) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4b04:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0xa3] - (long)param_1[0xa2] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0xa2,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0xa3] = (byte ***)((long)param_1[0xa2] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0x40600000;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0xa2] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1729420ecb) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4cac;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1729420ecc) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4cac:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0xa6] - (long)param_1[0xa5] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0xa5,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0xa6] = (byte ***)((long)param_1[0xa5] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0xc0533333;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0xa5] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x16eb374448) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a4e58;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x16eb374449) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a4e58:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0xa9] - (long)param_1[0xa8] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0xa8,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0xa9] = (byte ***)((long)param_1[0xa8] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0xbe4ccccd;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0xa8] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x178f35057f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5004;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x178f350580) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a5004:
    pbVar31 = &DAT_7104742dbb;
  }
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  uVar19 = (long)param_1[0xac] - (long)param_1[0xab] >> 2;
  if (uVar19 < uVar25) {
    FUN_71003ca470(param_1 + 0xab,uVar25 - uVar19,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                   param_7,param_8);
  }
  else if (uVar19 != uVar25) {
    param_1[0xac] = (byte ***)((long)param_1[0xab] + uVar25 * 4);
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    iVar11 = 0;
    lVar17 = 0;
    do {
      if ((int)lVar17 < 0) {
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        if ((uVar22 == 0xb) && ((int)lVar17 < *(int *)(pbVar31 + 1))) {
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 + 5);
        }
      }
      uVar33 = 0x3fa66666;
      if (*pbVar24 == 8) {
        uVar33 = *(undefined4 *)(pbVar24 + 1);
      }
      *(undefined4 *)((long)param_1[0xab] + lVar17 * 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      lVar17 = lVar17 + 1;
      if (uVar22 - 0xb < 2) {
        iVar20 = *(int *)(pbVar31 + 1);
      }
      else {
        iVar20 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar17 < iVar20);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12f18eb50f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a51b0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12f18eb510) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a51b0:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x1c;
  }
  *(uint *)(param_1 + 0xae) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x129c5351e4) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a52a0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x129c5351e5) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a52a0:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0x42;
  }
  *(uint *)((long)param_1 + 0x574) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12ec39a56b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5390;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12ec39a56c) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a5390:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0xe8;
  }
  *(uint *)(param_1 + 0xaf) = uVar22;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x12ac6940d5) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5484;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a5490;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x12ac6940d6) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a5484:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a5490:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar19 = (ulong)iVar11;
  pppbVar5 = param_1[0xb1];
  pppbVar27 = param_1[0xb0];
  pppplVar29 = (long ****)((long)pppbVar5 - (long)pppbVar27);
  uVar25 = (long)pppplVar29 >> 3;
  if (uVar25 < uVar19) {
    uVar32 = uVar19 - uVar25;
    if ((ulong)((long)param_1[0xb2] - (long)pppbVar5 >> 3) < uVar32) {
      if (iVar11 < 0) goto LAB_71026a6bdc;
      lVar13 = (long)param_1[0xb2] - (long)pppbVar27;
      if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar13 >> 2;
        uVar16 = uVar19;
        if (uVar19 <= uVar14) {
          uVar16 = uVar14;
        }
        if (uVar16 != 0) {
          if (uVar16 >> 0x3d != 0) goto LAB_71026a66a0;
          goto LAB_71026a5584;
        }
        uVar16 = 0;
        pppbVar5 = (byte ***)0x0;
      }
      else {
        uVar16 = 0x1fffffffffffffff;
LAB_71026a5584:
        ppplVar15 = (long ***)(uVar16 * 8);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        ppppbVar6 = param_1;
        pppbVar5 = (byte ***)
                   FUN_710392e290(0x10,ppplVar15,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                                  param_7,param_8);
        if (pppbVar5 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar28 = &local_70;
            local_70 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar14 & 1) != 0) &&
               (pppbVar5 = (byte ***)
                           FUN_710392e290(0x10,ppplVar15,pppplVar28,ppppbVar6,(long ****)ppppbVar8,
                                          puVar9,param_7,param_8), pppbVar5 != (byte ***)0x0))
            goto LAB_71026a55f0;
          }
          pppbVar5 = (byte ***)0x0;
        }
      }
LAB_71026a55f0:
      pppplVar28 = (long ****)(uVar32 * 8);
      memset(pppbVar5 + uVar25,0,(size_t)pppplVar28);
      if (0 < (long)pppplVar29) {
        memcpy(pppbVar5,pppbVar27,(size_t)pppplVar29);
        pppplVar28 = pppplVar29;
      }
      param_1[0xb2] = pppbVar5 + uVar16;
      param_1[0xb0] = pppbVar5;
      param_1[0xb1] = pppbVar5 + uVar19;
      if (pppbVar27 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar27);
      }
    }
    else {
      uVar25 = uVar32;
      if ((uVar32 & 1) != 0) {
        *pppbVar5 = (byte **)0x0;
        pppbVar5 = param_1[0xb1] + 1;
        uVar25 = uVar32 - 1;
        param_1[0xb1] = pppbVar5;
      }
      if (uVar32 != 1) {
        do {
          *pppbVar5 = (byte **)0x0;
          pppbVar5 = param_1[0xb1];
          param_1[0xb1] = pppbVar5 + 1;
          pppbVar5[1] = (byte **)0x0;
          pppbVar5 = param_1[0xb1] + 1;
          uVar25 = uVar25 - 2;
          param_1[0xb1] = pppbVar5;
        } while (uVar25 != 0);
      }
    }
  }
  else if (uVar25 != uVar19) {
    param_1[0xb1] = pppbVar27 + uVar19;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a568c:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a56c4:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a56c4;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x18cdc1683) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x18cdc1684) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc37a0000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(param_1[0xb0] + lVar13) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x1fbdb2615) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x1fbdb2616) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0x41200000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 8;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)param_1[0xb0] + lVar21 + 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a568c;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x121d2a4974) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a58d0;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a58dc;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x121d2a4975) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a58d0:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a58dc:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  pppbVar5 = param_1[0xb4];
  pppbVar27 = param_1[0xb3];
  pppplVar29 = (long ****)((long)pppbVar5 - (long)pppbVar27);
  uVar19 = (long)pppplVar29 >> 3;
  if (uVar19 < uVar25) {
    uVar32 = uVar25 - uVar19;
    if ((ulong)((long)param_1[0xb5] - (long)pppbVar5 >> 3) < uVar32) {
      if (iVar11 < 0) {
LAB_71026a6bdc:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = (long)param_1[0xb5] - (long)pppbVar27;
      if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
        uVar14 = lVar13 >> 2;
        uVar16 = uVar25;
        if (uVar25 <= uVar14) {
          uVar16 = uVar14;
        }
        if (uVar16 != 0) {
          if (uVar16 >> 0x3d != 0) goto LAB_71026a66a0;
          goto LAB_71026a59cc;
        }
LAB_71026a5a30:
        pppbVar5 = (byte ***)0x0;
      }
      else {
        uVar16 = 0x1fffffffffffffff;
LAB_71026a59cc:
        ppplVar15 = (long ***)(uVar16 * 8);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        ppppbVar6 = param_1;
        pppbVar5 = (byte ***)
                   FUN_710392e290(0x10,ppplVar15,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,
                                  param_7,param_8);
        if (pppbVar5 == (byte ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar28 = &local_70;
            local_70 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar14 & 1) != 0) &&
               (pppbVar5 = (byte ***)
                           FUN_710392e290(0x10,ppplVar15,pppplVar28,ppppbVar6,(long ****)ppppbVar8,
                                          puVar9,param_7,param_8), pppbVar5 != (byte ***)0x0))
            goto LAB_71026a5a34;
          }
          goto LAB_71026a5a30;
        }
      }
LAB_71026a5a34:
      pppplVar28 = (long ****)(uVar32 * 8);
      memset(pppbVar5 + uVar19,0,(size_t)pppplVar28);
      if (0 < (long)pppplVar29) {
        memcpy(pppbVar5,pppbVar27,(size_t)pppplVar29);
        pppplVar28 = pppplVar29;
      }
      param_1[0xb3] = pppbVar5;
      param_1[0xb5] = pppbVar5 + uVar16;
      param_1[0xb4] = pppbVar5 + uVar25;
      if (pppbVar27 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar27);
      }
    }
    else {
      uVar25 = uVar32;
      if ((uVar32 & 1) != 0) {
        *pppbVar5 = (byte **)0x0;
        pppbVar5 = param_1[0xb4] + 1;
        uVar25 = uVar32 - 1;
        param_1[0xb4] = pppbVar5;
      }
      if (uVar32 != 1) {
        do {
          *pppbVar5 = (byte **)0x0;
          pppbVar5 = param_1[0xb4];
          param_1[0xb4] = pppbVar5 + 1;
          pppbVar5[1] = (byte **)0x0;
          pppbVar5 = param_1[0xb4] + 1;
          uVar25 = uVar25 - 2;
          param_1[0xb4] = pppbVar5;
        } while (uVar25 != 0);
      }
    }
  }
  else if (uVar19 != uVar25) {
    param_1[0xb4] = pppbVar27 + uVar25;
  }
  uVar22 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar13 = 0;
LAB_71026a5ad8:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71026a5b10:
        lVar21 = 0;
        pbVar24 = &DAT_7104742dbb;
      }
      else {
        pbVar24 = &DAT_7104742dbb;
        lVar21 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a5b10;
          pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
          lVar21 = lVar17;
        }
      }
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          pppplVar28 = *(long *****)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (pppplVar28 == (long ****)0x47a67e768) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (pppplVar28 < (long ****)0x47a67e769) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc2480000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      *(undefined4 *)(param_1[0xb3] + lVar13) = uVar33;
      pbVar23 = &DAT_7104742dbb;
      if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
        iVar20 = 0;
        do {
          iVar2 = iVar11 + iVar20;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8
                           );
          uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar25 == 0x5b4ca7514) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar23 = pbVar24 + (int)uVar22;
            }
            break;
          }
          iVar3 = iVar2 + -1;
          if (uVar25 < 0x5b4ca7515) {
            iVar20 = iVar2 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
        } while (iVar20 <= iVar11);
      }
      uVar33 = 0xc2480000;
      if (*pbVar23 == 8) {
        uVar33 = *(undefined4 *)(pbVar23 + 1);
      }
      lVar21 = lVar13 * 8;
      lVar13 = lVar13 + 1;
      *(undefined4 *)((long)param_1[0xb3] + lVar21 + 4) = uVar33;
      uVar22 = (uint)*pbVar31;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar13) break;
        goto LAB_71026a5ad8;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1350a4e7d0) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5d18;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1350a4e7d1) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a5d18:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0xb6) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x2df5f76722) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5dd0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x2df5f76723) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a5dd0:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42340000;
  }
  *(undefined4 *)((long)param_1 + 0x5b4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x2e224c4d1a) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5e8c;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x2e224c4d1b) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a5e8c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42480000;
  }
  *(undefined4 *)(param_1 + 0xb7) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x25d76d4cf3) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a5f48;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x25d76d4cf4) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a5f48:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x41f00000;
  }
  *(undefined4 *)((long)param_1 + 0x5bc) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1434d7b0b6) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a6000;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1434d7b0b7) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a6000:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)(param_1 + 0xb8) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xeab1d77d3) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a60f8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xeab1d77d4) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a60f8:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 0;
  }
  *(bool *)((long)param_1 + 0x5c1) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xd00dcdf7c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a61f0;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xd00dcdf7d) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a61f0:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar22 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar22 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar22 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar22 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar22 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar22 = 1;
  }
  *(bool *)((long)param_1 + 0x5c2) = uVar22 != 0;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x15bcae4c89) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a62e8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x15bcae4c8a) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a62e8:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    cVar10 = pcVar18[1];
    break;
  case '\x02':
    cVar10 = pcVar18[1];
    break;
  case '\x04':
    cVar10 = (char)*(undefined2 *)(pcVar18 + 1);
    break;
  case '\x05':
    cVar10 = (char)*(undefined2 *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    cVar10 = (char)*(undefined4 *)(pcVar18 + 1);
    break;
  default:
    cVar10 = '\x03';
  }
  *(char *)((long)param_1 + 0x5c3) = cVar10;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x14e531a19f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a63d8;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x14e531a1a0) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a63d8:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0xc04ccccd;
  }
  *(undefined4 *)((long)param_1 + 0x5c4) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0x1a8005b9ed) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a6494;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0x1a8005b9ee) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a6494:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x42c80000;
  }
  *(undefined4 *)(param_1 + 0xb9) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar20 = 0;
    pcVar18 = "";
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xe43cda0fa) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a6550;
        pcVar18 = pcVar12 + (int)uVar22;
        break;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xe43cda0fb) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
  }
  else {
LAB_71026a6550:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar33 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar33 = 0x3fc00000;
  }
  *(undefined4 *)((long)param_1 + 0x5cc) = uVar33;
  pcVar12 = (char *)*plVar26;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar17 = *param_2;
    iVar20 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar2 = iVar11 + iVar20;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar2 * 8);
      uVar25 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar25 == 0xbdffa8968) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71026a660c;
        pbVar31 = (byte *)(pcVar12 + (int)uVar22);
        goto LAB_71026a6618;
      }
      iVar3 = iVar2 + -1;
      if (uVar25 < 0xbdffa8969) {
        iVar20 = iVar2 + 1;
        iVar3 = iVar11;
      }
      iVar11 = iVar3;
    } while (iVar20 <= iVar11);
    lVar17 = 0;
  }
  else {
LAB_71026a660c:
    lVar17 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_71026a6618:
  if (*pbVar31 - 0xb < 2) {
    iVar11 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar25 = (ulong)iVar11;
  pppbVar5 = param_1[0xbb];
  pppbVar27 = param_1[0xba];
  sVar30 = (long)pppbVar5 - (long)pppbVar27;
  uVar19 = (long)sVar30 >> 4;
  ppppbVar6 = param_1 + 0xba;
  if (uVar25 <= uVar19) {
    if (uVar19 != uVar25) {
      param_1[0xbb] = pppbVar27 + uVar25 * 2;
    }
    goto LAB_71026a67c0;
  }
  uVar32 = uVar25 - uVar19;
  if (uVar32 <= (ulong)((long)param_1[0xbc] - (long)pppbVar5 >> 4)) {
    uVar25 = uVar32;
    if ((uVar32 & 1) != 0) {
      *pppbVar5 = (byte **)0x0;
      pppbVar5[1] = (byte **)0x0;
      pppbVar5 = param_1[0xbb] + 2;
      uVar25 = uVar32 - 1;
      param_1[0xbb] = pppbVar5;
    }
    if (uVar32 != 1) {
      do {
        *pppbVar5 = (byte **)0x0;
        pppbVar5[1] = (byte **)0x0;
        pppbVar5 = param_1[0xbb];
        param_1[0xbb] = pppbVar5 + 2;
        uVar25 = uVar25 - 2;
        pppbVar5[2] = (byte **)0x0;
        pppbVar5[3] = (byte **)0x0;
        pppbVar5 = param_1[0xbb] + 2;
        param_1[0xbb] = pppbVar5;
      } while (uVar25 != 0);
    }
    goto LAB_71026a67c0;
  }
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar13 = (long)param_1[0xbc] - (long)pppbVar27;
  if ((ulong)(lVar13 >> 4) < 0x7ffffffffffffff) {
    uVar14 = lVar13 >> 3;
    uVar16 = uVar25;
    if (uVar25 <= uVar14) {
      uVar16 = uVar14;
    }
    if (uVar16 != 0) {
      if (uVar16 >> 0x3c != 0) {
LAB_71026a66a0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_71026a6708;
    }
LAB_71026a6768:
    pppbVar5 = (byte ***)0x0;
  }
  else {
    uVar16 = 0xfffffffffffffff;
LAB_71026a6708:
    ppplVar15 = (long ***)(uVar16 * 0x10);
    if (ppplVar15 == (long ***)0x0) {
      ppplVar15 = (long ***)0x1;
    }
    ppppbVar7 = param_1;
    pppbVar5 = (byte ***)
               FUN_710392e290(0x10,ppplVar15,pppplVar28,param_1,(long ****)ppppbVar8,puVar9,param_7,
                              param_8);
    if (pppbVar5 == (byte ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        pppplVar28 = &local_70;
        local_70 = ppplVar15;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar14 & 1) != 0) &&
           (pppbVar5 = (byte ***)
                       FUN_710392e290(0x10,ppplVar15,pppplVar28,ppppbVar7,(long ****)ppppbVar8,
                                      puVar9,param_7,param_8), pppbVar5 != (byte ***)0x0))
        goto LAB_71026a676c;
      }
      goto LAB_71026a6768;
    }
  }
LAB_71026a676c:
  memset(pppbVar5 + uVar19 * 2,0,uVar32 * 0x10);
  if (0 < (long)sVar30) {
    memcpy(pppbVar5,pppbVar27,sVar30);
  }
  param_1[0xbc] = pppbVar5 + uVar16 * 2;
  param_1[0xba] = pppbVar5;
  param_1[0xbb] = pppbVar5 + uVar25 * 2;
  if (pppbVar27 != (byte ***)0x0) {
    FUN_710392eb40((ulong)pppbVar27);
  }
LAB_71026a67c0:
  uVar22 = (uint)*pbVar31;
  if ((1 < *pbVar31 - 0xb) || (*(int *)(pbVar31 + 1) < 1)) {
    return;
  }
  lVar13 = 0;
  do {
    iVar11 = (int)lVar13;
    if (iVar11 < 0) {
LAB_71026a686c:
      lVar21 = 0;
      pbVar24 = &DAT_7104742dbb;
    }
    else {
      pbVar24 = &DAT_7104742dbb;
      lVar21 = 0;
      if (uVar22 == 0xb) {
        if (*(int *)(pbVar31 + 1) <= iVar11) goto LAB_71026a686c;
        pbVar24 = pbVar31 + *(int *)(pbVar31 + (long)iVar11 * 4 + 5);
        lVar21 = lVar17;
      }
    }
    pbVar23 = &DAT_7104742dbb;
    if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
      iVar20 = 0;
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x7853e14ec) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar23 = pbVar24 + (int)uVar22;
          }
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x7853e14ed) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
    uVar33 = 0x42d80000;
    if (*pbVar23 == 8) {
      uVar33 = *(undefined4 *)(pbVar23 + 1);
    }
    *(undefined4 *)(*ppppbVar6 + lVar13 * 2) = uVar33;
    pbVar23 = &DAT_7104742dbb;
    if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
      iVar20 = 0;
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x7f239247a) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar23 = pbVar24 + (int)uVar22;
          }
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x7f239247b) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
    uVar33 = 0xc0000000;
    if (*pbVar23 == 8) {
      uVar33 = *(undefined4 *)(pbVar23 + 1);
    }
    *(undefined4 *)((long)*ppppbVar6 + lVar13 * 0x10 + 4) = uVar33;
    pbVar23 = &DAT_7104742dbb;
    if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
      iVar20 = 0;
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x6f54de50f) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar23 = pbVar24 + (int)uVar22;
          }
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x6f54de510) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
    uVar33 = 0x42480000;
    if (*pbVar23 == 8) {
      uVar33 = *(undefined4 *)(pbVar23 + 1);
    }
    *(undefined4 *)(*ppppbVar6 + lVar13 * 2 + 1) = uVar33;
    pbVar23 = &DAT_7104742dbb;
    if ((*pbVar24 == 0xc) && (iVar11 = *(int *)(pbVar24 + 1) + -1, 0 < *(int *)(pbVar24 + 1))) {
      iVar20 = 0;
      do {
        iVar2 = iVar11 + iVar20;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar21 + 0x28) + (long)*(int *)(pbVar24 + 5) + (long)iVar2 * 8);
        uVar25 = *(ulong *)(*(long *)(lVar21 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar25 == 0x58c1a452f) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar23 = pbVar24 + (int)uVar22;
          }
          break;
        }
        iVar3 = iVar2 + -1;
        if (uVar25 < 0x58c1a4530) {
          iVar20 = iVar2 + 1;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
      } while (iVar20 <= iVar11);
    }
    uVar33 = 0x43160000;
    if (*pbVar23 == 8) {
      uVar33 = *(undefined4 *)(pbVar23 + 1);
    }
    lVar21 = lVar13 * 0x10;
    lVar13 = lVar13 + 1;
    *(undefined4 *)((long)*ppppbVar6 + lVar21 + 0xc) = uVar33;
    uVar22 = (uint)*pbVar31;
    if (uVar22 - 0xb < 2) {
      if (*(int *)(pbVar31 + 1) <= lVar13) {
        return;
      }
    }
    else if (-1 < lVar13) {
      return;
    }
  } while( true );
}

