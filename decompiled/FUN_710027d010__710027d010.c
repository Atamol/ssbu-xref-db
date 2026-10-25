// addr:      710027d010
// offset:    0x27d010
// name:      FUN_710027d010
// mangled:   
// signature: undefined FUN_710027d010(void)


void FUN_710027d010(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  long *plVar7;
  undefined4 uStack_6c;
  int aiStack_68 [6];
  undefined **ppuStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined2 uStack_38;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_710027d1f4;
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    aiStack_68[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&ppuStack_50,aiStack_68);
    pppuVar6 = &ppuStack_50;
  }
  else {
    uStack_48 = 0;
    ppuStack_50 = &PTR_FUN_7104f600d8;
    uStack_40 = *(undefined8 *)(param_1 + 0x1e8);
    uStack_38 = (undefined2)((uint)(*(int *)(param_1 + 0x5e0) - *(int *)(param_1 + 0x5d8)) >> 3);
    uVar4 = (**(code **)(**(long **)(param_1 + 0xb0) + 0xb0))
                      (*(long **)(param_1 + 0xb0),param_1 + 0xc0,&ppuStack_50,param_1 + 0x1c0,
                       *(undefined8 *)(param_1 + 0x600));
    if ((uVar4 & 1) != 0) {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710027d1f4:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                     *(undefined4 *)(param_1 + 0xd8));
      FUN_71001d6410(param_1,2);
      puVar5 = FUN_71001af850(0x20);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = &DAT_71044114cc;
        *puVar5 = &PTR_FUN_7104f56e28;
        puVar5[1] = FUN_710027d210;
      }
      FUN_71001d4200(param_1,param_1 + 0xc0,puVar5);
      return;
    }
    uStack_6c = 0x8001000d;
    FUN_71001b4200(aiStack_68,&uStack_6c);
    pppuVar6 = (undefined ***)aiStack_68;
  }
  FUN_710027ca30(param_1,(int *)pppuVar6);
  return;
}

