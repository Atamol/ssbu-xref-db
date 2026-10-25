// addr:      71002430f0
// offset:    0x2430f0
// name:      FUN_71002430f0
// mangled:   
// signature: uint __cdecl FUN_71002430f0(long param_1, long * param_2, long param_3, ulong param_4)


uint FUN_71002430f0(long param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = param_2[0x17];
  if (lVar7 == 0) {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(lVar7 + 0x18);
  iVar3 = FUN_71001e32f0(param_3);
  if ((iVar3 != iVar4) && (iVar4 = FUN_71001e32f0(param_3), iVar4 != 0)) {
    return 0;
  }
  bVar1 = FUN_71001f34c0(param_3,param_4);
  if (!bVar1) {
    return 0;
  }
  sVar2 = FUN_71001e5d60(param_3);
  if (sVar2 == 0) {
    return 0;
  }
  sVar2 = FUN_71001e5d60(param_4);
  if (sVar2 == 0) {
    return 0;
  }
  plVar8 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71002431c4:
    if (*plVar8 != 0) {
      uVar5 = FUN_71001efa00(*(long *)(*plVar8 + 0x10),param_3,param_4);
      goto joined_r0x007100243220;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar6;
    if (uVar5 == 0) goto LAB_71002431c4;
    if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x10);
      goto LAB_71002431c4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  uVar5 = FUN_71001efa00(0,param_3,param_4);
joined_r0x007100243220:
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_7100230040(param_1 + 0x20,param_2,param_3,param_4);
  return uVar5;
}

