// addr:      71032517b0
// offset:    0x32517b0
// name:      FUN_71032517b0
// mangled:   
// signature: undefined __cdecl FUN_71032517b0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710325366c) */
/* WARNING: Removing unreachable block (ram,0x007103253684) */
/* WARNING: Removing unreachable block (ram,0x0071032536a8) */
/* WARNING: Removing unreachable block (ram,0x0071032536b4) */
/* WARNING: Removing unreachable block (ram,0x0071032536c0) */
/* WARNING: Removing unreachable block (ram,0x007103253704) */
/* WARNING: Removing unreachable block (ram,0x00710325370c) */
/* WARNING: Removing unreachable block (ram,0x007103253714) */
/* WARNING: Removing unreachable block (ram,0x0071032537a8) */
/* WARNING: Removing unreachable block (ram,0x0071032537bc) */
/* WARNING: Removing unreachable block (ram,0x0071032537c0) */
/* WARNING: Removing unreachable block (ram,0x0071032537c8) */
/* WARNING: Removing unreachable block (ram,0x0071032537d0) */
/* WARNING: Removing unreachable block (ram,0x0071032537d4) */
/* WARNING: Removing unreachable block (ram,0x0071032537e0) */
/* WARNING: Removing unreachable block (ram,0x0071032537e4) */

