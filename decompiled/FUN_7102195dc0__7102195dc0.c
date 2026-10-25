// addr:      7102195dc0
// offset:    0x2195dc0
// name:      FUN_7102195dc0
// mangled:   
// signature: uint __cdecl FUN_7102195dc0(long param_1, long param_2, int param_3)


uint FUN_7102195dc0(long param_1,long param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  
  FUN_7101ff9450(param_1,param_2,param_3);
  if (param_3 < 1) {
    if (param_3 < -0xf4627) {
      if (param_3 == -0xf4628) {
        plVar4 = (long *)(*(long *)(param_2 + 0x18) + 0x40);
      }
      else {
        plVar6 = (long *)**(long **)(param_2 + 0x20);
        plVar4 = &DAT_7104862960;
        if (((int)plVar6[1] != 0x16) &&
           (lVar5 = *plVar6, -0xf4628 - param_3 <= (int)(uint)*(byte *)(lVar5 + 10))) {
          plVar4 = (long *)(lVar5 + (long)(-0xf4628 - param_3) * 0x10 + 0x10);
        }
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_2 + 0x10) + (long)param_3 * 0x10);
    }
  }
  else {
    plVar4 = (long *)(**(long **)(param_2 + 0x20) + (long)param_3 * 0x10);
    if (*(long **)(param_2 + 0x10) <= plVar4) {
      plVar4 = &DAT_7104862960;
    }
  }
  uVar3 = FUN_71038f4d40(param_2,plVar4,"is_dead_damage_");
  lVar5 = *(long *)(param_2 + 0x10);
  uVar1 = *(uint *)(lVar5 + -8);
  if (uVar1 != 0) {
    if (uVar1 != 0x13) {
      if (uVar1 == 1) {
        bVar2 = *(int *)(lVar5 + -0x10) == 0;
      }
      else {
        if ((uVar1 & 0xf) == 3) {
          fVar7 = *(float *)(lVar5 + -0x10);
          goto joined_r0x007102195ea0;
        }
LAB_7102195eac:
        if (uVar1 != 3) {
          bVar2 = true;
          goto LAB_7102195ec8;
        }
        bVar2 = false;
        if (!NAN(*(float *)(lVar5 + -0x10))) {
          bVar2 = *(float *)(lVar5 + -0x10) == 0.0;
        }
      }
      bVar2 = !bVar2;
      goto LAB_7102195ec8;
    }
    if (*(long *)(lVar5 + -0x10) != 0) {
      fVar7 = (float)*(long *)(lVar5 + -0x10);
joined_r0x007102195ea0:
      if (fVar7 != 0.0) goto LAB_7102195eac;
    }
  }
  bVar2 = false;
LAB_7102195ec8:
  *(bool *)(param_1 + 0x29) = bVar2;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -0x10;
  return uVar3;
}

