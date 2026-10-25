// addr:      710027d210
// offset:    0x27d210
// name:      FUN_710027d210
// mangled:   
// signature: undefined FUN_710027d210(void)


void FUN_710027d210(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    lStack_28 = CONCAT44(lStack_28._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_58,(undefined4 *)&lStack_28);
  }
  else {
    if (*(int *)(param_1 + 0xd4) == 2) {
      if (*(long *)(param_1 + 0x1c0) == *(long *)(param_1 + 0x1c8)) {
        *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x180);
        FUN_71001cde10(&ppuStack_58);
        uStack_38 = 0x1f8;
        lStack_28 = param_1 + 0x3d8;
        uVar2 = (*(code *)ppuStack_58[6])(&ppuStack_58,&lStack_28,&uStack_38,1);
        *(undefined4 *)(param_1 + 0x5d0) = uVar2;
        FUN_71001cb860();
        (**(code **)(**(long **)(param_1 + 0x5f0) + 0x18))
                  (*(long **)(param_1 + 0x5f0),param_1 + 0x3d8,0,*(undefined8 *)(param_1 + 1000));
        lStack_28 = CONCAT44(lStack_28._4_4_,0x10001);
        FUN_71001b4200((undefined4 *)&ppuStack_58,(undefined4 *)&lStack_28);
        FUN_710027ca30(param_1,(int *)&ppuStack_58);
      }
      ppuStack_58 = &PTR_FUN_7104f56e28;
      pcStack_50 = FUN_710027d3d0;
      uStack_48 = 0;
      puStack_40 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&ppuStack_58);
      return;
    }
    ppuStack_58 = *(undefined ***)(param_1 + 0x118);
    pcStack_50 = *(code **)(param_1 + 0x120);
    uStack_48 = *(undefined8 *)(param_1 + 0x128);
  }
  FUN_710027ca30(param_1,(int *)&ppuStack_58);
  return;
}

