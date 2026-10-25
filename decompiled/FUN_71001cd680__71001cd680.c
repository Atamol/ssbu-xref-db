// addr:      71001cd680
// offset:    0x1cd680
// name:      FUN_71001cd680
// mangled:   
// signature: undefined __cdecl FUN_71001cd680(long param_1, long param_2)


void FUN_71001cd680(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 local_4c;
  undefined8 auStack_48 [3];
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  uVar1 = *(uint *)(param_1 + 100);
  plVar3 = (long *)(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18) + 0x50);
  plVar4 = (long *)*plVar3;
  plVar5 = plVar3;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar5 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (((plVar5 != plVar3) && (*(uint *)(plVar5 + 4) <= uVar1)) &&
       (plVar5 = (long *)plVar5[5], plVar5 != (long *)0x0)) {
      if (*(long *)(param_1 + 0xf0) != param_2) {
        FUN_71017143b0((undefined8 *)(*(long *)(param_1 + 0xf0) + 0x10),
                       *(undefined1 **)(param_2 + 0x10),*(undefined1 **)(param_2 + 0x18));
      }
      local_4c = 0x10001;
      FUN_71001b4200((undefined4 *)auStack_48,&local_4c);
      FUN_71001d0f00(plVar5,2,auStack_48,1);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 5;
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_1,param_1 + 0x30);
  }
  return;
}