void FUN_71032517b0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ulong *puVar2;
  int iVar3;
  long **pplVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte bVar7;
  string *psVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  string *this;
  byte *pbVar12;
  size_t sVar13;
  long ****pppplVar14;
  char *pcVar15;
  ulong uVar16;
  byte *pbVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  string *psVar21;
  long *plVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  byte *pbVar26;
  char cVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined8 uVar39;
  ulong uVar40;
  uint uVar41;
  undefined8 *puVar42;
  char *pcVar43;
  undefined8 *puVar44;
  string *psVar45;
  long *plVar46;
  byte *pbVar47;
  byte *pbVar48;
  long lVar49;
  char *pcVar50;
  ulong *puVar51;
  byte *pbVar52;
  uint uVar53;
  float fVar54;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  byte *local_3c0;
  byte *local_3b8;
  byte *local_3b0;
  undefined4 local_33c;
  char local_338 [48];
  string *local_308;
  string *local_300;
  string *local_2f8;
  undefined8 local_2f0;
  char *local_2e8;
  undefined8 local_268;
  byte local_260 [44];
  undefined4 local_234;
  undefined1 local_230;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined4 local_1cc;
  undefined1 local_1c8;
  undefined4 local_198;
  undefined1 local_194;
  long ****local_160;
  char *local_158;
  ulong local_150 [9];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0 [48];
  string *local_90;
  string *local_88;
  undefined8 local_80;
  long ***local_78;
  undefined4 local_6c [3];
  
  puVar42 = (undefined8 *)(param_1 + 0x90);
  FUN_7103251730((undefined8 *)*puVar42);
  puVar44 = (undefined8 *)(param_1 + 0xa8);
  *(long *)(param_1 + 0x88) = (long)puVar42;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *puVar42 = 0;
  FUN_7103251730((undefined8 *)*puVar44);
  *puVar44 = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 **)(param_1 + 0xa0) = puVar44;
  pcVar15 = *(char **)(*(long *)(param_1 + 8) + 0x20);
  if (*pcVar15 != '\f') {
    return;
  }
  iVar10 = *(int *)(pcVar15 + 1) + -1;
  if (*(int *)(pcVar15 + 1) < 1) {
    return;
  }
  lVar35 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  iVar28 = 0;
  while( true ) {
    iVar23 = iVar10 + iVar28;
    if (iVar23 < 0) {
      iVar23 = iVar23 + 1;
    }
    iVar23 = iVar23 >> 1;
    puVar1 = (uint *)(*(long *)(lVar35 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar23 * 8);
    uVar40 = *(ulong *)(*(long *)(lVar35 + 0x20) + (ulong)*puVar1 * 8);
    if (uVar40 == 0xfaf10d693) break;
    iVar3 = iVar23 + -1;
    if (uVar40 < 0xfaf10d694) {
      iVar28 = iVar23 + 1;
      iVar3 = iVar10;
    }
    iVar10 = iVar3;
    if (iVar10 < iVar28) {
      return;
    }
  }
  uVar53 = puVar1[1];
  if ((int)uVar53 < 0) {
    return;
  }
  pbVar12 = (byte *)(pcVar15 + (int)uVar53);
  if (*pbVar12 == 0) {
    return;
  }
  if (*pbVar12 - 0xb < 2) {
    uVar53 = *(uint *)(pbVar12 + 1);
  }
  else {
    uVar53 = 0;
  }
  local_80 = 0;
  local_88 = (string *)0x0;
  local_90 = (string *)0x0;
  local_c0[0] = '\0';
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_150[8] = 0;
  local_150[7] = 0;
  local_150[6] = 0;
  local_150[5] = 0;
  local_150[4] = 0;
  local_150[3] = 0;
  local_150[2] = 0;
  local_150[1] = 0;
  local_150[0] = 0;
  local_158 = (char *)0x0;
  local_160 = (long ****)0x0;
  local_268 = (ulong)local_268._5_3_ << 0x28;
  local_234 = 0;
  local_230 = 0;
  local_200 = 0;
  local_1fc = 0;
  local_1cc = 0;
  local_1c8 = 0;
  local_198 = 0;
  local_194 = 0;
  if (uVar53 != 0) {
    puVar51 = (ulong *)(param_1 + 0x10);
    plVar20 = (long *)(param_1 + 0x20);
    pbVar47 = (byte *)((long)&local_3d8 + 1);
    uVar40 = (ulong)&local_268 | 4;
    uVar24 = 0;
    do {
      if ((int)uVar24 < 0) {
LAB_7103251a88:
        lVar49 = 0;
        pbVar52 = &DAT_7104742dbb;
      }
      else {
        pbVar52 = &DAT_7104742dbb;
        lVar49 = 0;
        if (*pbVar12 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= (int)uVar24) goto LAB_7103251a88;
          pbVar52 = pbVar12 + *(int *)(pbVar12 + (long)(int)uVar24 * 4 + 5);
          lVar49 = lVar35;
        }
      }
      FUN_71003a4ca0((uint *)&local_3e0,"data_name%d",0,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar31 = local_3d8 & 0xff;
      if ((char)local_3d8 == '\0') {
        uVar29 = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        uVar32 = 0xffffffff;
        pbVar17 = pbVar47;
        do {
          uVar41 = uVar31 + 0x20;
          if (0x19 < uVar31 - 0x41) {
            uVar41 = uVar31;
          }
          uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar31 = (uint)*pbVar17;
          uVar16 = uVar16 + 0x100000000;
          pbVar17 = pbVar17 + 1;
        } while (uVar31 != 0);
        uVar29 = (ulong)~uVar32;
        uVar16 = uVar16 & 0xff00000000;
      }
      if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
        iVar28 = 0;
        do {
          iVar23 = iVar10 + iVar28;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                           (long)iVar23 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar37 == (uVar16 | uVar29)) {
            uVar31 = puVar1[1];
            if (-1 < (int)uVar31) {
              pbVar17 = pbVar52 + (int)uVar31;
              lVar19 = lVar49;
              goto LAB_7103251b8c;
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (uVar37 <= (uVar16 | uVar29)) {
            iVar28 = iVar23 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
        } while (iVar28 <= iVar10);
      }
      pbVar17 = &DAT_7104742dbb;
      lVar19 = 0;
LAB_7103251b8c:
      pcVar15 = "";
      if (((*pbVar17 == 10) &&
          (pcVar15 = (char *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1)),
          pcVar15 == (char *)0x0)) || (cVar27 = *pcVar15, cVar27 == '\0')) {
        uVar16 = 0;
      }
      else {
        uVar29 = 0;
        do {
          *(char *)(uVar40 + uVar29) = cVar27;
          if (0x2e < (int)uVar29 + 1U) {
            uVar29 = (ulong)((int)uVar29 + 1);
            break;
          }
          cVar27 = pcVar15[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (cVar27 != '\0');
        uVar16 = 1;
        local_260[(uVar29 & 0xffffffff) - 4] = 0;
        local_268 = CONCAT44(local_268._4_4_,(int)uVar29);
      }
      FUN_71003a4ca0((uint *)&local_3e0,"data_name%d",1,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar31 = local_3d8 & 0xff;
      if ((char)local_3d8 == '\0') {
        uVar37 = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = 0;
        uVar32 = 0xffffffff;
        pbVar17 = pbVar47;
        do {
          uVar41 = uVar31 + 0x20;
          if (0x19 < uVar31 - 0x41) {
            uVar41 = uVar31;
          }
          uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar31 = (uint)*pbVar17;
          uVar29 = uVar29 + 0x100000000;
          pbVar17 = pbVar17 + 1;
        } while (uVar31 != 0);
        uVar37 = (ulong)~uVar32;
        uVar29 = uVar29 & 0xff00000000;
      }
      if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
        iVar28 = 0;
        do {
          iVar23 = iVar10 + iVar28;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                           (long)iVar23 * 8);
          uVar38 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar38 == (uVar29 | uVar37)) {
            uVar31 = puVar1[1];
            if (-1 < (int)uVar31) {
              pbVar17 = pbVar52 + (int)uVar31;
              lVar19 = lVar49;
              goto LAB_7103251d00;
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (uVar38 <= (uVar29 | uVar37)) {
            iVar28 = iVar23 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
        } while (iVar28 <= iVar10);
      }
      pbVar17 = &DAT_7104742dbb;
      lVar19 = 0;
LAB_7103251d00:
      pcVar15 = "";
      if (((*pbVar17 != 10) ||
          (pcVar15 = (char *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1)),
          pcVar15 != (char *)0x0)) && (cVar27 = *pcVar15, cVar27 != '\0')) {
        uVar29 = 0;
        do {
          *(char *)(uVar40 + uVar16 * 0x34 + uVar29) = cVar27;
          if (0x2e < (int)uVar29 + 1U) {
            uVar29 = (ulong)((int)uVar29 + 1);
            break;
          }
          cVar27 = pcVar15[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (cVar27 != '\0');
        lVar19 = uVar16 * 0x34;
        uVar16 = (ulong)((int)uVar16 + 1);
        (local_260 + lVar19 + -8)[(uVar29 & 0xffffffff) + 4] = 0;
        *(int *)(local_260 + lVar19 + -8) = (int)uVar29;
      }
      FUN_71003a4ca0((uint *)&local_3e0,"data_name%d",2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar31 = local_3d8 & 0xff;
      if ((char)local_3d8 == '\0') {
        uVar37 = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = 0;
        uVar32 = 0xffffffff;
        pbVar17 = pbVar47;
        do {
          uVar41 = uVar31 + 0x20;
          if (0x19 < uVar31 - 0x41) {
            uVar41 = uVar31;
          }
          uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar31 = (uint)*pbVar17;
          uVar29 = uVar29 + 0x100000000;
          pbVar17 = pbVar17 + 1;
        } while (uVar31 != 0);
        uVar37 = (ulong)~uVar32;
        uVar29 = uVar29 & 0xff00000000;
      }
      if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
        iVar28 = 0;
        do {
          iVar23 = iVar10 + iVar28;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                           (long)iVar23 * 8);
          uVar38 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar38 == (uVar29 | uVar37)) {
            uVar31 = puVar1[1];
            if (-1 < (int)uVar31) {
              pbVar17 = pbVar52 + (int)uVar31;
              lVar19 = lVar49;
              goto LAB_7103251e78;
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (uVar38 <= (uVar29 | uVar37)) {
            iVar28 = iVar23 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
        } while (iVar28 <= iVar10);
      }
      pbVar17 = &DAT_7104742dbb;
      lVar19 = 0;
LAB_7103251e78:
      pcVar15 = "";
      if (((*pbVar17 != 10) ||
          (pcVar15 = (char *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1)),
          pcVar15 != (char *)0x0)) && (cVar27 = *pcVar15, cVar27 != '\0')) {
        if (4 < (uint)uVar16) {
LAB_7103254a2c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar29 = 0;
        do {
          *(char *)(uVar40 + uVar16 * 0x34 + uVar29) = cVar27;
          if (0x2e < (int)uVar29 + 1U) {
            uVar29 = (ulong)((int)uVar29 + 1);
            break;
          }
          cVar27 = pcVar15[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (cVar27 != '\0');
        lVar19 = uVar16 * 0x34;
        uVar16 = (ulong)((uint)uVar16 + 1);
        (local_260 + lVar19 + -8)[(uVar29 & 0xffffffff) + 4] = 0;
        *(int *)(local_260 + lVar19 + -8) = (int)uVar29;
      }
      FUN_71003a4ca0((uint *)&local_3e0,"data_name%d",3,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar31 = local_3d8 & 0xff;
      if ((char)local_3d8 == '\0') {
        uVar37 = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = 0;
        uVar32 = 0xffffffff;
        pbVar17 = pbVar47;
        do {
          uVar41 = uVar31 + 0x20;
          if (0x19 < uVar31 - 0x41) {
            uVar41 = uVar31;
          }
          uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar31 = (uint)*pbVar17;
          uVar29 = uVar29 + 0x100000000;
          pbVar17 = pbVar17 + 1;
        } while (uVar31 != 0);
        uVar37 = (ulong)~uVar32;
        uVar29 = uVar29 & 0xff00000000;
      }
      if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
        iVar28 = 0;
        do {
          iVar23 = iVar10 + iVar28;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                           (long)iVar23 * 8);
          uVar38 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar38 == (uVar29 | uVar37)) {
            uVar31 = puVar1[1];
            if (-1 < (int)uVar31) {
              pbVar17 = pbVar52 + (int)uVar31;
              lVar19 = lVar49;
              goto LAB_7103251ffc;
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (uVar38 <= (uVar29 | uVar37)) {
            iVar28 = iVar23 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
        } while (iVar28 <= iVar10);
      }
      pbVar17 = &DAT_7104742dbb;
      lVar19 = 0;
LAB_7103251ffc:
      pcVar15 = "";
      if (((*pbVar17 != 10) ||
          (pcVar15 = (char *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1)),
          pcVar15 != (char *)0x0)) && (cVar27 = *pcVar15, cVar27 != '\0')) {
        if (4 < (uint)uVar16) goto LAB_7103254a2c;
        uVar29 = 0;
        do {
          *(char *)(uVar40 + uVar16 * 0x34 + uVar29) = cVar27;
          if (0x2e < (int)uVar29 + 1U) {
            uVar29 = (ulong)((int)uVar29 + 1);
            break;
          }
          cVar27 = pcVar15[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (cVar27 != '\0');
        lVar19 = uVar16 * 0x34;
        uVar16 = (ulong)((uint)uVar16 + 1);
        (local_260 + lVar19 + -8)[(uVar29 & 0xffffffff) + 4] = 0;
        *(int *)(local_260 + lVar19 + -8) = (int)uVar29;
      }
      FUN_71003a4ca0((uint *)&local_3e0,"data_name%d",4,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar31 = local_3d8 & 0xff;
      if ((char)local_3d8 == '\0') {
        uVar37 = 0;
        uVar29 = 0;
      }
      else {
        uVar29 = 0;
        uVar32 = 0xffffffff;
        pbVar17 = pbVar47;
        do {
          uVar41 = uVar31 + 0x20;
          if (0x19 < uVar31 - 0x41) {
            uVar41 = uVar31;
          }
          uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
          uVar31 = (uint)*pbVar17;
          uVar29 = uVar29 + 0x100000000;
          pbVar17 = pbVar17 + 1;
        } while (uVar31 != 0);
        uVar37 = (ulong)~uVar32;
        uVar29 = uVar29 & 0xff00000000;
      }
      if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
        iVar28 = 0;
        do {
          iVar23 = iVar10 + iVar28;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                           (long)iVar23 * 8);
          uVar38 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar38 == (uVar29 | uVar37)) {
            uVar31 = puVar1[1];
            if (-1 < (int)uVar31) {
              pbVar17 = pbVar52 + (int)uVar31;
              lVar19 = lVar49;
              goto LAB_7103252198;
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (uVar38 <= (uVar29 | uVar37)) {
            iVar28 = iVar23 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
        } while (iVar28 <= iVar10);
      }
      pbVar17 = &DAT_7104742dbb;
      lVar19 = 0;
LAB_7103252198:
      pcVar15 = "";
      if (((*pbVar17 != 10) ||
          (pcVar15 = (char *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1)),
          pcVar15 != (char *)0x0)) && (cVar27 = *pcVar15, cVar27 != '\0')) {
        if (4 < (uint)uVar16) goto LAB_7103254a2c;
        uVar29 = 0;
        do {
          *(char *)(uVar40 + uVar16 * 0x34 + uVar29) = cVar27;
          if (0x2e < (int)uVar29 + 1U) {
            uVar29 = (ulong)((int)uVar29 + 1);
            break;
          }
          cVar27 = pcVar15[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (cVar27 != '\0');
        lVar19 = uVar16 * 0x34;
        uVar16 = (ulong)((uint)uVar16 + 1);
        (local_260 + lVar19 + -8)[(uVar29 & 0xffffffff) + 4] = 0;
        *(int *)(local_260 + lVar19 + -8) = (int)uVar29;
      }
      if ((int)uVar16 != 0) {
        pbVar17 = &DAT_7104742dbb;
        if (*pbVar52 == 0xc) {
          iVar10 = *(int *)(pbVar52 + 1) + -1;
          if (0 < *(int *)(pbVar52 + 1)) {
            iVar28 = 0;
            do {
              iVar23 = iVar10 + iVar28;
              if (iVar23 < 0) {
                iVar23 = iVar23 + 1;
              }
              iVar23 = iVar23 >> 1;
              puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                               (long)iVar23 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0x4a15f1dee) {
                uVar31 = puVar1[1];
                if (-1 < (int)uVar31) {
                  pbVar17 = pbVar52 + (int)uVar31;
                  goto LAB_71032522b4;
                }
                break;
              }
              iVar3 = iVar23 + -1;
              if (uVar29 < 0x4a15f1def) {
                iVar28 = iVar23 + 1;
                iVar3 = iVar10;
              }
              iVar10 = iVar3;
            } while (iVar28 <= iVar10);
          }
          pbVar17 = &DAT_7104742dbb;
        }
LAB_71032522b4:
        switch(*pbVar17) {
        case 1:
        case 3:
          uVar31 = (uint)pbVar17[1];
          break;
        case 2:
          uVar31 = (uint)(char)pbVar17[1];
          break;
        case 4:
          uVar31 = (uint)*(short *)(pbVar17 + 1);
          break;
        case 5:
          uVar31 = (uint)*(ushort *)(pbVar17 + 1);
          break;
        case 6:
        case 7:
          uVar31 = *(uint *)(pbVar17 + 1);
          break;
        default:
          uVar31 = 0;
        }
        local_108 = CONCAT44(uVar31,(int)uVar16);
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar16 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar16 == 0x9c63ab421) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
                goto LAB_7103252390;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar16 < 0x9c63ab422) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_7103252390:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        pbVar17 = &DAT_7104742dbb;
        if (*pbVar52 == 0xc) {
          iVar28 = *(int *)(pbVar52 + 1) + -1;
          if (0 < *(int *)(pbVar52 + 1)) {
            iVar23 = 0;
            do {
              iVar3 = iVar28 + iVar23;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                               (long)iVar3 * 8);
              uVar16 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar16 == 0xd34191da3) {
                uVar31 = puVar1[1];
                if (-1 < (int)uVar31) {
                  pbVar17 = pbVar52 + (int)uVar31;
                  goto LAB_7103252440;
                }
                break;
              }
              iVar9 = iVar3 + -1;
              if (uVar16 < 0xd34191da4) {
                iVar23 = iVar3 + 1;
                iVar9 = iVar28;
              }
              iVar28 = iVar9;
            } while (iVar23 <= iVar28);
          }
          pbVar17 = &DAT_7104742dbb;
        }
LAB_7103252440:
        switch(*pbVar17) {
        case 1:
        case 3:
          uVar31 = (uint)pbVar17[1];
          break;
        case 2:
          uVar31 = (uint)(char)pbVar17[1];
          break;
        case 4:
          uVar31 = (uint)*(short *)(pbVar17 + 1);
          break;
        case 5:
          uVar31 = (uint)*(ushort *)(pbVar17 + 1);
          break;
        case 6:
        case 7:
          uVar31 = *(uint *)(pbVar17 + 1);
          break;
        default:
          uVar31 = 0;
        }
        uVar16 = 0;
        local_100 = CONCAT44(uVar31,iVar10);
        do {
          if (4 < uVar16) goto LAB_7103254a2c;
          FUN_7103254c50((int *)&local_3e0,"stream:/sound/bgm/bgm_%s.nus3bank",
                         local_260 + uVar16 * 0x34 + -4,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          FUN_7103254c50((int *)&local_2f0,"stream:/sound/bgm/bgm_%s.nus3audio",
                         local_260 + uVar16 * 0x34 + -4,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          uVar31 = (uint)local_3e0._4_1_;
          if (local_3e0._4_1_ == 0) {
            uVar37 = 0;
            uVar29 = 0;
          }
          else {
            uVar29 = 0;
            uVar32 = 0xffffffff;
            pbVar17 = (byte *)((ulong)&local_3e0 | 5);
            do {
              uVar41 = uVar31 + 0x20;
              if (0x19 < uVar31 - 0x41) {
                uVar41 = uVar31;
              }
              uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
              uVar31 = (uint)*pbVar17;
              uVar29 = uVar29 + 0x100000000;
              pbVar17 = pbVar17 + 1;
            } while (uVar31 != 0);
            uVar37 = (ulong)~uVar32;
            uVar29 = uVar29 & 0xff00000000;
          }
          uVar31 = (uint)local_2f0._4_1_;
          local_150[uVar16 * 2 + -1] = uVar29 | uVar37;
          if (local_2f0._4_1_ == 0) {
            uVar37 = 0;
            uVar29 = 0;
          }
          else {
            uVar29 = 0;
            uVar32 = 0xffffffff;
            pbVar17 = (byte *)((ulong)&local_2f0 | 5);
            do {
              uVar41 = uVar31 + 0x20;
              if (0x19 < uVar31 - 0x41) {
                uVar41 = uVar31;
              }
              uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
              uVar31 = (uint)*pbVar17;
              uVar29 = uVar29 + 0x100000000;
              pbVar17 = pbVar17 + 1;
            } while (uVar31 != 0);
            uVar37 = (ulong)~uVar32;
            uVar29 = uVar29 & 0xff00000000;
          }
          local_150[uVar16 * 2] = uVar29 | uVar37;
          uVar16 = uVar16 + 1;
        } while (uVar16 < (local_108 & 0xffffffff));
        if ((uint)local_108 < 5) {
          local_150[7] = 0;
          local_150[8] = 0;
          if ((uint)local_108 != 4) {
            local_150[5] = 0;
            local_150[6] = 0;
            if ((uint)local_108 < 3) {
              local_150[3] = 0;
              local_150[4] = 0;
              if ((uint)local_108 != 2) {
                local_150[1] = 0;
                local_150[2] = 0;
                if ((uint)local_108 == 0) {
                  local_158 = (char *)0x0;
                  local_150[0] = 0;
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
            }
          }
        }
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar16 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar16 == 0x17c3bb5007) {
              uVar31 = puVar1[1];
              if ((int)uVar31 < 0) {
                lVar19 = 0;
                pbVar17 = &DAT_7104742dbb;
              }
              else {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
              }
              goto LAB_710325267c;
            }
            iVar3 = iVar23 + -1;
            if (uVar16 < 0x17c3bb5008) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_710325267c:
        pcVar15 = "start_point%d";
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        local_e0 = CONCAT44(local_e0._4_4_,iVar10);
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar16 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar16 == 0x168fd4b6b0) {
              uVar31 = puVar1[1];
              if ((int)uVar31 < 0) {
                lVar19 = 0;
                pbVar17 = &DAT_7104742dbb;
              }
              else {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
              }
              goto LAB_7103252720;
            }
            iVar3 = iVar23 + -1;
            if (uVar16 < 0x168fd4b6b1) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_7103252720:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        local_e0 = CONCAT44(iVar10,(undefined4)local_e0);
        FUN_71003a4ca0((uint *)&local_3e0,"start_point%d",0,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar31 = local_3d8 & 0xff;
        if ((char)local_3d8 == '\0') {
          uVar29 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar32 = 0xffffffff;
          pbVar17 = pbVar47;
          do {
            uVar41 = uVar31 + 0x20;
            if (0x19 < uVar31 - 0x41) {
              uVar41 = uVar31;
            }
            uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
            uVar31 = (uint)*pbVar17;
            uVar16 = uVar16 + 0x100000000;
            pbVar17 = pbVar17 + 1;
          } while (uVar31 != 0);
          uVar29 = (ulong)~uVar32;
          uVar16 = uVar16 & 0xff00000000;
        }
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar37 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar37 == (uVar16 | uVar29)) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
                goto LAB_7103252888;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar37 <= (uVar16 | uVar29)) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_7103252888:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        local_d8 = CONCAT44(local_d8._4_4_,iVar10);
        FUN_71003a4ca0((uint *)&local_3e0,"start_point%d",1,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar31 = local_3d8 & 0xff;
        if ((char)local_3d8 == '\0') {
          uVar29 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar32 = 0xffffffff;
          pbVar17 = pbVar47;
          do {
            uVar41 = uVar31 + 0x20;
            if (0x19 < uVar31 - 0x41) {
              uVar41 = uVar31;
            }
            uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
            uVar31 = (uint)*pbVar17;
            uVar16 = uVar16 + 0x100000000;
            pbVar17 = pbVar17 + 1;
          } while (uVar31 != 0);
          uVar29 = (ulong)~uVar32;
          uVar16 = uVar16 & 0xff00000000;
        }
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar37 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar37 == (uVar16 | uVar29)) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
                goto LAB_71032529a4;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar37 <= (uVar16 | uVar29)) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_71032529a4:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        local_d8 = CONCAT44(iVar10,(undefined4)local_d8);
        FUN_71003a4ca0((uint *)&local_3e0,"start_point%d",2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar31 = local_3d8 & 0xff;
        if ((char)local_3d8 == '\0') {
          uVar29 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar32 = 0xffffffff;
          pbVar17 = pbVar47;
          do {
            uVar41 = uVar31 + 0x20;
            if (0x19 < uVar31 - 0x41) {
              uVar41 = uVar31;
            }
            uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
            uVar31 = (uint)*pbVar17;
            uVar16 = uVar16 + 0x100000000;
            pbVar17 = pbVar17 + 1;
          } while (uVar31 != 0);
          uVar29 = (ulong)~uVar32;
          uVar16 = uVar16 & 0xff00000000;
        }
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar37 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar37 == (uVar16 | uVar29)) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
                goto LAB_7103252ac0;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar37 <= (uVar16 | uVar29)) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_7103252ac0:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        local_d0 = CONCAT44(local_d0._4_4_,iVar10);
        FUN_71003a4ca0((uint *)&local_3e0,"start_point%d",3,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar31 = local_3d8 & 0xff;
        if ((char)local_3d8 == '\0') {
          uVar29 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar32 = 0xffffffff;
          pbVar17 = pbVar47;
          do {
            uVar41 = uVar31 + 0x20;
            if (0x19 < uVar31 - 0x41) {
              uVar41 = uVar31;
            }
            uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
            uVar31 = (uint)*pbVar17;
            uVar16 = uVar16 + 0x100000000;
            pbVar17 = pbVar17 + 1;
          } while (uVar31 != 0);
          uVar29 = (ulong)~uVar32;
          uVar16 = uVar16 & 0xff00000000;
        }
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar37 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar37 == (uVar16 | uVar29)) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
                goto LAB_7103252bdc;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar37 <= (uVar16 | uVar29)) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_7103252bdc:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        local_d0 = CONCAT44(iVar10,(undefined4)local_d0);
        FUN_71003a4ca0((uint *)&local_3e0,"start_point%d",4,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        uVar31 = local_3d8 & 0xff;
        if ((char)local_3d8 == '\0') {
          uVar29 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar32 = 0xffffffff;
          pbVar17 = pbVar47;
          do {
            uVar41 = uVar31 + 0x20;
            if (0x19 < uVar31 - 0x41) {
              uVar41 = uVar31;
            }
            uVar32 = (&DAT_7104754084)[(uVar41 ^ uVar32) & 0xff] ^ uVar32 >> 8;
            uVar31 = (uint)*pbVar17;
            uVar16 = uVar16 + 0x100000000;
            pbVar17 = pbVar17 + 1;
          } while (uVar31 != 0);
          uVar29 = (ulong)~uVar32;
          uVar16 = uVar16 & 0xff00000000;
        }
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar37 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar37 == (uVar16 | uVar29)) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar17 = pbVar52 + (int)uVar31;
                lVar19 = lVar49;
                goto LAB_7103252cf8;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar37 <= (uVar16 | uVar29)) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        pbVar17 = &DAT_7104742dbb;
        lVar19 = 0;
LAB_7103252cf8:
        puVar11 = &DAT_7104867c2e;
        if (*pbVar17 == 10) {
          puVar11 = (undefined1 *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar17 + 1));
        }
        iVar10 = FUN_7103254a50((long)puVar11);
        uVar16 = 0;
        while( true ) {
          pcVar43 = (char *)(uVar40 + uVar16);
          if (*pcVar43 == '\0') break;
          cVar27 = pcVar43[1];
          local_c0[uVar16] = *pcVar43;
          if (cVar27 == '\0') {
            uVar16 = uVar16 | 1;
            break;
          }
          local_c0[uVar16 + 1] = cVar27;
          if (pcVar43[2] == '\0') {
            uVar16 = uVar16 | 2;
            break;
          }
          local_c0[uVar16 + 2] = pcVar43[2];
          if (0x2e < (int)uVar16 + 3U) {
            uVar16 = (ulong)((int)uVar16 + 3);
            break;
          }
          if (pcVar43[3] == '\0') {
            uVar16 = uVar16 + 3;
            break;
          }
          local_c0[uVar16 + 3] = pcVar43[3];
          uVar16 = uVar16 + 4;
        }
        local_c0[uVar16 & 0xffffffff] = '\0';
        local_c8 = CONCAT44((int)uVar16,iVar10);
        if ((*pbVar52 == 0xc) && (iVar10 = *(int *)(pbVar52 + 1) + -1, 0 < *(int *)(pbVar52 + 1))) {
          iVar28 = 0;
          do {
            iVar23 = iVar10 + iVar28;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            iVar23 = iVar23 >> 1;
            puVar1 = (uint *)(*(long *)(lVar49 + 0x28) + (long)*(int *)(pbVar52 + 5) +
                             (long)iVar23 * 8);
            uVar16 = *(ulong *)(*(long *)(lVar49 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar16 == 0x9d0ed463e) {
              uVar31 = puVar1[1];
              if (-1 < (int)uVar31) {
                pbVar52 = pbVar52 + (int)uVar31;
                goto LAB_7103252e28;
              }
              break;
            }
            iVar3 = iVar23 + -1;
            if (uVar16 < 0x9d0ed463f) {
              iVar28 = iVar23 + 1;
              iVar3 = iVar10;
            }
            iVar10 = iVar3;
          } while (iVar28 <= iVar10);
        }
        lVar49 = 0;
        pbVar52 = &DAT_7104742dbb;
LAB_7103252e28:
        if (*pbVar52 == 9) {
          uVar16 = *(ulong *)(*(long *)(lVar49 + 0x20) + (long)*(int *)(pbVar52 + 1) * 8);
        }
        else {
          uVar16 = 0;
        }
        param_3 = (long *********)&DAT_0000009c;
        local_3e0 = uVar16;
        memcpy(&local_3d8,&local_160,0x9c);
        psVar45 = local_88;
        psVar21 = local_90;
        for (uVar29 = 0; local_c0[uVar29] != '\0'; uVar29 = uVar29 + 4) {
          cVar27 = local_c0[uVar29 + 1];
          local_338[uVar29] = local_c0[uVar29];
          if (cVar27 == '\0') {
            uVar29 = uVar29 | 1;
            break;
          }
          local_338[uVar29 + 1] = cVar27;
          if (local_c0[uVar29 + 2] == '\0') {
            uVar29 = uVar29 | 2;
            break;
          }
          local_338[uVar29 + 2] = local_c0[uVar29 + 2];
          if (0x2e < (int)uVar29 + 3U) {
            uVar29 = (ulong)((int)uVar29 + 3);
            break;
          }
          if (local_c0[uVar29 + 3] == '\0') {
            uVar29 = uVar29 + 3;
            break;
          }
          local_338[uVar29 + 3] = local_c0[uVar29 + 3];
        }
        local_338[uVar29 & 0xffffffff] = '\0';
        local_33c = (undefined4)uVar29;
        psVar8 = psVar45 + -(long)psVar21;
        local_308 = (string *)0x0;
        local_300 = (string *)0x0;
        local_2f8 = (string *)0x0;
        if (psVar8 != (string *)0x0) {
          pcVar15 = (char *)((long)psVar8 >> 5);
          if ((ulong)pcVar15 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          this = (string *)
                 FUN_710392e290(0x10,psVar8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                param_8);
          if (this == (string *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
              param_3 = (long *********)&local_2f0;
              local_2f0 = psVar8;
              uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
              if (((uVar29 & 1) != 0) &&
                 (this = (string *)
                         FUN_710392e290(0x10,psVar8,(long ****)param_3,param_4,param_5,param_6,
                                        param_7,param_8), this != (string *)0x0))
              goto LAB_7103252f60;
            }
            this = (string *)0x0;
          }
LAB_7103252f60:
          local_2f8 = this + (long)pcVar15 * 0x20;
          local_308 = this;
          for (; local_300 = this, psVar21 != psVar45; psVar21 = psVar21 + 0x20) {
            std::string::string(this,psVar21);
            *(undefined4 *)(this + 0x18) = *(undefined4 *)(psVar21 + 0x18);
            this = local_300 + 0x20;
            uVar16 = local_3e0;
          }
        }
        psVar21 = local_300;
        pcVar43 = *(char **)(param_1 + 0x18);
        pcVar50 = (char *)(uVar16 & 0xffffffffff);
        if (pcVar43 == (char *)0x0) {
LAB_7103253068:
          plVar18 = (long *)FUN_710392e290(0x10,0x100,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8);
          if (plVar18 == (long *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
              local_2f0 = (string *)&DAT_00000100;
              pppplVar14 = (long ****)&local_2f0;
              uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
              if (((uVar29 & 1) != 0) &&
                 (plVar18 = (long *)FUN_710392e290(0x10,0x100,pppplVar14,param_4,param_5,param_6,
                                                   param_7,param_8), plVar18 != (long *)0x0))
              goto LAB_71032530c8;
            }
            plVar18 = (long *)0x0;
          }
LAB_71032530c8:
          param_3 = (long *********)&DAT_0000009c;
          plVar18[2] = uVar16;
          memcpy(plVar18 + 3,&local_3d8,0x9c);
          for (uVar16 = 0; local_338[uVar16] != '\0'; uVar16 = uVar16 + 4) {
            *(char *)((long)plVar18 + uVar16 + 0xb8) = local_338[uVar16];
            if (local_338[uVar16 + 1] == '\0') {
              uVar16 = uVar16 | 1;
              break;
            }
            *(char *)((long)plVar18 + uVar16 + 0xb9) = local_338[uVar16 + 1];
            if (local_338[uVar16 + 2] == '\0') {
              uVar16 = uVar16 | 2;
              break;
            }
            *(char *)((long)plVar18 + uVar16 + 0xba) = local_338[uVar16 + 2];
            if (0x2e < (int)uVar16 + 3U) {
              uVar16 = (ulong)((int)uVar16 + 3);
              break;
            }
            if (local_338[uVar16 + 3] == '\0') {
              uVar16 = uVar16 + 3;
              break;
            }
            *(char *)((long)plVar18 + uVar16 + 0xbb) = local_338[uVar16 + 3];
          }
          *(undefined1 *)((long)plVar18 + (uVar16 & 0xffffffff) + 0xb8) = 0;
          *(int *)((long)plVar18 + 0xb4) = (int)uVar16;
          plVar18[0x1d] = (long)local_308;
          plVar18[0x1e] = (long)psVar21;
          plVar18[0x1f] = (long)local_2f8;
          local_300 = (string *)0x0;
          local_2f8 = (string *)0x0;
          local_308 = (string *)0x0;
          *plVar18 = 0;
          plVar18[1] = (long)pcVar50;
          fVar54 = (float)(*(long *)(param_1 + 0x28) + 1);
          if ((pcVar43 == (char *)0x0) || (*(float *)(param_1 + 0x30) * (float)pcVar43 < fVar54)) {
            if (pcVar43 < (char *)0x3) {
              uVar16 = 1;
            }
            else {
              uVar16 = (ulong)(((ulong)(pcVar43 + -1) & (ulong)pcVar43) != 0);
            }
            uVar16 = uVar16 | (long)pcVar43 << 1;
            uVar29 = (ulong)(fVar54 / *(float *)(param_1 + 0x30));
            if (uVar29 <= uVar16) {
              uVar29 = uVar16;
            }
            if (uVar29 - 1 == 0) {
              uVar29 = 2;
            }
            else if ((uVar29 - 1 & uVar29) != 0) {
              uVar29 = std::__next_prime(uVar29);
            }
            uVar16 = *(ulong *)(param_1 + 0x18);
            if (uVar16 < uVar29) {
LAB_710325321c:
              FUN_71032557a0(puVar51,uVar29,(long ****)param_3,param_4,param_5,param_6,param_7,
                             param_8);
            }
            else if (uVar29 < uVar16) {
              uVar37 = (ulong)((float)*(ulong *)(param_1 + 0x28) / *(float *)(param_1 + 0x30));
              if (uVar16 < 3 || (uVar16 - 1 & uVar16) != 0) {
                uVar37 = std::__next_prime(uVar37);
              }
              else if (1 < uVar37) {
                uVar37 = 1L << (-LZCOUNT(uVar37 - 1) & 0x3fU);
              }
              if (uVar37 <= uVar29) {
                uVar37 = uVar29;
              }
              uVar29 = uVar37;
              if (uVar37 < uVar16) goto LAB_710325321c;
            }
            pcVar43 = *(char **)(param_1 + 0x18);
            if (((ulong)(pcVar43 + -1) & (ulong)pcVar43) == 0) {
              pcVar15 = (char *)((ulong)(pcVar43 + -1) & (ulong)pcVar50);
            }
            else {
              pcVar15 = pcVar50;
              if (pcVar43 <= pcVar50) {
                uVar16 = 0;
                if (pcVar43 != (char *)0x0) {
                  uVar16 = (ulong)pcVar50 / (ulong)pcVar43;
                }
                pcVar15 = pcVar50 + -(uVar16 * (long)pcVar43);
              }
            }
          }
          uVar16 = *puVar51;
          plVar22 = *(long **)(uVar16 + (long)pcVar15 * 8);
          if (plVar22 == (long *)0x0) {
            *plVar18 = *plVar20;
            *plVar20 = (long)plVar18;
            *(long **)(uVar16 + (long)pcVar15 * 8) = plVar20;
            if (*plVar18 != 0) {
              pcVar15 = *(char **)(*plVar18 + 8);
              if (((ulong)(pcVar43 + -1) & (ulong)pcVar43) == 0) {
                pcVar15 = (char *)((ulong)pcVar15 & (ulong)(pcVar43 + -1));
              }
              else if (pcVar43 <= pcVar15) {
                uVar16 = 0;
                if (pcVar43 != (char *)0x0) {
                  uVar16 = (ulong)pcVar15 / (ulong)pcVar43;
                }
                pcVar15 = pcVar15 + -(uVar16 * (long)pcVar43);
              }
              plVar22 = (long *)(*puVar51 + (long)pcVar15 * 8);
              goto LAB_710325335c;
            }
          }
          else {
            *plVar18 = *plVar22;
LAB_710325335c:
            *plVar22 = (long)plVar18;
          }
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        }
        else {
          pcVar25 = pcVar43 + -1;
          if (((ulong)pcVar25 & (ulong)pcVar43) == 0) {
            pcVar15 = (char *)((ulong)pcVar25 & (ulong)pcVar50);
          }
          else {
            pcVar15 = pcVar50;
            if (pcVar43 <= pcVar50) {
              uVar29 = 0;
              if (pcVar43 != (char *)0x0) {
                uVar29 = (ulong)pcVar50 / (ulong)pcVar43;
              }
              pcVar15 = pcVar50 + -(uVar29 * (long)pcVar43);
            }
          }
          plVar18 = *(long **)(*puVar51 + (long)pcVar15 * 8);
          if (plVar18 == (long *)0x0) goto LAB_7103253068;
          if (((ulong)pcVar25 & (ulong)pcVar43) == 0) {
            do {
              plVar18 = (long *)*plVar18;
              if ((plVar18 == (long *)0x0) ||
                 ((char *)plVar18[1] != pcVar50 &&
                  (char *)((ulong)plVar18[1] & (ulong)pcVar25) != pcVar15)) goto LAB_7103253068;
            } while (((plVar18[2] ^ uVar16) & 0xffffffffff) != 0);
          }
          else {
            do {
              plVar18 = (long *)*plVar18;
              if (plVar18 == (long *)0x0) goto LAB_7103253068;
              pcVar25 = (char *)plVar18[1];
              if (pcVar25 != pcVar50) {
                if (pcVar43 <= pcVar25) {
                  uVar29 = 0;
                  if (pcVar43 != (char *)0x0) {
                    uVar29 = (ulong)pcVar25 / (ulong)pcVar43;
                  }
                  pcVar25 = pcVar25 + -(uVar29 * (long)pcVar43);
                }
                if (pcVar25 != pcVar15) goto LAB_7103253068;
              }
            } while (((plVar18[2] ^ uVar16) & 0xffffffffff) != 0);
          }
        }
        psVar21 = local_308;
        psVar45 = local_300;
        if (local_308 != (string *)0x0) {
          while (psVar8 = psVar45, psVar8 != psVar21) {
            psVar45 = psVar8 + -0x20;
            if ((((byte)*psVar45 & 1) != 0) && (*(ulong *)(psVar8 + -0x10) != 0)) {
              FUN_710392eb40(*(ulong *)(psVar8 + -0x10));
            }
          }
          local_300 = psVar21;
          if (local_308 != (string *)0x0) {
            FUN_710392eb40((ulong)local_308);
          }
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 < uVar53);
  }
  FUN_710353da30((uint *)&local_3e0,0x1d44d02d6d);
  uVar53 = (uint)local_3e0;
  uVar40 = local_3e0 & 0xffffffff;
  if ((uint)local_3e0 == 0xffffff) {
    lVar35 = 0;
    goto LAB_71032534fc;
  }
  FUN_7103540a00(DAT_7105332f20,(uint)local_3e0);
  if ((uVar53 < *(uint *)(DAT_7105332f20 + 0x18)) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar40 * 8 + 4) != '\0')) {
    uVar24 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar40 * 8);
    if ((uVar24 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar24)) goto LAB_7103253480;
    plVar20 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar24 * 0x18);
    lVar35 = 0;
    if ((*(char *)((long)plVar20 + 0xc) != '\0') && (plVar20 != (long *)0x0)) {
      lVar35 = *plVar20;
    }
  }
  else {
LAB_7103253480:
    lVar35 = 0;
  }
  lVar49 = **(long **)(DAT_7105332f20 + 0x78);
  if (uVar53 < *(uint *)(*(long *)(lVar49 + 0x40) + 4)) {
    uVar24 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar49 + 0x60) + uVar40 * 0x20) >> 0x20);
    uVar31 = uVar24 >> 8;
    if ((uVar31 != 0xffffff) &&
       (uVar32 = *(uint *)(*(long *)(lVar49 + 0x40) + 8), uVar24 = uVar24 >> 8,
       uVar31 <= uVar32 && uVar32 != uVar24)) {
      uVar31 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) +
                         (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar40 * 8) * 0x18 + 0x10)
      ;
      param_3 = (long *********)(ulong)uVar31;
      FUN_7103541e10(lVar49,*(long *)(lVar49 + 0x90) +
                            ((ulong)*(uint *)(*(long *)(lVar49 + 0x68) + (ulong)uVar24 * 8 + 4) &
                            0xffffff) * 0x10,uVar31);
    }
  }
