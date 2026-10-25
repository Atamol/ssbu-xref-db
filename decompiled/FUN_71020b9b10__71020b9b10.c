// addr:      71020b9b10
// offset:    0x20b9b10
// name:      FUN_71020b9b10
// mangled:   
// signature: byte * __cdecl FUN_71020b9b10(long param_1, long param_2, int param_3)


byte * FUN_71020b9b10(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  long local_50;
  int local_48;
  
  FUN_71020b6680(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar7 = *plVar4, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar5 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"offset_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b9c84;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b9c84:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x80) = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20),fVar9)
  ;
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b9d44;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b9d44:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar9,(int)*(undefined8 *)(param_1 + 0x80));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b9e04;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b9e04:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x88) = (ulong)(uint)fVar9;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x80);
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"fly_degree_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020b9f58;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020b9f58:
  *(float *)(param_1 + 0x90) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"fly_distance_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba090;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba090:
  *(float *)(param_1 + 0x94) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"max_change_degree_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba1c8;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba1c8:
  *(float *)(param_1 + 0x98) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"fly_speed_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba300;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba300:
  *(float *)(param_1 + 0x9c) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"fly_max_speed_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba438;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba438:
  *(float *)(param_1 + 0xa0) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"fly_accel_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba570;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba570:
  *(float *)(param_1 + 0xa4) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"start_accel_frame_");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020ba628:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020ba628;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020ba690;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar7 = *(long *)pfVar8;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar2 == (byte *)(uVar6 + 1));
    uVar3 = 0;
  }
LAB_71020ba690:
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"dest_meter_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba7f8;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba7f8:
  *(float *)(param_1 + 0xac) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"rot_z_speed_");
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
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar7 + -0x10) + 0x18),(float *)&local_50);
      lVar7 = *(long *)(lVar7 + -0x10);
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020ba930;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020ba930:
  *(float *)(param_1 + 0xb0) = fVar9;
  plVar5 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar5;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar7 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar4 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = plVar5 + (long)param_3 * 2;
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar5 <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  uVar1 = FUN_71038f4d40(param_2,plVar4,"clatter_end_xlu_frame_");
  pbVar2 = (byte *)(ulong)uVar1;
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020ba9e8:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020ba9e8;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020baa50;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar7 = *(long *)pfVar8;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar7 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar2 == (byte *)(uVar6 + 1));
    uVar3 = 0;
  }
LAB_71020baa50:
  *(undefined4 *)(param_1 + 0xb4) = uVar3;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

