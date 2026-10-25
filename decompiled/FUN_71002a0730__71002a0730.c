// addr:      71002a0730
// offset:    0x2a0730
// name:      FUN_71002a0730
// mangled:   
// signature: undefined FUN_71002a0730(void)


void FUN_71002a0730(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  undefined4 uStack_24;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    uStack_24 = 0x80010004;
    FUN_71001b4200((undefined4 *)&ppuStack_50,&uStack_24);
  }
  else {
    if (*(int *)(param_1 + 0xbc) == 2) {
      ppuStack_50 = &PTR_FUN_7104f56e28;
      pcStack_48 = FUN_71002a03c0;
      uStack_40 = 0;
      puStack_38 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_50);
      return;
    }
    ppuStack_50 = *(undefined ***)(param_1 + 0x100);
    pcStack_48 = *(code **)(param_1 + 0x108);
    uStack_40 = *(undefined8 *)(param_1 + 0x110);
  }
  FUN_71002a0600(param_1,(int *)&ppuStack_50);
  return;
}

