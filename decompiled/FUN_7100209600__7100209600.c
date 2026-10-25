// addr:      7100209600
// offset:    0x209600
// name:      FUN_7100209600
// mangled:   
// signature: undefined __cdecl FUN_7100209600(long * param_1)


void FUN_7100209600(long *param_1)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 auStack_48 [3];
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020966c:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71002096a0;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_710020966c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710020966c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71002096a0:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar4 = param_1[0x9d];
  if (lVar4 != 0) {
    sVar1 = *(short *)(lVar4 + 0x70) + 1;
    *(short *)(param_1 + 0xa0) = sVar1;
    *(short *)(lVar4 + 0x70) = sVar1;
    *(undefined1 *)(lVar4 + 0xcd) = 0;
    FUN_71002039c0(auStack_48,param_1,lVar4);
    if (*(char *)((long)param_1 + 0x4e4) != '\0') {
      *(int *)(param_1 + 0x9e) = (int)param_1[0x9e] + 1;
    }
    FUN_7100203410(param_1[1] + 0x40,(long *)param_1[0x9d]);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

