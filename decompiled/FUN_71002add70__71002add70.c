// addr:      71002add70
// offset:    0x2add70
// name:      FUN_71002add70
// mangled:   
// signature: uint __cdecl FUN_71002add70(long param_1, undefined8 * param_2)


/* WARNING: Type propagation algorithm not settling */

uint FUN_71002add70(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint *******pppppppuVar2;
  uint *******__s2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint ******ppppppuVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *******pppppppuVar14;
  undefined8 local_508;
  uint *******local_500;
  undefined8 uStack_4f8;
  undefined8 **local_4f0;
  long *local_4e8;
  undefined8 local_4e0;
  long local_4d8;
  long local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  int local_4b0;
  undefined8 local_4a8;
  undefined8 *local_4a0;
  undefined8 local_498;
  undefined8 *local_490;
  undefined8 uStack_488;
  long local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_468;
  uint *******local_78;
  uint *******local_70;
  undefined8 local_68;
  
  FUN_71001b3cb0(param_1 + 0x38,"");
  local_498 = 0x10000;
  local_4a0 = &uStack_478;
  local_470 = 0;
  local_468 = 0;
  uStack_488 = 0;
  local_508 = 0;
  local_4b0 = 0;
  local_4a8 = 0;
  local_480 = 0;
  uStack_478 = 1000;
  local_4f0 = &local_4a0;
  local_4e8 = (long *)0x0;
  local_500 = (uint *******)0x0;
  uStack_4f8 = 0;
  local_4e0 = 0;
  local_4d8 = 0;
  local_4d0 = 0;
  uStack_4c8 = 0;
  local_4c0 = 0;
  uStack_4b8 = 0x400;
  local_78 = (uint *******)*param_2;
  local_490 = local_4a0;
  local_70 = local_78;
  FUN_71001ba380(&local_508,(long *)&local_78);
  uVar5 = 0;
  plVar3 = local_4e8;
  if (local_4b0 != 0) goto joined_r0x0071002ae224;
  local_70 = (uint *******)0x710424eb25;
  local_68 = 0x405000000000000;
  local_78 = (uint *******)0x6;
  if ((uint)local_508 != 0) {
    uVar11 = 0;
    uVar10 = 0;
    local_78._0_4_ = 6;
    pppppppuVar8 = local_500;
    pppppppuVar14 = local_500;
    uVar5 = (uint)local_508;
    do {
      uVar1 = (uint)local_78;
      if ((uVar10 & 0x1000) != 0) {
        uVar1 = 0x15 - uVar11;
      }
      uVar11 = *(uint *)pppppppuVar14;
      if ((*(ushort *)((long)pppppppuVar14 + 0x16) & 0x1000) != 0) {
        uVar11 = 0x15 - *(byte *)((long)pppppppuVar14 + 0x15);
      }
      if (uVar1 == uVar11) {
        pppppppuVar7 = local_70;
        if ((uVar10 & 0x1000) != 0) {
          pppppppuVar7 = (uint *******)&local_78;
        }
        pppppppuVar2 = (uint *******)pppppppuVar14[1];
        if ((*(ushort *)((long)pppppppuVar14 + 0x16) & 0x1000) != 0) {
          pppppppuVar2 = pppppppuVar14;
        }
        if (pppppppuVar7 == pppppppuVar2) goto LAB_71002ae000;
        iVar4 = memcmp(pppppppuVar7,pppppppuVar2,(ulong)uVar1);
        pppppppuVar8 = local_500;
        uVar5 = (uint)local_508;
        if (iVar4 == 0) goto LAB_71002ae000;
      }
      pppppppuVar14 = pppppppuVar14 + 6;
      if (pppppppuVar14 == pppppppuVar8 + (ulong)uVar5 * 6) goto LAB_71002ae000;
      uVar10 = local_68 >> 0x30;
      uVar11 = (uint)local_68._5_1_;
    } while( true );
  }
  goto LAB_71002ae018;
LAB_71002ae000:
  if ((pppppppuVar14 != pppppppuVar8 + (ulong)uVar5 * 6) &&
     ((*(byte *)((long)pppppppuVar14 + 0x2e) >> 4 & 1) != 0)) {
    ppppppuVar9 = pppppppuVar14[3];
    *(uint *******)(param_1 + 8) = ppppppuVar9;
    if (ppppppuVar9 != (uint ******)0x0) {
      uVar5 = FUN_71002ac940(param_1,param_2);
      plVar3 = local_4e8;
      goto joined_r0x0071002ae224;
    }
    local_70 = (uint *******)0x710442184c;
    local_68 = 0x405000000000000;
    local_78 = (uint *******)0x6;
    pppppppuVar14 = pppppppuVar8;
    if (uVar5 != 0) {
      uVar11 = 0;
      uVar10 = 0;
      local_78._0_4_ = 6;
      pppppppuVar7 = pppppppuVar8;
      do {
        uVar1 = (uint)local_78;
        if ((uVar10 & 0x1000) != 0) {
          uVar1 = 0x15 - uVar11;
        }
        uVar11 = *(uint *)pppppppuVar14;
        if ((*(ushort *)((long)pppppppuVar14 + 0x16) & 0x1000) != 0) {
          uVar11 = 0x15 - *(byte *)((long)pppppppuVar14 + 0x15);
        }
        if (uVar1 == uVar11) {
          pppppppuVar7 = local_70;
          if ((uVar10 & 0x1000) != 0) {
            pppppppuVar7 = (uint *******)&local_78;
          }
          pppppppuVar2 = (uint *******)pppppppuVar14[1];
          if ((*(ushort *)((long)pppppppuVar14 + 0x16) & 0x1000) != 0) {
            pppppppuVar2 = pppppppuVar14;
          }
          if (pppppppuVar7 == pppppppuVar2) break;
          iVar4 = memcmp(pppppppuVar7,pppppppuVar2,(ulong)uVar1);
          pppppppuVar8 = local_500;
          pppppppuVar7 = local_500;
          uVar5 = (uint)local_508;
          if (iVar4 == 0) break;
        }
        pppppppuVar14 = pppppppuVar14 + 6;
        if (pppppppuVar14 == pppppppuVar7 + (ulong)uVar5 * 6) break;
        uVar10 = local_68 >> 0x30;
        uVar11 = (uint)local_68._5_1_;
      } while( true );
    }
    if (pppppppuVar14 != pppppppuVar8 + (ulong)uVar5 * 6) {
      local_68 = 0x405000000000000;
      local_70 = (uint *******)0x7104442c14;
      local_78 = (uint *******)0x5;
      pppppppuVar8 = (uint *******)pppppppuVar14[4];
      uVar5 = *(uint *)(pppppppuVar14 + 3);
      if (uVar5 != 0) {
        uVar11 = 0;
        uVar10 = 0;
        local_78._0_4_ = 5;
        pppppppuVar7 = pppppppuVar8;
LAB_71002ae158:
        uVar1 = (uint)local_78;
        if ((uVar10 & 0x1000) != 0) {
          uVar1 = 0x15 - uVar11;
        }
        uVar11 = *(uint *)pppppppuVar7;
        if ((*(ushort *)((long)pppppppuVar7 + 0x16) & 0x1000) != 0) {
          uVar11 = 0x15 - *(byte *)((long)pppppppuVar7 + 0x15);
        }
        if (uVar1 != uVar11) {
LAB_71002ae1b8:
          pppppppuVar7 = pppppppuVar7 + 6;
          if (pppppppuVar7 == pppppppuVar8 + (ulong)uVar5 * 6) goto LAB_71002ae1ec;
          uVar10 = local_68 >> 0x30;
          uVar11 = (uint)local_68._5_1_;
          goto LAB_71002ae158;
        }
        pppppppuVar2 = local_70;
        if ((uVar10 & 0x1000) != 0) {
          pppppppuVar2 = (uint *******)&local_78;
        }
        __s2 = (uint *******)pppppppuVar7[1];
        if ((*(ushort *)((long)pppppppuVar7 + 0x16) & 0x1000) != 0) {
          __s2 = pppppppuVar7;
        }
        if (pppppppuVar2 == __s2) goto LAB_71002ae1ec;
        iVar4 = memcmp(pppppppuVar2,__s2,(ulong)uVar1);
        if (iVar4 != 0) {
          pppppppuVar8 = (uint *******)pppppppuVar14[4];
          uVar5 = *(uint *)(pppppppuVar14 + 3);
          goto LAB_71002ae1b8;
        }
        pppppppuVar8 = (uint *******)pppppppuVar14[4];
        uVar5 = *(uint *)(pppppppuVar14 + 3);
LAB_71002ae1ec:
        if ((pppppppuVar7 != pppppppuVar8 + (ulong)uVar5 * 6) &&
           ((*(ushort *)((long)pppppppuVar7 + 0x2e) >> 10 & 1) != 0)) {
          if ((*(ushort *)((long)pppppppuVar7 + 0x2e) >> 0xc & 1) == 0) {
            pppppppuVar7 = (uint *******)pppppppuVar7[4];
          }
          else {
            pppppppuVar7 = pppppppuVar7 + 3;
          }
          FUN_71001b3cb0(param_1 + 0x38,(char *)pppppppuVar7);
          uVar5 = 1;
          plVar3 = local_4e8;
          goto joined_r0x0071002ae224;
        }
      }
    }
  }
LAB_71002ae018:
  uVar5 = 0;
  plVar3 = local_4e8;
joined_r0x0071002ae224:
  local_4e8 = plVar3;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    while (lVar6 != 0) {
      if (plVar3[2] == lVar6) {
        *(undefined8 *)(lVar6 + 8) = 0;
        lVar6 = plVar3[4];
        goto joined_r0x0071002adfa8;
      }
      lVar13 = *(long *)(lVar6 + 0x10);
      FUN_71001b1870(lVar6);
      *plVar3 = lVar13;
      lVar6 = lVar13;
    }
    lVar6 = plVar3[4];
joined_r0x0071002adfa8:
    if (lVar6 != 0) {
      FUN_71001b1870(lVar6);
    }
    operator_delete((ulong)plVar3);
  }
  FUN_71001b1870(local_4d0);
  if (local_4d8 != 0) {
    FUN_71001b1870(local_4d8);
  }
  do {
    if (local_4a0 == (undefined8 *)0x0) {
joined_r0x0071002ade98:
      if (local_480 != 0) {
        FUN_71001b1870(local_480);
      }
      return uVar5 & 1;
    }
    if (local_490 == local_4a0) {
      local_4a0[1] = 0;
      goto joined_r0x0071002ade98;
    }
    puVar12 = (undefined8 *)local_4a0[2];
    FUN_71001b1870((long)local_4a0);
    local_4a0 = puVar12;
  } while( true );
}

