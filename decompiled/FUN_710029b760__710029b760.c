// addr:      710029b760
// offset:    0x29b760
// name:      FUN_710029b760
// mangled:   
// signature: bool __cdecl FUN_710029b760(undefined8 param_1, long * param_2, long param_3, long param_4, undefined4 param_5)


bool FUN_710029b760(undefined8 param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined4 local_5c;
  int local_58 [6];
  
  bVar2 = FUN_71001ccd00(param_2);
  if (!bVar2) {
    local_5c = 0x8001000d;
    FUN_71001b4200(local_58,&local_5c);
    pcVar8 = FUN_710170d030;
    if (local_58[0] < 0) {
      pcVar8 = (code *)0x0;
    }
    return pcVar8 != (code *)0x0;
  }
  puVar3 = FUN_71001af850(0x230);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = FUN_71001af850(8);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_71002498e0(puVar4);
    }
    puVar5 = FUN_71001af850(8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_7104f60988;
    }
    FUN_710029d3d0(puVar3,puVar4,puVar5);
  }
  FUN_710029b8f0((long)puVar3,(int)param_2[3],param_3,param_4,param_5);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029b854:
    if ((*plVar9 != 0) && (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x10);
      goto LAB_710029b8c0;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar6;
    if (uVar1 == 0) goto LAB_710029b854;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710029b854;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar7 = 0;
LAB_710029b8c0:
  FUN_71001ccdf0(lVar7,(long)puVar3,0);
  return true;
}

