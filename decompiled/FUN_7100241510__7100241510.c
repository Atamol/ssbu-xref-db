// addr:      7100241510
// offset:    0x241510
// name:      FUN_7100241510
// mangled:   
// signature: undefined __cdecl FUN_7100241510(long param_1, long param_2)


void FUN_7100241510(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_4c;
  int aiStack_48 [6];
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 != 0) {
    *(undefined2 *)(param_2 + 0x21) = 0;
                    /* WARNING: Could not recover jumptable at 0x0071002415bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))(*(long **)(param_1 + 0xe0),param_2);
    return;
  }
  local_4c = 0x80010004;
  FUN_71001b4200(aiStack_48,&local_4c);
  FUN_7100241610(param_1,aiStack_48);
  return;
}

