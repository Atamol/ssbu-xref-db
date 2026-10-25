// addr:      71002781e0
// offset:    0x2781e0
// name:      FUN_71002781e0
// mangled:   
// signature: undefined FUN_71002781e0(void)


void FUN_71002781e0(long param_1)

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
  undefined4 uStack_24;
  
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
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar4 == 0) {
    uStack_24 = 0x80010004;
    FUN_71001b4200((undefined4 *)&ppuStack_50,&uStack_24);
  }
  else {
    if (*(int *)(param_1 + 0x114) == 2) {
      FUN_71001d1590((long *)(param_1 + 0x100));
      if ((*(char *)(param_1 + 0x300) == '\0') ||
         (bVar2 = FUN_71001b4e00(*(char **)(param_1 + 0x248),""), !bVar2)) {
        pcStack_48 = FUN_7100277bd0;
      }
      else {
        pcStack_48 = FUN_7100278360;
      }
      ppuStack_50 = &PTR_FUN_7104f56e28;
      puStack_38 = &DAT_71044114cc;
      uStack_40 = 0;
      FUN_71001d3d60(param_1,(long)&ppuStack_50);
      return;
    }
    ppuStack_50 = *(undefined ***)(param_1 + 0x158);
    pcStack_48 = *(code **)(param_1 + 0x160);
    uStack_40 = *(undefined8 *)(param_1 + 0x168);
  }
  FUN_7100278090(param_1,(int *)&ppuStack_50);
  return;
}

