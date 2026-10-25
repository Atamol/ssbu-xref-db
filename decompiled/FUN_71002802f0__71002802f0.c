// addr:      71002802f0
// offset:    0x2802f0
// name:      FUN_71002802f0
// mangled:   
// signature: undefined __cdecl FUN_71002802f0(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, long param_5, undefined4 param_6, byte param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined4 param_12, undefined8 param_13, undefined8 param_14, void * param_15, byte param_16)


void FUN_71002802f0(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   long param_5,undefined4 param_6,byte param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                   undefined8 param_13,undefined8 param_14,void *param_15,byte param_16)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710028038c:
    if ((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71002803c0;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710028038c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710028038c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71002803c0:
  plVar6 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  *(undefined4 *)(param_2 + 0xa0) = param_3;
  *(undefined8 *)(param_2 + 0xa8) = param_4;
  puVar3 = FUN_71001af850(8);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710023c460(puVar3);
  }
  *(undefined8 **)(param_2 + 0xb0) = puVar3;
  *(undefined8 *)(param_2 + 0xe8) = param_13;
  *(undefined1 *)(param_2 + 0x1c0) = *(undefined1 *)(param_5 + 8);
  *(undefined8 *)(param_2 + 0x1c8) = *(undefined8 *)(param_5 + 0x10);
  *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(param_5 + 0x18);
  *(undefined8 *)(param_2 + 0x1d8) = *(undefined8 *)(param_5 + 0x20);
  if (param_2 + 0x1b8 != param_5) {
    FUN_710170fde0((long *)(param_2 + 0x1e0),*(long *)(param_5 + 0x28),*(long *)(param_5 + 0x30));
  }
  *(byte *)(param_2 + 0xb8) = param_7 & 1;
  *(undefined8 *)(param_2 + 0xc0) = param_8;
  *(undefined8 *)(param_2 + 200) = param_9;
  *(undefined8 *)(param_2 + 0xd0) = param_10;
  *(undefined4 *)(param_2 + 0xe0) = param_12;
  *(undefined8 *)(param_2 + 0xf0) = param_14;
  *(undefined4 *)(param_2 + 0xd8) = param_6;
  *(undefined4 *)(param_2 + 0xdc) = param_11;
  if (param_15 != (void *)0x0) {
    if ((param_16 & 1) == 0) {
      *(void **)(param_2 + 0x280) = param_15;
    }
    else {
      puVar3 = FUN_71001b1820((ulong)*(uint *)(param_5 + 0x18));
      *(undefined8 **)(param_2 + 0x278) = puVar3;
      memcpy(puVar3,param_15,(ulong)*(uint *)(param_5 + 0x18));
    }
  }
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    plVar5 = &DAT_71052af138;
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
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
  FUN_710022e7e0(param_2 + 0xf8,*(long *)(lVar4 + 0xb8));
  local_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_71002805d0;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

