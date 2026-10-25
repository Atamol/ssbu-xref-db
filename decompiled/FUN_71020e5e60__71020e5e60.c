// addr:      71020e5e60
// offset:    0x20e5e60
// name:      FUN_71020e5e60
// mangled:   
// signature: uint __cdecl FUN_71020e5e60(long param_1, long param_2, int param_3)


uint FUN_71020e5e60(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  long local_50;
  int local_48;
  
  FUN_71020d4a00(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar5 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar5[1] != 0x16) &&
           (lVar8 = *plVar5, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
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
  FUN_71038f4d40(param_2,plVar6,"upper_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar8 + -0x10);
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
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020e5fd4;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020e5fd4:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),fVar9)
  ;
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar8 + -0x10);
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
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020e6094;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020e6094:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar9,(int)*(undefined8 *)(param_1 + 0x20));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar8 + -0x10);
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
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020e6154;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020e6154:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x28) = (ulong)(uint)fVar9;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
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
           (lVar8 = *plVar6, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
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
  FUN_71038f4d40(param_2,plVar5,"under_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar8 + -0x10);
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
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020e62bc;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020e62bc:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x30) = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),fVar9)
  ;
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar8 + -0x10);
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
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020e637c;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020e637c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x30) = CONCAT44(fVar9,(int)*(undefined8 *)(param_1 + 0x30));
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"z");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 3) {
    fVar9 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar9 = (float)*(long *)(lVar8 + -0x10);
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
        fVar9 = (float)local_50;
        if (local_48 != 0x13) {
          fVar9 = (float)local_50;
        }
        goto LAB_71020e643c;
      }
    }
    fVar9 = 0.0;
  }
LAB_71020e643c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x38) = (ulong)(uint)fVar9;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
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
           (lVar8 = *plVar6, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
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
  FUN_71038f4d40(param_2,plVar5,"is_exist_upper_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 0) {
LAB_71020e651c:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar9 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020e64fc:
        if (fVar9 != 0.0) goto LAB_71020e6524;
      }
      goto LAB_71020e651c;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020e6534:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar9 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020e64fc;
      }
LAB_71020e6524:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020e6534;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x40) = bVar2;
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
           (lVar8 = *plVar6, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
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
  FUN_71038f4d40(param_2,plVar5,"is_exist_under_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 0) {
LAB_71020e6604:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar9 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020e65e4:
        if (fVar9 != 0.0) goto LAB_71020e660c;
      }
      goto LAB_71020e6604;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020e661c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar9 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020e65e4;
      }
LAB_71020e660c:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020e661c;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x41) = bVar2;
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
           (lVar8 = *plVar6, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar8 + 10))) {
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
  uVar3 = FUN_71038f4d40(param_2,plVar5,"is_disabled_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar8 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar9 = *(float *)(lVar8 + -0x10);
          goto joined_r0x0071020e66e8;
        }
LAB_71020e66f4:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_71020e6710;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_71020e6710;
    }
    if (*(long *)(lVar8 + -0x10) != 0) {
      fVar9 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020e66e8:
      if (fVar9 != 0.0) goto LAB_71020e66f4;
    }
  }
  bVar2 = false;
LAB_71020e6710:
  *(bool *)(param_1 + 0x42) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

