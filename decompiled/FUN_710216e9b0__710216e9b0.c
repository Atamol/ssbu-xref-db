// addr:      710216e9b0
// offset:    0x216e9b0
// name:      FUN_710216e9b0
// mangled:   
// signature: byte * __cdecl FUN_710216e9b0(long param_1, long param_2, int param_3)


byte * FUN_710216e9b0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  float *pfVar7;
  float fVar8;
  float local_40 [4];
  
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
           (lVar3 = *plVar5, plVar6 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar3 + 10))) {
          plVar6 = (long *)(lVar3 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  FUN_71038f4d40(param_2,plVar6,"owner_joint_id_");
  pfVar7 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_710216ea8c:
    lVar3 = *(long *)pfVar7;
  }
  else {
    do {
      fVar8 = pfVar7[2];
      if (fVar8 == 2.66247e-44) goto LAB_710216ea8c;
      if (fVar8 == 4.2039e-45) {
        fVar8 = (float)(int)*pfVar7;
        if ((-9.223372e+18 <= fVar8) && (fVar8 < 9.223372e+18)) {
          lVar3 = (long)fVar8;
          goto LAB_710216eaf4;
        }
        break;
      }
      if (((uint)fVar8 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar7 + 0x18),local_40);
      lVar3 = *(long *)pfVar7;
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar4 = (ulong)*(byte *)(lVar3 + 0xb);
      }
      else {
        uVar4 = *(ulong *)(lVar3 + 0x10);
      }
      pfVar7 = local_40;
    } while (pbVar2 == (byte *)(uVar4 + 1));
    lVar3 = 0;
  }
LAB_710216eaf4:
  *(long *)(param_1 + 0x30) = lVar3;
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
           (lVar3 = *plVar6, plVar5 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar3 + 10))) {
          plVar5 = (long *)(lVar3 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  uVar1 = FUN_71038f4d40(param_2,plVar5,"joint_id_");
  pbVar2 = (byte *)(ulong)uVar1;
  pfVar7 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_710216ebb4:
    lVar3 = *(long *)pfVar7;
  }
  else {
    do {
      fVar8 = pfVar7[2];
      if (fVar8 == 2.66247e-44) goto LAB_710216ebb4;
      if (fVar8 == 4.2039e-45) {
        fVar8 = (float)(int)*pfVar7;
        if ((-9.223372e+18 <= fVar8) && (fVar8 < 9.223372e+18)) {
          lVar3 = (long)fVar8;
          goto LAB_710216ec1c;
        }
        break;
      }
      if (((uint)fVar8 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar7 + 0x18),local_40);
      lVar3 = *(long *)pfVar7;
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar4 = (ulong)*(byte *)(lVar3 + 0xb);
      }
      else {
        uVar4 = *(ulong *)(lVar3 + 0x10);
      }
      pfVar7 = local_40;
    } while (pbVar2 == (byte *)(uVar4 + 1));
    lVar3 = 0;
  }
LAB_710216ec1c:
  *(long *)(param_1 + 0x38) = lVar3;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

