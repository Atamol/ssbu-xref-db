// addr:      7100274fb0
// offset:    0x274fb0
// name:      FUN_7100274fb0
// mangled:   
// signature: undefined FUN_7100274fb0(void)


void FUN_7100274fb0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  int aiStack_90 [6];
  undefined **ppuStack_78;
  undefined1 uStack_70;
  undefined **ppuStack_68;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71002751f8;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    aiStack_90[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&ppuStack_78,aiStack_90);
    FUN_7100275400(param_1,(int *)&ppuStack_78);
  }
  else {
    plVar6 = (long *)(param_1 + 0xf8);
    FUN_71001d1590(plVar6);
    uStack_70 = 0;
    auStack_60[0] = 0;
    ppuStack_68 = &PTR_FUN_710509cc08;
    puStack_50 = auStack_60;
    uStack_48 = 0x10;
    ppuStack_78 = &PTR_FUN_7104f5fcb8;
    if (*(char *)(param_1 + 0x29c) == '\0') {
      FUN_71001b2f70((long)&ppuStack_68,param_1 + 200);
    }
    uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0xa0))
                      (*(long **)(param_1 + 0xb0),plVar6,&ppuStack_78,param_1 + 0x1e0);
    if ((uVar4 & 1) == 0) {
      **(undefined1 **)(param_1 + 0x2a0) = 1;
      uStack_34 = 0x8001000d;
      FUN_71001b4200(aiStack_90,&uStack_34);
      FUN_7100275400(param_1,aiStack_90);
    }
    else {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71002751f8:
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
      puVar5 = FUN_71001af850(0x20);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = &DAT_71044114cc;
        *puVar5 = &PTR_FUN_7104f56e28;
        puVar5[1] = FUN_7100275590;
      }
      FUN_71001d4200(param_1,(long)plVar6,puVar5);
    }
    ppuStack_78 = &PTR_FUN_7104f5fd18;
    ppuStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_68);
  }
  return;
}

