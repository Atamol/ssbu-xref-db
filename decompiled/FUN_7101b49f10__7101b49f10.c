// addr:      7101b49f10
// offset:    0x1b49f10
// name:      FUN_7101b49f10
// mangled:   
// signature: undefined __cdecl FUN_7101b49f10(long param_1, undefined4 param_2, undefined8 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b49f10(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined2 uVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5e;
  undefined4 local_56;
  undefined2 local_52;
  undefined8 local_50;
  ushort local_24 [2];
  
  iVar5 = (int)param_3;
  local_70 = local_70 & 0xffffffffffffff00;
  uVar2 = local_50._6_2_;
  switch(param_2) {
  case 0:
    local_68 = 0x705f65676174735f;
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_50 = 0x6c616d726f6e5f;
    pcVar6 = (char *)((long)&local_70 + 1);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    break;
  case 1:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_68 = 0x705f65676174735f;
    local_50 = CONCAT17(local_50._7_1_,0x73736172675f);
    pcVar6 = (char *)((long)&local_70 + 1);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    break;
  case 2:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_68 = 0x705f65676174735f;
    local_50 = CONCAT17(local_50._7_1_,0x72657461775f);
    pcVar6 = (char *)((long)&local_70 + 1);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    break;
  case 3:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_68 = 0x705f65676174735f;
    local_50 = CONCAT17(local_50._7_1_,0x6572616c665f);
    pcVar6 = (char *)((long)&local_70 + 1);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    break;
  case 4:
    local_60 = 0x6b6f;
    local_5e = 0x7569646174735f65;
    local_56 = 0x79745f6d;
    local_52 = 0x6570;
    local_68 = 0x705f65676174735f;
    local_50 = CONCAT26(uVar2,0x6b636f725f);
    pcVar6 = (char *)((long)&local_70 + 1);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    break;
  default:
    goto switchD_7101b49f54_default;
  }
  local_52 = 0x6570;
  local_56 = 0x79745f6d;
  local_5e = 0x7569646174735f65;
  local_60 = 0x6b6f;
  local_68 = 0x705f65676174735f;
  local_70 = 0x6f666e695f6c656d;
switchD_7101b49f54_default:
  uVar4 = param_4;
  FUN_710377a120(param_1 + 0x38,(char *)&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((param_4 & 1) == 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x60) + 0x10);
    if (plVar3 != (long *)0x0) {
      local_24[0] = 0;
      local_24[1] = 0;
      FUN_71037a2270(plVar3,local_24,0,0);
    }
  }
  else {
    FUN_710377a120(param_1 + 0x58,"mel_info_stage_poke_stadium_time",param_3,uVar4,param_5,param_6,
                   param_7,param_8);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
  if (plVar3 != (long *)0x0) {
    local_24[0] = 0;
    local_24[1] = 0;
    FUN_71037a2270(plVar3,local_24,0,0);
  }
  if (7 < iVar5) {
    iVar5 = 8;
  }
  if (iVar5 < 3) {
    iVar5 = 2;
  }
  FUN_710377b010((ulong)(uint)(float)(iVar5 + -2),param_1 + 0x158);
  return;
}

