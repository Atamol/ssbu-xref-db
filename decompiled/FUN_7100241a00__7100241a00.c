// addr:      7100241a00
// offset:    0x241a00
// name:      FUN_7100241a00
// mangled:   
// signature: undefined FUN_7100241a00(void)


ulong FUN_7100241a00(long param_1,undefined1 *param_2,long param_3)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  int aiStack_58 [6];
  undefined4 uStack_34;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar1;
    if (uVar4 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
        uVar3 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar3;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  lVar2 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar2 == 0) {
    uStack_34 = 0x80010004;
    FUN_71001b4200(aiStack_58,&uStack_34);
    FUN_7100241610(param_1,aiStack_58);
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x184) - 1U < 299) {
      if (*(int *)(param_1 + 0xd8) != 2) {
                    /* WARNING: Could not recover jumptable at 0x007100241ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x28))
                          (*(long **)(param_1 + 0xe0),param_2,param_3);
        return uVar3;
      }
    }
    else {
      if ((undefined1 *)0x2800 <
          *(undefined1 **)(param_1 + 400) + (param_3 - *(long *)(param_1 + 0x188))) {
        uVar4 = 1;
        *(undefined1 *)(param_1 + 0x1a0) = 1;
        FUN_71001d0a10((long *)(param_1 + 0xe8));
        goto LAB_7100241b44;
      }
      FUN_7100223100((long *)(param_1 + 0x188),*(undefined1 **)(param_1 + 400),param_2,
                     param_2 + param_3);
    }
    uVar4 = 1;
  }
LAB_7100241b44:
  return (ulong)uVar4;
}

