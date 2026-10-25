// addr:      710020a250
// offset:    0x20a250
// name:      FUN_710020a250
// mangled:   
// signature: undefined __cdecl FUN_710020a250(long * param_1)


void FUN_710020a250(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uStack_38;
  
  *param_1 = (long)&PTR_FUN_7104f57da0;
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020a2cc:
    if (*plVar9 == 0) {
      FUN_71001d5ee0(0);
      cVar2 = (char)param_1[4];
    }
    else {
      FUN_71001d5ee0(*(long *)(*plVar9 + 0x10));
      cVar2 = (char)param_1[4];
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_710020a2cc;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020a2cc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    FUN_71001d5ee0(0);
    cVar2 = (char)param_1[4];
  }
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020a340:
    if ((*plVar9 != 0) && (lVar5 = *(long *)(*plVar9 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710020a3b4;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_710020a340;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020a340;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710020a3b4:
  plVar8 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar9 = (long *)param_1[0x13];
  while (plVar9 != param_1 + 0x14) {
    if ((long *)plVar9[0x17] != (long *)0x0) {
      (**(code **)(*(long *)plVar9[0x17] + 8))();
    }
    plVar6 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      plVar6 = plVar9 + 2;
      bVar3 = *(long **)*plVar6 != plVar9;
      plVar9 = (long *)*plVar6;
      if (bVar3) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          plVar9 = (long *)*plVar6;
        } while (*plVar9 != lVar5);
      }
    }
    else {
      do {
        plVar9 = plVar6;
        plVar6 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_71001b12a0(&uStack_38);
  FUN_710020a5a0((long)param_1,&uStack_38,1);
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 8))();
  }
  (**(code **)(*plVar8 + 0x20))(plVar8);
  FUN_71001b17e0(param_1 + 0x2e);
  FUN_710021a3e0(param_1 + 0x2a,(undefined8 *)param_1[0x2b]);
  lVar5 = param_1[0x27];
  if (lVar5 != 0) {
    param_1[0x28] = lVar5;
    FUN_71001b1870(lVar5);
  }
  FUN_710021a420(param_1 + 0x24,(undefined8 *)param_1[0x25]);
  FUN_710021a460(param_1 + 0x21,(undefined8 *)param_1[0x22]);
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
  }
  if (param_1[0x18] != 0) {
    lVar5 = param_1[0x16];
    plVar9 = (long *)param_1[0x17];
    lVar7 = *plVar9;
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar5 + 8);
    **(long **)(lVar5 + 8) = lVar7;
    param_1[0x18] = 0;
    while (plVar9 != param_1 + 0x16) {
      plVar8 = (long *)plVar9[1];
      FUN_71001b1870((long)plVar9);
      plVar9 = plVar8;
    }
  }
  FUN_710021a4a0(param_1 + 0x13,(undefined8 *)param_1[0x14]);
  lVar5 = param_1[0x10];
  if (lVar5 != 0) {
    param_1[0x11] = lVar5;
    FUN_71001b1870(lVar5);
  }
  FUN_710021aba0(param_1 + 0xc,(undefined8 *)param_1[0xd]);
  FUN_710021abe0(param_1 + 9,(undefined8 *)param_1[10]);
  *param_1 = (long)&PTR_FUN_7104f57160;
  FUN_71001e04b0();
  FUN_71002193d0(param_1 + 5,(undefined8 *)param_1[6]);
  return;
}

