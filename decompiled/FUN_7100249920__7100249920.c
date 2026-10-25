// addr:      7100249920
// offset:    0x249920
// name:      FUN_7100249920
// mangled:   
// signature: undefined8 __cdecl FUN_7100249920(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)


undefined8
FUN_7100249920(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002499b0:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_71002499e4;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71002499b0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002499b0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_71002499e4:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined8 *)(param_1 + 0xe0) = param_3;
  *(undefined8 *)(param_1 + 0xe8) = param_4;
  *(undefined8 *)(param_1 + 0xf0) = param_5;
  *(undefined8 *)(param_1 + 0xf8) = param_6;
  *(undefined4 *)(param_1 + 0x104) = param_7;
  local_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_7100249cd0;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_80);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return 1;
}

