// addr:      71002ac4c0
// offset:    0x2ac4c0
// name:      FUN_71002ac4c0
// mangled:   
// signature: uint __cdecl FUN_71002ac4c0(long param_1, undefined8 * param_2)


uint FUN_71002ac4c0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **local_520;
  undefined **local_518;
  undefined8 local_510;
  undefined ***local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined **local_4f0;
  undefined8 uStack_4e8;
  undefined8 **local_4e0;
  long *local_4d8;
  undefined8 local_4d0;
  long local_4c8;
  long local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  int local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 local_488;
  undefined8 *local_480;
  undefined8 uStack_478;
  long local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_458;
  
  *(uint *)(param_1 + 0x38) = 0;
  puVar13 = (ulong *)(param_1 + 0x40);
  *puVar13 = 0;
  local_488 = 0x10000;
  local_490 = &uStack_468;
  local_4f8 = 0;
  uStack_478 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_470 = 0;
  uStack_468 = 1000;
  local_4e0 = &local_490;
  local_4d8 = (long *)0x0;
  local_460 = 0;
  local_458 = 0;
  local_4f0 = (undefined **)0x0;
  uStack_4e8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0x400;
  local_520 = (undefined **)*param_2;
  local_518 = local_520;
  local_480 = local_490;
  FUN_71001ba380(&local_4f8,(long *)&local_520);
  if (local_4a0 == 0) {
    local_518 = (undefined **)0x710424eb25;
    local_510 = 0x405000000000000;
    local_520 = (undefined **)0x6;
    if ((uint)local_4f8 != 0) {
      uVar11 = 0;
      uVar7 = 0;
      local_520._0_4_ = 6;
      ppuVar8 = local_4f0;
      ppuVar15 = local_4f0;
      uVar5 = (uint)local_4f8;
      do {
        uVar1 = (uint)local_520;
        if ((uVar7 & 0x1000) != 0) {
          uVar1 = 0x15 - uVar11;
        }
        uVar11 = *(uint *)ppuVar15;
        if ((*(ushort *)((long)ppuVar15 + 0x16) & 0x1000) != 0) {
          uVar11 = 0x15 - *(byte *)((long)ppuVar15 + 0x15);
        }
        if (uVar1 == uVar11) {
          pppuVar2 = (undefined ***)local_518;
          if ((uVar7 & 0x1000) != 0) {
            pppuVar2 = &local_520;
          }
          ppuVar10 = (undefined **)ppuVar15[1];
          if ((*(ushort *)((long)ppuVar15 + 0x16) & 0x1000) != 0) {
            ppuVar10 = ppuVar15;
          }
          if (pppuVar2 == (undefined ***)ppuVar10) goto LAB_71002ac74c;
          iVar4 = memcmp(pppuVar2,ppuVar10,(ulong)uVar1);
          ppuVar8 = local_4f0;
          uVar5 = (uint)local_4f8;
          if (iVar4 == 0) goto LAB_71002ac74c;
        }
        ppuVar15 = ppuVar15 + 6;
        if (ppuVar15 == ppuVar8 + (ulong)uVar5 * 6) goto LAB_71002ac74c;
        uVar7 = local_510 >> 0x30;
        uVar11 = (uint)local_510._5_1_;
      } while( true );
    }
  }
joined_r0x0071002ac76c:
  uVar5 = 0;
  plVar3 = local_4d8;
joined_r0x0071002ac92c:
  local_4d8 = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    while (lVar6 != 0) {
      if (plVar3[2] == lVar6) {
        *(undefined8 *)(lVar6 + 8) = 0;
        lVar6 = plVar3[4];
        goto joined_r0x0071002ac6f4;
      }
      lVar14 = *(long *)(lVar6 + 0x10);
      FUN_71001b1870(lVar6);
      *plVar3 = lVar14;
      lVar6 = lVar14;
    }
    lVar6 = plVar3[4];
