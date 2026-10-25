// addr:      71002591a0
// offset:    0x2591a0
// name:      FUN_71002591a0
// mangled:   
// signature: uint __cdecl FUN_71002591a0(long param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, ulong param_8)


uint FUN_71002591a0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 auStack_d0 [14];
  
  FUN_71001e6720(auStack_d0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710025923c:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_710025926c;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar2;
    if (uVar6 == 0) goto LAB_710025923c;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_710025923c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710025926c:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)auStack_d0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)auStack_d0,param_2);
  if ((uVar3 & 1) == 0) {
    param_8 = 0;
  }
  else {
    FUN_710022b400((long)auStack_d0,6);
    if (param_2 != (long *)0x0) {
      FUN_710022b430((long)param_2,param_3);
      FUN_710022b430((long)param_2,param_4);
      FUN_710022b430((long)param_2,param_5);
      FUN_710022b430((long)param_2,param_6);
      FUN_710022b430((long)param_2,param_7);
      FUN_710022b430((long)param_2,param_8);
    }
    DAT_71052b5f18 = FUN_7100259720;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
      bVar1 = true;
      goto LAB_710025934c;
    }
    uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)auStack_d0);
    param_8 = uVar3 & 0xffffffff;
  }
  bVar1 = false;
LAB_710025934c:
  uVar6 = (uint)param_8;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)auStack_d0);
    uVar6 = (uint)uVar4;
  }
  FUN_71001e6910(auStack_d0);
  return uVar6 & 1;
}

