// addr:      710194b180
// offset:    0x194b180
// name:      FUN_710194b180
// mangled:   
// signature: undefined __cdecl FUN_710194b180(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710194b180(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  byte bVar2;
  byte ****ppppbVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long lVar11;
  byte ***local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  byte local_a8 [64];
  undefined8 local_68;
  byte local_60 [64];
  
  ppppbVar3 = &local_c0;
  FUN_7101e956e0((ushort *)(*(long *)(*(long *)(param_1 + 0x170) + 0x80) + 0x2b8));
  FUN_71037790a0(*(long *)(*(long *)(*(long *)(param_1 + 0x178) + 0x80) + 0x28),1,param_3,param_4,
                 param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x189) == '\0') {
    if ((*(char *)(param_1 + 0x1a2) == '\0') || (*(char *)(param_1 + 0x1a1) != '\0'))
    goto LAB_710194b444;
    local_c0 = (byte ***)&PTR_FUN_71050a6898;
    local_b8 = 1;
    lVar6 = *(long *)(param_2 + 8);
    for (uVar4 = 0; "SpiritsShopListScene"[uVar4] != 0; uVar4 = uVar4 + 2) {
      bVar2 = "SpiritsShopListScene"[uVar4 + 1];
      local_a8[uVar4] = "SpiritsShopListScene"[uVar4];
      if (bVar2 == 0) {
        uVar4 = uVar4 + 1;
        break;
      }
      local_a8[uVar4 + 1] = bVar2;
    }
    uVar7 = 0x811c9dc5;
    local_a8[uVar4 & 0xffffffff] = 0;
    uVar8 = (uint)local_a8[0];
    uVar9 = uVar7;
    if (local_a8[0] != 0) {
      pbVar10 = local_a8;
      do {
        pbVar10 = pbVar10 + 1;
        uVar9 = uVar9 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar10;
      } while (uVar8 != 0);
    }
    local_b0 = CONCAT44((int)uVar4,uVar9);
    lVar11 = *(long *)(lVar6 + 0x38);
    if (lVar11 == 0) {
      local_60[0] = 0;
      local_68 = (long ***)0x0;
    }
    else {
      uVar4 = 0;
      while( true ) {
        pbVar10 = (byte *)(lVar11 + 0x10 + uVar4);
        bVar2 = *pbVar10;
        if (bVar2 == 0) break;
        local_60[uVar4] = bVar2;
        if (0x3e < (int)uVar4 + 1U) {
          uVar4 = (ulong)((int)uVar4 + 1);
          break;
        }
        bVar2 = pbVar10[1];
        if (bVar2 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_60[uVar4 + 1] = bVar2;
        uVar4 = uVar4 + 2;
      }
      local_60[uVar4 & 0xffffffff] = 0;
      uVar9 = (uint)local_60[0];
      local_68 = (long ***)(uVar4 << 0x20);
      if (local_60[0] != 0) {
        pbVar10 = local_60;
        do {
          pbVar10 = pbVar10 + 1;
          uVar7 = uVar7 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar10;
        } while (uVar9 != 0);
      }
      local_68 = (long ***)CONCAT44((int)uVar4,uVar7);
    }
    plVar5 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar4 = (ulong)*(byte *)(*(long **)(param_1 + 400) + 1);
    if ((uVar4 < 5) &&
       (plVar5 = *(long **)(*(long *)(**(long **)(param_1 + 400) + 8) + uVar4 * 8 + 0x90),
       plVar5 != (long *)0x0)) {
      uVar1 = *(undefined1 *)(param_1 + 0x1a2);
      lVar6 = *plVar5;
      *(ushort *)(lVar6 + 0xf1) = (ushort)*(byte *)(param_1 + 0x188) << 8 | 1;
      *(undefined1 *)(lVar6 + 0xf3) = uVar1;
    }
    lVar6 = *(long *)(param_2 + 8);
    for (uVar4 = 0; "SpiritsReturnScene"[uVar4] != 0; uVar4 = uVar4 + 2) {
      bVar2 = "SpiritsReturnScene"[uVar4 + 1];
      local_a8[uVar4] = "SpiritsReturnScene"[uVar4];
      if (bVar2 == 0) {
        uVar4 = uVar4 + 1;
        break;
      }
      local_a8[uVar4 + 1] = bVar2;
    }
    uVar7 = 0x811c9dc5;
    local_a8[uVar4 & 0xffffffff] = 0;
    uVar8 = (uint)local_a8[0];
    uVar9 = uVar7;
    if (local_a8[0] != 0) {
      pbVar10 = local_a8;
      do {
        pbVar10 = pbVar10 + 1;
        uVar9 = uVar9 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar10;
      } while (uVar8 != 0);
    }
    local_b0 = CONCAT44((int)uVar4,uVar9);
    lVar11 = *(long *)(lVar6 + 0x38);
    if (lVar11 == 0) {
      local_60[0] = 0;
      local_68 = (long ***)0x0;
    }
    else {
      uVar4 = 0;
      while( true ) {
        pbVar10 = (byte *)(lVar11 + 0x10 + uVar4);
        bVar2 = *pbVar10;
        if (bVar2 == 0) break;
        local_60[uVar4] = bVar2;
        if (0x3e < (int)uVar4 + 1U) {
          uVar4 = (ulong)((int)uVar4 + 1);
          break;
        }
        bVar2 = pbVar10[1];
        if (bVar2 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_60[uVar4 + 1] = bVar2;
        uVar4 = uVar4 + 2;
      }
      local_60[uVar4 & 0xffffffff] = 0;
      uVar9 = (uint)local_60[0];
      local_68 = (long ***)(uVar4 << 0x20);
      if (local_60[0] != 0) {
        pbVar10 = local_60;
        do {
          pbVar10 = pbVar10 + 1;
          uVar7 = uVar7 * 0x89 ^ uVar9;
          uVar9 = (uint)*pbVar10;
        } while (uVar9 != 0);
      }
      local_68 = (long ***)CONCAT44((int)uVar4,uVar7);
    }
    plVar5 = *(long **)(lVar6 + 0x20);
    ppppbVar3 = (byte ****)0x0;
  }
  FUN_7103726240(plVar5,&local_b0,(long ****)&local_68,ppppbVar3,param_5,param_6,param_7,param_8);
LAB_710194b444:
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}

