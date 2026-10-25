// addr:      71002372e0
// offset:    0x2372e0
// name:      FUN_71002372e0
// mangled:   
// signature: undefined __cdecl FUN_71002372e0(long param_1, int param_2, undefined8 * param_3)


void FUN_71002372e0(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_71001cd870(param_1);
  if (param_2 == 2) {
    **(undefined8 **)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x2f8);
    if (*(long *)(param_1 + 0x178) != 0) {
      FUN_71001b2f70(*(long *)(param_1 + 0x178),param_1 + 0x3b0);
    }
    FUN_71001ece20(*(long *)(param_1 + 0x180) + 0x10,param_1 + 0x338);
    FUN_71001b0580((undefined8 *)(*(long *)(param_1 + 0x180) + 0x108),
                   (undefined8 *)(param_1 + 0x3a8));
  }
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa0));
  if (plVar3 != (long *)0x0) {
    local_58 = *param_3;
    local_50 = param_3[1];
    uStack_48 = param_3[2];
    FUN_71001d0f00(plVar3,param_2,&local_58,1);
  }
  return;
}

