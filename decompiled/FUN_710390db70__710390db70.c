// addr:      710390db70
// offset:    0x390db70
// name:      FUN_710390db70
// mangled:   
// signature: undefined __cdecl FUN_710390db70(uint * param_1, long * param_2, int param_3)


void FUN_710390db70(uint *param_1,long *param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  uint *puVar10;
  undefined8 local_80;
  uint local_78 [2];
  undefined8 local_70;
  
  plVar7 = param_2 + 1;
  if (2 < (int)*plVar7 - 8U) {
                    /* WARNING: Subroutine does not return */
    FUN_710390eb80((long)param_1,"syntax error");
  }
  if (param_1[4] == 0x3d) {
    puVar10 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar10 == 0x121) {
      uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar4;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar10;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390b770(param_1,&local_80,0);
    puVar1 = param_1 + 0xc;
    if (param_1[4] == 0x2c) {
      iVar8 = 1;
      do {
        param_1[2] = param_1[1];
        if (param_1[8] == 0x121) {
          uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
          param_1[4] = (uint)uVar4;
        }
        else {
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar10;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *puVar10 = 0x121;
        }
        FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
        FUN_710390b770(param_1,&local_80,0);
        iVar8 = iVar8 + 1;
      } while (param_1[4] == 0x2c);
    }
    else {
      iVar8 = 1;
    }
    plVar9 = *(long **)puVar1;
    if (iVar8 != param_3) {
      FUN_710390c8b0(plVar9,param_3,iVar8,(int *)&local_80);
      if (param_3 < iVar8) {
        *(char *)(*(long *)puVar1 + 0x3c) =
             *(char *)(*(long *)puVar1 + 0x3c) + ((char)param_3 - (char)iVar8);
      }
      goto LAB_710390dd34;
    }
    if ((int)local_80 == 0xe) {
      *(uint *)(*(long *)(*plVar9 + 0x38) + (long)(int)local_78[0] * 4) =
           *(uint *)(*(long *)(*plVar9 + 0x38) + (long)(int)local_78[0] * 4) & 0x7fffff | 0x1000000;
      local_80 = (long *)CONCAT44(local_80._4_4_,0xc);
      plVar9 = *(long **)puVar1;
      goto LAB_710390dd54;
    }
    if ((int)local_80 != 0xd) goto LAB_710390dd54;
    local_78[0] = *(uint *)(*(long *)(*plVar9 + 0x38) + (long)(int)local_78[0] * 4) >> 6 & 0xff;
  }
  else {
    if (param_1[4] != 0x2c) {
                    /* WARNING: Subroutine does not return */
      FUN_710390a760((long)param_1,0x3d);
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar4 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar4;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    local_80 = param_2;
    FUN_710390d5f0(param_1,(long *)local_78);
    if (local_78[0] != 10) {
      plVar9 = *(long **)(param_1 + 0xc);
      bVar2 = *(byte *)((long)plVar9 + 0x3c);
      bVar3 = false;
      do {
        if ((int)param_2[1] == 10) {
          if ((local_78[0] == *(byte *)((long)param_2 + 0x13)) &&
             ((uint)local_70 == *(byte *)((long)param_2 + 0x12))) {
            bVar3 = true;
            *(undefined1 *)((long)param_2 + 0x13) = 8;
            *(byte *)((long)param_2 + 0x12) = bVar2;
          }
          if ((local_78[0] == 8) && ((uint)local_70 == (int)(short)param_2[2])) {
            bVar3 = true;
            *(ushort *)(param_2 + 2) = (ushort)bVar2;
          }
        }
        param_2 = (long *)*param_2;
      } while (param_2 != (long *)0x0);
      if (bVar3) {
        uVar6 = 0;
        if (local_78[0] != 8) {
          uVar6 = 5;
        }
        FUN_7103913040(plVar9,uVar6 | (uint)bVar2 << 6 | (uint)local_70 << 0x17);
        bVar2 = *(byte *)((long)plVar9 + 0x3c);
        cVar5 = bVar2 + 1;
        if (*(byte *)(*plVar9 + 0xc) <= bVar2) {
          if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_710390eb80(plVar9[2],"function or expression needs too many registers");
          }
          *(char *)(*plVar9 + 0xc) = cVar5;
          cVar5 = *(char *)((long)plVar9 + 0x3c) + '\x01';
        }
        *(char *)((long)plVar9 + 0x3c) = cVar5;
      }
    }
    if (200 < (int)((uint)*(ushort *)(*(long *)(param_1 + 0xe) + 0xc6) + param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_710390b2a0(*(long **)(param_1 + 0xc));
    }
    FUN_710390db70(param_1,&local_80,param_3 + 1);
LAB_710390dd34:
    plVar9 = *(long **)(param_1 + 0xc);
    local_70 = 0xffffffffffffffff;
    local_78[0] = *(byte *)((long)plVar9 + 0x3c) - 1;
  }
  local_80 = (long *)CONCAT44(local_80._4_4_,7);
LAB_710390dd54:
  FUN_7103914300(plVar9,(int *)plVar7,(int *)&local_80);
  return;
}

