// addr:      710009d0f0
// offset:    0x9d0f0
// name:      FUN_710009d0f0
// mangled:   
// signature: undefined8 __cdecl FUN_710009d0f0(long * param_1)


/* WARNING: Removing unreachable block (ram,0x00710009d19c) */
/* WARNING: Removing unreachable block (ram,0x00710009d228) */

undefined8 FUN_710009d0f0(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  
  lVar6 = *param_1;
  if (*(char *)(*(long *)(lVar6 + 0xa0) + 0x752) != '\0') {
    return 0;
  }
  puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x828) + 0x10))(lVar6 + 0x828,0x40,0x80);
  if (puVar4 == (undefined8 *)0x0) {
    return 0;
  }
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 **)(*param_1 + 0x418) = puVar4;
  fVar12 = *(float *)(*(long *)(*param_1 + 0xa0) + 0x800);
  lVar6 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2b8);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar7 = 0;
        fVar13 = fVar12;
      }
      else {
        lVar7 = 0;
        pfVar8 = (float *)(lVar6 + 0x1c);
        do {
          fVar13 = pfVar8[-4];
          if (pfVar8[-4] <= fVar12) {
            fVar13 = fVar12;
          }
          fVar12 = *pfVar8;
          if (*pfVar8 <= fVar13) {
            fVar12 = fVar13;
          }
          lVar7 = lVar7 + 2;
          pfVar8 = pfVar8 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar7);
        fVar13 = fVar12;
        if ((uVar1 & 1) == 0) goto LAB_710009d1e4;
      }
      fVar12 = *(float *)(lVar6 + lVar7 * 0x10 + 0xc);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
    }
  }
LAB_710009d1e4:
  *(int *)(puVar4 + 6) = (int)fVar12;
  fVar12 = (float)*(int *)(*(long *)(*param_1 + 0xa0) + 0x8b8);
  lVar6 = *(long *)(*(long *)(*param_1 + 0x238) + 0x2c0);
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar6 + 4);
    if (0 < (int)uVar1) {
      if (uVar1 == 1) {
        lVar7 = 0;
        fVar13 = fVar12;
      }
      else {
        lVar7 = 0;
        pfVar8 = (float *)(lVar6 + 0x1c);
        do {
          fVar13 = pfVar8[-4];
          if (pfVar8[-4] <= fVar12) {
            fVar13 = fVar12;
          }
          fVar12 = *pfVar8;
          if (*pfVar8 <= fVar13) {
            fVar12 = fVar13;
          }
          lVar7 = lVar7 + 2;
          pfVar8 = pfVar8 + 8;
        } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar7);
        fVar13 = fVar12;
        if ((uVar1 & 1) == 0) goto LAB_710009d270;
      }
      fVar12 = *(float *)(lVar6 + lVar7 * 0x10 + 0xc);
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
    }
  }
LAB_710009d270:
  *(int *)((long)puVar4 + 0x34) = (int)fVar12;
  *(undefined4 *)(puVar4 + 7) = 0;
  lVar6 = *(long *)(*(long *)(*param_1 + 0x238) + 0x338);
  *(undefined4 *)puVar4 = *(undefined4 *)(lVar6 + 0x1c);
  *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar6 + 0x20);
  puVar4[1] = 0;
  uVar5 = FUN_7100088090(*param_1,4,0x60);
  lVar6 = DAT_71052ab970;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  pcVar9 = (char *)*param_1;
  lVar11 = *(long *)(*(long *)(pcVar9 + 0x238) + 0x338);
  iVar10 = (int)*(float *)(lVar11 + 0x14);
  lVar7 = *(long *)(pcVar9 + 0x418);
  iVar3 = FUN_710009f2c0(pcVar9,iVar10);
  iVar2 = *(int *)(pcVar9 + 0x230);
  *(int *)(lVar7 + 0x28) = iVar2 + iVar3;
  iVar10 = (iVar10 + (iVar10 + -1) * (int)*(float *)(lVar11 + 0x10)) * 2;
  *(int *)(lVar7 + 0x20) = iVar10;
  iVar10 = iVar10 * (iVar2 + iVar3);
  iVar2 = *(int *)(lVar6 + 0x18);
  *(undefined1 *)(lVar7 + 0x10) = 0;
  *(int *)(lVar7 + 0x24) = iVar10 * iVar2;
  if (iVar10 != 0) {
    uVar5 = FUN_71000880e0((long)pcVar9,*(int *)(lVar6 + 0x18),(long)iVar10 * 0x50);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(lVar7 + 0x10) = 1;
      return 1;
    }
    if (*(char *)(lVar7 + 0x10) != '\0') {
      return 1;
    }
  }
  FUN_7100093650();
  FUN_7100093660();
  return 0;
}

