// addr:      7102a44410
// offset:    0x2a44410
// name:      FUN_7102a44410
// mangled:   
// signature: undefined __cdecl FUN_7102a44410(long param_1, long * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * * * param_7, undefined8 param_8)


void FUN_7102a44410(long param_1,long *param_2,undefined8 param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,long ****param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  void *pvVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  byte ****ppppbVar14;
  uint uVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  uint *puVar18;
  uint *puVar19;
  byte ***pppbVar20;
  byte ***pppbVar21;
  ushort uVar22;
  int iVar23;
  char *pcVar24;
  long lVar25;
  ulong uVar26;
  long ***ppplVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  char *pcVar32;
  long lVar33;
  int iVar34;
  byte *pbVar35;
  undefined8 uVar36;
  ulong uVar37;
  byte *pbVar38;
  size_t sVar39;
  long ****pppplVar40;
  long ****pppplVar41;
  void *pvVar42;
  byte bVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  undefined4 uVar47;
  ulong local_c8;
  long local_b8;
  long local_a0;
  long ***local_90;
  undefined4 local_84;
  
  plVar10 = param_2 + 1;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1a847101f8) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a444d8;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1a847101f9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a444d8:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 8) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1ab87c3ea1) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44594;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1ab87c3ea2) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44594:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x19a45f249b) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4464c;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x19a45f249c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4464c:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x43fa0000;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1998521bc2) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44708;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1998521bc3) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44708:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x43fa0000;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x133a14193e) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a447c0;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x133a14193f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a447c0:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41700000;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1526227784) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44878;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1526227785) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44878:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 3;
  }
  *(uint *)(param_1 + 0x1c) = uVar9;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xd1cf83a7b) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44968;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xd1cf83a7c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44968:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 1;
  }
  *(bool *)(param_1 + 0x20) = uVar9 != 0;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1aa5c489a9) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44a60;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1aa5c489aa) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44a60:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44480000;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1a99c9b6f0) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44b1c;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1a99c9b6f1) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44b1c:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44960000;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1985eaacca) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44bd8;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1985eaaccb) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44bd8:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x19b9e79393) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44c90;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x19b9e79394) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44c90:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44610000;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1db1e1f1f5) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44d4c;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1db1e1f1f6) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44d4c:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x19ad319b5f) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44e04;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x19ad319b60) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a44e04:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x38d1b717;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xabaef1d10) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a44ec4;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a44ed0;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xabaef1d11) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a44ec4:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a44ed0:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar45 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0x40);
  puVar31 = *(undefined8 **)(param_1 + 0x48);
  sVar39 = (long)puVar31 - (long)pvVar42;
  uVar37 = (long)sVar39 >> 5;
  plVar1 = (long *)(param_1 + 0x40);
  if (uVar37 < uVar45) {
    uVar44 = uVar45 - uVar37;
    if ((ulong)(*(long *)(param_1 + 0x50) - (long)puVar31 >> 5) < uVar44) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar25 = *(long *)(param_1 + 0x50) - (long)pvVar42;
      if ((ulong)(lVar25 >> 5) < 0x3ffffffffffffff) {
        uVar26 = lVar25 >> 4;
        uVar28 = uVar45;
        if (uVar45 <= uVar26) {
          uVar28 = uVar26;
        }
        if (uVar28 != 0) {
          if (uVar28 >> 0x3b != 0) goto LAB_7102a50cd0;
          goto LAB_7102a44fdc;
        }
LAB_7102a4503c:
        pvVar11 = (void *)0x0;
      }
      else {
        uVar28 = 0x7ffffffffffffff;
LAB_7102a44fdc:
        ppplVar27 = (long ***)(uVar28 * 0x20);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,(long ****)&DAT_7104472000,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar11 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar26 & 1) != 0) &&
               (pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,
                                                 param_7,param_8), pvVar11 != (void *)0x0))
            goto LAB_7102a45040;
          }
          goto LAB_7102a4503c;
        }
      }
LAB_7102a45040:
      memset((void *)((long)pvVar11 + uVar37 * 0x20),0,uVar44 * 0x20);
      if (0 < (long)sVar39) {
        memcpy(pvVar11,pvVar42,sVar39);
      }
      *(void **)(param_1 + 0x40) = pvVar11;
      *(void **)(param_1 + 0x48) = (void *)((long)pvVar11 + uVar45 * 0x20);
      *(void **)(param_1 + 0x50) = (void *)((long)pvVar11 + uVar28 * 0x20);
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar44;
      if ((uVar44 & 1) != 0) {
        puVar31[2] = 0;
        puVar31[3] = 0;
        uVar37 = uVar44 - 1;
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
        *(undefined8 **)(param_1 + 0x48) = puVar31;
      }
      if (uVar44 != 1) {
        do {
          puVar31[2] = 0;
          puVar31[3] = 0;
          uVar37 = uVar37 - 2;
          *puVar31 = 0;
          puVar31[1] = 0;
          lVar25 = *(long *)(param_1 + 0x48);
          *(long *)(param_1 + 0x48) = lVar25 + 0x20;
          *(undefined8 *)(lVar25 + 0x30) = 0;
          *(undefined8 *)(lVar25 + 0x38) = 0;
          *(undefined8 *)(lVar25 + 0x20) = 0;
          *(undefined8 *)(lVar25 + 0x28) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x20);
          *(undefined8 **)(param_1 + 0x48) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (uVar37 != uVar45) {
    *(void **)(param_1 + 0x48) = (void *)((long)pvVar42 + uVar45 * 0x20);
  }
  pppplVar16 = (long ****)&DAT_7104472000;
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a45154:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4518c:
        lVar29 = 0;
        pppplVar40 = (long ****)&DAT_7104742dbb;
      }
      else {
        pppplVar40 = (long ****)&DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4518c;
          pppplVar40 = (long ****)(pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5));
          lVar29 = lVar46;
        }
      }
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0xec7875be3) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0xec7875be4) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0xeb0806b75) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0xeb0806b76) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x432a0000;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20 + 4) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0x1105843e70) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0x1105843e71) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x3e4ccccd;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20 + 8) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0x15ba52fab5) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0x15ba52fab6) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x3ba3d70a;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20 + 0xc) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0x8008bc31a) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0x8008bc31b) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x44960000;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20 + 0x10) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0x83c86fc43) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0x83c86fc44) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x44960000;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20 + 0x14) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (iVar23 = *(int *)((long)pppplVar40 + 1) + -1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        iVar34 = 0;
        param_6 = (byte ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          param_7 = (long ****)(ulong)uVar9;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] == (long ***)0x122a191926) {
            uVar9 = *(uint *)((long)(param_6 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (param_5[*(uint *)(param_6 + (int)uVar9)] < (long ***)0x122a191927) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      param_4 = (byte ****)(ulong)*(byte *)pppplVar16;
      uVar47 = 0x3e4ccccd;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x20 + 0x18) = uVar47;
      pppplVar16 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar40 == 0xc) &&
         (uVar9 = *(int *)((long)pppplVar40 + 1) - 1, 0 < *(int *)((long)pppplVar40 + 1))) {
        param_5 = *(long *****)(lVar29 + 0x20);
        param_4 = (byte ****)0x0;
        do {
          uVar15 = (uint)param_4;
          iVar23 = uVar9 + uVar15;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar3 = iVar23 >> 1;
          param_6 = (byte ****)(ulong)uVar3;
          param_7 = (long ****)
                    (*(long *)(lVar29 + 0x28) + (long)*(int *)((long)pppplVar40 + 5) +
                    (long)(int)uVar3 * 8);
          uVar5 = *(uint *)param_7;
          if (param_5[uVar5] == (long ***)0x16060833a0) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pppplVar16 = (long ****)((long)pppplVar40 + (long)(int)*(uint *)((long)param_7 + 4));
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar3 - 1);
          uVar8 = uVar3 - 1;
          if (param_5[uVar5] < (long ***)0x16060833a1) {
            uVar15 = uVar3 + 1;
            uVar8 = uVar9;
          }
          uVar9 = uVar8;
          param_4 = (byte ****)(ulong)uVar15;
        } while ((int)uVar15 <= (int)uVar9);
      }
      uVar47 = 0x3ba3d70a;
      if (*(byte *)pppplVar16 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar16 + 1);
      }
      lVar29 = lVar25 * 0x20;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0x1c) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a45154;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x15bce9fab8) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a45754;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x15bce9fab9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a45754:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 1;
  }
  *(bool *)(param_1 + 0x58) = uVar9 != 0;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    pppbVar20 = (byte ***)*param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)((long)pppbVar20[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar24 + 5));
      if (pppbVar20[4][*puVar18] == (byte *)0x14cddeb743) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a45850;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4585c;
      }
      iVar7 = iVar2 + -1;
      if (pppbVar20[4][*puVar18] < (byte *)0x14cddeb744) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    pppbVar20 = (byte ***)0x0;
  }
  else {
LAB_7102a45850:
    pppbVar20 = (byte ***)0x0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4585c:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0x60);
  puVar31 = *(undefined8 **)(param_1 + 0x68);
  pppplVar40 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar46 = (long)pppplVar40 >> 2;
  plVar1 = (long *)(param_1 + 0x60);
  if ((ulong)(lVar46 * -0x3333333333333333) < uVar37) {
    uVar45 = uVar37 + lVar46 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x70) - (long)puVar31 >> 2) * -0x3333333333333333) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar25 = *(long *)(param_1 + 0x70) - (long)pvVar42 >> 2;
      if ((ulong)(lVar25 * -0x3333333333333333) < 0x666666666666666) {
        uVar28 = lVar25 * -0x6666666666666666;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a45980;
        lVar25 = 0;
      }
      else {
        uVar44 = 0xccccccccccccccc;
LAB_7102a45980:
        ppplVar27 = (long ***)(uVar44 * 0x14);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        pppbVar21 = pppbVar20;
        lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,param_7,pppbVar20)
        ;
        if (lVar25 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,param_7,
                                        pppbVar21), lVar25 != 0)) goto LAB_7102a459f0;
          }
          lVar25 = 0;
        }
      }
LAB_7102a459f0:
      pvVar11 = (void *)(lVar25 + lVar46 * 4);
      pppplVar16 = (long ****)(uVar45 * 0x14);
      memset(pvVar11,0,(size_t)pppplVar16);
      lVar46 = SUB168(SEXT816((long)pppplVar40) * SEXT816(-0x6666666666666667),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar46 >> 3) - (lVar46 >> 0x3f)) * 0x14);
      if (0 < (long)pppplVar40) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar40);
        pppplVar16 = pppplVar40;
      }
      *(ulong *)(param_1 + 0x70) = lVar25 + uVar44 * 0x14;
      *(void **)(param_1 + 0x60) = pvVar11;
      *(ulong *)(param_1 + 0x68) = lVar25 + uVar37 * 0x14;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        *(undefined4 *)(puVar31 + 2) = 0;
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x14);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0x68) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          *(undefined4 *)(puVar31 + 2) = 0;
          *puVar31 = 0;
          puVar31[1] = 0;
          lVar46 = *(long *)(param_1 + 0x68);
          *(long *)(param_1 + 0x68) = lVar46 + 0x14;
          *(undefined4 *)(lVar46 + 0x24) = 0;
          *(undefined8 *)(lVar46 + 0x1c) = 0;
          *(undefined8 *)(lVar46 + 0x14) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x14);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x68) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar46 * -0x3333333333333333 - uVar37 != 0) {
    *(void **)(param_1 + 0x68) = (void *)((long)pvVar42 + uVar37 * 0x14);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar46 = 0;
LAB_7102a45af8:
    do {
      iVar23 = (int)lVar46;
      if (iVar23 < 0) {
LAB_7102a45b30:
        pppbVar21 = (byte ***)0x0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        pppbVar21 = (byte ***)0x0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a45b30;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          pppbVar21 = pppbVar20;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        pppplVar16 = (long ****)pppbVar21[4];
        iVar23 = 0;
        param_4 = (byte ****)((long)pppbVar21[5] + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          param_5 = (long ****)(ulong)uVar15;
          param_6 = param_4 + (int)uVar15;
          param_7 = (long ****)pppplVar16[*(uint *)param_6];
          if (param_7 == (long ****)0xd786c5fc3) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (param_7 < (long ****)0xd786c5fc4) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x14) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        pppplVar16 = (long ****)pppbVar21[4];
        iVar23 = 0;
        param_4 = (byte ****)((long)pppbVar21[5] + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          param_5 = (long ****)(ulong)uVar15;
          param_6 = param_4 + (int)uVar15;
          param_7 = (long ****)pppplVar16[*(uint *)param_6];
          if (param_7 == (long ****)0xd0f6b6f55) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (param_7 < (long ****)0xd0f6b6f56) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x42c80000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x14 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        pppplVar16 = (long ****)pppbVar21[4];
        iVar23 = 0;
        param_4 = (byte ****)((long)pppbVar21[5] + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          param_5 = (long ****)(ulong)uVar15;
          param_6 = param_4 + (int)uVar15;
          param_7 = (long ****)pppplVar16[*(uint *)param_6];
          if (param_7 == (long ****)0xbeda0adfd) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (param_7 < (long ****)0xbeda0adfe) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x42340000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x14 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        pppplVar16 = (long ****)pppbVar21[4];
        iVar23 = 0;
        param_4 = (byte ****)((long)pppbVar21[5] + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          param_5 = (long ****)(ulong)uVar15;
          param_6 = param_4 + (int)uVar15;
          param_7 = (long ****)pppplVar16[*(uint *)param_6];
          if (param_7 == (long ****)0xfbaf3d6f8) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (param_7 < (long ****)0xfbaf3d6f9) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x43160000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x14 + 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        pppplVar16 = (long ****)pppbVar21[4];
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          param_4 = (byte ****)(ulong)uVar15;
          param_5 = (long ****)
                    ((long)pppbVar21[5] + (long)(int)uVar15 * 8 + (long)*(int *)(pbVar35 + 5));
          param_6 = (byte ****)pppplVar16[*(uint *)param_5];
          if (param_6 == (byte ****)0xae5865d2a) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (param_6 < (byte ****)0xae5865d2b) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x43480000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar25 = lVar46 * 0x14;
      lVar46 = lVar46 + 1;
      *(undefined4 *)(*plVar1 + lVar25 + 0x10) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar46) break;
        goto LAB_7102a45af8;
      }
    } while (lVar46 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xc0e02d980) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a45f1c;
        pcVar32 = pcVar24 + (int)uVar9;
        goto LAB_7102a45f28;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xc0e02d981) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a45f1c:
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a45f28:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x47a67e768) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a45fb4;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x47a67e769) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a45fb4:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x5b4ca7514) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46064;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x5b4ca7515) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46064:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x31ed91fca) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46114;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x31ed91fcb) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46114:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0xc0c00000;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x6895f72a4) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a461c4;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x6895f72a5) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a461c4:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x84) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    local_a0 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(local_a0 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_a0 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xbc45c09fd) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46284;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a46290;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xbc45c09fe) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    local_a0 = 0;
  }
  else {
LAB_7102a46284:
    local_a0 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a46290:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0x88);
  puVar31 = *(undefined8 **)(param_1 + 0x90);
  pppplVar40 = (long ****)((long)puVar31 - (long)pvVar42);
  uVar45 = (long)pppplVar40 >> 3;
  if (uVar45 < uVar37) {
    uVar44 = uVar37 - uVar45;
    if ((ulong)(*(long *)(param_1 + 0x98) - (long)puVar31 >> 3) < uVar44) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar46 = *(long *)(param_1 + 0x98) - (long)pvVar42;
      if ((ulong)(lVar46 >> 3) < 0xfffffffffffffff) {
        uVar26 = lVar46 >> 2;
        uVar28 = uVar37;
        if (uVar37 <= uVar26) {
          uVar28 = uVar26;
        }
        if (uVar28 != 0) {
          if (uVar28 >> 0x3d != 0) goto LAB_7102a50cd0;
          goto LAB_7102a4637c;
        }
LAB_7102a463dc:
        pvVar11 = (void *)0x0;
      }
      else {
        uVar28 = 0x1fffffffffffffff;
LAB_7102a4637c:
        ppplVar27 = (long ***)(uVar28 * 8);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,param_7,
                                         pppbVar20);
        if (pvVar11 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar26 & 1) != 0) &&
               (pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,
                                                 param_7,pppbVar20), pvVar11 != (void *)0x0))
            goto LAB_7102a463e0;
          }
          goto LAB_7102a463dc;
        }
      }
