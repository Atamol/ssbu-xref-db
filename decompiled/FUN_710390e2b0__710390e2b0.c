// addr:      710390e2b0
// offset:    0x390e2b0
// name:      FUN_710390e2b0
// mangled:   
// signature: undefined __cdecl FUN_710390e2b0(uint * param_1, int * param_2)


/* WARNING: Type propagation algorithm not settling */

void FUN_710390e2b0(uint *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  char cVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  uint *puVar12;
  long local_90;
  int local_88;
  undefined8 local_80;
  int *local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  
  plVar10 = *(long **)(param_1 + 0xc);
  uVar6 = param_1[1];
  iVar3 = FUN_7103913040(plVar10,0xb);
  local_68 = 0;
  local_70 = 0;
  local_6c = 0;
  param_2[4] = -1;
  param_2[5] = -1;
  *param_2 = 0xc;
  param_2[2] = iVar3;
  local_80 = 0xffffffffffffffff;
  local_90._0_4_ = 0;
  local_88 = 0;
  local_78 = param_2;
  FUN_7103913770(*(long **)(param_1 + 0xc),param_2);
  if (param_1[4] != 0x7b) {
                    /* WARNING: Subroutine does not return */
    FUN_710390a760((long)param_1,0x7b);
  }
  puVar12 = param_1 + 8;
  param_1[2] = param_1[1];
  if (*puVar12 == 0x121) {
    uVar5 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
    uVar4 = (uint)uVar5;
    param_1[4] = uVar4;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar12;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    uVar4 = param_1[4];
    param_1[8] = 0x121;
  }
  if (uVar4 != 0x7d) {
LAB_710390e458:
    if (param_1[4] == 0x5b) {
LAB_710390e484:
      FUN_710390e8e0(param_1,(long)&local_90);
    }
    else {
      if (param_1[4] == 0x124) {
        uVar5 = FUN_710390efb0(param_1,(float *)(param_1 + 10));
        param_1[8] = (uint)uVar5;
        if ((uint)uVar5 == 0x3d) goto LAB_710390e484;
      }
      FUN_710390b770(param_1,&local_90,0);
      local_6c = local_6c + 1;
      local_68 = local_68 + 1;
    }
    uVar4 = param_1[4];
    if (uVar4 != 0x7d) {
      if (uVar4 == 0x3b) {
        param_1[2] = param_1[1];
        if (param_1[8] != 0x121) goto LAB_710390e530;
        uVar5 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
        param_1[4] = (uint)uVar5;
LAB_710390e53c:
        uVar4 = param_1[4];
      }
      else {
        if (uVar4 != 0x2c) {
          if (param_1[1] == uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_710390a760((long)param_1,0x7d);
          }
          uVar11 = *(undefined8 *)(param_1 + 0xe);
          FUN_710390eb20((long)param_1,0x7d);
          FUN_710390eb20((long)param_1,0x7b);
          uVar11 = FUN_7103908660(uVar11,"%s expected (to close %s at line %d)");
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80((long)param_1,uVar11);
        }
        param_1[2] = param_1[1];
        if (param_1[8] != 0x121) {
LAB_710390e530:
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *puVar12 = 0x121;
          goto LAB_710390e53c;
        }
        uVar5 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
        uVar4 = (uint)uVar5;
        param_1[4] = uVar4;
      }
      if (uVar4 == 0x7d) goto LAB_710390e548;
      if ((int)local_90 != 0) {
        FUN_7103913770(plVar10,(int *)&local_90);
        local_90._0_4_ = 0;
        if (local_68 == 0x32) {
          iVar1 = local_78[2];
          iVar9 = (int)(local_6c - 1) / 0x32 + 1;
          uVar4 = iVar1 << 6 | 0x1900002b;
          if ((int)local_6c < 0x63cf) {
            uVar4 = uVar4 | iVar9 * 0x4000;
          }
          else {
            FUN_7103913040(plVar10,uVar4);
            uVar4 = iVar9 * 0x40 | 0x2e;
          }
          FUN_7103913040(plVar10,uVar4);
          *(char *)((long)plVar10 + 0x3c) = (char)iVar1 + '\x01';
          local_68 = 0;
        }
      }
      goto LAB_710390e458;
    }
  }
LAB_710390e548:
  param_1[2] = param_1[1];
  if (param_1[8] == 0x121) {
    uVar5 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
    param_1[4] = (uint)uVar5;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar12;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    param_1[8] = 0x121;
  }
  if (local_68 == 0) goto LAB_710390e734;
  if ((int)local_90 == 0) {
LAB_710390e6bc:
    iVar9 = local_78[2];
    uVar6 = 0;
    if (local_68 != -1) {
      uVar6 = local_68 << 0x17;
    }
    uVar6 = uVar6 | iVar9 << 6 | 0x2b;
    iVar1 = (int)(local_6c - 1) / 0x32 + 1;
    if ((int)local_6c < 0x63cf) {
      uVar6 = uVar6 | iVar1 * 0x4000;
    }
    else {
      FUN_7103913040(plVar10,uVar6);
      uVar6 = iVar1 * 0x40 | 0x2e;
    }
    FUN_7103913040(plVar10,uVar6);
    *(char *)((long)plVar10 + 0x3c) = (char)iVar9 + '\x01';
  }
  else {
    if ((int)local_90 == 0xe) {
      *(uint *)(*(long *)(*plVar10 + 0x38) + (long)local_88 * 4) =
           *(uint *)(*(long *)(*plVar10 + 0x38) + (long)local_88 * 4) & 0x7fffff;
      uVar6 = *(uint *)(*(long *)(*plVar10 + 0x38) + (long)local_88 * 4);
      *(uint *)(*(long *)(*plVar10 + 0x38) + (long)local_88 * 4) =
           uVar6 & 0xffffc000 | uVar6 & 0x3f | (uint)*(byte *)((long)plVar10 + 0x3c) << 6;
      bVar2 = *(byte *)((long)plVar10 + 0x3c);
      cVar7 = bVar2 + 1;
      if (*(byte *)(*plVar10 + 0xc) <= bVar2) {
        if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(plVar10[2],"function or expression needs too many registers");
        }
        *(char *)(*plVar10 + 0xc) = cVar7;
        cVar7 = *(char *)((long)plVar10 + 0x3c) + '\x01';
      }
      *(char *)((long)plVar10 + 0x3c) = cVar7;
    }
    else {
      if ((int)local_90 != 0xd) {
        FUN_7103913770(plVar10,(int *)&local_90);
        goto LAB_710390e6bc;
      }
      *(uint *)(*(long *)(*plVar10 + 0x38) + (long)local_88 * 4) =
           *(uint *)(*(long *)(*plVar10 + 0x38) + (long)local_88 * 4) & 0xff803fff;
    }
    iVar1 = local_78[2];
    uVar6 = iVar1 << 6 | 0x2b;
    iVar9 = (int)(local_6c - 1) / 0x32 + 1;
    if ((int)local_6c < 0x63cf) {
      uVar6 = uVar6 | iVar9 * 0x4000;
    }
    else {
      FUN_7103913040(plVar10,uVar6);
      uVar6 = iVar9 * 0x40 | 0x2e;
    }
    FUN_7103913040(plVar10,uVar6);
    *(char *)((long)plVar10 + 0x3c) = (char)iVar1 + '\x01';
    local_6c = local_6c - 1;
  }
