// addr:      71020b6680
// offset:    0x20b6680
// name:      FUN_71020b6680
// mangled:   
// signature: byte * __cdecl FUN_71020b6680(long param_1, long param_2, int param_3)


byte * FUN_71020b6680(long param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  long local_50;
  int local_48;
  
  FUN_7101ff9450(param_1,param_2,param_3);
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
  FUN_71038f4d40(param_2,plVar6,"lr_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b67e0;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b67e0:
  *(float *)(param_1 + 0x2c) = fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"joint_id_");
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b6898:
    lVar8 = *(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_71020b6898;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          lVar8 = (long)fVar10;
          goto LAB_71020b6900;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_50);
      lVar8 = *(long *)pfVar9;
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      pfVar9 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar7 + 1));
    lVar8 = 0;
  }
LAB_71020b6900:
  *(long *)(param_1 + 0x30) = lVar8;
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
  FUN_71038f4d40(param_2,plVar5,"motion_kind_");
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b69b8:
    lVar8 = *(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_71020b69b8;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          lVar8 = (long)fVar10;
          goto LAB_71020b6a20;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_50);
      lVar8 = *(long *)pfVar9;
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      pfVar9 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar7 + 1));
    lVar8 = 0;
  }
LAB_71020b6a20:
  *(long *)(param_1 + 0x38) = lVar8;
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
  FUN_71038f4d40(param_2,plVar5,"motion_rate_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b6bb8;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b6bb8:
  *(float *)(param_1 + 0x40) = fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"is_motion_loop_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 0) {
LAB_71020b6cb4:
    bVar1 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020b6c94:
        if (fVar10 != 0.0) goto LAB_71020b6cbc;
      }
      goto LAB_71020b6cb4;
    }
    if (uVar2 == 1) {
      bVar1 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020b6ccc:
      bVar1 = !bVar1;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar10 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020b6c94;
      }
LAB_71020b6cbc:
      if (uVar2 == 3) {
        bVar1 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar1 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020b6ccc;
      }
      bVar1 = true;
    }
  }
  *(bool *)(param_1 + 0x44) = bVar1;
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
  FUN_71038f4d40(param_2,plVar5,"is_enable_capture_cut_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 0) {
LAB_71020b6dd4:
    bVar1 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar8 + -0x10) != 0) {
        fVar10 = (float)*(long *)(lVar8 + -0x10);
joined_r0x0071020b6db4:
        if (fVar10 != 0.0) goto LAB_71020b6ddc;
      }
      goto LAB_71020b6dd4;
    }
    if (uVar2 == 1) {
      bVar1 = *(int *)(lVar8 + -0x10) == 0;
LAB_71020b6dec:
      bVar1 = !bVar1;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar10 = *(float *)(lVar8 + -0x10);
        goto joined_r0x0071020b6db4;
      }
LAB_71020b6ddc:
      if (uVar2 == 3) {
        bVar1 = false;
        if (!NAN(*(float *)(lVar8 + -0x10))) {
          bVar1 = *(float *)(lVar8 + -0x10) == 0.0;
        }
        goto LAB_71020b6dec;
      }
      bVar1 = true;
    }
  }
  *(bool *)(param_1 + 0x45) = bVar1;
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
  FUN_71038f4d40(param_2,plVar5,"capture_cut_frame_");
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b6eb0:
    uVar4 = (undefined4)*(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_71020b6eb0;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar10;
          goto LAB_71020b6f18;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_50);
      lVar8 = *(long *)pfVar9;
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      pfVar9 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar7 + 1));
    uVar4 = 0;
  }
LAB_71020b6f18:
  *(undefined4 *)(param_1 + 0x48) = uVar4;
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
  FUN_71038f4d40(param_2,plVar5,"capture_cut_frame_damage_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b7080;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b7080:
  *(float *)(param_1 + 0x4c) = fVar10;
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
  FUN_71038f4d40(param_2,plVar5,"capture_recovery_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b71b8;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b71b8:
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
  FUN_71038f4d40(param_2,plVar5,"capture_clatter_frame_");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b72f0;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b72f0:
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
  FUN_71038f4d40(param_2,plVar5,"capture_cut_speed_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b743c;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b743c:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x60) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar8 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar8 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar8 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar8 + -0x10) + 0x18),(float *)&local_50);
      lVar8 = *(long *)(lVar8 + -0x10);
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020b74fc;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020b74fc:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x68);
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
  uVar2 = FUN_71038f4d40(param_2,plVar5,"kinetic_type_");
  pbVar3 = (byte *)(ulong)uVar2;
  pfVar9 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020b75c8:
    uVar4 = (undefined4)*(long *)pfVar9;
  }
  else {
    do {
      fVar10 = pfVar9[2];
      if (fVar10 == 2.66247e-44) goto LAB_71020b75c8;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar9;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar10;
          goto LAB_71020b7630;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar9 + 0x18),(float *)&local_50);
      lVar8 = *(long *)pfVar9;
      if (*(char *)(lVar8 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar8 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar8 + 0x10);
      }
      pfVar9 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar7 + 1));
    uVar4 = 0;
  }
LAB_71020b7630:
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar3;
}

