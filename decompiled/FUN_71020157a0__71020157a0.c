// addr:      71020157a0
// offset:    0x20157a0
// name:      FUN_71020157a0
// mangled:   
// signature: undefined8 __cdecl FUN_71020157a0(long param_1)


undefined8 FUN_71020157a0(long param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  byte *pbVar4;
  undefined1 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  long local_40;
  int local_38;
  
  lVar9 = **(long **)(param_1 + 0x20);
  plVar6 = *(long **)(param_1 + 0x10);
  plVar1 = (long *)(lVar9 + 0x10);
  if (((int)((ulong)((long)plVar6 - (long)plVar1) >> 4) != 2 || plVar6 <= (long *)(lVar9 + 0x20)) ||
      (long *)(lVar9 + 0x20) == &DAT_7104862960) {
    return 0;
  }
  if ((*(uint *)(lVar9 + 0x28) & 0xf) != 5) {
    return 0;
  }
  if (plVar6 <= plVar1) {
    plVar1 = &DAT_7104862960;
  }
  if ((*(uint *)(plVar1 + 1) & 0xf) == 2) {
    pfVar10 = (float *)*plVar1;
  }
  else if ((*(uint *)(plVar1 + 1) & 0xf) == 7) {
    pfVar10 = (float *)(*plVar1 + 0x28);
  }
  else {
    pfVar10 = (float *)0x0;
  }
  FUN_71038f4d40(param_1,plVar6 + -2,"reaction_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_71020158f4;
      }
    }
    fVar12 = 0.0;
  }
LAB_71020158f4:
  *pfVar10 = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"level_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201592c:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201592c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_7102015994;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_7102015994:
  pfVar10[1] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"height_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_71020159cc:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_71020159cc;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_7102015a34;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_7102015a34:
  pfVar10[2] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"speed_vec_");
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102015b60;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102015b60:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 6) = *(undefined8 *)(pfVar10 + 6);
  *(ulong *)(pfVar10 + 4) = CONCAT44((int)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20),fVar12);
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102015c20;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102015c20:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 6) = *(undefined8 *)(pfVar10 + 6);
  *(ulong *)(pfVar10 + 4) = CONCAT44(fVar12,(int)*(undefined8 *)(pfVar10 + 4));
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"attack_pos_");
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102015d00;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102015d00:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 10) = *(undefined8 *)(pfVar10 + 10);
  *(ulong *)(pfVar10 + 8) = CONCAT44((int)((ulong)*(undefined8 *)(pfVar10 + 8) >> 0x20),fVar12);
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102015dc0;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102015dc0:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 10) = *(undefined8 *)(pfVar10 + 10);
  *(ulong *)(pfVar10 + 8) = CONCAT44(fVar12,(int)*(undefined8 *)(pfVar10 + 8));
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"z");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102015e80;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102015e80:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(ulong *)(pfVar10 + 10) = (ulong)(uint)fVar12;
  *(undefined8 *)(pfVar10 + 8) = *(undefined8 *)(pfVar10 + 8);
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"attack_speed_");
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102015f68;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102015f68:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 0xe) = *(undefined8 *)(pfVar10 + 0xe);
  *(ulong *)(pfVar10 + 0xc) = CONCAT44((int)((ulong)*(undefined8 *)(pfVar10 + 0xc) >> 0x20),fVar12);
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102016028;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102016028:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 0xe) = *(undefined8 *)(pfVar10 + 0xe);
  *(ulong *)(pfVar10 + 0xc) = CONCAT44(fVar12,(int)*(undefined8 *)(pfVar10 + 0xc));
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"angle_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_71020160f4;
      }
    }
    fVar12 = 0.0;
  }
LAB_71020160f4:
  pfVar10[0x10] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"lr_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_71020161ac;
      }
    }
    fVar12 = 0.0;
  }
LAB_71020161ac:
  pfVar10[0x11] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"reaction_frame_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102016264;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102016264:
  pfVar10[0x12] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"hitstop_frame_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201629c:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201629c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_7102016304;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_7102016304:
  pfVar10[0x13] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"attr_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201633c:
    lVar9 = *(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201633c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          lVar9 = (long)fVar12;
          goto LAB_71020163a4;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    lVar9 = 0;
  }
LAB_71020163a4:
  *(long *)(pfVar10 + 0x14) = lVar9;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"damage_add_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_71020164bc;
      }
    }
    fVar12 = 0.0;
  }