LAB_7102a463e0:
      pppplVar16 = (long ****)(uVar44 * 8);
      memset((void *)((long)pvVar11 + uVar45 * 8),0,(size_t)pppplVar16);
      if (0 < (long)pppplVar40) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar40);
        pppplVar16 = pppplVar40;
      }
      *(void **)(param_1 + 0x88) = pvVar11;
      *(void **)(param_1 + 0x90) = (void *)((long)pvVar11 + uVar37 * 8);
      *(void **)(param_1 + 0x98) = (void *)((long)pvVar11 + uVar28 * 8);
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar44;
      if ((uVar44 & 1) != 0) {
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x90) + 8);
        uVar37 = uVar44 - 1;
        *(undefined8 **)(param_1 + 0x90) = puVar31;
      }
      if (uVar44 != 1) {
        do {
          *puVar31 = 0;
          lVar46 = *(long *)(param_1 + 0x90);
          *(long *)(param_1 + 0x90) = lVar46 + 8;
          *(undefined8 *)(lVar46 + 8) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x90) + 8);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x90) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (uVar45 != uVar37) {
    *(void **)(param_1 + 0x90) = (void *)((long)pvVar42 + uVar37 * 8);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar46 = 0;
LAB_7102a46470:
    do {
      iVar23 = (int)lVar46;
      if (iVar23 < 0) {
LAB_7102a464a8:
        lVar25 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar25 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a464a8;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar25 = local_a0;
        }
      }
      bVar43 = *pbVar35;
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x43bc4bcd9) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a46530;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x43bc4bcda) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a46530:
      puVar13 = FUN_7102a54c50(lVar29,pbVar12);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*(long *)(param_1 + 0x88) + lVar46 * 8) = (int)((ulong)puVar13 >> 0x20);
        bVar43 = *pbVar35;
      }
      pbVar12 = &DAT_7104742dbb;
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x10445ef75b) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x10445ef75c) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar25 = lVar46 * 8;
      lVar46 = lVar46 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar25 + 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar46) break;
        goto LAB_7102a46470;
      }
    } while (lVar46 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x111871021f) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a466d4;
        pcVar32 = pcVar24 + (int)uVar9;
        goto LAB_7102a466e0;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1118710220) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a466d4:
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a466e0:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x8d8ad1dd1) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4676c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x8d8ad1dd2) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4676c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x8afaa2d47) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4681c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x8afaa2d48) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4681c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43480000;
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x58c1a452f) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a468d0;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x58c1a4530) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a468d0:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x44020000;
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x6f54de50f) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46984;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x6f54de510) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46984:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43c80000;
  }
  *(undefined4 *)(param_1 + 0xac) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x102de02017) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46a44;
        pcVar32 = pcVar24 + (int)uVar9;
        goto LAB_7102a46a50;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x102de02018) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a46a44:
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a46a50:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x4fd3943f8) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46adc;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x4fd3943f9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46adc:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xa381ad7fa) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46b8c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xa381ad7fb) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46b8c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xa3f786bac) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46c3c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xa3f786bad) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46c3c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x50f345ac1) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46cec;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x50f345ac2) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46cec:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 100;
  }
  *(uint *)(param_1 + 0xbc) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x570e5c534) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46dd4;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x570e5c535) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46dd4:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 0x32;
  }
  *(uint *)(param_1 + 0xc0) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x5d405f1b3) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46ebc;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x5d405f1b4) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46ebc:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 0x3c;
  }
  *(uint *)(param_1 + 0xc4) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x10f6d7f433) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a46fa4;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x10f6d7f434) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a46fa4:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 1;
  }
  *(uint *)(param_1 + 200) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x61b6e485b) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4708c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x61b6e485c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4708c:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 0xffffffa6;
  }
  *(uint *)(param_1 + 0xcc) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x89ee54ab3) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47178;
        pbVar38 = (byte *)(pcVar32 + (int)uVar9);
        goto LAB_7102a47184;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x89ee54ab4) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a47178:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a47184:
  puVar13 = FUN_7102a54c50(lVar46,pbVar38);
  if (((ulong)puVar13 & 0xff) != 0) {
    *(int *)(param_1 + 0xd0) = (int)((ulong)puVar13 >> 0x20);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x109e95bd45) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47230;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4723c;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x109e95bd46) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a47230:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4723c:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  local_c8 = 0xaaaaaaaaaaaaaaa;
  uVar37 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0xd8);
  puVar31 = *(undefined8 **)(param_1 + 0xe0);
  sVar39 = (long)puVar31 - (long)pvVar42;
  lVar25 = (long)sVar39 >> 2;
  plVar1 = (long *)(param_1 + 0xd8);
  if ((ulong)(lVar25 * -0x5555555555555555) < uVar37) {
    uVar45 = uVar37 + lVar25 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0xe8) - (long)puVar31 >> 2) * -0x5555555555555555) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar29 = *(long *)(param_1 + 0xe8) - (long)pvVar42 >> 2;
      if ((ulong)(lVar29 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar28 = lVar29 * 0x5555555555555556;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a4737c;
        lVar29 = 0;
      }
      else {
        uVar44 = 0x1555555555555555;
LAB_7102a4737c:
        ppplVar27 = (long ***)(uVar44 * 0xc);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,param_7,pppbVar20)
        ;
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,param_4,param_5,param_6,param_7,
                                        pppbVar20), lVar29 != 0)) goto LAB_7102a473ec;
          }
          lVar29 = 0;
        }
      }
LAB_7102a473ec:
      pvVar11 = (void *)(lVar29 + lVar25 * 4);
      memset(pvVar11,0,uVar45 * 0xc);
      lVar25 = SUB168(SEXT816((long)sVar39) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar25 >> 1) - (lVar25 >> 0x3f)) * 0xc);
      if (0 < (long)sVar39) {
        memcpy(pvVar11,pvVar42,sVar39);
      }
      *(void **)(param_1 + 0xd8) = pvVar11;
      *(ulong *)(param_1 + 0xe0) = lVar29 + uVar37 * 0xc;
      *(ulong *)(param_1 + 0xe8) = lVar29 + uVar44 * 0xc;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0xe0) + 0xc);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0xe0) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          *(undefined4 *)(puVar31 + 1) = 0;
          *puVar31 = 0;
          lVar25 = *(long *)(param_1 + 0xe0);
          *(long *)(param_1 + 0xe0) = lVar25 + 0xc;
          *(undefined4 *)(lVar25 + 0x14) = 0;
          *(undefined8 *)(lVar25 + 0xc) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0xe0) + 0xc);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0xe0) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar25 * -0x5555555555555555 - uVar37 != 0) {
    *(void **)(param_1 + 0xe0) = (void *)((long)pvVar42 + uVar37 * 0xc);
  }
  uVar9 = (uint)*pbVar38;
  pppplVar16 = (long ****)0x1fbdb2615;
  ppppbVar17 = (byte ****)0x18cdc1683;
  pppplVar40 = (long ****)0x162d277af;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a474d4:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4750c:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4750c;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc5034000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a474d4;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1777350c45) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a477b4;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1777350c46) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a477b4:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0xf0),uVar37 - uVar45,(long ****)0x1fbdb2615,
                   (byte ****)0x18cdc1683,(long ****)0x162d277af,param_6,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0x45034000;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0xf0) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1e92f80052) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47958;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1e92f80053) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47958:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x445c0000;
  }
  *(undefined4 *)(param_1 + 0x108) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1d1210e095) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47a14;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1d1210e096) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47a14:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x445c0000;
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x127f45f8e1) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47ad0;
        pcVar32 = pcVar24 + (int)uVar9;
        goto LAB_7102a47adc;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x127f45f8e2) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a47ad0:
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a47adc:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xd786c5fc3) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47b68;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xd786c5fc4) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47b68:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xd0f6b6f55) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47c18;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xd0f6b6f56) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47c18:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0xc3020000;
  }
  *(undefined4 *)(param_1 + 0x114) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xbeda0adfd) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47ccc;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xbeda0adfe) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47ccc:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0x118) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xfbaf3d6f8) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47d7c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xfbaf3d6f9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47d7c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x430c0000;
  }
  *(undefined4 *)(param_1 + 0x11c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xae5865d2a) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47e30;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xae5865d2b) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47e30:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43160000;
  }
  *(undefined4 *)(param_1 + 0x120) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x17238bacfd) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47eec;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x17238bacfe) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47eec:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x42f00000;
  }
  *(undefined4 *)(param_1 + 0x124) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x16258ac2a3) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a47fa8;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x16258ac2a4) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a47fa8:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0x128) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xbbc296f3e) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48064;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xbbc296f3f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48064:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41000000;
  }
  *(undefined4 *)(param_1 + 300) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x152ff9efec) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4811c;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x152ff9efed) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4811c:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 0;
  }
  *(bool *)(param_1 + 0x130) = uVar9 != 0;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1abadbb188) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48214;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1abadbb189) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48214:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x43af0000;
  }
  *(undefined4 *)(param_1 + 0x134) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x196e508607) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a482d0;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x196e508608) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a482d0:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x138) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x148741a08e) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48388;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x148741a08f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48388:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 0;
  }
  *(bool *)(param_1 + 0x13c) = uVar9 != 0;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x199976469b) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48480;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x199976469c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48480:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44070000;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x19d6cfe21e) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4853c;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x19d6cfe21f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4853c:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0xc2340000;
  }
  *(undefined4 *)(param_1 + 0x144) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xc720890fd) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a485fc;
        pcVar32 = pcVar24 + (int)uVar9;
        goto LAB_7102a48608;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xc720890fe) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a485fc:
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a48608:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x186412a62c) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48694;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x186412a62d) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48694:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1af017b0a8) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48744;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1af017b0a9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48744:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 4;
  }
  *(uint *)(param_1 + 0x14c) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x11ed588b52) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a4882c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x11ed588b53) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4882c:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 0x32;
  }
  *(uint *)(param_1 + 0x150) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x98751e700) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48914;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x98751e701) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48914:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x40400000;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x907307745) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a489c4;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x907307746) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a489c4:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x40600000;
  }
  *(undefined4 *)(param_1 + 0x158) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xd05e8311a) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48a74;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xd05e8311b) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48a74:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 3;
  }
  *(uint *)(param_1 + 0x15c) = uVar9;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xfe4632b79) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48b5c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xfe4632b7a) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48b5c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x41400000;
  }
  *(undefined4 *)(param_1 + 0x160) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xf93641bef) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48c0c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xf93641bf0) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48c0c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x164) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xef0c3148b) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a48cc4;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xef0c3148c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a48cc4:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41c00000;
  }
  *(undefined4 *)(param_1 + 0x168) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    puVar18 = (uint *)*param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(puVar18 + 10) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(puVar18 + 8) + (ulong)*puVar19 * 8);
      if (uVar37 == 0xc037c7adc) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a48d80;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a48d8c;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xc037c7add) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    puVar18 = (uint *)0x0;
  }
  else {
LAB_7102a48d80:
    puVar18 = (uint *)0x0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a48d8c:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0x170);
  puVar31 = *(undefined8 **)(param_1 + 0x178);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar46 = (long)pppplVar41 >> 2;
  plVar1 = (long *)(param_1 + 0x170);
  if ((ulong)(lVar46 * -0x5555555555555555) < uVar37) {
    uVar45 = uVar37 + lVar46 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x180) - (long)puVar31 >> 2) * -0x5555555555555555) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar25 = *(long *)(param_1 + 0x180) - (long)pvVar42 >> 2;
      if ((ulong)(lVar25 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar28 = lVar25 * 0x5555555555555556;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a48eb8;
        lVar25 = 0;
      }
      else {
        uVar44 = 0x1555555555555555;
LAB_7102a48eb8:
        ppplVar27 = (long ***)(uVar44 * 0xc);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        puVar19 = puVar18;
        lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,
                                pppbVar20);
        if (lVar25 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar19,
                                        param_7,pppbVar20), lVar25 != 0)) goto LAB_7102a48f28;
          }
          lVar25 = 0;
        }
      }
