// addr:      710200ca80
// offset:    0x200ca80
// name:      FUN_710200ca80
// mangled:   
// signature: uint __cdecl FUN_710200ca80(float * param_1, long param_2, int param_3)


uint FUN_710200ca80(float *param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  long local_50;
  int local_48;
  
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar8 = *plVar5, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar6 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar6,"damage_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200cbdc;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200cbdc:
  *param_1 = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"damage_add_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200cd14;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200cd14:
  param_1[1] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"damage_add_reaction_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200ce4c;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200ce4c:
  param_1[2] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"power_max_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200cf84;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200cf84:
  param_1[3] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"reaction_max_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d0bc;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d0bc:
  param_1[4] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"damage_lr_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d1f4;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d1f4:
  param_1[0x58] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"attack_pos_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d340;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d340:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_1 + 0x5e);
  *(ulong *)(param_1 + 0x5c) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x5c) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d400;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d400:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x5e) = *(undefined8 *)(param_1 + 0x5e);
  *(ulong *)(param_1 + 0x5c) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x5c));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d4c0;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d4c0:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x5e) = (ulong)(uint)fVar10;
  *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"attack_speed_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d628;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d628:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x62);
  *(ulong *)(param_1 + 0x60) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d6e8;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d6e8:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x62) = *(undefined8 *)(param_1 + 0x62);
  *(ulong *)(param_1 + 0x60) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x60));
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"damage_add_2nd_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200d834;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200d834:
  param_1[100] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"owner_object_id_");
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_710200d8ec:
    fVar10 = (float)*(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_710200d8ec;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          fVar10 = (float)(long)fVar10;
          goto LAB_710200d954;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_50);
      lVar8 = *(long *)pfVar9;
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      pfVar9 = (float *)&local_50;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar10 = 0.0;
  }
LAB_710200d954:
  param_1[0x65] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"shake_scale_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_710200dabc;
      }
    }
    fVar10 = 0.0;
  }
LAB_710200dabc:
  param_1[0x66] = fVar10;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"catch_absolute_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 0) {
LAB_710200dbb8:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x00710200db98:
        if (fVar10 != 0.0) goto LAB_710200dbc0;
      }
      goto LAB_710200dbb8;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar8 + -0x10) == 0;
LAB_710200dbd0:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar10 = *(float *)(lVar8 + -0x10);
        goto joined_r0x00710200db98;
      }
LAB_710200dbc0:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_710200dbd0;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x67) = bVar2;
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
           (lVar8 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
          plVar5 = (long *)(lVar8 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  uVar3 = FUN_71038f4d40(param_2,plVar5,"no_dead_damage_fly_effect_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar8 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar10 = *(float *)(lVar8 + -0x10);
          goto joined_r0x00710200dcd4;
        }
LAB_710200dce0:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_710200dcfc;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_710200dcfc;
    }
    if (*(long *)(lVar8 + -0x10) != 0) {
      fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x00710200dcd4:
      if (fVar10 != 0.0) goto LAB_710200dce0;
    }
  }
  bVar2 = false;
LAB_710200dcfc:
  *(bool *)((long)param_1 + 0x19d) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

