// addr:      710390c280
// offset:    0x390c280
// name:      FUN_710390c280
// mangled:   
// signature: undefined __cdecl FUN_710390c280(long param_1, long param_2)


void FUN_710390c280(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = *(long **)(param_1 + 0x30);
  lVar7 = *plVar5;
  plVar6 = *(long **)(param_1 + 0x58);
  iVar4 = *(int *)(lVar7 + 0x24);
  lVar8 = (long)iVar4;
  if ((short)plVar5[7] < iVar4) {
    lVar1 = *(long *)(lVar7 + 0x50);
  }
  else {
    lVar1 = FUN_71039059a0(*(long *)(param_1 + 0x38),*(long *)(lVar7 + 0x50),(int *)(lVar7 + 0x24),
                           0x10,0x7fff);
    *(long *)(lVar7 + 0x50) = lVar1;
    if (iVar4 < *(int *)(lVar7 + 0x24)) {
      lVar3 = lVar8 << 4;
      do {
        *(undefined8 *)(lVar1 + lVar3) = 0;
        lVar1 = *(long *)(lVar7 + 0x50);
        lVar8 = lVar8 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar8 < *(int *)(lVar7 + 0x24));
    }
  }
  *(long *)(lVar1 + (long)(short)plVar5[7] * 0x10) = param_2;
  if (((*(byte *)(lVar7 + 9) >> 2 & 1) != 0) && ((*(byte *)(param_2 + 9) & 3) != 0)) {
    lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
    if (*(byte *)(lVar8 + 0x55) < 2) {
      FUN_71038fe340(lVar8,param_2);
    }
    else {
      *(byte *)(lVar7 + 9) = *(byte *)(lVar7 + 9) & 0xf8 | *(byte *)(lVar8 + 0x54) & 3;
    }
  }
  lVar8 = plVar5[7];
  *(short *)(plVar5 + 7) = (short)lVar8 + 1;
  iVar2 = (int)plVar6[1];
  iVar4 = iVar2 + 1;
  if (iVar4 - *(int *)((long)plVar5 + 0x34) < 0xc9) {
    if (*(int *)((long)plVar6 + 0xc) < iVar2 + 2) {
      lVar7 = FUN_71039059a0(*(long *)(param_1 + 0x38),*plVar6,(int *)((long)plVar6 + 0xc),2,
                             0x7fffffff);
      iVar2 = (int)plVar6[1];
      iVar4 = iVar2 + 1;
      *plVar6 = lVar7;
    }
    else {
      lVar7 = *plVar6;
    }
    *(int *)(plVar6 + 1) = iVar4;
    *(short *)(lVar7 + (long)iVar2 * 2) = (short)lVar8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_710390b2a0(plVar5);
}

