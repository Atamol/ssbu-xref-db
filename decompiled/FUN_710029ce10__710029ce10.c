// addr:      710029ce10
// offset:    0x29ce10
// name:      FUN_710029ce10
// mangled:   
// signature: undefined8 __cdecl FUN_710029ce10(long param_1, undefined4 param_2, long param_3, long param_4, undefined8 param_5, undefined4 param_6)


undefined8
FUN_710029ce10(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
              undefined4 param_6)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined **local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029ce98:
    if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710029cecc;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710029ce98;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710029ce98;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710029cecc:
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  FUN_71001b2f70(param_1 + 0x158,param_3);
  uVar4 = *(undefined8 *)(param_4 + 8);
  *(undefined4 *)(param_1 + 0xa4) = param_6;
  *(undefined8 *)(param_1 + 400) = uVar4;
  *(undefined8 *)(param_1 + 0x198) = param_5;
  local_70 = &PTR_FUN_7104f56e28;
  pcStack_68 = FUN_71002a7000;
  local_60 = 0;
  puStack_58 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_70);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return 1;
}