LAB_71020164bc:
  pfVar10[0x16] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"team_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_71020164f4:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_71020164f4;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_710201655c;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_710201655c:
  pfVar10[0x17] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"stop_delay_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102016644;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102016644:
  pfVar10[0x18] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"ground_normal_");
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"x");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_7102016710;
      }
    }
    fVar12 = 0.0;
  }
LAB_7102016710:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 0x1e) = *(undefined8 *)(pfVar10 + 0x1e);
  *(ulong *)(pfVar10 + 0x1c) =
       CONCAT44((int)((ulong)*(undefined8 *)(pfVar10 + 0x1c) >> 0x20),fVar12);
  FUN_71038f4d40(param_1,(long *)(*(long *)(param_1 + 0x10) + -0x10),"y");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 3) {
    fVar12 = *(float *)(lVar9 + -0x10);
  }
  else if (uVar2 == 0x13) {
    fVar12 = (float)*(long *)(lVar9 + -0x10);
  }
  else {
    if ((uVar2 & 0xf) == 4) {
      pbVar4 = FUN_7103907f00((byte *)(*(long *)(lVar9 + -0x10) + 0x18),(float *)&local_40);
      lVar9 = *(long *)(lVar9 + -0x10);
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      if (pbVar4 == (byte *)(uVar7 + 1)) {
        fVar12 = (float)local_40;
        if (local_38 != 0x13) {
          fVar12 = (float)local_40;
        }
        goto LAB_71020167d0;
      }
    }
    fVar12 = 0.0;
  }
LAB_71020167d0:
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  *(undefined8 *)(pfVar10 + 0x1e) = *(undefined8 *)(pfVar10 + 0x1e);
  *(ulong *)(pfVar10 + 0x1c) = CONCAT44(fVar12,(int)*(undefined8 *)(pfVar10 + 0x1c));
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"object_id_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201681c:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201681c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_7102016884;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_7102016884:
  pfVar10[0x20] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"owner_object_id_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_71020168bc:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_71020168bc;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_7102016924;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_7102016924:
  pfVar10[0x21] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"object_category_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201695c:
    uVar5 = (undefined1)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201695c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          uVar5 = (undefined1)(long)fVar12;
          goto LAB_71020169c4;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    uVar5 = 0;
  }
LAB_71020169c4:
  *(undefined1 *)(pfVar10 + 0x22) = uVar5;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"status_air_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016a40:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016a20:
        if (fVar12 != 0.0) goto LAB_7102016a48;
      }
      goto LAB_7102016a40;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016a58:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016a20;
      }
LAB_7102016a48:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016a58;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x89) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"prev_status_ground_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016ae0:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016ac0:
        if (fVar12 != 0.0) goto LAB_7102016ae8;
      }
      goto LAB_7102016ae0;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016af8:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016ac0;
      }
LAB_7102016ae8:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016af8;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x8a) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"ground_damage_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016b80:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016b60:
        if (fVar12 != 0.0) goto LAB_7102016b88;
      }
      goto LAB_7102016b80;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016b98:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016b60;
      }
LAB_7102016b88:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016b98;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x8b) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"absolute_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016c20:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016c00:
        if (fVar12 != 0.0) goto LAB_7102016c28;
      }
      goto LAB_7102016c20;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016c38:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016c00;
      }
LAB_7102016c28:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016c38;
      }
      bVar3 = true;
    }
  }
  *(bool *)(pfVar10 + 0x23) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"meteor_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016cc0:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016ca0:
        if (fVar12 != 0.0) goto LAB_7102016cc8;
      }
      goto LAB_7102016cc0;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016cd8:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016ca0;
      }
LAB_7102016cc8:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016cd8;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x8d) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"direct_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016d60:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016d40:
        if (fVar12 != 0.0) goto LAB_7102016d68;
      }
      goto LAB_7102016d60;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016d78:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016d40;
      }
LAB_7102016d68:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016d78;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x8e) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"sync_speed_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016e00:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016de0:
        if (fVar12 != 0.0) goto LAB_7102016e08;
      }
      goto LAB_7102016e00;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016e18:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016de0;
      }
LAB_7102016e08:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016e18;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x8f) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"back_slash_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016ea0:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016e80:
        if (fVar12 != 0.0) goto LAB_7102016ea8;
      }
      goto LAB_7102016ea0;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016eb8:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016e80;
      }
