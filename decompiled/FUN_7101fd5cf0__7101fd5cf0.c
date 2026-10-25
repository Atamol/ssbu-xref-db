// addr:      7101fd5cf0
// offset:    0x1fd5cf0
// name:      FUN_7101fd5cf0
// mangled:   
// signature: uint __cdecl FUN_7101fd5cf0(float * param_1, long param_2, int param_3)


uint FUN_7101fd5cf0(float *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  long local_50;
  int local_48;
  
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
  FUN_71038f4d40(param_2,plVar7,"power_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 == 3) {
    fVar11 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar11 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar11 = (float)local_50;
        if (local_48 != 0x13) {
          fVar11 = (float)local_50;
        }
        goto LAB_7101fd5e4c;
      }
    }
    fVar11 = 0.0;
  }
LAB_7101fd5e4c:
  *param_1 = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"vector_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd5f04:
    fVar11 = (float)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd5f04;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          fVar11 = (float)(long)fVar11;
          goto LAB_7101fd5f6c;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    fVar11 = 0.0;
  }
LAB_7101fd5f6c:
  param_1[1] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"r_eff_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd6024:
    fVar11 = (float)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd6024;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          fVar11 = (float)(long)fVar11;
          goto LAB_7101fd608c;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    fVar11 = 0.0;
  }
LAB_7101fd608c:
  param_1[2] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"r_fix_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd6144:
    fVar11 = (float)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd6144;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          fVar11 = (float)(long)fVar11;
          goto LAB_7101fd61ac;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    fVar11 = 0.0;
  }
LAB_7101fd61ac:
  param_1[3] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"r_add_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd6264:
    fVar11 = (float)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd6264;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          fVar11 = (float)(long)fVar11;
          goto LAB_7101fd62cc;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    fVar11 = 0.0;
  }
LAB_7101fd62cc:
  param_1[4] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"slip_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 == 3) {
    fVar11 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar11 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar11 = (float)local_50;
        if (local_48 != 0x13) {
          fVar11 = (float)local_50;
        }
        goto LAB_7101fd64c4;
      }
    }
    fVar11 = 0.0;
  }
LAB_7101fd64c4:
  param_1[5] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"stop_frame_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 == 3) {
    fVar11 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar11 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar11 = (float)local_50;
        if (local_48 != 0x13) {
          fVar11 = (float)local_50;
        }
        goto LAB_7101fd65fc;
      }
    }
    fVar11 = 0.0;
  }
LAB_7101fd65fc:
  param_1[6] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"stop_delay_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 == 3) {
    fVar11 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar11 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar11 = (float)local_50;
        if (local_48 != 0x13) {
          fVar11 = (float)local_50;
        }
        goto LAB_7101fd6734;
      }
    }
    fVar11 = 0.0;
  }
LAB_7101fd6734:
  param_1[7] = fVar11;
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
  FUN_71038f4d40(param_2,plVar6,"attr_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd67ec:
    lVar9 = *(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd67ec;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          lVar9 = (long)fVar11;
          goto LAB_7101fd6854;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    lVar9 = 0;
  }
LAB_7101fd6854:
  *(long *)(param_1 + 8) = lVar9;
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
  FUN_71038f4d40(param_2,plVar6,"sound_level_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd690c:
    uVar5 = (undefined1)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd690c;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined1)(long)fVar11;
          goto LAB_7101fd6974;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar5 = 0;
  }
LAB_7101fd6974:
  *(undefined1 *)(param_1 + 10) = uVar5;
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
  FUN_71038f4d40(param_2,plVar6,"sound_attr_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd6a2c:
    uVar5 = (undefined1)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd6a2c;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined1)(long)fVar11;
          goto LAB_7101fd6a94;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar5 = 0;
  }
LAB_7101fd6a94:
  *(undefined1 *)((long)param_1 + 0x29) = uVar5;
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
  FUN_71038f4d40(param_2,plVar6,"lr_check_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd6b4c:
    uVar5 = (undefined1)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd6b4c;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined1)(long)fVar11;
          goto LAB_7101fd6bb4;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar5 = 0;
  }
LAB_7101fd6bb4:
  *(undefined1 *)((long)param_1 + 0x2a) = uVar5;
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
  FUN_71038f4d40(param_2,plVar6,"no_stop_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 == 0) {
LAB_7101fd6cb0:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar11 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007101fd6c90:
        if (fVar11 != 0.0) goto LAB_7101fd6cb8;
      }
      goto LAB_7101fd6cb0;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar9 + -0x10) == 0;
LAB_7101fd6cc8:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar11 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007101fd6c90;
      }
LAB_7101fd6cb8:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar2 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7101fd6cc8;
      }
      bVar2 = true;
    }
  }
  *(bool *)((long)param_1 + 0x2b) = bVar2;
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
  FUN_71038f4d40(param_2,plVar6,"no_effect_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar9 + -8);
  if (uVar1 == 0) {
LAB_7101fd6dd0:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar11 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007101fd6db0:
        if (fVar11 != 0.0) goto LAB_7101fd6dd8;
      }
      goto LAB_7101fd6dd0;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar9 + -0x10) == 0;
LAB_7101fd6de8:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar11 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007101fd6db0;
      }
LAB_7101fd6dd8:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar2 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7101fd6de8;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0xb) = bVar2;
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
  FUN_71038f4d40(param_2,plVar6,"region_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101fd6eac:
    uVar5 = (undefined1)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101fd6eac;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined1)(long)fVar11;
          goto LAB_7101fd6f14;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar10;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar5 = 0;
  }
LAB_7101fd6f14:
  *(undefined1 *)((long)param_1 + 0x2e) = uVar5;
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
  uVar3 = FUN_71038f4d40(param_2,plVar6,"catch_");
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
          goto joined_r0x007101fd700c;
        }
LAB_7101fd7018:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_7101fd7034;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar2 = *(float *)(lVar9 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_7101fd7034;
    }
    if (*(long *)(lVar9 + -0x10) != 0) {
      fVar11 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007101fd700c:
      if (fVar11 != 0.0) goto LAB_7101fd7018;
    }
  }
  bVar2 = false;
LAB_7101fd7034:
  *(bool *)((long)param_1 + 0x2f) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

