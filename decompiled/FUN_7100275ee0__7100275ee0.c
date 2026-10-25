// addr:      7100275ee0
// offset:    0x275ee0
// name:      FUN_7100275ee0
// mangled:   
// signature: undefined FUN_7100275ee0(void)


undefined8 FUN_7100275ee0(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int aiStack_58 [6];
  undefined4 uStack_34;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar4;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    uStack_34 = 0x80010004;
    FUN_71001b4200(aiStack_58,&uStack_34);
    FUN_7100275400(param_1,aiStack_58);
    uVar4 = 0;
  }
  else if (*(undefined1 **)(param_1 + 0x288) + (param_3 - *(long *)(param_1 + 0x280)) <
           (undefined1 *)0x81) {
    FUN_7100223100((long *)(param_1 + 0x280),*(undefined1 **)(param_1 + 0x288),param_2,
                   param_2 + param_3);
    uVar4 = 1;
  }
  else {
    FUN_71001d0a10((long *)(param_1 + 0xf8));
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x29c) = 1;
  }
  return uVar4;
}