LAB_7102a48f28:
      pvVar11 = (void *)(lVar25 + lVar46 * 4);
      pppplVar16 = (long ****)(uVar45 * 0xc);
      memset(pvVar11,0,(size_t)pppplVar16);
      lVar46 = SUB168(SEXT816((long)pppplVar41) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar46 >> 1) - (lVar46 >> 0x3f)) * 0xc);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar16 = pppplVar41;
      }
      *(void **)(param_1 + 0x170) = pvVar11;
      *(ulong *)(param_1 + 0x178) = lVar25 + uVar37 * 0xc;
      *(ulong *)(param_1 + 0x180) = lVar25 + uVar44 * 0xc;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0xc);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0x178) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          *(undefined4 *)(puVar31 + 1) = 0;
          *puVar31 = 0;
          lVar46 = *(long *)(param_1 + 0x178);
          *(long *)(param_1 + 0x178) = lVar46 + 0xc;
          *(undefined4 *)(lVar46 + 0x14) = 0;
          *(undefined8 *)(lVar46 + 0xc) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0xc);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x178) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar46 * -0x5555555555555555 - uVar37 != 0) {
    *(void **)(param_1 + 0x178) = (void *)((long)pvVar42 + uVar37 * 0xc);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar46 = 0;
LAB_7102a4900c:
    do {
      iVar23 = (int)lVar46;
      if (iVar23 < 0) {
LAB_7102a49044:
        puVar19 = (uint *)0x0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        puVar19 = (uint *)0x0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a49044;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          puVar19 = puVar18;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          pppplVar16 = (long ****)(ulong)uVar15;
          ppppbVar17 = (byte ****)
                       (*(long *)(puVar19 + 10) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar15 * 8);
          pppplVar40 = *(long *****)(*(long *)(puVar19 + 8) + (ulong)*(uint *)ppppbVar17 * 8);
          if (pppplVar40 == (long ****)0x63b7c6e5a) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppplVar40 < (long ****)0x63b7c6e5b) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x41700000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          pppplVar16 = (long ****)(ulong)uVar15;
          ppppbVar17 = (byte ****)
                       (*(long *)(puVar19 + 10) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar15 * 8);
          pppplVar40 = *(long *****)(*(long *)(puVar19 + 8) + (ulong)*(uint *)ppppbVar17 * 8);
          if (pppplVar40 == (long ****)0x8d8ad1dd1) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppplVar40 < (long ****)0x8d8ad1dd2) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          iVar34 = iVar34 >> 1;
          pppplVar16 = (long ****)
                       (*(long *)(puVar19 + 10) + (long)*(int *)(pbVar35 + 5) + (long)iVar34 * 8);
          ppppbVar17 = *(byte *****)(*(long *)(puVar19 + 8) + (ulong)*(uint *)pppplVar16 * 8);
          if (ppppbVar17 == (byte ****)0x8afaa2d47) {
            if (-1 < (int)*(uint *)((long)pppplVar16 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)pppplVar16 + 4);
            }
            break;
          }
          pppplVar16 = (long ****)(ulong)(iVar34 - 1U);
          uVar15 = iVar34 - 1U;
          if (ppppbVar17 < (byte ****)0x8afaa2d48) {
            iVar23 = iVar34 + 1;
            uVar15 = uVar9;
          }
          uVar9 = uVar15;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar25 = lVar46 * 0xc;
      lVar46 = lVar46 + 1;
      *(undefined4 *)(*plVar1 + lVar25 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar46) break;
        goto LAB_7102a4900c;
      }
    } while (lVar46 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    local_b8 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(local_b8 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_b8 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0xb5ae8328e) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a492f4;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a49300;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xb5ae8328f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    local_b8 = 0;
  }
  else {
LAB_7102a492f4:
    local_b8 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a49300:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0x188);
  puVar31 = *(undefined8 **)(param_1 + 400);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar46 = (long)pppplVar41 >> 5;
  plVar1 = (long *)(param_1 + 0x188);
  if ((ulong)(lVar46 * -0x5555555555555555) < uVar37) {
    uVar45 = uVar37 + lVar46 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x198) - (long)puVar31 >> 5) * -0x5555555555555555) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar25 = *(long *)(param_1 + 0x198) - (long)pvVar42 >> 5;
      if ((ulong)(lVar25 * -0x5555555555555555) < 0x155555555555555) {
        uVar28 = lVar25 * 0x5555555555555556;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a49440;
LAB_7102a494a4:
        lVar25 = 0;
      }
      else {
        uVar44 = 0x2aaaaaaaaaaaaaa;
LAB_7102a49440:
        ppplVar27 = (long ***)(uVar44 * 0x60);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,
                                pppbVar20);
        if (lVar25 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,
                                        param_7,pppbVar20), lVar25 != 0)) goto LAB_7102a494a8;
          }
          goto LAB_7102a494a4;
        }
      }
LAB_7102a494a8:
      pvVar11 = (void *)(lVar25 + lVar46 * 0x20);
      pppplVar16 = (long ****)(uVar45 * 0x60);
      memset(pvVar11,0,(size_t)pppplVar16);
      lVar46 = SUB168(SEXT816((long)pppplVar41) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar46 >> 4) - (lVar46 >> 0x3f)) * 0x60);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar16 = pppplVar41;
      }
      *(ulong *)(param_1 + 0x198) = lVar25 + uVar44 * 0x60;
      *(void **)(param_1 + 0x188) = pvVar11;
      *(ulong *)(param_1 + 400) = lVar25 + uVar37 * 0x60;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        puVar31[10] = 0;
        puVar31[0xb] = 0;
        uVar37 = uVar45 - 1;
        puVar31[8] = 0;
        puVar31[9] = 0;
        puVar31[6] = 0;
        puVar31[7] = 0;
        puVar31[4] = 0;
        puVar31[5] = 0;
        puVar31[2] = 0;
        puVar31[3] = 0;
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 400) + 0x60);
        *(undefined8 **)(param_1 + 400) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          puVar31[10] = 0;
          puVar31[0xb] = 0;
          uVar37 = uVar37 - 2;
          puVar31[8] = 0;
          puVar31[9] = 0;
          puVar31[6] = 0;
          puVar31[7] = 0;
          puVar31[4] = 0;
          puVar31[5] = 0;
          puVar31[2] = 0;
          puVar31[3] = 0;
          *puVar31 = 0;
          puVar31[1] = 0;
          lVar46 = *(long *)(param_1 + 400);
          *(long *)(param_1 + 400) = lVar46 + 0x60;
          *(undefined8 *)(lVar46 + 0xb0) = 0;
          *(undefined8 *)(lVar46 + 0xb8) = 0;
          *(undefined8 *)(lVar46 + 0xa0) = 0;
          *(undefined8 *)(lVar46 + 0xa8) = 0;
          *(undefined8 *)(lVar46 + 0x90) = 0;
          *(undefined8 *)(lVar46 + 0x98) = 0;
          *(undefined8 *)(lVar46 + 0x80) = 0;
          *(undefined8 *)(lVar46 + 0x88) = 0;
          *(undefined8 *)(lVar46 + 0x70) = 0;
          *(undefined8 *)(lVar46 + 0x78) = 0;
          *(undefined8 *)(lVar46 + 0x60) = 0;
          *(undefined8 *)(lVar46 + 0x68) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 400) + 0x60);
          *(undefined8 **)(param_1 + 400) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar46 * -0x5555555555555555 - uVar37 != 0) {
    *(void **)(param_1 + 400) = (void *)((long)pvVar42 + uVar37 * 0x60);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar46 = 0;
    do {
      iVar23 = (int)lVar46;
      if (iVar23 < 0) {
LAB_7102a49654:
        lVar25 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        lVar25 = 0;
        pbVar35 = &DAT_7104742dbb;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a49654;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar25 = local_b8;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x5ab8a01a0) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x5ab8a01a1) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x41d00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x60) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xaacc29da4) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xaacc29da5) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar22 = (ushort)pbVar12[1];
        break;
      case 2:
        uVar22 = (ushort)(char)pbVar12[1];
        break;
      case 4:
        uVar22 = *(ushort *)(pbVar12 + 1);
        break;
      case 5:
        uVar22 = *(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar22 = (ushort)*(undefined4 *)(pbVar12 + 1);
        break;
      default:
        uVar22 = 0;
      }
      *(ushort *)(*plVar1 + lVar46 * 0x60 + 4) = uVar22;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x61b6e485b) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x61b6e485c) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0xf;
      }
      *(uint *)(*plVar1 + lVar46 * 0x60 + 8) = uVar9;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x50f345ac1) {
            uVar9 = puVar18[1];
            if ((int)uVar9 < 0) {
              pbVar12 = &DAT_7104742dbb;
            }
            else {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x50f345ac2) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0x46;
      }
      *(uint *)(*plVar1 + lVar46 * 0x60 + 0xc) = uVar9;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x570e5c534) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x570e5c535) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(uint *)(*plVar1 + lVar46 * 0x60 + 0x10) = uVar9;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x5d405f1b3) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x5d405f1b4) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0x78;
      }
      *(uint *)(*plVar1 + lVar46 * 0x60 + 0x14) = uVar9;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x10f6d7f433) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x10f6d7f434) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0x78;
      }
      *(uint *)(*plVar1 + lVar46 * 0x60 + 0x18) = uVar9;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x4fd3943f8) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x4fd3943f9) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x60 + 0x1c) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xa381ad7fa) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xa381ad7fb) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x3f800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x60 + 0x20) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xa3f786bac) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xa3f786bad) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x3f000000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar46 * 0x60 + 0x24) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x62017154e) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x62017154f) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x28) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xd9222db56) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xd9222db57) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x29) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x6b8f5a811) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x6b8f5a812) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x2a) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xa9f7fb291) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xa9f7fb292) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x2b) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x7e0a07450) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x7e0a07451) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x2c) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x79d16c4f9) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x79d16c4fa) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x2d) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x9a95c5580) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x9a95c5581) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x2e) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x50f26fef6) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x50f26fef7) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x2f) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xb4a79a6af) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xb4a79a6b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x30) = uVar9 != 0;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x4047e2314) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4a714;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x4047e2315) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4a714:
      if (*pbVar12 == 9) {
        uVar30 = *(undefined8 *)(*(long *)(lVar29 + 0x20) + (long)*(int *)(pbVar12 + 1) * 8);
      }
      else {
        uVar30 = 0;
      }
      *(undefined8 *)(*plVar1 + lVar46 * 0x60 + 0x38) = uVar30;
      bVar43 = *pbVar35;
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xb8d17072a) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4a7c4;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xb8d17072b) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4a7c4:
      puVar13 = FUN_7102a54c50(lVar29,pbVar12);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*plVar1 + lVar46 * 0x60 + 0x40) = (int)((ulong)puVar13 >> 0x20);
        bVar43 = *pbVar35;
      }
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xa4e0b598a) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4a870;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xa4e0b598b) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4a870:
      puVar13 = FUN_7102a54c50(lVar29,pbVar12);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*plVar1 + lVar46 * 0x60 + 0x44) = (int)((ulong)puVar13 >> 0x20);
        bVar43 = *pbVar35;
      }
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x89ee54ab3) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4a91c;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x89ee54ab4) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4a91c:
      puVar13 = FUN_7102a54c50(lVar29,pbVar12);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*plVar1 + lVar46 * 0x60 + 0x48) = (int)((ulong)puVar13 >> 0x20);
        bVar43 = *pbVar35;
      }
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xfdce7c9a8) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4a9c8;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xfdce7c9a9) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4a9c8:
      puVar13 = FUN_7102a54c50(lVar29,pbVar12);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*plVar1 + lVar46 * 0x60 + 0x4c) = (int)((ulong)puVar13 >> 0x20);
        bVar43 = *pbVar35;
      }
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x10d899e8e6) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4aa74;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x10d899e8e7) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4aa74:
      puVar13 = FUN_7102a54c50(lVar29,pbVar12);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*plVar1 + lVar46 * 0x60 + 0x50) = (int)((ulong)puVar13 >> 0x20);
        bVar43 = *pbVar35;
      }
      pbVar12 = &DAT_7104742dbb;
      if ((bVar43 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0x99c2d4a72) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x99c2d4a73) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 1;
      }
      *(bool *)(*plVar1 + lVar46 * 0x60 + 0x54) = uVar9 != 0;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xb84176677) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar35 = pbVar35 + (int)uVar9;
              goto LAB_7102a4ac0c;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xb84176678) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar25 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7102a4ac0c:
      puVar13 = FUN_7102a54c50(lVar25,pbVar35);
      if (((ulong)puVar13 & 0xff) != 0) {
        *(int *)(*plVar1 + lVar46 * 0x60 + 0x58) = (int)((ulong)puVar13 >> 0x20);
      }
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      pppplVar16 = (long ****)0xa9f7fb291;
      ppppbVar17 = (byte ****)0xa3f786bac;
      pppplVar40 = (long ****)0xa381ad7fa;
      puVar18 = (uint *)0x9a95c5580;
      param_7 = (long ****)0x7e0a07450;
      pppbVar20 = (byte ***)0x79d16c4f9;
      if (uVar9 - 0xb < 2) {
        iVar23 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar23 = 0;
      }
    } while (lVar46 < iVar23);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a4adc8:
      lVar46 = 0;
      pbVar38 = &DAT_7104742dbb;
    }
    else {
      lVar46 = *param_2;
      iVar34 = 0;
      pbVar38 = &DAT_7104742dbb;
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
        ;
        uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
        if (uVar37 == 0xf6dfa32f6) {
          uVar9 = puVar19[1];
          if ((int)uVar9 < 0) goto LAB_7102a4adc8;
          pbVar38 = (byte *)(pcVar24 + (int)uVar9);
          goto LAB_7102a4add4;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0xf6dfa32f7) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
      lVar46 = 0;
    }
  }
  else {
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4add4:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  pvVar42 = *(void **)(param_1 + 0x1a0);
  puVar31 = *(undefined8 **)(param_1 + 0x1a8);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar25 = (long)pppplVar41 >> 2;
  plVar1 = (long *)(param_1 + 0x1a0);
  if ((ulong)(lVar25 * -0x5555555555555555) < uVar37) {
    uVar45 = uVar37 + lVar25 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x1b0) - (long)puVar31 >> 2) * -0x5555555555555555) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar29 = *(long *)(param_1 + 0x1b0) - (long)pvVar42 >> 2;
      if ((ulong)(lVar29 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar28 = lVar29 * 0x5555555555555556;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a4aef4;
        lVar29 = 0;
      }
      else {
        uVar44 = 0x1555555555555555;
LAB_7102a4aef4:
        ppplVar27 = (long ***)(uVar44 * 0xc);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,
                                pppbVar20);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,
                                        param_7,pppbVar20), lVar29 != 0)) goto LAB_7102a4af64;
          }
          lVar29 = 0;
        }
      }
