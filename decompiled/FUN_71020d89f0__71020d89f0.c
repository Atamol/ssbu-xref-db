// addr:      71020d89f0
// offset:    0x20d89f0
// name:      FUN_71020d89f0
// mangled:   
// signature: uint __cdecl FUN_71020d89f0(long param_1, long param_2, int param_3)


uint FUN_71020d89f0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  float fVar13;
  long local_60;
  int local_58;
  
  FUN_71020d4a00(param_1,param_2,param_3);
  puVar10 = (undefined8 *)(param_2 + 0x20);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar9 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar9 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar9 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar9 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar9 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar9 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar9) {
      plVar9 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar9,"pos_");
  plVar9 = (long *)(param_2 + 0x10);
  FUN_71038f4d40(param_2,(long *)(*plVar9 + -0x10),"x");
  lVar11 = *plVar9;
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d8b70;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d8b70:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),fVar13);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d8c30;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d8c30:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar13,(int)*(undefined8 *)(param_1 + 0x20));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d8cf0;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d8cf0:
  *plVar9 = *plVar9 + -0x10;
  *(ulong *)(param_1 + 0x28) = (ulong)(uint)fVar13;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"hit_stop_frame_");
  pfVar12 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d8dc4:
    uVar6 = (undefined4)*(long *)pfVar12;
  }
  else {
    do {
      fVar13 = pfVar12[2];
      if (fVar13 == 2.66247e-44) goto LAB_71020d8dc4;
      if (fVar13 == 4.2039e-45) {
        fVar13 = (float)(int)*pfVar12;
        if ((-9.223372e+18 <= fVar13) && (fVar13 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar13;
          goto LAB_71020d8e2c;
        }
        break;
      }
      if (((uint)fVar13 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar12 + 0x18),(float *)&local_60);
      lVar11 = *(long *)pfVar12;
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      pfVar12 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar6 = 0;
  }
LAB_71020d8e2c:
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"attack_data_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8) & 0xf;
  if (uVar1 == 2) {
    lVar11 = *(long *)(lVar11 + -0x10);
  }
  else if (uVar1 == 7) {
    lVar11 = *(long *)(lVar11 + -0x10) + 0x28;
  }
  else {
    lVar11 = 0;
  }
  *(long *)(param_1 + 0x38) = lVar11;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"speed_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d906c;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d906c:
  *(float *)(param_1 + 0x40) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"angle_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d91a4;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d91a4:
  *(float *)(param_1 + 0x44) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"brake_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d92dc;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d92dc:
  *(float *)(param_1 + 0x48) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"accel_y_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9414;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9414:
  *(float *)(param_1 + 0x4c) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"to_fall_speed_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d954c;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d954c:
  *(float *)(param_1 + 0x50) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"shoot_3d_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 0) {
LAB_71020d9648:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar11 + -0x10) != 0) {
        fVar13 = (float)*(long *)(lVar11 + -0x10);
joined_r0x0071020d9628:
        if (fVar13 != 0.0) goto LAB_71020d9650;
      }
      goto LAB_71020d9648;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar11 + -0x10) == 0;
LAB_71020d9660:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar13 = *(float *)(lVar11 + -0x10);
        goto joined_r0x0071020d9628;
      }
