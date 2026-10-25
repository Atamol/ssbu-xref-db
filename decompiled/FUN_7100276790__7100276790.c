// addr:      7100276790
// offset:    0x276790
// name:      FUN_7100276790
// mangled:   
// signature: undefined FUN_7100276790(void)


void FUN_7100276790(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 uStack_4c;
  int aiStack_48 [6];
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_7100276960;
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    uStack_4c = 0x80010004;
  }
  else {
    plVar7 = (long *)(param_1 + 0x100);
    FUN_71001d1590(plVar7);
    plVar4 = *(long **)(param_1 + 0xb0);
    if (*(char *)(param_1 + 0x2b0) == '\0') {
      uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar7,param_1 + 0x1c0,param_1 + 0x1d8);
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x28))
                        (plVar4,plVar7,param_1 + 0x1c0,param_1 + 0x1d8,param_1 + 0x248);
    }
    if ((uVar5 & 1) != 0) {
      plVar4 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_7100276960:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8),
                     *(undefined4 *)(param_1 + 0x118));
      FUN_71001d6410(param_1,2);
      puVar6 = FUN_71001af850(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[2] = 0;
        puVar6[3] = &DAT_71044114cc;
        *puVar6 = &PTR_FUN_7104f56e28;
        puVar6[1] = FUN_7100276ad0;
      }
      FUN_71001d4200(param_1,(long)plVar7,puVar6);
      return;
    }
    uStack_4c = 0x8001000d;
  }
  FUN_71001b4200(aiStack_48,&uStack_4c);
  FUN_7100276980(param_1,aiStack_48);
  return;
}

