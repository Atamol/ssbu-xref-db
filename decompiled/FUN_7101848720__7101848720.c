// addr:      7101848720
// offset:    0x1848720
// name:      FUN_7101848720
// mangled:   
// signature: undefined __cdecl FUN_7101848720(long param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101848720(long param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long extraout_x1;
  byte ****ppppbVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte ***local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined8 local_b0;
  byte local_a8 [64];
  undefined8 local_68;
  byte local_60 [64];
  
  if (*(int *)(param_1 + 0xd4) != 0) {
    return;
  }
  ppppbVar2 = &local_c0;
  lVar3 = param_2;
  if (*(long *)(param_1 + 0x248) != 0) {
    local_b8 = *(undefined1 *)(*(long *)(param_1 + 0x248) + 0x10);
    local_c0 = (byte ***)&PTR_FUN_71050a6088;
    local_b7 = 1;
    lVar3 = *(long *)(param_2 + 8);
    for (uVar6 = 0; "SpiritsCampaignSearchScene"[uVar6] != 0; uVar6 = uVar6 + 2) {
      bVar1 = "SpiritsCampaignSearchScene"[uVar6 + 1];
      local_a8[uVar6] = "SpiritsCampaignSearchScene"[uVar6];
      if (bVar1 == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_a8[uVar6 + 1] = bVar1;
    }
    uVar4 = 0x811c9dc5;
    local_a8[uVar6 & 0xffffffff] = 0;
    uVar5 = (uint)local_a8[0];
    uVar7 = uVar4;
    if (local_a8[0] != 0) {
      pbVar8 = local_a8;
      do {
        pbVar8 = pbVar8 + 1;
        uVar7 = uVar7 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar8;
      } while (uVar5 != 0);
    }
    local_b0 = CONCAT44((int)uVar6,uVar7);
    lVar9 = *(long *)(lVar3 + 0x38);
    if (lVar9 == 0) {
      local_60[0] = 0;
      local_68 = (long ********)0x0;
    }
    else {
      uVar6 = 0;
      while( true ) {
        pbVar8 = (byte *)(lVar9 + 0x10 + uVar6);
        bVar1 = *pbVar8;
        if (bVar1 == 0) break;
        local_60[uVar6] = bVar1;
        if (0x3e < (int)uVar6 + 1U) {
          uVar6 = (ulong)((int)uVar6 + 1);
          break;
        }
        bVar1 = pbVar8[1];
        if (bVar1 == 0) {
          uVar6 = uVar6 + 1;
          break;
        }
        local_60[uVar6 + 1] = bVar1;
        uVar6 = uVar6 + 2;
      }
      local_60[uVar6 & 0xffffffff] = 0;
      uVar7 = (uint)local_60[0];
      local_68 = (long ********)(uVar6 << 0x20);
      if (local_60[0] != 0) {
        pbVar8 = local_60;
        do {
          pbVar8 = pbVar8 + 1;
          uVar4 = uVar4 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar8;
        } while (uVar7 != 0);
      }
      local_68 = (long ********)CONCAT44((int)uVar6,uVar4);
    }
    param_3 = (long *********)&local_68;
    FUN_7103726240(*(long **)(lVar3 + 0x20),&local_b0,(long ****)param_3,&local_c0,param_5,param_6,
                   param_7,param_8);
    lVar3 = extraout_x1;
    param_4 = ppppbVar2;
  }
  FUN_7103386c90((long *)(param_1 + 0x240),lVar3,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103726af0(*(long *)(param_2 + 8),*(undefined4 *)(param_1 + 0xe0));
  return;
}

