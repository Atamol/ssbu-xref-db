// addr:      710390c8b0
// offset:    0x390c8b0
// name:      FUN_710390c8b0
// mangled:   
// signature: undefined __cdecl FUN_710390c8b0(long * param_1, int param_2, int param_3, int * param_4)


void FUN_710390c8b0(long *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  long lVar10;
  
  iVar5 = param_2 - param_3;
  if (*param_4 - 0xdU < 2) {
    uVar7 = iVar5 + 1U & ((int)(iVar5 + 1U) >> 0x1f ^ 0xffffffffU);
    FUN_7103913580(param_1,param_4,uVar7);
    if (1 < (int)uVar7) {
      bVar4 = *(byte *)((long)param_1 + 0x3c);
      iVar5 = (uVar7 - 1) + (uint)bVar4;
      if ((int)(uint)*(byte *)(*param_1 + 0xc) < iVar5) {
        if (0xfe < iVar5) {
LAB_710390ca20:
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(param_1[2],"function or expression needs too many registers");
        }
        *(char *)(*param_1 + 0xc) = (char)iVar5;
        bVar4 = *(byte *)((long)param_1 + 0x3c);
      }
      *(byte *)((long)param_1 + 0x3c) = bVar4 + (char)(uVar7 - 1);
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_7103913770(param_1,param_4);
    }
    if (0 < iVar5) {
      bVar4 = *(byte *)((long)param_1 + 0x3c);
      iVar1 = iVar5 + (uint)bVar4;
      bVar9 = bVar4;
      if ((int)(uint)*(byte *)(*param_1 + 0xc) < iVar1) {
        if (0xfe < iVar1) goto LAB_710390ca20;
        *(char *)(*param_1 + 0xc) = (char)iVar1;
        bVar9 = *(byte *)((long)param_1 + 0x3c);
      }
      *(byte *)((long)param_1 + 0x3c) = bVar9 + (char)iVar5;
      uVar7 = (uint)bVar4;
      if (*(int *)((long)param_1 + 0x24) < (int)param_1[4]) {
        lVar10 = (long)(int)param_1[4] + -1;
        uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + lVar10 * 4);
        if ((uVar3 & 0x3f) == 4) {
          uVar6 = uVar3 >> 6 & 0xff;
          iVar2 = uVar6 + (uVar3 >> 0x17);
          uVar8 = (uint)bVar4;
          if (((uVar6 <= uVar8) && (uVar7 <= iVar2 + 1U)) ||
             ((uVar7 <= uVar6 && ((int)uVar6 <= iVar1)))) {
            if (uVar8 <= uVar6) {
              uVar6 = uVar8;
            }
            iVar5 = iVar1 + 0x1ff;
            if (iVar1 <= iVar2) {
              iVar5 = iVar2;
            }
            *(uint *)(*(long *)(*param_1 + 0x38) + lVar10 * 4) =
                 uVar3 & 0x7fc000 | uVar3 & 0x3f | uVar6 << 6 | (iVar5 - uVar6) * 0x800000;
            return;
          }
        }
      }
      FUN_7103913040(param_1,iVar5 * 0x800000 - 0x800000U | uVar7 << 6 | 4);
      return;
    }
  }
  return;
}

