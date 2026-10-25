// addr:      710020a8a0
// offset:    0x20a8a0
// name:      FUN_710020a8a0
// mangled:   
// signature: undefined __cdecl FUN_710020a8a0(uint * param_1, long param_2)


void FUN_710020a8a0(uint *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  byte local_28 [4];
  undefined4 local_24;
  
  local_24 = 0x10001;
  FUN_71001b4200(param_1,&local_24);
  local_28[0] = 1;
  bVar2 = FUN_71001b4280(param_1,local_28);
  if ((!bVar2) || (*(long *)(param_2 + 0x18) != 0)) {
    return;
  }
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        uVar5 = 0;
        goto LAB_710020a984;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  uVar5 = 0;
  if ((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x10), uVar5 = 0, lVar4 != 0)) {
    uVar5 = *(undefined8 *)(lVar4 + 0xe8);
  }
LAB_710020a984:
  *(undefined8 *)(param_2 + 0x18) = uVar5;
  return;
}

