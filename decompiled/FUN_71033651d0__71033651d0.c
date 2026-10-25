// addr:      71033651d0
// offset:    0x33651d0
// name:      FUN_71033651d0
// mangled:   
// signature: undefined8 __cdecl FUN_71033651d0(long param_1)


undefined8 FUN_71033651d0(long param_1)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  float *pfVar10;
  long ****pppplVar11;
  float fVar12;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float fStack_d0;
  undefined1 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  long alStack_a0 [4];
  long *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_50;
  int local_48;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -0x38) & 0xf;
  if (uVar1 == 2) {
    plVar8 = *(long **)(lVar5 + -0x40);
  }
  else if (uVar1 == 7) {
    plVar8 = (long *)(*(long *)(lVar5 + -0x40) + 0x28);
  }
  else {
    plVar8 = (long *)0x0;
  }
  uVar1 = *(uint *)(lVar5 + -0x28) & 0xf;
  if (uVar1 == 2) {
    lVar9 = *(long *)(lVar5 + -0x30);
  }
  else if (uVar1 == 7) {
    lVar9 = *(long *)(lVar5 + -0x30) + 0x28;
  }
  else {
    lVar9 = 0;
  }
  uVar1 = *(uint *)(lVar5 + -0x18) & 0xf;
  pfVar10 = (float *)(lVar5 + -0x20);
  if (uVar1 == 4) {
LAB_710336529c:
    pppplVar11 = (long ****)(*(long *)pfVar10 + 0x18);
  }
  else {
    if (uVar1 == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x20);
      }
      FUN_71039080b0(param_1,pfVar10);
      lVar5 = *(long *)(param_1 + 0x10);
      goto LAB_710336529c;
    }
    pppplVar11 = (long ****)0x0;
  }
  local_100 = (byte ***)0x0;
  local_f8 = 0x3f80000000000000;
  local_f0 = &DAT_3f8000003f800000;
  local_68 = 0;
  uStack_60 = 0;
  local_e8 = 0x3f8000003f000000;
  fStack_d0 = 0.0;
  uStack_cc = 0;
  fStack_c0 = 0.0;
  uStack_bc = 0;
  local_c8 = 0.0;
  fStack_c4 = 0.0;
  local_b0 = 0;
  local_b8 = 0;
  local_80 = (long *)0x0;
  local_70 = 0;
  local_e0 = 0x4270000040400000;
  local_d8 = 0.0;
  local_d4 = 0.0;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x10),"input_index");
  pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_710336531c:
    uVar4 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar12 = pfVar10[2];
      if (fVar12 == 2.66247e-44) goto LAB_710336531c;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar12;
          goto LAB_7103365384;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar10;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar6 + 1));
    uVar4 = 0;
  }
LAB_7103365384:
  local_100 = (byte ***)CONCAT44(local_100._4_4_,uVar4);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"slider_mode");
  pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_71033653bc:
    uVar4 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar12 = pfVar10[2];
      if (fVar12 == 2.66247e-44) goto LAB_71033653bc;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar12;
          goto LAB_7103365424;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar10;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar6 + 1));
    uVar4 = 0;
  }
LAB_7103365424:
  local_100 = (byte ***)CONCAT44(uVar4,(undefined4)local_100);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"begin_value");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_710336553c;
      }
    }
    fVar12 = 0.0;
  }
LAB_710336553c:
  local_f8 = CONCAT44(local_f8._4_4_,fVar12);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"end_value");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_71033655f4;
      }
    }
    fVar12 = 0.0;
  }
LAB_71033655f4:
  local_f8 = CONCAT44(fVar12,(undefined4)local_f8);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"step_value");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_71033656ac;
      }
    }
    fVar12 = 0.0;
  }
LAB_71033656ac:
  local_f0 = (undefined1 *)CONCAT44(local_f0._4_4_,fVar12);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"step_stick");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_7103365764;
      }
    }
    fVar12 = 0.0;
  }
LAB_7103365764:
  local_f0 = (undefined1 *)CONCAT44(fVar12,(undefined4)local_f0);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"step_button");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_710336581c;
      }
    }
    fVar12 = 0.0;
  }
