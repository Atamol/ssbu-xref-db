// addr:      7100283220
// offset:    0x283220
// name:      FUN_7100283220
// mangled:   
// signature: undefined FUN_7100283220(void)


void FUN_7100283220(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined4 uStack_24;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0x14));
  if (lVar3 == 0) {
    uStack_24 = 0x80010004;
  }
  else {
    pcVar4 = FUN_710170d030;
    if ((int)param_1[0x4a] < 0) {
      pcVar4 = (code *)0x0;
    }
    if (pcVar4 == (code *)0x0) {
      FUN_71002827c0(param_1,(int *)(param_1 + 0x4a));
      return;
    }
    if (*(int *)((long)param_1 + 0x10c) != 2) {
      lStack_48 = param_1[0x2a];
      lStack_40 = param_1[0x2b];
      lStack_38 = param_1[0x2c];
      goto LAB_7100283318;
    }
    uStack_24 = 0x10001;
  }
  FUN_71001b4200((undefined4 *)&lStack_48,&uStack_24);
LAB_7100283318:
  FUN_71002827c0(param_1,(int *)&lStack_48);
  return;
}

