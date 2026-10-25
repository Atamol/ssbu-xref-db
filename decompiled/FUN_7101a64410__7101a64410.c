// addr:      7101a64410
// offset:    0x1a64410
// name:      FUN_7101a64410
// mangled:   
// signature: undefined __cdecl FUN_7101a64410(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a64410(long param_1,undefined1 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined **local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8e;
  undefined1 local_86;
  undefined **local_60;
  undefined8 *local_58;
  undefined **local_50;
  undefined8 *local_48;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776640(&local_40,**(long **)(param_1 + 0x148) + 8,(byte ****)"scr_sort",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (local_58 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ***)&SUB_00000020;
      param_3 = (long ****)&local_a8;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar3 & 1) != 0) &&
         (local_58 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         local_58 != (undefined8 *)0x0)) goto LAB_7101a644b8;
    }
    local_58 = (undefined8 *)0x0;
  }
LAB_7101a644b8:
  puVar2 = local_48;
  local_58[2] = 0;
  local_58[3] = 0;
  *local_58 = 0;
  local_58[1] = 0;
  *local_58 = *local_48;
  local_58[1] = local_48[1];
  local_58[2] = local_48[2];
  local_58[3] = local_48[3];
  FUN_710337cef0(&local_60,0x80,(undefined **)param_3,param_4,param_5,param_6,param_7,param_8);
  puVar1 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  switch(param_2) {
  case 0:
    local_86 = 0;
    local_98 = 0x61635f73746e656e;
    local_90 = 0x6472;
    local_8e = 0x30305f74726f735f;
    uVar5 = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar6 = (byte *)((long)&local_a0 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    break;
  case 1:
    local_86 = 0;
    local_98 = 0x61635f73746e656e;
    local_90 = 0x6472;
    local_8e = 0x31305f74726f735f;
    uVar5 = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar6 = (byte *)((long)&local_a0 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    break;
  case 2:
    local_86 = 0;
    local_98 = 0x61635f73746e656e;
    local_90 = 0x6472;
    local_8e = 0x32305f74726f735f;
    uVar5 = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar6 = (byte *)((long)&local_a0 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    break;
  case 3:
    local_86 = 0;
    local_98 = 0x61635f73746e656e;
    local_90 = 0x6472;
    local_8e = 0x33305f74726f735f;
    uVar5 = 0x811c9dc5;
    uVar7 = 0x6d;
    pbVar6 = (byte *)((long)&local_a0 + 1);
    do {
      uVar5 = uVar5 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    break;
  default:
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_a8 = (long ***)0x0;
    goto LAB_7101a64744;
  }
  local_86 = 0;
  local_90 = 0x6472;
  local_98 = 0x61635f73746e656e;
  local_a0 = 0x6f70706f5f756e6d;
  local_a8 = (long ***)CONCAT44(0x1a,uVar5);
LAB_7101a64744:
  FUN_7103776910(&local_b8,(long)&local_40,(long ****)"set_txt_list",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_b8,(char *)&local_a0,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_b0;
  local_b8 = &PTR_FUN_710523d9a8;
  local_b0 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  uVar3 = local_38;
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  return;
}

