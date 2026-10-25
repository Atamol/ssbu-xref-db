// addr:      7101ec57e0
// offset:    0x1ec57e0
// name:      FUN_7101ec57e0
// mangled:   
// signature: undefined __cdecl FUN_7101ec57e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ec57e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5e;
  undefined4 local_56;
  undefined2 local_52;
  ulong local_50;
  undefined2 local_48;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776640(&local_78,param_1,(byte ****)"set_parts_keyhelp_00",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_30,(long)&local_78,(long ****)"set_txt_icon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  uVar1 = local_70;
  local_78 = &PTR_FUN_710523d988;
  local_70 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  uVar3 = 0x811c9dc5;
  local_50 = local_50 & 0xffffffffffffff00;
  local_68 = 0x64655f6574616572;
  local_60 = 0x7469;
  local_5e = 0x79616c707369645f;
  local_56 = 0x6975675f;
  local_52 = 0x6564;
  uVar6 = 0x6d;
  pbVar4 = (byte *)((long)&local_70 + 1);
  uVar5 = uVar3;
  do {
    uVar5 = uVar5 * 0x89 ^ uVar6;
    uVar6 = (uint)*pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (uVar6 != 0);
  local_78 = (undefined **)CONCAT44(0x20,uVar5);
  if ((*(int *)(*(long *)(DAT_7105329d78 + 8) + 0x750) == 1) &&
     (*(int *)(*(long *)(DAT_7105329d78 + 8) + 0x5d8) == 0)) {
    local_68 = 0x64655f6574616572;
    local_50 = 0x6e61687466656c5f;
    local_60 = 0x7469;
    local_48 = 100;
    uVar5 = 0x6d;
    local_5e = 0x79616c707369645f;
    local_56 = 0x6975675f;
    local_52 = 0x6564;
    pbVar4 = (byte *)((long)&local_70 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    local_78 = (undefined **)CONCAT44(0x29,uVar3);
  }
  local_52 = 0x6564;
  local_56 = 0x6975675f;
  local_5e = 0x79616c707369645f;
  local_60 = 0x7469;
  local_68 = 0x64655f6574616572;
  local_70 = 0x636774735f756e6d;
  FUN_710377a120((long)&local_30,(char *)&local_70,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  return;
}

