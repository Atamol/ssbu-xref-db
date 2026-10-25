// addr:      71038f74d0
// offset:    0x38f74d0
// name:      FUN_71038f74d0
// mangled:   
// signature: undefined __cdecl FUN_71038f74d0(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038f74d0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  float *pfVar13;
  
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        plVar9 = (long *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        plVar11 = (long *)**(long **)(param_1 + 0x20);
        plVar9 = &DAT_7104862960;
        if (((int)plVar11[1] != 0x16) &&
           (lVar8 = *plVar11, plVar9 = &DAT_7104862960,
           (int)(-0xf4628 - param_2) <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar9 = (long *)(lVar8 + (long)(int)(-0xf4628 - param_2) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
    }
  }
  else {
    plVar9 = (long *)(**(long **)(param_1 + 0x20) + (long)(int)param_2 * 0x10);
    if (*(long **)(param_1 + 0x10) <= plVar9) {
      plVar9 = &DAT_7104862960;
    }
  }
  uVar1 = *(uint *)(plVar9 + 1) & 0xf;
  if (uVar1 == 7) {
    lVar8 = *(long *)(*plVar9 + 0x10);
  }
  else if (uVar1 == 5) {
    lVar8 = *(long *)(*plVar9 + 0x28);
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + ((ulong)*(uint *)(plVar9 + 1) & 0xf) * 8 + 0x1a0);
  }
  if (lVar8 != 0) {
    plVar9 = *(long **)(param_1 + 0x10);
    *plVar9 = lVar8;
    *(undefined4 *)(plVar9 + 1) = 0x45;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    FUN_71038f4b20(param_1,"__name");
    lVar8 = *(long *)(param_1 + 0x10);
    puVar5 = FUN_710391dde0(*(long *)(lVar8 + -0x20),(float *)(lVar8 + -0x10));
    uVar6 = puVar5[1];
    *(undefined8 *)(lVar8 + -0x10) = *puVar5;
    *(undefined8 *)(lVar8 + -8) = uVar6;
    lVar8 = *(long *)(param_1 + 0x10);
    uVar1 = *(uint *)(lVar8 + -8) & 0xf;
    if (uVar1 == 0) {
      *(long *)(param_1 + 0x10) = lVar8 + -0x20;
    }
    else {
      puVar10 = (undefined8 *)(lVar8 + -0x20);
      puVar5 = puVar10;
      do {
        uVar6 = *puVar5;
        uVar2 = puVar5[1];
        uVar3 = puVar10[3];
        *puVar5 = puVar10[2];
        puVar5[1] = uVar3;
        puVar10[2] = uVar6;
        puVar10[3] = uVar2;
        bVar4 = puVar5 + 2 < puVar10;
        puVar10 = puVar10 + -2;
        puVar5 = puVar5 + 2;
      } while (bVar4);
      lVar8 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar8 + -0x10;
      if (uVar1 == 4) {
        uVar1 = *(uint *)(lVar8 + -0x18) & 0xf;
        pfVar13 = (float *)(lVar8 + -0x20);
        if (uVar1 != 4) {
          if (uVar1 != 3) {
            pcVar7 = (char *)0x0;
            goto LAB_71038f783c;
          }
          if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
            FUN_71038fec40(param_1);
            pfVar13 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
          }
          FUN_71039080b0(param_1,pfVar13);
        }
        pcVar7 = (char *)(*(long *)pfVar13 + 0x18);
        goto LAB_71038f783c;
      }
    }
  }
  plVar9 = *(long **)(param_1 + 0x20);
  if ((int)param_2 < 1) {
    if ((int)param_2 < -0xf4627) {
      if (param_2 == 0xfff0b9d8) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
        goto LAB_71038f7728;
      }
      plVar11 = (long *)*plVar9;
      if ((int)plVar11[1] == 0x16) goto LAB_71038f782c;
      iVar12 = -0xf4628 - param_2;
      if (iVar12 <= (int)(uint)*(byte *)(*plVar11 + 10)) {
        puVar5 = (undefined8 *)(*plVar11 + (long)iVar12 * 0x10 + 0x10);
        goto LAB_71038f7728;
      }
LAB_71038f77f4:
      if (iVar12 <= (int)(uint)*(byte *)(*plVar11 + 10)) {
        puVar5 = (undefined8 *)(*plVar11 + (long)iVar12 * 0x10 + 0x10);
        goto LAB_71038f780c;
      }
      goto LAB_71038f782c;
    }
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
LAB_71038f7728:
    if ((puVar5 != &DAT_7104862960) && ((*(uint *)(puVar5 + 1) & 0xf) == 2)) {
      pcVar7 = "light userdata";
      goto LAB_71038f783c;
    }
    if ((int)param_2 < 1) {
      if ((int)param_2 < -0xf4627) {
        if (param_2 != 0xfff0b9d8) {
          plVar11 = (long *)*plVar9;
          if ((int)plVar11[1] != 0x16) {
            iVar12 = -0xf4628 - param_2;
            goto LAB_71038f77f4;
          }
          goto LAB_71038f782c;
        }
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 0x40);
      }
      else {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)param_2 * 0x10);
      }
    }
    else {
      puVar5 = (undefined8 *)(*plVar9 + (long)(int)param_2 * 0x10);
      if (*(undefined8 **)(param_1 + 0x10) <= puVar5) goto LAB_71038f782c;
    }
LAB_71038f780c:
    if (puVar5 == &DAT_7104862960) goto LAB_71038f782c;
    lVar8 = ((ulong)*(uint *)(puVar5 + 1) & 0xf) + 1;
  }
  else {
    puVar5 = (undefined8 *)(*plVar9 + (long)(int)param_2 * 0x10);
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) goto LAB_71038f7728;
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) goto LAB_71038f780c;
LAB_71038f782c:
    lVar8 = 0;
  }
  pcVar7 = (&PTR_s_no_value_71052943f8)[lVar8];
LAB_71038f783c:
  uVar6 = FUN_71038f4ca0(param_1,"%s expected, got %s");
  FUN_71038f6d60(param_1,param_2,uVar6,pcVar7,param_5,param_6,param_7,param_8);
  return;
}

