// addr:      71001e9b80
// offset:    0x1e9b80
// name:      FUN_71001e9b80
// mangled:   
// signature: undefined4 __cdecl FUN_71001e9b80(void)


undefined4 FUN_71001e9b80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined **local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e9bf0:
    if ((*plVar6 != 0) && (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0xe8);
      goto LAB_71001e9c24;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 == 0) goto LAB_71001e9bf0;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
      goto LAB_71001e9bf0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_71001e9c24:
  local_a8 = local_b8;
  local_b8[0] = 0;
  uStack_a0 = 0x10;
  local_c0 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_c0,*(char **)(lVar5 + 0x168),-1);
  local_98 = *(undefined2 *)(lVar5 + 0x178);
  local_78 = local_88;
  uStack_70 = 0x10;
  local_88[0] = 0;
  local_90 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_90,*(char **)(lVar5 + 0x198),-1);
  uVar2 = *(undefined8 *)(lVar5 + 0x1a8);
  uStack_60 = *(undefined8 *)(lVar5 + 0x1b0);
  local_58 = *(undefined1 *)(lVar5 + 0x1b8);
  local_90 = &PTR_FUN_710509cc08;
  local_68 = uVar2;
  FUN_71001b4910((long)&local_90);
  local_c0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_c0);
  uVar1 = DAT_7104f575e8;
  if ((int)((ulong)uVar2 >> 0x20) == 2) {
    uVar1 = 1;
  }
  return uVar1;
}

