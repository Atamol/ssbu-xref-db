// addr:      7100275210
// offset:    0x275210
// name:      FUN_7100275210
// mangled:   
// signature: undefined FUN_7100275210(void)


void FUN_7100275210(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71002753dc;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    uStack_4c = 0x80010004;
  }
  else {
    plVar6 = (long *)(param_1 + 0xf8);
    FUN_71001d1590(plVar6);
    FUN_71001b74f0(&uStack_48,*(uint *)(param_1 + 0xf4));
    *(ulong *)(param_1 + 0x180) = CONCAT44(uStack_48._4_4_,(int)uStack_48);
    FUN_710023c6d0(&uStack_48,*(undefined8 *)(param_1 + 0xb8),plVar6,param_1 + 200,param_1 + 0xa0,
                   0x4000);
    pcVar5 = FUN_710170d030;
    if ((int)uStack_48 < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 != (code *)0x0) {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71002753dc:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8),
                     *(undefined4 *)(param_1 + 0x110));
      FUN_71001d6410(param_1,2);
      puVar4 = FUN_71001af850(0x20);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[2] = 0;
        puVar4[3] = &DAT_71044114cc;
        *puVar4 = &PTR_FUN_7104f56e28;
        puVar4[1] = FUN_7100275a50;
      }
      FUN_71001d4200(param_1,(long)plVar6,puVar4);
      return;
    }
    uStack_4c = 0x8001000d;
  }
  FUN_71001b4200((undefined4 *)&uStack_48,&uStack_4c);
  FUN_7100275400(param_1,(int *)&uStack_48);
  return;
}

