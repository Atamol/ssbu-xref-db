// addr:      71020b1dc0
// offset:    0x20b1dc0
// name:      FUN_71020b1dc0
// mangled:   
// signature: byte * __cdecl FUN_71020b1dc0(long param_1, long param_2, int param_3)


byte * FUN_71020b1dc0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  long local_50;
  int local_48;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar5 = *plVar4, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar6 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar6,"_motionKind");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b1ea0:
    lVar5 = *(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020b1ea0;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          lVar5 = (long)fVar9;
          goto LAB_71020b1f08;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar8;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    lVar5 = 0;
  }
LAB_71020b1f08:
  *(long *)(param_1 + 0x30) = lVar5;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_motionCompFrame");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b1fc0:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020b1fc0;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020b2028;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar8;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020b2028:
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_reqStatus");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b20e0:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020b20e0;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020b2148;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar8;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020b2148:
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_taskId");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b2200:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020b2200;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020b2268;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar8;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020b2268:
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_offsetX");
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar7 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b2460;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b2460:
  *(float *)(param_1 + 0x44) = fVar9;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_offsetY");
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar7 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b2598;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b2598:
  *(float *)(param_1 + 0x48) = fVar9;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_frame");
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar7 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b26d0;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b26d0:
  *(float *)(param_1 + 0x4c) = fVar9;
  plVar6 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar6;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar6 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar6 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"_targetPos");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar7 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b281c;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b281c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x50) = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20),fVar9)
  ;
  uVar1 = FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  pbVar2 = (byte *)(ulong)uVar1;
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar7 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b28dc;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b28dc:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x50) = CONCAT44(fVar9,(int)*(undefined8 *)(param_1 + 0x50));
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

