// addr:      7101964290
// offset:    0x1964290
// name:      FUN_7101964290
// mangled:   
// signature: undefined __cdecl FUN_7101964290(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101964290(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long extraout_x1;
  ulong uVar4;
  long extraout_x1_00;
  uint uVar5;
  byte *pbVar6;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  byte ***local_d8;
  ulong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  byte local_b8 [64];
  undefined8 local_78;
  byte local_70 [64];
  byte *pbVar7;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0xd0) + 0x80);
    if (*(int *)(lVar11 + 0x16c) == 1) {
      local_d8 = (byte ***)&PTR_FUN_71050a6230;
      FUN_71003a4ca0((uint *)&local_78,"UI_SHOP_ADVENTURE_%d",(ulong)(*(byte *)(lVar11 + 0x170) + 1)
                     ,param_3,param_4,param_5,param_6,param_7,param_8);
      if (local_78._4_4_ == 0) {
        uVar4 = 0;
      }
      else {
        uVar2 = 0xffffffff;
        pbVar7 = local_70;
        do {
          pbVar6 = pbVar7 + 1;
          bVar1 = *pbVar7;
          uVar9 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar9 = (uint)bVar1;
          }
          uVar2 = (&DAT_7104754084)[(uVar9 ^ uVar2) & 0xff] ^ uVar2 >> 8;
          pbVar7 = pbVar6;
        } while (pbVar6 < local_70 + local_78._4_4_);
        uVar4 = (ulong)~uVar2;
      }
      local_d0 = FUN_710329eed0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x368),
                                uVar4 | ((long)(int)local_78._4_4_ & 0xffU) << 0x20);
      local_c8 = 1;
      lVar11 = *(long *)(param_2 + 8);
      for (uVar4 = 0; "SpiritsCampaignShopScene"[uVar4] != 0; uVar4 = uVar4 + 2) {
        bVar1 = "SpiritsCampaignShopScene"[uVar4 + 1];
        local_b8[uVar4] = "SpiritsCampaignShopScene"[uVar4];
        if (bVar1 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_b8[uVar4 + 1] = bVar1;
      }
      uVar9 = 0x811c9dc5;
      local_b8[uVar4 & 0xffffffff] = 0;
      uVar5 = (uint)local_b8[0];
      uVar2 = uVar9;
      if (local_b8[0] != 0) {
        pbVar7 = local_b8;
        do {
          pbVar7 = pbVar7 + 1;
          uVar2 = uVar2 * 0x89 ^ uVar5;
          uVar5 = (uint)*pbVar7;
        } while (uVar5 != 0);
      }
      local_c0 = CONCAT44((int)uVar4,uVar2);
      lVar8 = *(long *)(lVar11 + 0x38);
      if (lVar8 == 0) {
        local_70[0] = 0;
        local_78 = (long ***)0x0;
      }
      else {
        uVar4 = 0;
        while( true ) {
          pbVar7 = (byte *)(lVar8 + 0x10 + uVar4);
          bVar1 = *pbVar7;
          if (bVar1 == 0) break;
          local_70[uVar4] = bVar1;
          if (0x3e < (int)uVar4 + 1U) {
            uVar4 = (ulong)((int)uVar4 + 1);
            break;
          }
          bVar1 = pbVar7[1];
          if (bVar1 == 0) {
            uVar4 = uVar4 + 1;
            break;
          }
          local_70[uVar4 + 1] = bVar1;
          uVar4 = uVar4 + 2;
        }
        local_70[uVar4 & 0xffffffff] = 0;
        uVar2 = (uint)local_70[0];
        local_78 = (long ***)(uVar4 << 0x20);
        if (local_70[0] != 0) {
          pbVar7 = local_70;
          do {
            pbVar7 = pbVar7 + 1;
            uVar9 = uVar9 * 0x89 ^ uVar2;
            uVar2 = (uint)*pbVar7;
          } while (uVar2 != 0);
        }
        local_78 = (long ***)CONCAT44((int)uVar4,uVar9);
      }
      param_3 = (undefined **)&local_78;
      param_4 = &local_d8;
      FUN_7103726240(*(long **)(lVar11 + 0x20),&local_c0,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      param_2 = extraout_x1_00;
    }
    FUN_71032e5bf0(DAT_710532f7c8,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                  );
  }
  else if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
          (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
    lVar11 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xc0) + 0x80);
    if (*(int *)(lVar11 + 8) != -1) {
      puVar10 = *(undefined8 **)(lVar11 + 0x18);
      *(undefined4 *)(lVar11 + 8) = 0xffffffff;
      lVar8 = param_2;
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        FUN_7103375760(puVar10);
        FUN_710392eb40((ulong)puVar10);
        lVar8 = extraout_x1;
      }
      puVar10 = *(undefined8 **)(lVar11 + 0x10);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        puVar12 = (undefined8 *)*puVar10;
        *puVar10 = 0;
        if (puVar12 != (undefined8 *)0x0) {
          FUN_7103773770(puVar12,lVar8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_710392eb40((ulong)puVar12);
        }
        FUN_710392eb40((ulong)puVar10);
      }
    }
    FUN_7103726af0(*(long *)(param_2 + 8),1);
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
    if (uVar2 != 0xffffffff) {
      puVar10 = &DAT_7105339830;
      if ((((9 < uVar2) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
          (puVar10 = (undefined8 *)(&DAT_7105339860)[(int)uVar2], puVar10 != (undefined8 *)0x0)) &&
         (uVar9 = *(int *)(puVar10[2] + 0x9c) - 1, uVar9 < 7)) {
        DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar9 * 4);
      }
      DAT_7105307b68._0_4_ = uVar2;
      if (DAT_710593ba90 != (long *)0x0) {
        *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
      }
      if (DAT_710532f7f0 != 0) {
        FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                       DAT_7105307b68._4_4_,(long ****)param_3,param_4,param_5,param_6,param_7,
                       param_8);
        return;
      }
    }
  }
  return;
}

