// addr:      71014acd30
// offset:    0x14acd30
// name:      FUN_71014acd30
// mangled:   
// signature: undefined __cdecl FUN_71014acd30(undefined8 param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071014ace50) */

void FUN_71014acd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  char *pcVar16;
  long lVar17;
  long lVar18;
  ushort uVar19;
  int *piVar20;
  char *pcVar21;
  undefined1 uVar22;
  int iVar23;
  int *piVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined *local_100 [4];
  long *local_e0;
  undefined *local_d0;
  undefined8 *puStack_c8;
  undefined **local_b0;
  undefined4 auStack_a0 [2];
  undefined **local_98;
  long local_90;
  int local_88;
  undefined1 local_80;
  
  FUN_71014f8940((undefined8 *)*DAT_71052c3760,param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar26 = (undefined8 *)**(undefined8 **)(*DAT_71052c36c0 + 0x18);
  if ((long *)puVar26[8] != (long *)0x0) {
    (**(code **)(*(long *)puVar26[8] + 0x30))();
    plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
    if (((1 < (uint)((ulong)(*(long *)(*plVar10 + 0x270) - *(long *)(*plVar10 + 0x268)) >> 2)) &&
        (plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))(),
        0.0 < *(float *)(*plVar10 + 0x120))) && (bVar8 = FUN_71014c08b0(), !bVar8)) {
      if (DAT_71052c3610 != 0) {
        plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
        lVar18 = DAT_71052c3610;
        lVar28 = *plVar10;
        if (*(long *)(lVar28 + 0x2a8) == *(long *)(lVar28 + 0x2b0)) {
          if (*(char *)(puVar26 + 0x31) != -1) {
            *(undefined1 *)(DAT_71052c3610 + 0x40) = 1;
            *(undefined8 *)(lVar18 + 0x20) = 0x100010001000100;
            *(undefined8 *)(lVar18 + 0x28) = 0x100010001000100;
            *(undefined8 *)(lVar18 + 0x32) = 0x100010001000100;
            *(undefined2 *)(lVar18 + 0x30) = 0x100;
            *(undefined2 *)(lVar18 + 0x3e) = 0x100;
            *(undefined4 *)(lVar18 + 0x3a) = 0x1000100;
            *(undefined2 *)(lVar18 + 0x20) = 0x101;
            *(undefined1 *)(puVar26 + 0x31) = 0xff;
          }
        }
        else {
          plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
          if (*(long *)(*plVar10 + 0xe0) != 0) {
            plVar10 = *(long **)(*(long *)(*plVar10 + 0xe0) + 0x100);
            fVar31 = (float)(**(code **)(*plVar10 + 0xc0))(plVar10,1);
            lVar18 = DAT_71052c3610;
            fVar33 = 1.0;
            if (1.0 <= ABS((float)(int)fVar31)) {
              fVar33 = ABS((float)(int)fVar31);
            }
            if (1 < (uint)(int)fVar33) {
              lVar17 = **(long **)(DAT_71052c3420 + 8);
              uVar4 = (undefined1)(int)fVar33;
              if ((*(int *)(lVar17 + 0xd6c) == 0) || (*(int *)(lVar17 + 0xd70) != 0)) {
LAB_71014ace88:
                if (*(int *)(lVar17 + 0xf44) == 0) goto LAB_71014ace98;
LAB_71014ace90:
                lVar18 = DAT_71052c3610;
                if (*(int *)(lVar17 + 0xf48) != 0) goto LAB_71014ace98;
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0xf3c)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014ace98;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014ace98;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae6b8:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae6b8;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae6b8;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                if (*(int *)(lVar17 + 0x111c) != 0) goto LAB_71014acea0;
LAB_71014acea8:
                if (*(int *)(lVar17 + 0x12f4) == 0) goto LAB_71014aceb8;
LAB_71014aceb0:
                lVar18 = DAT_71052c3610;
                if (*(int *)(lVar17 + 0x12f8) != 0) goto LAB_71014aceb8;
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0x12ec)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014aceb8;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014aceb8;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae710:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae710;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae710;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                if (*(int *)(lVar17 + 0x14cc) != 0) goto LAB_71014acec0;
LAB_71014acec8:
                if (*(int *)(lVar17 + 0x16a4) == 0) goto LAB_71014aced8;
LAB_71014aced0:
                lVar18 = DAT_71052c3610;
                if (*(int *)(lVar17 + 0x16a8) != 0) goto LAB_71014aced8;
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0x169c)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014aced8;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014aced8;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae768:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae768;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae768;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                if (*(int *)(lVar17 + 0x187c) != 0) goto LAB_71014acee0;
LAB_71014acee8:
                iVar9 = *(int *)(lVar17 + 0x1a54);
                lVar18 = DAT_71052c3610;
              }
              else {
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0xd64)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014ace88;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014ace88;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae68c:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae68c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae68c;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                if (*(int *)(lVar17 + 0xf44) != 0) goto LAB_71014ace90;
LAB_71014ace98:
                if (*(int *)(lVar17 + 0x111c) == 0) goto LAB_71014acea8;
LAB_71014acea0:
                lVar18 = DAT_71052c3610;
                if (*(int *)(lVar17 + 0x1120) != 0) goto LAB_71014acea8;
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0x1114)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014acea8;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014acea8;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae6e4:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae6e4;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae6e4;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                if (*(int *)(lVar17 + 0x12f4) != 0) goto LAB_71014aceb0;
LAB_71014aceb8:
                if (*(int *)(lVar17 + 0x14cc) == 0) goto LAB_71014acec8;
LAB_71014acec0:
                lVar18 = DAT_71052c3610;
                if (*(int *)(lVar17 + 0x14d0) != 0) goto LAB_71014acec8;
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0x14c4)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014acec8;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014acec8;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae73c:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae73c;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae73c;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                if (*(int *)(lVar17 + 0x16a4) != 0) goto LAB_71014aced0;
LAB_71014aced8:
                if (*(int *)(lVar17 + 0x187c) == 0) goto LAB_71014acee8;
