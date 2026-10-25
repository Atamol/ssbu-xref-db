// addr:      71020dd590
// offset:    0x20dd590
// name:      FUN_71020dd590
// mangled:   
// signature: uint __cdecl FUN_71020dd590(long param_1, long param_2, int param_3)


uint FUN_71020dd590(long param_1,long param_2,int param_3)

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
  FUN_71038f4d40(param_2,plVar6,"pos_");
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
        goto LAB_71020dd704;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020dd704:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),fVar10);
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
        goto LAB_71020dd7c4;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020dd7c4:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x20));
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
        goto LAB_71020dd884;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020dd884:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(ulong *)(param_1 + 0x28) = (ulong)(uint)fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"use_safe_pos_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 0) {
LAB_71020dd99c:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020dd97c:
        if (fVar10 != 0.0) goto LAB_71020dd9a4;
      }
      goto LAB_71020dd99c;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020dd9b4:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar10 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020dd97c;
      }
LAB_71020dd9a4:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020dd9b4;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x30) = bVar2;
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
  FUN_71038f4d40(param_2,plVar5,"safe_pos_");
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
        goto LAB_71020ddb0c;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020ddb0c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),fVar10);
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
        goto LAB_71020ddbcc;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020ddbcc:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x40));
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
  FUN_71038f4d40(param_2,plVar5,"speed_y_");
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
        goto LAB_71020ddd18;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020ddd18:
  *(float *)(param_1 + 0x50) = fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"rot_z_");
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
        goto LAB_71020dde50;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020dde50:
  *(float *)(param_1 + 0x54) = fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"squat_motion_kind_");
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020ddf08:
    lVar8 = *(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_71020ddf08;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          lVar8 = (long)fVar10;
          goto LAB_71020ddf70;
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
    lVar8 = 0;
  }
LAB_71020ddf70:
  *(long *)(param_1 + 0x58) = lVar8;
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
  FUN_71038f4d40(param_2,plVar5,"squat_motion_rate_");
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
        goto LAB_71020de0d8;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020de0d8:
  *(float *)(param_1 + 0x60) = fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"ignore_x_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 0) {
LAB_71020de1d4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020de1b4:
        if (fVar10 != 0.0) goto LAB_71020de1dc;
      }
      goto LAB_71020de1d4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020de1ec:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar10 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020de1b4;
      }
LAB_71020de1dc:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020de1ec;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 100) = bVar2;
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
  FUN_71038f4d40(param_2,plVar5,"punch_out_stage_flag_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar8 + -8);
  if (uVar1 == 0) {
LAB_71020de2f4:
    bVar2 = false;
  }
  else {
    if (uVar1 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020de2d4:
        if (fVar10 != 0.0) goto LAB_71020de2fc;
      }
      goto LAB_71020de2f4;
    }
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020de30c:
      bVar2 = !bVar2;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar10 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020de2d4;
      }
LAB_71020de2fc:
      if (uVar1 == 3) {
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020de30c;
      }
      bVar2 = true;
    }
  }
  *(bool *)(param_1 + 0x65) = bVar2;
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
  uVar3 = FUN_71038f4d40(param_2,plVar5,"is_special_spring_");
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
          goto joined_r0x0071020de410;
        }
LAB_71020de41c:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_71020de438;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar2 = *(float *)(lVar8 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_71020de438;
    }
    if (*(long *)(lVar8 + -0x10) != 0) {
      fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020de410:
      if (fVar10 != 0.0) goto LAB_71020de41c;
    }
  }
  bVar2 = false;
LAB_71020de438:
  *(bool *)(param_1 + 0x66) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

