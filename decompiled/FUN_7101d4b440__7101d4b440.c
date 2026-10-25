// addr:      7101d4b440
// offset:    0x1d4b440
// name:      FUN_7101d4b440
// mangled:   
// signature: undefined __cdecl FUN_7101d4b440(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d4b440(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_88;
  byte local_80 [64];
  
  if ((*(long *)(param_1 + 0x1f8) != 0) && (*(long *)(param_1 + 0x200) != 0)) {
    local_80[0] = 0;
    local_88 = 0;
    lVar8 = *(long *)(DAT_710532f730 + 8);
    if (*(int *)(param_1 + 0x2e4) == 0) {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x268) + (long)param_2 * 8);
      FUN_71032a00e0((uint *)&local_d0,lVar8 + 0x300,uVar3,param_4,param_5,param_6,param_7,param_8);
      for (uVar4 = 0; *(byte *)((long)&local_c8 + uVar4) != 0; uVar4 = uVar4 + 2) {
        local_80[uVar4] = *(byte *)((long)&local_c8 + uVar4);
        if (0x3e < (int)uVar4 + 1U) {
          uVar4 = (ulong)((int)uVar4 + 1);
          break;
        }
        bVar1 = *(byte *)((long)&local_c8 + uVar4 + 1);
        if (bVar1 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_80[uVar4 + 1] = bVar1;
      }
      local_80[uVar4 & 0xffffffff] = 0;
      uVar7 = (uint)local_80[0];
      uVar6 = 0x811c9dc5;
      local_88._4_4_ = (int)uVar4;
      if (local_80[0] != 0) {
        pbVar5 = local_80;
        do {
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar5;
        } while (uVar7 != 0);
      }
    }
    else {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x280) + (long)param_2 * 8);
      FUN_71032a00e0((uint *)&local_d0,lVar8 + 0x300,uVar3,param_4,param_5,param_6,param_7,param_8);
      for (uVar4 = 0; *(byte *)((long)&local_c8 + uVar4) != 0; uVar4 = uVar4 + 2) {
        local_80[uVar4] = *(byte *)((long)&local_c8 + uVar4);
        if (0x3e < (int)uVar4 + 1U) {
          uVar4 = (ulong)((int)uVar4 + 1);
          break;
        }
        bVar1 = *(byte *)((long)&local_c8 + uVar4 + 1);
        if (bVar1 == 0) {
          uVar4 = uVar4 + 1;
          break;
        }
        local_80[uVar4 + 1] = bVar1;
      }
      local_80[uVar4 & 0xffffffff] = 0;
      uVar7 = (uint)local_80[0];
      uVar6 = 0x811c9dc5;
      local_88._4_4_ = (int)uVar4;
      if (local_80[0] != 0) {
        pbVar5 = local_80;
        do {
          pbVar5 = pbVar5 + 1;
          uVar6 = uVar6 * 0x89 ^ uVar7;
          uVar7 = (uint)*pbVar5;
        } while (uVar7 != 0);
      }
    }
    local_88 = CONCAT44(local_88._4_4_,uVar6);
    if (*(int *)(param_1 + 0x2e4) == 0) {
      uVar4 = FUN_710329f140(*(long *)(lVar8 + 0x308),
                             *(ulong *)(*(long *)(param_1 + 0x268) + (long)param_2 * 8));
      uVar6 = (uint)uVar4;
      bVar1 = *(byte *)(param_1 + *(int *)(*(long *)(param_1 + 0x1f8) + 0x254) + 0x2d1);
    }
    else {
      uVar4 = FUN_710329f140(*(long *)(lVar8 + 0x308),
                             *(ulong *)(*(long *)(param_1 + 0x280) + (long)param_2 * 8));
      uVar6 = (uint)uVar4;
      bVar1 = *(byte *)(param_1 + *(int *)(*(long *)(param_1 + 0x200) + 0x254) + 0x2d5);
    }
    if (uVar6 == bVar1) {
      pcVar2 = "current_on";
    }
    else {
      pcVar2 = "current_off";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),(long)pcVar2);
    FUN_7103776910(&local_d0,param_3,(long ****)"set_txt_title",uVar3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_d0,(char *)local_80,uVar3,param_4,param_5,param_6,param_7,param_8);
    uVar4 = local_c8;
    local_d0 = &PTR_FUN_710523d9a8;
    local_c8 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
  }
  return;
}

