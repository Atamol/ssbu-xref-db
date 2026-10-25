// addr:      71021d0650
// offset:    0x21d0650
// name:      FUN_71021d0650
// mangled:   
// signature: uint __cdecl FUN_71021d0650(long param_1, long param_2, int param_3)


uint FUN_71021d0650(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  float local_50 [4];
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar7 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar7 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar9 = *plVar6, plVar7 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar7 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar7 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar7) {
      plVar7 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar7,"from_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71021d0730:
    uVar5 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_71021d0730;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined4)(long)fVar11;
          goto LAB_71021d0798;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar5 = 0;
  }
LAB_71021d0798:
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar9 = *plVar7, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar6 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar7 <= plVar6) {
      plVar6 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar6,"generation_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71021d0850:
    uVar5 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_71021d0850;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined4)(long)fVar11;
          goto LAB_71021d08b8;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar5 = 0;
  }
LAB_71021d08b8:
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar9 = *plVar7, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar6 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar7 <= plVar6) {
      plVar6 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar6,"result_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar9 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar11 = *(float *)(lVar9 + -0x10);
          goto joined_r0x0071021d09b0;
        }
LAB_71021d09bc:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_71021d09d8;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar2 = *(float *)(lVar9 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_71021d09d8;
    }
    if (*(long *)(lVar9 + -0x10) != 0) {
      fVar11 = (float)*(long *)(lVar9 + -0x10);
joined_r0x0071021d09b0:
      if (fVar11 != 0.0) goto LAB_71021d09bc;
    }
  }
  bVar2 = false;
LAB_71021d09d8:
  *(bool *)(param_1 + 0x34) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

