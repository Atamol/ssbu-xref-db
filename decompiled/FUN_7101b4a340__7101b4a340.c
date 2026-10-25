// addr:      7101b4a340
// offset:    0x1b4a340
// name:      FUN_7101b4a340
// mangled:   
// signature: undefined __cdecl FUN_7101b4a340(long param_1, undefined4 param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b4a340(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint local_78 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5e;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  undefined2 local_48;
  
  iVar3 = (int)param_3;
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
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
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
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
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
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
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
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
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
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    break;
  default:
    goto switchD_7101b4a384_default;
  }
  local_52 = 0x6570;
  local_56 = 0x79745f6d;
  local_5e = 0x7569646174735f65;
  local_60 = 0x6b6f;
  local_68 = 0x705f65676174735f;
  local_70 = 0x6f666e695f6c656d;
switchD_7101b4a384_default:
  uVar2 = param_4;
  FUN_710377a120(param_1 + 0x38,(char *)&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((param_4 & 1) == 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x60) + 0x10);
    if (plVar1 != (long *)0x0) {
      local_78[0] = 0;
      FUN_71037a2270(plVar1,(ushort *)local_78,0,0);
    }
  }
  else {
    FUN_710377a120(param_1 + 0x58,"mel_info_stage_poke_stadium_time",param_3,uVar2,param_5,param_6,
                   param_7,param_8);
  }
  plVar1 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
  if (plVar1 != (long *)0x0) {
    local_78[0] = 0;
    FUN_71037a2270(plVar1,(ushort *)local_78,0,0);
  }
  if (7 < iVar3) {
    iVar3 = 8;
  }
  if (iVar3 < 3) {
    iVar3 = 2;
  }
  FUN_710377b010((ulong)(uint)(float)(iVar3 + -2),param_1 + 0x168);
  return;
}

