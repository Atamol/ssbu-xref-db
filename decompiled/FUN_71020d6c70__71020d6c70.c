// addr:      71020d6c70
// offset:    0x20d6c70
// name:      FUN_71020d6c70
// mangled:   
// signature: byte * __cdecl FUN_71020d6c70(long param_1, long param_2, int param_3)


byte * FUN_71020d6c70(long param_1,long param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float *pfVar8;
  float fVar9;
  float local_40 [4];
  
  FUN_71020d4a00(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar3 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar7 = (long *)**(long **)(param_2 + 0x20);
        plVar3 = &DAT_7104862960;
        if (((int)plVar7[1] != 0x16) &&
           (lVar5 = *plVar7, plVar3 = &DAT_7104862960,
           -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar3 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
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
  uVar1 = FUN_71038f4d40(param_2,plVar3,"item_id_");
  pbVar2 = (byte *)(ulong)uVar1;
  pfVar8 = (float *)(*(long *)(param_2 + 0x10) + -0x10);
  if (*(int *)(*(long *)(param_2 + 0x10) + -8) == 0x13) {
LAB_71020d6d4c:
    uVar4 = (undefined4)*(long *)pfVar8;
  }
  else {
    do {
      fVar9 = pfVar8[2];
      if (fVar9 == 2.66247e-44) goto LAB_71020d6d4c;
      if (fVar9 == 4.2039e-45) {
        fVar9 = (float)(int)*pfVar8;
        if ((-9.223372e+18 <= fVar9) && (fVar9 < 9.223372e+18)) {
          uVar4 = (undefined4)(long)fVar9;
          goto LAB_71020d6db4;
        }
        break;
      }
      if (((uint)fVar9 & 0xf) != 4) break;
      pbVar2 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_40);
      lVar5 = *(long *)pfVar8;
      if (*(char *)(lVar5 + 8) == '\x04') {
        uVar6 = (ulong)*(byte *)(lVar5 + 0xb);
      }
      else {
        uVar6 = *(ulong *)(lVar5 + 0x10);
      }
      pfVar8 = local_40;
    } while (pbVar2 == (byte *)(uVar6 + 1));
    uVar4 = 0;
  }
LAB_71020d6db4:
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return pbVar2;
}