LAB_710336581c:
  local_e8 = CONCAT44(local_e8._4_4_,fVar12);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"first_speed");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_71033658d4;
      }
    }
    fVar12 = 0.0;
  }
LAB_71033658d4:
  local_e8 = CONCAT44(fVar12,(undefined4)local_e8);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"accel");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_710336598c;
      }
    }
    fVar12 = 0.0;
  }
LAB_710336598c:
  local_e0 = CONCAT44(local_e0._4_4_,fVar12);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"frame_rate");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_7103365a44;
      }
    }
    fVar12 = 0.0;
  }
LAB_7103365a44:
  local_e0 = CONCAT44(fVar12,(undefined4)local_e0);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range0_lock_value");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    local_d8 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    local_d8 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        local_d8 = (float)local_50;
        if (local_48 != 0x13) {
          local_d8 = (float)local_50;
        }
        goto LAB_7103365afc;
      }
    }
    local_d8 = 0.0;
  }
LAB_7103365afc:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range0_lower_margin");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    local_d4 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    local_d4 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        local_d4 = (float)local_50;
        if (local_48 != 0x13) {
          local_d4 = (float)local_50;
        }
        goto LAB_7103365bb4;
      }
    }
    local_d4 = 0.0;
  }
LAB_7103365bb4:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range0_upper_margin");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fStack_d0 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fStack_d0 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fStack_d0 = (float)local_50;
        if (local_48 != 0x13) {
          fStack_d0 = (float)local_50;
        }
        goto LAB_7103365c6c;
      }
    }
    fStack_d0 = 0.0;
  }
LAB_7103365c6c:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range0_valid");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  pfVar10 = (float *)(lVar5 + -0x10);
  uStack_cc = false;
  if (uVar1 != 0) {
    if (uVar1 == 0x13) {
      if ((*(long *)pfVar10 != 0) && ((float)*(long *)pfVar10 != 0.0)) goto LAB_7103365cf4;
LAB_7103365cec:
      uStack_cc = false;
    }
    else {
      if (uVar1 == 1) {
        bVar2 = *pfVar10 == 0.0;
      }
      else {
        if (((uVar1 & 0xf) == 3) && (*pfVar10 == 0.0)) goto LAB_7103365cec;
LAB_7103365cf4:
        if (uVar1 != 3) {
          uStack_cc = true;
          goto LAB_7103365d10;
        }
        bVar2 = false;
        if (!NAN(*pfVar10)) {
          bVar2 = *pfVar10 == 0.0;
        }
      }
      uStack_cc = !bVar2;
    }
  }
LAB_7103365d10:
  *(float **)(param_1 + 0x10) = pfVar10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range1_lock_value");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    local_c8 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    local_c8 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        local_c8 = (float)local_50;
        if (local_48 != 0x13) {
          local_c8 = (float)local_50;
        }
        goto LAB_7103365dc0;
      }
    }
    local_c8 = 0.0;
  }
LAB_7103365dc0:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range1_lower_margin");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fStack_c4 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fStack_c4 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fStack_c4 = (float)local_50;
        if (local_48 != 0x13) {
          fStack_c4 = (float)local_50;
        }
        goto LAB_7103365e78;
      }
    }
    fStack_c4 = 0.0;
  }
LAB_7103365e78:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range1_upper_margin");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fStack_c0 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fStack_c0 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fStack_c0 = (float)local_50;
        if (local_48 != 0x13) {
          fStack_c0 = (float)local_50;
        }
        goto LAB_7103365f30;
      }
    }
    fStack_c0 = 0.0;
  }
