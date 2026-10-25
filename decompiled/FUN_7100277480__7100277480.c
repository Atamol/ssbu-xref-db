// addr:      7100277480
// offset:    0x277480
// name:      FUN_7100277480
// mangled:   
// signature: undefined FUN_7100277480(void)


undefined8 FUN_7100277480(long param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71002776b0;
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar4 == 0) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 0xf0);
  if (plVar5 == (long *)0x0) {
    if (*(long *)(param_1 + 0x2a0) == 0) {
      return 1;
    }
    if (*(ulong *)(param_1 + 0x2a8) < *(long *)(param_1 + 0x2c8) + param_3) {
      *(undefined1 *)(param_1 + 0x2d0) = 1;
      FUN_71001d0a10((long *)(param_1 + 0x100));
      return 0;
    }
    memcpy((void *)(*(long *)(param_1 + 0x2a0) + *(long *)(param_1 + 0x2c8)),param_2,param_3);
  }
  else {
    if (*(char *)(param_1 + 0x2d3) != '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x1cc);
      *(undefined1 *)(param_1 + 0x2d3) = 0;
      if (*(char *)(param_1 + 0x2b0) != '\0') {
        (**(code **)(*plVar5 + 0x10))
                  (plVar5,uVar2,*(undefined4 *)(param_1 + 0x228),*(undefined8 *)(param_1 + 600),
                   *(undefined2 *)(param_1 + 0x260),*(undefined2 *)(param_1 + 0x262),1);
        plVar5 = &DAT_71052af138;
        if (DAT_71052af1d8 != '\0') {
          puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar3;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
            goto LAB_71002776b0;
            plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8)
                              );
        if (lVar4 == 0) {
          return 0;
        }
        plVar5 = *(long **)(param_1 + 0xf0);
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,uVar2,*(undefined4 *)(param_1 + 0x228));
      plVar5 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar3;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71002776b0:
            uVar7 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                   0xe0000003,0);
            return uVar7;
          }
          plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
      if (lVar4 == 0) {
        return 0;
      }
      plVar5 = *(long **)(param_1 + 0xf0);
    }
    uVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,param_2,param_3);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  *(size_t *)(param_1 + 0x2c8) = *(long *)(param_1 + 0x2c8) + param_3;
  return 1;
}

