// addr:      710020a9d0
// offset:    0x20a9d0
// name:      FUN_710020a9d0
// mangled:   
// signature: undefined8 __cdecl FUN_710020a9d0(long * param_1)


undefined8 FUN_710020a9d0(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  uVar1 = FUN_71001f54b0(param_1[3] + 0xf0,(char)(int)param_1[1],(char)param_1[4]);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020aa54:
    if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710020aa88;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710020aa54;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020aa54;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710020aa88:
  plVar6 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar5 = (long *)param_1[0x13];
  while (param_1 + 0x14 != plVar5) {
    plVar4 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar4 = plVar5 + 2;
      plVar7 = (long *)*plVar4;
      if ((long *)*plVar7 != plVar5) {
        do {
          lVar3 = *plVar4;
          plVar4 = (long *)(lVar3 + 0x10);
          plVar7 = (long *)*plVar4;
        } while (*plVar7 != lVar3);
      }
    }
    else {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
    (**(code **)(*(long *)plVar5[0x17] + 0xb0))((long *)plVar5[0x17],4);
    plVar5 = plVar7;
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return 1;
}

