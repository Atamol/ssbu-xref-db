// addr:      7101953d40
// offset:    0x1953d40
// name:      FUN_7101953d40
// mangled:   
// signature: undefined __cdecl FUN_7101953d40(long param_1, ulong param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101953d40(long param_1,ulong param_2,undefined **param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong extraout_x1;
  ulong extraout_x1_00;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  byte ***local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  byte local_b8 [64];
  undefined8 local_78;
  byte local_70 [64];
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
       (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
      lVar12 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xc0) + 0x80);
      if (*(int *)(lVar12 + 8) != -1) {
        puVar11 = *(undefined8 **)(lVar12 + 0x18);
        *(undefined4 *)(lVar12 + 8) = 0xffffffff;
        uVar5 = param_2;
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          FUN_7103375760(puVar11);
          FUN_710392eb40((ulong)puVar11);
          uVar5 = extraout_x1;
        }
        puVar11 = *(undefined8 **)(lVar12 + 0x10);
        if (puVar11 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar12 + 0x10) = 0;
          puVar13 = (undefined8 *)*puVar11;
          *puVar11 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            FUN_7103773770(puVar13,uVar5,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
            ;
            FUN_710392eb40((ulong)puVar13);
          }
          FUN_710392eb40((ulong)puVar11);
        }
      }
      FUN_7103726af0(*(long *)(param_2 + 8),1);
      if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar3 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
      if (uVar3 != 0xffffffff) {
        puVar11 = &DAT_7105339830;
        if ((((9 < uVar3) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
            (puVar11 = (undefined8 *)(&DAT_7105339860)[(int)uVar3], puVar11 != (undefined8 *)0x0))
           && (uVar6 = *(int *)(puVar11[2] + 0x9c) - 1, uVar6 < 7)) {
          DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar6 * 4);
        }
        DAT_7105307b68._0_4_ = uVar3;
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
  lVar12 = *(long *)(*(long *)(param_1 + 0xd0) + 0x80);
  uVar5 = param_2;
  if (*(int *)(lVar12 + 0x204) != 1) goto LAB_71019542e4;
  cVar1 = *(char *)(lVar12 + 0x20c);
  bVar2 = *(byte *)(lVar12 + 0x210);
  uVar5 = (ulong)bVar2;
  if (cVar1 == '\x02') {
    local_d8 = (byte ***)&PTR_FUN_71050a6088;
    local_d0._0_2_ = CONCAT11(1,bVar2);
    lVar12 = *(long *)(param_2 + 8);
    for (uVar5 = 0; "SpiritsCampaignSearchScene"[uVar5] != 0; uVar5 = uVar5 + 2) {
      bVar2 = "SpiritsCampaignSearchScene"[uVar5 + 1];
      local_b8[uVar5] = "SpiritsCampaignSearchScene"[uVar5];
      if (bVar2 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_b8[uVar5 + 1] = bVar2;
    }
    uVar7 = 0x811c9dc5;
    uVar6 = 0x811c9dc5;
    local_b8[uVar5 & 0xffffffff] = 0;
    uVar8 = (uint)local_b8[0];
    uVar3 = uVar7;
    if (local_b8[0] != 0) {
      pbVar9 = local_b8;
      do {
        pbVar9 = pbVar9 + 1;
        uVar3 = uVar3 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar9;
      } while (uVar8 != 0);
    }
    local_c0 = CONCAT44((int)uVar5,uVar3);
    lVar10 = *(long *)(lVar12 + 0x38);
    if (lVar10 != 0) {
      uVar5 = 0;
      while( true ) {
        pbVar9 = (byte *)(lVar10 + 0x10 + uVar5);
        bVar2 = *pbVar9;
        if (bVar2 == 0) break;
        local_70[uVar5] = bVar2;
        if (0x3e < (int)uVar5 + 1U) {
          uVar5 = (ulong)((int)uVar5 + 1);
          break;
        }
        bVar2 = pbVar9[1];
        if (bVar2 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        local_70[uVar5 + 1] = bVar2;
        uVar5 = uVar5 + 2;
      }
      local_70[uVar5 & 0xffffffff] = 0;
      uVar3 = (uint)local_70[0];
      local_78._0_4_ = 0;
      local_78._4_4_ = (int)uVar5;
      if (local_70[0] != 0) {
        pbVar9 = local_70;
        uVar6 = uVar7;
        do {
          pbVar9 = pbVar9 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar3;
          uVar3 = (uint)*pbVar9;
        } while (uVar3 != 0);
      }
      goto LAB_71019542cc;
    }
LAB_7101954210:
    local_70[0] = 0;
    local_78 = (long ***)0x0;
  }
  else {
    if (cVar1 == '\x01') {
      local_d0 = FUN_71032a3bd0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208),(uint)bVar2);
      local_d8 = (byte ***)&PTR_FUN_71050a5f98;
      local_c8 = 1;
      lVar12 = *(long *)(param_2 + 8);
      for (uVar5 = 0; "SpiritsCampaignSchoolScene"[uVar5] != 0; uVar5 = uVar5 + 2) {
        bVar2 = "SpiritsCampaignSchoolScene"[uVar5 + 1];
        local_b8[uVar5] = "SpiritsCampaignSchoolScene"[uVar5];
        if (bVar2 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        local_b8[uVar5 + 1] = bVar2;
      }
      uVar6 = 0x811c9dc5;
      local_b8[uVar5 & 0xffffffff] = 0;
      uVar7 = (uint)local_b8[0];
      uVar3 = uVar6;
      if (local_b8[0] != 0) {
        pbVar9 = local_b8;
        do {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar9;
        } while (uVar7 != 0);
      }
      local_c0 = CONCAT44((int)uVar5,uVar3);
      lVar10 = *(long *)(lVar12 + 0x38);
      if (lVar10 == 0) goto LAB_7101954210;
      uVar5 = 0;
      while( true ) {
        pbVar9 = (byte *)(lVar10 + 0x10 + uVar5);
        bVar2 = *pbVar9;
        if (bVar2 == 0) break;
        local_70[uVar5] = bVar2;
        if (0x3e < (int)uVar5 + 1U) {
          uVar5 = (ulong)((int)uVar5 + 1);
          break;
        }
        bVar2 = pbVar9[1];
        if (bVar2 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        local_70[uVar5 + 1] = bVar2;
        uVar5 = uVar5 + 2;
      }
      local_70[uVar5 & 0xffffffff] = 0;
      uVar3 = (uint)local_70[0];
      local_78._0_4_ = 0;
      local_78._4_4_ = (int)uVar5;
      if (local_70[0] != 0) {
        pbVar9 = local_70;
        do {
          pbVar9 = pbVar9 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar3;
          uVar3 = (uint)*pbVar9;
        } while (uVar3 != 0);
      }
    }
    else {
      if (cVar1 != '\0') goto LAB_71019542e4;
      local_d8 = (byte ***)&PTR_FUN_71050a5c38;
      local_d0 = CONCAT71(local_d0._1_7_,1);
      lVar12 = *(long *)(param_2 + 8);
      for (uVar5 = 0; "SpiritsCampaignGymScene"[uVar5] != 0; uVar5 = uVar5 + 2) {
        bVar2 = "SpiritsCampaignGymScene"[uVar5 + 1];
        local_b8[uVar5] = "SpiritsCampaignGymScene"[uVar5];
        if (bVar2 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        local_b8[uVar5 + 1] = bVar2;
      }
      uVar6 = 0x811c9dc5;
      local_b8[uVar5 & 0xffffffff] = 0;
      uVar7 = (uint)local_b8[0];
      uVar3 = uVar6;
      if (local_b8[0] != 0) {
        pbVar9 = local_b8;
        do {
          pbVar9 = pbVar9 + 1;
          uVar3 = uVar3 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar9;
        } while (uVar7 != 0);
      }
      local_c0 = CONCAT44((int)uVar5,uVar3);
      lVar10 = *(long *)(lVar12 + 0x38);
      if (lVar10 == 0) goto LAB_7101954210;
      uVar5 = 0;
      while( true ) {
        pbVar9 = (byte *)(lVar10 + 0x10 + uVar5);
        bVar2 = *pbVar9;
        if (bVar2 == 0) break;
        local_70[uVar5] = bVar2;
        if (0x3e < (int)uVar5 + 1U) {
          uVar5 = (ulong)((int)uVar5 + 1);
          break;
        }
        bVar2 = pbVar9[1];
        if (bVar2 == 0) {
          uVar5 = uVar5 + 1;
          break;
        }
        local_70[uVar5 + 1] = bVar2;
        uVar5 = uVar5 + 2;
      }
      local_70[uVar5 & 0xffffffff] = 0;
      uVar3 = (uint)local_70[0];
      local_78._0_4_ = 0;
      local_78._4_4_ = (int)uVar5;
      if (local_70[0] != 0) {
        pbVar9 = local_70;
        do {
          pbVar9 = pbVar9 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar3;
          uVar3 = (uint)*pbVar9;
        } while (uVar3 != 0);
      }
    }
LAB_71019542cc:
    local_78 = (long ***)CONCAT44(local_78._4_4_,uVar6);
  }
  param_3 = (undefined **)&local_78;
  param_4 = &local_d8;
  FUN_7103726240(*(long **)(lVar12 + 0x20),&local_c0,(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar5 = extraout_x1_00;
LAB_71019542e4:
  FUN_71032e5bf0(DAT_710532f7c8,uVar5,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

