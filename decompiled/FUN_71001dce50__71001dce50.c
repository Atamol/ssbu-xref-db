// addr:      71001dce50
// offset:    0x1dce50
// name:      FUN_71001dce50
// mangled:   
// signature: undefined FUN_71001dce50(void)


void FUN_71001dce50(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte abStack_24 [4];
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  uVar1 = *(uint *)(param_1 + 100);
  plVar5 = (long *)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18) + 0x50);
  plVar6 = (long *)*plVar5;
  plVar7 = plVar5;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= uVar1) {
        plVar7 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < uVar1];
    } while (plVar6 != (long *)0x0);
    if (((plVar7 != plVar5) && (*(uint *)(plVar7 + 4) <= uVar1)) &&
       (plVar7 = (long *)plVar7[5], plVar7 != (long *)0x0)) {
      uStack_78 = *(undefined8 *)(param_1 + 0x68);
      uStack_70 = *(undefined8 *)(param_1 + 0x70);
      uStack_68 = *(undefined8 *)(param_1 + 0x78);
      abStack_24[0] = 1;
      bVar2 = FUN_71001b4280((uint *)&uStack_78,abStack_24);
      if (bVar2) {
        iVar4 = 2;
      }
      else {
        iVar4 = 3;
      }
      uStack_50 = uStack_68;
      uStack_58 = uStack_70;
      uStack_60 = uStack_78;
      uStack_48 = uStack_60;
      uStack_40 = uStack_58;
      uStack_38 = uStack_50;
      FUN_71001d0f00(plVar7,iVar4,&uStack_48,1);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 5;
  if (*(code **)(param_1 + 0x28) != (code *)0x0) {
    (**(code **)(param_1 + 0x28))(param_1,param_1 + 0x30);
  }
  return;
}

