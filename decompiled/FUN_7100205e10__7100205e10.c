// addr:      7100205e10
// offset:    0x205e10
// name:      FUN_7100205e10
// mangled:   
// signature: undefined __cdecl FUN_7100205e10(long param_1, undefined8 param_2, long param_3)


void FUN_7100205e10(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if ((*(byte *)(param_3 + 0x61) >> 3 & 1) != 0) {
    plVar3 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_7100205f00:
      if ((*plVar3 == 0) || (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 == 0)) goto LAB_7100205f44;
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 == 0) goto LAB_7100205f00;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        goto LAB_7100205f00;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100205f44:
      lVar4 = 0;
    }
    plVar5 = (long *)(lVar4 + 0x78);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    plVar3 = &DAT_71052af188;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_7100206030;
        }
        plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x70);
      }
    }
    if ((*plVar3 != 0) && (plVar3 = *(long **)(*plVar3 + 0x10), plVar3 != (long *)0x0)) {
      (**(code **)(*plVar3 + 0x28))
                (plVar3,param_1,param_2,*(undefined2 *)(param_3 + 0x60),
                 *(undefined1 *)(param_3 + 0xa4));
    }
    goto LAB_7100206030;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100205e94:
    if ((*plVar3 == 0) || (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 == 0)) goto LAB_7100206000;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100205e94;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100205e94;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100206000:
    lVar4 = 0;
  }
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  (**(code **)(**(long **)(param_1 + 0x80) + 0x10))
            (*(long **)(param_1 + 0x80),param_1,param_2,*(undefined1 *)(param_3 + 0xa4));
LAB_7100206030:
                    /* WARNING: Could not recover jumptable at 0x00710020604c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

