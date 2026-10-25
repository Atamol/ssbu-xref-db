// addr:      7100268900
// offset:    0x268900
// name:      FUN_7100268900
// mangled:   
// signature: uint __cdecl FUN_7100268900(long param_1, long * param_2, long * param_3, undefined1 * param_4, ulong param_5)


uint FUN_7100268900(long param_1,long *param_2,long *param_3,undefined1 *param_4,ulong param_5)

{
  long lVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 auStack_f0 [3];
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  char local_b8;
  undefined4 local_44;
  
  puVar6 = auStack_f0;
  FUN_71001e6720(&uStack_c0);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026898c:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_71002689bc;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar9 = *puVar3;
    if (uVar9 == 0) goto LAB_710026898c;
    if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x20);
      goto LAB_710026898c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002689bc:
    lVar7 = 0;
  }
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_710022b480((long)&uStack_c0,*(ushort *)(param_1 + 0x48),1);
  uVar4 = FUN_710022b390((long)&uStack_c0,param_2);
  if ((uVar4 & 1) == 0) {
    param_5 = 0;
LAB_7100268a6c:
    bVar2 = false;
  }
  else {
    FUN_710022b400((long)&uStack_c0,5);
    local_44 = (undefined4)((ulong)(param_3[1] - *param_3) >> 5);
    FUN_71001d0460((long)&uStack_c0,&local_44,4);
    lVar1 = param_3[1];
    for (lVar7 = *param_3; lVar7 != lVar1; lVar7 = lVar7 + 0x20) {
      FUN_7100289ba0((long)&uStack_c0,lVar7);
    }
    if (local_b8 == '\0') {
      FUN_71001d0630((long)&uStack_c0,param_4);
      if (local_b8 == '\0') {
        if (param_2 != (long *)0x0) {
          FUN_710022b430((long)param_2,param_5);
        }
        DAT_71052b61b8 = FUN_710028c300;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar2 = FUN_710022b500(param_1,0x10), bVar2)) {
          bVar2 = true;
          goto LAB_7100268ab4;
        }
        uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
        param_5 = uVar4 & 0xffffffff;
        goto LAB_7100268a6c;
      }
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_f0,&local_44);
    }
    else {
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d8,&local_44);
      puVar6 = auStack_d8;
    }
    FUN_71001d0c90((long)param_2,puVar6);
    bVar2 = false;
    param_5 = 1;
  }
LAB_7100268ab4:
  uVar9 = (uint)param_5;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    uVar9 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_c0);
  return uVar9 & 1;
}

