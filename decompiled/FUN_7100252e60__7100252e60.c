// addr:      7100252e60
// offset:    0x252e60
// name:      FUN_7100252e60
// mangled:   
// signature: undefined __cdecl FUN_7100252e60(long * param_1, short param_2)


void FUN_7100252e60(long *param_1,short param_2)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  
  FUN_710022a520(param_1,1);
  *param_1 = (long)&PTR_FUN_7104f5d1f0;
  if (param_2 == 0) {
    return;
  }
  FUN_710022b380((long)param_1,param_2);
  plVar4 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  lVar5 = *(long *)(*(long *)(*plVar4 + 0x10) + 0x10);
  lVar2 = param_1[9];
  plVar4 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  FUN_7100242360(lVar5,(short)lVar2,plVar4);
  return;
}

