// addr:      71001e64d0
// offset:    0x1e64d0
// name:      FUN_71001e64d0
// mangled:   
// signature: undefined FUN_71001e64d0(void)


void FUN_71001e64d0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined ***pppuVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined4 uStack_34;
  
  plVar5 = (long *)(param_1 + 200);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  pppuVar4 = (undefined ***)(param_1 + 0xa8);
  if (lVar3 == 0) {
    uStack_34 = 0x80010001;
    FUN_71001b4200((undefined4 *)&ppuStack_58,&uStack_34);
    if (*(int *)pppuVar4 == (int)ppuStack_58) {
      ppuStack_58 = &PTR_FUN_7104f56e28;
      pcStack_50 = FUN_71001e6670;
      uStack_48 = 0;
      puStack_40 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_58);
      goto LAB_71001e6634;
    }
    uStack_34 = 0x80010004;
    FUN_71001b4200((undefined4 *)&ppuStack_58,&uStack_34);
    pppuVar4 = &ppuStack_58;
  }
  else {
    uStack_34 = 0x80010001;
    FUN_71001b4200((undefined4 *)&ppuStack_58,&uStack_34);
    if (*(int *)pppuVar4 == (int)ppuStack_58) {
      FUN_71001d6410(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = 10;
      goto LAB_71001e6634;
    }
  }
  FUN_71001e63a0(param_1,(int *)pppuVar4);
LAB_71001e6634:
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

