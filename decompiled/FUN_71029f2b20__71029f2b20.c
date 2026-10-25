// addr:      71029f2b20
// offset:    0x29f2b20
// name:      FUN_71029f2b20
// mangled:   
// signature: undefined __cdecl FUN_71029f2b20(byte * * * * param_1, long * param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71029f2b20(byte ****param_1,long *param_2,long ****param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte ****ppppbVar2;
  int iVar3;
  byte ***__src;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  byte *pbVar8;
  long ****pppplVar9;
  byte *pbVar10;
  byte ****ppppbVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  size_t __n;
  long lVar23;
  void *__s;
  byte ***pppbVar24;
  byte *pbVar25;
  undefined4 uVar26;
  long ***local_70;
  undefined4 local_64;
  
  plVar13 = param_2 + 1;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x952850fc9) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f2bdc;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x952850fca) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f2bdc:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x26;
  }
  *(uint *)(param_1 + 1) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0xf9ffba332) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f2ccc;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0xf9ffba333) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f2ccc:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3dcccccd;
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x14c451a91f) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f2d88;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x14c451a920) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f2d88:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x40000000;
  }
  *(undefined4 *)(param_1 + 2) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x15ded078ca) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f2e40;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x15ded078cb) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f2e40:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x42700000;
  }
  *(undefined4 *)((long)param_1 + 0x14) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1277c91449) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f2efc;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1277c9144a) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f2efc:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f333333;
  }
  *(undefined4 *)(param_1 + 3) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x12eec045f3) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f2fb8;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x12eec045f4) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f2fb8:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f000000;
  }
  *(undefined4 *)((long)param_1 + 0x1c) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1299c77565) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3070;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1299c77566) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3070:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3e99999a;
  }
  *(undefined4 *)(param_1 + 4) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x13d4c3b636) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f312c;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x13d4c3b637) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f312c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f000000;
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x18515d8621) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f31e4;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x18515d8622) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f31e4:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x40800000;
  }
  *(undefined4 *)(param_1 + 5) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x17fe0b73ba) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f329c;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x17fe0b73bb) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f329c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f000000;
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x149eca4650) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3354;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x149eca4651) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3354:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x348;
  }
  *(uint *)(param_1 + 6) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x15086cafad) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3444;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x15086cafae) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3444:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x78;
  }
  *(uint *)((long)param_1 + 0x34) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x1fa53913cf) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3534;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x1fa53913d0) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3534:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x708;
  }
  *(uint *)(param_1 + 7) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x1f99342c96) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3624;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x1f99342c97) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3624:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0xe10;
  }
  *(uint *)((long)param_1 + 0x3c) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x1f4958ed74) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3714;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x1f4958ed75) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3714:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3e99999a;
  }
  *(undefined4 *)(param_1 + 8) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x1f7555d22d) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f37cc;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x1f7555d22e) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f37cc:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f800000;
  }
  *(undefined4 *)((long)param_1 + 0x44) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      param_3 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (param_3 == (long ****)0x15ead8e06e) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3884;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (param_3 < (long ****)0x15ead8e06f) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3884:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3dcccccd;
  }
  *(undefined4 *)(param_1 + 9) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x15d6d5df37) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f393c;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x15d6d5df38) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f393c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3e99999a;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x19e84498fa) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f39f4;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x19e84498fb) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f39f4:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x1e;
  }
  *(uint *)(param_1 + 10) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1df3cf0d87) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3ae4;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1df3cf0d88) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3ae4:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0xf;
  }
  *(uint *)((long)param_1 + 0x54) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x177be37424) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3bd4;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x177be37425) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3bd4:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f666666;
  }
  *(undefined4 *)(param_1 + 0xb) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1aeaa3b5e8) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3c90;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1aeaa3b5e9) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3c90:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x43960000;
  }
  *(undefined4 *)((long)param_1 + 0x5c) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1ad6ae8ab1) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3d4c;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1ad6ae8ab2) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3d4c:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x43b40000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x20207c3cd7) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3e08;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x20207c3cd8) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3e08:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3e99999a;
  }
  *(undefined4 *)((long)param_1 + 100) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x2011a0d992) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3ec0;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x2011a0d993) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3ec0:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x40000000;
  }
  *(undefined4 *)(param_1 + 0xd) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x208703f150) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f3f78;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x208703f151) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f3f78:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3e99999a;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1517212232) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4030;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1517212233) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4030:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 300;
  }
  *(uint *)(param_1 + 0xe) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x19029ce44e) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4120;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x19029ce44f) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4120:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0xb4;
  }
  *(uint *)((long)param_1 + 0x74) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x193e91db17) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4210;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x193e91db18) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4210:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x1e0;
  }
  *(uint *)(param_1 + 0xf) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x150ff1e9ce) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4300;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x150ff1e9cf) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4300:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3e4ccccd;
  }
  *(undefined4 *)((long)param_1 + 0x7c) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x1002ef1395) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f43bc;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x1002ef1396) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f43bc:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f0f5c29;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x103bda1a60) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4478;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x103bda1a61) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4478:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0xe10;
  }
  *(uint *)((long)param_1 + 0x84) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x148c70c3da) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4568;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x148c70c3db) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4568:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0x708;
  }
  *(uint *)(param_1 + 0x11) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0x14b07dfc83) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4658;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0x14b07dfc84) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4658:
    pcVar18 = "";
  }
  switch(*pcVar18) {
  case '\x01':
  case '\x03':
    uVar7 = (uint)(byte)pcVar18[1];
    break;
  case '\x02':
    uVar7 = (uint)pcVar18[1];
    break;
  case '\x04':
    uVar7 = (uint)*(short *)(pcVar18 + 1);
    break;
  case '\x05':
    uVar7 = (uint)*(ushort *)(pcVar18 + 1);
    break;
  case '\x06':
  case '\a':
    uVar7 = *(uint *)(pcVar18 + 1);
    break;
  default:
    uVar7 = 0xa8c;
  }
  *(uint *)((long)param_1 + 0x8c) = uVar7;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    iVar21 = 0;
    pcVar18 = "";
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0xf483bb30d) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4748;
        pcVar18 = pcVar17 + (int)uVar7;
        break;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0xf483bb30e) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
  }
  else {
LAB_71029f4748:
    pcVar18 = "";
  }
  if (*pcVar18 == '\b') {
    uVar26 = *(undefined4 *)(pcVar18 + 1);
  }
  else {
    uVar26 = 0x3f000000;
  }
  *(undefined4 *)(param_1 + 0x12) = uVar26;
  pcVar17 = (char *)*plVar13;
  if ((*pcVar17 == '\f') && (iVar12 = *(int *)(pcVar17 + 1) + -1, 0 < *(int *)(pcVar17 + 1))) {
    lVar23 = *param_2;
    iVar21 = 0;
    pbVar25 = &DAT_7104742dbb;
    do {
      iVar3 = iVar12 + iVar21;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pcVar17 + 5) + (long)iVar3 * 8);
      uVar22 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar22 == 0xd555fd28c) {
        uVar7 = puVar1[1];
        if ((int)uVar7 < 0) goto LAB_71029f4804;
        pbVar25 = (byte *)(pcVar17 + (int)uVar7);
        goto LAB_71029f4810;
      }
      iVar5 = iVar3 + -1;
      if (uVar22 < 0xd555fd28d) {
        iVar21 = iVar3 + 1;
        iVar5 = iVar12;
      }
      iVar12 = iVar5;
    } while (iVar21 <= iVar12);
    lVar23 = 0;
  }
  else {
LAB_71029f4804:
    lVar23 = 0;
    pbVar25 = &DAT_7104742dbb;
  }
