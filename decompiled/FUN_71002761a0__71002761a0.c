// addr:      71002761a0
// offset:    0x2761a0
// name:      FUN_71002761a0
// mangled:   
// signature: undefined __cdecl FUN_71002761a0(undefined4 * param_1, long param_2, undefined4 param_3, undefined8 param_4, long param_5, undefined4 param_6, byte param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 param_11, undefined4 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15, undefined8 param_16, byte param_17, undefined8 param_18, undefined8 param_19, long param_20)


void FUN_71002761a0(undefined4 *param_1,long param_2,undefined4 param_3,undefined8 param_4,
                   long param_5,undefined4 param_6,byte param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                   undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                   byte param_17,undefined8 param_18,undefined8 param_19,long param_20)

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
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100276254:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_7100276288;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100276254;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100276254;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_7100276288:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  *(undefined4 *)(param_2 + 0xa8) = param_3;
  *(undefined8 *)(param_2 + 0xb0) = param_4;
  puVar3 = FUN_71001af850(8);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710023c460(puVar3);
  }
  *(undefined8 **)(param_2 + 0xb8) = puVar3;
  *(undefined8 *)(param_2 + 0xf0) = param_13;
  *(undefined1 *)(param_2 + 0x1c8) = *(undefined1 *)(param_5 + 8);
  *(undefined4 *)(param_2 + 0x1cc) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(param_2 + 0x1d0) = *(undefined4 *)(param_5 + 0x10);
  *(byte *)(param_2 + 0xc0) = param_7 & 1;
  *(undefined8 *)(param_2 + 200) = param_8;
  *(undefined8 *)(param_2 + 0xd0) = param_9;
  *(undefined8 *)(param_2 + 0xd8) = param_10;
  *(undefined4 *)(param_2 + 0xe0) = param_6;
  *(undefined4 *)(param_2 + 0xe4) = param_11;
  *(undefined8 *)(param_2 + 0x2a8) = param_16;
  *(byte *)(param_2 + 0x2b0) = param_17 & 1;
  *(undefined8 *)(param_2 + 0x2b8) = param_18;
  *(undefined4 *)(param_2 + 0xe8) = param_12;
  *(undefined8 *)(param_2 + 0xf8) = param_14;
  *(undefined8 *)(param_2 + 0x2a0) = param_15;
  *(undefined8 *)(param_2 + 0x2c0) = param_19;
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_2 + 0xa8));
  FUN_710022e7e0(param_2 + 0x100,*(long *)(lVar4 + 0xb8));
  if (param_20 == 0) {
    pcStack_78 = FUN_7100276790;
  }
  else {
    *(undefined1 *)(param_2 + 0x1e0) = *(undefined1 *)(param_20 + 8);
    FUN_71001b2f70(param_2 + 0x1e8,param_20 + 0x10);
    if (param_2 + 0x1d8 != param_20) {
      FUN_7100299910((long *)(param_2 + 0x210),*(long *)(param_20 + 0x38),*(long *)(param_20 + 0x40)
                    );
      *(undefined4 *)(param_2 + 0x228) = *(undefined4 *)(param_20 + 0x50);
      FUN_71017143b0((undefined8 *)(param_2 + 0x230),*(undefined1 **)(param_20 + 0x58),
                     *(undefined1 **)(param_20 + 0x60));
    }
    pcStack_78 = FUN_71002764c0;
  }
  local_80 = &PTR_FUN_7104f56e28;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_2,(long)&local_80);
  local_80 = (undefined **)CONCAT71(local_80._1_7_,1);
  FUN_71001b4220(param_1,(char *)&local_80);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

