// addr:      710002a9d0
// offset:    0x2a9d0
// name:      FUN_710002a9d0
// mangled:   
// signature: undefined __cdecl FUN_710002a9d0(long * param_1, int param_2)


void FUN_710002a9d0(long *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined4 uVar27;
  char *pcVar28;
  ushort uVar29;
  ulong uVar30;
  undefined1 *puVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  
  lVar17 = param_1[7];
  puVar25 = (undefined1 *)param_1[3];
  iVar5 = *(int *)(lVar17 + 0x3c);
  uVar7 = *(uint *)(lVar17 + 0x40);
  iVar14 = (int)puVar25 - (param_2 - (int)param_1[4]);
  uVar11 = *(uint *)(lVar17 + 0x44);
  uVar6 = *(uint *)(lVar17 + 0x78);
  uVar8 = *(uint *)(lVar17 + 0x7c);
  iVar13 = iVar14 + -1;
  pbVar20 = (byte *)*param_1;
  pbVar2 = pbVar20 + ((int)param_1[1] - 5);
  puVar9 = *(undefined1 **)(lVar17 + 0x48);
  uVar19 = *(ulong *)(lVar17 + 0x50);
  uVar23 = *(uint *)(lVar17 + 0x58);
  puVar3 = puVar25 + ((int)param_1[4] - 0x101);
  lVar22 = *(long *)(lVar17 + 0x68);
  lVar10 = *(long *)(lVar17 + 0x70);
LAB_710002aa88:
  pcVar28 = "invalid distance code";
  if (uVar23 < 0xf) {
    bVar12 = *pbVar20;
    uVar30 = (ulong)uVar23;
    pbVar21 = pbVar20 + 1;
    uVar15 = uVar23 + 8;
    uVar23 = uVar23 + 0x10;
    pbVar20 = pbVar20 + 2;
    uVar19 = ((ulong)bVar12 << (uVar30 & 0x3f)) + uVar19 +
             ((ulong)*pbVar21 << ((ulong)uVar15 & 0x3f));
  }
  pbVar21 = (byte *)(lVar22 + (uVar19 & (uint)~(-1 << (ulong)(uVar6 & 0x1f))) * 4);
  uVar15 = (uint)*pbVar21;
  uVar29 = *(ushort *)(pbVar21 + 2);
  uVar19 = uVar19 >> ((ulong)pbVar21[1] & 0x3f);
  uVar23 = uVar23 - pbVar21[1];
  if (*pbVar21 != 0) {
    do {
      pbVar21 = pbVar20;
      if ((uVar15 >> 4 & 1) != 0) {
        uVar33 = (uint)uVar29;
        uVar15 = uVar15 & 0xf;
        if (uVar15 != 0) {
          if (uVar23 < uVar15) {
            pbVar21 = pbVar20 + 1;
            uVar30 = (ulong)uVar23;
            uVar23 = uVar23 + 8;
            uVar19 = ((ulong)*pbVar20 << (uVar30 & 0x3f)) + uVar19;
          }
          uVar18 = (uint)uVar19;
          uVar19 = uVar19 >> uVar15;
          uVar33 = (uVar18 & (-1 << (ulong)uVar15 ^ 0xffffffffU)) + uVar33;
          uVar23 = uVar23 - uVar15;
        }
        if (uVar23 < 0xf) {
          bVar12 = *pbVar21;
          uVar30 = (ulong)uVar23;
          pbVar20 = pbVar21 + 1;
          uVar15 = uVar23 + 8;
          uVar23 = uVar23 + 0x10;
          pbVar21 = pbVar21 + 2;
          uVar19 = ((ulong)bVar12 << (uVar30 & 0x3f)) + uVar19 +
                   ((ulong)*pbVar20 << ((ulong)uVar15 & 0x3f));
        }
        pbVar20 = (byte *)(lVar10 + (uVar19 & (uint)~(-1 << (ulong)(uVar8 & 0x1f))) * 4);
        bVar12 = *pbVar20;
        uVar29 = *(ushort *)(pbVar20 + 2);
        uVar19 = uVar19 >> ((ulong)pbVar20[1] & 0x3f);
        uVar23 = uVar23 - pbVar20[1];
        goto joined_r0x00710002abb0;
      }
      if ((uVar15 >> 6 & 1) != 0) {
        if ((uVar15 >> 5 & 1) == 0) {
          pcVar28 = "invalid literal/length code";
          goto LAB_710002b108;
        }
        uVar27 = 0x3f3f;
        goto LAB_710002b110;
      }
      pbVar21 = (byte *)(lVar22 + ((uVar19 & (uint)~(-1 << (ulong)(uVar15 & 0x1f))) + (ulong)uVar29)
                                  * 4);
      uVar15 = (uint)*pbVar21;
      uVar29 = *(ushort *)(pbVar21 + 2);
      uVar19 = uVar19 >> ((ulong)pbVar21[1] & 0x3f);
      uVar23 = uVar23 - pbVar21[1];
    } while (uVar15 != 0);
  }
  puVar26 = puVar25 + 1;
  *puVar25 = (char)uVar29;
  if (puVar26 < puVar3) goto LAB_710002ab1c;
  goto LAB_710002b114;
joined_r0x00710002abb0:
  uVar15 = (uint)uVar29;
  if ((bVar12 >> 4 & 1) != 0) goto LAB_710002abe4;
  if ((bVar12 >> 6 & 1) != 0) goto LAB_710002b108;
  pbVar20 = (byte *)(lVar10 + ((uVar19 & (uint)~(-1 << (ulong)(bVar12 & 0x1f))) + (ulong)uVar29) * 4
                    );
  bVar12 = *pbVar20;
  uVar29 = *(ushort *)(pbVar20 + 2);
  uVar19 = uVar19 >> ((ulong)pbVar20[1] & 0x3f);
  uVar23 = uVar23 - pbVar20[1];
  goto joined_r0x00710002abb0;
LAB_710002abe4:
  uVar32 = bVar12 & 0xf;
  pbVar20 = pbVar21;
  uVar18 = uVar23;
  if (uVar23 < uVar32) {
    pbVar20 = pbVar21 + 1;
    uVar19 = ((ulong)*pbVar21 << ((ulong)uVar23 & 0x3f)) + uVar19;
    uVar18 = uVar23 + 8;
    if (uVar18 < uVar32) {
      pbVar20 = pbVar21 + 2;
      uVar19 = ((ulong)pbVar21[1] << ((ulong)uVar18 & 0x3f)) + uVar19;
      uVar18 = uVar23 + 0x10;
    }
  }
  uVar4 = (uint)uVar19 & (-1 << uVar32 ^ 0xffffffffU);
  uVar19 = uVar19 >> uVar32;
  uVar1 = uVar4 + uVar15;
  uVar23 = uVar18 - uVar32;
  iVar24 = (int)puVar25;
  uVar18 = uVar1 - (iVar24 - iVar14);
  if (uVar1 < (uint)(iVar24 - iVar14) || uVar18 == 0) {
    lVar16 = 0;
    uVar15 = uVar33;
    do {
      puVar26 = puVar25 + lVar16 + (1 - (ulong)uVar1);
      puVar31 = puVar25 + lVar16;
      lVar16 = lVar16 + 3;
      *puVar31 = puVar26[-1];
      puVar31[1] = *puVar26;
      uVar15 = uVar15 - 3;
      puVar31[2] = puVar26[1];
    } while (2 < uVar15);
    puVar26 = puVar25 + lVar16;
    if (uVar33 != (uint)lVar16) {
      *puVar26 = puVar25[lVar16 - (ulong)uVar1];
      if (uVar33 - 1 == (uint)lVar16) {
        puVar26 = puVar26 + 1;
      }
      else {
        puVar26[1] = (puVar25 + (lVar16 - (ulong)uVar1))[1];
        puVar26 = puVar26 + 2;
      }
    }
    goto joined_r0x00710002b068;
  }
  if ((uVar7 < uVar18) &&
     (pbVar21 = pbVar20, pcVar28 = "invalid distance too far back", *(int *)(lVar17 + 0x1be8) != 0))
  {
LAB_710002b108:
    param_1[6] = (long)pcVar28;
    uVar27 = 0x3f51;
    pbVar20 = pbVar21;
LAB_710002b110:
    *(undefined4 *)(lVar17 + 8) = uVar27;
    puVar26 = puVar25;
    goto LAB_710002b114;
  }
  puVar31 = puVar25;
  if (uVar11 == 0) {
    puVar35 = puVar9 + (iVar5 - uVar18);
    uVar32 = uVar33 - uVar18;
    if (uVar18 <= uVar33 && uVar32 != 0) {
      uVar15 = (iVar13 + uVar4 + uVar15) - iVar24;
      uVar30 = (ulong)uVar15;
      puVar26 = puVar25;
      if ((uVar18 & 7) != 0) {
        iVar24 = -(uVar18 & 7);
        puVar36 = puVar35;
        do {
          puVar35 = puVar36 + 1;
          uVar18 = uVar18 - 1;
          iVar24 = iVar24 + 1;
          puVar26 = puVar31 + 1;
          *puVar31 = *puVar36;
          puVar31 = puVar26;
          puVar36 = puVar35;
        } while (iVar24 != 0);
      }
      if (6 < uVar15) {
        do {
          *puVar26 = *puVar35;
          puVar26[1] = puVar35[1];
          puVar26[2] = puVar35[2];
          puVar26[3] = puVar35[3];
          puVar26[4] = puVar35[4];
          puVar26[5] = puVar35[5];
          puVar26[6] = puVar35[6];
          puVar26[7] = puVar35[7];
          uVar18 = uVar18 - 8;
          puVar35 = puVar35 + 8;
          puVar26 = puVar26 + 8;
        } while (uVar18 != 0);
      }
LAB_710002afcc:
      puVar35 = puVar25 + uVar30 + 1 + -(ulong)uVar1;
      uVar33 = uVar32;
      puVar31 = puVar25 + uVar30 + 1;
    }
  }
  else if (uVar11 < uVar18) {
    uVar32 = uVar18 - uVar11;
    puVar35 = puVar9 + ((uVar11 + iVar5) - uVar18);
    uVar18 = uVar33 - uVar32;
    if (uVar32 <= uVar33 && uVar18 != 0) {
      uVar30 = (ulong)(((iVar13 - uVar11) + uVar4 + uVar15) - iVar24);
      puVar26 = puVar25;
      if ((uVar32 & 7) != 0) {
        iVar34 = -(uVar32 & 7);
        puVar36 = puVar35;
        do {
          puVar35 = puVar36 + 1;
          uVar32 = uVar32 - 1;
          iVar34 = iVar34 + 1;
          puVar26 = puVar31 + 1;
          *puVar31 = *puVar36;
          puVar31 = puVar26;
          puVar36 = puVar35;
        } while (iVar34 != 0);
      }
      if (6 < (~uVar11 + iVar14 + uVar4 + uVar15) - iVar24) {
        do {
          *puVar26 = *puVar35;
          puVar26[1] = puVar35[1];
          puVar26[2] = puVar35[2];
          puVar26[3] = puVar35[3];
          puVar26[4] = puVar35[4];
          puVar26[5] = puVar35[5];
          puVar26[6] = puVar35[6];
          puVar26[7] = puVar35[7];
          uVar32 = uVar32 - 8;
          puVar35 = puVar35 + 8;
          puVar26 = puVar26 + 8;
        } while (uVar32 != 0);
      }
      puVar31 = puVar25 + uVar30 + 1;
      uVar32 = uVar11;
      uVar15 = -(uVar11 & 7);
      puVar26 = puVar9;
      uVar4 = uVar11 & 7;
      puVar35 = puVar9;
      uVar33 = uVar18;
      if (uVar11 <= uVar18 && uVar18 - uVar11 != 0) {
        while (uVar4 != 0) {
          *puVar31 = *puVar26;
          uVar15 = uVar15 + 1;
          uVar32 = uVar32 - 1;
          puVar26 = puVar26 + 1;
          puVar31 = puVar31 + 1;
          uVar4 = uVar15;
        }
        if (6 < uVar11 - 1) {
          do {
            *puVar31 = *puVar26;
            puVar31[1] = puVar26[1];
            puVar31[2] = puVar26[2];
            puVar31[3] = puVar26[3];
            puVar31[4] = puVar26[4];
            puVar31[5] = puVar26[5];
            puVar31[6] = puVar26[6];
            puVar31[7] = puVar26[7];
            uVar32 = uVar32 - 8;
            puVar26 = puVar26 + 8;
            puVar31 = puVar31 + 8;
          } while (uVar32 != 0);
        }
        puVar35 = puVar25 + uVar30 + (ulong)(uVar11 - 1) + 2 + -(ulong)uVar1;
        uVar33 = uVar18 - uVar11;
        puVar31 = puVar25 + uVar30 + (ulong)(uVar11 - 1) + 2;
      }
    }
  }
  else {
    puVar35 = puVar9 + (uVar11 - uVar18);
    uVar32 = uVar33 - uVar18;
    if (uVar18 <= uVar33 && uVar32 != 0) {
      uVar15 = (iVar13 + uVar4 + uVar15) - iVar24;
      uVar30 = (ulong)uVar15;
      puVar26 = puVar25;
      if ((uVar18 & 7) != 0) {
        iVar24 = -(uVar18 & 7);
        puVar36 = puVar35;
        do {
          puVar35 = puVar36 + 1;
          uVar18 = uVar18 - 1;
          iVar24 = iVar24 + 1;
          puVar26 = puVar31 + 1;
          *puVar31 = *puVar36;
          puVar31 = puVar26;
          puVar36 = puVar35;
        } while (iVar24 != 0);
      }
      if (6 < uVar15) {
        do {
          *puVar26 = *puVar35;
          puVar26[1] = puVar35[1];
          puVar26[2] = puVar35[2];
          puVar26[3] = puVar35[3];
          puVar26[4] = puVar35[4];
          puVar26[5] = puVar35[5];
          puVar26[6] = puVar35[6];
          puVar26[7] = puVar35[7];
          uVar18 = uVar18 - 8;
          puVar35 = puVar35 + 8;
          puVar26 = puVar26 + 8;
        } while (uVar18 != 0);
      }
      goto LAB_710002afcc;
    }
  }
  for (; 2 < uVar33; uVar33 = uVar33 - 3) {
    *puVar31 = *puVar35;
    puVar31[1] = puVar35[1];
    puVar25 = puVar35 + 2;
    puVar35 = puVar35 + 3;
    puVar31[2] = *puVar25;
    puVar31 = puVar31 + 3;
  }
  puVar26 = puVar31;
  if (uVar33 != 0) {
    puVar26 = puVar31 + 1;
    *puVar31 = *puVar35;
    if (uVar33 != 1) {
      puVar31[1] = puVar35[1];
      puVar26 = puVar31 + 2;
    }
  }
joined_r0x00710002b068:
  if (puVar3 <= puVar26) goto LAB_710002b114;
LAB_710002ab1c:
  puVar25 = puVar26;
  if (pbVar2 <= pbVar20) {
LAB_710002b114:
    lVar22 = (long)pbVar20 - (ulong)(uVar23 >> 3);
    param_1[3] = (long)puVar26;
    *param_1 = lVar22;
    *(int *)(param_1 + 4) = ((int)puVar3 - (int)puVar26) + 0x101;
    *(int *)(param_1 + 1) = ((int)pbVar2 - (int)lVar22) + 5;
    *(ulong *)(lVar17 + 0x50) = uVar19 & (uint)~(-1 << (ulong)(uVar23 & 7));
    *(uint *)(lVar17 + 0x58) = uVar23 & 7;
    return;
  }
  goto LAB_710002aa88;
}

