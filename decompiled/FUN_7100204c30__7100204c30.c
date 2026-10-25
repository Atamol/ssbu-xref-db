// addr:      7100204c30
// offset:    0x204c30
// name:      FUN_7100204c30
// mangled:   
// signature: ulong __cdecl FUN_7100204c30(long param_1)


ulong FUN_7100204c30(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar7 = &DAT_71052af128;
  plVar5 = plVar7;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_7100204dc4;
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  iVar2 = *(int *)(*(long *)(*(long *)(*plVar5 + 0x10) + 0xe8) + 0x98);
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) {
      plVar7 = &DAT_71052af128;
    }
    else {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_7100204dc4;
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  uVar6 = (ulong)(iVar2 - 0x40);
  lVar4 = (**(code **)(**(long **)(*(long *)(*plVar7 + 0x10) + 0xe8) + 0x80))();
  if (*(char *)(lVar4 + 0x10) == '\0') {
    plVar7 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_7100204dc4:
          uVar6 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar6;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    lVar4 = (**(code **)(**(long **)(*(long *)(*plVar7 + 0x10) + 0xe8) + 0x78))();
    if (((*(char *)(lVar4 + 8) != '\0') || (*(char *)(param_1 + 0x1eb) == '\0')) ||
       ((*(char *)(param_1 + 0x1eb) == '\x01' && (*(char *)(param_1 + 0x1ec) == '\0')))) {
      uVar6 = uVar6 - 0x24;
    }
  }
  else {
    uVar6 = uVar6 - 0x2c;
  }
  return uVar6;
}