LAB_7102a4af64:
      pvVar11 = (void *)(lVar29 + lVar25 * 4);
      pppplVar16 = (long ****)(uVar45 * 0xc);
      memset(pvVar11,0,(size_t)pppplVar16);
      lVar25 = SUB168(SEXT816((long)pppplVar41) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar25 >> 1) - (lVar25 >> 0x3f)) * 0xc);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar16 = pppplVar41;
      }
      *(ulong *)(param_1 + 0x1b0) = lVar29 + uVar44 * 0xc;
      *(void **)(param_1 + 0x1a0) = pvVar11;
      *(ulong *)(param_1 + 0x1a8) = lVar29 + uVar37 * 0xc;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x1a8) + 0xc);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0x1a8) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          *(undefined4 *)(puVar31 + 1) = 0;
          *puVar31 = 0;
          lVar25 = *(long *)(param_1 + 0x1a8);
          *(long *)(param_1 + 0x1a8) = lVar25 + 0xc;
          *(undefined4 *)(lVar25 + 0x14) = 0;
          *(undefined8 *)(lVar25 + 0xc) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x1a8) + 0xc);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x1a8) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar25 * -0x5555555555555555 - uVar37 != 0) {
    *(void **)(param_1 + 0x1a8) = (void *)((long)pvVar42 + uVar37 * 0xc);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4b040:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4b078:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4b078;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          pppplVar16 = (long ****)(ulong)uVar15;
          ppppbVar17 = (byte ****)
                       (*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar15 * 8);
          pppplVar40 = *(long *****)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)ppppbVar17 * 8);
          if (pppplVar40 == (long ****)0x3fa615f8f) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppplVar40 < (long ****)0x3fa615f90) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          pppplVar16 = (long ****)(ulong)uVar15;
          ppppbVar17 = (byte ****)
                       (*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar15 * 8);
          pppplVar40 = *(long *****)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)ppppbVar17 * 8);
          if (pppplVar40 == (long ****)0x5d09aee21) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppplVar40 < (long ****)0x5d09aee22) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x42c80000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          iVar34 = iVar34 >> 1;
          pppplVar16 = (long ****)
                       (*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar34 * 8);
          ppppbVar17 = *(byte *****)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)pppplVar16 * 8);
          if (ppppbVar17 == (byte ****)0x49e36cab4) {
            if (-1 < (int)*(uint *)((long)pppplVar16 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)pppplVar16 + 4);
            }
            break;
          }
          pppplVar16 = (long ****)(ulong)(iVar34 - 1U);
          uVar15 = iVar34 - 1U;
          if (ppppbVar17 < (byte ****)0x49e36cab5) {
            iVar23 = iVar34 + 1;
            uVar15 = uVar9;
          }
          uVar9 = uVar15;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x437f0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4b040;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    local_a0 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(local_a0 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_a0 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1913241381) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4b328;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4b334;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1913241382) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    local_a0 = 0;
  }
  else {
LAB_7102a4b328:
    local_a0 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4b334:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x1b8);
  puVar31 = *(undefined8 **)(param_1 + 0x1c0);
  uVar37 = (ulong)iVar23;
  lVar46 = (long)puVar31 - (long)puVar4 >> 3;
  plVar1 = (long *)(param_1 + 0x1b8);
  if ((ulong)(lVar46 * -0x3333333333333333) < uVar37) {
    uVar45 = uVar37 + lVar46 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x1c8) - (long)puVar31 >> 3) * -0x3333333333333333) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar25 = *(long *)(param_1 + 0x1c8) - (long)puVar4 >> 3;
      if ((ulong)(lVar25 * -0x3333333333333333) < 0x333333333333333) {
        uVar28 = lVar25 * -0x6666666666666666;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a4b48c;
        lVar25 = 0;
      }
      else {
        uVar44 = 0x666666666666666;
LAB_7102a4b48c:
        ppplVar27 = (long ***)(uVar44 * 0x28);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,
                                pppbVar20);
        if (lVar25 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar25 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,
                                        param_7,pppbVar20), lVar25 != 0)) goto LAB_7102a4b4fc;
          }
          lVar25 = 0;
        }
      }
LAB_7102a4b4fc:
      pvVar42 = (void *)(lVar25 + lVar46 * 8);
      lVar46 = lVar25 + uVar44 * 0x28;
      pppplVar16 = (long ****)(uVar45 * 0x28);
      memset(pvVar42,0,(size_t)pppplVar16);
      lVar25 = lVar25 + uVar37 * 0x28;
      if (puVar31 == puVar4) {
        *(void **)(param_1 + 0x1b8) = pvVar42;
        *(long *)(param_1 + 0x1c0) = lVar25;
        *(long *)(param_1 + 0x1c8) = lVar46;
      }
      else {
        lVar29 = 0;
        do {
          lVar33 = lVar29 + -0x28;
          *(undefined8 *)((long)pvVar42 + lVar29 + -0x28) =
               *(undefined8 *)((long)puVar31 + lVar29 + -0x28);
          uVar30 = *(undefined8 *)((long)puVar31 + lVar29 + -0x20);
          uVar36 = *(undefined8 *)((long)puVar31 + lVar29 + -0x10);
          *(undefined8 *)((long)pvVar42 + lVar29 + -0x18) =
               *(undefined8 *)((long)puVar31 + lVar29 + -0x18);
          *(undefined8 *)((long)pvVar42 + lVar29 + -0x10) = uVar36;
          *(undefined8 *)((long)pvVar42 + lVar29 + -0x20) = uVar30;
          *(undefined8 *)((long)puVar31 + lVar29 + -0x18) = 0;
          *(undefined8 *)((long)puVar31 + lVar29 + -0x10) = 0;
          *(undefined8 *)((long)puVar31 + lVar29 + -0x20) = 0;
          *(undefined4 *)((long)pvVar42 + lVar29 + -8) =
               *(undefined4 *)((long)puVar31 + lVar29 + -8);
          lVar29 = lVar33;
        } while ((long)puVar4 - (long)puVar31 != lVar33);
        puVar4 = *(undefined8 **)(param_1 + 0x1b8);
        puVar31 = *(undefined8 **)(param_1 + 0x1c0);
        *(long *)(param_1 + 0x1b8) = (long)pvVar42 + lVar33;
        *(long *)(param_1 + 0x1c0) = lVar25;
        *(long *)(param_1 + 0x1c8) = lVar46;
        while (puVar6 = puVar31, puVar6 != puVar4) {
          puVar31 = puVar6 + -5;
          if (((*(byte *)(puVar6 + -4) & 1) != 0) && (puVar6[-2] != 0)) {
            FUN_710392eb40(puVar6[-2]);
          }
        }
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar4);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        puVar31[3] = 0;
        puVar31[4] = 0;
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31[2] = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x28);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0x1c0) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          puVar31[3] = 0;
          puVar31[4] = 0;
          uVar37 = uVar37 - 2;
          puVar31[1] = 0;
          puVar31[2] = 0;
          *puVar31 = 0;
          lVar46 = *(long *)(param_1 + 0x1c0);
          *(long *)(param_1 + 0x1c0) = lVar46 + 0x28;
          *(undefined8 *)(lVar46 + 0x40) = 0;
          *(undefined8 *)(lVar46 + 0x48) = 0;
          *(undefined8 *)(lVar46 + 0x28) = 0;
          *(undefined8 *)(lVar46 + 0x30) = 0;
          *(undefined8 *)(lVar46 + 0x38) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x28);
          *(undefined8 **)(param_1 + 0x1c0) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar46 * -0x3333333333333333 - uVar37 != 0) {
    while (puVar6 = puVar31, puVar4 + uVar37 * 5 != puVar6) {
      puVar31 = puVar6 + -5;
      if (((*(byte *)(puVar6 + -4) & 1) != 0) && (puVar6[-2] != 0)) {
        FUN_710392eb40(puVar6[-2]);
      }
    }
    *(undefined8 **)(param_1 + 0x1c0) = puVar4 + uVar37 * 5;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar46 = 0;
LAB_7102a4b610:
    do {
      iVar23 = (int)lVar46;
      if (iVar23 < 0) {
LAB_7102a4b64c:
        lVar25 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar25 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4b64c;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar25 = local_a0;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xfafc7d15c) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
              lVar29 = lVar25;
              goto LAB_7102a4b6d4;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xfafc7d15d) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      lVar29 = 0;
      pbVar12 = &DAT_7104742dbb;
LAB_7102a4b6d4:
      if (*pbVar12 == 9) {
        uVar30 = *(undefined8 *)(*(long *)(lVar29 + 0x20) + (long)*(int *)(pbVar12 + 1) * 8);
      }
      else {
        uVar30 = 0;
      }
      *(undefined8 *)(*plVar1 + lVar46 * 0x28) = uVar30;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0xd0a4b1333) break;
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xd0a4b1334) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      std::string::assign((char *)(*plVar1 + lVar46 * 0x28 + 8));
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar25 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar25 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x48cde5729) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x48cde572a) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 1;
      }
      lVar25 = lVar46 * 0x28;
      lVar46 = lVar46 + 1;
      *(uint *)(*plVar1 + lVar25 + 0x20) = uVar9;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar46) break;
        goto LAB_7102a4b610;
      }
    } while (lVar46 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a4b994:
      pcVar32 = "";
    }
    else {
      iVar34 = 0;
      pcVar32 = "";
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                          (long)iVar2 * 8);
        uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
        if (uVar37 == 0x1e52cca655) {
          uVar9 = puVar19[1];
          if ((int)uVar9 < 0) goto LAB_7102a4b994;
          pcVar32 = pcVar24 + (int)uVar9;
          break;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0x1e52cca656) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
    }
  }
  else {
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x1d0) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1e6ec1990c) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4ba50;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1e6ec1990d) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4ba50:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44480000;
  }
  *(undefined4 *)(param_1 + 0x1d4) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1e5276c2b9) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4bb0c;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1e5276c2ba) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4bb0c:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x452f0000;
  }
  *(undefined4 *)(param_1 + 0x1d8) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1e6e7bfde0) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4bbc8;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1e6e7bfde1) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4bbc8:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x45610000;
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x2343cae0a3) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4bc84;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x2343cae0a4) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4bc84:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x1e8) - *(long *)(param_1 + 0x1e0) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x1e0),uVar37 - uVar45,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e0) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0x42fa0000;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x1e0) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x24db75b781) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4be28;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x24db75b782) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4be28:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x200) - *(long *)(param_1 + 0x1f8) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x1f8),uVar37 - uVar45,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x200) = *(long *)(param_1 + 0x1f8) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0x432a0000;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a4bfe8:
      lVar46 = 0;
      pcVar32 = "";
    }
    else {
      lVar46 = *param_2;
      iVar34 = 0;
      pcVar32 = "";
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
        ;
        uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
        if (uVar37 == 0x16fb3fd923) {
          uVar9 = puVar19[1];
          if ((int)uVar9 < 0) goto LAB_7102a4bfe8;
          pcVar32 = pcVar24 + (int)uVar9;
          goto LAB_7102a4bff4;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0x16fb3fd924) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
      lVar46 = 0;
    }
  }
  else {
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a4bff4:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x569ff9e1b) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c080;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x569ff9e1c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c080:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x430e0000;
  }
  *(undefined4 *)(param_1 + 0x210) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x51ef8ae8d) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c134;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x51ef8ae8e) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c134:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x42060000;
  }
  *(undefined4 *)(param_1 + 0x214) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x587f1ff37) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c1e8;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x587f1ff38) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c1e8:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0xc2860000;
  }
  *(undefined4 *)(param_1 + 0x218) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x736cfcf24) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c29c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x736cfcf25) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c29c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x3f4ccccd;
  }
  *(undefined4 *)(param_1 + 0x21c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x741c8ffb2) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c350;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x741c8ffb3) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c350:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x3f333333;
  }
  *(undefined4 *)(param_1 + 0x220) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x7d8c1ae08) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c404;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x7d8c1ae09) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c404:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x3f266666;
  }
  *(undefined4 *)(param_1 + 0x224) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x5f87ebad2) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c4b8;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x5f87ebad3) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c4b8:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43110000;
  }
  *(undefined4 *)(param_1 + 0x228) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0xc3f09e55d) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c56c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xc3f09e55e) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c56c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43700000;
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0xda78cc326) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c620;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xda78cc327) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c620:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43af0000;
  }
  *(undefined4 *)(param_1 + 0x230) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x14ade09a10) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c6d0;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x14ade09a11) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4c6d0:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43af0000;
  }
  *(undefined4 *)(param_1 + 0x234) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) +
                         (ulong)*(uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                                         (long)iVar2 * 8) * 8);
      if (uVar37 == 0x136dc13a50) break;
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x136dc13a51) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  std::string::assign((char *)(param_1 + 0x238));
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1437c32a48) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4c85c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4c868;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1437c32a49) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4c85c:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4c868:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4;
  plVar1 = (long *)(param_1 + 0x250);
  if (uVar45 < uVar37) {
    FUN_7102a53d10(plVar1,uVar37 - uVar45,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,pppbVar20
                  );
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 600) = *(long *)(param_1 + 0x250) + uVar37 * 0x10;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4c928:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4c960:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4c960;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xcb3f38c90) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xcb3f38c91) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xc84126b03) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xc84126b04) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xdb1adc914) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xdb1adc915) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42080000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xd864c2e87) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xd864c2e88) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42080000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0x10;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0xc) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4c928;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) +
                         (ulong)*(uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                                         (long)iVar2 * 8) * 8);
      if (uVar37 == 0x138ea26d8b) break;
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x138ea26d8c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  std::string::assign((char *)(param_1 + 0x268));
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x11fae83039) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4cd7c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4cd88;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x11fae8303a) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4cd7c:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4cd88:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x288) - *(long *)(param_1 + 0x280) >> 4;
  plVar1 = (long *)(param_1 + 0x280);
  if (uVar45 < uVar37) {
    FUN_7102a53d10(plVar1,uVar37 - uVar45,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,pppbVar20
                  );
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x288) = *(long *)(param_1 + 0x280) + uVar37 * 0x10;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4ce30:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4ce68:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4ce68;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xcb3f38c90) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xcb3f38c91) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42820000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xc84126b03) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xc84126b04) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xdb1adc914) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xdb1adc915) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42820000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xd864c2e87) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xd864c2e88) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0x10;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0xc) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4ce30;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x14e4018139) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4d1b0;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x14e401813a) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4d1b0:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 0;
  }
  *(bool *)(param_1 + 0x298) = uVar9 != 0;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x12d13d7fbd) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4d2ac;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4d2b8;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x12d13d7fbe) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4d2ac:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4d2b8:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  puVar31 = *(undefined8 **)(param_1 + 0x2a8);
  pvVar42 = *(void **)(param_1 + 0x2a0);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar25 = (long)pppplVar41 >> 2;
  plVar1 = (long *)(param_1 + 0x2a0);
  if ((ulong)(lVar25 * -0x3333333333333333) < uVar37) {
    uVar45 = uVar37 + lVar25 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x2b0) - (long)puVar31 >> 2) * -0x3333333333333333) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar29 = *(long *)(param_1 + 0x2b0) - (long)pvVar42 >> 2;
      if ((ulong)(lVar29 * -0x3333333333333333) < 0x666666666666666) {
        uVar28 = lVar29 * -0x6666666666666666;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a4d3f0;
        lVar29 = 0;
      }
      else {
        uVar44 = 0xccccccccccccccc;
LAB_7102a4d3f0:
        ppplVar27 = (long ***)(uVar44 * 0x14);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,
                                pppbVar20);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,
                                        param_7,pppbVar20), lVar29 != 0)) goto LAB_7102a4d460;
          }
          lVar29 = 0;
        }
      }
