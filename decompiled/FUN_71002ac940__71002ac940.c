// addr:      71002ac940
// offset:    0x2ac940
// name:      FUN_71002ac940
// mangled:   
// signature: undefined4 __cdecl FUN_71002ac940(long param_1, undefined8 * param_2)


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_71002ac940(long param_1,undefined8 *param_2)

{
  uint *******pppppppuVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint *******pppppppuVar5;
  uint uVar6;
  uint *******pppppppuVar7;
  ulong uVar8;
  uint uVar9;
  uint *******pppppppuVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined4 uVar14;
  ulong local_4f8;
  uint *******local_4f0;
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
  uint *******local_68;
  uint *******local_60;
  undefined8 local_58;
  
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_71001b3cb0(param_1 + 0x10,"");
  local_488 = 0x10000;
  local_490 = &uStack_468;
  local_460 = 0;
  local_458 = 0;
  uStack_478 = 0;
  local_4f8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_470 = 0;
  uStack_468 = 1000;
  local_4e0 = &local_490;
  local_4d8 = (long *)0x0;
  local_4f0 = (uint *******)0x0;
  uStack_4e8 = 0;
  local_4d0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  uStack_4b8 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0x400;
  local_68 = (uint *******)*param_2;
  local_480 = local_490;
  local_60 = local_68;
  FUN_71001ba380(&local_4f8,(long *)&local_68);
  uVar14 = 0;
  plVar2 = local_4d8;
  if (local_4a0 != 0) goto joined_r0x0071002accb0;
  local_60 = (uint *******)0x710424eb25;
  local_58 = 0x405000000000000;
  local_68 = (uint *******)0x6;
  if ((uint)local_4f8 != 0) {
    uVar9 = 0;
    uVar8 = 0;
    local_68._0_4_ = 6;
    pppppppuVar7 = local_4f0;
    pppppppuVar5 = local_4f0;
    uVar6 = (uint)local_4f8;
    do {
      uVar11 = (uint)local_68;
      if ((uVar8 & 0x1000) != 0) {
        uVar11 = 0x15 - uVar9;
      }
      uVar9 = *(uint *)pppppppuVar5;
      if ((*(ushort *)((long)pppppppuVar5 + 0x16) & 0x1000) != 0) {
        uVar9 = 0x15 - *(byte *)((long)pppppppuVar5 + 0x15);
      }
      if (uVar11 == uVar9) {
        pppppppuVar10 = local_60;
        if ((uVar8 & 0x1000) != 0) {
          pppppppuVar10 = (uint *******)&local_68;
        }
        pppppppuVar1 = (uint *******)pppppppuVar5[1];
        if ((*(ushort *)((long)pppppppuVar5 + 0x16) & 0x1000) != 0) {
          pppppppuVar1 = pppppppuVar5;
        }
        if (pppppppuVar10 == pppppppuVar1) goto LAB_71002acc90;
        iVar3 = memcmp(pppppppuVar10,pppppppuVar1,(ulong)uVar11);
        pppppppuVar7 = local_4f0;
        uVar6 = (uint)local_4f8;
        if (iVar3 == 0) goto LAB_71002acc90;
      }
      pppppppuVar5 = pppppppuVar5 + 6;
      if (pppppppuVar5 == pppppppuVar7 + (ulong)uVar6 * 6) goto LAB_71002acc90;
      uVar8 = local_58 >> 0x30;
      uVar9 = (uint)local_58._5_1_;
    } while( true );
  }
  goto LAB_71002acca8;
LAB_71002acc90:
  if ((pppppppuVar5 != pppppppuVar7 + (ulong)uVar6 * 6) &&
     ((*(byte *)((long)pppppppuVar5 + 0x2e) >> 4 & 1) != 0)) {
    *(uint *******)(param_1 + 8) = pppppppuVar5[3];
    local_60 = (uint *******)0x71043bdb79;
    local_58 = 0x405000000000000;
    local_68 = (uint *******)&DAT_0000000c;
    pppppppuVar5 = pppppppuVar7;
    if (uVar6 != 0) {
      uVar11 = 0;
      uVar8 = 0;
      pppppppuVar10 = pppppppuVar7;
      uVar9 = 0xc;
      do {
        if ((uVar8 & 0x1000) != 0) {
          uVar9 = 0x15 - uVar11;
        }
        uVar11 = *(uint *)pppppppuVar5;
        if ((*(ushort *)((long)pppppppuVar5 + 0x16) & 0x1000) != 0) {
          uVar11 = 0x15 - *(byte *)((long)pppppppuVar5 + 0x15);
        }
        if (uVar9 == uVar11) {
          pppppppuVar10 = local_60;
          if ((uVar8 & 0x1000) != 0) {
            pppppppuVar10 = (uint *******)&local_68;
          }
          pppppppuVar1 = (uint *******)pppppppuVar5[1];
          if ((*(ushort *)((long)pppppppuVar5 + 0x16) & 0x1000) != 0) {
            pppppppuVar1 = pppppppuVar5;
          }
          if (pppppppuVar10 == pppppppuVar1) break;
          iVar3 = memcmp(pppppppuVar10,pppppppuVar1,(ulong)uVar9);
          pppppppuVar7 = local_4f0;
          pppppppuVar10 = local_4f0;
          uVar6 = (uint)local_4f8;
          if (iVar3 == 0) {
            if (pppppppuVar5 != local_4f0 + (local_4f8 & 0xffffffff) * 6) goto LAB_71002acc74;
            goto LAB_71002acca8;
          }
        }
        pppppppuVar5 = pppppppuVar5 + 6;
        if (pppppppuVar5 == pppppppuVar10 + (ulong)uVar6 * 6) break;
        uVar8 = local_58 >> 0x30;
        uVar11 = (uint)local_58._5_1_;
        uVar9 = (uint)local_68;
      } while( true );
    }
    if (pppppppuVar5 != pppppppuVar7 + (ulong)uVar6 * 6) {
LAB_71002acc74:
      if ((*(ushort *)((long)pppppppuVar5 + 0x2e) >> 10 & 1) != 0) {
        if ((*(ushort *)((long)pppppppuVar5 + 0x2e) >> 0xc & 1) == 0) {
          pppppppuVar5 = (uint *******)pppppppuVar5[4];
        }
        else {
          pppppppuVar5 = pppppppuVar5 + 3;
        }
        FUN_71001b3cb0(param_1 + 0x10,(char *)pppppppuVar5);
        uVar14 = 1;
        plVar2 = local_4d8;
        goto joined_r0x0071002accb0;
      }
    }
  }
LAB_71002acca8:
  uVar14 = 0;
  plVar2 = local_4d8;
joined_r0x0071002accb0:
  local_4d8 = plVar2;
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    while (lVar4 != 0) {
      if (plVar2[2] == lVar4) {
        *(undefined8 *)(lVar4 + 8) = 0;
        lVar4 = plVar2[4];
        goto joined_r0x0071002acb74;
      }
      lVar13 = *(long *)(lVar4 + 0x10);
      FUN_71001b1870(lVar4);
      *plVar2 = lVar13;
      lVar4 = lVar13;
    }
    lVar4 = plVar2[4];
joined_r0x0071002acb74:
    if (lVar4 != 0) {
      FUN_71001b1870(lVar4);
    }
    operator_delete((ulong)plVar2);
  }
  FUN_71001b1870(local_4c0);
  if (local_4c8 != 0) {
    FUN_71001b1870(local_4c8);
  }
  do {
    if (local_490 == (undefined8 *)0x0) {
joined_r0x0071002aca68:
      if (local_470 != 0) {
        FUN_71001b1870(local_470);
      }
      return uVar14;
    }
    if (local_480 == local_490) {
      local_490[1] = 0;
      goto joined_r0x0071002aca68;
    }
    puVar12 = (undefined8 *)local_490[2];
    FUN_71001b1870((long)local_490);
    local_490 = puVar12;
  } while( true );
}

