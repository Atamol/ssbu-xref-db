// addr:      7101ff9450
// offset:    0x1ff9450
// name:      FUN_7101ff9450
// mangled:   
// signature: uint __cdecl FUN_7101ff9450(long param_1, long param_2, int param_3)


uint FUN_7101ff9450(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  float local_50 [4];
  
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar8 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar8 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar7 = *plVar6, plVar8 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar8 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar8 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar8 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar8) {
      plVar8 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar8,"link_event_kind_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101ff952c:
    lVar7 = *(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101ff952c;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          lVar7 = (long)fVar11;
          goto LAB_7101ff9594;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),local_50);
      lVar7 = *(long *)pfVar10;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar9 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar9 = *(ulong *)(lVar7 + 0x10);
      }
      pfVar10 = local_50;
    } while (pbVar4 == (byte *)(uVar9 + 1));
    lVar7 = 0;
  }
LAB_7101ff9594:
  *(long *)(param_1 + 0x10) = lVar7;
  plVar8 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar8;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar8 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar8[1] != 0x16) &&
           (lVar7 = *plVar8, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar6 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = plVar8 + (long)param_3 * 2;
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar8 <= plVar6) {
      plVar6 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar6,"sender_id_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101ff964c:
    uVar5 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101ff964c;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined4)(long)fVar11;
          goto LAB_7101ff96b4;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),local_50);
      lVar7 = *(long *)pfVar10;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar9 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar9 = *(ulong *)(lVar7 + 0x10);
      }
      pfVar10 = local_50;
    } while (pbVar4 == (byte *)(uVar9 + 1));
    uVar5 = 0;
  }
LAB_7101ff96b4:
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  plVar8 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar8;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar8 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar8[1] != 0x16) &&
           (lVar7 = *plVar8, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar6 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = plVar8 + (long)param_3 * 2;
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar8 <= plVar6) {
      plVar6 = &DAT_7104862960;
    }
  }
  FUN_71038f4d40(param_2,plVar6,"no_");
  pfVar10 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_7101ff976c:
    uVar5 = (undefined4)*(long *)pfVar10;
  }
  else {
    do {
      fVar11 = pfVar10[2];
      if (fVar11 == 2.66247e-44) goto LAB_7101ff976c;
      if (fVar11 == 4.2039e-45) {
        fVar11 = (float)(int)*pfVar10;
        if ((-9.223372e+18 <= fVar11) && (fVar11 < 9.223372e+18)) {
          uVar5 = (undefined4)(long)fVar11;
          goto LAB_7101ff97d4;
        }
        break;
      }
      if (((uint)fVar11 & 0xf) != 4) break;
      pbVar4 = FUN_7103907f00((byte *)(*(long *)pfVar10 + 0x18),local_50);
      lVar7 = *(long *)pfVar10;
      if (*(char *)(lVar7 + 8) == '\x04') {
        uVar9 = (ulong)*(byte *)(lVar7 + 0xb);
      }
      else {
        uVar9 = *(ulong *)(lVar7 + 0x10);
      }
      pfVar10 = local_50;
    } while (pbVar4 == (byte *)(uVar9 + 1));
    uVar5 = 0;
  }
LAB_7101ff97d4:
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  plVar8 = (long *)(*(long *)(param_2 + 0x10) + -0x10);
  *(long **)(param_2 + 0x10) = plVar8;
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar6 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar8 = (long *)**(long **)(param_2 + 0x20);
        plVar6 = &DAT_7104862960;
        if (((int)plVar8[1] != 0x16) &&
           (lVar7 = *plVar8, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar7 + 10))) {
          plVar6 = (long *)(lVar7 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar6 = plVar8 + (long)param_3 * 2;
    }
  }
  else {
    plVar6 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (plVar8 <= plVar6) {
      plVar6 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar6,"result_");
  lVar7 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar7 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar7 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar11 = *(float *)(lVar7 + -0x10);
          goto joined_r0x007101ff98cc;
        }
LAB_7101ff98d8:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_7101ff98f4;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar7 + -0x10))) {
          bVar2 = *(float *)(lVar7 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_7101ff98f4;
    }
    if (*(long *)(lVar7 + -0x10) != 0) {
      fVar11 = (float)*(long *)(lVar7 + -0x10);
joined_r0x007101ff98cc:
      if (fVar11 != 0.0) goto LAB_7101ff98d8;
    }
  }
  bVar2 = false;
LAB_7101ff98f4:
  *(bool *)(param_1 + 0x28) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