LAB_7102a4d460:
      pvVar11 = (void *)(lVar29 + lVar25 * 4);
      pppplVar16 = (long ****)(uVar45 * 0x14);
      memset(pvVar11,0,(size_t)pppplVar16);
      lVar25 = SUB168(SEXT816((long)pppplVar41) * SEXT816(-0x6666666666666667),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar25 >> 3) - (lVar25 >> 0x3f)) * 0x14);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar16 = pppplVar41;
      }
      *(void **)(param_1 + 0x2a0) = pvVar11;
      *(ulong *)(param_1 + 0x2a8) = lVar29 + uVar37 * 0x14;
      *(ulong *)(param_1 + 0x2b0) = lVar29 + uVar44 * 0x14;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        *(undefined4 *)(puVar31 + 2) = 0;
        *puVar31 = 0;
        puVar31[1] = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x2a8) + 0x14);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0x2a8) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          *(undefined4 *)(puVar31 + 2) = 0;
          *puVar31 = 0;
          puVar31[1] = 0;
          lVar25 = *(long *)(param_1 + 0x2a8);
          *(long *)(param_1 + 0x2a8) = lVar25 + 0x14;
          *(undefined4 *)(lVar25 + 0x24) = 0;
          *(undefined8 *)(lVar25 + 0x1c) = 0;
          *(undefined8 *)(lVar25 + 0x14) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x2a8) + 0x14);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x2a8) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar25 * -0x3333333333333333 - uVar37 != 0) {
    *(void **)(param_1 + 0x2a8) = (void *)((long)pvVar42 + uVar37 * 0x14);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4d570:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4d5a8:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4d5a8;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar40 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar40 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x16c09ff9d) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x16c09ff9e) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x3eb33333;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x14) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar40 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar40 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x101d41b76) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x101d41b77) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x3eb33333;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x14 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar40 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar40 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x171beeff9) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x171beeffa) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x3f000000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x14 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar40 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar40 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0xe38ff8775) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0xe38ff8776) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      switch(*pbVar12) {
      case 1:
      case 3:
        uVar9 = (uint)pbVar12[1];
        break;
      case 2:
        uVar9 = (uint)(char)pbVar12[1];
        break;
      case 4:
        uVar9 = (uint)*(short *)(pbVar12 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)(pbVar12 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)(pbVar12 + 1);
        break;
      default:
        uVar9 = 0;
      }
      pppplVar16 = (long ****)(*plVar1 + lVar25 * 0x14);
      *(bool *)((long)pppplVar16 + 0xc) = uVar9 != 0;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        pppplVar16 = (long ****)0x0;
        do {
          uVar15 = (uint)pppplVar16;
          iVar23 = uVar9 + uVar15;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar3 = iVar23 >> 1;
          pppplVar40 = (long ****)(ulong)uVar3;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)(int)uVar3 * 8);
          param_7 = (long ****)ppppbVar17[*puVar18];
          if (param_7 == (long ****)0x5d0e0396a) {
            if (-1 < (int)puVar18[1]) {
              pbVar12 = pbVar35 + (int)puVar18[1];
            }
            break;
          }
          puVar18 = (uint *)(ulong)(uVar3 - 1);
          uVar5 = uVar3 - 1;
          if (param_7 < (long ****)0x5d0e0396b) {
            uVar15 = uVar3 + 1;
            uVar5 = uVar9;
          }
          uVar9 = uVar5;
          pppplVar16 = (long ****)(ulong)uVar15;
        } while ((int)uVar15 <= (int)uVar9);
      }
      uVar47 = 0x3f800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0x14;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0x10) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4d570;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a4d9f0:
      pbVar38 = &DAT_7104742dbb;
    }
    else {
      iVar34 = 0;
      pbVar38 = &DAT_7104742dbb;
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                          (long)iVar2 * 8);
        uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
        if (uVar37 == 0x162c079b0e) {
          uVar9 = puVar19[1];
          if ((int)uVar9 < 0) goto LAB_7102a4d9f0;
          pbVar38 = (byte *)(pcVar24 + (int)uVar9);
          break;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0x162c079b0f) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
    }
  }
  else {
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x2c0) - *(long *)(param_1 + 0x2b8) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x2b8),uVar37 - uVar45,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2b8) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0x41a00000;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x2b8) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x13b7ece565) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4db98;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4dba4;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x13b7ece566) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4db98:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4dba4:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x2d8) - *(long *)(param_1 + 0x2d0) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x2d0);
  if (uVar45 < uVar37) {
    FUN_7102a53ee0(plVar1,uVar37 + lVar25 * 0x5555555555555555,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x2d8) = *(long *)(param_1 + 0x2d0) + uVar37 * 0xc;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4dc64:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4dc9c:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4dc9c;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc1500000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x41200000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2aa0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4dc64;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x142775c083) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4df48;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4df54;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x142775c084) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4df48:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4df54:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x2f0) - *(long *)(param_1 + 0x2e8) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x2e8);
  if (uVar45 < uVar37) {
    FUN_7102a53ee0(plVar1,uVar37 + lVar25 * 0x5555555555555555,(long ****)0x162d277af,ppppbVar17,
                   pppplVar40,puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x2f0) = *(long *)(param_1 + 0x2e8) + uVar37 * 0xc;
  }
  pppplVar16 = (long ****)0x162d277af;
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4e00c:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4e044:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4e044;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x420c0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4e00c;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x12c746d6d8) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4e2f0;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4e2fc;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x12c746d6d9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4e2f0:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4e2fc:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x308) - *(long *)(param_1 + 0x300) >> 3;
  plVar1 = (long *)(param_1 + 0x300);
  if (uVar45 < uVar37) {
    FUN_7102a540f0(plVar1,uVar37 - uVar45,(long ****)0x162d277af,ppppbVar17,pppplVar40,puVar18,
                   param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x308) = *(long *)(param_1 + 0x300) + uVar37 * 8;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4e3a4:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4e3dc:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4e3dc;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          pppplVar16 = *(long *****)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (pppplVar16 == (long ****)0x795f45130) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (pppplVar16 < (long ****)0x795f45131) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc3fa0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x5602a5479) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x5602a547a) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc1a80000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 8;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4e3a4;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x10e89e04a6) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4e5e8;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4e5f4;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x10e89e04a7) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4e5e8:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4e5f4:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 800) - *(long *)(param_1 + 0x318) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x318);
  if (uVar45 < uVar37) {
    FUN_7102a53ee0(plVar1,uVar37 + lVar25 * 0x5555555555555555,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 800) = *(long *)(param_1 + 0x318) + uVar37 * 0xc;
  }
  pppplVar16 = (long ****)0x162d277af;
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4e6b4:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4e6ec:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4e6ec;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x40a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4e6b4;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    ppppbVar17 = (byte ****)*param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)((long)ppppbVar17[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar24 + 5));
      if (ppppbVar17[4][*puVar19] == (byte **)0xbbf891e8e) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4e998;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4e9a4;
      }
      iVar7 = iVar2 + -1;
      if (ppppbVar17[4][*puVar19] < (byte **)0xbbf891e8f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    ppppbVar17 = (byte ****)0x0;
  }
  else {
LAB_7102a4e998:
    ppppbVar17 = (byte ****)0x0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4e9a4:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar45 = (ulong)iVar23;
  puVar31 = *(undefined8 **)(param_1 + 0x338);
  pvVar42 = *(void **)(param_1 + 0x330);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  uVar37 = (long)pppplVar41 >> 3;
  if (uVar37 < uVar45) {
    uVar44 = uVar45 - uVar37;
    if ((ulong)(*(long *)(param_1 + 0x340) - (long)puVar31 >> 3) < uVar44) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar46 = *(long *)(param_1 + 0x340) - (long)pvVar42;
      if ((ulong)(lVar46 >> 3) < 0xfffffffffffffff) {
        uVar26 = lVar46 >> 2;
        uVar28 = uVar45;
        if (uVar45 <= uVar26) {
          uVar28 = uVar26;
        }
        if (uVar28 != 0) {
          if (uVar28 >> 0x3d != 0) goto LAB_7102a50cd0;
          goto LAB_7102a4ea9c;
        }
        uVar28 = 0;
        pvVar11 = (void *)0x0;
      }
      else {
        uVar28 = 0x1fffffffffffffff;
LAB_7102a4ea9c:
        ppplVar27 = (long ***)(uVar28 * 8);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        ppppbVar14 = ppppbVar17;
        pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,(long ****)0x162d277af,ppppbVar17,pppplVar40
                                         ,puVar18,param_7,pppbVar20);
        if (pvVar11 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar26 & 1) != 0) &&
               (pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar14,pppplVar40,
                                                 puVar18,param_7,pppbVar20), pvVar11 != (void *)0x0)
               ) goto LAB_7102a4eb08;
          }
          pvVar11 = (void *)0x0;
        }
      }
