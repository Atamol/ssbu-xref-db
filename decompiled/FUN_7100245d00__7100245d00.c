// addr:      7100245d00
// offset:    0x245d00
// name:      FUN_7100245d00
// mangled:   
// signature: undefined8 __cdecl FUN_7100245d00(void)


undefined8 FUN_7100245d00(void)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar4 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar3 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar3;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  return *(undefined8 *)(*(long *)(*plVar4 + 0x10) + 0x10);
}

