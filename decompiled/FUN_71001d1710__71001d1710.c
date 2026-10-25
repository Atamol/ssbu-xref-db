// addr:      71001d1710
// offset:    0x1d1710
// name:      FUN_71001d1710
// mangled:   
// signature: undefined4 __cdecl FUN_71001d1710(long * param_1)


undefined4 FUN_71001d1710(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 auStack_48 [3];
  undefined4 local_24;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d177c:
    if ((*plVar4 == 0) || (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 == 0)) goto LAB_71001d17ac;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001d177c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001d177c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d17ac:
    lVar3 = 0;
  }
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if (*(int *)((long)param_1 + 0x14) - 2U < 3) {
    FUN_71001d1590(param_1);
  }
  else if (*(int *)((long)param_1 + 0x14) == 1) {
    uVar5 = 0;
    goto LAB_71001d181c;
  }
  local_24 = 0x80010001;
  FUN_71001b4200((undefined4 *)auStack_48,&local_24);
  uVar5 = 1;
  FUN_71001d0f00(param_1,1,auStack_48,0);
LAB_71001d181c:
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return uVar5;
}