LAB_7102a4eb08:
      pppplVar16 = (long ****)(uVar44 * 8);
      memset((void *)((long)pvVar11 + uVar37 * 8),0,(size_t)pppplVar16);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar16 = pppplVar41;
      }
      *(void **)(param_1 + 0x340) = (void *)((long)pvVar11 + uVar28 * 8);
      *(void **)(param_1 + 0x330) = pvVar11;
      *(void **)(param_1 + 0x338) = (void *)((long)pvVar11 + uVar45 * 8);
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar44;
      if ((uVar44 & 1) != 0) {
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x338) + 8);
        uVar37 = uVar44 - 1;
        *(undefined8 **)(param_1 + 0x338) = puVar31;
      }
      if (uVar44 != 1) {
        do {
          *puVar31 = 0;
          lVar46 = *(long *)(param_1 + 0x338);
          *(long *)(param_1 + 0x338) = lVar46 + 8;
          *(undefined8 *)(lVar46 + 8) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x338) + 8);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x338) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (uVar37 != uVar45) {
    *(void **)(param_1 + 0x338) = (void *)((long)pvVar42 + uVar45 * 8);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar46 = 0;
LAB_7102a4ebb0:
    do {
      iVar23 = (int)lVar46;
      if (iVar23 < 0) {
LAB_7102a4ebe8:
        ppppbVar14 = (byte ****)0x0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        ppppbVar14 = (byte ****)0x0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4ebe8;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          ppppbVar14 = ppppbVar17;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)((long)ppppbVar14[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar35 + 5));
          pppplVar16 = (long ****)ppppbVar14[4][*puVar19];
          if (pppplVar16 == (long ****)0xf983c32d8) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (pppplVar16 < (long ****)0xf983c32d9) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x41f00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x330) + lVar46 * 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)((long)ppppbVar14[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar35 + 5));
          if (ppppbVar14[4][*puVar19] == (byte **)0x104559a2b6) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (ppppbVar14[4][*puVar19] < (byte **)0x104559a2b7) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x41f00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar25 = lVar46 * 8;
      lVar46 = lVar46 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x330) + lVar25 + 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar46) break;
        goto LAB_7102a4ebb0;
      }
    } while (lVar46 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x14a65c1990) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4edf0;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x14a65c1991) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4edf0:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x43340000;
  }
  *(undefined4 *)(param_1 + 0x348) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x197fe37f1b) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4eeac;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x197fe37f1c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4eeac:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0x34c) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x170dbf2cd0) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4ef68;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x170dbf2cd1) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4ef68:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0x350) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1635e27a4d) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f020;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1635e27a4e) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4f020:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0x354) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1300f74696) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f0dc;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4f0e8;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1300f74697) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4f0dc:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4f0e8:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  puVar31 = *(undefined8 **)(param_1 + 0x360);
  pvVar42 = *(void **)(param_1 + 0x358);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar25 = (long)pppplVar41 >> 2;
  plVar1 = (long *)(param_1 + 0x358);
  if ((ulong)(lVar25 * -0x5555555555555555) < uVar37) {
    uVar45 = uVar37 + lVar25 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x368) - (long)puVar31 >> 2) * -0x5555555555555555) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar29 = *(long *)(param_1 + 0x368) - (long)pvVar42 >> 2;
      if ((ulong)(lVar29 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar28 = lVar29 * 0x5555555555555556;
        uVar44 = uVar37;
        if (uVar37 <= uVar28) {
          uVar44 = uVar28;
        }
        if (uVar44 != 0) goto LAB_7102a4f21c;
        lVar29 = 0;
      }
      else {
        uVar44 = 0x1555555555555555;
LAB_7102a4f21c:
        ppplVar27 = (long ***)(uVar44 * 0xc);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,param_7,
                                pppbVar20);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar16 = &local_90;
            local_90 = ppplVar27;
            uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar28 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar16,ppppbVar17,pppplVar40,puVar18,
                                        param_7,pppbVar20), lVar29 != 0)) goto LAB_7102a4f290;
          }
          lVar29 = 0;
        }
      }
LAB_7102a4f290:
      pvVar11 = (void *)(lVar29 + lVar25 * 4);
      pppplVar16 = (long ****)(uVar45 * 0xc);
      memset(pvVar11,0,(size_t)pppplVar16);
      lVar25 = SUB168(SEXT816((long)pppplVar41) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar25 >> 1) - (lVar25 >> 0x3f)) * 0xc);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar16 = pppplVar41;
      }
      *(void **)(param_1 + 0x358) = pvVar11;
      *(ulong *)(param_1 + 0x360) = lVar29 + uVar37 * 0xc;
      *(ulong *)(param_1 + 0x368) = lVar29 + uVar44 * 0xc;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x360) + 0xc);
        uVar37 = uVar45 - 1;
        *(undefined8 **)(param_1 + 0x360) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          *(undefined4 *)(puVar31 + 1) = 0;
          *puVar31 = 0;
          lVar25 = *(long *)(param_1 + 0x360);
          *(long *)(param_1 + 0x360) = lVar25 + 0xc;
          *(undefined4 *)(lVar25 + 0x14) = 0;
          *(undefined8 *)(lVar25 + 0xc) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x360) + 0xc);
          uVar37 = uVar37 - 2;
          *(undefined8 **)(param_1 + 0x360) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar25 * -0x5555555555555555 - uVar37 != 0) {
    *(void **)(param_1 + 0x360) = (void *)((long)pvVar42 + uVar37 * 0xc);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4f370:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4f3a8:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4f3a8;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          pppplVar16 = (long ****)(ulong)uVar15;
          ppppbVar17 = (byte ****)
                       (*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar15 * 8);
          pppplVar40 = *(long *****)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)ppppbVar17 * 8);
          if (pppplVar40 == (long ****)0x1092966ae2) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppplVar40 < (long ****)0x1092966ae3) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x41c80000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          pppplVar16 = (long ****)(ulong)uVar15;
          ppppbVar17 = (byte ****)
                       (*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar15 * 8);
          pppplVar40 = *(long *****)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)ppppbVar17 * 8);
          if (pppplVar40 == (long ****)0x10e508b812) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppplVar40 < (long ****)0x10e508b813) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x41a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          iVar34 = iVar34 >> 1;
          pppplVar16 = (long ****)
                       (*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar34 * 8);
          ppppbVar17 = *(byte *****)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)pppplVar16 * 8);
          if (ppppbVar17 == (byte ****)0xf2e76c1cc) {
            if (-1 < (int)*(uint *)((long)pppplVar16 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)pppplVar16 + 4);
            }
            break;
          }
          pppplVar16 = (long ****)(ulong)(iVar34 - 1U);
          uVar15 = iVar34 - 1U;
          if (ppppbVar17 < (byte ****)0xf2e76c1cd) {
            iVar23 = iVar34 + 1;
            uVar15 = uVar9;
          }
          uVar9 = uVar15;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x41f00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4f370;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a4f674:
      lVar46 = 0;
      pcVar32 = "";
    }
    else {
      lVar46 = *param_2;
      iVar34 = 0;
      pcVar32 = "";
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
        ;
        uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
        if (uVar37 == 0xb5fa84005) {
          uVar9 = puVar19[1];
          if ((int)uVar9 < 0) goto LAB_7102a4f674;
          pcVar32 = pcVar24 + (int)uVar9;
          goto LAB_7102a4f680;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0xb5fa84006) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
      lVar46 = 0;
    }
  }
  else {
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a4f680:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x8e41430cc) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f70c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x8e41430cd) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4f70c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0;
  }
  *(undefined4 *)(param_1 + 0x370) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x89313005a) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f7bc;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x89313005b) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4f7bc:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0xc2a00000;
  }
  *(undefined4 *)(param_1 + 0x374) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x58c1a452f) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f870;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x58c1a4530) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4f870:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x44070000;
  }
  *(undefined4 *)(param_1 + 0x378) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x6f54de50f) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f924;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x6f54de510) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4f924:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x42200000;
  }
  *(undefined4 *)(param_1 + 0x37c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x106847bd3c) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4f9d8;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x106847bd3d) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4f9d8:
    pcVar24 = "";
  }
  switch(*pcVar24) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar24[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar24[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar24 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar24 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar24 + 1);
    break;
  default:
    uVar9 = 0;
  }
  *(uint *)(param_1 + 0x380) = uVar9;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x2172910efb) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4fac8;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x2172910efc) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4fac8:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x41200000;
  }
  *(undefined4 *)(param_1 + 900) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x10fcdb09f1) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4fb80;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x10fcdb09f2) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a4fb80:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x390) - *(long *)(param_1 + 0x388) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x388),uVar37 - uVar45,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x390) = *(long *)(param_1 + 0x388) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x388) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1100acebd9) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a4fd28;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a4fd34;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1100acebda) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a4fd28:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a4fd34:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x3a8) - *(long *)(param_1 + 0x3a0) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x3a0);
  if (uVar45 < uVar37) {
    FUN_7102a542c0(plVar1,uVar37 + lVar25 * 0x5555555555555555,pppplVar16,ppppbVar17,pppplVar40,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a0) + uVar37 * 0xc;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a4fe18:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a4fe50:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a4fe50;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x569ff9e1b) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x569ff9e1c) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc1f00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x51ef8ae8d) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x51ef8ae8e) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x587f1ff37) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x587f1ff38) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a4fe18;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x10def09468) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a500fc;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a50108;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x10def09469) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a500fc:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a50108:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x3c0) - *(long *)(param_1 + 0x3b8) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x3b8);
  if (uVar45 < uVar37) {
    FUN_7102a542c0(plVar1,uVar37 + lVar25 * 0x5555555555555555,(long ****)0x569ff9e1b,
                   (byte ****)0x51ef8ae8d,(long ****)0x587f1ff37,puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x3c0) = *(long *)(param_1 + 0x3b8) + uVar37 * 0xc;
  }
  pppplVar16 = (long ****)0x587f1ff37;
  ppppbVar17 = (byte ****)0x51ef8ae8d;
  pppplVar40 = (long ****)0x569ff9e1b;
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a501d0:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a50208:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a50208;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x569ff9e1b) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x569ff9e1c) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2f00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x51ef8ae8d) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x51ef8ae8e) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x587f1ff37) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x587f1ff38) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc1200000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a501d0;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x11d803b53f) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a504b4;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a504c0;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x11d803b540) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a504b4:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a504c0:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  puVar31 = *(undefined8 **)(param_1 + 0x3d8);
  pvVar42 = *(void **)(param_1 + 0x3d0);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  lVar25 = (long)pppplVar41 >> 3;
  plVar1 = (long *)(param_1 + 0x3d0);
  if ((ulong)(lVar25 * -0x5555555555555555) < uVar37) {
    uVar45 = uVar37 + lVar25 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x3e0) - (long)puVar31 >> 3) * -0x5555555555555555) < uVar45) {
      if (iVar23 < 0) goto LAB_7102a53cfc;
      lVar29 = *(long *)(param_1 + 0x3e0) - (long)pvVar42 >> 3;
      if ((ulong)(lVar29 * -0x5555555555555555) < 0x555555555555555) {
        uVar44 = lVar29 * 0x5555555555555556;
        local_c8 = uVar37;
        if (uVar37 <= uVar44) {
          local_c8 = uVar44;
        }
        if (local_c8 != 0) goto LAB_7102a5056c;
        local_c8 = 0;
        lVar29 = 0;
      }
      else {
LAB_7102a5056c:
        ppplVar27 = (long ***)(local_c8 * 0x18);
        if (ppplVar27 == (long ***)0x0) {
          ppplVar27 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar27,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,
                                (long ****)0x587f1ff37,puVar18,param_7,pppbVar20);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar40 = &local_90;
            local_90 = ppplVar27;
            uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar44 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar27,pppplVar40,ppppbVar17,pppplVar16,puVar18,
                                        param_7,pppbVar20), lVar29 != 0)) goto LAB_7102a505e0;
          }
          lVar29 = 0;
        }
      }
