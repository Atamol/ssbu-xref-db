// addr:      710020ec80
// offset:    0x20ec80
// name:      FUN_710020ec80
// mangled:   
// signature: undefined __cdecl FUN_710020ec80(long * param_1, undefined4 param_2)


void FUN_710020ec80(long *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020ecf0:
    if ((*plVar8 != 0) && (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710020ed24;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_710020ecf0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020ecf0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710020ed24:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar8 = (long *)param_1[0x13];
  while (plVar8 != param_1 + 0x14) {
    plVar7 = (long *)plVar8[0x17];
    iVar3 = (**(code **)(*plVar7 + 0x90))(plVar7);
    if (iVar3 != -1) {
      (**(code **)(*plVar7 + 0x80))(plVar7,param_2);
    }
    plVar7 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar7 = plVar8 + 2;
      bVar2 = *(long **)*plVar7 != plVar8;
      plVar8 = (long *)*plVar7;
      if (bVar2) {
        do {
          lVar5 = *plVar7;
          plVar7 = (long *)(lVar5 + 0x10);
          plVar8 = (long *)*plVar7;
        } while (*plVar8 != lVar5);
      }
    }
    else {
      do {
        plVar8 = plVar7;
        plVar7 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00710020ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