LAB_7103365f30:
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"lock_range1_valid");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  pfVar10 = (float *)(lVar5 + -0x10);
  uStack_bc = false;
  if (uVar1 != 0) {
    if (uVar1 == 0x13) {
      if ((*(long *)pfVar10 != 0) && ((float)*(long *)pfVar10 != 0.0)) goto LAB_7103365fb8;
LAB_7103365fb0:
      uStack_bc = false;
    }
    else {
      if (uVar1 == 1) {
        bVar2 = *pfVar10 == 0.0;
      }
      else {
        if (((uVar1 & 0xf) == 3) && (*pfVar10 == 0.0)) goto LAB_7103365fb0;
LAB_7103365fb8:
        if (uVar1 != 3) {
          uStack_bc = true;
          goto LAB_7103365fd4;
        }
        bVar2 = false;
        if (!NAN(*pfVar10)) {
          bVar2 = *pfVar10 == 0.0;
        }
      }
      uStack_bc = !bVar2;
    }
  }
LAB_7103365fd4:
  *(float **)(param_1 + 0x10) = pfVar10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"hold_value");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 == 3) {
    fVar12 = *(float *)(lVar5 + -0x10);
  }
  else if (uVar1 == 0x13) {
    fVar12 = (float)*(long *)(lVar5 + -0x10);
  }
  else {
    if ((uVar1 & 0xf) == 4) {
      pbVar3 = FUN_7103907f00((byte *)(*(long *)(lVar5 + -0x10) + 0x18),(float *)&local_50);
      lVar5 = *(long *)(lVar5 + -0x10);
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      if (pbVar3 == (byte *)(uVar6 + 1)) {
        fVar12 = (float)local_50;
        if (local_48 != 0x13) {
          fVar12 = (float)local_50;
        }
        goto LAB_7103366084;
      }
    }
    fVar12 = 0.0;
  }
LAB_7103366084:
  local_b8 = CONCAT44(local_b8._4_4_,fVar12);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"hold_count");
  pfVar10 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_1 + 0x10) + -8) == 0x13) {
LAB_71033660bc:
    uVar4 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar12 = pfVar10[2];
      if (fVar12 == 2.66247e-44) goto LAB_71033660bc;
      if (fVar12 == 4.2039e-45) {
        fVar12 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar12) && (fVar12 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar12;
          goto LAB_7103366124;
        }
        break;
      }
      if (((uint)fVar12 & 0xf) != 4) break;
      pbVar3 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),(float *)&local_50);
      lVar5 = *(long *)pfVar10;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar10 = (float *)&local_50;
    } while (pbVar3 == (byte *)(uVar6 + 1));
    uVar4 = 0;
  }
LAB_7103366124:
  local_b8 = CONCAT44(uVar4,(undefined4)local_b8);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar5 + -0x10;
  FUN_71038f4d40(param_1,(long *)(lVar5 + -0x20),"hold_valid");
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  local_b0 = false;
  if (uVar1 == 0) goto LAB_71033661c4;
  if (uVar1 == 0x13) {
    if (*(long *)(lVar5 + -0x10) != 0) {
      fVar12 = (float)*(long *)(lVar5 + -0x10);
joined_r0x007103366180:
      if (fVar12 != 0.0) goto LAB_71033661a8;
    }
    local_b0 = false;
  }
  else {
    if (uVar1 == 1) {
      bVar2 = *(int *)(lVar5 + -0x10) == 0;
    }
    else {
      if ((uVar1 & 0xf) == 3) {
        fVar12 = *(float *)(lVar5 + -0x10);
        goto joined_r0x007103366180;
      }
LAB_71033661a8:
      if (uVar1 != 3) {
        local_b0 = true;
        goto LAB_71033661c4;
      }
      bVar2 = false;
      if (!NAN(*(float *)(lVar5 + -0x10))) {
        bVar2 = *(float *)(lVar5 + -0x10) == 0.0;
      }
    }
    local_b0 = !bVar2;
  }
LAB_71033661c4:
  *(long *)(param_1 + 0x10) = lVar5 + -0x50;
  if ((plVar8 != (long *)0x0) && (lVar9 != 0)) {
    FUN_710337eaf0((long)&local_100);
    FUN_7103788db0(plVar8,lVar9,pppplVar11,(byte ****)&local_100,in_x4,in_x5,in_x6,in_x7);
  }
  if (alStack_a0 == local_80) {
    pcVar7 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) {
      return 0;
    }
    pcVar7 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar7)();
  return 0;
}