LAB_71014acee0:
                lVar18 = DAT_71052c3610;
                if (*(int *)(lVar17 + 0x1880) != 0) goto LAB_71014acee8;
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0x1874)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014acee8;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 == piVar20) || (*(char *)(puVar26 + 0x31) != -1)) goto LAB_71014acee8;
                pcVar21 = (char *)(DAT_71052c3610 + 0x20);
                if (*pcVar21 == '\0') {
                  lVar25 = 0;
                  uVar22 = 0;
LAB_71014ae794:
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar25 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                }
                else {
                  pcVar21 = (char *)(DAT_71052c3610 + 0x22);
                  if (*pcVar21 == '\0') {
                    uVar22 = 1;
                    lVar25 = 1;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x24);
                  if (*pcVar21 == '\0') {
                    uVar22 = 2;
                    lVar25 = 2;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x26);
                  if (*pcVar21 == '\0') {
                    uVar22 = 3;
                    lVar25 = 3;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x28);
                  if (*pcVar21 == '\0') {
                    uVar22 = 4;
                    lVar25 = 4;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 5;
                    lVar25 = 5;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 6;
                    lVar25 = 6;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x2e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 7;
                    lVar25 = 7;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x30);
                  if (*pcVar21 == '\0') {
                    uVar22 = 8;
                    lVar25 = 8;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x32);
                  if (*pcVar21 == '\0') {
                    uVar22 = 9;
                    lVar25 = 9;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x34);
                  if (*pcVar21 == '\0') {
                    uVar22 = 10;
                    lVar25 = 10;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x36);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xb;
                    lVar25 = 0xb;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x38);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xc;
                    lVar25 = 0xc;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3a);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xd;
                    lVar25 = 0xd;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3c);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xe;
                    lVar25 = 0xe;
                    goto LAB_71014ae794;
                  }
                  pcVar21 = (char *)(DAT_71052c3610 + 0x3e);
                  if (*pcVar21 == '\0') {
                    uVar22 = 0xf;
                    lVar25 = 0xf;
                    goto LAB_71014ae794;
                  }
                  uVar22 = 0xff;
                }
                *(undefined1 *)(puVar26 + 0x31) = uVar22;
                iVar9 = *(int *)(lVar17 + 0x1a54);
                lVar18 = DAT_71052c3610;
              }
              DAT_71052c3610 = lVar18;
              if ((iVar9 != 0) && (*(int *)(lVar17 + 0x1a58) == 0)) {
                piVar24 = *(int **)(lVar28 + 0x2a8);
                piVar20 = *(int **)(lVar28 + 0x2b0);
                if (piVar24 != piVar20) {
                  iVar9 = *piVar24;
                  while (iVar9 != *(int *)(lVar17 + 0x1a4c)) {
                    piVar24 = piVar24 + 2;
                    if (piVar20 == piVar24) goto LAB_71014ad060;
                    iVar9 = *piVar24;
                  }
                }
                if ((piVar24 != piVar20) && (*(char *)(puVar26 + 0x31) == -1)) {
                  pcVar21 = (char *)(lVar18 + 0x20);
                  if (*pcVar21 == '\0') {
                    lVar28 = 0;
                    uVar22 = 0;
                  }
                  else {
                    pcVar21 = (char *)(lVar18 + 0x22);
                    if (*pcVar21 == '\0') {
                      uVar22 = 1;
                      lVar28 = 1;
                    }
                    else {
                      pcVar21 = (char *)(lVar18 + 0x24);
                      if (*pcVar21 == '\0') {
                        uVar22 = 2;
                        lVar28 = 2;
                      }
                      else {
                        pcVar21 = (char *)(lVar18 + 0x26);
                        if (*pcVar21 == '\0') {
                          uVar22 = 3;
                          lVar28 = 3;
                        }
                        else {
                          pcVar21 = (char *)(lVar18 + 0x28);
                          if (*pcVar21 == '\0') {
                            uVar22 = 4;
                            lVar28 = 4;
                          }
                          else {
                            pcVar21 = (char *)(lVar18 + 0x2a);
                            if (*pcVar21 == '\0') {
                              uVar22 = 5;
                              lVar28 = 5;
                            }
                            else {
                              pcVar21 = (char *)(lVar18 + 0x2c);
                              if (*pcVar21 == '\0') {
                                uVar22 = 6;
                                lVar28 = 6;
                              }
                              else {
                                pcVar21 = (char *)(lVar18 + 0x2e);
                                if (*pcVar21 == '\0') {
                                  uVar22 = 7;
                                  lVar28 = 7;
                                }
                                else {
                                  pcVar21 = (char *)(lVar18 + 0x30);
                                  if (*pcVar21 == '\0') {
                                    uVar22 = 8;
                                    lVar28 = 8;
                                  }
                                  else {
                                    pcVar21 = (char *)(lVar18 + 0x32);
                                    if (*pcVar21 == '\0') {
                                      uVar22 = 9;
                                      lVar28 = 9;
                                    }
                                    else {
                                      pcVar21 = (char *)(lVar18 + 0x34);
                                      if (*pcVar21 == '\0') {
                                        uVar22 = 10;
                                        lVar28 = 10;
                                      }
                                      else {
                                        pcVar21 = (char *)(lVar18 + 0x36);
                                        if (*pcVar21 == '\0') {
                                          uVar22 = 0xb;
                                          lVar28 = 0xb;
                                        }
                                        else {
                                          pcVar21 = (char *)(lVar18 + 0x38);
                                          if (*pcVar21 == '\0') {
                                            uVar22 = 0xc;
                                            lVar28 = 0xc;
                                          }
                                          else {
                                            pcVar21 = (char *)(lVar18 + 0x3a);
                                            if (*pcVar21 == '\0') {
                                              uVar22 = 0xd;
                                              lVar28 = 0xd;
                                            }
                                            else {
                                              pcVar21 = (char *)(lVar18 + 0x3c);
                                              if (*pcVar21 == '\0') {
                                                uVar22 = 0xe;
                                                lVar28 = 0xe;
                                              }
                                              else {
                                                pcVar21 = (char *)(lVar18 + 0x3e);
                                                if (*pcVar21 != '\0') {
                                                  *(undefined1 *)(puVar26 + 0x31) = 0xff;
                                                  goto LAB_71014ad060;
                                                }
                                                uVar22 = 0xf;
                                                lVar28 = 0xf;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  *pcVar21 = '\x01';
                  *(undefined1 *)(lVar18 + lVar28 * 2 + 0x21) = uVar4;
                  *(undefined1 *)(lVar18 + 0x40) = 1;
                  *(undefined1 *)(puVar26 + 0x31) = uVar22;
                }
              }
            }
          }
        }
      }
LAB_71014ad060:
      plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
      if ((*(long *)(*plVar10 + 0x2c0) == *(long *)(*plVar10 + 0x2c8)) &&
         (plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))(),
         *(char *)(*plVar10 + 0x288) != '\0')) {
        FUN_71014ba030(puVar26);
      }
    }
  }
  plVar10 = *(long **)(*DAT_71052b8f00 + 0xd0);
  plVar29 = *(long **)(*DAT_71052b8f00 + 0xd8);
  if (plVar29 != (long *)0x0) {
    plVar27 = plVar29 + 1;
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar8) {
        *plVar27 = *plVar27 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (plVar10 == (long *)0x0) {
    if (plVar29 != (long *)0x0) goto LAB_71014ad158;
LAB_71014ad18c:
    plVar10 = (long *)0x0;
    plVar27 = (long *)0x0;
    bVar8 = true;
    cVar5 = *(char *)(puVar26 + 0x2a);
  }
  else {
    iVar9 = (**(code **)(*plVar10 + 0x88))(plVar10);
    plVar27 = plVar29;
    if (iVar9 != 0xb) {
      plVar27 = (long *)0x0;
      plVar10 = (long *)0x0;
    }
    if (iVar9 != 0xb && plVar29 != (long *)0x0) {
LAB_71014ad158:
      plVar10 = plVar29 + 1;
      do {
        lVar18 = *plVar10;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar8) {
          *plVar10 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
        std::__shared_weak_count::__release_weak();
      }
      plVar29 = (long *)0x0;
      goto LAB_71014ad18c;
    }
    bVar8 = plVar27 == (long *)0x0;
    if (plVar27 != (long *)0x0) {
      plVar29 = plVar27 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar6) {
          *plVar29 = *plVar29 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar18 = *plVar29;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar6) {
          *plVar29 = lVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar18 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    cVar5 = *(char *)(puVar26 + 0x2a);
    plVar29 = plVar27;
  }
  if (((cVar5 == '\0') && (20.0 < *(float *)((long)puVar26 + 0x134))) &&
     (*(int *)(plVar10[0xc] + 0xf0) != 2)) {
    FUN_7103737a20(8,1);
    FUN_7103737a20(9,1);
    *(undefined1 *)(puVar26 + 0x2a) = 1;
    lVar17 = lib::Singleton<app::ItemManager>::instance_;
    lVar18 = *(long *)(lib::Singleton<app::ItemManager>::instance_ + 0x28);
    lVar28 = *(long *)(lib::Singleton<app::ItemManager>::instance_ + 0x30);
    if (lVar28 != lVar18) {
      uVar30 = 0;
      do {
        plVar10 = *(long **)(lVar18 + uVar30 * 8);
        if ((plVar10 != (long *)0x0) && (*(int *)((long)plVar10 + 0xc) != 0x1aa)) {
          (**(code **)(*plVar10 + 0x520))(plVar10,0);
          lVar18 = *(long *)(lVar17 + 0x28);
          lVar28 = *(long *)(lVar17 + 0x30);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 < (ulong)(lVar28 - lVar18 >> 3));
    }
    FUN_71014b7d40((long *)*puVar26,0);
  }
  plVar10 = (long *)FUN_71013bb670(**(long **)(DAT_71052c3420 + 8));
  plVar11 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
  fVar31 = *(float *)(*plVar11 + 0xd0);
  fVar32 = 0.0;
  fVar33 = 0.0;
  if (((DAT_71052c3420 != 0) && (fVar33 = fVar32, plVar10[1] != 0)) &&
     ((uVar30 = (**(code **)(*plVar10 + 0x10))(plVar10), (uVar30 & 1) != 0 &&
      (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
       (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))))) {
    uVar12 = *(uint *)((long)plVar10 + 0x14);
    if ((uVar12 != 0xffffffff) && (*(char *)(*(long *)plVar10[1] + 0x70) != '\0')) {
      if (7 < uVar12) {
LAB_71014ae7b8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar18 = *(long *)(*(long *)plVar10[1] + 0xb0);
      uVar13 = *(uint *)(lVar18 + (long)(int)uVar12 * 0x2d0 + 0xa0);
      if (7 < uVar13) goto LAB_71014ae7b8;
      fVar33 = *(float *)(*(long *)(*(long *)(lVar18 + (long)(int)uVar12 * 0x2d0 + 0xb0) + 0x28) +
                          (long)(int)uVar13 * 0x6e0 + 0x148);
    }
  }
  fVar33 = fVar31 - fVar33;
  if (0.0 <= fVar33) {
    if (0.0 < fVar33) {
      uVar12 = 1;
      goto LAB_71014ad340;
    }
  }
  else {
    fVar31 = 0.0;
    uVar12 = 0;
    fVar33 = fVar31;
LAB_71014ad340:
    FUN_710138b5c0(fVar31,fVar33,plVar10,uVar12);
  }
  plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
  if (*(long *)(*plVar10 + 0x2c0) != *(long *)(*plVar10 + 0x2c8)) goto LAB_71014ad82c;
  lVar18 = **(long **)(DAT_71052c3420 + 8);
  *(int *)(*(long *)(**(long **)(lVar18 + 0xc40) + 0x9a0) + 0x14) =
       (int)*(float *)((long)puVar26 + 0x134);
  fVar33 = *(float *)((long)puVar26 + 0x134);
  *(undefined4 *)(puVar26 + 0x28) = *(undefined4 *)((long)puVar26 + 0x13c);
  if (0.0 < fVar33) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar19 = 0x14;
    if (DAT_71052c5259 == '\0' || DAT_71052c51b0 != '\t') {
      uVar19 = 0x12;
    }
    iVar9 = FUN_71017d1480(**(long **)(*DAT_7105314510 + 0x68),uVar19,
                           (int)*(float *)((long)puVar26 + 0x134));
    *(int *)((long)puVar26 + 0x13c) = iVar9;
    FUN_710377a280(*(long *)(*(long *)(*(long *)(**(long **)(lVar18 + 0xc40) + 0x9a0) + 8) + 0x80) +
                   0x1a0,(byte *)"mel_homerun_world_pw_n",1);
    fVar33 = *(float *)((long)puVar26 + 0x134);
  }
  uVar12 = *(uint *)(puVar26 + 0x27);
  plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
  pcVar21 = *(char **)(*plVar10 + 0x18);
  if ((*pcVar21 == '\f') && (iVar9 = *(int *)(pcVar21 + 1) + -1, 0 < *(int *)(pcVar21 + 1))) {
    lVar18 = *(long *)(*plVar10 + 0x10);
    iVar23 = 0;
    pcVar16 = "";
    do {
      iVar3 = iVar9 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar21 + 5) + (long)iVar3 * 8);
      uVar30 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar30 == 0x1ad5e9779b) {
        uVar13 = puVar1[1];
        if ((int)uVar13 < 0) goto LAB_71014ad4dc;
        pcVar16 = pcVar21 + (int)uVar13;
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar30 < 0x1ad5e9779c) {
        iVar23 = iVar3 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
    } while (iVar23 <= iVar9);
  }
  else {
LAB_71014ad4dc:
    pcVar16 = "";
  }
  switch(*pcVar16) {
  case '\x01':
  case '\x03':
    uVar13 = (uint)(byte)pcVar16[1];
    break;
  case '\x02':
    uVar13 = (uint)pcVar16[1];
    break;
  case '\x04':
    uVar13 = (uint)*(short *)(pcVar16 + 1);
    break;
  case '\x05':
    uVar13 = (uint)*(ushort *)(pcVar16 + 1);
    break;
  case '\x06':
  case '\a':
    uVar13 = *(uint *)(pcVar16 + 1);
    break;
  default:
    uVar13 = 0;
  }
  local_d0 = &DAT_710506ad20;
  puStack_c8 = puVar26;
  local_b0 = &local_d0;
  iVar9 = *(int *)(puVar26 + 0x29);
  *(uint *)(puVar26 + 0x29) = iVar9 + 1U;
  if ((uVar12 < (uint)(int)fVar33) && (uVar13 <= iVar9 + 1U)) {
    if (((long *)puVar26[1] != (long *)0x0) &&
       (plVar10 = *(long **)(*(long *)puVar26[1] + 8), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x58))(plVar10,0x1a,0xffffffff);
    }
    *(undefined4 *)(puVar26 + 0x29) = 0;
    if (&local_d0 == local_b0) goto LAB_71014ad5ac;
    if (local_b0 != (undefined **)0x0) {
      pcVar15 = *(code **)(*local_b0 + 0x28);
      goto LAB_71014ad5d0;
    }
  }
  else {
LAB_71014ad5ac:
    pcVar15 = *(code **)(*local_b0 + 0x20);
LAB_71014ad5d0:
    (*pcVar15)();
  }
  uVar12 = *(uint *)((long)puVar26 + 0x13c);
  uVar13 = *(uint *)(puVar26 + 0x28);
  plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
  pcVar21 = *(char **)(*plVar10 + 0x18);
  if ((*pcVar21 == '\f') && (iVar9 = *(int *)(pcVar21 + 1) + -1, 0 < *(int *)(pcVar21 + 1))) {
    lVar18 = *(long *)(*plVar10 + 0x10);
    iVar23 = 0;
    pcVar16 = "";
    do {
      iVar3 = iVar9 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar21 + 5) + (long)iVar3 * 8);
      uVar30 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar30 == 0x185f206a06) {
        uVar14 = puVar1[1];
        if ((int)uVar14 < 0) goto LAB_71014ad684;
        pcVar16 = pcVar21 + (int)uVar14;
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar30 < 0x185f206a07) {
        iVar23 = iVar3 + 1;
        iVar7 = iVar9;
      }
      iVar9 = iVar7;
    } while (iVar23 <= iVar9);
  }
  else {
LAB_71014ad684:
    pcVar16 = "";
  }
  switch(*pcVar16) {
  case '\x01':
  case '\x03':
    uVar14 = (uint)(byte)pcVar16[1];
    break;
  case '\x02':
    uVar14 = (uint)pcVar16[1];
    break;
  case '\x04':
    uVar14 = (uint)*(short *)(pcVar16 + 1);
    break;
  case '\x05':
    uVar14 = (uint)*(ushort *)(pcVar16 + 1);
    break;
  case '\x06':
  case '\a':
    uVar14 = *(uint *)(pcVar16 + 1);
    break;
  default:
    uVar14 = 0;
  }
  local_100[0] = &DAT_710506ad68;
  local_e0 = (long *)local_100;
  uVar2 = *(int *)((long)puVar26 + 0x14c) + 1;
  *(uint *)((long)puVar26 + 0x14c) = uVar2;
  if ((uVar13 < uVar12) && (uVar14 <= uVar2)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c51b6 == '\0') {
      lVar18 = 0x2120;
      if (DAT_71052c5259 == '\0' || DAT_71052c51b0 != '\t') {
        lVar18 = 0x1dd0;
      }
      if ((*(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + lVar18 + 0x20) != 0) &&
         ((DAT_71052c51b0 != '\t' || (DAT_71052c5259 != '\0' || DAT_71052c5258 != '\0')))) {
        FUN_71024076d0(auStack_a0,0x184e253f4a);
        local_98 = &PTR_FUN_7104f73d50;
        if ((local_90 != 0) && ((DAT_7106dd53a8 == '\x01' && (local_88 == DAT_7106dd53ac)))) {
          piVar24 = (int *)(local_90 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar24,0x10);
            if (bVar6) {
              *piVar24 = *piVar24 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_90 = 0;
        local_80 = 0;
      }
    }
    *(undefined4 *)((long)puVar26 + 0x14c) = 0;
  }
  if (local_100 == (undefined **)local_e0) {
    pcVar15 = *(code **)(*local_e0 + 0x20);
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_71014ad82c;
    pcVar15 = *(code **)(*local_e0 + 0x28);
  }
  (*pcVar15)();
LAB_71014ad82c:
  plVar10 = (long *)(**(code **)(*(long *)*puVar26 + 0x10))();
  *(undefined4 *)(*plVar10 + 0x120) = *(undefined4 *)((long)puVar26 + 0x134);
  if (!bVar8) {
    plVar10 = plVar29 + 1;
    do {
      lVar18 = *plVar10;
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar8) {
        *plVar10 = lVar18 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar29);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

