// addr:      71001df960
// offset:    0x1df960
// name:      FUN_71001df960
// mangled:   
// signature: undefined4 __cdecl FUN_71001df960(long param_1, long * param_2, undefined8 param_3, undefined8 param_4, long param_5, undefined8 param_6, undefined4 param_7, byte param_8, undefined8 * param_9)


undefined4
FUN_71001df960(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
              undefined8 param_6,undefined4 param_7,byte param_8,undefined8 *param_9)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long *plVar8;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001df9f4:
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) goto LAB_71001dfa24;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001df9f4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001df9f4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001dfa24:
    lVar5 = 0;
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  bVar2 = FUN_71001ccd00(param_2);
  if (!bVar2) {
    uVar7 = 0;
    goto LAB_71001dfb50;
  }
  puVar4 = FUN_71001af850(0x350);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_71001e25a0(puVar4,*(undefined4 *)(param_1 + 300),param_1,(int)param_2[3],param_3,param_4,
                   param_5,param_6,param_7,param_8 & 1);
  }
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001dfae4:
    if ((*plVar8 == 0) || (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 == 0)) goto LAB_71001dfb34;
    FUN_71001ccdf0(*(long *)(lVar5 + 0x10),(long)puVar4,0);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001dfae4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001dfae4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001dfb34:
    FUN_71001ccdf0(0,(long)puVar4,0);
  }
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = puVar4;
  }
  uVar7 = 1;
LAB_71001dfb50:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return uVar7;
}

