// addr:      71002acf90
// offset:    0x2acf90
// name:      FUN_71002acf90
// mangled:   
// signature: uint __cdecl FUN_71002acf90(long param_1, undefined8 * param_2)


/* WARNING: Type propagation algorithm not settling */

uint FUN_71002acf90(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *******pppppppuVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  ulong uVar10;
  uint *******pppppppuVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  uint *******pppppppuVar15;
  uint *******local_518;
  uint *******local_510;
  undefined8 local_508;
  uint *******local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  uint *******local_4e8;
  undefined8 uStack_4e0;
  undefined8 **local_4d8;
  long *local_4d0;
  undefined8 local_4c8;
  long local_4c0;
  long local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  int local_498;
  undefined8 local_490;
  undefined8 *local_488;
  undefined8 local_480;
  undefined8 *local_478;
  undefined8 uStack_470;
  long local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 local_450;
  
  *(uint *)(param_1 + 0x38) = 0;
  local_480 = 0x10000;
  local_488 = &uStack_460;
  local_4f0 = 0;
  uStack_470 = 0;
  local_490 = 0;
  local_498 = 0;
  local_468 = 0;
  uStack_460 = 1000;
  local_4d8 = &local_488;
  local_4d0 = (long *)0x0;
  local_458 = 0;
  local_450 = 0;
  local_4e8 = (uint *******)0x0;
  uStack_4e0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0x400;
  local_518 = (uint *******)*param_2;
  local_510 = local_518;
  local_478 = local_488;
  FUN_71001ba380(&local_4f0,(long *)&local_518);
  if (local_498 == 0) {
    local_510 = (uint *******)0x710424eb25;
    local_508 = 0x405000000000000;
    local_518 = (uint *******)0x6;
    if ((uint)local_4f0 != 0) {
      uVar12 = 0;
      uVar10 = 0;
      local_518._0_4_ = 6;
      pppppppuVar8 = local_4e8;
      pppppppuVar15 = local_4e8;
      uVar5 = (uint)local_4f0;
      do {
        uVar1 = (uint)local_518;
        if ((uVar10 & 0x1000) != 0) {
          uVar1 = 0x15 - uVar12;
        }
        uVar12 = *(uint *)pppppppuVar15;
        if ((*(ushort *)((long)pppppppuVar15 + 0x16) & 0x1000) != 0) {
          uVar12 = 0x15 - *(byte *)((long)pppppppuVar15 + 0x15);
        }
        if (uVar1 == uVar12) {
          pppppppuVar11 = local_510;
          if ((uVar10 & 0x1000) != 0) {
            pppppppuVar11 = (uint *******)&local_518;
          }
          pppppppuVar2 = (uint *******)pppppppuVar15[1];
          if ((*(ushort *)((long)pppppppuVar15 + 0x16) & 0x1000) != 0) {
            pppppppuVar2 = pppppppuVar15;
          }
          if (pppppppuVar11 == pppppppuVar2) goto LAB_71002ad214;
          iVar4 = memcmp(pppppppuVar11,pppppppuVar2,(ulong)uVar1);
          pppppppuVar8 = local_4e8;
          uVar5 = (uint)local_4f0;
          if (iVar4 == 0) goto LAB_71002ad214;
        }
        pppppppuVar15 = pppppppuVar15 + 6;
        if (pppppppuVar15 == pppppppuVar8 + (ulong)uVar5 * 6) goto LAB_71002ad214;
        uVar10 = local_508 >> 0x30;
        uVar12 = (uint)local_508._5_1_;
      } while( true );
    }
  }
joined_r0x0071002ad02c:
  uVar5 = 0;
  plVar3 = local_4d0;
joined_r0x0071002ad38c:
  local_4d0 = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    while (lVar6 != 0) {
      if (plVar3[2] == lVar6) {
        *(undefined8 *)(lVar6 + 8) = 0;
        lVar6 = plVar3[4];
        goto joined_r0x0071002ad1bc;
      }
      lVar14 = *(long *)(lVar6 + 0x10);
      FUN_71001b1870(lVar6);
      *plVar3 = lVar14;
      lVar6 = lVar14;
    }
    lVar6 = plVar3[4];
joined_r0x0071002ad1bc:
    if (lVar6 != 0) {
      FUN_71001b1870(lVar6);
    }
    operator_delete((ulong)plVar3);
  }
  FUN_71001b1870(local_4b8);
  if (local_4c0 != 0) {
    FUN_71001b1870(local_4c0);
  }
  do {
    if (local_488 == (undefined8 *)0x0) {
joined_r0x0071002ad0ac:
      if (local_468 != 0) {
        FUN_71001b1870(local_468);
      }
      return uVar5 & 1;
    }
    if (local_478 == local_488) {
      local_488[1] = 0;
      goto joined_r0x0071002ad0ac;
    }
    puVar13 = (undefined8 *)local_488[2];
    FUN_71001b1870((long)local_488);
    local_488 = puVar13;
  } while( true );