LAB_71032534fc:
  uVar24 = *(uint *)(lVar35 + 4);
  if (uVar53 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar53,param_3,param_4,param_5,param_6,param_7,param_8);
    local_3e0 = CONCAT44(local_3e0._4_4_,0xffffff);
  }
  if (uVar24 != 0) {
    uVar31 = 0;
    puVar51 = (ulong *)(lVar35 + 8);
    puVar2 = (ulong *)(param_1 + 0x38);
    plVar20 = (long *)(param_1 + 0x48);
    do {
      local_3b8 = (byte *)0x0;
      local_3b0 = (byte *)0x0;
      local_3c0 = (byte *)0x0;
      local_3e0 = *puVar51;
      local_3d8 = (uint)puVar51[1];
      uStack_3d4 = *(undefined4 *)((long)puVar51 + 0xc);
      local_3d0 = (undefined4)puVar51[2];
      local_3cc = *(undefined4 *)((long)puVar51 + 0x14);
      local_3c8 = (undefined4)puVar51[3];
      local_3c4 = *(undefined4 *)((long)puVar51 + 0x1c);
      uVar32 = (uint)puVar51[4];
      uVar40 = (ulong)uVar32;
      puVar51 = (ulong *)((long)puVar51 + 0x24);
      if (uVar40 != 0) {
        psVar21 = (string *)(uVar40 << 5);
        if (uVar32 == 0) {
          psVar21 = (string *)0x1;
        }
        pbVar12 = (byte *)FUN_710392e290(0x10,psVar21,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8);
        if (pbVar12 == (byte *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
            param_3 = (long *********)&local_2f0;
            local_2f0 = psVar21;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
            if (((uVar16 & 1) != 0) &&
               (pbVar12 = (byte *)FUN_710392e290(0x10,psVar21,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8), pbVar12 != (byte *)0x0))
            goto LAB_710325365c;
          }
          pbVar12 = (byte *)0x0;
        }
LAB_710325365c:
        local_3b0 = pbVar12 + uVar40 * 0x20;
        local_3b8 = pbVar12;
      }
      local_3c0 = local_3b8;
      if (uVar32 != 0) {
        uVar41 = 0;
        do {
          pbVar47 = local_3b8;
          pbVar12 = local_3c0;
          if (local_3b8 < local_3b0) {
            pbVar47[0x10] = 0;
            pbVar47[0x11] = 0;
            pbVar47[0x12] = 0;
            pbVar47[0x13] = 0;
            pbVar47[0x14] = 0;
            pbVar47[0x15] = 0;
            pbVar47[0x16] = 0;
            pbVar47[0x17] = 0;
            pbVar47[0x18] = 0;
            pbVar47[0x19] = 0;
            pbVar47[0x1a] = 0;
            pbVar47[0x1b] = 0;
            pbVar47[0x1c] = 0;
            pbVar47[0x1d] = 0;
            pbVar47[0x1e] = 0;
            pbVar47[0x1f] = 0;
            pbVar47[0] = 0;
            pbVar47[1] = 0;
            pbVar47[2] = 0;
            pbVar47[3] = 0;
            pbVar47[4] = 0;
            pbVar47[5] = 0;
            pbVar47[6] = 0;
            pbVar47[7] = 0;
            pbVar47[8] = 0;
            pbVar47[9] = 0;
            pbVar47[10] = 0;
            pbVar47[0xb] = 0;
            pbVar47[0xc] = 0;
            pbVar47[0xd] = 0;
            pbVar47[0xe] = 0;
            pbVar47[0xf] = 0;
            local_3b8 = local_3b8 + 0x20;
          }
          else {
            lVar35 = (long)local_3b8 - (long)local_3c0 >> 5;
            uVar16 = lVar35 + 1;
            if (uVar16 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)local_3b0 - (long)local_3c0 >> 5) < 0x3ffffffffffffff) {
              uVar29 = (long)local_3b0 - (long)local_3c0 >> 4;
              if (uVar16 <= uVar29) {
                uVar16 = uVar29;
              }
              if (uVar16 != 0) {
                if (uVar16 >> 0x3b == 0) goto LAB_7103253878;
                goto LAB_7103254a2c;
              }
LAB_71032538d0:
              lVar49 = 0;
            }
            else {
              uVar16 = 0x7ffffffffffffff;
LAB_7103253878:
              psVar21 = (string *)(uVar16 * 0x20);
              if (psVar21 == (string *)0x0) {
                psVar21 = (string *)0x1;
              }
              lVar49 = FUN_710392e290(0x10,psVar21,(long ****)param_3,param_4,param_5,param_6,
                                      param_7,param_8);
              if (lVar49 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
                  param_3 = (long *********)&local_2f0;
                  local_2f0 = psVar21;
                  uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
                  if (((uVar29 & 1) != 0) &&
                     (lVar49 = FUN_710392e290(0x10,psVar21,(long ****)param_3,param_4,param_5,
                                              param_6,param_7,param_8), lVar49 != 0))
                  goto LAB_71032538d4;
                }
                goto LAB_71032538d0;
              }
            }
LAB_71032538d4:
            pbVar17 = local_3c0;
            local_3c0 = (byte *)(lVar49 + lVar35 * 0x20);
            local_3b0 = (byte *)(lVar49 + uVar16 * 0x20);
            pbVar52 = local_3c0 + 0x20;
            local_3c0[0x10] = 0;
            local_3c0[0x11] = 0;
            local_3c0[0x12] = 0;
            local_3c0[0x13] = 0;
            local_3c0[0x14] = 0;
            local_3c0[0x15] = 0;
            local_3c0[0x16] = 0;
            local_3c0[0x17] = 0;
            local_3c0[0x18] = 0;
            local_3c0[0x19] = 0;
            local_3c0[0x1a] = 0;
            local_3c0[0x1b] = 0;
            local_3c0[0x1c] = 0;
            local_3c0[0x1d] = 0;
            local_3c0[0x1e] = 0;
            local_3c0[0x1f] = 0;
            local_3c0[0] = 0;
            local_3c0[1] = 0;
            local_3c0[2] = 0;
            local_3c0[3] = 0;
            local_3c0[4] = 0;
            local_3c0[5] = 0;
            local_3c0[6] = 0;
            local_3c0[7] = 0;
            local_3c0[8] = 0;
            local_3c0[9] = 0;
            local_3c0[10] = 0;
            local_3c0[0xb] = 0;
            local_3c0[0xc] = 0;
            local_3c0[0xd] = 0;
            local_3c0[0xe] = 0;
            local_3c0[0xf] = 0;
            if ((long)pbVar47 - (long)pbVar12 != 0) {
              uVar16 = ((long)pbVar47 - (long)pbVar12) - 0x20;
              pbVar26 = local_3c0;
              pbVar48 = pbVar47;
              if (((uint)uVar16 >> 5 & 1) == 0) {
                pbVar48 = pbVar47 + -0x20;
                uVar5 = *(undefined8 *)(pbVar47 + -0x18);
                uVar39 = *(undefined8 *)(pbVar47 + -0x10);
                pbVar26 = local_3c0 + -0x20;
                *(undefined8 *)pbVar26 = *(undefined8 *)pbVar48;
                *(undefined8 *)(local_3c0 + -0x18) = uVar5;
                *(undefined8 *)(local_3c0 + -0x10) = uVar39;
                uVar6 = *(undefined4 *)(pbVar47 + -8);
                pbVar47[-0x18] = 0;
                pbVar47[-0x17] = 0;
                pbVar47[-0x16] = 0;
                pbVar47[-0x15] = 0;
                pbVar47[-0x14] = 0;
                pbVar47[-0x13] = 0;
                pbVar47[-0x12] = 0;
                pbVar47[-0x11] = 0;
                pbVar47[-0x10] = 0;
                pbVar47[-0xf] = 0;
                pbVar47[-0xe] = 0;
                pbVar47[-0xd] = 0;
                pbVar47[-0xc] = 0;
                pbVar47[-0xb] = 0;
                pbVar47[-10] = 0;
                pbVar47[-9] = 0;
                pbVar48[0] = 0;
                pbVar48[1] = 0;
                pbVar48[2] = 0;
                pbVar48[3] = 0;
                pbVar48[4] = 0;
                pbVar48[5] = 0;
                pbVar48[6] = 0;
                pbVar48[7] = 0;
                *(undefined4 *)(local_3c0 + -8) = uVar6;
              }
              if (0x1f < uVar16) {
                pbVar47 = pbVar48;
                if (((uint)(pbVar48 + (-0x40 - (long)pbVar12)) >> 6 & 1) == 0) {
                  uVar5 = *(undefined8 *)(pbVar48 + -0x20);
                  uVar39 = *(undefined8 *)(pbVar48 + -0x10);
                  *(undefined8 *)(pbVar26 + -0x18) = *(undefined8 *)(pbVar48 + -0x18);
                  *(undefined8 *)(pbVar26 + -0x10) = uVar39;
                  *(undefined8 *)(pbVar26 + -0x20) = uVar5;
                  pbVar48[-0x18] = 0;
                  pbVar48[-0x17] = 0;
                  pbVar48[-0x16] = 0;
                  pbVar48[-0x15] = 0;
                  pbVar48[-0x14] = 0;
                  pbVar48[-0x13] = 0;
                  pbVar48[-0x12] = 0;
                  pbVar48[-0x11] = 0;
                  pbVar48[-0x10] = 0;
                  pbVar48[-0xf] = 0;
                  pbVar48[-0xe] = 0;
                  pbVar48[-0xd] = 0;
                  pbVar48[-0xc] = 0;
                  pbVar48[-0xb] = 0;
                  pbVar48[-10] = 0;
                  pbVar48[-9] = 0;
                  pbVar48[-0x20] = 0;
                  pbVar48[-0x1f] = 0;
                  pbVar48[-0x1e] = 0;
                  pbVar48[-0x1d] = 0;
                  pbVar48[-0x1c] = 0;
                  pbVar48[-0x1b] = 0;
                  pbVar48[-0x1a] = 0;
                  pbVar48[-0x19] = 0;
                  *(undefined4 *)(pbVar26 + -8) = *(undefined4 *)(pbVar48 + -8);
                  pbVar47 = pbVar48 + -0x40;
                  uVar5 = *(undefined8 *)(pbVar48 + -0x38);
                  uVar39 = *(undefined8 *)(pbVar48 + -0x30);
                  *(undefined8 *)(pbVar26 + -0x40) = *(undefined8 *)pbVar47;
                  *(undefined8 *)(pbVar26 + -0x38) = uVar5;
                  *(undefined8 *)(pbVar26 + -0x30) = uVar39;
                  uVar6 = *(undefined4 *)(pbVar48 + -0x28);
                  pbVar48[-0x38] = 0;
                  pbVar48[-0x37] = 0;
                  pbVar48[-0x36] = 0;
                  pbVar48[-0x35] = 0;
                  pbVar48[-0x34] = 0;
                  pbVar48[-0x33] = 0;
                  pbVar48[-0x32] = 0;
                  pbVar48[-0x31] = 0;
                  pbVar48[-0x30] = 0;
                  pbVar48[-0x2f] = 0;
                  pbVar48[-0x2e] = 0;
                  pbVar48[-0x2d] = 0;
                  pbVar48[-0x2c] = 0;
                  pbVar48[-0x2b] = 0;
                  pbVar48[-0x2a] = 0;
                  pbVar48[-0x29] = 0;
                  pbVar47[0] = 0;
                  pbVar47[1] = 0;
                  pbVar47[2] = 0;
                  pbVar47[3] = 0;
                  pbVar47[4] = 0;
                  pbVar47[5] = 0;
                  pbVar47[6] = 0;
                  pbVar47[7] = 0;
                  *(undefined4 *)(pbVar26 + -0x28) = uVar6;
                  pbVar26 = pbVar26 + -0x40;
                }
                if ((byte *)0x3f < pbVar48 + (-0x40 - (long)pbVar12)) {
                  lVar19 = 0;
                  do {
                    uVar5 = *(undefined8 *)(pbVar47 + lVar19 + -0x20);
                    uVar39 = *(undefined8 *)(pbVar47 + lVar19 + -0x10);
                    lVar34 = lVar19 + -0x80;
                    *(undefined8 *)(pbVar26 + lVar19 + -0x18) =
                         *(undefined8 *)(pbVar47 + lVar19 + -0x18);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x10) = uVar39;
                    *(undefined8 *)(pbVar26 + lVar19 + -0x20) = uVar5;
                    uVar6 = *(undefined4 *)(pbVar47 + lVar19 + -8);
                    pbVar48 = pbVar47 + lVar19 + -0x18;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x10;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x20;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    *(undefined4 *)(pbVar26 + lVar19 + -8) = uVar6;
                    uVar39 = *(undefined8 *)(pbVar47 + lVar19 + -0x30);
                    uVar5 = *(undefined8 *)(pbVar47 + lVar19 + -0x38);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x40) =
                         *(undefined8 *)(pbVar47 + lVar19 + -0x40);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x38) = uVar5;
                    *(undefined8 *)(pbVar26 + lVar19 + -0x30) = uVar39;
                    uVar6 = *(undefined4 *)(pbVar47 + lVar19 + -0x28);
                    pbVar48 = pbVar47 + lVar19 + -0x38;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x30;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x40;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    *(undefined4 *)(pbVar26 + lVar19 + -0x28) = uVar6;
                    uVar5 = *(undefined8 *)(pbVar47 + lVar19 + -0x60);
                    uVar39 = *(undefined8 *)(pbVar47 + lVar19 + -0x50);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x58) =
                         *(undefined8 *)(pbVar47 + lVar19 + -0x58);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x50) = uVar39;
                    *(undefined8 *)(pbVar26 + lVar19 + -0x60) = uVar5;
                    uVar6 = *(undefined4 *)(pbVar47 + lVar19 + -0x48);
                    pbVar48 = pbVar47 + lVar19 + -0x60;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x58;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x50;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    *(undefined4 *)(pbVar26 + lVar19 + -0x48) = uVar6;
                    uVar5 = *(undefined8 *)(pbVar47 + lVar19 + -0x80);
                    uVar39 = *(undefined8 *)(pbVar47 + lVar19 + -0x70);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x78) =
                         *(undefined8 *)(pbVar47 + lVar19 + -0x78);
                    *(undefined8 *)(pbVar26 + lVar19 + -0x70) = uVar39;
                    *(undefined8 *)(pbVar26 + lVar19 + -0x80) = uVar5;
                    pbVar48 = pbVar47 + lVar19 + -0x78;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x70;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    pbVar48 = pbVar47 + lVar19 + -0x80;
                    pbVar48[0] = 0;
                    pbVar48[1] = 0;
                    pbVar48[2] = 0;
                    pbVar48[3] = 0;
                    pbVar48[4] = 0;
                    pbVar48[5] = 0;
                    pbVar48[6] = 0;
                    pbVar48[7] = 0;
                    *(undefined4 *)(pbVar26 + lVar19 + -0x68) =
                         *(undefined4 *)(pbVar47 + lVar19 + -0x68);
                    lVar19 = lVar34;
                  } while ((long)pbVar12 - (long)pbVar47 != lVar34);
                }
              }
              local_3c0 = (byte *)(lVar49 + (lVar35 + (uVar16 >> 5 ^ 0xffffffffffffffff)) * 0x20);
              pbVar12 = local_3b8;
              while (pbVar47 = pbVar12, local_3b8 = pbVar52, pbVar52 = local_3b8, pbVar12 = pbVar17,
                    pbVar47 != pbVar17) {
                pbVar12 = pbVar47 + -0x20;
                if (((*pbVar12 & 1) != 0) && (*(ulong *)(pbVar47 + -0x10) != 0)) {
                  FUN_710392eb40(*(ulong *)(pbVar47 + -0x10));
                  pbVar52 = local_3b8;
                }
              }
            }
            local_3b8 = pbVar52;
            if (pbVar12 != (byte *)0x0) {
              FUN_710392eb40((ulong)pbVar12);
            }
          }
          *(int *)(local_3b8 + -8) = (int)*puVar51;
          sVar13 = strlen((char *)((long)puVar51 + 4));
          puVar51 = (ulong *)((char *)((long)puVar51 + 4) + sVar13 + 1);
          std::string::assign((char *)(local_3b8 + -0x20));
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar32);
      }
      plVar18 = *(long **)(param_1 + 0x20);
      if (plVar18 != (long *)0x0) {
LAB_7103253ac0:
        uVar32 = (uint)*(byte *)(plVar18 + 0x17);
        if (*(byte *)(plVar18 + 0x17) == 0) {
          uVar29 = 0;
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          uVar41 = 0xffffffff;
          pbVar12 = (byte *)((long)plVar18 + 0xb9);
          do {
            uVar33 = uVar32 + 0x20;
            if (0x19 < uVar32 - 0x41) {
              uVar33 = uVar32;
            }
            uVar41 = (&DAT_7104754084)[(uVar33 ^ uVar41) & 0xff] ^ uVar41 >> 8;
            uVar32 = (uint)*pbVar12;
            uVar16 = uVar16 + 0x100000000;
            pbVar12 = pbVar12 + 1;
          } while (uVar32 != 0);
          uVar29 = (ulong)~uVar41;
          uVar16 = uVar16 & 0xff00000000;
        }
        if ((uVar16 | uVar29) != (local_3e0 & 0xffffffffff)) goto code_r0x007103253b24;
        plVar18[3] = local_3e0 & 0xffffffffff;
        *(uint *)(plVar18 + 0x10) = local_3d8;
        *(undefined4 *)((long)plVar18 + 0x84) = local_3d0;
        *(undefined4 *)(plVar18 + 0x11) = uStack_3d4;
        *(undefined4 *)((long)plVar18 + 0x8c) = local_3cc;
        *(undefined4 *)(plVar18 + 0x12) = local_3c8;
        *(undefined4 *)((long)plVar18 + 0x94) = local_3c4;
        plVar22 = plVar18 + 0x1d;
        pbVar12 = (byte *)*plVar22;
        if (pbVar12 != (byte *)0x0) {
          plVar46 = plVar18 + 0x1e;
          pbVar47 = (byte *)*plVar46;
          if (pbVar47 == pbVar12) {
            *plVar46 = (long)pbVar12;
          }
          else {
            do {
              pbVar52 = pbVar47 + -0x20;
              if (((*pbVar52 & 1) != 0) && (*(ulong *)(pbVar47 + -0x10) != 0)) {
                FUN_710392eb40(*(ulong *)(pbVar47 + -0x10));
              }
              pbVar47 = pbVar52;
            } while (pbVar12 != pbVar52);
            *plVar46 = (long)pbVar12;
            pbVar12 = (byte *)*plVar22;
          }
          if (pbVar12 != (byte *)0x0) {
            FUN_710392eb40((ulong)pbVar12);
          }
          plVar18[0x1e] = 0;
          plVar18[0x1f] = 0;
          *plVar22 = 0;
        }
        plVar18[0x1d] = (long)local_3c0;
        plVar18[0x1e] = (long)local_3b8;
        plVar18[0x1f] = (long)local_3b0;
        local_3b8 = (byte *)0x0;
        local_3b0 = (byte *)0x0;
        local_3c0 = (byte *)0x0;
        uVar29 = plVar18[3];
        uVar37 = *(ulong *)(param_1 + 0x40);
        uVar16 = uVar29 & 0xffffffffff;
        if (uVar37 == 0) {
LAB_7103253cc4:
          plVar22 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8);
          if (plVar22 == (long *)0x0) {
            local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
            local_2f0 = (string *)&SUB_00000020;
            param_3 = (long *********)&local_2f0;
            (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
            plVar22 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,
                                             param_7,param_8);
          }
          plVar22[2] = uVar29;
          plVar22[3] = (long)(plVar18 + 3);
          *plVar22 = 0;
          plVar22[1] = uVar16;
          fVar54 = (float)(*(long *)(param_1 + 0x50) + 1);
          if ((uVar37 == 0) || (*(float *)(param_1 + 0x58) * (float)uVar37 < fVar54)) {
            if (uVar37 < 3) {
              uVar40 = 1;
            }
            else {
              uVar40 = (ulong)((uVar37 - 1 & uVar37) != 0);
            }
            uVar40 = uVar40 | uVar37 << 1;
            uVar29 = (ulong)(fVar54 / *(float *)(param_1 + 0x58));
            if (uVar29 <= uVar40) {
              uVar29 = uVar40;
            }
            if (uVar29 - 1 == 0) {
              uVar29 = 2;
            }
            else if ((uVar29 - 1 & uVar29) != 0) {
              uVar29 = std::__next_prime(uVar29);
            }
            uVar40 = *(ulong *)(param_1 + 0x40);
            if (uVar40 < uVar29) {
LAB_7103253db0:
              FUN_7103255500(puVar2,uVar29,(long ****)param_3,param_4,param_5,param_6,param_7,
                             param_8);
            }
            else if (uVar29 < uVar40) {
              uVar37 = (ulong)((float)*(ulong *)(param_1 + 0x50) / *(float *)(param_1 + 0x58));
              if (uVar40 < 3 || (uVar40 - 1 & uVar40) != 0) {
                uVar37 = std::__next_prime(uVar37);
              }
              else if (1 < uVar37) {
                uVar37 = 1L << (-LZCOUNT(uVar37 - 1) & 0x3fU);
              }
              if (uVar37 <= uVar29) {
                uVar37 = uVar29;
              }
              uVar29 = uVar37;
              if (uVar37 < uVar40) goto LAB_7103253db0;
            }
            uVar37 = *(ulong *)(param_1 + 0x40);
            if ((uVar37 - 1 & uVar37) == 0) {
              uVar40 = uVar37 - 1 & uVar16;
            }
            else {
              uVar40 = uVar16;
              if (uVar37 <= uVar16) {
                uVar40 = 0;
                if (uVar37 != 0) {
                  uVar40 = uVar16 / uVar37;
                }
                uVar40 = uVar16 - uVar40 * uVar37;
              }
            }
          }
          uVar16 = *puVar2;
          plVar18 = *(long **)(uVar16 + uVar40 * 8);
          if (plVar18 == (long *)0x0) {
            *plVar22 = *plVar20;
            *plVar20 = (long)plVar22;
            *(long **)(uVar16 + uVar40 * 8) = plVar20;
            if (*plVar22 != 0) {
              uVar40 = *(ulong *)(*plVar22 + 8);
              if ((uVar37 - 1 & uVar37) == 0) {
                uVar40 = uVar40 & uVar37 - 1;
              }
              else if (uVar37 <= uVar40) {
                uVar16 = 0;
                if (uVar37 != 0) {
                  uVar16 = uVar40 / uVar37;
                }
                uVar40 = uVar40 - uVar16 * uVar37;
              }
              plVar18 = (long *)(*puVar2 + uVar40 * 8);
              goto LAB_7103253ed0;
            }
          }
          else {
            *plVar22 = *plVar18;
LAB_7103253ed0:
            *plVar18 = (long)plVar22;
          }
          *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
        }
        else {
          uVar38 = uVar37 - 1;
          if ((uVar38 & uVar37) == 0) {
            uVar40 = uVar38 & uVar16;
          }
          else {
            uVar40 = uVar16;
            if (uVar37 <= uVar16) {
              uVar40 = 0;
              if (uVar37 != 0) {
                uVar40 = uVar16 / uVar37;
              }
              uVar40 = uVar16 - uVar40 * uVar37;
            }
          }
          plVar22 = *(long **)(*puVar2 + uVar40 * 8);
          if (plVar22 == (long *)0x0) goto LAB_7103253cc4;
          if ((uVar38 & uVar37) == 0) {
            do {
              plVar22 = (long *)*plVar22;
              if ((plVar22 == (long *)0x0) ||
                 (plVar22[1] != uVar16 && (plVar22[1] & uVar38) != uVar40)) goto LAB_7103253cc4;
            } while (plVar22[2] != uVar29);
          }
          else {
            do {
              plVar22 = (long *)*plVar22;
              if (plVar22 == (long *)0x0) goto LAB_7103253cc4;
              uVar38 = plVar22[1];
              if (uVar38 != uVar16) {
                if (uVar37 <= uVar38) {
                  uVar36 = 0;
                  if (uVar37 != 0) {
                    uVar36 = uVar38 / uVar37;
                  }
                  uVar38 = uVar38 - uVar36 * uVar37;
                }
                if (uVar38 != uVar40) goto LAB_7103253cc4;
              }
            } while (plVar22[2] != uVar29);
          }
        }
      }
