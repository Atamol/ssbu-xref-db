// addr:      7100278800
// offset:    0x278800
// name:      FUN_7100278800
// mangled:   
// signature: undefined FUN_7100278800(void)


void FUN_7100278800(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_68 [24];
  long lStack_50;
  long alStack_48 [3];
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    lStack_50 = CONCAT44(lStack_50._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)alStack_48,(undefined4 *)&lStack_50);
    FUN_7100278090(param_1,(int *)alStack_48);
  }
  else {
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0xe0);
    (**(code **)(*param_2 + 0xb8))(param_2,*(undefined8 *)(param_1 + 200));
    param_2[2] = *(long *)(param_1 + 0xd0);
    param_2[3] = *(long *)(param_1 + 0xd8);
    lVar3 = *(long *)(param_1 + 600);
    if (lVar3 != *(long *)(param_1 + 0x260)) {
      do {
        lStack_50 = 0;
        alStack_48[0] = 0;
        FUN_71001b2b10(lVar3 + 0x10,alStack_48);
        FUN_71001b2b10(lVar3 + 0x38,&lStack_50);
        (**(code **)(*param_2 + 0x18))(auStack_68,param_2,alStack_48[0],lStack_50);
        FUN_71001b2bf0(alStack_48[0]);
        FUN_71001b2bf0(lStack_50);
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != *(long *)(param_1 + 0x260));
    }
    lVar3 = *(long *)(param_1 + 0x278);
    if (lVar3 != *(long *)(param_1 + 0x280)) {
      (**(code **)(*param_2 + 0xb0))(param_2,lVar3,*(long *)(param_1 + 0x280) - lVar3);
    }
  }
  return;
}

