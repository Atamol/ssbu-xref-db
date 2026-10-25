// addr:      7101fd17f0
// offset:    0x1fd17f0
// name:      FUN_7101fd17f0
// mangled:   
// signature: uint __cdecl FUN_7101fd17f0(undefined8 * param_1, long param_2, int param_3)


uint FUN_7101fd17f0(undefined8 *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  float *pfVar14;
  float fVar15;
  long local_60;
  int local_58;
  
  puVar12 = (undefined8 *)(param_2 + 0x20);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar11 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar11 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar11 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar11 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar11 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar11 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar11) {
      plVar11 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar11,"offset_");
  plVar11 = (long *)(param_2 + 0x10);
  FUN_71038f4d40(param_2,(long *)(*plVar11 + -0x10),"x");
  lVar13 = *plVar11;
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd196c;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd196c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  param_1[1] = param_1[1];
  *param_1 = CONCAT44((int)((ulong)*param_1 >> 0x20),fVar15);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd1a2c;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd1a2c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  param_1[1] = param_1[1];
  *param_1 = CONCAT44(fVar15,(int)*param_1);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd1aec;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd1aec:
  *plVar11 = *plVar11 + -0x10;
  param_1[1] = (ulong)(uint)fVar15;
  *param_1 = *param_1;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"offset2_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd1c54;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd1c54:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  param_1[3] = param_1[3];
  param_1[2] = CONCAT44((int)((ulong)param_1[2] >> 0x20),fVar15);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd1d14;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd1d14:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  param_1[3] = param_1[3];
  param_1[2] = CONCAT44(fVar15,(int)param_1[2]);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd1dd4;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd1dd4:
  *plVar11 = *plVar11 + -0x10;
  param_1[3] = (ulong)(uint)fVar15;
  param_1[2] = param_1[2];
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"power_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd1f28;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd1f28:
  *(float *)(param_1 + 4) = fVar15;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"size_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd2060;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd2060:
  *(float *)((long)param_1 + 0x24) = fVar15;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"vector_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2118:
    uVar8 = (undefined4)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2118;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar8 = (undefined4)(long)fVar15;
          goto LAB_7101fd2180;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar8 = 0;
  }
LAB_7101fd2180:
  *(undefined4 *)(param_1 + 5) = uVar8;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"r_eff_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2238:
    uVar8 = (undefined4)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2238;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar8 = (undefined4)(long)fVar15;
          goto LAB_7101fd22a0;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar8 = 0;
  }
LAB_7101fd22a0:
  *(undefined4 *)((long)param_1 + 0x2c) = uVar8;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"r_fix_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2358:
    uVar8 = (undefined4)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2358;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar8 = (undefined4)(long)fVar15;
          goto LAB_7101fd23c0;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar8 = 0;
  }
LAB_7101fd23c0:
  *(undefined4 *)(param_1 + 6) = uVar8;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"r_add_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2478:
    uVar8 = (undefined4)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2478;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar8 = (undefined4)(long)fVar15;
          goto LAB_7101fd24e0;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar8 = 0;
  }
LAB_7101fd24e0:
  *(undefined4 *)((long)param_1 + 0x34) = uVar8;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"slip_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd26d8;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd26d8:
  *(float *)(param_1 + 7) = fVar15;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"stop_frame_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd2810;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd2810:
  *(float *)((long)param_1 + 0x3c) = fVar15;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"stop_delay_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd2948;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd2948:
  *(float *)(param_1 + 8) = fVar15;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"node_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2a00:
    lVar13 = *(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2a00;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          lVar13 = (long)fVar15;
          goto LAB_7101fd2a68;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    lVar13 = 0;
  }
LAB_7101fd2a68:
  param_1[9] = lVar13;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_category_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2b20:
    uVar7 = (undefined2)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2b20;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar7 = (undefined2)(long)fVar15;
          goto LAB_7101fd2b88;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar7 = 0;
  }
LAB_7101fd2b88:
  *(undefined2 *)(param_1 + 10) = uVar7;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_situation_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2c40:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2c40;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd2ca8;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd2ca8:
  *(undefined1 *)((long)param_1 + 0x52) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_lr_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd2da4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd2d84:
        if (fVar15 != 0.0) goto LAB_7101fd2dac;
      }
      goto LAB_7101fd2da4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd2dbc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd2d84;
      }
LAB_7101fd2dac:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd2dbc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x53) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_part_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2e80:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2e80;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd2ee8;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd2ee8:
  *(undefined1 *)((long)param_1 + 0x54) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"attr_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd2fa0:
    lVar13 = *(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd2fa0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          lVar13 = (long)fVar15;
          goto LAB_7101fd3008;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    lVar13 = 0;
  }
