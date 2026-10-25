// addr:      710022f9b0
// offset:    0x22f9b0
// name:      FUN_710022f9b0
// mangled:   
// signature: uint __cdecl FUN_710022f9b0(long param_1, long * param_2, ulong param_3, void * param_4, void * param_5, ulong param_6)


uint FUN_710022f9b0(long param_1,long *param_2,ulong param_3,void *param_4,void *param_5,
                   ulong param_6)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *puVar8;
  long *plVar9;
  uint uVar10;
  undefined8 auStack_108 [3];
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  char local_d0;
  byte local_64 [4];
  ulong local_58;
  
  FUN_71001e6720(&uStack_d8);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022fa44:
    if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0)) goto LAB_710022fa74;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar10 = *puVar3;
    if (uVar10 == 0) goto LAB_710022fa44;
    if ((ulong)uVar10 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
      goto LAB_710022fa44;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022fa74:
    lVar7 = 0;
  }
  plVar9 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar1 = *(ushort *)(param_1 + 0x48);
  local_58 = CONCAT62(local_58._2_6_,uVar1);
  if (uVar1 < 0x7f) {
    local_64[0] = (byte)uVar1 | 0x80;
    FUN_71001d0460((long)&uStack_d8,local_64,1);
    bVar2 = FUN_71001ccd00(param_2);
    if (!bVar2) goto LAB_710022fabc;
LAB_710022fafc:
    local_58._0_4_ = (int)param_2[3];
    FUN_71001d0460((long)&uStack_d8,&local_58,4);
    local_58._0_4_ = 2;
    FUN_71001d0460((long)&uStack_d8,&local_58,4);
    FUN_71001d0460((long)&uStack_d8,param_4,4);
    if (local_d0 != '\0') {
      local_58 = CONCAT44(local_58._4_4_,0x8001000a);
      FUN_71001b4200((undefined4 *)auStack_f0,(undefined4 *)&local_58);
      puVar6 = auStack_f0;
LAB_710022fb98:
      FUN_71001d0c90((long)param_2,puVar6);
      bVar2 = false;
      param_6 = 1;
      goto LAB_710022fba8;
    }
    FUN_71001d0460((long)&uStack_d8,param_5,8);
    if (local_d0 != '\0') {
      local_58 = CONCAT44(local_58._4_4_,0x8001000a);
      FUN_71001b4200((undefined4 *)auStack_108,(undefined4 *)&local_58);
      puVar6 = auStack_108;
      goto LAB_710022fb98;
    }
    if ((ulong *)param_2[0x13] == (ulong *)param_2[0x14]) {
      local_58 = param_3;
      FUN_7100225f90(param_2 + 0x12,&local_58);
      puVar8 = (ulong *)param_2[0x13];
      if (puVar8 == (ulong *)param_2[0x14]) goto LAB_710022fc60;
LAB_710022fc2c:
      *puVar8 = param_6;
      param_2[0x13] = param_2[0x13] + 8;
      local_58 = param_6;
    }
    else {
      *(ulong *)param_2[0x13] = param_3;
      puVar8 = (ulong *)(param_2[0x13] + 8);
      param_2[0x13] = (long)puVar8;
      if (puVar8 != (ulong *)param_2[0x14]) goto LAB_710022fc2c;
LAB_710022fc60:
      local_58 = param_6;
      FUN_7100225f90(param_2 + 0x12,&local_58);
    }
    DAT_71052b5718 = FUN_710022f420;
    if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
      bVar2 = true;
      goto LAB_710022fba8;
    }
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d8);
    param_6 = uVar5 & 0xffffffff;
  }
  else {
    local_64[0] = 0xff;
    FUN_71001d0460((long)&uStack_d8,local_64,1);
    FUN_71001d0460((long)&uStack_d8,&local_58,2);
    bVar2 = FUN_71001ccd00(param_2);
    if (bVar2) goto LAB_710022fafc;
LAB_710022fabc:
    param_6 = 0;
  }
  bVar2 = false;
LAB_710022fba8:
  uVar10 = (uint)param_6;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (bVar2) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d8);
    uVar10 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_d8);
  return uVar10 & 1;
}

