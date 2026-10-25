// addr:      710022fcb0
// offset:    0x22fcb0
// name:      FUN_710022fcb0
// mangled:   
// signature: uint __cdecl FUN_710022fcb0(long param_1, long * param_2, undefined8 param_3, long param_4, undefined8 param_5, ulong param_6, long param_7)


uint FUN_710022fcb0(long param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                   ulong param_6,long param_7)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  uint uVar10;
  undefined8 auStack_118 [3];
  undefined8 auStack_100 [3];
  undefined8 uStack_e8;
  char local_e0;
  byte local_74 [4];
  undefined8 local_70;
  
  FUN_71001e6720(&uStack_e8);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022fd48:
    if ((*plVar9 == 0) || (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 == 0)) goto LAB_710022fd78;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar10 = *puVar3;
    if (uVar10 == 0) goto LAB_710022fd48;
    if ((ulong)uVar10 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
      goto LAB_710022fd48;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022fd78:
    lVar6 = 0;
  }
  plVar9 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar1 = *(ushort *)(param_1 + 0x48);
  local_70 = CONCAT62(local_70._2_6_,uVar1);
  if (uVar1 < 0x7f) {
    local_74[0] = (byte)uVar1 | 0x80;
    FUN_71001d0460((long)&uStack_e8,local_74,1);
    bVar2 = FUN_71001ccd00(param_2);
    if (bVar2) goto LAB_710022fe00;
LAB_710022fdc0:
    param_6 = 0;
LAB_710022fdc4:
    bVar2 = false;
  }
  else {
    local_74[0] = 0xff;
    FUN_71001d0460((long)&uStack_e8,local_74,1);
    FUN_71001d0460((long)&uStack_e8,&local_70,2);
    bVar2 = FUN_71001ccd00(param_2);
    if (!bVar2) goto LAB_710022fdc0;
LAB_710022fe00:
    local_70._0_4_ = (int)param_2[3];
    FUN_71001d0460((long)&uStack_e8,&local_70,4);
    local_70._0_4_ = 4;
    FUN_71001d0460((long)&uStack_e8,&local_70,4);
    local_70 = CONCAT44(local_70._4_4_,(int)*(undefined8 *)(param_4 + 0x10));
    FUN_71001d0460((long)&uStack_e8,&local_70,4);
    for (lVar6 = *(long *)(param_4 + 8); param_4 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
      FUN_7100228b70((long)&uStack_e8,lVar6 + 0x10);
    }
    if (local_e0 == '\0') {
      (**(code **)(*DAT_71052b5588 + 0x10))(DAT_71052b5588,&uStack_e8,*(undefined8 *)(param_7 + 8));
      if (local_e0 == '\0') {
        if (param_2 != (long *)0x0) {
          if ((undefined8 *)param_2[0x13] == (undefined8 *)param_2[0x14]) {
            local_70 = param_3;
            FUN_7100225f90(param_2 + 0x12,&local_70);
            puVar7 = (undefined8 *)param_2[0x13];
            if (puVar7 != (undefined8 *)param_2[0x14]) goto LAB_710022ff70;
LAB_710022ffc4:
            local_70 = param_5;
            FUN_7100225f90(param_2 + 0x12,&local_70);
            puVar8 = (ulong *)param_2[0x13];
            if (puVar8 == (ulong *)param_2[0x14]) {
LAB_710022ffe4:
              local_70 = param_6;
              FUN_7100225f90(param_2 + 0x12,&local_70);
              goto LAB_710022fff0;
            }
          }
          else {
            *(undefined8 *)param_2[0x13] = param_3;
            puVar7 = (undefined8 *)(param_2[0x13] + 8);
            param_2[0x13] = (long)puVar7;
            if (puVar7 == (undefined8 *)param_2[0x14]) goto LAB_710022ffc4;
LAB_710022ff70:
            *puVar7 = param_5;
            puVar8 = (ulong *)(param_2[0x13] + 8);
            param_2[0x13] = (long)puVar8;
            if (puVar8 == (ulong *)param_2[0x14]) goto LAB_710022ffe4;
          }
          *puVar8 = param_6;
          param_2[0x13] = param_2[0x13] + 8;
          local_70 = param_6;
        }
LAB_710022fff0:
        DAT_71052b5728 = FUN_710022f510;
        if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
          bVar2 = true;
          goto LAB_710022fee8;
        }
        uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_e8);
        param_6 = uVar5 & 0xffffffff;
        goto LAB_710022fdc4;
      }
      local_70 = CONCAT44(local_70._4_4_,0x8001000a);
      FUN_71001b4200((undefined4 *)auStack_118,(undefined4 *)&local_70);
      puVar7 = auStack_118;
    }
    else {
      local_70._4_4_ = (undefined4)(local_70 >> 0x20);
      local_70 = CONCAT44(local_70._4_4_,0x8001000a);
      FUN_71001b4200((undefined4 *)auStack_100,(undefined4 *)&local_70);
      puVar7 = auStack_100;
    }
    FUN_71001d0c90((long)param_2,puVar7);
    bVar2 = false;
    param_6 = 1;
  }
LAB_710022fee8:
  uVar10 = (uint)param_6;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (bVar2) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_e8);
    uVar10 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_e8);
  return uVar10 & 1;
}

