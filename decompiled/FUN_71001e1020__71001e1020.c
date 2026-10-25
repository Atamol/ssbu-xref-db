// addr:      71001e1020
// offset:    0x1e1020
// name:      FUN_71001e1020
// mangled:   
// signature: undefined __cdecl FUN_71001e1020(long param_1, undefined4 param_2)


void FUN_71001e1020(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_50;
  code *pcStack_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e1090:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_71001e10c4;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e1090;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e1090;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_71001e10c4:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  local_50 = &PTR_FUN_7104f56e28;
  pcStack_48 = FUN_71001e6150;
  local_40 = 0;
  puStack_38 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_50);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

