// addr:      710029ded0
// offset:    0x29ded0
// name:      FUN_710029ded0
// mangled:   
// signature: undefined FUN_710029ded0(void)


void FUN_710029ded0(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined **ppuStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  int iStack_24;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar5 == 0) {
    iStack_24 = -0x7ffefffc;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x198);
    if (lVar5 == 0) {
      pcVar6 = (code *)0x0;
    }
    else {
      pcVar6 = (code *)0x0;
      if (*(long *)(lVar5 + 0x10) != 0) {
        pcVar6 = FUN_71002ada40;
      }
    }
    if (pcVar6 == (code *)0x0) {
      iVar2 = *(int *)(param_1 + 0xbc);
    }
    else {
      **(undefined4 **)(lVar5 + 0x10) = *(undefined4 *)(param_1 + 0x188);
      iVar2 = *(int *)(param_1 + 0xbc);
    }
    if (iVar2 == 2) {
      FUN_71001b2f70(param_1 + 0x1a8,param_1 + 0x158);
      ppuStack_50 = &PTR_FUN_7104f56e28;
      pcStack_48 = FUN_710029e0d0;
      uStack_40 = 0;
      puStack_38 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_50);
      return;
    }
    ppuStack_50 = *(undefined ***)(param_1 + 0x100);
    pcStack_48 = *(code **)(param_1 + 0x108);
    uStack_40 = *(undefined8 *)(param_1 + 0x110);
    iStack_24 = -0x7f97fff0;
    bVar3 = FUN_71001b4260((int *)&ppuStack_50,&iStack_24);
    if (!bVar3) {
      ppuStack_50 = *(undefined ***)(param_1 + 0x100);
      pcStack_48 = *(code **)(param_1 + 0x108);
      uStack_40 = *(undefined8 *)(param_1 + 0x110);
      goto LAB_710029e094;
    }
    iStack_24 = -0x7f8dfff3;
    if (((*(uint *)(param_1 + 0x188) & 0x1ff) != 0x7c) ||
       (0x45 < (*(uint *)(param_1 + 0x188) >> 9 & 0x1fff) - 0x1ae)) {
      iStack_24 = -0x7f8dffed;
    }
  }
  FUN_71001b4200((undefined4 *)&ppuStack_50,&iStack_24);
LAB_710029e094:
  FUN_710029dda0(param_1,(int *)&ppuStack_50);
  return;
}

