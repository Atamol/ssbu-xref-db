// addr:      7100249040
// offset:    0x249040
// name:      FUN_7100249040
// mangled:   
// signature: undefined FUN_7100249040(void)


void FUN_7100249040(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iStack_38;
  undefined4 uStack_34;
  
  plVar1 = (long *)(param_1 + 0xa0);
  FUN_71001d1590(plVar1);
  FUN_71001b12a0((ulong *)&iStack_38);
  uVar3 = FUN_71001b74f0((long *)&iStack_38,
                         *(int *)(param_1 + 0x178) + (*(int *)(param_1 + 0x180) - iStack_38));
  *(ulong *)(param_1 + 0x128) = CONCAT44(uStack_34,iStack_38);
  FUN_71002494a0(uVar3,plVar1,*(undefined8 *)(param_1 + 0x230),param_1 + 0x1f0,param_1 + 0x218,
                 param_1 + 0x228,1);
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  FUN_71001d3780(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0x160),
                 *(undefined4 *)(param_1 + 0xb8));
  FUN_71001d6410(param_1,2);
  puVar5 = FUN_71001af850(0x20);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 0;
    puVar5[3] = &DAT_71044114cc;
    *puVar5 = &PTR_FUN_7104f56e28;
    puVar5[1] = FUN_7100249730;
  }
  FUN_71001d4200(param_1,(long)plVar1,puVar5);
  return;
}

