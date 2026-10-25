// addr:      71021a59d0
// offset:    0x21a59d0
// name:      FUN_71021a59d0
// mangled:   
// signature: byte * __cdecl FUN_71021a59d0(long param_1, long param_2, int param_3)


byte * FUN_71021a59d0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  float *pfVar7;
  float fVar8;
  float local_40 [4];
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar4 = *plVar6, plVar3 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar4 + 10))) {
          plVar3 = (long *)(lVar4 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar3 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar3) {
      plVar3 = &DAT_7104862960;
    }
  }
  uVar1 = FUN_71038f4d40(param_2,plVar3,"cut_joint_id_");
  pbVar2 = (byte *)(ulong)uVar1;
  pfVar7 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71021a5aac:
    lVar4 = *(long *)pfVar7;
  }
  else {
    do {
      fVar8 = pfVar7[2];
      if (fVar8 == 2.66247e-44) goto LAB_71021a5aac;
      if (fVar8 == 4.2039e-45) {
        fVar8 = (float)(int)*pfVar7;
        if ((-9.223372e+18 <= fVar8) && (fVar8 < 9.223372e+18)) {
          lVar4 = (long)fVar8;
          goto LAB_71021a5b14;
        }
        break;
      }
      if (((uint)fVar8 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar7 + 0x18),local_40);
      lVar4 = *(long *)pfVar7;
      if (*(char *)(lVar4 + 8) == '\x04') {
        uVar5 = (ulong)*(byte *)(lVar4 + 0xb);
      }
      else {
        uVar5 = *(ulong *)(lVar4 + 0x10);
      }
      pfVar7 = local_40;
    } while (pbVar2 == (byte *)(uVar5 + 1));
    lVar4 = 0;
  }
LAB_71021a5b14:
  *(long *)(param_1 + 0x30) = lVar4;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

