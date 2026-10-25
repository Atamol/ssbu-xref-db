// addr:      710390df10
// offset:    0x390df10
// name:      FUN_710390df10
// mangled:   
// signature: undefined __cdecl FUN_710390df10(uint * param_1, undefined4 * param_2, uint param_3)


void FUN_710390df10(uint *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong local_68;
  uint local_60;
  undefined8 local_58;
  
  uVar6 = param_1[4];
  plVar7 = *(long **)(param_1 + 0xc);
  if (uVar6 == 0x125) {
    local_68 = *(ulong *)(param_1 + 6);
    local_60 = *(byte *)(local_68 + 8) | 0x40;
    uVar4 = FUN_71039133b0(plVar7,(float *)&local_68,(float *)&local_68);
    local_58 = 0xffffffffffffffff;
    local_68 = CONCAT44(local_68._4_4_,4);
    local_60 = (uint)uVar4;
    param_1[2] = param_1[1];
    if (param_1[8] != 0x121) {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      goto LAB_710390e188;
    }
  }
  else {
    if (uVar6 == 0x7b) {
      FUN_710390e2b0(param_1,(int *)&local_68);
      goto LAB_710390e190;
    }
    if (uVar6 != 0x28) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80((long)param_1,"function arguments expected");
    }
    puVar9 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar9 == 0x121) {
      uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar4;
      if ((uint)uVar4 == 0x29) goto LAB_710390e0cc;
LAB_710390df88:
      FUN_710390b770(param_1,(long *)&local_68,0);
      if (param_1[4] == 0x2c) {
        do {
          param_1[2] = param_1[1];
          if (param_1[8] == 0x121) {
            uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
            param_1[4] = (uint)uVar4;
          }
          else {
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar9;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *puVar9 = 0x121;
          }
          FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_68);
          FUN_710390b770(param_1,(long *)&local_68,0);
        } while (param_1[4] == 0x2c);
      }
      if ((float)local_68 == 1.96182e-44) {
        *(uint *)(*(long *)(*plVar7 + 0x38) + (long)(int)local_60 * 4) =
             *(uint *)(*(long *)(*plVar7 + 0x38) + (long)(int)local_60 * 4) & 0x7fffff;
        uVar6 = *(uint *)(*(long *)(*plVar7 + 0x38) + (long)(int)local_60 * 4);
        *(uint *)(*(long *)(*plVar7 + 0x38) + (long)(int)local_60 * 4) =
             uVar6 & 0xffffc000 | uVar6 & 0x3f | (uint)*(byte *)((long)plVar7 + 0x3c) << 6;
        bVar2 = *(byte *)((long)plVar7 + 0x3c);
        cVar5 = bVar2 + 1;
        if (*(byte *)(*plVar7 + 0xc) <= bVar2) {
          if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_710390eb80(plVar7[2],"function or expression needs too many registers");
          }
          *(char *)(*plVar7 + 0xc) = cVar5;
          cVar5 = *(char *)((long)plVar7 + 0x3c) + '\x01';
        }
        *(char *)((long)plVar7 + 0x3c) = cVar5;
      }
      else if ((float)local_68 == 1.82169e-44) {
        *(uint *)(*(long *)(*plVar7 + 0x38) + (long)(int)local_60 * 4) =
             *(uint *)(*(long *)(*plVar7 + 0x38) + (long)(int)local_60 * 4) & 0xff803fff;
      }
      if (param_1[4] != 0x29) {
        if (param_1[1] != param_3) {
          uVar8 = *(undefined8 *)(param_1 + 0xe);
          FUN_710390eb20((long)param_1,0x29);
          FUN_710390eb20((long)param_1,0x28);
          uVar8 = FUN_7103908660(uVar8,"%s expected (to close %s at line %d)");
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80((long)param_1,uVar8);
        }
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x29);
      }
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
      if (param_1[4] != 0x29) goto LAB_710390df88;
LAB_710390e0cc:
      local_68 = local_68 & 0xffffffff00000000;
    }
    param_1[2] = param_1[1];
    if (param_1[8] != 0x121) {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
LAB_710390e188:
      param_1[8] = 0x121;
      goto LAB_710390e190;
    }
  }
  uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
  param_1[4] = (uint)uVar4;
LAB_710390e190:
  iVar1 = param_2[2];
  if ((int)(float)local_68 - 0xdU < 2) {
    uVar6 = 0;
  }
  else {
    if ((float)local_68 != 0.0) {
      FUN_7103913770(plVar7,(int *)&local_68);
    }
    uVar6 = ((uint)*(byte *)((long)plVar7 + 0x3c) - iVar1) * 0x800000;
  }
  uVar3 = FUN_7103913040(plVar7,uVar6 | iVar1 << 6 | 0x8024);
  *(undefined8 *)(param_2 + 4) = 0xffffffffffffffff;
  *param_2 = 0xd;
  param_2[2] = uVar3;
  *(uint *)(*(long *)(*plVar7 + 0x48) + (long)(int)plVar7[4] * 4 + -4) = param_3;
  *(char *)((long)plVar7 + 0x3c) = (char)iVar1 + '\x01';
  return;
}