LAB_7101fd3008:
  param_1[0xb] = lVar13;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"sound_level_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd30c0:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd30c0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd3128;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd3128:
  *(undefined1 *)(param_1 + 0xc) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"sound_attr_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd31e0:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd31e0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd3248;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd3248:
  *(undefined1 *)((long)param_1 + 0x61) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"set_off_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd3300:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd3300;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd3368;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd3368:
  *(undefined1 *)((long)param_1 + 0x62) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_scale_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3464:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3444:
        if (fVar15 != 0.0) goto LAB_7101fd346c;
      }
      goto LAB_7101fd3464;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd347c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3444;
      }
LAB_7101fd346c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd347c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 99) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"shield_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3584:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3564:
        if (fVar15 != 0.0) goto LAB_7101fd358c;
      }
      goto LAB_7101fd3584;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd359c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3564;
      }
LAB_7101fd358c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd359c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 100) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"reflector_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd36a4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3684:
        if (fVar15 != 0.0) goto LAB_7101fd36ac;
      }
      goto LAB_7101fd36a4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd36bc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3684;
      }
LAB_7101fd36ac:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd36bc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x65) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"absorber_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd37c4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd37a4:
        if (fVar15 != 0.0) goto LAB_7101fd37cc;
      }
      goto LAB_7101fd37c4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd37dc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd37a4;
      }
LAB_7101fd37cc:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd37dc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x66) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"direct_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd38e4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd38c4:
        if (fVar15 != 0.0) goto LAB_7101fd38ec;
      }
      goto LAB_7101fd38e4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd38fc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd38c4;
      }
LAB_7101fd38ec:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd38fc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x67) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_invincible_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3a04:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd39e4:
        if (fVar15 != 0.0) goto LAB_7101fd3a0c;
      }
      goto LAB_7101fd3a04;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd3a1c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd39e4;
      }
LAB_7101fd3a0c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd3a1c;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0xd) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_xlu_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3b24:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3b04:
        if (fVar15 != 0.0) goto LAB_7101fd3b2c;
      }
      goto LAB_7101fd3b24;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd3b3c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3b04;
      }
LAB_7101fd3b2c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd3b3c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x69) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"lr_check_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd3c00:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd3c00;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd3c68;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd3c68:
  *(undefined1 *)((long)param_1 + 0x6a) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"catch_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3d64:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3d44:
        if (fVar15 != 0.0) goto LAB_7101fd3d6c;
      }
      goto LAB_7101fd3d64;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd3d7c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3d44;
      }
LAB_7101fd3d6c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd3d7c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x6b) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_team_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3e84:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3e64:
        if (fVar15 != 0.0) goto LAB_7101fd3e8c;
      }
      goto LAB_7101fd3e84;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd3e9c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3e64;
      }
LAB_7101fd3e8c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd3e9c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x6c) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_stop_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd3fa4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd3f84:
        if (fVar15 != 0.0) goto LAB_7101fd3fac;
      }
      goto LAB_7101fd3fa4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd3fbc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd3f84;
      }
LAB_7101fd3fac:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd3fbc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x6d) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_effect_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd40c4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd40a4:
        if (fVar15 != 0.0) goto LAB_7101fd40cc;
      }
      goto LAB_7101fd40c4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd40dc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd40a4;
      }
LAB_7101fd40cc:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd40dc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x6e) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"speed_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd41e4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd41c4:
        if (fVar15 != 0.0) goto LAB_7101fd41ec;
      }
      goto LAB_7101fd41e4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd41fc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd41c4;
      }
LAB_7101fd41ec:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd41fc;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0xe) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"region_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd42c0:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd42c0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd4328;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd4328:
  *(undefined1 *)((long)param_1 + 0x71) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"ignore_down_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd4424:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd4404:
        if (fVar15 != 0.0) goto LAB_7101fd442c;
      }
      goto LAB_7101fd4424;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd443c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd4404;
      }
LAB_7101fd442c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd443c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x72) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"check_type_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd4500:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd4500;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd4568;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd4568:
  *(undefined1 *)((long)param_1 + 0x73) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"sub_shield_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd4620:
    uVar7 = (undefined2)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd4620;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar7 = (undefined2)(long)fVar15;
          goto LAB_7101fd4688;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar7 = 0;
  }
LAB_7101fd4688:
  *(undefined2 *)((long)param_1 + 0x74) = uVar7;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"camera_quake_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd4740:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd4740;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd47a8;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd47a8:
  *(undefined1 *)((long)param_1 + 0x76) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"serial_hit_frame_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd4860:
    uVar8 = (undefined4)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd4860;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar8 = (undefined4)(long)fVar15;
          goto LAB_7101fd48c8;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar8 = 0;
  }
LAB_7101fd48c8:
  *(undefined4 *)(param_1 + 0xf) = uVar8;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"force_reaction_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd49c4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd49a4:
        if (fVar15 != 0.0) goto LAB_7101fd49cc;
      }
      goto LAB_7101fd49c4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd49dc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd49a4;
      }
LAB_7101fd49cc:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd49dc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x7c) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_attacker_log_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd4ae4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd4ac4:
        if (fVar15 != 0.0) goto LAB_7101fd4aec;
      }
      goto LAB_7101fd4ae4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd4afc:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd4ac4;
      }
