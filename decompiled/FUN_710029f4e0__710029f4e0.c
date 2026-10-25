// addr:      710029f4e0
// offset:    0x29f4e0
// name:      FUN_710029f4e0
// mangled:   
// signature: undefined FUN_710029f4e0(void)


void FUN_710029f4e0(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  int iStack_24;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    iStack_24 = -0x7ffefffc;
  }
  else if (*(int *)(param_1 + 0xbc) == 2) {
    iStack_24 = 0x10001;
  }
  else {
    ppuStack_50 = *(undefined ***)(param_1 + 0x100);
    pcStack_48 = *(code **)(param_1 + 0x108);
    uStack_40 = *(undefined8 *)(param_1 + 0x110);
    iStack_24 = -0x7f8dfffc;
    bVar2 = FUN_71001b4260((int *)&ppuStack_50,&iStack_24);
    if (!bVar2) {
      ppuStack_50 = *(undefined ***)(param_1 + 0x100);
      pcStack_48 = *(code **)(param_1 + 0x108);
      uStack_40 = *(undefined8 *)(param_1 + 0x110);
      goto LAB_710029f594;
    }
    FUN_710029f670(*(long *)(*(long *)(param_1 + 0x148) + 0x10));
    if (*(int *)(param_1 + 0x138) == 0) {
      *(undefined4 *)(param_1 + 0x138) = 1;
      ppuStack_50 = &PTR_FUN_7104f56e28;
      pcStack_48 = FUN_710029ee40;
      uStack_40 = 0;
      puStack_38 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_50);
      return;
    }
    iStack_24 = -0x7f8dfffc;
  }
  FUN_71001b4200((undefined4 *)&ppuStack_50,&iStack_24);
LAB_710029f594:
  FUN_710029f280(param_1,(int *)&ppuStack_50);
  return;
}

