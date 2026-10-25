// addr:      7100242c00
// offset:    0x242c00
// name:      FUN_7100242c00
// mangled:   
// signature: undefined8 __cdecl FUN_7100242c00(undefined8 param_1, undefined8 * param_2)


undefined8 FUN_7100242c00(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong local_28;
  
  plVar3 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar4 = 0;
        goto joined_r0x007100242cf0;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  if (*plVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*plVar3 + 0x10);
  }
joined_r0x007100242cf0:
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(long *)(lVar4 + 0x60) != 0) {
    lVar5 = *(long *)(lVar4 + 0x68);
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_28);
    }
    else {
      FUN_71001b68a0(&local_28,0);
    }
    DAT_71052aeba8 = local_28;
    FUN_71001b0dc0(&local_28,(long)(local_28 - *(long *)(lVar4 + 0x60)) / 1000 + lVar5);
    FUN_71001b0580(param_2,&local_28);
    return 1;
  }
  return 0;
}

