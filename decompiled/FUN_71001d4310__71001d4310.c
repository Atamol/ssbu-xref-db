// addr:      71001d4310
// offset:    0x1d4310
// name:      FUN_71001d4310
// mangled:   
// signature: undefined __cdecl FUN_71001d4310(long * param_1)


void FUN_71001d4310(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_24;
  
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
  uVar1 = *(uint *)(param_1 + 0x14);
  plVar4 = (long *)(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18) + 0x50);
  plVar6 = (long *)*plVar4;
  plVar5 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= uVar1) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < uVar1];
    } while (plVar6 != (long *)0x0);
    if (((plVar5 != plVar4) && (*(uint *)(plVar5 + 4) <= uVar1)) && (plVar5[5] != 0)) {
      lVar3 = param_1[0x16];
      local_48 = *(undefined8 *)(lVar3 + 0x58);
      local_40 = *(undefined8 *)(lVar3 + 0x60);
      uStack_38 = *(undefined8 *)(lVar3 + 0x68);
      goto LAB_71001d43fc;
    }
  }
  local_24 = 0x80010004;
  FUN_71001b4200((undefined4 *)&local_48,&local_24);
LAB_71001d43fc:
  FUN_71001d4010(param_1,(int *)&local_48);
  return;
}

