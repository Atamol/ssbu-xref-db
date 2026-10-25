// addr:      71021cd710
// offset:    0x21cd710
// name:      FUN_71021cd710
// mangled:   
// signature: byte * __cdecl FUN_71021cd710(long param_1, long param_2, int param_3)


byte * FUN_71021cd710(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  long local_50;
  int local_48;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar3 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar3[1] != 0x16) &&
           (lVar6 = *plVar3, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar4 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar4,"catch_time_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar5 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71021cd870;
      }
    }
    fVar7 = 0.0;
  }
LAB_71021cd870:
  *(float *)(param_1 + 0x2c) = fVar7;
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar6 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar3 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar3) {
      plVar3 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar3,"catch_time_add_by_damage_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar5 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71021cd9a8;
      }
    }
    fVar7 = 0.0;
  }
LAB_71021cd9a8:
  *(float *)(param_1 + 0x30) = fVar7;
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar6 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar3 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar3) {
      plVar3 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar3,"catch_time_decrease_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar5 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71021cdae0;
      }
    }
    fVar7 = 0.0;
  }
LAB_71021cdae0:
  *(float *)(param_1 + 0x34) = fVar7;
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar6 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar3 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar3) {
      plVar3 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar3,"catch_time_decrease_by_one_pattern_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar5 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71021cdc18;
      }
    }
    fVar7 = 0.0;
  }
LAB_71021cdc18:
  *(float *)(param_1 + 0x38) = fVar7;
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar6 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar3 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar3) {
      plVar3 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar3,"catch_time_min_by_one_pattern_");
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar5 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71021cdd50;
      }
    }
    fVar7 = 0.0;
  }
LAB_71021cdd50:
  *(float *)(param_1 + 0x3c) = fVar7;
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar6 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar3 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar3 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar3) {
      plVar3 = &DAT_7104862960;
    }
  }
  uVar1 = FUN_71038f4d40(param_2,plVar3,"catch_time_dec_by_clatter_");
  pbVar2 = (byte *)(ulong)uVar1;
  lVar6 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar6 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar6 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar6 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar6 + -0x10) + 0x18),(float *)&local_50);
      lVar6 = *(long *)(lVar6 + -0x10);
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar6 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar5 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71021cde88;
      }
    }
    fVar7 = 0.0;
  }
LAB_71021cde88:
  *(float *)(param_1 + 0x40) = fVar7;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