LAB_7103253ee4:
      pbVar12 = local_3c0;
      uVar31 = uVar31 + 1;
      pbVar47 = local_3b8;
      if (local_3c0 != (byte *)0x0) {
        while (pbVar52 = pbVar47, pbVar52 != pbVar12) {
          pbVar47 = pbVar52 + -0x20;
          if (((*pbVar47 & 1) != 0) && (*(ulong *)(pbVar52 + -0x10) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar52 + -0x10));
          }
        }
        local_3b8 = pbVar12;
        if (local_3c0 != (byte *)0x0) {
          FUN_710392eb40((ulong)local_3c0);
        }
      }
    } while (uVar31 < uVar24);
  }
  if (uVar53 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar53,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  psVar21 = local_90;
  psVar45 = local_88;
  if (local_90 != (string *)0x0) {
    while (psVar8 = psVar45, psVar8 != psVar21) {
      psVar45 = psVar8 + -0x20;
      if ((((byte)*psVar45 & 1) != 0) && (*(ulong *)(psVar8 + -0x10) != 0)) {
        FUN_710392eb40(*(ulong *)(psVar8 + -0x10));
      }
    }
    local_88 = psVar21;
    if (local_90 != (string *)0x0) {
      FUN_710392eb40((ulong)local_90);
    }
  }
  local_260[0] = 0;
  local_268 = 0;
  lVar35 = *(long *)(param_1 + 8);
  pcVar15 = *(char **)(lVar35 + 0x20);
  if ((*pcVar15 == '\f') && (iVar10 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    uVar40 = *(ulong *)(lVar35 + 0x48) & 0xffffffffff;
    iVar28 = 0;
    pbVar12 = &DAT_7104742dbb;
    do {
      iVar23 = iVar10 + iVar28;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar35 + 0x18) + 0x28) + (long)*(int *)(pcVar15 + 5) +
                       (long)iVar23 * 8);
      uVar16 = *(ulong *)(*(long *)(*(long *)(lVar35 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar16 == uVar40) {
        uVar53 = puVar1[1];
        if ((int)uVar53 < 0) goto LAB_7103254054;
        pbVar12 = (byte *)(pcVar15 + (int)uVar53);
        break;
      }
      iVar3 = iVar23 + -1;
      if (uVar16 <= uVar40) {
        iVar28 = iVar23 + 1;
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
    } while (iVar28 <= iVar10);
  }
  else {
LAB_7103254054:
    pbVar12 = &DAT_7104742dbb;
  }
  if ((1 < *pbVar12 - 0xb) || (uVar53 = *(uint *)(pbVar12 + 1), (int)uVar53 < 1)) {
    return;
  }
  uVar24 = 0;
  puVar51 = (ulong *)(param_1 + 0x60);
  plVar20 = (long *)(param_1 + 0x70);
  pcVar15 = "";
LAB_71032540f8:
  FUN_710326a3e0(&local_3e0,lVar35,uVar24);
  pcVar43 = (char *)CONCAT44(uStack_3d4,local_3d8);
  cVar27 = *pcVar43;
  pcVar50 = pcVar15;
  if ((cVar27 == '\f') && (iVar10 = *(int *)(pcVar43 + 1) + -1, 0 < *(int *)(pcVar43 + 1))) {
    iVar28 = 0;
    do {
      iVar23 = iVar10 + iVar28;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)(*(long *)(local_3e0 + 0x28) + (long)*(int *)(pcVar43 + 5) + (long)iVar23 * 8
                       );
      uVar40 = *(ulong *)(*(long *)(local_3e0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar40 == 0xdcad4dd2d) {
        uVar16 = (ulong)(int)puVar1[1];
        uVar40 = 0;
        if ((uVar16 & 0x80000000) == 0) {
          uVar40 = local_3e0;
          pcVar50 = pcVar43 + uVar16;
        }
        goto LAB_7103254178;
      }
      iVar3 = iVar23 + -1;
      if (uVar40 < 0xdcad4dd2e) {
        iVar28 = iVar23 + 1;
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
    } while (iVar28 <= iVar10);
  }
  uVar40 = 0;
LAB_7103254178:
  if (*pcVar50 == '\t') {
    uVar40 = *(ulong *)(*(long *)(uVar40 + 0x20) + (long)*(int *)(pcVar50 + 1) * 8);
  }
  else {
    uVar40 = 0;
  }
  if ((cVar27 == '\f') && (iVar10 = *(int *)(pcVar43 + 1) + -1, 0 < *(int *)(pcVar43 + 1))) {
    iVar28 = 0;
    do {
      iVar23 = iVar10 + iVar28;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)(*(long *)(local_3e0 + 0x28) + (long)*(int *)(pcVar43 + 5) + (long)iVar23 * 8
                       );
      uVar16 = *(ulong *)(*(long *)(local_3e0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar16 == 0x97866860a) {
        uVar31 = puVar1[1];
        if (-1 < (int)uVar31) {
          pcVar50 = pcVar43 + (int)uVar31;
          uVar16 = local_3e0;
          goto LAB_7103254238;
        }
        break;
      }
      iVar3 = iVar23 + -1;
      if (uVar16 < 0x97866860b) {
        iVar28 = iVar23 + 1;
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
    } while (iVar28 <= iVar10);
  }
  uVar16 = 0;
  pcVar50 = pcVar15;
LAB_7103254238:
  if (*pcVar50 == '\t') {
    uVar16 = *(ulong *)(*(long *)(uVar16 + 0x20) + (long)*(int *)(pcVar50 + 1) * 8);
  }
  else {
    uVar16 = 0;
  }
  uVar29 = (ulong)(uVar24 & 0xffff | 0xd90000) << 0x28 | uVar16 & 0xffffffffff;
  if ((uVar40 & 0xffffffffff) != 0) {
    FUN_7103254d10((long *)&local_160,param_1,uVar40);
    uVar31 = 0;
    uVar32 = 0x10;
    if ((uVar16 & 0xffffffffff) == 0x17ad27ad7d) {
      uVar32 = 1;
    }
LAB_71032542a0:
    local_260[0] = 0;
    local_268 = 0;
    FUN_710062dc20((uint *)&local_268,"info%d");
    if (local_268._4_4_ == 0) {
      uVar40 = 0;
    }
    else {
      uVar41 = 0xffffffff;
      pbVar12 = local_260;
      do {
        pbVar47 = pbVar12 + 1;
        bVar7 = *pbVar12;
        uVar33 = bVar7 + 0x20;
        if (0x19 < bVar7 - 0x41) {
          uVar33 = (uint)bVar7;
        }
        uVar41 = (&DAT_7104754084)[(uVar33 ^ uVar41) & 0xff] ^ uVar41 >> 8;
        pbVar12 = pbVar47;
      } while (pbVar47 < local_260 + local_268._4_4_);
      uVar40 = (ulong)~uVar41;
    }
    if ((*local_158 == '\f') && (iVar10 = *(int *)(local_158 + 1) + -1, 0 < *(int *)(local_158 + 1))
       ) {
      pplVar4 = (long **)(uVar40 | ((long)(int)local_268._4_4_ & 0xffU) << 0x20);
      iVar28 = 0;
      do {
        iVar23 = iVar10 + iVar28;
        if (iVar23 < 0) {
          iVar23 = iVar23 + 1;
        }
        iVar23 = iVar23 >> 1;
        puVar1 = (uint *)((long)local_160[5] + (long)iVar23 * 8 + (long)*(int *)(local_158 + 5));
        if (local_160[4][*puVar1] == pplVar4) {
          uVar41 = puVar1[1];
          if (-1 < (int)uVar41) {
            pcVar50 = local_158 + (int)uVar41;
            pppplVar14 = local_160;
            goto LAB_710325439c;
          }
          break;
        }
        iVar3 = iVar23 + -1;
        if (local_160[4][*puVar1] <= pplVar4) {
          iVar28 = iVar23 + 1;
          iVar3 = iVar10;
        }
        iVar10 = iVar3;
      } while (iVar28 <= iVar10);
    }
    pppplVar14 = (long ****)0x0;
    pcVar50 = pcVar15;
LAB_710325439c:
    if ((*pcVar50 == '\t') &&
       (pppplVar14 = (long ****)pppplVar14[4][*(int *)(pcVar50 + 1)],
       ((ulong)pppplVar14 & 0xffffffffff) != 0)) {
      FUN_7103254f10(&local_2f0,param_1,(ulong)pppplVar14);
      if ((*local_2e8 == '\f') &&
         (iVar10 = *(int *)(local_2e8 + 1) + -1, 0 < *(int *)(local_2e8 + 1))) {
        iVar28 = 0;
        do {
          iVar23 = iVar10 + iVar28;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(local_2f0 + 0x28) +
                           (long)iVar23 * 8 + (long)*(int *)(local_2e8 + 5));
          uVar40 = *(ulong *)(*(long *)(local_2f0 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar40 == 0x9d0ed463e) {
            uVar41 = puVar1[1];
            if (-1 < (int)uVar41) {
              pcVar50 = local_2e8 + (int)uVar41;
              psVar21 = local_2f0;
              goto LAB_7103254450;
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (uVar40 < 0x9d0ed463f) {
            iVar28 = iVar23 + 1;
            iVar3 = iVar10;
          }
          iVar10 = iVar3;
        } while (iVar28 <= iVar10);
      }
      psVar21 = (string *)0x0;
      pcVar50 = pcVar15;
LAB_7103254450:
      if (*pcVar50 == '\t') {
        uVar16 = *(ulong *)(*(long *)(psVar21 + 0x20) + (long)*(int *)(pcVar50 + 1) * 8);
        uVar40 = uVar16 & 0xffffffffff;
        if ((uVar40 != 0) && (uVar37 = *(ulong *)(param_1 + 0x18), uVar37 != 0)) {
          uVar36 = uVar37 - 1;
          uVar38 = uVar36 & uVar37;
          if (uVar38 == 0) {
            uVar30 = uVar36 & uVar40;
          }
          else {
            uVar30 = uVar40;
            if (uVar37 <= uVar40) {
              uVar30 = 0;
              if (uVar37 != 0) {
                uVar30 = uVar40 / uVar37;
              }
              uVar30 = uVar40 - uVar30 * uVar37;
            }
          }
          plVar18 = *(long **)(*(long *)(param_1 + 0x10) + uVar30 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if (uVar38 == 0) {
              do {
                uVar37 = plVar18[1];
                uVar38 = uVar37 & uVar36;
                if (uVar37 != uVar40 && uVar38 != uVar30) break;
                if ((uVar37 == uVar40) && (((plVar18[2] ^ uVar16) & 0xffffffffff) == 0))
                goto LAB_710325453c;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar36 = plVar18[1];
                if (uVar36 == uVar40) {
                  if (((plVar18[2] ^ uVar16) & 0xffffffffff) == 0) goto LAB_710325453c;
                }
                else {
                  if (uVar37 <= uVar36) {
                    uVar38 = 0;
                    if (uVar37 != 0) {
                      uVar38 = uVar36 / uVar37;
                    }
                    uVar36 = uVar36 - uVar38 * uVar37;
                  }
                  if (uVar36 != uVar30) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
      }
      goto LAB_7103254844;
    }
    goto LAB_7103254850;
  }
  goto LAB_7103254864;
code_r0x007103253b24:
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) goto LAB_7103253ee4;
  goto LAB_7103253ac0;
LAB_710325453c:
  uVar40 = plVar18[3];
  if (uVar40 == 0) goto LAB_7103254844;
  uVar37 = *(ulong *)(param_1 + 0x68);
  uVar16 = uVar40 & 0xffffffffff;
  if (uVar37 != 0) {
    uVar36 = uVar37 - 1;
    if ((uVar36 & uVar37) == 0) {
      uVar38 = uVar36 & uVar16;
    }
    else {
      uVar38 = uVar16;
      if (uVar37 <= uVar16) {
        uVar38 = 0;
        if (uVar37 != 0) {
          uVar38 = uVar16 / uVar37;
        }
        uVar38 = uVar16 - uVar38 * uVar37;
      }
    }
    plVar18 = *(long **)(*puVar51 + uVar38 * 8);
    if (plVar18 != (long *)0x0) {
      if ((uVar36 & uVar37) == 0) {
        do {
          plVar18 = (long *)*plVar18;
          if ((plVar18 == (long *)0x0) || (plVar18[1] != uVar16 && (plVar18[1] & uVar36) != uVar38))
          goto LAB_71032545f8;
        } while (plVar18[2] != uVar40);
      }
      else {
        do {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_71032545f8;
          uVar36 = plVar18[1];
          if (uVar36 != uVar16) {
            if (uVar37 <= uVar36) {
              uVar30 = 0;
              if (uVar37 != 0) {
                uVar30 = uVar36 / uVar37;
              }
              uVar36 = uVar36 - uVar30 * uVar37;
            }
            if (uVar36 != uVar38) goto LAB_71032545f8;
          }
        } while (plVar18[2] != uVar40);
      }
      goto LAB_7103254844;
    }
  }
LAB_71032545f8:
  plVar18 = (long *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8);
  if (plVar18 == (long *)0x0) {
    local_6c[0] = 0;
    local_78 = (long ***)&SUB_00000020;
    pppplVar14 = &local_78;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
    plVar18 = (long *)FUN_710392e290(0x10,0x20,pppplVar14,param_4,param_5,param_6,param_7,param_8);
  }
  plVar18[2] = uVar40;
  plVar18[3] = uVar29;
  *plVar18 = 0;
  plVar18[1] = uVar16;
  fVar54 = (float)(*(long *)(param_1 + 0x78) + 1);
  if ((uVar37 == 0) || (*(float *)(param_1 + 0x80) * (float)uVar37 < fVar54)) {
    if (uVar37 < 3) {
      uVar40 = 1;
    }
    else {
      uVar40 = (ulong)((uVar37 - 1 & uVar37) != 0);
    }
    uVar40 = uVar40 | uVar37 << 1;
    uVar37 = (ulong)(fVar54 / *(float *)(param_1 + 0x80));
    if (uVar37 <= uVar40) {
      uVar37 = uVar40;
    }
    if (uVar37 - 1 == 0) {
      uVar37 = 2;
    }
    else if ((uVar37 - 1 & uVar37) != 0) {
      uVar37 = std::__next_prime(uVar37);
    }
    uVar38 = *(ulong *)(param_1 + 0x68);
    uVar40 = uVar37;
    if (uVar38 < uVar37) {
LAB_71032546fc:
      FUN_7103255260(puVar51,uVar40,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    }
    else if (uVar37 < uVar38) {
      uVar40 = (ulong)((float)*(ulong *)(param_1 + 0x78) / *(float *)(param_1 + 0x80));
      if (uVar38 < 3 || (uVar38 - 1 & uVar38) != 0) {
        uVar40 = std::__next_prime(uVar40);
      }
      else if (1 < uVar40) {
        uVar40 = 1L << (-LZCOUNT(uVar40 - 1) & 0x3fU);
      }
      if (uVar40 <= uVar37) {
        uVar40 = uVar37;
      }
      if (uVar40 < uVar38) goto LAB_71032546fc;
    }
    uVar37 = *(ulong *)(param_1 + 0x68);
    if ((uVar37 - 1 & uVar37) == 0) {
      uVar38 = uVar37 - 1 & uVar16;
    }
    else {
      uVar38 = uVar16;
      if (uVar37 <= uVar16) {
        uVar40 = 0;
        if (uVar37 != 0) {
          uVar40 = uVar16 / uVar37;
        }
        uVar38 = uVar16 - uVar40 * uVar37;
      }
    }
  }
  uVar40 = *puVar51;
  plVar22 = *(long **)(uVar40 + uVar38 * 8);
  if (plVar22 == (long *)0x0) {
    *plVar18 = *plVar20;
    *plVar20 = (long)plVar18;
    *(long **)(uVar40 + uVar38 * 8) = plVar20;
    if (*plVar18 != 0) {
      uVar40 = *(ulong *)(*plVar18 + 8);
      if ((uVar37 - 1 & uVar37) == 0) {
        uVar40 = uVar40 & uVar37 - 1;
      }
      else if (uVar37 <= uVar40) {
        uVar16 = 0;
        if (uVar37 != 0) {
          uVar16 = uVar40 / uVar37;
        }
        uVar40 = uVar40 - uVar16 * uVar37;
      }
      plVar22 = (long *)(*puVar51 + uVar40 * 8);
      goto LAB_7103254830;
    }
  }
  else {
    *plVar18 = *plVar22;
LAB_7103254830:
    *plVar22 = (long)plVar18;
  }
  *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 1;
LAB_7103254844:
  uVar31 = uVar31 + 1;
  if (uVar32 <= uVar31) goto LAB_7103254850;
  goto LAB_71032542a0;
LAB_7103254850:
  cVar27 = *pcVar43;
LAB_7103254864:
  if ((cVar27 == '\f') && (iVar10 = *(int *)(pcVar43 + 1) + -1, 0 < *(int *)(pcVar43 + 1))) {
    iVar28 = 0;
    do {
      iVar23 = iVar10 + iVar28;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)(*(long *)(local_3e0 + 0x28) + (long)*(int *)(pcVar43 + 5) + (long)iVar23 * 8
                       );
      uVar40 = *(ulong *)(*(long *)(local_3e0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar40 == 0x14341640b8) {
        uVar31 = puVar1[1];
        if (-1 < (int)uVar31) {
          pcVar50 = pcVar43 + (int)uVar31;
          uVar40 = local_3e0;
          goto LAB_71032548f0;
        }
        break;
      }
      iVar3 = iVar23 + -1;
      if (uVar40 < 0x14341640b9) {
        iVar28 = iVar23 + 1;
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
    } while (iVar28 <= iVar10);
  }
  uVar40 = 0;
  pcVar50 = pcVar15;
LAB_71032548f0:
  if (*pcVar50 == '\t') {
    local_2f0 = *(string **)(*(long *)(uVar40 + 0x20) + (long)*(int *)(pcVar50 + 1) * 8);
    if (((ulong)local_2f0 & 0xffffffffff) != 0) {
      local_160 = (long ****)&local_2f0;
      plVar18 = FUN_7103255110((long *)(param_1 + 0x88),(ulong)local_2f0,(long ****)&local_160,
                               param_4,param_5,param_6,param_7,param_8);
      plVar18[5] = uVar29;
    }
  }
  else {
    local_2f0 = (string *)0x0;
  }
  if ((*pcVar43 == '\f') && (iVar10 = *(int *)(pcVar43 + 1) + -1, 0 < *(int *)(pcVar43 + 1))) {
    iVar28 = 0;
    do {
      iVar23 = iVar10 + iVar28;
      if (iVar23 < 0) {
        iVar23 = iVar23 + 1;
      }
      iVar23 = iVar23 >> 1;
      puVar1 = (uint *)(*(long *)(local_3e0 + 0x28) + (long)*(int *)(pcVar43 + 5) + (long)iVar23 * 8
                       );
      uVar40 = *(ulong *)(*(long *)(local_3e0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar40 == 0x1560c0949b) {
        uVar31 = puVar1[1];
        if (-1 < (int)uVar31) {
          pcVar43 = pcVar43 + (int)uVar31;
          uVar40 = local_3e0;
          goto LAB_71032549b8;
        }
        break;
      }
      iVar3 = iVar23 + -1;
      if (uVar40 < 0x1560c0949c) {
        iVar28 = iVar23 + 1;
        iVar3 = iVar10;
      }
      iVar10 = iVar3;
    } while (iVar28 <= iVar10);
  }
  uVar40 = 0;
  pcVar43 = pcVar15;
LAB_71032549b8:
  if (*pcVar43 == '\t') {
    local_78 = *(long ****)(*(long *)(uVar40 + 0x20) + (long)*(int *)(pcVar43 + 1) * 8);
    if (((ulong)local_78 & 0xffffffffff) != 0) {
      local_160 = &local_78;
      plVar18 = FUN_7103255110((long *)(param_1 + 0xa0),(ulong)local_78,(long ****)&local_160,
                               param_4,param_5,param_6,param_7,param_8);
      plVar18[5] = uVar29;
    }
  }
  else {
    local_78 = (long ***)0x0;
  }
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar53) {
    return;
  }
  lVar35 = *(long *)(param_1 + 8);
  goto LAB_71032540f8;
}

