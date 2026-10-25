// addr:      710029c550
// offset:    0x29c550
// name:      FUN_710029c550
// mangled:   
// signature: undefined8 __cdecl FUN_710029c550(long param_1, undefined4 param_2, long param_3, long param_4, undefined8 param_5, undefined4 param_6)


undefined8
FUN_710029c550(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
              undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined **local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029c5d8:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_710029c60c;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 == 0) goto LAB_710029c5d8;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_710029c5d8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_710029c60c:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_71001b2f70(param_1 + 0x158,param_3);
  uVar1 = *(undefined8 *)(param_4 + 8);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x1a0) = param_5;
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  *(undefined8 *)(param_1 + 400) = uVar1;
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  local_70 = &PTR_FUN_7104f56e28;
  pcStack_68 = FUN_71002a4430;
  local_60 = 0;
  puStack_58 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_70);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return 1;
}

