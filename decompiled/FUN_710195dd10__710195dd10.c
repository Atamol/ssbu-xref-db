// addr:      710195dd10
// offset:    0x195dd10
// name:      FUN_710195dd10
// mangled:   
// signature: undefined __cdecl FUN_710195dd10(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710195dd10(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined1 uVar15;
  byte ***local_d8;
  ulong local_d0;
  undefined1 local_c8;
  ulong local_c0;
  byte local_b8 [64];
  undefined8 local_78;
  byte local_70 [64];
  byte *pbVar11;
  
  if (*(int *)(param_1 + 0x13c) == 0) {
    FUN_71032e5bf0(DAT_710532f7c8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar5 = *(long *)(*(long *)(param_1 + 0x150) + 0x80);
    FUN_7101df6680(*(long *)(lVar5 + 0x20),6,param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(lVar5 + 300) < 0x13) {
      *(undefined4 *)(lVar5 + (long)(int)*(uint *)(lVar5 + 300) * 4 + 0xe0) = 6;
      lVar5 = *(long *)(*(long *)(lVar5 + 0x28) + 0x80);
      if (*(int *)(lVar5 + 0xe0) == 5) {
        return;
      }
      *(undefined8 *)(lVar5 + 0xe0) = 0xffffffff;
      *(undefined4 *)(lVar5 + 0xe8) = 0xffffffff;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      *(undefined8 *)(lVar5 + 0x18) = 0;
      *(undefined4 *)(lVar5 + 0xdc) = 0;
      *(undefined8 *)(lVar5 + 0xd4) = 0;
      *(undefined8 *)(lVar5 + 0xcc) = 0;
      *(undefined8 *)(lVar5 + 0xc4) = 0;
      *(undefined8 *)(lVar5 + 0xbc) = 0;
      *(undefined8 *)(lVar5 + 0xb4) = 0;
      *(undefined8 *)(lVar5 + 0xac) = 0;
      *(undefined8 *)(lVar5 + 0xa4) = 0;
      *(undefined8 *)(lVar5 + 0x9c) = 0;
      *(undefined8 *)(lVar5 + 0x94) = 0;
      *(undefined1 *)(lVar5 + 0xec) = 0;
      *(undefined4 *)(lVar5 + 0x90) = 4;
      return;
    }
    goto LAB_710195e158;
  }
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) == '\0') {
    return;
  }
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) != '\0') {
    return;
  }
  FUN_7101af86a0(*(long *)(param_1 + 0x178),1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71032eb270(*(long *)(DAT_710532f7f0 + 8),0,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar2 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar2 == 0) {
    plVar4 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c0 = local_c0 & 0xffffffff00000000;
        local_78 = (long ***)&SUB_00000018;
        param_3 = (long ****)&local_78;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
        if (((uVar9 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,
                                            param_8), plVar4 != (long *)0x0)) goto LAB_710195de90;
      }
      plVar4 = (long *)0x0;
    }
