// addr:      7100242390
// offset:    0x242390
// name:      FUN_7100242390
// mangled:   
// signature: undefined __cdecl FUN_7100242390(long param_1, long * param_2)


void FUN_7100242390(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100242404:
    if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x10), lVar8 == 0)) goto LAB_7100242434;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_7100242404;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_7100242404;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100242434:
    lVar8 = 0;
  }
  plVar12 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  iVar5 = (**(code **)(*param_2 + 0x80))(param_2);
  plVar11 = (long *)(param_1 + 0x20);
  if (iVar5 != 1) {
    plVar11 = (long *)(param_1 + 8);
  }
  uVar3 = *(ushort *)(param_2 + 9);
  plVar7 = plVar11 + 1;
  plVar9 = (long *)*plVar7;
  plVar10 = plVar7;
  plVar13 = plVar9;
  if (plVar9 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar13 + 4) >= uVar3) {
        plVar10 = plVar13;
      }
      plVar1 = plVar13 + (*(ushort *)(plVar13 + 4) < uVar3);
      plVar13 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
    if ((plVar10 == plVar7) || (uVar3 < *(ushort *)(plVar10 + 4))) {
      uVar4 = *(ushort *)(plVar9 + 4);
      plVar10 = plVar11 + 1;
joined_r0x0071002424b8:
      do {
        plVar7 = plVar9;
        if (uVar4 <= uVar3) {
          if (uVar4 < uVar3) {
            plVar10 = plVar7 + 1;
            plVar9 = (long *)*plVar10;
            if (plVar9 != (long *)0x0) {
              uVar4 = *(ushort *)(plVar9 + 4);
              goto joined_r0x0071002424b8;
            }
          }
          plVar13 = (long *)*plVar10;
          goto joined_r0x007100242544;
        }
        plVar9 = (long *)*plVar7;
        plVar10 = plVar7;
        if (plVar9 == (long *)0x0) goto LAB_7100242538;
        uVar4 = *(ushort *)(plVar9 + 4);
      } while( true );
    }
    if (param_2 != (long *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    goto LAB_710024259c;
  }
  plVar13 = (long *)*plVar7;
  goto joined_r0x007100242544;
LAB_7100242538:
  plVar13 = (long *)*plVar7;
joined_r0x007100242544:
  if (plVar13 == (long *)0x0) {
    plVar13 = FUN_71001b1820(0x30);
    *(ushort *)(plVar13 + 4) = uVar3;
    plVar13[5] = 0;
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13[2] = (long)plVar7;
    *plVar10 = (long)plVar13;
    plVar7 = plVar13;
    if (*(long *)*plVar11 != 0) {
      *plVar11 = *(long *)*plVar11;
      plVar7 = (long *)*plVar10;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>((long *)plVar11[1],plVar7);
    plVar11[2] = plVar11[2] + 1;
  }
  plVar13[5] = (long)param_2;
LAB_710024259c:
                    /* WARNING: Could not recover jumptable at 0x0071002425bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return;
}

