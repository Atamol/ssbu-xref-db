// addr:      71002221d0
// offset:    0x2221d0
// name:      FUN_71002221d0
// mangled:   
// signature: undefined __cdecl FUN_71002221d0(long param_1)


void FUN_71002221d0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  code *pcVar5;
  long *plVar6;
  undefined **local_68;
  code *pcStack_60;
  undefined8 local_58;
  undefined1 *puStack_50;
  int local_48 [6];
  
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
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    local_48[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&local_68,local_48);
    pppuVar4 = &local_68;
  }
  else {
    FUN_7100222310((undefined8 *)local_48,param_1);
    pcVar5 = FUN_710170d030;
    if (local_48[0] < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 != (code *)0x0) {
      local_68 = &PTR_FUN_7104f56e28;
      pcStack_60 = FUN_7100222960;
      local_58 = 0;
      puStack_50 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&local_68);
      return;
    }
    pppuVar4 = (undefined ***)local_48;
  }
  FUN_71002227f0(param_1,(int *)pppuVar4);
  return;
}