LAB_7102016ea8:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016eb8;
      }
      bVar3 = true;
    }
  }
  *(bool *)(pfVar10 + 0x24) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"pull_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016f40:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016f20:
        if (fVar12 != 0.0) goto LAB_7102016f48;
      }
      goto LAB_7102016f40;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016f58:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016f20;
      }
LAB_7102016f48:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016f58;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x91) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"r_fix_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102016fe0:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102016fc0:
        if (fVar12 != 0.0) goto LAB_7102016fe8;
      }
      goto LAB_7102016fe0;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102016ff8:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102016fc0;
      }
LAB_7102016fe8:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102016ff8;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x92) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"r_fix_damage_speed_up_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 == 0) {
LAB_7102017080:
    bVar3 = false;
  }
  else {
    if (uVar2 == 0x13) {
      if (*(long *)(lVar9 + -0x10) != 0) {
        fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102017060:
        if (fVar12 != 0.0) goto LAB_7102017088;
      }
      goto LAB_7102017080;
    }
    if (uVar2 == 1) {
      bVar3 = *(int *)(lVar9 + -0x10) == 0;
LAB_7102017098:
      bVar3 = !bVar3;
    }
    else {
      if ((uVar2 & 0xf) == 3) {
        fVar12 = *(float *)(lVar9 + -0x10);
        goto joined_r0x007102017060;
      }
LAB_7102017088:
      if (uVar2 == 3) {
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
        goto LAB_7102017098;
      }
      bVar3 = true;
    }
  }
  *(bool *)((long)pfVar10 + 0x93) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"no_dead_damage_fly_effect_");
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(lVar9 + -8);
  if (uVar2 != 0) {
    if (uVar2 != 0x13) {
      if (uVar2 == 1) {
        bVar3 = *(int *)(lVar9 + -0x10) == 0;
      }
      else {
        if ((uVar2 & 0xf) == 3) {
          fVar12 = *(float *)(lVar9 + -0x10);
          goto joined_r0x007102017100;
        }
LAB_7102017128:
        if (uVar2 != 3) {
          bVar3 = true;
          goto LAB_7102017144;
        }
        bVar3 = false;
        if (!NAN(*(float *)(lVar9 + -0x10))) {
          bVar3 = *(float *)(lVar9 + -0x10) == 0.0;
        }
      }
      bVar3 = !bVar3;
      goto LAB_7102017144;
    }
    if (*(long *)(lVar9 + -0x10) != 0) {
      fVar12 = (float)*(long *)(lVar9 + -0x10);
joined_r0x007102017100:
      if (fVar12 != 0.0) goto LAB_7102017128;
    }
  }
  bVar3 = false;
LAB_7102017144:
  *(bool *)(pfVar10 + 0x25) = bVar3;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"target_pos_speed_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201717c:
    fVar12 = (float)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201717c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          fVar12 = (float)(long)fVar12;
          goto LAB_71020171e4;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    fVar12 = 0.0;
  }
LAB_71020171e4:
  pfVar10[0x26] = fVar12;
  lVar9 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar9 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar9 + -0x20),"fix_gravity_accel_");
  pfVar11 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710201721c:
    uVar5 = (undefined1)*(long *)pfVar11;
  }
  else {
    do {
      fVar12 = pfVar11[2];
      if (fVar12 == 2.66247e-44) goto LAB_710201721c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar11;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          uVar5 = (undefined1)(long)fVar12;
          goto LAB_7102017284;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar11 + 0x18),(float *)&local_40);
      lVar9 = *(long *)pfVar11;
      if (*(char *)(lVar9 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar9 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar9 + 0x10);
      }
      pfVar11 = (float *)&local_40;
    } while (pbVar4 == (byte *)(uVar7 + 1));
    uVar5 = 0;
  }
LAB_7102017284:
  *(undefined1 *)(pfVar10 + 0x27) = uVar5;
  uVar8 = *(long *)(param_1 + 0x10) - 0x10;
  *(ulong *)(param_1 + 0x10) = uVar8;
  uVar7 = **(long **)(param_1 + 0x20) + 0x10;
  while (uVar8 < uVar7) {
    *(ulong *)(param_1 + 0x10) = uVar8 + 0x10;
    *(undefined4 *)(uVar8 + 8) = 0;
    uVar8 = *(ulong *)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x10) = uVar7;
  return 0;
}

