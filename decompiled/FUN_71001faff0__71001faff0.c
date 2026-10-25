// addr:      71001faff0
// offset:    0x1faff0
// name:      FUN_71001faff0
// mangled:   
// signature: undefined4 __cdecl FUN_71001faff0(long * param_1)


undefined4 FUN_71001faff0(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long *plVar7;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fb058:
    if ((*plVar7 != 0) && (lVar4 = *(long *)(*plVar7 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001fb08c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001fb058;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001fb058;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001fb08c:
  plVar7 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  do {
    puVar5 = (undefined4 *)param_1[0x59];
    if (puVar5 == (undefined4 *)param_1[0x5a]) {
      uVar6 = 1;
      goto LAB_71001fb0d4;
    }
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1,*puVar5,*(undefined2 *)(puVar5 + 1));
  } while ((uVar3 & 1) != 0);
  uVar6 = 0;
LAB_71001fb0d4:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

