// addr:      71038f6640
// offset:    0x38f6640
// name:      FUN_71038f6640
// mangled:   
// signature: undefined8 __cdecl FUN_71038f6640(long param_1, int param_2)


undefined8 FUN_71038f6640(long param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  float *pfVar15;
  undefined8 *puVar16;
  
  if (param_2 < 1) {
    if (param_2 < -0xf4627) {
      if (param_2 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar13 = (long *)**(long **)(param_1 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar13[1] != 0x16) &&
           (lVar14 = *plVar13, plVar5 = &DAT_7104862960,
           -0xf4628 - param_2 <= (int)(uint)*(byte *)(lVar14 + 10))) {
          plVar5 = (long *)(lVar14 + (long)(-0xf4628 - param_2) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 0x10);
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_1 + 0x20) + (long)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x10);
  lVar14 = *plVar5;
  pfVar15 = (float *)(puVar16 + -2);
  if (*(int *)(puVar16 + -1) == 0x13) {
    uVar7 = *(ulong *)pfVar15;
    if (((0x80000000 < uVar7 || (long)uVar7 < 1) || (uint)uVar7 == 0) ||
       (uVar11 = *(uint *)(lVar14 + 0xc), uVar11 < (uint)uVar7)) goto LAB_71038f673c;
  }
  else {
    if (*(int *)(puVar16 + -1) == 0) {
      uVar11 = *(uint *)(lVar14 + 0xc);
      uVar6 = 0;
      if (uVar11 != 0) goto LAB_71038f67cc;
      uVar12 = 0;
LAB_71038f6804:
      iVar2 = 1 << (ulong)(*(byte *)(lVar14 + 0xb) & 0x1f);
      if ((int)uVar12 < iVar2) {
        lVar8 = -1;
        do {
          if (*(int *)(*(long *)(lVar14 + 0x18) + (ulong)uVar12 * 0x20 + 8) != 0) {
            lVar9 = (ulong)uVar12 * 0x20;
            lVar8 = *(long *)(lVar14 + 0x18) + lVar9;
            uVar4 = *(undefined8 *)(lVar8 + 0x18);
            *(undefined8 *)pfVar15 = *(undefined8 *)(lVar8 + 0x10);
            puVar16[-1] = uVar4;
            puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x18) + lVar9);
            goto LAB_71038f6868;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < iVar2);
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        lVar8 = -1;
      }
      goto LAB_71038f6878;
    }
LAB_71038f673c:
    lVar8 = FUN_710391d330(lVar14,pfVar15);
    while( true ) {
      bVar3 = FUN_71039239b0(0,(float *)(lVar8 + 0x10),pfVar15);
      if ((bVar3) ||
         (((*(int *)(lVar8 + 0x18) == 10 && ((*(byte *)(puVar16 + -1) >> 6 & 1) != 0)) &&
          (*(long *)(lVar8 + 0x10) == *(long *)pfVar15)))) break;
      if (*(int *)(lVar8 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_71038fae60(param_1,"invalid key to \'next\'");
      }
      lVar8 = lVar8 + (long)*(int *)(lVar8 + 0x1c) * 0x20;
    }
    uVar11 = *(uint *)(lVar14 + 0xc);
    uVar7 = (ulong)(uVar11 + (int)((ulong)(lVar8 - *(long *)(lVar14 + 0x18)) >> 5) + 1);
  }
  do {
    uVar12 = (uint)uVar7 - uVar11;
    uVar6 = uVar7;
    if (uVar11 <= (uint)uVar7) goto LAB_71038f6804;
LAB_71038f67cc:
    uVar7 = (ulong)((int)uVar6 + 1);
  } while (*(int *)(*(long *)(lVar14 + 0x10) + (uVar6 & 0xffffffff) * 0x10 + 8) == 0);
  puVar16[-2] = uVar7;
  *(undefined4 *)(puVar16 + -1) = 0x13;
  puVar10 = (undefined8 *)(*(long *)(lVar14 + 0x10) + (uVar6 & 0xffffffff) * 0x10);
LAB_71038f6868:
  uVar1 = puVar10[1];
  uVar4 = 1;
  *puVar16 = *puVar10;
  puVar16[1] = uVar1;
  lVar8 = 1;
LAB_71038f6878:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lVar8 * 0x10;
  return uVar4;
}

