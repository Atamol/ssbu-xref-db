// addr:      71002322f0
// offset:    0x2322f0
// name:      FUN_71002322f0
// mangled:   
// signature: uint __cdecl FUN_71002322f0(long param_1, long * param_2, long param_3, ulong param_4)


uint FUN_71002322f0(long param_1,long *param_2,long param_3,ulong param_4)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  char local_b8;
  byte local_4c [4];
  ulong local_48;
  
  FUN_71001e6720(&uStack_c0);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100232374:
    if ((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x10), lVar6 == 0)) goto LAB_71002323a4;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar7 = *puVar3;
    if (uVar7 == 0) goto LAB_7100232374;
    if ((ulong)uVar7 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x20);
      goto LAB_7100232374;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002323a4:
    lVar6 = 0;
  }
  plVar8 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar1 = *(ushort *)(param_1 + 0x48);
  local_48 = CONCAT62(local_48._2_6_,uVar1);
  if (uVar1 < 0x7f) {
    local_4c[0] = (byte)uVar1 | 0x80;
    FUN_71001d0460((long)&uStack_c0,local_4c,1);
    bVar2 = FUN_71001ccd00(param_2);
    if (!bVar2) goto LAB_71002323ec;
LAB_7100232428:
    local_48._0_4_ = (int)param_2[3];
    FUN_71001d0460((long)&uStack_c0,&local_48,4);
    local_48._0_4_ = 6;
    FUN_71001d0460((long)&uStack_c0,&local_48,4);
    FUN_7100232610((long)&uStack_c0,param_3);
    if (local_b8 != '\0') {
      local_48 = CONCAT44(local_48._4_4_,0x8001000a);
      FUN_71001b4200((undefined4 *)auStack_d8,(undefined4 *)&local_48);
      FUN_71001d0c90((long)param_2,auStack_d8);
      bVar2 = false;
      param_4 = 1;
      goto LAB_7100232508;
    }
    local_48 = param_4;
    if ((ulong *)param_2[0x13] == (ulong *)param_2[0x14]) {
      FUN_7100225f90(param_2 + 0x12,&local_48);
    }
    else {
      *(ulong *)param_2[0x13] = param_4;
      param_2[0x13] = param_2[0x13] + 8;
    }
    DAT_71052b5860 = FUN_7100232180;
    if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
      bVar2 = true;
      goto LAB_7100232508;
    }
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    param_4 = uVar4 & 0xffffffff;
  }
  else {
    local_4c[0] = 0xff;
    FUN_71001d0460((long)&uStack_c0,local_4c,1);
    FUN_71001d0460((long)&uStack_c0,&local_48,2);
    bVar2 = FUN_71001ccd00(param_2);
    if (bVar2) goto LAB_7100232428;
LAB_71002323ec:
    param_4 = 0;
  }
  bVar2 = false;
LAB_7100232508:
  uVar7 = (uint)param_4;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    uVar7 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_c0);
  return uVar7 & 1;
}

