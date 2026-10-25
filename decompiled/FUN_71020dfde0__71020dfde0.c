// addr:      71020dfde0
// offset:    0x20dfde0
// name:      FUN_71020dfde0
// mangled:   
// signature: byte * __cdecl FUN_71020dfde0(long param_1, long param_2, int param_3)


byte * FUN_71020dfde0(long param_1,long param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
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
           (lVar9 = *plVar5, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar6 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar6,"dir_vec_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020dff54;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020dff54:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e0014;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e0014:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x20));
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
           (lVar9 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar5 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"limit_edge_left_pos_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e0174;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e0174:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x30) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e0234;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e0234:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x30) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x30));
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
           (lVar9 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar5 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"limit_edge_right_pos_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e0394;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e0394:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(ulong *)(param_1 + 0x40) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e0454;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e0454:
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
           (lVar9 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar5 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"start_up_pos_");
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e05b4;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e05b4:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x50) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20),fVar10);
  FUN_71038f4d40(param_2,(long *)(*(long *)(param_2 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar10 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar10 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_50);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar7 + 1)) {
        fVar10 = (float)local_50;
        if (local_48 != 0x13) {
          fVar10 = (float)local_50;
        }
        goto LAB_71020e0674;
      }
    }
    fVar10 = 0.0;
  }
LAB_71020e0674:
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(ulong *)(param_1 + 0x50) = CONCAT44(fVar10,(int)*(undefined8 *)(param_1 + 0x50));
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
           (lVar9 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar5 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"is_out_air_");
  lVar9 = *(long *)(param_2 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 != 0) {
    if (uVar2 != 0x13) {
      if (uVar2 == 1) {
        bVar1 = *(int *)(lVar9 + -0x10) == 0;
      }
      else {
        if ((uVar2 & 0xf) == 3) {
          fVar10 = *(float *)(lVar9 + -0x10);
          goto joined_r0x0071020e0780;
        }
LAB_71020e078c:
        if (uVar2 != 3) {
          bVar1 = true;
          goto LAB_71020e07a8;
        }
        bVar1 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar1 = *(float *)(lVar9 + -0x10) == 0.0;
        }
      }
      bVar1 = !bVar1;
      goto LAB_71020e07a8;
    }
    if (*(long *)(lVar9 + -0x10) != 0) {
      fVar10 = (float)*(long *)(lVar9 + -0x10);
joined_r0x0071020e0780:
      if (fVar10 != 0.0) goto LAB_71020e078c;
    }
  }
  bVar1 = false;
LAB_71020e07a8:
  *(bool *)(param_1 + 0x60) = bVar1;
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
           (lVar9 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar9 + 10))) {
          plVar5 = (long *)(lVar9 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  uVar2 = FUN_71038f4d40(param_2,plVar5,"battle_object_id_");
  pbVar3 = (byte *)(ulong)uVar2;
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020e0860:
    uVar4 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar10 = pfVar8[2];
      if (fVar10 == 2.66247e-44) goto LAB_71020e0860;
      if (fVar10 == 4.2039e-45) {
        fVar10 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar10) && (fVar10 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar10;
          goto LAB_71020e08c8;
        }
        break;
      }
      if (((uint)fVar10 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),(float *)&local_50);
      lVar9 = *(long *)pfVar8;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar8 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar7 + 1));
    uVar4 = 0;
  }
LAB_71020e08c8:
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar3;
}

