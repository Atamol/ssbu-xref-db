// addr:      71001fb670
// offset:    0x1fb670
// name:      FUN_71001fb670
// mangled:   
// signature: undefined __cdecl FUN_71001fb670(long param_1, long * param_2)


void FUN_71001fb670(long param_1,long *param_2)

{
  long ***ppplVar1;
  uint uVar2;
  ushort uVar3;
  long ****pppplVar4;
  long ***ppplVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long ***local_78;
  long ***local_70;
  long local_68;
  
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fb6ec:
    if ((*plVar12 == 0) || (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 == 0)) goto LAB_71001fb71c;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_71001fb6ec;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001fb6ec;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001fb71c:
    lVar9 = 0;
  }
  plVar12 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  if (param_2[2] != 0) {
    lVar9 = *param_2;
    plVar7 = (long *)param_2[1];
    lVar10 = *plVar7;
    *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar9 + 8);
    **(long **)(lVar9 + 8) = lVar10;
    param_2[2] = 0;
    while (plVar7 != param_2) {
      plVar11 = (long *)plVar7[1];
      (**(code **)plVar7[2])();
      FUN_71001b1870((long)plVar7);
      plVar7 = plVar11;
    }
  }
  plVar7 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001fb97c;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
    }
  }
  if (((*plVar7 != 0) && (*(long *)(*plVar7 + 0x10) != 0 && DAT_71052af448 != (long *)0x0)) &&
     (lVar9 = *(long *)(param_1 + 0x2c8), lVar9 != *(long *)(param_1 + 0x2d0))) {
    do {
      local_68 = 0;
      local_78 = (long ***)&local_78;
      local_70 = (long ***)&local_78;
      (**(code **)(*DAT_71052af448 + 0x10))(DAT_71052af448,&local_78);
      pppplVar4 = (long ****)local_70;
      while (local_70 = (long ***)pppplVar4, local_68 != 0) {
        uVar3 = *(ushort *)(lVar9 + 4);
        if (*(char *)(pppplVar4 + 0xf) == '\0') {
          FUN_71001f2180((long)(pppplVar4 + 2));
        }
        FUN_71001bee30((long)pppplVar4[3],uVar3);
        *(undefined1 *)((long)pppplVar4 + 0x79) = 0;
        pppplVar4 = (long ****)(local_70 + 2);
        plVar7 = FUN_71001b1820(0x80);
        *plVar7 = 0;
        plVar7[2] = (long)&PTR_FUN_7104f57900;
        plVar7[6] = 0;
        plVar7[5] = (long)(plVar7 + 6);
        plVar7[9] = 0;
        plVar7[7] = 0;
        plVar7[8] = (long)(plVar7 + 9);
        plVar7[0xc] = 0;
        plVar7[10] = 0;
        plVar7[0xb] = (long)(plVar7 + 0xc);
        *(undefined2 *)(plVar7 + 0xf) = 1;
        *(undefined1 *)((long)plVar7 + 0x7a) = 0;
        plVar7[0xd] = 0;
        plVar7[0xe] = 0;
        puVar8 = FUN_71001af850(0x90);
        if (puVar8 != (undefined8 *)0x0) {
          FUN_71001beb40(puVar8);
        }
        plVar7[3] = (long)puVar8;
        FUN_71001f1f40((long)(plVar7 + 2),(long)pppplVar4);
        ppplVar5 = local_70;
        plVar7[1] = (long)param_2;
        lVar10 = *param_2;
        *plVar7 = lVar10;
        *(long **)(lVar10 + 8) = plVar7;
        *param_2 = (long)plVar7;
        param_2[2] = param_2[2] + 1;
        ppplVar1 = (long ***)*local_70;
        ppplVar1[1] = local_70[1];
        *local_70[1] = (long *)ppplVar1;
        local_68 = local_68 + -1;
        (*(code *)*local_70[2])();
        FUN_71001b1870((long)ppplVar5);
        pppplVar4 = (long ****)local_70;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != *(long *)(param_1 + 0x2d0));
    local_68 = 0;
  }
LAB_71001fb97c:
  (**(code **)(*plVar12 + 0x20))();
  return;
}