LAB_71029f4810:
  if (*pbVar25 - 0xb < 2) {
    uVar22 = (ulong)*(int *)(pbVar25 + 1);
  }
  else {
    uVar22 = 0;
  }
  __src = param_1[0x13];
  pppbVar24 = param_1[0x14];
  __n = (long)pppbVar24 - (long)__src;
  lVar19 = (long)__n >> 2;
  ppppbVar2 = param_1 + 0x13;
  bVar6 = uVar22 < (ulong)(lVar19 * 0x6db6db6db6db6db7);
  uVar4 = uVar22 + lVar19 * -0x6db6db6db6db6db7;
  if (bVar6 || uVar4 == 0) {
    if (bVar6) {
      param_1[0x14] = (byte ***)((long)__src + uVar22 * 0x1c);
    }
    goto LAB_71029f4a24;
  }
  if (uVar4 <= (ulong)(((long)param_1[0x15] - (long)pppbVar24 >> 2) * 0x6db6db6db6db6db7)) {
    uVar22 = uVar4;
    if ((uVar4 & 1) != 0) {
      *(undefined4 *)(pppbVar24 + 3) = 0;
      pppbVar24[1] = (byte **)0x0;
      pppbVar24[2] = (byte **)0x0;
      uVar22 = uVar4 - 1;
      *pppbVar24 = (byte **)0x0;
      pppbVar24 = (byte ***)((long)param_1[0x14] + 0x1c);
      param_1[0x14] = pppbVar24;
    }
    if (uVar4 != 1) {
      do {
        *(undefined4 *)(pppbVar24 + 3) = 0;
        pppbVar24[1] = (byte **)0x0;
        pppbVar24[2] = (byte **)0x0;
        uVar22 = uVar22 - 2;
        *pppbVar24 = (byte **)0x0;
        pppbVar24 = param_1[0x14];
        param_1[0x14] = (byte ***)((long)pppbVar24 + 0x1c);
        *(undefined4 *)((long)pppbVar24 + 0x34) = 0;
        *(undefined8 *)((long)pppbVar24 + 0x2c) = 0;
        *(undefined8 *)((long)pppbVar24 + 0x24) = 0;
        *(undefined8 *)((long)pppbVar24 + 0x1c) = 0;
        pppbVar24 = (byte ***)((long)param_1[0x14] + 0x1c);
        param_1[0x14] = pppbVar24;
      } while (uVar22 != 0);
    }
    goto LAB_71029f4a24;
  }
  uVar20 = 0x924924924924924;
  if (0x924924924924924 < uVar22) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar14 = (long)param_1[0x15] - (long)__src >> 2;
  if ((ulong)(lVar14 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar15 = lVar14 * -0x2492492492492492;
    uVar20 = uVar22;
    if (uVar22 <= uVar15) {
      uVar20 = uVar15;
    }
    if (uVar20 != 0) goto LAB_71029f48c0;
    uVar20 = 0;
    lVar14 = 0;
  }
  else {
LAB_71029f48c0:
    ppplVar16 = (long ***)(uVar20 * 0x1c);
    if (ppplVar16 == (long ***)0x0) {
      ppplVar16 = (long ***)0x1;
    }
    ppppbVar11 = param_1;
    lVar14 = FUN_710392e290(0x10,ppplVar16,param_3,param_1,param_5,param_6,param_7,param_8);
    if (lVar14 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        pppplVar9 = &local_70;
        local_70 = ppplVar16;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar15 & 1) != 0) &&
           (lVar14 = FUN_710392e290(0x10,ppplVar16,pppplVar9,ppppbVar11,param_5,param_6,param_7,
                                    param_8), lVar14 != 0)) goto LAB_71029f4930;
      }
      lVar14 = 0;
    }
  }
