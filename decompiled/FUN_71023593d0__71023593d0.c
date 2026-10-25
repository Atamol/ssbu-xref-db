// addr:      71023593d0
// offset:    0x23593d0
// name:      FUN_71023593d0
// mangled:   
// signature: undefined __cdecl FUN_71023593d0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71023593d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 local_b0;
  byte local_a8 [64];
  undefined8 local_68;
  byte local_60 [64];
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (((*(long *)(lVar2 + 0x60) != 0) || (*(long *)(lVar2 + 0x30) != *(long *)(lVar2 + 0x38))) ||
     (*(long *)(*(long *)(param_1 + 0x70) + 0x10) != 0)) {
    return;
  }
  lVar2 = *(long *)(param_2 + 8);
  for (uVar5 = 0; "MenuSequenceScene"[uVar5] != 0; uVar5 = uVar5 + 2) {
    bVar1 = "MenuSequenceScene"[uVar5 + 1];
    local_a8[uVar5] = "MenuSequenceScene"[uVar5];
    if (bVar1 == 0) {
      uVar5 = uVar5 + 1;
      break;
    }
    local_a8[uVar5 + 1] = bVar1;
  }
  uVar3 = 0x811c9dc5;
  local_a8[uVar5 & 0xffffffff] = 0;
  uVar4 = (uint)local_a8[0];
  uVar6 = uVar3;
  if (local_a8[0] != 0) {
    pbVar7 = local_a8;
    do {
      pbVar7 = pbVar7 + 1;
      uVar6 = uVar6 * 0x89 ^ uVar4;
      uVar4 = (uint)*pbVar7;
    } while (uVar4 != 0);
  }
  local_b0 = CONCAT44((int)uVar5,uVar6);
  lVar8 = *(long *)(lVar2 + 0x38);
  if (lVar8 == 0) {
    local_60[0] = 0;
    local_68 = (long ***)0x0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      pbVar7 = (byte *)(lVar8 + 0x10 + uVar5);
      bVar1 = *pbVar7;
      if (bVar1 == 0) break;
      local_60[uVar5] = bVar1;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar1 = pbVar7[1];
      if (bVar1 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_60[uVar5 + 1] = bVar1;
      uVar5 = uVar5 + 2;
    }
    local_60[uVar5 & 0xffffffff] = 0;
    uVar6 = (uint)local_60[0];
    local_68 = (long ***)(uVar5 << 0x20);
    if (local_60[0] != 0) {
      pbVar7 = local_60;
      do {
        pbVar7 = pbVar7 + 1;
        uVar3 = uVar3 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar7;
      } while (uVar6 != 0);
    }
    local_68 = (long ***)CONCAT44((int)uVar5,uVar3);
  }
  FUN_7103726240(*(long **)(lVar2 + 0x20),&local_b0,(long ****)&local_68,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_7103726af0(*(long *)(param_2 + 8),0);
  return;
}

