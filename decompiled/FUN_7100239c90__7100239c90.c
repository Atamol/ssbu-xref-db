// addr:      7100239c90
// offset:    0x239c90
// name:      FUN_7100239c90
// mangled:   
// signature: undefined __cdecl FUN_7100239c90(long param_1, long param_2)


void FUN_7100239c90(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)(param_1 + 0x120);
  lVar5 = param_1;
  if (lVar4 != 0) goto LAB_7100239d98;
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100239d04:
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) goto LAB_7100239d34;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100239d04;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100239d04;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100239d34:
    lVar5 = 0;
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  if (*(long *)(param_1 + 0x120) == 0) {
    puVar3 = FUN_71001af850(0x28);
    if (puVar3 != (undefined8 *)0x0) {
      FUN_71001d69b0(puVar3,0);
      puVar3[4] = param_1;
      *puVar3 = &DAT_7104f5ba80;
    }
    *(undefined8 **)(param_1 + 0x120) = puVar3;
  }
  lVar5 = (**(code **)(*plVar6 + 0x20))(plVar6);
  lVar4 = *(long *)(param_1 + 0x120);
LAB_7100239d98:
  FUN_710023a7c0(lVar5,param_2,lVar4);
  return;
}