LAB_7102a505e0:
      pvVar11 = (void *)(lVar29 + lVar25 * 8);
      pppplVar40 = (long ****)(uVar45 * 0x18);
      memset(pvVar11,0,(size_t)pppplVar40);
      lVar25 = SUB168(SEXT816((long)pppplVar41) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar11 = (void *)((long)pvVar11 + ((lVar25 >> 2) - (lVar25 >> 0x3f)) * 0x18);
      if (0 < (long)pppplVar41) {
        memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
        pppplVar40 = pppplVar41;
      }
      *(void **)(param_1 + 0x3d0) = pvVar11;
      *(ulong *)(param_1 + 0x3d8) = lVar29 + uVar37 * 0x18;
      *(ulong *)(param_1 + 0x3e0) = lVar29 + local_c8 * 0x18;
      if (pvVar42 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar42);
      }
    }
    else {
      uVar37 = uVar45;
      if ((uVar45 & 1) != 0) {
        puVar31[1] = 0;
        puVar31[2] = 0;
        uVar37 = uVar45 - 1;
        *puVar31 = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x3d8) + 0x18);
        *(undefined8 **)(param_1 + 0x3d8) = puVar31;
      }
      if (uVar45 != 1) {
        do {
          puVar31[1] = 0;
          puVar31[2] = 0;
          uVar37 = uVar37 - 2;
          *puVar31 = 0;
          lVar25 = *(long *)(param_1 + 0x3d8);
          *(long *)(param_1 + 0x3d8) = lVar25 + 0x18;
          *(undefined8 *)(lVar25 + 0x20) = 0;
          *(undefined8 *)(lVar25 + 0x28) = 0;
          *(undefined8 *)(lVar25 + 0x18) = 0;
          puVar31 = (undefined8 *)(*(long *)(param_1 + 0x3d8) + 0x18);
          *(undefined8 **)(param_1 + 0x3d8) = puVar31;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar25 * -0x5555555555555555 - uVar37 != 0) {
    *(void **)(param_1 + 0x3d8) = (void *)((long)pvVar42 + uVar37 * 0x18);
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a50778:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a507b0:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a507b0;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar16 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar16 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x47a67e768) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x47a67e769) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0xc20c0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x18) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar16 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar16 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x5b4ca7514) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x5b4ca7515) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x41200000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x18 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar16 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar16 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x31ed91fca) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x31ed91fcb) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0x41200000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x18 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar16 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar16 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x6895f72a4) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x6895f72a5) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x18 + 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        iVar23 = 0;
        pppplVar16 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar34 = uVar9 + iVar23;
          if (iVar34 < 0) {
            iVar34 = iVar34 + 1;
          }
          uVar15 = iVar34 >> 1;
          puVar18 = (uint *)(ulong)uVar15;
          param_7 = pppplVar16 + (int)uVar15;
          pppbVar20 = ppppbVar17[*(uint *)param_7];
          if (pppbVar20 == (byte ***)0x67a9aa7e4) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar12 = pbVar35 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (long ****)(ulong)(uVar15 - 1);
          uVar3 = uVar15 - 1;
          if (pppbVar20 < (byte ***)0x67a9aa7e5) {
            iVar23 = uVar15 + 1;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (iVar23 <= (int)uVar9);
      }
      pppplVar40 = (long ****)(ulong)*pbVar12;
      uVar47 = 0xc0000000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x18 + 0x10) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar9 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        ppppbVar17 = *(byte *****)(lVar29 + 0x20);
        pppplVar40 = (long ****)0x0;
        do {
          uVar15 = (uint)pppplVar40;
          iVar23 = uVar9 + uVar15;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar3 = iVar23 >> 1;
          pppplVar16 = (long ****)(ulong)uVar3;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)(int)uVar3 * 8);
          param_7 = (long ****)ppppbVar17[*puVar18];
          if (param_7 == (long ****)0x60d9d9772) {
            if (-1 < (int)puVar18[1]) {
              pbVar12 = pbVar35 + (int)puVar18[1];
            }
            break;
          }
          puVar18 = (uint *)(ulong)(uVar3 - 1);
          uVar5 = uVar3 - 1;
          if (param_7 < (long ****)0x60d9d9773) {
            uVar15 = uVar3 + 1;
            uVar5 = uVar9;
          }
          uVar9 = uVar5;
          pppplVar40 = (long ****)(ulong)uVar15;
        } while ((int)uVar15 <= (int)uVar9);
      }
      uVar47 = 0x41100000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0x18;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0x14) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a50778;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x105c746ae7) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a50c3c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a50c48;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x105c746ae8) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a50c3c:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a50c48:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  puVar31 = *(undefined8 **)(param_1 + 0x3f0);
  pvVar42 = *(void **)(param_1 + 1000);
  pppplVar41 = (long ****)((long)puVar31 - (long)pvVar42);
  uVar45 = (long)pppplVar41 >> 4;
  plVar1 = (long *)(param_1 + 1000);
  if (uVar37 <= uVar45) {
    if (uVar45 != uVar37) {
      *(void **)(param_1 + 0x3f0) = (void *)((long)pvVar42 + uVar37 * 0x10);
    }
    goto LAB_7102a50e28;
  }
  uVar44 = uVar37 - uVar45;
  if (uVar44 <= (ulong)(*(long *)(param_1 + 0x3f8) - (long)puVar31 >> 4)) {
    uVar37 = uVar44;
    if ((uVar44 & 1) != 0) {
      *puVar31 = 0;
      puVar31[1] = 0;
      puVar31 = (undefined8 *)(*(long *)(param_1 + 0x3f0) + 0x10);
      uVar37 = uVar44 - 1;
      *(undefined8 **)(param_1 + 0x3f0) = puVar31;
    }
    if (uVar44 != 1) {
      do {
        *puVar31 = 0;
        puVar31[1] = 0;
        lVar25 = *(long *)(param_1 + 0x3f0);
        *(long *)(param_1 + 0x3f0) = lVar25 + 0x10;
        uVar37 = uVar37 - 2;
        *(undefined8 *)(lVar25 + 0x10) = 0;
        *(undefined8 *)(lVar25 + 0x18) = 0;
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x3f0) + 0x10);
        *(undefined8 **)(param_1 + 0x3f0) = puVar31;
      } while (uVar37 != 0);
    }
    goto LAB_7102a50e28;
  }
  if (iVar23 < 0) {
LAB_7102a53cfc:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar25 = *(long *)(param_1 + 0x3f8) - (long)pvVar42;
  if ((ulong)(lVar25 >> 4) < 0x7ffffffffffffff) {
    uVar26 = lVar25 >> 3;
    uVar28 = uVar37;
    if (uVar37 <= uVar26) {
      uVar28 = uVar26;
    }
    if (uVar28 != 0) {
      if (uVar28 >> 0x3c != 0) {
LAB_7102a50cd0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_7102a50d58;
    }
    uVar28 = 0;
    pvVar11 = (void *)0x0;
  }
  else {
    uVar28 = 0xfffffffffffffff;
LAB_7102a50d58:
    ppplVar27 = (long ***)(uVar28 * 0x10);
    if (ppplVar27 == (long ***)0x0) {
      ppplVar27 = (long ***)0x1;
    }
    pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,pppplVar40,ppppbVar17,pppplVar16,puVar18,param_7
                                     ,pppbVar20);
    if (pvVar11 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        pppplVar40 = &local_90;
        local_90 = ppplVar27;
        uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar26 & 1) != 0) &&
           (pvVar11 = (void *)FUN_710392e290(0x10,ppplVar27,pppplVar40,ppppbVar17,pppplVar16,puVar18
                                             ,param_7,pppbVar20), pvVar11 != (void *)0x0))
        goto LAB_7102a50dc4;
      }
      pvVar11 = (void *)0x0;
    }
  }
LAB_7102a50dc4:
  pppplVar40 = (long ****)(uVar44 * 0x10);
  memset((void *)((long)pvVar11 + uVar45 * 0x10),0,(size_t)pppplVar40);
  if (0 < (long)pppplVar41) {
    memcpy(pvVar11,pvVar42,(size_t)pppplVar41);
    pppplVar40 = pppplVar41;
  }
  *(void **)(param_1 + 1000) = pvVar11;
  *(void **)(param_1 + 0x3f0) = (void *)((long)pvVar11 + uVar37 * 0x10);
  *(void **)(param_1 + 0x3f8) = (void *)((long)pvVar11 + uVar28 * 0x10);
  if (pvVar42 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar42);
  }
LAB_7102a50e28:
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a50ea8:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a50ee0:
        lVar29 = 0;
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a50ee0;
          ppppbVar14 = (byte ****)(pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5));
          lVar29 = lVar46;
        }
      }
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar23 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar34 = 0;
        param_7 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          pppbVar20 = (byte ***)(ulong)uVar9;
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*(uint *)(param_7 + (int)uVar9) * 8)
          ;
          if (uVar37 == 0x119ba23810) {
            uVar9 = *(uint *)((long)(param_7 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (uVar37 < 0x119ba23811) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      switch(*(byte *)ppppbVar17) {
      case 1:
      case 3:
        uVar9 = (uint)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 2:
        uVar9 = (uint)(char)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 4:
        uVar9 = (uint)*(short *)((long)ppppbVar17 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)((long)ppppbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)((long)ppppbVar17 + 1);
        break;
      default:
        uVar9 = 0;
      }
      puVar18 = (uint *)(lVar25 * 0x10);
      *(bool *)(*plVar1 + (long)puVar18) = uVar9 != 0;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar23 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        puVar18 = *(uint **)(lVar29 + 0x20);
        iVar34 = 0;
        param_7 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          pppbVar20 = (byte ***)(ulong)uVar9;
          if (*(ulong *)(puVar18 + (ulong)*(uint *)(param_7 + (int)uVar9) * 2) == 0xe2718db75) {
            uVar9 = *(uint *)((long)(param_7 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (*(ulong *)(puVar18 + (ulong)*(uint *)(param_7 + (int)uVar9) * 2) < 0xe2718db76) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      uVar9 = 100;
      switch(*(byte *)ppppbVar17) {
      case 1:
      case 3:
        uVar9 = (uint)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 2:
        uVar9 = (uint)(char)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 4:
        uVar9 = (uint)*(short *)((long)ppppbVar17 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)((long)ppppbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)((long)ppppbVar17 + 1);
      }
      *(uint *)(*plVar1 + lVar25 * 0x10 + 4) = uVar9;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (iVar23 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        puVar18 = *(uint **)(lVar29 + 0x20);
        iVar34 = 0;
        param_7 = (long ****)(*(long *)(lVar29 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5));
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          uVar9 = iVar2 >> 1;
          pppbVar20 = (byte ***)(ulong)uVar9;
          if (*(ulong *)(puVar18 + (ulong)*(uint *)(param_7 + (int)uVar9) * 2) == 0x12cc1d95a3) {
            uVar9 = *(uint *)((long)(param_7 + (int)uVar9) + 4);
            if (-1 < (int)uVar9) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar9);
            }
            break;
          }
          iVar2 = uVar9 - 1;
          if (*(ulong *)(puVar18 + (ulong)*(uint *)(param_7 + (int)uVar9) * 2) < 0x12cc1d95a4) {
            iVar34 = uVar9 + 1;
            iVar2 = iVar23;
          }
          iVar23 = iVar2;
        } while (iVar34 <= iVar23);
      }
      switch(*(byte *)ppppbVar17) {
      case 1:
      case 3:
        uVar9 = (uint)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 2:
        uVar9 = (uint)(char)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 4:
        uVar9 = (uint)*(short *)((long)ppppbVar17 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)((long)ppppbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)((long)ppppbVar17 + 1);
        break;
      default:
        uVar9 = 1;
      }
      pppplVar16 = (long ****)(*plVar1 + lVar25 * 0x10);
      *(bool *)(pppplVar16 + 1) = uVar9 != 0;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(byte *)ppppbVar14 == 0xc) &&
         (uVar9 = *(int *)((long)ppppbVar14 + 1) - 1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        puVar18 = *(uint **)(lVar29 + 0x20);
        pppplVar16 = (long ****)0x0;
        do {
          uVar15 = (uint)pppplVar16;
          iVar23 = uVar9 + uVar15;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar3 = iVar23 >> 1;
          param_7 = (long ****)(ulong)uVar3;
          pppbVar20 = (byte ***)
                      (*(long *)(lVar29 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                      (long)(int)uVar3 * 8);
          uVar5 = *(uint *)pppbVar20;
          if (*(ulong *)(puVar18 + (ulong)uVar5 * 2) == 0xf50227490) {
            if (-1 < (int)*(uint *)((long)pppbVar20 + 4)) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)*(uint *)((long)pppbVar20 + 4))
              ;
            }
            break;
          }
          pppbVar20 = (byte ***)(ulong)(uVar3 - 1);
          uVar8 = uVar3 - 1;
          if (*(ulong *)(puVar18 + (ulong)uVar5 * 2) < 0xf50227491) {
            uVar15 = uVar3 + 1;
            uVar8 = uVar9;
          }
          uVar9 = uVar8;
          pppplVar16 = (long ****)(ulong)uVar15;
        } while ((int)uVar15 <= (int)uVar9);
      }
      switch(*(byte *)ppppbVar17) {
      case 1:
      case 3:
        uVar9 = (uint)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 2:
        uVar9 = (uint)(char)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 4:
        uVar9 = (uint)*(short *)((long)ppppbVar17 + 1);
        break;
      case 5:
        uVar9 = (uint)*(ushort *)((long)ppppbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar9 = *(uint *)((long)ppppbVar17 + 1);
        break;
      default:
        uVar9 = 100;
      }
      lVar29 = lVar25 * 0x10;
      lVar25 = lVar25 + 1;
      *(uint *)(*plVar1 + lVar29 + 0xc) = uVar9;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        pppplVar40 = (long ****)(ulong)*(uint *)(pbVar38 + 1);
        if ((int)*(uint *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a50ea8;
      }
      pppplVar40 = (long ****)0x0;
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a51340:
      pcVar32 = "";
    }
    else {
      iVar34 = 0;
      pcVar32 = "";
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                          (long)iVar2 * 8);
        uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
        if (uVar37 == 0x21d9c30657) {
          uVar9 = puVar19[1];
          if ((int)uVar9 < 0) goto LAB_7102a51340;
          pcVar32 = pcVar24 + (int)uVar9;
          break;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0x21d9c30658) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
    }
  }
  else {
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44480000;
  }
  *(undefined4 *)(param_1 + 0x400) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x21e5ce390e) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a51400;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x21e5ce390f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a51400:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44480000;
  }
  *(undefined4 *)(param_1 + 0x404) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x20b58272e1) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a514c0;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x20b58272e2) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a514c0:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x408) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x20898f4db8) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a51580;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x20898f4db9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a51580:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x40c) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x197727dbb2) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a51644;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a51650;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x197727dbb3) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a51644:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a51650:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x418) - *(long *)(param_1 + 0x410) >> 3;
  plVar1 = (long *)(param_1 + 0x410);
  if (uVar45 < uVar37) {
    FUN_7102a540f0(plVar1,uVar37 - uVar45,pppplVar40,ppppbVar17,pppplVar16,puVar18,param_7,pppbVar20
                  );
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x418) = *(long *)(param_1 + 0x410) + uVar37 * 8;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a516f8:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a51730:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a51730;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          pppplVar40 = *(long *****)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (pppplVar40 == (long ****)0x795f45130) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (pppplVar40 < (long ****)0x795f45131) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc3fa0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x5602a5479) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x5602a547a) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc1a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 8;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a516f8;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x17763f5a9d) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a51940;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a5194c;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x17763f5a9e) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a51940:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a5194c:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x430) - *(long *)(param_1 + 0x428) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x428);
  if (uVar45 < uVar37) {
    FUN_7102a53ee0(plVar1,uVar37 + lVar25 * 0x5555555555555555,pppplVar40,ppppbVar17,pppplVar16,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x430) = *(long *)(param_1 + 0x428) + uVar37 * 0xc;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a51a04:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a51a3c:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a51a3c;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2200000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x40a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a51a04;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1a1a3b0c2e) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a51cec;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a51cf8;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1a1a3b0c2f) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a51cec:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a51cf8:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x448) - *(long *)(param_1 + 0x440) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x440);
  if (uVar45 < uVar37) {
    FUN_7102a53ee0(plVar1,uVar37 + lVar25 * 0x5555555555555555,(long ****)0x162d277af,ppppbVar17,
                   pppplVar16,puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x448) = *(long *)(param_1 + 0x440) + uVar37 * 0xc;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a51da4:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a51ddc:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a51ddc;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc1500000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2b00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a51da4;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1bc6d68f72) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a5208c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a52098;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1bc6d68f73) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a5208c:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a52098:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  lVar25 = *(long *)(param_1 + 0x460) - *(long *)(param_1 + 0x458) >> 2;
  uVar45 = lVar25 * -0x5555555555555555;
  uVar37 = (ulong)iVar23;
  plVar1 = (long *)(param_1 + 0x458);
  if (uVar45 < uVar37) {
    FUN_7102a53ee0(plVar1,uVar37 + lVar25 * 0x5555555555555555,(long ****)0x162d277af,ppppbVar17,
                   pppplVar16,puVar18,param_7,pppbVar20);
  }
  else if (uVar45 - uVar37 != 0) {
    *(ulong *)(param_1 + 0x460) = *(long *)(param_1 + 0x458) + uVar37 * 0xc;
  }
  pppplVar40 = (long ****)0x162d277af;
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a52160:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a52198:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a52198;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x18cdc1683) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x18cdc1684) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x420c0000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x1fbdb2615) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x1fbdb2616) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0xc + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0x162d277af) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0x162d277b0) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xc2a00000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0xc;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 8) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a52160;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x2ad8291ff0) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a52444;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x2ad8291ff1) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a52444:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x478) - *(long *)(param_1 + 0x470) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x470),uVar37 - uVar45,(long ****)0x162d277af,ppppbVar17,
                   pppplVar16,puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x478) = *(long *)(param_1 + 0x470) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0x42fa0000;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x470) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x2b298c5430) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a525f0;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x2b298c5431) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a525f0:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x490) - *(long *)(param_1 + 0x488) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x488),uVar37 - uVar45,pppplVar40,ppppbVar17,pppplVar16,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x490) = *(long *)(param_1 + 0x488) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0x433e0000;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x488) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x17627a57ca) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a5279c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x17627a57cb) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a5279c:
    pbVar38 = &DAT_7104742dbb;
  }
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x4a8) - *(long *)(param_1 + 0x4a0) >> 2;
  if (uVar45 < uVar37) {
    FUN_71003ca470((long *)(param_1 + 0x4a0),uVar37 - uVar45,pppplVar40,ppppbVar17,pppplVar16,
                   puVar18,param_7,pppbVar20);
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x4a8) = *(long *)(param_1 + 0x4a0) + uVar37 * 4;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    iVar23 = 0;
    lVar46 = 0;
    do {
      if ((int)lVar46 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar9 == 0xb) && ((int)lVar46 < *(int *)(pbVar38 + 1))) {
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 + 5);
        }
      }
      uVar47 = 0;
      if (*pbVar35 == 8) {
        uVar47 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x4a0) + lVar46 * 4) = uVar47;
      uVar9 = (uint)*pbVar38;
      lVar46 = lVar46 + 1;
      if (uVar9 - 0xb < 2) {
        iVar34 = *(int *)(pbVar38 + 1);
      }
      else {
        iVar34 = 0;
      }
      iVar23 = iVar23 + 4;
    } while (lVar46 < iVar34);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) +
                         (ulong)*(uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                                         (long)iVar2 * 8) * 8);
      if (uVar37 == 0x1ac016d31b) break;
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1ac016d31c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  std::string::assign((char *)(param_1 + 0x4b8));
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x1bd66065b9) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a52a1c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a52a28;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1bd66065ba) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a52a1c:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a52a28:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x4d8) - *(long *)(param_1 + 0x4d0) >> 4;
  plVar1 = (long *)(param_1 + 0x4d0);
  if (uVar45 < uVar37) {
    FUN_7102a53d10(plVar1,uVar37 - uVar45,pppplVar40,ppppbVar17,pppplVar16,puVar18,param_7,pppbVar20
                  );
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x4d8) = *(long *)(param_1 + 0x4d0) + uVar37 * 0x10;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a52ad0:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a52b08:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a52b08;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xcb3f38c90) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xcb3f38c91) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xc84126b03) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xc84126b04) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xdb1adc914) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xdb1adc915) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42080000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar19 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar19 * 8);
          if (uVar37 == 0xd864c2e87) {
            uVar9 = puVar19[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xd864c2e88) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42080000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0x10;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0xc) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a52ad0;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) +
                         (ulong)*(uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) +
                                         (long)iVar2 * 8) * 8);
      if (uVar37 == 0x1a237584c0) break;
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1a237584c1) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  std::string::assign((char *)(param_1 + 0x4e8));
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    lVar46 = *param_2;
    iVar34 = 0;
    pbVar38 = &DAT_7104742dbb;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar19 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar19 * 8);
      if (uVar37 == 0x184b7d7843) {
        uVar9 = puVar19[1];
        if ((int)uVar9 < 0) goto LAB_7102a52f2c;
        pbVar38 = (byte *)(pcVar24 + (int)uVar9);
        goto LAB_7102a52f38;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x184b7d7844) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
    lVar46 = 0;
  }
  else {
LAB_7102a52f2c:
    lVar46 = 0;
    pbVar38 = &DAT_7104742dbb;
  }
