// addr:      71001d1850
// offset:    0x1d1850
// name:      FUN_71001d1850
// mangled:   
// signature: bool __cdecl FUN_71001d1850(long * param_1, undefined8 * param_2)


bool FUN_71001d1850(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d18c0:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001d18f4;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001d18c0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001d18c0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001d18f4:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  bVar2 = FUN_71001ccd00(param_1);
  if (bVar2) {
    local_48 = *param_2;
    local_40 = param_2[1];
    uStack_38 = param_2[2];
    FUN_71001d0c90((long)param_1,&local_48);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return bVar2;
}

