// addr:      71021227b0
// offset:    0x21227b0
// name:      FUN_71021227b0
// mangled:   
// signature: uint __cdecl FUN_71021227b0(long param_1, long param_2, int param_3)


uint FUN_71021227b0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  long local_50;
  int local_48;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar7 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar7 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar6 = *plVar5, plVar7 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar7 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar7,"joint_id_");
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7102122890:
    lVar6 = *(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_7102122890;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          lVar6 = (long)fVar10;
          goto LAB_71021228f8;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_50);
      lVar6 = *(long *)pfVar9;
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar6 + 0x10);
      }
      pfVar9 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    lVar6 = 0;
  }
LAB_71021228f8:
  *(long *)(param_1 + 0x30) = lVar6;
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar6 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar5 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"body_pos_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_7102122a74;
      }
    }
    fVar10 = 0.0;
  }
LAB_7102122a74:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_7102122b34;
      }
    }
    fVar10 = 0.0;
  }
LAB_7102122b34:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x40));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_7102122bf4;
      }
    }
    fVar10 = 0.0;
  }
LAB_7102122bf4:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x48) = (ulong)(uint)fVar10;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar6 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar5 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"extend_arm_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 0) {
LAB_7102122d0c:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar6 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar6 + -0x10);
joined_r0x007102122cec:
        if (fVar10 != 0.0) goto LAB_7102122d14;
      }
      goto LAB_7102122d0c;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar6 + -0x10) == 0;
LAB_7102122d24:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar10 = *(float *)(lVar6 + -0x10);
        goto joined_r0x007102122cec;
      }
LAB_7102122d14:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar6 + -0x10))) {
          bVar2 = *(float *)(lVar6 + -0x10) == 0.0;
        }
        goto LAB_7102122d24;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x50) = bVar2;
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar6 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar5 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"flip_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 0) {
LAB_7102122e2c:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar6 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar6 + -0x10);
joined_r0x007102122e0c:
        if (fVar10 != 0.0) goto LAB_7102122e34;
      }
      goto LAB_7102122e2c;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar6 + -0x10) == 0;
LAB_7102122e44:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar10 = *(float *)(lVar6 + -0x10);
        goto joined_r0x007102122e0c;
      }
LAB_7102122e34:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar6 + -0x10))) {
          bVar2 = *(float *)(lVar6 + -0x10) == 0.0;
        }
        goto LAB_7102122e44;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x51) = bVar2;
  plVar7 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar6 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar5 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar5,"reaction_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar6 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar10 = *(float *)(lVar6 + -0x10);
          goto joined_r0x007102122f48;
        }
LAB_7102122f54:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_7102122f70;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar6 + -0x10))) {
          bVar2 = *(float *)(lVar6 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_7102122f70;
    }
    if (*(long *)(lVar6 + -0x10) != 0) {
      fVar10 = (float)*(long *)(lVar6 + -0x10);
joined_r0x007102122f48:
      if (fVar10 != 0.0) goto LAB_7102122f54;
    }
  }
  bVar2 = false;
LAB_7102122f70:
  *(bool *)(param_1 + 0x52) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

