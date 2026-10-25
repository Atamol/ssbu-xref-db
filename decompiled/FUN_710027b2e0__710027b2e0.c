// addr:      710027b2e0
// offset:    0x27b2e0
// name:      FUN_710027b2e0
// mangled:   
// signature: undefined FUN_710027b2e0(void)


void FUN_710027b2e0(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   long param_5,undefined4 param_6,byte param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,void *param_16,
                   byte param_17)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710027b38c:
    if ((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_710027b3c0;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710027b38c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710027b38c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_710027b3c0:
  plVar6 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  *(undefined4 *)(param_2 + 0xa0) = param_3;
  *(undefined8 *)(param_2 + 0xa8) = param_4;
  puVar3 = FUN_71001af850(8);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710023c460(puVar3);
  }
  *(undefined8 **)(param_2 + 0xb0) = puVar3;
  *(undefined8 *)(param_2 + 0xe8) = param_14;
  FUN_710028b8a0(param_2 + 0x1b8,param_5);
  *(byte *)(param_2 + 0xb8) = param_7 & 1;
  *(undefined8 *)(param_2 + 0xc0) = param_8;
  *(undefined4 *)(param_2 + 0xe0) = param_12;
  *(undefined8 *)(param_2 + 200) = param_9;
  *(undefined8 *)(param_2 + 0xd0) = param_10;
  *(undefined4 *)(param_2 + 0xd8) = param_6;
  *(undefined4 *)(param_2 + 0xdc) = param_11;
  *(undefined8 *)(param_2 + 0xf0) = param_15;
  *(undefined8 *)(param_2 + 0x2e8) = param_13;
  if (param_16 != (void *)0x0) {
    if ((param_17 & 1) == 0) {
      *(void **)(param_2 + 0x380) = param_16;
    }
    else {
      puVar3 = FUN_71001b1820((ulong)*(uint *)(param_5 + 0xc));
      *(undefined8 **)(param_2 + 0x378) = puVar3;
      memcpy(puVar3,param_16,(ulong)*(uint *)(param_5 + 0xc));
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
  ppuStack_80 = &PTR_FUN_7104f56e28;
  pcStack_78 = FUN_710027b590;
  uStack_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_2,(long)&ppuStack_80);
  ppuStack_80 = (undefined **)CONCAT71(ppuStack_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&ppuStack_80);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

