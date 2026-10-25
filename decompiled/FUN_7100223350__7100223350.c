// addr:      7100223350
// offset:    0x223350
// name:      FUN_7100223350
// mangled:   
// signature: undefined FUN_7100223350(void)


ulong FUN_7100223350(long param_1,undefined8 param_2,void *param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uStack_5c;
  int aiStack_58 [6];
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar5 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar5;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    uStack_5c = 0x80010004;
    FUN_71001b4200(aiStack_58,&uStack_5c);
    FUN_71002227f0(param_1,aiStack_58);
    uVar5 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x160);
    uVar5 = uVar4;
    if (param_4 <= uVar4) {
      uVar5 = param_4;
    }
    if (uVar5 != 0) {
      FUN_71001b3db0(param_1 + 0x130,param_3,uVar5);
      FUN_71001b3e40(param_1 + 0x130,uVar5);
      uVar4 = *(ulong *)(param_1 + 0x160);
    }
    *(bool *)param_5 = uVar4 == 0;
  }
  return uVar5;
}

