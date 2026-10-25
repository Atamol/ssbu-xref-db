// addr:      71001e0970
// offset:    0x1e0970
// name:      FUN_71001e0970
// mangled:   
// signature: undefined __cdecl FUN_71001e0970(undefined8 * param_1)


void FUN_71001e0970(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_7104f57270;
  if (*(int *)(param_1 + 5) == 0) goto LAB_71001e0af0;
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e09f4:
    if ((*plVar3 == 0) || (lVar4 = *(long *)(*plVar3 + 0x10), lVar4 == 0)) goto LAB_71001e0a24;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e09f4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e09f4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e0a24:
    lVar4 = 0;
  }
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),*(uint *)(param_1 + 5)
                                 );
  if ((plVar3 != (long *)0x0) && (*(int *)((long)plVar3 + 0x14) == 1)) {
    local_64 = 0x80010004;
    FUN_71001b4200((undefined4 *)&local_60,&local_64);
    local_40 = local_58;
    uStack_38 = uStack_50;
    local_48 = local_60;
    FUN_71001d0f00(plVar3,3,&local_48,1);
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
LAB_71001e0af0:
  if (*(char *)((long)param_1 + 0x34) != '\0') {
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
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          lVar4 = 0;
        }
      }
    }
    FUN_71001b2090(lVar4);
    *(undefined1 *)((long)param_1 + 0x34) = 0;
  }
  FUN_71001d6020(param_1);
  return;
}

