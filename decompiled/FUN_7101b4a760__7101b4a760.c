// addr:      7101b4a760
// offset:    0x1b4a760
// name:      FUN_7101b4a760
// mangled:   
// signature: undefined __cdecl FUN_7101b4a760(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, ulong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b4a760(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_66;
  undefined4 local_5e;
  undefined2 local_5a;
  undefined8 local_58;
  ushort local_34 [2];
  
  iVar4 = (int)param_4;
  iVar3 = (int)param_3;
  local_78 = local_78 & 0xffffffffffffff00;
  uVar5 = local_58._6_2_;
  switch(param_2) {
  case 0:
    local_70 = 0x705f65676174735f;
    local_68 = 0x6b6f;
    local_66 = 0x7569646174735f65;
    local_5e = 0x79745f6d;
    local_5a = 0x6570;
    local_58 = 0x6c616d726f6e5f;
    pcVar8 = (char *)((long)&local_78 + 1);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    break;
  case 1:
    local_68 = 0x6b6f;
    local_66 = 0x7569646174735f65;
    local_5e = 0x79745f6d;
    local_5a = 0x6570;
    local_70 = 0x705f65676174735f;
    local_58 = CONCAT17(local_58._7_1_,0x73736172675f);
    pcVar8 = (char *)((long)&local_78 + 1);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    break;
  case 2:
    local_68 = 0x6b6f;
    local_66 = 0x7569646174735f65;
    local_5e = 0x79745f6d;
    local_5a = 0x6570;
    local_70 = 0x705f65676174735f;
    local_58 = CONCAT17(local_58._7_1_,0x72657461775f);
    pcVar8 = (char *)((long)&local_78 + 1);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    break;
  case 3:
    local_68 = 0x6b6f;
    local_66 = 0x7569646174735f65;
    local_5e = 0x79745f6d;
    local_5a = 0x6570;
    local_70 = 0x705f65676174735f;
    local_58 = CONCAT17(local_58._7_1_,0x6572616c665f);
    pcVar8 = (char *)((long)&local_78 + 1);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    break;
  case 4:
    local_68 = 0x6b6f;
    local_66 = 0x7569646174735f65;
    local_5e = 0x79745f6d;
    local_5a = 0x6570;
    local_70 = 0x705f65676174735f;
    local_58 = CONCAT26(uVar5,0x6b636f725f);
    pcVar8 = (char *)((long)&local_78 + 1);
    do {
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
    break;
  default:
    goto switchD_7101b4a7a8_default;
  }
  local_5a = 0x6570;
  local_5e = 0x79745f6d;
  local_66 = 0x7569646174735f65;
  local_68 = 0x6b6f;
  local_70 = 0x705f65676174735f;
  local_78 = 0x6f666e695f6c656d;
switchD_7101b4a7a8_default:
  uVar7 = param_5;
  FUN_710377a120(param_1 + 0x38,(char *)&local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((param_5 & 1) == 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x60) + 0x10);
    if (plVar6 != (long *)0x0) {
      local_34[0] = 0;
      local_34[1] = 0;
      FUN_71037a2270(plVar6,local_34,0,0);
    }
  }
  else {
    FUN_710377a120(param_1 + 0x58,"mel_info_stage_poke_stadium_time",param_3,param_4,uVar7,param_6,
                   param_7,param_8);
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
  if (plVar6 != (long *)0x0) {
    local_34[0] = 0;
    local_34[1] = 0;
    FUN_71037a2270(plVar6,local_34,0,0);
  }
  uVar9 = 0x3f800000;
  if (iVar3 != 3) {
    uVar9 = 0;
  }
  uVar10 = 0x40000000;
  if (iVar3 != 4) {
    uVar10 = uVar9;
  }
  lVar1 = 0x170;
  if (iVar4 < 5) {
    lVar1 = 0x150;
  }
  FUN_710377b010((ulong)uVar10,param_1 + lVar1 + 0x158);
  return;
}