LAB_71020d9650:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar11 + -0x10))) {
          bVar2 = *(float *)(lVar11 + -0x10) == 0.0;
        }
        goto LAB_71020d9660;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x54) = bVar2;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"speed_3d_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d97b8;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d97b8:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x60) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),fVar13);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9878;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9878:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x60) = CONCAT44(fVar13,(int)*(undefined8 *)(param_1 + 0x60));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9938;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9938:
  *plVar9 = *plVar9 + -0x10;
  *(ulong *)(param_1 + 0x68) = (ulong)(uint)fVar13;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x60);
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"collision_layer_");
  pfVar12 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d9a0c:
    uVar6 = (undefined4)*(long *)pfVar12;
  }
  else {
    do {
      fVar13 = pfVar12[2];
      if (fVar13 == 2.66247e-44) goto LAB_71020d9a0c;
      if (fVar13 == 4.2039e-45) {
        fVar13 = (float)(int)*pfVar12;
        if ((-9.223372e+18 <= fVar13) && (fVar13 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar13;
          goto LAB_71020d9a74;
        }
        break;
      }
      if (((uint)fVar13 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar12 + 0x18),(float *)&local_60);
      lVar11 = *(long *)pfVar12;
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      pfVar12 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar6 = 0;
  }
LAB_71020d9a74:
  *(undefined4 *)(param_1 + 0x70) = uVar6;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"arrival_z_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9bdc;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9bdc:
  *(float *)(param_1 + 0x74) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"add_speed_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9d14;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9d14:
  *(float *)(param_1 + 0x78) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"soot_frame_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9e4c;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9e4c:
  *(float *)(param_1 + 0x7c) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"hit_z_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020d9f84;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020d9f84:
  *(float *)(param_1 + 0x80) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"hit_num_");
  pfVar12 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020da03c:
    uVar6 = (undefined4)*(long *)pfVar12;
  }
  else {
    do {
      fVar13 = pfVar12[2];
      if (fVar13 == 2.66247e-44) goto LAB_71020da03c;
      if (fVar13 == 4.2039e-45) {
        fVar13 = (float)(int)*pfVar12;
        if ((-9.223372e+18 <= fVar13) && (fVar13 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar13;
          goto LAB_71020da0a4;
        }
        break;
      }
      if (((uint)fVar13 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar12 + 0x18),(float *)&local_60);
      lVar11 = *(long *)pfVar12;
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      pfVar12 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar6 = 0;
  }
LAB_71020da0a4:
  *(undefined4 *)(param_1 + 0x84) = uVar6;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"hit_rect_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8) & 0xf;
  if (uVar1 == 2) {
    lVar11 = *(long *)(lVar11 + -0x10);
  }
  else if (uVar1 == 7) {
    lVar11 = *(long *)(lVar11 + -0x10) + 0x28;
  }
  else {
    lVar11 = 0;
  }
  *(long *)(param_1 + 0x88) = lVar11;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"hit_index_");
  pfVar12 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020da234:
    uVar6 = (undefined4)*(long *)pfVar12;
  }
  else {
    do {
      fVar13 = pfVar12[2];
      if (fVar13 == 2.66247e-44) goto LAB_71020da234;
      if (fVar13 == 4.2039e-45) {
        fVar13 = (float)(int)*pfVar12;
        if ((-9.223372e+18 <= fVar13) && (fVar13 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar13;
          goto LAB_71020da29c;
        }
        break;
      }
      if (((uint)fVar13 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar12 + 0x18),(float *)&local_60);
      lVar11 = *(long *)pfVar12;
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      pfVar12 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar6 = 0;
  }
LAB_71020da29c:
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"gimmick_collision_layer_");
  pfVar12 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020da354:
    uVar6 = (undefined4)*(long *)pfVar12;
  }
  else {
    do {
      fVar13 = pfVar12[2];
      if (fVar13 == 2.66247e-44) goto LAB_71020da354;
      if (fVar13 == 4.2039e-45) {
        fVar13 = (float)(int)*pfVar12;
        if ((-9.223372e+18 <= fVar13) && (fVar13 < 9.223372e+18)) {
          uVar6 = (undefined4)(long)fVar13;
          goto LAB_71020da3bc;
        }
        break;
      }
      if (((uint)fVar13 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar12 + 0x18),(float *)&local_60);
      lVar11 = *(long *)pfVar12;
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      pfVar12 = (float *)&local_60;
    } while (pbVar4 == (byte *)(uVar8 + 1));
    uVar6 = 0;
  }
LAB_71020da3bc:
  *(undefined4 *)(param_1 + 0x94) = uVar6;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"speed_stable_y_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020da584;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020da584:
  *(float *)(param_1 + 0x98) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"brake_y_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020da6bc;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020da6bc:
  *(float *)(param_1 + 0x9c) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"brake_x_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020da7f4;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020da7f4:
  *(float *)(param_1 + 0xa0) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"reaction_frame_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020da92c;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020da92c:
  *(float *)(param_1 + 0xa4) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"damage_reaction_rate_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020daa64;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020daa64:
  *(float *)(param_1 + 0xa8) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"damage_reaction_min_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020dab9c;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020dab9c:
  *(float *)(param_1 + 0xac) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"damage_reaction_max_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 == 3) {
    fVar13 = *(float *)(lVar11 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar13 = (float)*(long *)(lVar11 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar11 + -0x10) + 0x18),(float *)&local_60);
      lVar11 = *(long *)(lVar11 + -0x10);
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar8 = (ulong)*(byte *)(lVar11 + 0xb);
      }
      else {
        uVar8 = *(ulong *)(lVar11 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar8 + 1)) {
        fVar13 = (float)local_60;
        if (local_58 != 0x13) {
          fVar13 = (float)local_60;
        }
        goto LAB_71020dacd4;
      }
    }
    fVar13 = 0.0;
  }
LAB_71020dacd4:
  *(float *)(param_1 + 0xb0) = fVar13;
  plVar7 = (long *)(*plVar9 + -0x10);
  *plVar9 = (long)plVar7;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = *(long **)*puVar10;
        plVar5 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar11 = *plVar7, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar11 + 10))) {
          plVar5 = (long *)(lVar11 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar7 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(*(long *)*puVar10 + (long)param_3 * 0x10);
    if (plVar7 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar5,"can_enter_");
  lVar11 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar11 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar11 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar13 = *(float *)(lVar11 + -0x10);
          goto joined_r0x0071020dadcc;
        }
LAB_71020dadd8:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_71020dadf4;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar11 + -0x10))) {
          bVar2 = *(float *)(lVar11 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_71020dadf4;
    }
    if (*(long *)(lVar11 + -0x10) != 0) {
      fVar13 = (float)*(long *)(lVar11 + -0x10);
joined_r0x0071020dadcc:
      if (fVar13 != 0.0) goto LAB_71020dadd8;
    }
  }
  bVar2 = false;
LAB_71020dadf4:
  *(bool *)(param_1 + 0xb4) = bVar2;
  *plVar9 = *plVar9 + -0x10;
  return uVar3;
}