LAB_710195de90:
    *(undefined1 *)(plVar4 + 2) = 0;
    plVar4[1] = (long)plVar1;
    lVar5 = *plVar1;
    *plVar4 = lVar5;
    *(long **)(lVar5 + 8) = plVar4;
    *plVar1 = (long)plVar4;
    *plVar2 = *plVar2 + 1;
  }
  else {
    *(byte *)(*plVar1 + 0x10) = *(byte *)(*plVar1 + 0x10) & 1;
  }
  lVar5 = *(long *)(*DAT_7105329f98 + 0x40);
  puVar6 = (undefined8 *)(lVar5 + 0x90);
  puVar8 = puVar6;
  if ((((*(char *)(*(long *)*puVar6 + 0xf1) != '\0') ||
       (puVar8 = (undefined8 *)(lVar5 + 0x98), *(char *)(*(long *)*puVar8 + 0xf1) != '\0')) ||
      (puVar8 = (undefined8 *)(lVar5 + 0xa0), *(char *)(*(long *)*puVar8 + 0xf1) != '\0')) ||
     ((puVar8 = (undefined8 *)(lVar5 + 0xa8), *(char *)(*(long *)*puVar8 + 0xf1) != '\0' ||
      (puVar8 = (undefined8 *)(lVar5 + 0xb0), *(char *)(*(long *)*puVar8 + 0xf1) != '\0')))) {
    uVar9 = (long)puVar8 - (long)puVar6 >> 3;
    if (4 < uVar9) {
LAB_710195e158:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = **(long **)(lVar5 + uVar9 * 8 + 0x90);
    if (*(char *)(lVar5 + 0xf1) == '\0') {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined1 *)(lVar5 + 0xf3);
    }
    local_d8 = (byte ***)&PTR_FUN_71050a6230;
    FUN_71003a4ca0((uint *)&local_78,"UI_SHOP_ADVENTURE_%d",
                   (ulong)(((uint)((long)puVar8 - (long)puVar6) >> 3 & 0xff) + 1),param_3,param_4,
                   param_5,param_6,param_7,param_8);
    if (local_78._4_4_ == 0) {
      uVar9 = 0;
    }
    else {
      uVar12 = 0xffffffff;
      pbVar11 = local_70;
      do {
        pbVar10 = pbVar11 + 1;
        bVar3 = *pbVar11;
        uVar14 = bVar3 + 0x20;
        if (0x19 < bVar3 - 0x41) {
          uVar14 = (uint)bVar3;
        }
        uVar12 = (&DAT_7104754084)[(uVar14 ^ uVar12) & 0xff] ^ uVar12 >> 8;
        pbVar11 = pbVar10;
      } while (pbVar10 < local_70 + local_78._4_4_);
      uVar9 = (ulong)~uVar12;
    }
    local_d0 = FUN_710329eed0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x368),
                              uVar9 | ((long)(int)local_78._4_4_ & 0xffU) << 0x20);
    lVar5 = *(long *)(param_2 + 8);
    for (uVar9 = 0; "SpiritsCampaignShopScene"[uVar9] != 0; uVar9 = uVar9 + 2) {
      bVar3 = "SpiritsCampaignShopScene"[uVar9 + 1];
      local_b8[uVar9] = "SpiritsCampaignShopScene"[uVar9];
      if (bVar3 == 0) {
        uVar9 = uVar9 + 1;
        break;
      }
      local_b8[uVar9 + 1] = bVar3;
    }
    uVar14 = 0x811c9dc5;
    local_b8[uVar9 & 0xffffffff] = 0;
    uVar7 = (uint)local_b8[0];
    uVar12 = uVar14;
    if (local_b8[0] != 0) {
      pbVar11 = local_b8;
      do {
        pbVar11 = pbVar11 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar11;
      } while (uVar7 != 0);
    }
    local_c0 = CONCAT44((int)uVar9,uVar12);
    lVar13 = *(long *)(lVar5 + 0x38);
    if (lVar13 == 0) {
      local_70[0] = 0;
      local_78 = (long ***)0x0;
    }
    else {
      uVar9 = 0;
      while( true ) {
        pbVar11 = (byte *)(lVar13 + 0x10 + uVar9);
        bVar3 = *pbVar11;
        if (bVar3 == 0) break;
        local_70[uVar9] = bVar3;
        if (0x3e < (int)uVar9 + 1U) {
          uVar9 = (ulong)((int)uVar9 + 1);
          break;
        }
        bVar3 = pbVar11[1];
        if (bVar3 == 0) {
          uVar9 = uVar9 + 1;
          break;
        }
        local_70[uVar9 + 1] = bVar3;
        uVar9 = uVar9 + 2;
      }
      local_70[uVar9 & 0xffffffff] = 0;
      uVar12 = (uint)local_70[0];
      local_78 = (long ***)(uVar9 << 0x20);
      if (local_70[0] != 0) {
        pbVar11 = local_70;
        do {
          pbVar11 = pbVar11 + 1;
          uVar14 = uVar14 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar11;
        } while (uVar12 != 0);
      }
      local_78 = (long ***)CONCAT44((int)uVar9,uVar14);
    }
    local_c8 = uVar15;
    FUN_7103726240(*(long **)(lVar5 + 0x20),&local_c0,(long ****)&local_78,&local_d8,param_5,param_6
                   ,param_7,param_8);
  }
  FUN_7103726af0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 0x1a0));
  return;
}

