// addr:      71001cfb90
// offset:    0x1cfb90
// name:      FUN_71001cfb90
// mangled:   
// signature: undefined __cdecl FUN_71001cfb90(ulong param_1, ulong param_2)


void FUN_71001cfb90(ulong param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_2 <= param_1) {
    return;
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  plVar6 = &DAT_71052af190;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        uVar5 = 0;
        goto LAB_71001cfcac;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78);
    }
  }
  if (*plVar6 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = DAT_71052af190;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar3;
      lVar4 = DAT_71052af190;
      if (uVar1 != 0) {
        if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          lVar4 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78);
        }
        else {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          lVar4 = 0;
        }
      }
    }
    uVar5 = FUN_71001b2100(lVar4,param_2);
  }
LAB_71001cfcac:
  if (param_2 <= uVar5) {
    param_1 = uVar5;
  }
  do {
    bVar2 = param_1 < param_2;
    param_1 = param_1 << 1;
  } while (bVar2);
  return;
}