joined_r0x0071002ac6f4:
    if (lVar6 != 0) {
      FUN_71001b1870(lVar6);
    }
    operator_delete((ulong)plVar3);
  }
  FUN_71001b1870(local_4c0);
  if (local_4c8 != 0) {
    FUN_71001b1870(local_4c8);
  }
  do {
    if (local_490 == (undefined8 *)0x0) {
joined_r0x0071002ac5e4:
      if (local_470 != 0) {
        FUN_71001b1870(local_470);
      }
      return uVar5 & 1;
    }
    if (local_480 == local_490) {
      local_490[1] = 0;
      goto joined_r0x0071002ac5e4;
    }
    puVar12 = (undefined8 *)local_490[2];
    FUN_71001b1870((long)local_490);
    local_490 = puVar12;
  } while( true );
LAB_71002ac74c:
  if ((ppuVar15 != ppuVar8 + (ulong)uVar5 * 6) && ((*(byte *)((long)ppuVar15 + 0x2e) >> 4 & 1) != 0)
     ) {
    puVar9 = ppuVar15[3];
    *(undefined **)(param_1 + 8) = puVar9;
    if (puVar9 != (undefined *)0x0) {
      uVar5 = FUN_71002ac940(param_1,param_2);
      plVar3 = local_4d8;
      goto joined_r0x0071002ac92c;
    }
    local_518 = (undefined **)0x710442184c;
    local_510 = 0x405000000000000;
    local_520 = (undefined **)0x6;
    ppuVar15 = ppuVar8;
    if (uVar5 != 0) {
      uVar11 = 0;
      uVar7 = 0;
      local_520._0_4_ = 6;
      ppuVar10 = ppuVar8;
      do {
        uVar1 = (uint)local_520;
        if ((uVar7 & 0x1000) != 0) {
          uVar1 = 0x15 - uVar11;
        }
        uVar11 = *(uint *)ppuVar15;
        if ((*(ushort *)((long)ppuVar15 + 0x16) & 0x1000) != 0) {
          uVar11 = 0x15 - *(byte *)((long)ppuVar15 + 0x15);
        }
        if (uVar1 == uVar11) {
          pppuVar2 = (undefined ***)local_518;
          if ((uVar7 & 0x1000) != 0) {
            pppuVar2 = &local_520;
          }
          ppuVar10 = (undefined **)ppuVar15[1];
          if ((*(ushort *)((long)ppuVar15 + 0x16) & 0x1000) != 0) {
            ppuVar10 = ppuVar15;
          }
          if (pppuVar2 == (undefined ***)ppuVar10) break;
          iVar4 = memcmp(pppuVar2,ppuVar10,(ulong)uVar1);
          ppuVar8 = local_4f0;
          ppuVar10 = local_4f0;
          uVar5 = (uint)local_4f8;
          if (iVar4 == 0) break;
        }
        ppuVar15 = ppuVar15 + 6;
        if (ppuVar15 == ppuVar10 + (ulong)uVar5 * 6) break;
        uVar7 = local_510 >> 0x30;
        uVar11 = (uint)local_510._5_1_;
      } while( true );
    }
    if ((ppuVar15 != ppuVar8 + (ulong)uVar5 * 6) && (*(short *)((long)ppuVar15 + 0x2e) == 3)) {
      local_518 = (undefined **)((ulong)local_518 & 0xffffffffffffff00);
      uStack_500 = 0x10;
      local_520 = &PTR_FUN_710509cc08;
      local_508 = &local_518;
      FUN_71001b47e0((long)&local_520,"interval",-1);
      uVar7 = FUN_71002accf0((uint *)&local_4f8,(uint *)(ppuVar15 + 3),(long)&local_520,
                             (uint *)(param_1 + 0x38));
      local_520 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_520);
      if ((uVar7 & 1) != 0) {
        local_518 = (undefined **)((ulong)local_518 & 0xffffffffffffff00);
        uStack_500 = 0x10;
        local_520 = &PTR_FUN_710509cc08;
        local_508 = &local_518;
        FUN_71001b47e0((long)&local_520,"roomId",-1);
        uVar7 = FUN_71002ace40((uint *)&local_4f8,(uint *)(ppuVar15 + 3),(long)&local_520,puVar13);
        local_520 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_520);
        if ((uVar7 & 1) != 0) {
          if (*(long *)(param_1 + 0x48) != 0) {
            *(ulong *)(*(long *)(param_1 + 0x48) + 8) = *puVar13;
          }
          uVar5 = 1;
          plVar3 = local_4d8;
          goto joined_r0x0071002ac92c;
        }
      }
    }
  }
  goto joined_r0x0071002ac76c;
}