LAB_710390e734:
  if (7 < local_6c) {
    if (local_6c < 0x80) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      do {
        uVar6 = local_6c + 0xf;
        local_6c = uVar6 >> 4;
        iVar9 = iVar9 + 4;
      } while (0x7ff < uVar6);
    }
    if (0xf < local_6c) {
      do {
        uVar6 = local_6c + 1;
        local_6c = uVar6 >> 1;
        iVar9 = iVar9 + 1;
      } while (0x1f < uVar6);
    }
    local_6c = iVar9 * 8 + 8U | local_6c - 8;
  }
  lVar8 = (long)iVar3 * 4;
  *(uint *)(*(long *)(*plVar10 + 0x38) + lVar8) =
       *(uint *)(*(long *)(*plVar10 + 0x38) + (long)iVar3 * 4) & 0x7fffff | local_6c << 0x17;
  if (7 < local_70) {
    if (local_70 < 0x80) {
      iVar9 = 0;
    }
    else {
      iVar9 = 0;
      do {
        uVar6 = local_70 + 0xf;
        local_70 = uVar6 >> 4;
        iVar9 = iVar9 + 4;
      } while (0x7ff < uVar6);
    }
    if (0xf < local_70) {
      do {
        uVar6 = local_70 + 1;
        local_70 = uVar6 >> 1;
        iVar9 = iVar9 + 1;
      } while (0x1f < uVar6);
    }
    local_70 = iVar9 * 8 + 8U | local_70 - 8;
  }
  *(uint *)(*(long *)(*plVar10 + 0x38) + (long)iVar3 * 4) =
       (local_70 & 0x1ff) << 0xe | *(uint *)(*(long *)(*plVar10 + 0x38) + lVar8) & 0xff803fff;
  return;
}

