// addr:      71001e2b10
// offset:    0x1e2b10
// name:      FUN_71001e2b10
// mangled:   
// signature: undefined __cdecl FUN_71001e2b10(long param_1)


void FUN_71001e2b10(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_50;
  code *pcStack_48;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  plVar4 = &DAT_71052af128;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e2b7c:
    if ((*plVar4 != 0) && (*(long *)(*plVar4 + 0x10) != 0)) {
      plVar4 = &DAT_71052af128;
      if (DAT_71052af1d8 == '\0') {
LAB_71001e2bd0:
        if (*plVar4 == 0) goto LAB_71001e2c24;
        lVar3 = *(long *)(*plVar4 + 0x10);
      }
      else {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 == 0) goto LAB_71001e2bd0;
        if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
          goto LAB_71001e2bd0;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e2c24:
        lVar3 = 0;
      }
      plVar4 = (long *)(lVar3 + 0x88);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*DAT_71052af448 + 0x28))(DAT_71052af448,lVar3 + 0x80,param_1 + 0x260);
      (**(code **)(*plVar4 + 0x20))(plVar4);
      if ((*(long *)(param_1 + 0x270) == 0) || (*(long *)(param_1 + 0x108) == 0)) {
        *(undefined4 *)(param_1 + 0xf0) = 0;
      }
      pcStack_48 = FUN_71001e3740;
      goto LAB_71001e2c94;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e2b7c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      goto LAB_71001e2b7c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  pcStack_48 = FUN_71001e2a90;
LAB_71001e2c94:
  local_50 = &PTR_FUN_7104f56e28;
  local_40 = 0;
  puStack_38 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_50);
  return;
}

