// addr:      71020f3240
// offset:    0x20f3240
// name:      FUN_71020f3240
// mangled:   
// signature: byte * __cdecl FUN_71020f3240(long param_1, long param_2, int param_3)


byte * FUN_71020f3240(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
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
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar3 = *plVar5, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar3 + 10))) {
          plVar4 = (long *)(lVar3 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar4,"item_");
  lVar3 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar3 + -8) & 0xf;
  if (uVar1 == 2) {
    lVar3 = *(long *)(lVar3 + -0x10);
  }
  else if (uVar1 == 7) {
    lVar3 = *(long *)(lVar3 + -0x10) + 0x28;
  }
  else {
    lVar3 = 0;
  }
  *(long *)(param_1 + 0x30) = lVar3;
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar3 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar3 + 10))) {
          plVar5 = (long *)(lVar3 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar5,"touch_pos_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar3 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar3 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar3 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar3 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar3 + -0x10) + 0x18),(float *)&local_50);
      lVar3 = *(long *)(lVar3 + -0x10);
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar3 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar3 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71020f348c;
      }
    }
    fVar7 = 0.0;
  }
LAB_71020f348c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),fVar7)
  ;
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar3 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar3 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar3 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar3 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar3 + -0x10) + 0x18),(float *)&local_50);
      lVar3 = *(long *)(lVar3 + -0x10);
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar3 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar3 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71020f354c;
      }
    }
    fVar7 = 0.0;
  }
LAB_71020f354c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar7,(int)*(undefined8 *)(param_1 + 0x40));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar3 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar3 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar3 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar3 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar3 + -0x10) + 0x18),(float *)&local_50);
      lVar3 = *(long *)(lVar3 + -0x10);
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar3 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar3 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71020f360c;
      }
    }
    fVar7 = 0.0;
  }
LAB_71020f360c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x48) = (ulong)(uint)fVar7;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x40);
  plVar4 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar4;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar3 = *plVar4, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar3 + 10))) {
          plVar5 = (long *)(lVar3 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar5 = plVar4 + (long)param_3 * 2;
    }
  }
  else {
    plVar5 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar4 <= plVar5) {
      plVar5 = &DAT_7104862960;
    }
  }
  uVar1 = FUN_71038f4d40(param_2,plVar5,"touch_param_");
  pbVar2 = (byte *)(ulong)uVar1;
  lVar3 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar3 + -8);
  if (uVar1 == 3) {
    fVar7 = *(float *)(lVar3 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar7 = (float)*(long *)(lVar3 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar2 = FUN_7103907f00((byte *)(*(long *)(lVar3 + -0x10) + 0x18),(float *)&local_50);
      lVar3 = *(long *)(lVar3 + -0x10);
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar3 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar3 + 0x10);
      }
      if (pbVar2 == (byte *)(uVar6 + 1)) {
        fVar7 = (float)local_50;
        if (local_48 != 0x13) {
          fVar7 = (float)local_50;
        }
        goto LAB_71020f3760;
      }
    }
    fVar7 = 0.0;
  }
LAB_71020f3760:
  *(float *)(param_1 + 0x50) = fVar7;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

