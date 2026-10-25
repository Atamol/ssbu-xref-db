// addr:      7100241760
// offset:    0x241760
// name:      FUN_7100241760
// mangled:   
// signature: undefined FUN_7100241760(void)


undefined8
FUN_7100241760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int aiStack_68 [6];
  undefined4 uStack_44;
  
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
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x007100241830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
                      (*(long **)(param_1 + 0xe0),param_2,param_3,param_4,param_5);
    return uVar4;
  }
  uStack_44 = 0x80010004;
  FUN_71001b4200(aiStack_68,&uStack_44);
  FUN_7100241610(param_1,aiStack_68);
  return 0;
}