LAB_71029f4930:
  __s = (void *)(lVar14 + lVar19 * 4);
  memset(__s,0,uVar4 * 0x1c);
  lVar19 = SUB168(SEXT816((long)__n) * SEXT816(-0x4924924924924925),8);
  pppbVar24 = (byte ***)((long)__s + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x1c);
  if (0 < (long)__n) {
    memcpy(pppbVar24,__src,__n);
  }
  param_1[0x13] = pppbVar24;
  param_1[0x14] = (byte ***)(lVar14 + uVar22 * 0x1c);
  param_1[0x15] = (byte ***)(lVar14 + uVar20 * 0x1c);
  if (__src != (byte ***)0x0) {
    FUN_710392eb40((ulong)__src);
  }
LAB_71029f4a24:
  uVar7 = (uint)*pbVar25;
  if ((1 < *pbVar25 - 0xb) || (*(int *)(pbVar25 + 1) < 1)) {
    return;
  }
  lVar19 = 0;
  do {
    iVar12 = (int)lVar19;
    if (iVar12 < 0) {
LAB_71029f4afc:
      lVar14 = 0;
      pbVar8 = &DAT_7104742dbb;
    }
    else {
      pbVar8 = &DAT_7104742dbb;
      lVar14 = 0;
      if (uVar7 == 0xb) {
        if (*(int *)(pbVar25 + 1) <= iVar12) goto LAB_71029f4afc;
        pbVar8 = pbVar25 + *(int *)(pbVar25 + (long)iVar12 * 4 + 5);
        lVar14 = lVar23;
      }
    }
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0x7853e14ec) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0x7853e14ed) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0xc29e0000;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    *(undefined4 *)((long)*ppppbVar2 + lVar19 * 0x1c) = uVar26;
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0x7f239247a) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0x7f239247b) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0x41da6666;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    *(undefined4 *)((long)*ppppbVar2 + lVar19 * 0x1c + 4) = uVar26;
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0x76b3075c0) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0x76b3075c1) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    *(undefined4 *)((long)*ppppbVar2 + lVar19 * 0x1c + 8) = uVar26;
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0x5602a5479) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0x5602a547a) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0x41980000;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    *(undefined4 *)((long)*ppppbVar2 + lVar19 * 0x1c + 0xc) = uVar26;
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0x5172d64ef) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0x5172d64f0) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    *(undefined4 *)((long)*ppppbVar2 + lVar19 * 0x1c + 0x10) = uVar26;
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0x58e243555) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0x58e243556) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    *(undefined4 *)((long)*ppppbVar2 + lVar19 * 0x1c + 0x14) = uVar26;
    pbVar10 = &DAT_7104742dbb;
    if ((*pbVar8 == 0xc) && (iVar12 = *(int *)(pbVar8 + 1) + -1, 0 < *(int *)(pbVar8 + 1))) {
      iVar21 = 0;
      do {
        iVar3 = iVar12 + iVar21;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar8 + 5) + (long)iVar3 * 8);
        uVar22 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar22 == 0xee085517c) {
          uVar7 = puVar1[1];
          if (-1 < (int)uVar7) {
            pbVar10 = pbVar8 + (int)uVar7;
          }
          break;
        }
        iVar5 = iVar3 + -1;
        if (uVar22 < 0xee085517d) {
          iVar21 = iVar3 + 1;
          iVar5 = iVar12;
        }
        iVar12 = iVar5;
      } while (iVar21 <= iVar12);
    }
    uVar26 = 0x41a00000;
    if (*pbVar10 == 8) {
      uVar26 = *(undefined4 *)(pbVar10 + 1);
    }
    lVar14 = lVar19 * 0x1c;
    lVar19 = lVar19 + 1;
    *(undefined4 *)((long)*ppppbVar2 + lVar14 + 0x18) = uVar26;
    uVar7 = (uint)*pbVar25;
    if (uVar7 - 0xb < 2) {
      if (*(int *)(pbVar25 + 1) <= lVar19) {
        return;
      }
    }
    else if (-1 < lVar19) {
      return;
    }
  } while( true );
}

