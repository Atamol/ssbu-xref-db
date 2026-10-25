// addr:      710023b2d0
// offset:    0x23b2d0
// name:      FUN_710023b2d0
// mangled:   
// signature: undefined FUN_710023b2d0(void)


void FUN_710023b2d0(undefined8 param_1,ushort param_2,long param_3,long *param_4)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  
  plVar3 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  plVar3 = (long *)FUN_710023b3b0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x10),param_2,0);
  if (plVar3 != (long *)0x0) {
    FUN_710022aa70(plVar3,param_3,param_4);
    return;
  }
  return;
}

