// addr:      71001d0730
// offset:    0x1d0730
// name:      FUN_71001d0730
// mangled:   
// signature: undefined __cdecl FUN_71001d0730(long * param_1)


void FUN_71001d0730(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  *param_1 = (long)&PTR_FUN_7104f56058;
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d07a8:
    if (((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) ||
       (*(long *)(lVar3 + 0x10) == 0)) goto LAB_71001d0834;
    plVar5 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_71001d0804:
      if ((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) goto LAB_71001d0950;
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 == 0) goto LAB_71001d0804;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        goto LAB_71001d0804;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d0950:
      lVar3 = 0;
    }
    plVar5 = (long *)(lVar3 + 0x78);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(int *)((long)param_1 + 0x14) == 1) {
      FUN_71001d0a10(param_1);
    }
    if ((int)param_1[3] != 0) {
      plVar6 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d1390(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 3));
      *(undefined4 *)(param_1 + 3) = 0;
    }
    (**(code **)(*plVar5 + 0x20))(plVar5);
    plVar5 = (long *)param_1[0x10];
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001d07a8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001d07a8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d0834:
    plVar5 = (long *)param_1[0x10];
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    param_1[0x10] = 0;
  }
  plVar5 = (long *)param_1[10];
  if (plVar5 == (long *)0x0) goto LAB_71001d08b4;
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)plVar5[1]) {
    plVar5[1] = (long)plVar6;
joined_r0x0071001d0930:
    if (plVar6 != (long *)0x0) {
      plVar5[1] = (long)plVar6;
      FUN_71001b1870((long)plVar6);
    }
    FUN_71001af8a0((long)plVar5);
  }
  else {
    do {
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 8))();
        plVar5 = (long *)param_1[10];
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != (long *)plVar5[1]);
    plVar5[1] = *plVar5;
    if (plVar5 != (long *)0x0) {
      plVar6 = (long *)*plVar5;
      goto joined_r0x0071001d0930;
    }
  }
  param_1[10] = 0;
LAB_71001d08b4:
  lVar3 = param_1[7];
  param_1[0x11] = 0;
  if (lVar3 != 0) {
    param_1[8] = lVar3;
    FUN_71001b1870(lVar3);
  }
  if (param_1[6] != 0) {
    lVar3 = param_1[4];
    plVar5 = (long *)param_1[5];
    lVar4 = *plVar5;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar3 + 8);
    **(long **)(lVar3 + 8) = lVar4;
    param_1[6] = 0;
    while (plVar5 != param_1 + 4) {
      plVar6 = (long *)plVar5[1];
      FUN_71001b1870((long)plVar5);
      plVar5 = plVar6;
    }
  }
  *param_1 = (long)&PTR_FUN_710523be40;
  return;
}