LAB_71002ad214:
  if ((pppppppuVar15 != pppppppuVar8 + (ulong)uVar5 * 6) &&
     ((*(byte *)((long)pppppppuVar15 + 0x2e) >> 4 & 1) != 0)) {
    ppppppuVar9 = pppppppuVar15[3];
    *(uint *******)(param_1 + 8) = ppppppuVar9;
    if (ppppppuVar9 != (uint ******)0x0) {
      uVar5 = FUN_71002ac940(param_1,param_2);
      plVar3 = local_4d0;
      goto joined_r0x0071002ad38c;
    }
    local_510 = (uint *******)0x710442184c;
    local_508 = 0x405000000000000;
    local_518 = (uint *******)0x6;
    pppppppuVar15 = pppppppuVar8;
    if (uVar5 != 0) {
      uVar12 = 0;
      uVar10 = 0;
      local_518._0_4_ = 6;
      pppppppuVar11 = pppppppuVar8;
      do {
        uVar1 = (uint)local_518;
        if ((uVar10 & 0x1000) != 0) {
          uVar1 = 0x15 - uVar12;
        }
        uVar12 = *(uint *)pppppppuVar15;
        if ((*(ushort *)((long)pppppppuVar15 + 0x16) & 0x1000) != 0) {
          uVar12 = 0x15 - *(byte *)((long)pppppppuVar15 + 0x15);
        }
        if (uVar1 == uVar12) {
          pppppppuVar11 = local_510;
          if ((uVar10 & 0x1000) != 0) {
            pppppppuVar11 = (uint *******)&local_518;
          }
          pppppppuVar2 = (uint *******)pppppppuVar15[1];
          if ((*(ushort *)((long)pppppppuVar15 + 0x16) & 0x1000) != 0) {
            pppppppuVar2 = pppppppuVar15;
          }
          if (pppppppuVar11 == pppppppuVar2) break;
          iVar4 = memcmp(pppppppuVar11,pppppppuVar2,(ulong)uVar1);
          pppppppuVar8 = local_4e8;
          pppppppuVar11 = local_4e8;
          uVar5 = (uint)local_4f0;
          if (iVar4 == 0) break;
        }
        pppppppuVar15 = pppppppuVar15 + 6;
        if (pppppppuVar15 == pppppppuVar11 + (ulong)uVar5 * 6) break;
        uVar10 = local_508 >> 0x30;
        uVar12 = (uint)local_508._5_1_;
      } while( true );
    }
    if ((pppppppuVar15 != pppppppuVar8 + (ulong)uVar5 * 6) &&
       (*(short *)((long)pppppppuVar15 + 0x2e) == 3)) {
      local_510 = (uint *******)((ulong)local_510 & 0xffffffffffffff00);
      local_500 = (uint *******)&local_510;
      local_4f8 = 0x10;
      local_518 = (uint *******)&PTR_FUN_710509cc08;
      FUN_71001b47e0((long)&local_518,"interval",-1);
      uVar7 = FUN_71002accf0((uint *)&local_4f0,(uint *)(pppppppuVar15 + 3),(long)&local_518,
                             (uint *)(param_1 + 0x38));
      uVar5 = (uint)uVar7;
      local_518 = (uint *******)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_518);
      plVar3 = local_4d0;
      goto joined_r0x0071002ad38c;
    }
  }
  goto joined_r0x0071002ad02c;
}