LAB_7101fd4aec:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd4afc;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x7d) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_weight_reaction_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd4bc0:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd4bc0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd4c28;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd4c28:
  *(undefined1 *)((long)param_1 + 0x7e) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"no_reaction_search_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd4ce0:
    uVar6 = (undefined1)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd4ce0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar6 = (undefined1)(long)fVar15;
          goto LAB_7101fd4d48;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar6 = 0;
  }
LAB_7101fd4d48:
  *(undefined1 *)((long)param_1 + 0x7f) = uVar6;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"keep_rumble_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd4e44:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd4e24:
        if (fVar15 != 0.0) goto LAB_7101fd4e4c;
      }
      goto LAB_7101fd4e44;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd4e5c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd4e24;
      }
LAB_7101fd4e4c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd4e5c;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x10) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"composition_speed_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd4f64:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd4f44:
        if (fVar15 != 0.0) goto LAB_7101fd4f6c;
      }
      goto LAB_7101fd4f64;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd4f7c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd4f44;
      }
LAB_7101fd4f6c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd4f7c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x81) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_pos_node_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd5040:
    lVar13 = *(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd5040;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          lVar13 = (long)fVar15;
          goto LAB_7101fd50a8;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    lVar13 = 0;
  }
LAB_7101fd50a8:
  param_1[0x11] = lVar13;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_pos_offset_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd5524;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd5524:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  param_1[0x13] = param_1[0x13];
  param_1[0x12] = CONCAT44((int)((ulong)param_1[0x12] >> 0x20),fVar15);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 3) {
    fVar15 = *(float *)(lVar13 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar15 = (float)*(long *)(lVar13 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar13 + -0x10) + 0x18),(float *)&local_60);
      lVar13 = *(long *)(lVar13 + -0x10);
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar10 + 1)) {
        fVar15 = (float)local_60;
        if (local_58 != 0x13) {
          fVar15 = (float)local_60;
        }
        goto LAB_7101fd55e4;
      }
    }
    fVar15 = 0.0;
  }
LAB_7101fd55e4:
  *plVar11 = *plVar11 + -0x10;
  param_1[0x13] = param_1[0x13];
  param_1[0x12] = CONCAT44(fVar15,(int)param_1[0x12]);
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"target_pos_frame_");
  pfVar14 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd56b0:
    uVar8 = (undefined4)*(long *)pfVar14;
  }
  else {
    do {
      fVar15 = pfVar14[2];
      if (fVar15 == 2.66247e-44) goto LAB_7101fd56b0;
      if (fVar15 == 4.2039e-45) {
        fVar15 = (float)(int)*pfVar14;
        if ((-9.223372e+18 <= fVar15) && (fVar15 < 9.223372e+18)) {
          uVar8 = (undefined4)(long)fVar15;
          goto LAB_7101fd5718;
        }
        break;
      }
      if (((uint)fVar15 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar14 + 0x18),(float *)&local_60);
      lVar13 = *(long *)pfVar14;
      if (*(char *)(lVar13 + 8) == '\x04') {
        uVar10 = (ulong)*(byte *)(lVar13 + 0xb);
      }
      else {
        uVar10 = *(ulong *)(lVar13 + 0x10);
      }
      pfVar14 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar10 + 1));
    uVar8 = 0;
  }
LAB_7101fd5718:
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"r_fix_damage_speed_up_");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 == 0) {
LAB_7101fd5814:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar13 + -0x10) != 0) {
        fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd57f4:
        if (fVar15 != 0.0) goto LAB_7101fd581c;
      }
      goto LAB_7101fd5814;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar13 + -0x10) == 0;
LAB_7101fd582c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar15 = *(float *)(lVar13 + -0x10);
        goto joined_r0x007101fd57f4;
      }
LAB_7101fd581c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
        goto LAB_7101fd582c;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0xa4) = bVar2;
  plVar9 = (long *)(*plVar11 + -0x10);
  *plVar11 = (long)plVar9;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar9 = *(long **)*puVar12;
        plVar5 = &DAT_7104862960;
        if (((int)plVar9[1] != 0x16) &&
           (lVar13 = *plVar9, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar13 + 10))) {
          plVar5 = (long *)(lVar13 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar9 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar12 + (long)param_3 * 0x10);
    if (plVar9 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar5,"captured_same_time_attack");
  lVar13 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar13 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar13 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar15 = *(float *)(lVar13 + -0x10);
          goto joined_r0x007101fd5930;
        }
LAB_7101fd593c:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_7101fd5958;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar13 + -0x10))) {
          bVar2 = *(float *)(lVar13 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_7101fd5958;
    }
    if (*(long *)(lVar13 + -0x10) != 0) {
      fVar15 = (float)*(long *)(lVar13 + -0x10);
joined_r0x007101fd5930:
      if (fVar15 != 0.0) goto LAB_7101fd593c;
    }
  }
  bVar2 = false;
LAB_7101fd5958:
  *(bool *)((long)param_1 + 0xa6) = bVar2;
  *plVar11 = *plVar11 + -0x10;
  return uVar3;
}

