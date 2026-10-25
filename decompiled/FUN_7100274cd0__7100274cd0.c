// addr:      7100274cd0
// offset:    0x274cd0
// name:      FUN_7100274cd0
// mangled:   
// signature: undefined __cdecl FUN_7100274cd0(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, long param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, undefined8 param_13, undefined1 * param_14, byte param_15)


void FUN_7100274cd0(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                   undefined8 param_13,undefined1 *param_14,byte param_15)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined **local_80;
  code *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100274d84:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_7100274dc8;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100274d84;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100274d84;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_7100274dc8:
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  *(undefined4 *)(param_2 + 0xa8) = param_3;
  *(undefined8 *)(param_2 + 0xb0) = param_4;
  puVar4 = FUN_71001af850(8);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_710023c460(puVar4);
  }
  *(undefined4 *)(param_2 + 0xf0) = param_5;
  *(undefined4 *)(param_2 + 0xf4) = param_6;
  *(undefined8 **)(param_2 + 0xb8) = puVar4;
  *(undefined8 *)(param_2 + 0xc0) = param_8;
  FUN_71001b2f70(param_2 + 200,param_7);
  *(undefined8 *)(param_2 + 0x1b8) = param_10;
  *(undefined8 *)(param_2 + 0x1c0) = param_9;
  *(byte *)(param_2 + 0x29d) = param_15 & 1;
  *(undefined8 *)(param_2 + 0x1c8) = param_12;
  *(undefined4 *)(param_2 + 0x1d0) = param_11;
  *(undefined8 *)(param_2 + 0x1d8) = param_13;
  *(undefined1 **)(param_2 + 0x2a0) = param_14;
  *param_14 = 0;
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_2 + 0xa8));
  FUN_710022e7e0(param_2 + 0xf8,*(long *)(lVar5 + 0xb8));
  if ((((*(char *)(param_2 + 0x29d) != '\0') ||
       (bVar2 = FUN_71001b4e00(*(char **)(param_2 + 0xe0),""), bVar2)) ||
      (bVar2 = FUN_71001b4e00(*(char **)(param_2 + 0xe0),"invalidurl"), bVar2)) ||
     (*(int *)(param_2 + 0x1d0) == 0)) {
    local_78 = FUN_7100274fb0;
  }
  else {
    local_78 = FUN_7100275210;
  }
  local_80 = &PTR_FUN_7104f56e28;
  local_68 = &DAT_71044114cc;
  local_70 = 0;
  FUN_71001d3d60(param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return;
}

