// addr:      7100279420
// offset:    0x279420
// name:      FUN_7100279420
// mangled:   
// signature: undefined __cdecl FUN_7100279420(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined8 * param_5, undefined8 param_6, undefined8 param_7)


void FUN_7100279420(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002794b0:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_71002794e4;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71002794b0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002794b0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_71002794e4:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(undefined4 *)(param_2 + 0xa0) = param_3;
  if ((undefined8 *)(param_2 + 0xb0) != param_5) {
    FUN_710170d6f0((undefined8 *)(param_2 + 0xb0),(undefined8 *)*param_5,(undefined8 *)param_5[1]);
  }
  *(undefined8 *)(param_2 + 0xa8) = param_4;
  *(undefined8 *)(param_2 + 0xe0) = param_6;
  *(undefined8 *)(param_2 + 0xf0) = param_7;
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
  FUN_710022e7e0(param_2 + 0x118,*(long *)(lVar3 + 0xb8));
  local_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_7100279250;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

