// addr:      710029c0f0
// offset:    0x29c0f0
// name:      FUN_710029c0f0
// mangled:   
// signature: undefined8 __cdecl FUN_710029c0f0(long param_1, undefined4 param_2, long param_3, long param_4, undefined8 param_5, undefined4 param_6)


undefined8
FUN_710029c0f0(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
              undefined4 param_6)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029c178:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710029c1ac;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710029c178;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710029c178;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710029c1ac:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_71001b2f70(param_1 + 0x158,param_3);
  FUN_71001b2f70(param_1 + 400,param_4 + 8);
  *(undefined8 *)(param_1 + 0x1b8) = param_5;
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  local_70 = &PTR_FUN_7104f56e28;
  pcStack_68 = FUN_71002a2f90;
  local_60 = 0;
  puStack_58 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_70);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return 1;
}

