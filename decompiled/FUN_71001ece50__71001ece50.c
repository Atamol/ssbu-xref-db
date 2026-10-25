// addr:      71001ece50
// offset:    0x1ece50
// name:      FUN_71001ece50
// mangled:   
// signature: undefined FUN_71001ece50(void)


undefined4 FUN_71001ece50(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uStack_38;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ecec0:
    if ((*plVar6 != 0) && (lVar4 = *(long *)(*plVar6 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001ecef4;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001ecec0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001ecec0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001ecef4:
  plVar6 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    FUN_71001b12a0(&uStack_38);
    *(ulong *)(param_1 + 0x90) = uStack_38 + (long)DAT_7104f575e4;
    puVar3 = FUN_71001af850(0x58);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71001e1880(puVar3,5,0);
      *(undefined4 *)(puVar3 + 9) = 0;
      puVar3[10] = param_1;
      *puVar3 = &PTR_FUN_7104f576d8;
      FUN_71001e1ba0((long)puVar3,'\x01');
    }
    *(undefined8 **)(param_1 + 0x20) = puVar3;
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return uVar5;
}

