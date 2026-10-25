// addr:      71001ec220
// offset:    0x1ec220
// name:      FUN_71001ec220
// mangled:   
// signature: undefined __cdecl FUN_71001ec220(long param_1, long param_2, long param_3)


void FUN_71001ec220(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_71001d1590((long *)(param_1 + 0xa0));
  }
  puVar2 = FUN_71001af850(0x1c8);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_71001ed620(puVar2,(long *)(param_1 + 0xa0),param_2,param_3);
  }
  *(undefined8 **)(param_1 + 0x98) = puVar2;
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ec2d0:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001ec304;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001ec2d0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001ec2d0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001ec304:
  FUN_71001ccdf0(lVar4,*(long *)(param_1 + 0x98),0);
  return;
}

