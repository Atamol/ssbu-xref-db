// addr:      71001e5a20
// offset:    0x1e5a20
// name:      FUN_71001e5a20
// mangled:   
// signature: undefined4 __cdecl FUN_71001e5a20(long param_1, long param_2, long param_3)


undefined4 FUN_71001e5a20(long param_1,long param_2,long param_3)

{
  long ***ppplVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  long ****pppplVar6;
  long ***ppplVar7;
  long lVar8;
  long ***ppplVar9;
  undefined4 uVar10;
  long ****pppplVar11;
  long *plVar12;
  long ***local_78;
  long ***local_70;
  long local_68;
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e5aa0:
    if ((*plVar12 != 0) && (lVar8 = *(long *)(*plVar12 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_71001e5ad4;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_71001e5aa0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001e5aa0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_71001e5ad4:
  plVar12 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  local_68 = 0;
  lVar8 = *(long *)(param_1 + 0x80);
  local_78 = (long ***)&local_78;
  local_70 = (long ***)&local_78;
  if (param_1 + 0x78 != lVar8) {
    do {
      uVar4 = FUN_71001f2ba0(lVar8 + 0x18,"RVCID",0);
      uVar5 = FUN_71001f2ba0(param_2,"RVCID",0);
      if (((int)uVar4 == (int)uVar5) && (*(int *)(lVar8 + 0x90) != -1)) {
        pppplVar6 = (long ****)FUN_71001b1820(0xb0);
        pppplVar6[2] = (long ***)&PTR_FUN_7104f57a78;
        *pppplVar6 = (long ***)0x0;
        pppplVar6[3] = (long ***)&PTR_FUN_7104f57900;
        pppplVar6[7] = (long ***)0x0;
        pppplVar6[6] = (long ***)(pppplVar6 + 7);
        pppplVar6[10] = (long ***)0x0;
        pppplVar6[8] = (long ***)0x0;
        pppplVar6[9] = (long ***)(pppplVar6 + 10);
        pppplVar6[0xd] = (long ***)0x0;
        pppplVar6[0xb] = (long ***)0x0;
        pppplVar6[0xc] = (long ***)(pppplVar6 + 0xd);
        pppplVar6[0xe] = (long ***)0x0;
        pppplVar6[0xf] = (long ***)0x0;
        *(undefined2 *)(pppplVar6 + 0x10) = 1;
        *(undefined1 *)((long)pppplVar6 + 0x82) = 0;
        ppplVar7 = (long ***)FUN_71001af850(0x90);
        if (ppplVar7 != (long ***)0x0) {
          FUN_71001beb40(ppplVar7);
        }
        pppplVar6[4] = ppplVar7;
        FUN_71001f1f40((long)(pppplVar6 + 3),lVar8 + 0x18);
        pppplVar6[0x11] = *(long ****)(lVar8 + 0x88);
        ppplVar9 = *(long ****)(lVar8 + 0xa0);
        ppplVar7 = *(long ****)(lVar8 + 0x90);
        ppplVar1 = *(long ****)(lVar8 + 0x98);
        *(undefined4 *)(pppplVar6 + 0x15) = *(undefined4 *)(lVar8 + 0xa8);
        pppplVar6[0x13] = ppplVar1;
        pppplVar6[0x14] = ppplVar9;
        pppplVar6[0x12] = ppplVar7;
        pppplVar6[1] = (long ***)&local_78;
        *pppplVar6 = local_78;
        local_78[1] = (long **)pppplVar6;
        local_68 = local_68 + 1;
        local_78 = (long ***)pppplVar6;
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (param_1 + 0x78 != lVar8);
    if (&local_78 != (long ****)local_70) {
      pppplVar6 = (long ****)local_70;
      do {
        uVar4 = FUN_71001f2ba0((long)(pppplVar6 + 3),"type",0);
        if (((uint)uVar4 >> 1 & 1) == 0) {
          FUN_71001f1f40(param_3,(long)(pppplVar6 + 3));
          if (local_68 == 0) goto LAB_71001e5d20;
          goto LAB_71001e5cd4;
        }
        pppplVar6 = (long ****)pppplVar6[1];
      } while (&local_78 != pppplVar6);
    }
  }
  if (local_68 == 0) {
    uVar10 = 0;
  }
  else {
    FUN_71001f1f40(param_3,(long)(local_70 + 3));
    if (local_68 != 0) {
LAB_71001e5cd4:
      ppplVar7 = (long ***)*local_70;
      ppplVar7[1] = local_78[1];
      *local_78[1] = (long *)ppplVar7;
      local_68 = 0;
      pppplVar6 = (long ****)local_70;
      while (pppplVar6 != &local_78) {
        pppplVar11 = (long ****)pppplVar6[1];
        (*(code *)*pppplVar6[2])();
        FUN_71001b1870((long)pppplVar6);
        pppplVar6 = pppplVar11;
      }
    }
LAB_71001e5d20:
    uVar10 = 1;
  }
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return uVar10;
}

