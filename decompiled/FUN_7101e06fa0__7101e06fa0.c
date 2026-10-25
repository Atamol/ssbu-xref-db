// addr:      7101e06fa0
// offset:    0x1e06fa0
// name:      FUN_7101e06fa0
// mangled:   
// signature: undefined __cdecl FUN_7101e06fa0(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e06fa0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_a8;
  ulong local_a0;
  uint auStack_98 [2];
  char acStack_90 [64];
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776640(&local_40,param_1 + 0x510,(byte ****)"scr_sort",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if (*(char *)(param_1 + 0x59e) == '\0') {
    pcVar3 = "size_00";
  }
  else {
    pcVar3 = "size_12";
  }
  FUN_7103778300(0x3f800000,local_38,(long)pcVar3);
  FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_key",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_50,"mnu_spirits_sort_guide",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71025c6970(auStack_98,param_2);
  FUN_7103776910(&local_a8,(long)&local_40,(long ****)"set_txt_list",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_a8,acStack_90,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar2 = local_a0;
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

