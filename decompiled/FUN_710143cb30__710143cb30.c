// addr:      710143cb30
// offset:    0x143cb30
// name:      FUN_710143cb30
// mangled:   
// signature: undefined __cdecl FUN_710143cb30(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710143cb30(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 local_2e0;
  uint uStack_2dc;
  undefined4 local_2d8;
  byte local_2d4 [260];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 *local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  byte local_174 [260];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 *local_30;
  undefined1 local_28;
  
  plVar1 = DAT_710593b218;
  if (*(int *)(param_1 + 0xfc) == 0) {
    local_180 = 4;
    local_28 = 1;
    local_174[0] = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_30 = (undefined4 *)0x0;
    local_38 = 0;
    local_40 = 0;
    for (uVar5 = 0; "save:/save_data/replay"[uVar5] != 0; uVar5 = uVar5 + 2) {
      bVar3 = "save:/save_data/replay"[uVar5 + 1];
      local_174[uVar5] = "save:/save_data/replay"[uVar5];
      if (bVar3 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_174[uVar5 + 1] = bVar3;
    }
    uVar2 = 0x811c9dc5;
    local_174[uVar5 & 0xffffffff] = 0;
    local_17c = uVar5 << 0x20;
    uVar8 = (uint)local_174[0];
    uVar4 = uVar2;
    if (uVar8 != 0) {
      pbVar6 = local_174;
      do {
        pbVar6 = pbVar6 + 1;
        uVar4 = uVar4 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar6;
      } while (uVar8 != 0);
    }
    local_17c = CONCAT44((int)uVar5,uVar4);
    local_30 = (undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x11c) = 0;
    if (local_174[0] == 0) {
      uVar5 = 0;
    }
    else {
      uVar7 = 0;
      uVar5 = 0x103;
      bVar3 = local_174[0];
      do {
        local_2d4[uVar7] = bVar3;
        if (0x102 < (int)uVar7 + 1U) goto LAB_710143cc94;
        bVar3 = local_174[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (bVar3 != 0);
      uVar5 = uVar7 & 0xffffffff;
    }
LAB_710143cc94:
    local_2d4[uVar5] = 0;
    uVar4 = (uint)local_2d4[0];
    local_2d8 = (undefined4)uVar5;
    if (local_2d4[0] != 0) {
      pbVar6 = local_2d4;
      do {
        pbVar6 = pbVar6 + 1;
        uVar2 = uVar2 * 0x89 ^ uVar4;
        uVar4 = (uint)*pbVar6;
      } while (uVar4 != 0);
    }
    _local_2e0 = CONCAT44(uVar2,4);
    local_1c8 = local_68;
    local_1d0 = local_70;
    local_1a8 = local_48;
    local_1b0 = local_50;
    local_1b8 = local_58;
    local_1c0 = local_60;
    local_188 = local_28;
    local_190 = local_30;
    local_198 = local_38;
    local_1a0 = local_40;
    FUN_71037222b0(*plVar1,&local_2e0,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (*(int *)(param_1 + 0x11c) == 1) {
    if (0x12 < *(uint *)(param_1 + 0xf4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 3;
  }
  return;
}