LAB_7102a52f38:
  if (*pbVar38 - 0xb < 2) {
    iVar23 = *(int *)(pbVar38 + 1);
  }
  else {
    iVar23 = 0;
  }
  uVar37 = (ulong)iVar23;
  uVar45 = *(long *)(param_1 + 0x508) - *(long *)(param_1 + 0x500) >> 4;
  plVar1 = (long *)(param_1 + 0x500);
  if (uVar45 < uVar37) {
    FUN_7102a53d10(plVar1,uVar37 - uVar45,pppplVar40,ppppbVar17,pppplVar16,puVar18,param_7,pppbVar20
                  );
  }
  else if (uVar45 != uVar37) {
    *(ulong *)(param_1 + 0x508) = *(long *)(param_1 + 0x500) + uVar37 * 0x10;
  }
  uVar9 = (uint)*pbVar38;
  if ((*pbVar38 - 0xb < 2) && (0 < *(int *)(pbVar38 + 1))) {
    lVar25 = 0;
LAB_7102a53028:
    do {
      iVar23 = (int)lVar25;
      if (iVar23 < 0) {
LAB_7102a53060:
        lVar29 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar9 == 0xb) {
          if (*(int *)(pbVar38 + 1) <= iVar23) goto LAB_7102a53060;
          pbVar35 = pbVar38 + *(int *)(pbVar38 + (long)iVar23 * 4 + 5);
          lVar29 = lVar46;
        }
      }
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xcb3f38c90) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xcb3f38c91) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42820000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xc84126b03) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xc84126b04) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 4) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xdb1adc914) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xdb1adc915) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0x42820000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      *(undefined4 *)(*plVar1 + lVar25 * 0x10 + 8) = uVar47;
      pbVar12 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar23 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar34 = 0;
        do {
          iVar2 = iVar23 + iVar34;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar18 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar18 * 8);
          if (uVar37 == 0xd864c2e87) {
            uVar9 = puVar18[1];
            if (-1 < (int)uVar9) {
              pbVar12 = pbVar35 + (int)uVar9;
            }
            break;
          }
          iVar7 = iVar2 + -1;
          if (uVar37 < 0xd864c2e88) {
            iVar34 = iVar2 + 1;
            iVar7 = iVar23;
          }
          iVar23 = iVar7;
        } while (iVar34 <= iVar23);
      }
      uVar47 = 0xbf800000;
      if (*pbVar12 == 8) {
        uVar47 = *(undefined4 *)(pbVar12 + 1);
      }
      lVar29 = lVar25 * 0x10;
      lVar25 = lVar25 + 1;
      *(undefined4 *)(*plVar1 + lVar29 + 0xc) = uVar47;
      uVar9 = (uint)*pbVar38;
      if (uVar9 - 0xb < 2) {
        if (*(int *)(pbVar38 + 1) <= lVar25) break;
        goto LAB_7102a53028;
      }
    } while (lVar25 < 0);
  }
  pcVar24 = (char *)*plVar10;
  if (*pcVar24 == '\f') {
    iVar23 = *(int *)(pcVar24 + 1) + -1;
    if (*(int *)(pcVar24 + 1) < 1) {
LAB_7102a533c8:
      lVar46 = 0;
      pcVar32 = "";
    }
    else {
      lVar46 = *param_2;
      iVar34 = 0;
      pcVar32 = "";
      do {
        iVar2 = iVar23 + iVar34;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
        ;
        uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
        if (uVar37 == 0x1d10fbb47d) {
          uVar9 = puVar18[1];
          if ((int)uVar9 < 0) goto LAB_7102a533c8;
          pcVar32 = pcVar24 + (int)uVar9;
          goto LAB_7102a533d4;
        }
        iVar7 = iVar2 + -1;
        if (uVar37 < 0x1d10fbb47e) {
          iVar34 = iVar2 + 1;
          iVar7 = iVar23;
        }
        iVar23 = iVar7;
      } while (iVar34 <= iVar23);
      lVar46 = 0;
    }
  }
  else {
    lVar46 = 0;
    pcVar32 = "";
  }
LAB_7102a533d4:
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x569ff9e1b) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) {
          pcVar24 = "";
        }
        else {
          pcVar24 = pcVar32 + (int)uVar9;
        }
        goto LAB_7102a53454;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x569ff9e1c) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  pcVar24 = "";
LAB_7102a53454:
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x430e0000;
  }
  *(undefined4 *)(param_1 + 0x518) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x51ef8ae8d) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) {
          pcVar24 = "";
        }
        else {
          pcVar24 = pcVar32 + (int)uVar9;
        }
        goto LAB_7102a534f0;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x51ef8ae8e) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  pcVar24 = "";
LAB_7102a534f0:
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x42060000;
  }
  *(undefined4 *)(param_1 + 0x51c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x587f1ff37) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) {
          pcVar24 = "";
        }
        else {
          pcVar24 = pcVar32 + (int)uVar9;
        }
        goto LAB_7102a5358c;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x587f1ff38) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  pcVar24 = "";
LAB_7102a5358c:
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0xc2860000;
  }
  *(undefined4 *)(param_1 + 0x520) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x736cfcf24) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a53674;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x736cfcf25) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a53674:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x3f4ccccd;
  }
  *(undefined4 *)(param_1 + 0x524) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x741c8ffb2) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a53728;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x741c8ffb3) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a53728:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x3f333333;
  }
  *(undefined4 *)(param_1 + 0x528) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x7d8c1ae08) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a537d8;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x7d8c1ae09) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a537d8:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x3f266666;
  }
  *(undefined4 *)(param_1 + 0x52c) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x5f87ebad2) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a53888;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x5f87ebad3) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a53888:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43110000;
  }
  *(undefined4 *)(param_1 + 0x530) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xc3f09e55d) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a5393c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xc3f09e55e) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a5393c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43700000;
  }
  *(undefined4 *)(param_1 + 0x534) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0xda78cc326) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a539ec;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0xda78cc327) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a539ec:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43af0000;
  }
  *(undefined4 *)(param_1 + 0x538) = uVar47;
  if ((*pcVar32 == '\f') && (iVar23 = *(int *)(pcVar32 + 1) + -1, 0 < *(int *)(pcVar32 + 1))) {
    iVar34 = 0;
    pcVar24 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(lVar46 + 0x28) + (long)*(int *)(pcVar32 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar46 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x14ade09a10) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a53a9c;
        pcVar24 = pcVar32 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x14ade09a11) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a53a9c:
    pcVar24 = "";
  }
  if (*pcVar24 == '\b') {
    uVar47 = *(undefined4 *)(pcVar24 + 1);
  }
  else {
    uVar47 = 0x43af0000;
  }
  *(undefined4 *)(param_1 + 0x53c) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x17922c19f6) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a53b58;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x17922c19f7) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a53b58:
    pcVar32 = "";
  }
  if (*pcVar32 == '\b') {
    uVar47 = *(undefined4 *)(pcVar32 + 1);
  }
  else {
    uVar47 = 0xc1f00000;
  }
  *(undefined4 *)(param_1 + 0x540) = uVar47;
  pcVar24 = (char *)*plVar10;
  if ((*pcVar24 == '\f') && (iVar23 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1))) {
    iVar34 = 0;
    pcVar32 = "";
    do {
      iVar2 = iVar23 + iVar34;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar18 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar24 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar18 * 8);
      if (uVar37 == 0x1b1be9a9f8) {
        uVar9 = puVar18[1];
        if ((int)uVar9 < 0) goto LAB_7102a53c14;
        pcVar32 = pcVar24 + (int)uVar9;
        break;
      }
      iVar7 = iVar2 + -1;
      if (uVar37 < 0x1b1be9a9f9) {
        iVar34 = iVar2 + 1;
        iVar7 = iVar23;
      }
      iVar23 = iVar7;
    } while (iVar34 <= iVar23);
  }
  else {
LAB_7102a53c14:
    pcVar32 = "";
  }
  switch(*pcVar32) {
  case '\x01':
  case '\x03':
    uVar9 = (uint)(byte)pcVar32[1];
    break;
  case '\x02':
    uVar9 = (uint)pcVar32[1];
    break;
  case '\x04':
    uVar9 = (uint)*(short *)(pcVar32 + 1);
    break;
  case '\x05':
    uVar9 = (uint)*(ushort *)(pcVar32 + 1);
    break;
  case '\x06':
  case '\a':
    uVar9 = *(uint *)(pcVar32 + 1);
    break;
  default:
    uVar9 = 1;
  }
  *(bool *)(param_1 + 0x544) = uVar9 != 0;
  return;
}

