// addr:      71001e37f0
// offset:    0x1e37f0
// name:      FUN_71001e37f0
// mangled:   
// signature: undefined __cdecl FUN_71001e37f0(uint * param_1)


void FUN_71001e37f0(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  long *plVar6;
  undefined **local_50;
  code *pcStack_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  plVar6 = &DAT_71052af128;
  puVar4 = param_1;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e385c:
    if ((*plVar6 != 0) && (*(long *)(*plVar6 + 0x10) != 0)) {
      if (*(uint **)(param_1 + 0xc6) == param_1 + 0x98) {
        pcStack_48 = FUN_71001e3740;
      }
      else {
        plVar6 = &DAT_71052af128;
        if (DAT_71052af1d8 != '\0') {
          puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
          uVar1 = *puVar4;
          if (uVar1 != 0) {
            if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
              FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                             0xe0000003,0);
              return;
            }
            plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
          }
        }
        if ((((*(long *)(*(long *)(*plVar6 + 0x10) + 0x198) == 0) ||
             (bVar2 = FUN_71001e3a10(puVar4,*(long *)(param_1 + 0xc6) + 0x10), bVar2)) ||
            (((char)param_1[0x9e] != '\0' &&
             (iVar3 = FUN_71001bef20(*(long *)(param_1 + 0x38) + 0x58), iVar3 != 0)))) ||
           (((DAT_7104f57420 == '\0' ||
             (uVar5 = FUN_71001f2ba0(*(long *)(param_1 + 0xc6) + 0x10,"RVCID",0), (int)uVar5 == 0))
            && ((uVar5 = FUN_71001f2ba0(*(long *)(param_1 + 0xc6) + 0x10,"type",0), (uVar5 & 1) == 0
                || (uVar5 = FUN_71001f2ba0(*(long *)(param_1 + 0xc6) + 0x10,"type",0),
                   ((uint)uVar5 >> 1 & 1) == 0)))))) {
          pcStack_48 = FUN_71001e3b20;
        }
        else {
          pcStack_48 = FUN_71001e3bc0;
        }
      }
      goto LAB_71001e3998;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_71001e385c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_71001e385c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  pcStack_48 = FUN_71001e2a90;
LAB_71001e3998:
  local_50 = &PTR_FUN_7104f56e28;
  local_40 = 0;
  puStack_38 = &DAT_71044114cc;
  FUN_71001d3d60((long)param_1,(long)&local_50);
  return;
}

