// addr:      71001cf7a0
// offset:    0x1cf7a0
// name:      FUN_71001cf7a0
// mangled:   
// signature: undefined __cdecl FUN_71001cf7a0(long param_1, ulong param_2)


/* WARNING: Removing unreachable block (ram,0x0071001cf8a4) */

void FUN_71001cf7a0(long param_1,ulong param_2)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af190;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
        goto LAB_71001cf8e0;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78);
    }
  }
  if (*plVar5 != 0) {
    if (DAT_71052af1d8 == '\0') {
LAB_71001cf868:
      uVar3 = FUN_71001b20e0(DAT_71052af190);
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 == 0) goto LAB_71001cf868;
      if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        uVar3 = FUN_71001b20e0(*(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78));
      }
      else {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        uVar3 = FUN_71001b20e0(0);
      }
    }
    if (param_2 <= uVar3) {
      if ((*(byte *)(param_1 + 0x30) >> 2 & 1) != 0) {
        lVar4 = DAT_71052af190;
        if (DAT_71052af1d8 != '\0') {
          puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar2;
          lVar4 = DAT_71052af190;
          if (uVar1 != 0) {
            if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
              lVar4 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x78);
            }
            else {
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              lVar4 = 0;
            }
          }
        }
        FUN_71001b2280(lVar4,param_2);
        return;
      }
      goto LAB_71001cf8e0;
    }
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb;
LAB_71001cf8e0:
  FUN_71001b1820(param_2);
  return;
}

