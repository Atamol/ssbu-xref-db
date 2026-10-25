// addr:      7100209e10
// offset:    0x209e10
// name:      FUN_7100209e10
// mangled:   
// signature: undefined8 __cdecl FUN_7100209e10(long * param_1, long param_2)


undefined8 FUN_7100209e10(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100209e80:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_7100209ebc;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100209e80;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100209e80;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_7100209ebc:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  *(long *)(param_2 + 8) = param_1[0x68];
  memcpy((void *)(param_2 + 0x10),param_1 + 0x69,0x160);
  uVar4 = FUN_71001f2ba0((long)(param_1 + 2),"sid",0);
  *(char *)(param_2 + 0x14) = (char)uVar4;
  *(int *)(param_2 + 0x10) = (int)param_1[0x12];
  *(undefined1 *)(param_2 + 0x15) = *(undefined1 *)((long)param_1 + 0x1e9);
  *(char *)(param_2 + 0x16) = (char)param_1[0x3d];
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0xd8))(param_1);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return 1;
}

