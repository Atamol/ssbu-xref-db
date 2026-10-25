// addr:      71001df750
// offset:    0x1df750
// name:      FUN_71001df750
// mangled:   
// signature: undefined __cdecl FUN_71001df750(long param_1, long * param_2)


void FUN_71001df750(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar2 = FUN_71001bef20(param_1 + 0x58);
  if (iVar2 == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x80))(param_2,0xffffffff);
  (**(code **)(*param_2 + 0x70))(param_2);
  plVar5 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(*plVar5 + 0x10) + 0xe8) + 0x78))();
  if ((char)param_2[0xf] == '\0') {
    FUN_71001f2180((long)(param_2 + 2));
  }
  FUN_71001f7bc0(*(long *)(lVar4 + 0x18) + 0x90,param_2[3],param_1 + 0x58,1);
  return;
}

