// addr:      7100208ab0
// offset:    0x208ab0
// name:      FUN_7100208ab0
// mangled:   
// signature: undefined __cdecl FUN_7100208ab0(long param_1, long param_2)


void FUN_7100208ab0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100208b20:
    if ((*plVar9 == 0) || (lVar4 = *(long *)(*plVar9 + 0x10), lVar4 == 0)) goto LAB_7100208b50;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100208b20;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100208b20;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100208b50:
    lVar4 = 0;
  }
  plVar9 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  lVar10 = *(long *)(*(long *)(param_1 + 0x4e8) + 0x1d0);
  lVar4 = *(long *)(param_2 + 0x1d0);
  uVar11 = (ulong)*(uint *)(*(long *)(param_1 + 8) + 8);
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar3 != 0) {
      lVar5 = *(long *)(&DAT_71052af4e8 + uVar11 * 0x2e8) + (ulong)*puVar3 * 0x168;
      cVar6 = *(char *)(param_1 + 0x4e4);
      goto joined_r0x007100208be0;
    }
  }
  lVar5 = uVar11 * 0x2e8 + 0x71052af4f0;
  cVar6 = *(char *)(param_1 + 0x4e4);
joined_r0x007100208be0:
  uVar11 = lVar4 - lVar10;
  if (((cVar6 != '\0') ||
      (cVar6 = '\0',
      (long)uVar11 <= (long)(ulong)(*(int *)(lVar5 + 0x160) + (*(uint *)(param_1 + 0x4d0) >> 3))))
     || (uVar1 = *(int *)(param_1 + 0x508) + 1, *(uint *)(param_1 + 0x508) = uVar1,
        *(uint *)(lVar5 + 0x164) < uVar1)) {
    if (uVar11 < 0xea61) {
      iVar7 = (int)uVar11;
      if (*(char *)(param_1 + 0x4dc) == '\0') {
        iVar2 = iVar7 - (*(uint *)(param_1 + 0x4d0) >> 3);
        *(uint *)(param_1 + 0x4d0) = iVar2 + *(uint *)(param_1 + 0x4d0);
        iVar8 = -iVar2;
        if (-1 < iVar2) {
          iVar8 = iVar2;
        }
        iVar8 = (*(uint *)(param_1 + 0x4d4) - (*(uint *)(param_1 + 0x4d4) >> 2)) + iVar8;
      }
      else {
        *(undefined1 *)(param_1 + 0x4dc) = 0;
        *(int *)(param_1 + 0x4d0) = iVar7 << 3;
        iVar8 = iVar7 << 1;
      }
      *(int *)(param_1 + 0x4d4) = iVar8;
      *(int *)(param_1 + 0x4d8) = iVar7;
    }
    *(undefined4 *)(param_1 + 0x508) = 0;
    if ((cVar6 != '\0') &&
       ((*(uint *)(lVar5 + 0x154) <= *(uint *)(param_1 + 0x4f0) ||
        (*(uint *)(param_1 + 0x4d4) >> 2 < *(uint *)(lVar5 + 0x158))))) {
      *(undefined1 *)(param_1 + 0x4e4) = 0;
      *(undefined4 *)(param_1 + 0x4f0) = 0;
      *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(lVar5 + 0x14c);
      if (*(long *)(param_1 + 0x4e8) != 0) {
        FUN_71002015a0(param_1);
        FUN_71002089b0(param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007100208cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return;
}

