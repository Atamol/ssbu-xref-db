// addr:      71020d4a00
// offset:    0x20d4a00
// name:      FUN_71020d4a00
// mangled:   
// signature: byte * __cdecl FUN_71020d4a00(long param_1, long param_2, int param_3)


byte * FUN_71020d4a00(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float local_50 [4];
  
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar5 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar4 = (long *)**(long **)(param_2 + 0x20);
        plVar5 = &DAT_7104862960;
        if (((int)plVar4[1] != 0x16) &&
           (lVar6 = *plVar4, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar5 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar5,"id_");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d4adc:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020d4adc;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020d4b44;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_50);
      lVar6 = *(long *)pfVar8;
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x10);
      }
      pfVar8 = local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020d4b44:
  *(undefined4 *)(param_1 + 8) = uVar3;
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
           (lVar6 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar4 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar4,"object_id_");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d4bfc:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020d4bfc;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020d4c64;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_50);
      lVar6 = *(long *)pfVar8;
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x10);
      }
      pfVar8 = local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020d4c64:
  *(undefined4 *)(param_1 + 0xc) = uVar3;
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
           (lVar6 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar4 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar4,"event_kind_");
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d4d1c:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020d4d1c;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020d4d84;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_50);
      lVar6 = *(long *)pfVar8;
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x10);
      }
      pfVar8 = local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020d4d84:
  *(undefined4 *)(param_1 + 0x10) = uVar3;
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
           (lVar6 = *plVar5, plVar4 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar6 + 10))) {
          plVar4 = (long *)(lVar6 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  uVar1 = FUN_71038f4d40(param_2,plVar4,"sender_id_");
  pbVar2 = (byte *)(ulong)uVar1;
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d4e3c:
    uVar3 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020d4e3c;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar3 = (undefined4)(long)fVar9;
          goto LAB_71020d4ea4;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_50);
      lVar6 = *(long *)pfVar8;
      if (*(char *)(lVar6 + 8) == '\x04') {
        uVar7 = (ulong)*(byte *)(lVar6 + 0xb);
      }
      else {
        uVar7 = *(ulong *)(lVar6 + 0x10);
      }
      pfVar8 = local_50;
    } while (pbVar2 == (byte *)(uVar7 + 1));
    uVar3 = 0;
  }
LAB_71020d4ea4:
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

