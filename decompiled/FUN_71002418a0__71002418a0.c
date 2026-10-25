// addr:      71002418a0
// offset:    0x2418a0
// name:      FUN_71002418a0
// mangled:   
// signature: undefined FUN_71002418a0(void)


void FUN_71002418a0(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  int aiStack_58 [6];
  undefined4 uStack_34;
  
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
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    uStack_34 = 0x80010004;
    FUN_71001b4200(aiStack_58,&uStack_34);
    FUN_7100241610(param_1,aiStack_58);
  }
  else {
    *(int *)(param_1 + 0x184) = param_3;
    iVar4 = param_3;
    if (param_3 == 0x133) {
      (**(code **)(*param_2 + 0xa0))(param_2,"Location",param_1 + 0x1a8);
      iVar4 = *(int *)(param_1 + 0x184);
    }
    if (iVar4 - 1U < 299) {
                    /* WARNING: Could not recover jumptable at 0x007100241994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xe0) + 0x20))(*(long **)(param_1 + 0xe0),param_2,param_3);
      return;
    }
  }
  return;
}

