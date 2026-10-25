// addr:      7101b4aba0
// offset:    0x1b4aba0
// name:      FUN_7101b4aba0
// mangled:   
// signature: undefined __cdecl FUN_7101b4aba0(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b4aba0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5e;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  
  iVar2 = (int)param_4;
  iVar1 = (int)param_3;
  local_70 = local_70 & 0xffffffffffffff00;
  local_78[0] = 0;
  local_78[1] = 0;
  switch(param_2) {
  case 0:
    local_68 = 0x705f65676174735f;
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_50 = 0x6c616d726f6e5f;
    local_78[1] = 0x27;
    local_78[0] = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar5 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    break;
  case 1:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_50 = 0x69727463656c655f;
    local_68 = 0x705f65676174735f;
    local_48 = 99;
    local_78[1] = 0x29;
    local_78[0] = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar5 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    break;
  case 2:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_50 = (ulong)local_50._5_3_ << 0x28;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_68 = 0x705f65676174735f;
    local_50 = CONCAT44(local_50._4_4_,0x796c665f);
    local_78[0] = 0x811c9dc5;
    local_78[1] = 0x24;
    uVar7 = 0x6d;
    pbVar5 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    break;
  case 3:
    local_68 = 0x705f65676174735f;
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_50 = 0x646e756f72675f;
    local_78[1] = 0x27;
    local_78[0] = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar5 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    break;
  case 4:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_50 = (ulong)local_50._5_3_ << 0x28;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_68 = 0x705f65676174735f;
    local_50 = CONCAT44(local_50._4_4_,0x6563695f);
    local_78[0] = 0x811c9dc5;
    local_78[1] = 0x24;
    uVar7 = 0x6d;
    pbVar5 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (uVar7 != 0);
    break;
  default:
    goto switchD_7101b4abe8_default;
  }
  local_52 = 0x6570;
  local_56 = 0x79745f6d;
  local_5e = 0x7569646174735f65;
  local_60 = 0x6b6f;
  local_68 = 0x705f65676174735f;
  local_70 = 0x6f666e695f6c656d;
switchD_7101b4abe8_default:
  uVar4 = param_5;
  FUN_710377a120(param_1 + 0x38,(char *)&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((param_5 & 1) == 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_78[0] = 0;
      FUN_71037a2270(plVar3,(ushort *)local_78,0,0);
    }
  }
  else {
    FUN_710377a120(param_1 + 0x58,"mel_info_stage_poke_stadium_time",param_3,param_4,uVar4,param_6,
                   param_7,param_8);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
  if (plVar3 != (long *)0x0) {
    local_78[0] = 0;
    FUN_71037a2270(plVar3,(ushort *)local_78,0,0);
  }
  uVar7 = 0x3f800000;
  if (iVar1 != 3) {
    uVar7 = 0;
  }
  uVar8 = 0x40000000;
  if (iVar1 != 4) {
    uVar8 = uVar7;
  }
  lVar6 = 0x180;
  if (iVar2 < 5) {
    lVar6 = 0x160;
  }
  FUN_710377b010((ulong)uVar8,param_1 + lVar6 + 0x158);
  return;
}

