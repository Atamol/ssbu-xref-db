// addr:      710022f680
// offset:    0x22f680
// name:      FUN_710022f680
// mangled:   
// signature: uint __cdecl FUN_710022f680(long param_1, long * param_2, undefined8 param_3, long param_4, undefined8 param_5, ulong param_6)


uint FUN_710022f680(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                   ulong param_6)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  uint uVar9;
  long *plVar10;
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  char local_c8;
  byte local_5c [4];
  undefined8 local_58;
  
  FUN_71001e6720(&uStack_d0);
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022f710:
    if ((*plVar10 == 0) || (lVar6 = *(long *)(*plVar10 + 0x10), lVar6 == 0)) goto LAB_710022f740;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar9 = *puVar3;
    if (uVar9 == 0) goto LAB_710022f710;
    if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x20);
      goto LAB_710022f710;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022f740:
    lVar6 = 0;
  }
  plVar10 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  uVar1 = *(ushort *)(param_1 + 0x48);
  local_58 = CONCAT62(local_58._2_6_,uVar1);
  if (uVar1 < 0x7f) {
    local_5c[0] = (byte)uVar1 | 0x80;
    FUN_71001d0460((long)&uStack_d0,local_5c,1);
    bVar2 = FUN_71001ccd00(param_2);
    if (bVar2) goto LAB_710022f7c4;
LAB_710022f788:
    param_6 = 0;
  }
  else {
    local_5c[0] = 0xff;
    FUN_71001d0460((long)&uStack_d0,local_5c,1);
    FUN_71001d0460((long)&uStack_d0,&local_58,2);
    bVar2 = FUN_71001ccd00(param_2);
    if (!bVar2) goto LAB_710022f788;
LAB_710022f7c4:
    local_58._0_4_ = (int)param_2[3];
    FUN_71001d0460((long)&uStack_d0,&local_58,4);
    local_58._0_4_ = 1;
    FUN_71001d0460((long)&uStack_d0,&local_58,4);
    local_58 = CONCAT44(local_58._4_4_,(int)*(undefined8 *)(param_4 + 0x10));
    FUN_71001d0460((long)&uStack_d0,&local_58,4);
    for (lVar6 = *(long *)(param_4 + 8); param_4 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
      FUN_7100228b70((long)&uStack_d0,lVar6 + 0x10);
    }
    if (local_c8 != '\0') {
      local_58._4_4_ = (undefined4)(local_58 >> 0x20);
      local_58 = CONCAT44(local_58._4_4_,0x8001000a);
      FUN_71001b4200((undefined4 *)auStack_e8,(undefined4 *)&local_58);
      FUN_71001d0c90((long)param_2,auStack_e8);
      bVar2 = false;
      param_6 = 1;
      goto LAB_710022f958;
    }
    if (param_2 != (long *)0x0) {
      if ((undefined8 *)param_2[0x13] == (undefined8 *)param_2[0x14]) {
        local_58 = param_3;
        FUN_7100225f90(param_2 + 0x12,&local_58);
        puVar7 = (undefined8 *)param_2[0x13];
        if (puVar7 != (undefined8 *)param_2[0x14]) goto LAB_710022f89c;
LAB_710022f8f0:
        local_58 = param_5;
        FUN_7100225f90(param_2 + 0x12,&local_58);
        puVar8 = (ulong *)param_2[0x13];
        if (puVar8 == (ulong *)param_2[0x14]) {
LAB_710022f910:
          local_58 = param_6;
          FUN_7100225f90(param_2 + 0x12,&local_58);
          goto LAB_710022f91c;
        }
      }
      else {
        *(undefined8 *)param_2[0x13] = param_3;
        puVar7 = (undefined8 *)(param_2[0x13] + 8);
        param_2[0x13] = (long)puVar7;
        if (puVar7 == (undefined8 *)param_2[0x14]) goto LAB_710022f8f0;
LAB_710022f89c:
        *puVar7 = param_5;
        puVar8 = (ulong *)(param_2[0x13] + 8);
        param_2[0x13] = (long)puVar8;
        if (puVar8 == (ulong *)param_2[0x14]) goto LAB_710022f910;
      }
      *puVar8 = param_6;
      param_2[0x13] = param_2[0x13] + 8;
      local_58 = param_6;
    }
LAB_710022f91c:
    DAT_71052b5710 = FUN_710022f2d0;
    if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
      bVar2 = true;
      goto LAB_710022f958;
    }
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
    param_6 = uVar4 & 0xffffffff;
  }
  bVar2 = false;
LAB_710022f958:
  uVar9 = (uint)param_6;
  (**(code **)(*plVar10 + 0x20))(plVar10);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
    uVar9 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_d0);
  return uVar9 & 1;
}

