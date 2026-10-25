// addr:      7101ddc3a0
// offset:    0x1ddc3a0
// name:      FUN_7101ddc3a0
// mangled:   
// signature: undefined __cdecl FUN_7101ddc3a0(long param_1, undefined1 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ddc3a0(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_98;
  byte local_90 [64];
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  uVar7 = 0x811c9dc5;
  FUN_7103776640(&local_40,param_1 + 0x18,(byte ****)"scr_sort",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_50,"mnu_spirits_sort_guide",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = uVar7;
  switch(param_2) {
  case 0:
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x38315f;
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_d8 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    break;
  case 1:
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x33305f;
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_d8 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    break;
  case 2:
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x34305f;
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_d8 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    break;
  case 3:
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x32305f;
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_d8 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    break;
  case 4:
    local_d0 = 0x74726f735f737469;
    local_c8 = 0x32325f;
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_d8 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    break;
  default:
    bVar2 = 0;
    local_d8 = local_d8 & 0xffffffffffffff00;
    local_e0 = (undefined **)0x0;
    goto LAB_7101ddc640;
  }
  local_d0 = 0x74726f735f737469;
  local_d8 = 0x726970735f756e6d;
  local_e0 = (undefined **)CONCAT44(0x13,uVar3);
  bVar2 = 0x6d;
LAB_7101ddc640:
  uVar5 = 0;
  local_98 = 0;
  do {
    if (bVar2 == 0) {
LAB_7101ddc69c:
      local_90[uVar5 & 0xffffffff] = 0;
      uVar3 = (uint)local_90[0];
      local_98 = uVar5 << 0x20;
      if (local_90[0] != 0) {
        pbVar4 = local_90;
        do {
          pbVar4 = pbVar4 + 1;
          uVar7 = uVar7 * 0x89 ^ uVar3;
          uVar3 = (uint)*pbVar4;
        } while (uVar3 != 0);
      }
      local_98 = CONCAT44((int)uVar5,uVar7);
      FUN_7103776910(&local_e0,(long)&local_40,(long ****)"set_txt_list",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_e0,(char *)local_90,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      uVar5 = local_d8;
      local_e0 = &PTR_FUN_710523d9a8;
      local_d8 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      uVar5 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      uVar5 = local_38;
      local_40 = &PTR_FUN_710523d988;
      local_38 = 0;
      if (uVar5 != 0) {
        uVar1 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar1 != 0) {
          FUN_710392eb40(uVar1);
        }
        FUN_710392eb40(uVar5);
      }
      return;
    }
    local_90[uVar5] = bVar2;
    if (0x3e < (int)uVar5 + 1U) {
      uVar5 = (ulong)((int)uVar5 + 1);
      goto LAB_7101ddc69c;
    }
    bVar2 = *(byte *)((long)&local_d8 + uVar5 + 1);
    if (bVar2 == 0) {
      uVar5 = uVar5 + 1;
      goto LAB_7101ddc69c;
    }
    local_90[uVar5 + 1] = bVar2;
    bVar2 = *(byte *)((long)&local_d8 + uVar5 + 2);
    uVar5 = uVar5 + 2;
  } while( true );
}

