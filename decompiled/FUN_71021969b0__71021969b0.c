// addr:      71021969b0
// offset:    0x21969b0
// name:      FUN_71021969b0
// mangled:   
// signature: undefined FUN_71021969b0(void)


byte * FUN_71021969b0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  long lStack_40;
  int iStack_38;
  
  FUN_71020b1dc0(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar6 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar6) {
      plVar6 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar6,"type_");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7102196a8c:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_7102196a8c;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_7102196af4;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&lStack_40);
      lVar7 = *(long *)pfVar8;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar4 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar4 = *(ulong *)(lVar7 + 0x10);
      }
      pfVar8 = (float *)&lStack_40;
    } while (pbVar2 == (byte *)(uVar4 + 1));
    uVar3 = 0;
  }
LAB_7102196af4:
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar7 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar5 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  uVar1 = FUN_71038f4d40(param_2,plVar5,"speed_");
  pbVar2 = (byte *)(ulong)uVar1;
  lVar7 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar7 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar7 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar7 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&lStack_40);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar4 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar4 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar4 + 1)) {
        fVar9 = (float)lStack_40;
        if (iStack_38 != 0x13) {
          fVar9 = (float)lStack_40;
        }
        goto LAB_7102196c64;
      }
    }
    fVar9 = 0.0;
  }
LAB_7102196c64:
  *(float *)(param_1 + 100) = fVar9;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

